/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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
public class MergeFrom implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MergeFrom");
  private static final TField TYPE_FIELD_DESC = new TField("type", TType.STRING, (short)1);

  public final String type;
  public static final int TYPE = 1;

  public MergeFrom(
      String type) {
    this.type = type;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MergeFrom(MergeFrom other) {
    if (other.isSetType()) {
      this.type = TBaseHelper.deepCopy(other.type);
    } else {
      this.type = null;
    }
  }

  public MergeFrom deepCopy() {
    return new MergeFrom(this);
  }

  public String getType() {
    return this.type;
  }

  // Returns true if field type is set (has been assigned a value) and false otherwise
  public boolean isSetType() {
    return this.type != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MergeFrom))
      return false;
    MergeFrom that = (MergeFrom)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetType(), that.isSetType(), this.type, that.type)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {type});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MergeFrom deserialize(TProtocol iprot) throws TException {
    String tmp_type = null;
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
        case TYPE:
          if (__field.type == TType.STRING) {
            tmp_type = iprot.readString();
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

    MergeFrom _that;
    _that = new MergeFrom(
      tmp_type
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.type != null) {
      oprot.writeFieldBegin(TYPE_FIELD_DESC);
      oprot.writeString(this.type);
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

