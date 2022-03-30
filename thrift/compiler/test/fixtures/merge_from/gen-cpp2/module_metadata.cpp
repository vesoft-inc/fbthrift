/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/merge_from/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Fields>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.Fields", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Fields = res.first->second;
  module_Fields.name_ref() = "module.Fields";
  module_Fields.is_union_ref() = false;
  static const EncodedThriftField
  module_Fields_fields[] = {
    {100, "injected_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_Fields_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_Fields.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FieldsInjectedToEmptyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.FieldsInjectedToEmptyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FieldsInjectedToEmptyStruct = res.first->second;
  module_FieldsInjectedToEmptyStruct.name_ref() = "module.FieldsInjectedToEmptyStruct";
  module_FieldsInjectedToEmptyStruct.is_union_ref() = false;
  module_FieldsInjectedToEmptyStruct.structured_annotations_ref()->push_back(*cvStruct("meta.MergeFrom", {{"type", cvString(R"(Fields)")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FieldsInjectedToStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.FieldsInjectedToStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FieldsInjectedToStruct = res.first->second;
  module_FieldsInjectedToStruct.name_ref() = "module.FieldsInjectedToStruct";
  module_FieldsInjectedToStruct.is_union_ref() = false;
  static const EncodedThriftField
  module_FieldsInjectedToStruct_fields[] = {
    {1, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_FieldsInjectedToStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_FieldsInjectedToStruct.fields_ref()->push_back(std::move(field));
  }
  module_FieldsInjectedToStruct.structured_annotations_ref()->push_back(*cvStruct("meta.MergeFrom", {{"type", cvString(R"(Fields)")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FieldsInjectedWithIncludedStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.FieldsInjectedWithIncludedStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FieldsInjectedWithIncludedStruct = res.first->second;
  module_FieldsInjectedWithIncludedStruct.name_ref() = "module.FieldsInjectedWithIncludedStruct";
  module_FieldsInjectedWithIncludedStruct.is_union_ref() = false;
  static const EncodedThriftField
  module_FieldsInjectedWithIncludedStruct_fields[] = {
    {1, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_FieldsInjectedWithIncludedStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_FieldsInjectedWithIncludedStruct.fields_ref()->push_back(std::move(field));
  }
  module_FieldsInjectedWithIncludedStruct.structured_annotations_ref()->push_back(*cvStruct("meta.MergeFrom", {{"type", cvString(R"(foo.Fields)")}}).cv_struct_ref());
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
