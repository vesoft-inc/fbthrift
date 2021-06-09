/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::apache::thrift::test::Foo> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace test {

template <class Protocol_>
void Foo::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadStateWithIndex<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field1:
  if (auto iobuf = _readState.tryFastSkip(
          iprot,
          1,
          apache::thrift::protocol::T_STRING,
          apache::thrift::fixed_cost_skip_v<Protocol_,
                                            ::apache::thrift::type_class::string,
                                            ::std::string>)) {
    __fbthrift_serializedData_.field1 = *iobuf;
    __fbthrift_isDeserialized_.field1 = false;
  } else {
    __fbthrift_serializedData_.field1.clear();
    __fbthrift_isDeserialized_.field1 = true;
    auto ptr = ::apache::thrift::detail::make_mutable_smart_ptr<::std::unique_ptr<::std::string>>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, *ptr, _readState);
    this->field1 = std::move(ptr);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field2:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->field2, _readState);
    
  }
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  this->__isset.field2 = true;
  THRIFT_IGNORE_ISSET_USE_WARNING_END

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_field3:
  if (auto iobuf = _readState.tryFastSkip(
          iprot,
          3,
          apache::thrift::protocol::T_LIST,
          apache::thrift::fixed_cost_skip_v<Protocol_,
                                            ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>,
                                            ::std::vector<::std::int32_t>>)) {
    __fbthrift_serializedData_.field3 = *iobuf;
    __fbthrift_isDeserialized_.field3 = false;
  } else {
    __fbthrift_serializedData_.field3.clear();
    __fbthrift_isDeserialized_.field3 = true;
    _readState.beforeSubobject(iprot);
    this->field3 = ::std::vector<::std::int32_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::readWithContext(*iprot, this->field3, _readState);
    _readState.afterSubobject(iprot);
    
  }
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  this->__isset.field3 = true;
  THRIFT_IGNORE_ISSET_USE_WARNING_END

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_field4:
  {
    _readState.beforeSubobject(iprot);
    this->field4 = ::std::vector<::std::int32_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::readWithContext(*iprot, this->field4, _readState);
    _readState.afterSubobject(iprot);
    
  }
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  this->__isset.field4 = true;
  THRIFT_IGNORE_ISSET_USE_WARNING_END

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Foo>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field1;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field2;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_field3;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_field4;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Foo::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  {
    xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
    if (this->field1) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, *this->field1);
    }
  }
  {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->field2);
  }
  {
    xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_LIST, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::serializedSize<false>(*prot_, this->field3);
  }
  {
    xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_LIST, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::serializedSize<false>(*prot_, this->field4);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  {
    xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
    if (this->field1) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, *this->field1);
    }
  }
  {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->field2);
  }
  {
    xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_LIST, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::serializedSize<false>(*prot_, this->field3);
  }
  {
    xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_LIST, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::serializedSize<false>(*prot_, this->field4);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Foo");
  ::apache::thrift::detail::IndexWriter<Protocol_> indexWriter(prot_, xfer);
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = ::apache::thrift::detail::kSizeField.id;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 1, kPrevFieldId>(*prot_, "field1", previousFieldHasValue);
    previousFieldHasValue = true;
    indexWriter.recordFieldStart();
    if (this->field1) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, *this->field1);
    }
    written_lazy_field_field1:
    indexWriter.recordFieldEnd(::apache::thrift::type_class::string{}, *this->field1, 1);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 2, kPrevFieldId>(*prot_, "field2", previousFieldHasValue);
    previousFieldHasValue = true;
    indexWriter.recordFieldStart();
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->field2);
    indexWriter.recordFieldEnd(::apache::thrift::type_class::string{}, this->field2, 2);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_LIST, 3, kPrevFieldId>(*prot_, "field3", previousFieldHasValue);
    previousFieldHasValue = true;
    indexWriter.recordFieldStart();
    if constexpr (Protocol_::kHasIndexSupport()) {
      if (prot_->protocolType() == ::apache::thrift::protocol::T_COMPACT_PROTOCOL && !__fbthrift_isDeserialized_.field3) {
        xfer += prot_->writeRaw(__fbthrift_serializedData_.field3);
        goto written_lazy_field_field3;
      }
    }
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::write(*prot_, this->field3);
    written_lazy_field_field3:
    indexWriter.recordFieldEnd(::apache::thrift::type_class::list<::apache::thrift::type_class::integral>{}, this->field3, 3);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_LIST, 4, kPrevFieldId>(*prot_, "field4", previousFieldHasValue);
    previousFieldHasValue = true;
    indexWriter.recordFieldStart();
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int32_t>>::write(*prot_, this->field4);
    indexWriter.recordFieldEnd(::apache::thrift::type_class::list<::apache::thrift::type_class::integral>{}, this->field4, 4);
    xfer += prot_->writeFieldEnd();
  }
  indexWriter.finalize();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // apache::thrift::test
