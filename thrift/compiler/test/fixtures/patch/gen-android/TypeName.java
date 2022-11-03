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

/**
 * Uniquely identifies a Thrift type.
 */
@SuppressWarnings({ "unused", "serial", "unchecked" })
public class TypeName extends TUnion<TypeName> {
  private static final TStruct STRUCT_DESC = new TStruct("TypeName");
  private static final TField BOOL_TYPE_FIELD_DESC = new TField("boolType", TType.I32, (short)1);
  private static final TField BYTE_TYPE_FIELD_DESC = new TField("byteType", TType.I32, (short)2);
  private static final TField I16_TYPE_FIELD_DESC = new TField("i16Type", TType.I32, (short)3);
  private static final TField I32_TYPE_FIELD_DESC = new TField("i32Type", TType.I32, (short)4);
  private static final TField I64_TYPE_FIELD_DESC = new TField("i64Type", TType.I32, (short)5);
  private static final TField FLOAT_TYPE_FIELD_DESC = new TField("floatType", TType.I32, (short)6);
  private static final TField DOUBLE_TYPE_FIELD_DESC = new TField("doubleType", TType.I32, (short)7);
  private static final TField STRING_TYPE_FIELD_DESC = new TField("stringType", TType.I32, (short)8);
  private static final TField BINARY_TYPE_FIELD_DESC = new TField("binaryType", TType.I32, (short)9);
  private static final TField ENUM_TYPE_FIELD_DESC = new TField("enumType", TType.STRUCT, (short)10);
  private static final TField TYPEDEF_TYPE_FIELD_DESC = new TField("typedefType", TType.STRUCT, (short)17);
  private static final TField STRUCT_TYPE_FIELD_DESC = new TField("structType", TType.STRUCT, (short)11);
  private static final TField UNION_TYPE_FIELD_DESC = new TField("unionType", TType.STRUCT, (short)12);
  private static final TField EXCEPTION_TYPE_FIELD_DESC = new TField("exceptionType", TType.STRUCT, (short)13);
  private static final TField LIST_TYPE_FIELD_DESC = new TField("listType", TType.I32, (short)14);
  private static final TField SET_TYPE_FIELD_DESC = new TField("setType", TType.I32, (short)15);
  private static final TField MAP_TYPE_FIELD_DESC = new TField("mapType", TType.I32, (short)16);

  public static final int BOOLTYPE = 1;
  public static final int BYTETYPE = 2;
  public static final int I16TYPE = 3;
  public static final int I32TYPE = 4;
  public static final int I64TYPE = 5;
  public static final int FLOATTYPE = 6;
  public static final int DOUBLETYPE = 7;
  public static final int STRINGTYPE = 8;
  public static final int BINARYTYPE = 9;
  public static final int ENUMTYPE = 10;
  public static final int TYPEDEFTYPE = 17;
  public static final int STRUCTTYPE = 11;
  public static final int UNIONTYPE = 12;
  public static final int EXCEPTIONTYPE = 13;
  public static final int LISTTYPE = 14;
  public static final int SETTYPE = 15;
  public static final int MAPTYPE = 16;

  public static final Map<Integer, FieldMetaData> metaDataMap = new HashMap<>();

  public TypeName() {
    super();
  }

  public TypeName(int setField, Object __value) {
    super(setField, __value);
  }

  public TypeName(TypeName other) {
    super(other);
  }

  public TypeName deepCopy() {
    return new TypeName(this);
  }

  public static TypeName boolType(Void __value) {
    TypeName x = new TypeName();
    x.setBoolType(__value);
    return x;
  }

  public static TypeName byteType(Void __value) {
    TypeName x = new TypeName();
    x.setByteType(__value);
    return x;
  }

  public static TypeName i16Type(Void __value) {
    TypeName x = new TypeName();
    x.setI16Type(__value);
    return x;
  }

  public static TypeName i32Type(Void __value) {
    TypeName x = new TypeName();
    x.setI32Type(__value);
    return x;
  }

  public static TypeName i64Type(Void __value) {
    TypeName x = new TypeName();
    x.setI64Type(__value);
    return x;
  }

  public static TypeName floatType(Void __value) {
    TypeName x = new TypeName();
    x.setFloatType(__value);
    return x;
  }

  public static TypeName doubleType(Void __value) {
    TypeName x = new TypeName();
    x.setDoubleType(__value);
    return x;
  }

  public static TypeName stringType(Void __value) {
    TypeName x = new TypeName();
    x.setStringType(__value);
    return x;
  }

  public static TypeName binaryType(Void __value) {
    TypeName x = new TypeName();
    x.setBinaryType(__value);
    return x;
  }

  public static TypeName enumType(TypeUri __value) {
    TypeName x = new TypeName();
    x.setEnumType(__value);
    return x;
  }

  public static TypeName typedefType(TypeUri __value) {
    TypeName x = new TypeName();
    x.setTypedefType(__value);
    return x;
  }

  public static TypeName structType(TypeUri __value) {
    TypeName x = new TypeName();
    x.setStructType(__value);
    return x;
  }

  public static TypeName unionType(TypeUri __value) {
    TypeName x = new TypeName();
    x.setUnionType(__value);
    return x;
  }

  public static TypeName exceptionType(TypeUri __value) {
    TypeName x = new TypeName();
    x.setExceptionType(__value);
    return x;
  }

  public static TypeName listType(Void __value) {
    TypeName x = new TypeName();
    x.setListType(__value);
    return x;
  }

  public static TypeName setType(Void __value) {
    TypeName x = new TypeName();
    x.setSetType(__value);
    return x;
  }

  public static TypeName mapType(Void __value) {
    TypeName x = new TypeName();
    x.setMapType(__value);
    return x;
  }


  @Override
  protected Object readValue(TProtocol iprot, TField __field) throws TException {
    switch (__field.id) {
      case BOOLTYPE:
        if (__field.type == BOOL_TYPE_FIELD_DESC.type) {
          Void boolType;
          boolType = Void.findByValue(iprot.readI32());
          return boolType;
        }
        break;
      case BYTETYPE:
        if (__field.type == BYTE_TYPE_FIELD_DESC.type) {
          Void byteType;
          byteType = Void.findByValue(iprot.readI32());
          return byteType;
        }
        break;
      case I16TYPE:
        if (__field.type == I16_TYPE_FIELD_DESC.type) {
          Void i16Type;
          i16Type = Void.findByValue(iprot.readI32());
          return i16Type;
        }
        break;
      case I32TYPE:
        if (__field.type == I32_TYPE_FIELD_DESC.type) {
          Void i32Type;
          i32Type = Void.findByValue(iprot.readI32());
          return i32Type;
        }
        break;
      case I64TYPE:
        if (__field.type == I64_TYPE_FIELD_DESC.type) {
          Void i64Type;
          i64Type = Void.findByValue(iprot.readI32());
          return i64Type;
        }
        break;
      case FLOATTYPE:
        if (__field.type == FLOAT_TYPE_FIELD_DESC.type) {
          Void floatType;
          floatType = Void.findByValue(iprot.readI32());
          return floatType;
        }
        break;
      case DOUBLETYPE:
        if (__field.type == DOUBLE_TYPE_FIELD_DESC.type) {
          Void doubleType;
          doubleType = Void.findByValue(iprot.readI32());
          return doubleType;
        }
        break;
      case STRINGTYPE:
        if (__field.type == STRING_TYPE_FIELD_DESC.type) {
          Void stringType;
          stringType = Void.findByValue(iprot.readI32());
          return stringType;
        }
        break;
      case BINARYTYPE:
        if (__field.type == BINARY_TYPE_FIELD_DESC.type) {
          Void binaryType;
          binaryType = Void.findByValue(iprot.readI32());
          return binaryType;
        }
        break;
      case ENUMTYPE:
        if (__field.type == ENUM_TYPE_FIELD_DESC.type) {
          TypeUri enumType;
          enumType = new TypeUri();
          enumType.read(iprot);
          return enumType;
        }
        break;
      case TYPEDEFTYPE:
        if (__field.type == TYPEDEF_TYPE_FIELD_DESC.type) {
          TypeUri typedefType;
          typedefType = new TypeUri();
          typedefType.read(iprot);
          return typedefType;
        }
        break;
      case STRUCTTYPE:
        if (__field.type == STRUCT_TYPE_FIELD_DESC.type) {
          TypeUri structType;
          structType = new TypeUri();
          structType.read(iprot);
          return structType;
        }
        break;
      case UNIONTYPE:
        if (__field.type == UNION_TYPE_FIELD_DESC.type) {
          TypeUri unionType;
          unionType = new TypeUri();
          unionType.read(iprot);
          return unionType;
        }
        break;
      case EXCEPTIONTYPE:
        if (__field.type == EXCEPTION_TYPE_FIELD_DESC.type) {
          TypeUri exceptionType;
          exceptionType = new TypeUri();
          exceptionType.read(iprot);
          return exceptionType;
        }
        break;
      case LISTTYPE:
        if (__field.type == LIST_TYPE_FIELD_DESC.type) {
          Void listType;
          listType = Void.findByValue(iprot.readI32());
          return listType;
        }
        break;
      case SETTYPE:
        if (__field.type == SET_TYPE_FIELD_DESC.type) {
          Void setType;
          setType = Void.findByValue(iprot.readI32());
          return setType;
        }
        break;
      case MAPTYPE:
        if (__field.type == MAP_TYPE_FIELD_DESC.type) {
          Void mapType;
          mapType = Void.findByValue(iprot.readI32());
          return mapType;
        }
        break;
    }
    TProtocolUtil.skip(iprot, __field.type);
    return null;
  }

  @Override
  protected void writeValue(TProtocol oprot, short setField, Object __value) throws TException {
    switch (setField) {
      case BOOLTYPE:
        Void boolType = (Void)getFieldValue();
        oprot.writeI32(boolType == null ? 0 : boolType.getValue());
        return;
      case BYTETYPE:
        Void byteType = (Void)getFieldValue();
        oprot.writeI32(byteType == null ? 0 : byteType.getValue());
        return;
      case I16TYPE:
        Void i16Type = (Void)getFieldValue();
        oprot.writeI32(i16Type == null ? 0 : i16Type.getValue());
        return;
      case I32TYPE:
        Void i32Type = (Void)getFieldValue();
        oprot.writeI32(i32Type == null ? 0 : i32Type.getValue());
        return;
      case I64TYPE:
        Void i64Type = (Void)getFieldValue();
        oprot.writeI32(i64Type == null ? 0 : i64Type.getValue());
        return;
      case FLOATTYPE:
        Void floatType = (Void)getFieldValue();
        oprot.writeI32(floatType == null ? 0 : floatType.getValue());
        return;
      case DOUBLETYPE:
        Void doubleType = (Void)getFieldValue();
        oprot.writeI32(doubleType == null ? 0 : doubleType.getValue());
        return;
      case STRINGTYPE:
        Void stringType = (Void)getFieldValue();
        oprot.writeI32(stringType == null ? 0 : stringType.getValue());
        return;
      case BINARYTYPE:
        Void binaryType = (Void)getFieldValue();
        oprot.writeI32(binaryType == null ? 0 : binaryType.getValue());
        return;
      case ENUMTYPE:
        TypeUri enumType = (TypeUri)getFieldValue();
        enumType.write(oprot);
        return;
      case TYPEDEFTYPE:
        TypeUri typedefType = (TypeUri)getFieldValue();
        typedefType.write(oprot);
        return;
      case STRUCTTYPE:
        TypeUri structType = (TypeUri)getFieldValue();
        structType.write(oprot);
        return;
      case UNIONTYPE:
        TypeUri unionType = (TypeUri)getFieldValue();
        unionType.write(oprot);
        return;
      case EXCEPTIONTYPE:
        TypeUri exceptionType = (TypeUri)getFieldValue();
        exceptionType.write(oprot);
        return;
      case LISTTYPE:
        Void listType = (Void)getFieldValue();
        oprot.writeI32(listType == null ? 0 : listType.getValue());
        return;
      case SETTYPE:
        Void setType = (Void)getFieldValue();
        oprot.writeI32(setType == null ? 0 : setType.getValue());
        return;
      case MAPTYPE:
        Void mapType = (Void)getFieldValue();
        oprot.writeI32(mapType == null ? 0 : mapType.getValue());
        return;
      default:
        throw new IllegalStateException("Cannot write union with unknown field " + setField);
    }
  }

  @Override
  protected TField getFieldDesc(int setField) {
    switch (setField) {
      case BOOLTYPE:
        return BOOL_TYPE_FIELD_DESC;
      case BYTETYPE:
        return BYTE_TYPE_FIELD_DESC;
      case I16TYPE:
        return I16_TYPE_FIELD_DESC;
      case I32TYPE:
        return I32_TYPE_FIELD_DESC;
      case I64TYPE:
        return I64_TYPE_FIELD_DESC;
      case FLOATTYPE:
        return FLOAT_TYPE_FIELD_DESC;
      case DOUBLETYPE:
        return DOUBLE_TYPE_FIELD_DESC;
      case STRINGTYPE:
        return STRING_TYPE_FIELD_DESC;
      case BINARYTYPE:
        return BINARY_TYPE_FIELD_DESC;
      case ENUMTYPE:
        return ENUM_TYPE_FIELD_DESC;
      case TYPEDEFTYPE:
        return TYPEDEF_TYPE_FIELD_DESC;
      case STRUCTTYPE:
        return STRUCT_TYPE_FIELD_DESC;
      case UNIONTYPE:
        return UNION_TYPE_FIELD_DESC;
      case EXCEPTIONTYPE:
        return EXCEPTION_TYPE_FIELD_DESC;
      case LISTTYPE:
        return LIST_TYPE_FIELD_DESC;
      case SETTYPE:
        return SET_TYPE_FIELD_DESC;
      case MAPTYPE:
        return MAP_TYPE_FIELD_DESC;
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  protected TStruct getStructDesc() {
    return STRUCT_DESC;
  }

  @Override
  protected Map<Integer, FieldMetaData> getMetaDataMap() { return metaDataMap; }

  private Object __getValue(int expectedFieldId) {
    if (getSetField() == expectedFieldId) {
      return getFieldValue();
    } else {
      throw new RuntimeException("Cannot get field '" + getFieldDesc(expectedFieldId).name + "' because union is currently set to " + getFieldDesc(getSetField()).name);
    }
  }

  private void __setValue(int fieldId, Object __value) {
    if (__value == null) throw new NullPointerException();
    setField_ = fieldId;
    value_ = __value;
  }

  /**
   * True(1) or False(0)
   * 
   * @see Void
   */
  public Void getBoolType() {
    return (Void) __getValue(BOOLTYPE);
  }

  /**
   * True(1) or False(0)
   * 
   * @see Void
   */
  public void setBoolType(Void __value) {
    __setValue(BOOLTYPE, __value);
  }

  /**
   * 8-bit signed integer
   * 
   * @see Void
   */
  public Void getByteType() {
    return (Void) __getValue(BYTETYPE);
  }

  /**
   * 8-bit signed integer
   * 
   * @see Void
   */
  public void setByteType(Void __value) {
    __setValue(BYTETYPE, __value);
  }

  /**
   * 16-bit signed integer
   * 
   * @see Void
   */
  public Void getI16Type() {
    return (Void) __getValue(I16TYPE);
  }

  /**
   * 16-bit signed integer
   * 
   * @see Void
   */
  public void setI16Type(Void __value) {
    __setValue(I16TYPE, __value);
  }

  /**
   * 32-bit signed integer
   * 
   * @see Void
   */
  public Void getI32Type() {
    return (Void) __getValue(I32TYPE);
  }

  /**
   * 32-bit signed integer
   * 
   * @see Void
   */
  public void setI32Type(Void __value) {
    __setValue(I32TYPE, __value);
  }

  /**
   * 64-bit signed integer
   * 
   * @see Void
   */
  public Void getI64Type() {
    return (Void) __getValue(I64TYPE);
  }

  /**
   * 64-bit signed integer
   * 
   * @see Void
   */
  public void setI64Type(Void __value) {
    __setValue(I64TYPE, __value);
  }

  /**
   * 32-bit floating point
   * 
   * @see Void
   */
  public Void getFloatType() {
    return (Void) __getValue(FLOATTYPE);
  }

  /**
   * 32-bit floating point
   * 
   * @see Void
   */
  public void setFloatType(Void __value) {
    __setValue(FLOATTYPE, __value);
  }

  /**
   * 64-bit floating point
   * 
   * @see Void
   */
  public Void getDoubleType() {
    return (Void) __getValue(DOUBLETYPE);
  }

  /**
   * 64-bit floating point
   * 
   * @see Void
   */
  public void setDoubleType(Void __value) {
    __setValue(DOUBLETYPE, __value);
  }

  /**
   * UTF-8 encoded string
   * 
   * @see Void
   */
  public Void getStringType() {
    return (Void) __getValue(STRINGTYPE);
  }

  /**
   * UTF-8 encoded string
   * 
   * @see Void
   */
  public void setStringType(Void __value) {
    __setValue(STRINGTYPE, __value);
  }

  /**
   * Arbitrary byte string
   * 
   * @see Void
   */
  public Void getBinaryType() {
    return (Void) __getValue(BINARYTYPE);
  }

  /**
   * Arbitrary byte string
   * 
   * @see Void
   */
  public void setBinaryType(Void __value) {
    __setValue(BINARYTYPE, __value);
  }

  /**
   * 32-bit signed integer, with named values.
   */
  public TypeUri getEnumType() {
    return (TypeUri) __getValue(ENUMTYPE);
  }

  /**
   * 32-bit signed integer, with named values.
   */
  public void setEnumType(TypeUri __value) {
    __setValue(ENUMTYPE, __value);
  }

  /**
   * `typedef` definition
   */
  public TypeUri getTypedefType() {
    return (TypeUri) __getValue(TYPEDEFTYPE);
  }

  /**
   * `typedef` definition
   */
  public void setTypedefType(TypeUri __value) {
    __setValue(TYPEDEFTYPE, __value);
  }

  /**
   * `struct` definition
   */
  public TypeUri getStructType() {
    return (TypeUri) __getValue(STRUCTTYPE);
  }

  /**
   * `struct` definition
   */
  public void setStructType(TypeUri __value) {
    __setValue(STRUCTTYPE, __value);
  }

  /**
   * `union` definition
   */
  public TypeUri getUnionType() {
    return (TypeUri) __getValue(UNIONTYPE);
  }

  /**
   * `union` definition
   */
  public void setUnionType(TypeUri __value) {
    __setValue(UNIONTYPE, __value);
  }

  /**
   * `exception` definition
   */
  public TypeUri getExceptionType() {
    return (TypeUri) __getValue(EXCEPTIONTYPE);
  }

  /**
   * `exception` definition
   */
  public void setExceptionType(TypeUri __value) {
    __setValue(EXCEPTIONTYPE, __value);
  }

  /**
   * `list<V>` definition
   * 
   * @see Void
   */
  public Void getListType() {
    return (Void) __getValue(LISTTYPE);
  }

  /**
   * `list<V>` definition
   * 
   * @see Void
   */
  public void setListType(Void __value) {
    __setValue(LISTTYPE, __value);
  }

  /**
   * `set<K>` definition
   * 
   * @see Void
   */
  public Void getSetType() {
    return (Void) __getValue(SETTYPE);
  }

  /**
   * `set<K>` definition
   * 
   * @see Void
   */
  public void setSetType(Void __value) {
    __setValue(SETTYPE, __value);
  }

  /**
   * `map<K, V>` definition
   * 
   * @see Void
   */
  public Void getMapType() {
    return (Void) __getValue(MAPTYPE);
  }

  /**
   * `map<K, V>` definition
   * 
   * @see Void
   */
  public void setMapType(Void __value) {
    __setValue(MAPTYPE, __value);
  }

  public boolean equals(Object other) {
    if (other instanceof TypeName) {
      return equals((TypeName)other);
    } else {
      return false;
    }
  }

  public boolean equals(TypeName other) {
    return equalsNobinaryImpl(other);
  }


  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {getSetField(), getFieldValue()});
  }

}
