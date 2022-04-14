/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyUnionPatch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyUnionPatch");
  private static final TField OPTION1_FIELD_DESC = new TField("option1", TType.STRUCT, (short)1);
  private static final TField OPTION2_FIELD_DESC = new TField("option2", TType.STRUCT, (short)2);

  public final StringPatch option1;
  public final I32Patch option2;
  public static final int OPTION1 = 1;
  public static final int OPTION2 = 2;

  public MyUnionPatch(
      StringPatch option1,
      I32Patch option2) {
    this.option1 = option1;
    this.option2 = option2;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyUnionPatch(MyUnionPatch other) {
    if (other.isSetOption1()) {
      this.option1 = TBaseHelper.deepCopy(other.option1);
    } else {
      this.option1 = null;
    }
    if (other.isSetOption2()) {
      this.option2 = TBaseHelper.deepCopy(other.option2);
    } else {
      this.option2 = null;
    }
  }

  public MyUnionPatch deepCopy() {
    return new MyUnionPatch(this);
  }

  public StringPatch getOption1() {
    return this.option1;
  }

  // Returns true if field option1 is set (has been assigned a value) and false otherwise
  public boolean isSetOption1() {
    return this.option1 != null;
  }

  public I32Patch getOption2() {
    return this.option2;
  }

  // Returns true if field option2 is set (has been assigned a value) and false otherwise
  public boolean isSetOption2() {
    return this.option2 != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyUnionPatch))
      return false;
    MyUnionPatch that = (MyUnionPatch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetOption1(), that.isSetOption1(), this.option1, that.option1)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetOption2(), that.isSetOption2(), this.option2, that.option2)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {option1, option2});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyUnionPatch deserialize(TProtocol iprot) throws TException {
    StringPatch tmp_option1 = null;
    I32Patch tmp_option2 = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case OPTION1:
          if (__field.type == TType.STRUCT) {
            tmp_option1 = StringPatch.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case OPTION2:
          if (__field.type == TType.STRUCT) {
            tmp_option2 = I32Patch.deserialize(iprot);
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

    MyUnionPatch _that;
    _that = new MyUnionPatch(
      tmp_option1
      ,tmp_option2
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.option1 != null) {
      oprot.writeFieldBegin(OPTION1_FIELD_DESC);
      this.option1.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.option2 != null) {
      oprot.writeFieldBegin(OPTION2_FIELD_DESC);
      this.option2.write(oprot);
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
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

