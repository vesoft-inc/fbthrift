/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.adapter;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class Service {

  public interface Iface {

    public int func(String arg1, String arg2, Foo arg3) throws TException;

  }

  public interface AsyncIface {

    public void func(String arg1, String arg2, Foo arg3, AsyncMethodCallback resultHandler) throws TException;

  }

  public static class Client extends EventHandlerBase implements Iface, TClientIf {
    public Client(TProtocol prot)
    {
      this(prot, prot);
    }

    public Client(TProtocol iprot, TProtocol oprot)
    {
      iprot_ = iprot;
      oprot_ = oprot;
    }

    protected TProtocol iprot_;
    protected TProtocol oprot_;

    protected int seqid_;

    @Override
    public TProtocol getInputProtocol()
    {
      return this.iprot_;
    }

    @Override
    public TProtocol getOutputProtocol()
    {
      return this.oprot_;
    }

    public int func(String arg1, String arg2, Foo arg3) throws TException
    {
      ContextStack ctx = getContextStack("Service.func", null);
      this.setContextStack(ctx);
      send_func(arg1, arg2, arg3);
      return recv_func();
    }

    public void send_func(String arg1, String arg2, Foo arg3) throws TException
    {
      ContextStack ctx = this.getContextStack();
      super.preWrite(ctx, "Service.func", null);
      oprot_.writeMessageBegin(new TMessage("func", TMessageType.CALL, seqid_));
      func_args args = new func_args();
      args.arg1 = arg1;
      args.arg2 = arg2;
      args.arg3 = arg3;
      args.write(oprot_);
      oprot_.writeMessageEnd();
      oprot_.getTransport().flush();
      super.postWrite(ctx, "Service.func", args);
      return;
    }

    public int recv_func() throws TException
    {
      ContextStack ctx = super.getContextStack();
      long bytes;
      TMessageType mtype;
      super.preRead(ctx, "Service.func");
      TMessage msg = iprot_.readMessageBegin();
      if (msg.type == TMessageType.EXCEPTION) {
        TApplicationException x = TApplicationException.read(iprot_);
        iprot_.readMessageEnd();
        throw x;
      }
      func_result result = new func_result();
      result.read(iprot_);
      iprot_.readMessageEnd();
      super.postRead(ctx, "Service.func", result);

      if (result.isSetSuccess()) {
        return result.success;
      }
      throw new TApplicationException(TApplicationException.MISSING_RESULT, "func failed: unknown result");
    }

  }
  public static class AsyncClient extends TAsyncClient implements AsyncIface {
    public static class Factory implements TAsyncClientFactory<AsyncClient> {
      private TAsyncClientManager clientManager;
      private TProtocolFactory protocolFactory;
      public Factory(TAsyncClientManager clientManager, TProtocolFactory protocolFactory) {
        this.clientManager = clientManager;
        this.protocolFactory = protocolFactory;
      }
      public AsyncClient getAsyncClient(TNonblockingTransport transport) {
        return new AsyncClient(protocolFactory, clientManager, transport);
      }
    }

    public AsyncClient(TProtocolFactory protocolFactory, TAsyncClientManager clientManager, TNonblockingTransport transport) {
      super(protocolFactory, clientManager, transport);
    }

    public void func(String arg1, String arg2, Foo arg3, AsyncMethodCallback resultHandler51) throws TException {
      checkReady();
      func_call method_call = new func_call(arg1, arg2, arg3, resultHandler51, this, ___protocolFactory, ___transport);
      this.___currentMethod = method_call;
      ___manager.call(method_call);
    }

    public static class func_call extends TAsyncMethodCall {
      private String arg1;
      private String arg2;
      private Foo arg3;
      public func_call(String arg1, String arg2, Foo arg3, AsyncMethodCallback resultHandler52, TAsyncClient client48, TProtocolFactory protocolFactory49, TNonblockingTransport transport50) throws TException {
        super(client48, protocolFactory49, transport50, resultHandler52, false);
        this.arg1 = arg1;
        this.arg2 = arg2;
        this.arg3 = arg3;
      }

      public void write_args(TProtocol prot) throws TException {
        prot.writeMessageBegin(new TMessage("func", TMessageType.CALL, 0));
        func_args args = new func_args();
        args.setArg1(arg1);
        args.setArg2(arg2);
        args.setArg3(arg3);
        args.write(prot);
        prot.writeMessageEnd();
      }

      public int getResult() throws TException {
        if (getState() != State.RESPONSE_READ) {
          throw new IllegalStateException("Method call not finished!");
        }
        TMemoryInputTransport memoryTransport = new TMemoryInputTransport(getFrameBuffer().array());
        TProtocol prot = super.client.getProtocolFactory().getProtocol(memoryTransport);
        return (new Client(prot)).recv_func();
      }
    }

  }

  public static class Processor implements TProcessor {
    private static final Logger LOGGER = LoggerFactory.getLogger(Processor.class.getName());
    public Processor(Iface iface)
    {
      iface_ = iface;
      event_handler_ = new TProcessorEventHandler(); // Empty handler
      processMap_.put("func", new func());
    }

    protected static interface ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException;
    }

    public void setEventHandler(TProcessorEventHandler handler) {
      this.event_handler_ = handler;
    }

    private Iface iface_;
    protected TProcessorEventHandler event_handler_;
    protected final HashMap<String,ProcessFunction> processMap_ = new HashMap<String,ProcessFunction>();

    public boolean process(TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
    {
      TMessage msg = iprot.readMessageBegin();
      ProcessFunction fn = processMap_.get(msg.name);
      if (fn == null) {
        TProtocolUtil.skip(iprot, TType.STRUCT);
        iprot.readMessageEnd();
        TApplicationException x = new TApplicationException(TApplicationException.UNKNOWN_METHOD, "Invalid method name: '"+msg.name+"'");
        oprot.writeMessageBegin(new TMessage(msg.name, TMessageType.EXCEPTION, msg.seqid));
        x.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        return true;
      }
      fn.process(msg.seqid, iprot, oprot, server_ctx);
      return true;
    }

    private class func implements ProcessFunction {
      public void process(int seqid, TProtocol iprot, TProtocol oprot, TConnectionContext server_ctx) throws TException
      {
        Object handler_ctx = event_handler_.getContext("Service.func", server_ctx);
        func_args args = new func_args();
        event_handler_.preRead(handler_ctx, "Service.func");
        args.read(iprot);
        iprot.readMessageEnd();
        event_handler_.postRead(handler_ctx, "Service.func", args);
        func_result result = new func_result();
        result.success = iface_.func(args.arg1, args.arg2, args.arg3);
        result.setSuccessIsSet(true);
        event_handler_.preWrite(handler_ctx, "Service.func", result);
        oprot.writeMessageBegin(new TMessage("func", TMessageType.REPLY, seqid));
        result.write(oprot);
        oprot.writeMessageEnd();
        oprot.getTransport().flush();
        event_handler_.postWrite(handler_ctx, "Service.func", result);
      }

    }

  }

  public static class func_args implements TBase, java.io.Serializable, Cloneable, Comparable<func_args>   {
    private static final TStruct STRUCT_DESC = new TStruct("func_args");
    private static final TField ARG1_FIELD_DESC = new TField("arg1", TType.STRING, (short)1);
    private static final TField ARG2_FIELD_DESC = new TField("arg2", TType.STRING, (short)2);
    private static final TField ARG3_FIELD_DESC = new TField("arg3", TType.STRUCT, (short)3);

    public String arg1;
    public String arg2;
    public Foo arg3;
    public static final int ARG1 = 1;
    public static final int ARG2 = 2;
    public static final int ARG3 = 3;

    // isset id assignments

    public static final Map<Integer, FieldMetaData> metaDataMap;

    static {
      Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
      tmpMetaDataMap.put(ARG1, new FieldMetaData("arg1", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.STRING)));
      tmpMetaDataMap.put(ARG2, new FieldMetaData("arg2", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.STRING)));
      tmpMetaDataMap.put(ARG3, new FieldMetaData("arg3", TFieldRequirementType.DEFAULT, 
          new StructMetaData(TType.STRUCT, Foo.class)));
      metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
    }

    static {
      FieldMetaData.addStructMetaDataMap(func_args.class, metaDataMap);
    }

    public func_args() {
    }

    public func_args(
        String arg1,
        String arg2,
        Foo arg3) {
      this();
      this.arg1 = arg1;
      this.arg2 = arg2;
      this.arg3 = arg3;
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public func_args(func_args other) {
      if (other.isSetArg1()) {
        this.arg1 = TBaseHelper.deepCopy(other.arg1);
      }
      if (other.isSetArg2()) {
        this.arg2 = TBaseHelper.deepCopy(other.arg2);
      }
      if (other.isSetArg3()) {
        this.arg3 = TBaseHelper.deepCopy(other.arg3);
      }
    }

    public func_args deepCopy() {
      return new func_args(this);
    }

    public String getArg1() {
      return this.arg1;
    }

    public func_args setArg1(String arg1) {
      this.arg1 = arg1;
      return this;
    }

    public void unsetArg1() {
      this.arg1 = null;
    }

    // Returns true if field arg1 is set (has been assigned a value) and false otherwise
    public boolean isSetArg1() {
      return this.arg1 != null;
    }

    public void setArg1IsSet(boolean __value) {
      if (!__value) {
        this.arg1 = null;
      }
    }

    public String getArg2() {
      return this.arg2;
    }

    public func_args setArg2(String arg2) {
      this.arg2 = arg2;
      return this;
    }

    public void unsetArg2() {
      this.arg2 = null;
    }

    // Returns true if field arg2 is set (has been assigned a value) and false otherwise
    public boolean isSetArg2() {
      return this.arg2 != null;
    }

    public void setArg2IsSet(boolean __value) {
      if (!__value) {
        this.arg2 = null;
      }
    }

    public Foo getArg3() {
      return this.arg3;
    }

    public func_args setArg3(Foo arg3) {
      this.arg3 = arg3;
      return this;
    }

    public void unsetArg3() {
      this.arg3 = null;
    }

    // Returns true if field arg3 is set (has been assigned a value) and false otherwise
    public boolean isSetArg3() {
      return this.arg3 != null;
    }

    public void setArg3IsSet(boolean __value) {
      if (!__value) {
        this.arg3 = null;
      }
    }

    public void setFieldValue(int fieldID, Object __value) {
      switch (fieldID) {
      case ARG1:
        if (__value == null) {
          unsetArg1();
        } else {
          setArg1((String)__value);
        }
        break;

      case ARG2:
        if (__value == null) {
          unsetArg2();
        } else {
          setArg2((String)__value);
        }
        break;

      case ARG3:
        if (__value == null) {
          unsetArg3();
        } else {
          setArg3((Foo)__value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    public Object getFieldValue(int fieldID) {
      switch (fieldID) {
      case ARG1:
        return getArg1();

      case ARG2:
        return getArg2();

      case ARG3:
        return getArg3();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof func_args))
        return false;
      func_args that = (func_args)_that;

      if (!TBaseHelper.equalsNobinary(this.isSetArg1(), that.isSetArg1(), this.arg1, that.arg1)) { return false; }

      if (!TBaseHelper.equalsNobinary(this.isSetArg2(), that.isSetArg2(), this.arg2, that.arg2)) { return false; }

      if (!TBaseHelper.equalsNobinary(this.isSetArg3(), that.isSetArg3(), this.arg3, that.arg3)) { return false; }

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {arg1, arg2, arg3});
    }

    @Override
    public int compareTo(func_args other) {
      if (other == null) {
        // See java.lang.Comparable docs
        throw new NullPointerException();
      }

      if (other == this) {
        return 0;
      }
      int lastComparison = 0;

      lastComparison = Boolean.valueOf(isSetArg1()).compareTo(other.isSetArg1());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(arg1, other.arg1);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      lastComparison = Boolean.valueOf(isSetArg2()).compareTo(other.isSetArg2());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(arg2, other.arg2);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      lastComparison = Boolean.valueOf(isSetArg3()).compareTo(other.isSetArg3());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(arg3, other.arg3);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      return 0;
    }

    public void read(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin(metaDataMap);
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          case ARG1:
            if (__field.type == TType.STRING) {
              this.arg1 = iprot.readString();
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          case ARG2:
            if (__field.type == TType.STRING) {
              this.arg2 = iprot.readString();
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          case ARG3:
            if (__field.type == TType.STRUCT) {
              this.arg3 = new Foo();
              this.arg3.read(iprot);
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();


      // check for required fields of primitive type, which can't be checked in the validate method
      validate();
    }

    public void write(TProtocol oprot) throws TException {
      validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (this.arg1 != null) {
        oprot.writeFieldBegin(ARG1_FIELD_DESC);
        oprot.writeString(this.arg1);
        oprot.writeFieldEnd();
      }
      if (this.arg2 != null) {
        oprot.writeFieldBegin(ARG2_FIELD_DESC);
        oprot.writeString(this.arg2);
        oprot.writeFieldEnd();
      }
      if (this.arg3 != null) {
        oprot.writeFieldBegin(ARG3_FIELD_DESC);
        this.arg3.write(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
      String newLine = prettyPrint ? "\n" : "";
      String space = prettyPrint ? " " : "";
      StringBuilder sb = new StringBuilder("func_args");
      sb.append(space);
      sb.append("(");
      sb.append(newLine);
      boolean first = true;

      sb.append(indentStr);
      sb.append("arg1");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getArg1() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getArg1(), indent + 1, prettyPrint));
      }
      first = false;
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("arg2");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getArg2() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getArg2(), indent + 1, prettyPrint));
      }
      first = false;
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("arg3");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getArg3() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getArg3(), indent + 1, prettyPrint));
      }
      first = false;
      sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

  public static class func_result implements TBase, java.io.Serializable, Cloneable, Comparable<func_result>   {
    private static final TStruct STRUCT_DESC = new TStruct("func_result");
    private static final TField SUCCESS_FIELD_DESC = new TField("success", TType.I32, (short)0);

    public int success;
    public static final int SUCCESS = 0;

    // isset id assignments
    private static final int __SUCCESS_ISSET_ID = 0;
    private BitSet __isset_bit_vector = new BitSet(1);

    public static final Map<Integer, FieldMetaData> metaDataMap;

    static {
      Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
      tmpMetaDataMap.put(SUCCESS, new FieldMetaData("success", TFieldRequirementType.DEFAULT, 
          new FieldValueMetaData(TType.I32)));
      metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
    }

    static {
      FieldMetaData.addStructMetaDataMap(func_result.class, metaDataMap);
    }

    public func_result() {
    }

    public func_result(
        int success) {
      this();
      this.success = success;
      setSuccessIsSet(true);
    }

    /**
     * Performs a deep copy on <i>other</i>.
     */
    public func_result(func_result other) {
      __isset_bit_vector.clear();
      __isset_bit_vector.or(other.__isset_bit_vector);
      this.success = TBaseHelper.deepCopy(other.success);
    }

    public func_result deepCopy() {
      return new func_result(this);
    }

    public int getSuccess() {
      return this.success;
    }

    public func_result setSuccess(int success) {
      this.success = success;
      setSuccessIsSet(true);
      return this;
    }

    public void unsetSuccess() {
      __isset_bit_vector.clear(__SUCCESS_ISSET_ID);
    }

    // Returns true if field success is set (has been assigned a value) and false otherwise
    public boolean isSetSuccess() {
      return __isset_bit_vector.get(__SUCCESS_ISSET_ID);
    }

    public void setSuccessIsSet(boolean __value) {
      __isset_bit_vector.set(__SUCCESS_ISSET_ID, __value);
    }

    public void setFieldValue(int fieldID, Object __value) {
      switch (fieldID) {
      case SUCCESS:
        if (__value == null) {
          unsetSuccess();
        } else {
          setSuccess((Integer)__value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    public Object getFieldValue(int fieldID) {
      switch (fieldID) {
      case SUCCESS:
        return new Integer(getSuccess());

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
      }
    }

    @Override
    public boolean equals(Object _that) {
      if (_that == null)
        return false;
      if (this == _that)
        return true;
      if (!(_that instanceof func_result))
        return false;
      func_result that = (func_result)_that;

      if (!TBaseHelper.equalsNobinary(this.success, that.success)) { return false; }

      return true;
    }

    @Override
    public int hashCode() {
      return Arrays.deepHashCode(new Object[] {success});
    }

    @Override
    public int compareTo(func_result other) {
      if (other == null) {
        // See java.lang.Comparable docs
        throw new NullPointerException();
      }

      if (other == this) {
        return 0;
      }
      int lastComparison = 0;

      lastComparison = Boolean.valueOf(isSetSuccess()).compareTo(other.isSetSuccess());
      if (lastComparison != 0) {
        return lastComparison;
      }
      lastComparison = TBaseHelper.compareTo(success, other.success);
      if (lastComparison != 0) { 
        return lastComparison;
      }
      return 0;
    }

    public void read(TProtocol iprot) throws TException {
      TField __field;
      iprot.readStructBegin(metaDataMap);
      while (true)
      {
        __field = iprot.readFieldBegin();
        if (__field.type == TType.STOP) { 
          break;
        }
        switch (__field.id)
        {
          case SUCCESS:
            if (__field.type == TType.I32) {
              this.success = iprot.readI32();
              setSuccessIsSet(true);
            } else { 
              TProtocolUtil.skip(iprot, __field.type);
            }
            break;
          default:
            TProtocolUtil.skip(iprot, __field.type);
            break;
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();


      // check for required fields of primitive type, which can't be checked in the validate method
      validate();
    }

    public void write(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);

      if (this.isSetSuccess()) {
        oprot.writeFieldBegin(SUCCESS_FIELD_DESC);
        oprot.writeI32(this.success);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    @Override
    public String toString() {
      return toString(1, true);
    }

    @Override
    public String toString(int indent, boolean prettyPrint) {
      String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
      String newLine = prettyPrint ? "\n" : "";
      String space = prettyPrint ? " " : "";
      StringBuilder sb = new StringBuilder("func_result");
      sb.append(space);
      sb.append("(");
      sb.append(newLine);
      boolean first = true;

      sb.append(indentStr);
      sb.append("success");
      sb.append(space);
      sb.append(":").append(space);
      sb.append(TBaseHelper.toString(this.getSuccess(), indent + 1, prettyPrint));
      first = false;
      sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
      sb.append(")");
      return sb.toString();
    }

    public void validate() throws TException {
      // check for required fields
    }

  }

}
