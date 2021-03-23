/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_types.h"
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::Foo>;
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

namespace apache { namespace thrift { namespace test {

Foo::Foo(const Foo& srcObj) {
  srcObj.field1_ref();
  __fbthrift_isDeserialized_.field1 = true;
  __fbthrift_serializedData_.field1.clear();
  if (srcObj.field1) field1.reset(new ::std::string(*srcObj.field1));
  field2 = srcObj.field2;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.field2 = srcObj.__isset.field2;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  srcObj.field3_ref();
  __fbthrift_isDeserialized_.field3 = true;
  __fbthrift_serializedData_.field3.clear();
  field3 = srcObj.field3;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.field3 = srcObj.__isset.field3;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  field4 = srcObj.field4;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.field4 = srcObj.__isset.field4;
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

Foo& Foo::operator=(const Foo& src) {
  Foo tmp(src);
  swap(*this, tmp);
  return *this;
}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Foo::Foo(apache::thrift::FragileConstructor, std::unique_ptr<::std::string> field1__arg, ::std::string field2__arg, ::std::vector<::std::int32_t> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    field1(std::move(field1__arg)),
    field2(std::move(field2__arg)),
    field3(std::move(field3__arg)),
    field4(std::move(field4__arg)) {
  __isset.field2 = true;
  __isset.field3 = true;
  __isset.field4 = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Foo::__clear() {
  // clear all fields
  field1 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  field2 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  field3.clear();
  field4.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Foo::operator==(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!!lhs.field1 != !!rhs.field1) {
    return false;
  }
  if (!!lhs.field1) {
    if (lhs.field1 != rhs.field1 && !(*lhs.field1 == *rhs.field1)) {
      return false;
    }
  }
  if (!(lhs.field2 == rhs.field2)) {
    return false;
  }
  if (!(lhs.field3 == rhs.field3)) {
    return false;
  }
  if (!(lhs.field4 == rhs.field4)) {
    return false;
  }
  return true;
}

bool Foo::operator<(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!!lhs.field1 != !!rhs.field1) {
    return !!lhs.field1 < !!rhs.field1;
  }
  if (!!lhs.field1) {
    if (lhs.field1 != rhs.field1 && !(*lhs.field1 == *rhs.field1)) {
      return *lhs.field1 < *rhs.field1;
    }
  }
  if (!(lhs.field2 == rhs.field2)) {
    return lhs.field2 < rhs.field2;
  }
  if (!(lhs.field3 == rhs.field3)) {
    return lhs.field3 < rhs.field3;
  }
  if (!(lhs.field4 == rhs.field4)) {
    return lhs.field4 < rhs.field4;
  }
  return false;
}

const ::std::vector<::std::int32_t>& Foo::get_field4() const& {
  return field4;
}

::std::vector<::std::int32_t> Foo::get_field4() && {
  return std::move(field4);
}


void swap(Foo& a, Foo& b) {
  using ::std::swap;
  swap(a.field1, b.field1);
  swap(a.field2_ref().value(), b.field2_ref().value());
  swap(a.field3_ref().value(), b.field3_ref().value());
  swap(a.field4_ref().value(), b.field4_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test
