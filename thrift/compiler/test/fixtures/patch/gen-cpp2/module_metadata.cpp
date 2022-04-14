/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h"

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
StructMetadata<::cpp2::MyData>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyData", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyData = res.first->second;
  module_MyData.name_ref() = "module.MyData";
  module_MyData.is_union_ref() = false;
  static const EncodedThriftField
  module_MyData_fields[] = {
    {1, "data1", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "data2", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyData_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyData.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name_ref() = "module.MyUnion";
  module_MyUnion.is_union_ref() = true;
  static const EncodedThriftField
  module_MyUnion_fields[] = {
    {1, "option1", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "option2", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyUnion.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyUnionPatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyUnionPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnionPatch = res.first->second;
  module_MyUnionPatch.name_ref() = "module.MyUnionPatch";
  module_MyUnionPatch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyUnionPatch_fields[] = {
    {1, "option1", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {2, "option2", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyUnionPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyUnionPatch.fields_ref()->push_back(std::move(field));
  }
  module_MyUnionPatch.structured_annotations_ref()->push_back(*cvStruct("meta.SetGenerated", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyUnionValuePatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyUnionValuePatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnionValuePatch = res.first->second;
  module_MyUnionValuePatch.name_ref() = "module.MyUnionValuePatch";
  module_MyUnionValuePatch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyUnionValuePatch_fields[] = {
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyUnionPatch>>("module.MyUnionPatch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", false, std::make_unique<Union<::cpp2::MyUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
    {5, "patchAfter", false, std::make_unique<Struct<::cpp2::MyUnionPatch>>("module.MyUnionPatch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyUnionValuePatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyUnionValuePatch.fields_ref()->push_back(std::move(field));
  }
  module_MyUnionValuePatch.structured_annotations_ref()->push_back(*cvStruct("meta.SetGenerated", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name_ref() = "module.MyStruct";
  module_MyStruct.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStruct_fields[] = {
    {1, "boolVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "byteVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "i16Val", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "i32Val", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "i64Val", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "floatVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "doubleVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "stringVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {9, "binaryVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {10, "structVal", false, std::make_unique<Struct<::cpp2::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {11, "optBoolVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {12, "optByteVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {13, "optI16Val", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {14, "optI32Val", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {15, "optI64Val", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {16, "optFloatVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {17, "optDoubleVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {18, "optStringVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {19, "optBinaryVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {20, "optStructVal", true, std::make_unique<Struct<::cpp2::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {21, "optListVal", true, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {22, "optSetVal", true, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {23, "optMapVal", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {30, "unionVal", false, std::make_unique<Union<::cpp2::MyUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyDataPatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyDataPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataPatch = res.first->second;
  module_MyDataPatch.name_ref() = "module.MyDataPatch";
  module_MyDataPatch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyDataPatch_fields[] = {
    {1, "data1", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {2, "data2", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyDataPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyDataPatch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyDataValuePatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyDataValuePatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataValuePatch = res.first->second;
  module_MyDataValuePatch.name_ref() = "module.MyDataValuePatch";
  module_MyDataValuePatch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyDataValuePatch_fields[] = {
    {1, "assign", true, std::make_unique<Struct<::cpp2::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyDataPatch>>("module.MyDataPatch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyDataValuePatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyDataValuePatch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::OptionalMyDataValuePatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.OptionalMyDataValuePatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_OptionalMyDataValuePatch = res.first->second;
  module_OptionalMyDataValuePatch.name_ref() = "module.OptionalMyDataValuePatch";
  module_OptionalMyDataValuePatch.is_union_ref() = false;
  static const EncodedThriftField
  module_OptionalMyDataValuePatch_fields[] = {
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyDataValuePatch>>("module.MyDataValuePatch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", true, std::make_unique<Struct<::cpp2::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {5, "patchAfter", false, std::make_unique<Struct<::cpp2::MyDataValuePatch>>("module.MyDataValuePatch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_OptionalMyDataValuePatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_OptionalMyDataValuePatch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStructField21Patch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStructField21Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructField21Patch = res.first->second;
  module_MyStructField21Patch.name_ref() = "module.MyStructField21Patch";
  module_MyStructField21Patch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStructField21Patch_fields[] = {
    {1, "assign", true, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "prepend", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "append", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStructField21Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStructField21Patch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::OptionalMyStructField21Patch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.OptionalMyStructField21Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_OptionalMyStructField21Patch = res.first->second;
  module_OptionalMyStructField21Patch.name_ref() = "module.OptionalMyStructField21Patch";
  module_OptionalMyStructField21Patch.is_union_ref() = false;
  static const EncodedThriftField
  module_OptionalMyStructField21Patch_fields[] = {
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyStructField21Patch>>("module.MyStructField21Patch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", true, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "patchAfter", false, std::make_unique<Struct<::cpp2::MyStructField21Patch>>("module.MyStructField21Patch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_OptionalMyStructField21Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_OptionalMyStructField21Patch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStructField22Patch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStructField22Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructField22Patch = res.first->second;
  module_MyStructField22Patch.name_ref() = "module.MyStructField22Patch";
  module_MyStructField22Patch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStructField22Patch_fields[] = {
    {1, "assign", true, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "remove", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "add", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStructField22Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStructField22Patch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::OptionalMyStructField22Patch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.OptionalMyStructField22Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_OptionalMyStructField22Patch = res.first->second;
  module_OptionalMyStructField22Patch.name_ref() = "module.OptionalMyStructField22Patch";
  module_OptionalMyStructField22Patch.is_union_ref() = false;
  static const EncodedThriftField
  module_OptionalMyStructField22Patch_fields[] = {
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyStructField22Patch>>("module.MyStructField22Patch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", true, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "patchAfter", false, std::make_unique<Struct<::cpp2::MyStructField22Patch>>("module.MyStructField22Patch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_OptionalMyStructField22Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_OptionalMyStructField22Patch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStructField23Patch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStructField23Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructField23Patch = res.first->second;
  module_MyStructField23Patch.name_ref() = "module.MyStructField23Patch";
  module_MyStructField23Patch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStructField23Patch_fields[] = {
    {1, "assign", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "put", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStructField23Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStructField23Patch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::OptionalMyStructField23Patch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.OptionalMyStructField23Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_OptionalMyStructField23Patch = res.first->second;
  module_OptionalMyStructField23Patch.name_ref() = "module.OptionalMyStructField23Patch";
  module_OptionalMyStructField23Patch.is_union_ref() = false;
  static const EncodedThriftField
  module_OptionalMyStructField23Patch_fields[] = {
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyStructField23Patch>>("module.MyStructField23Patch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "patchAfter", false, std::make_unique<Struct<::cpp2::MyStructField23Patch>>("module.MyStructField23Patch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_OptionalMyStructField23Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_OptionalMyStructField23Patch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStructPatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStructPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructPatch = res.first->second;
  module_MyStructPatch.name_ref() = "module.MyStructPatch";
  module_MyStructPatch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStructPatch_fields[] = {
    {1, "boolVal", false, std::make_unique<Struct<::apache::thrift::op::BoolPatchStruct>>("patch.BoolPatch"), std::vector<ThriftConstStruct>{}},
    {2, "byteVal", false, std::make_unique<Struct<::apache::thrift::op::BytePatchStruct>>("patch.BytePatch"), std::vector<ThriftConstStruct>{}},
    {3, "i16Val", false, std::make_unique<Struct<::apache::thrift::op::I16PatchStruct>>("patch.I16Patch"), std::vector<ThriftConstStruct>{}},
    {4, "i32Val", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
    {5, "i64Val", false, std::make_unique<Struct<::apache::thrift::op::I64PatchStruct>>("patch.I64Patch"), std::vector<ThriftConstStruct>{}},
    {6, "floatVal", false, std::make_unique<Struct<::apache::thrift::op::FloatPatchStruct>>("patch.FloatPatch"), std::vector<ThriftConstStruct>{}},
    {7, "doubleVal", false, std::make_unique<Struct<::apache::thrift::op::DoublePatchStruct>>("patch.DoublePatch"), std::vector<ThriftConstStruct>{}},
    {8, "stringVal", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {9, "binaryVal", false, std::make_unique<Struct<::apache::thrift::op::BinaryPatchStruct>>("patch.BinaryPatch"), std::vector<ThriftConstStruct>{}},
    {10, "structVal", false, std::make_unique<Struct<::cpp2::MyDataValuePatch>>("module.MyDataValuePatch"), std::vector<ThriftConstStruct>{}},
    {11, "optBoolVal", false, std::make_unique<Struct<::apache::thrift::op::OptionalBoolPatchStruct>>("patch.OptionalBoolPatch"), std::vector<ThriftConstStruct>{}},
    {12, "optByteVal", false, std::make_unique<Struct<::apache::thrift::op::OptionalBytePatchStruct>>("patch.OptionalBytePatch"), std::vector<ThriftConstStruct>{}},
    {13, "optI16Val", false, std::make_unique<Struct<::apache::thrift::op::OptionalI16PatchStruct>>("patch.OptionalI16Patch"), std::vector<ThriftConstStruct>{}},
    {14, "optI32Val", false, std::make_unique<Struct<::apache::thrift::op::OptionalI32PatchStruct>>("patch.OptionalI32Patch"), std::vector<ThriftConstStruct>{}},
    {15, "optI64Val", false, std::make_unique<Struct<::apache::thrift::op::OptionalI64PatchStruct>>("patch.OptionalI64Patch"), std::vector<ThriftConstStruct>{}},
    {16, "optFloatVal", false, std::make_unique<Struct<::apache::thrift::op::OptionalFloatPatchStruct>>("patch.OptionalFloatPatch"), std::vector<ThriftConstStruct>{}},
    {17, "optDoubleVal", false, std::make_unique<Struct<::apache::thrift::op::OptionalDoublePatchStruct>>("patch.OptionalDoublePatch"), std::vector<ThriftConstStruct>{}},
    {18, "optStringVal", false, std::make_unique<Struct<::apache::thrift::op::OptionalStringPatchStruct>>("patch.OptionalStringPatch"), std::vector<ThriftConstStruct>{}},
    {19, "optBinaryVal", false, std::make_unique<Struct<::apache::thrift::op::OptionalBinaryPatchStruct>>("patch.OptionalBinaryPatch"), std::vector<ThriftConstStruct>{}},
    {20, "optStructVal", false, std::make_unique<Struct<::cpp2::OptionalMyDataValuePatch>>("module.OptionalMyDataValuePatch"), std::vector<ThriftConstStruct>{}},
    {21, "optListVal", false, std::make_unique<Struct<::cpp2::OptionalMyStructField21Patch>>("module.OptionalMyStructField21Patch"), std::vector<ThriftConstStruct>{}},
    {22, "optSetVal", false, std::make_unique<Struct<::cpp2::OptionalMyStructField22Patch>>("module.OptionalMyStructField22Patch"), std::vector<ThriftConstStruct>{}},
    {23, "optMapVal", false, std::make_unique<Struct<::cpp2::OptionalMyStructField23Patch>>("module.OptionalMyStructField23Patch"), std::vector<ThriftConstStruct>{}},
    {30, "unionVal", false, std::make_unique<Struct<::cpp2::MyUnionValuePatch>>("module.MyUnionValuePatch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStructPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStructPatch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStructValuePatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStructValuePatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructValuePatch = res.first->second;
  module_MyStructValuePatch.name_ref() = "module.MyStructValuePatch";
  module_MyStructValuePatch.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStructValuePatch_fields[] = {
    {1, "assign", true, std::make_unique<Struct<::cpp2::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyStructPatch>>("module.MyStructPatch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStructValuePatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStructValuePatch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::OptionalMyStructValuePatch>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.OptionalMyStructValuePatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_OptionalMyStructValuePatch = res.first->second;
  module_OptionalMyStructValuePatch.name_ref() = "module.OptionalMyStructValuePatch";
  module_OptionalMyStructValuePatch.is_union_ref() = false;
  static const EncodedThriftField
  module_OptionalMyStructValuePatch_fields[] = {
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patch", false, std::make_unique<Struct<::cpp2::MyStructValuePatch>>("module.MyStructValuePatch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", true, std::make_unique<Struct<::cpp2::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {5, "patchAfter", false, std::make_unique<Struct<::cpp2::MyStructValuePatch>>("module.MyStructValuePatch"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_OptionalMyStructValuePatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_OptionalMyStructValuePatch.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
