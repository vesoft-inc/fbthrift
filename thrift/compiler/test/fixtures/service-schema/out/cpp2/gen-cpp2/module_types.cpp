/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/service-schema/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

folly::Range<::cpp2::Result const*> const TEnumTraits<::cpp2::Result>::values = folly::range(TEnumDataStorage<::cpp2::Result>::values);
folly::Range<std::string_view const*> const TEnumTraits<::cpp2::Result>::names = folly::range(TEnumDataStorage<::cpp2::Result>::names);

bool TEnumTraits<::cpp2::Result>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::Result>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::CustomException>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::CustomException>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece CustomException::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<CustomException>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece CustomException::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<CustomException>::name;
}

CustomException::CustomException(const CustomException&) = default;
CustomException& CustomException::operator=(const CustomException&) = default;
CustomException::CustomException() {
}


CustomException::~CustomException() {}

CustomException::CustomException([[maybe_unused]] CustomException&& other) noexcept :
    __fbthrift_field_name(std::move(other.__fbthrift_field_name)),
    __isset(other.__isset) {
}

CustomException& CustomException::operator=([[maybe_unused]] CustomException&& other) noexcept {
    this->__fbthrift_field_name = std::move(other.__fbthrift_field_name);
    __isset = other.__isset;
    return *this;
}


CustomException::CustomException(apache::thrift::FragileConstructor, ::std::string name__arg) :
    __fbthrift_field_name(std::move(name__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void CustomException::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void CustomException::__fbthrift_clear_terse_fields() {
}

bool CustomException::__fbthrift_is_empty() const {
  return false;
}

bool CustomException::operator==([[maybe_unused]] const CustomException& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool CustomException::operator<([[maybe_unused]] const CustomException& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] CustomException& a, [[maybe_unused]] CustomException& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_name, b.__fbthrift_field_name);
  swap(a.__isset, b.__isset);
}

template void CustomException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t CustomException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t CustomException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t CustomException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void CustomException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t CustomException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t CustomException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t CustomException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
namespace apache::thrift::detail::annotation {
}
