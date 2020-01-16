/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_metadata.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/include_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;

void GeneratedEnumMetadata<::apache::thrift::fixtures::types::has_bitwise_ops>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.has_bitwise_ops", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_has_bitwise_ops = res.first->second;
  module_has_bitwise_ops.name = "module.has_bitwise_ops";
  module_has_bitwise_ops.elements[0] = "none";
  module_has_bitwise_ops.elements[1] = "zero";
  module_has_bitwise_ops.elements[2] = "one";
  module_has_bitwise_ops.elements[4] = "two";
  module_has_bitwise_ops.elements[8] = "three";
}
void GeneratedEnumMetadata<::apache::thrift::fixtures::types::is_unscoped>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.is_unscoped", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_is_unscoped = res.first->second;
  module_is_unscoped.name = "module.is_unscoped";
  module_is_unscoped.elements[0] = "hello";
  module_is_unscoped.elements[1] = "world";
}
void GeneratedEnumMetadata<::apache::thrift::fixtures::types::MyForwardRefEnum>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyForwardRefEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_MyForwardRefEnum = res.first->second;
  module_MyForwardRefEnum.name = "module.MyForwardRefEnum";
  module_MyForwardRefEnum.elements[0] = "ZERO";
  module_MyForwardRefEnum.elements[12] = "NONZERO";
}
void GeneratedEnumMetadata<::apache::thrift::fixtures::types::MyEnumA>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyEnumA", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_MyEnumA = res.first->second;
  module_MyEnumA.name = "module.MyEnumA";
  module_MyEnumA.elements[1] = "fieldA";
  module_MyEnumA.elements[2] = "fieldB";
  module_MyEnumA.elements[4] = "fieldC";
}

} // apache::thrift::detail::metadata
