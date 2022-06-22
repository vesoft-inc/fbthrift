/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.adapter;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="DirectlyAdapted", builder=DirectlyAdapted.Builder.class)
public final class DirectlyAdapted implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public DirectlyAdapted(
        @com.facebook.swift.codec.ThriftField(value=1, name="field", requiredness=Requiredness.NONE) final int field
    ) {
        this.field = field;
    }
    
    @ThriftConstructor
    protected DirectlyAdapted() {
      this.field = 0;
    }
    
    public static class Builder {
    
        private int field = 0;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="field", requiredness=Requiredness.NONE)
        public Builder setField(int field) {
            this.field = field;
            return this;
        }
    
        public int getField() { return field; }
    
        public Builder() { }
        public Builder(DirectlyAdapted other) {
            this.field = other.field;
        }
    
        @ThriftConstructor
        public DirectlyAdapted build() {
            DirectlyAdapted result = new DirectlyAdapted (
                this.field
            );
            return result;
        }
    }
        public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("DirectlyAdapted");
    private final int field;
    public static final int _FIELD = 1;
    private static final TField FIELD_FIELD_DESC = new TField("field", TType.I32, (short)1);
    static {
      NAMES_TO_IDS.put("field", 1);
      THRIFT_NAMES_TO_IDS.put("field", 1);
      FIELD_METADATA.put(1, FIELD_FIELD_DESC);
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=1, name="field", requiredness=Requiredness.NONE)
    public int getField() { return field; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("field", field);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        DirectlyAdapted other = (DirectlyAdapted)o;
    
        return
            Objects.equals(field, other.field) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            field
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<DirectlyAdapted> asReader() {
      return DirectlyAdapted::read0;
    }
    
    public static DirectlyAdapted read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(DirectlyAdapted.NAMES_TO_IDS, DirectlyAdapted.THRIFT_NAMES_TO_IDS, DirectlyAdapted.FIELD_METADATA);
      DirectlyAdapted.Builder builder = new DirectlyAdapted.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _FIELD:
          if (__field.type == TType.I32) {
            int field = oprot.readI32();
            builder.setField(field);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(FIELD_FIELD_DESC);
      oprot.writeI32(this.field);
      oprot.writeFieldEnd();
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _DirectlyAdaptedLazy {
        private static final DirectlyAdapted _DEFAULT = new DirectlyAdapted.Builder().build();
    }
    
    public static DirectlyAdapted defaultInstance() {
        return  _DirectlyAdaptedLazy._DEFAULT;
    }
}
