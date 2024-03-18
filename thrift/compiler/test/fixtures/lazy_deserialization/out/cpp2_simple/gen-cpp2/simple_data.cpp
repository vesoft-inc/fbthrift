/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/lazy_deserialization/src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::Foo>::name = "Foo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::Foo>::fields_names = {{
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::Foo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::Foo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::Foo>::storage_names = {{
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::Foo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::LazyFoo>::name = "LazyFoo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::fields_names = {{
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::storage_names = {{
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::OptionalFoo>::name = "OptionalFoo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::fields_names = {{
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::storage_names = {{
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::name = "OptionalLazyFoo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::fields_names = {{
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::storage_names = {{
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::OptionalBoxedLazyFoo>::name = "OptionalBoxedLazyFoo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::OptionalBoxedLazyFoo>::fields_names = {{
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::OptionalBoxedLazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::OptionalBoxedLazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::OptionalBoxedLazyFoo>::storage_names = {{
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::OptionalBoxedLazyFoo>::isset_indexes = {{
  -1,
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::LazyCppRef>::name = "LazyCppRef";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::LazyCppRef>::fields_names = {{
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::LazyCppRef>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::LazyCppRef>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::apache::thrift::test::LazyCppRef>::storage_names = {{
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::LazyCppRef>::isset_indexes = {{
  -1,
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::IndexedFoo>::name = "IndexedFoo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::fields_names = {{
  "serialized_data_size"sv,
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
  "field_id_to_size"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::fields_ids = {{
  100,
  1,
  2,
  3,
  4,
  101,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::fields_types = {{
  TType::T_DOUBLE,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::storage_names = {{
  "__fbthrift_field_serialized_data_size"sv,
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
  "__fbthrift_field_field_id_to_size"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::name = "OptionalIndexedFoo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::fields_names = {{
  "serialized_data_size"sv,
  "field1"sv,
  "field2"sv,
  "field3"sv,
  "field4"sv,
  "field_id_to_size"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::fields_ids = {{
  100,
  1,
  2,
  3,
  4,
  101,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::fields_types = {{
  TType::T_DOUBLE,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::storage_names = {{
  "__fbthrift_field_serialized_data_size"sv,
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
  "__fbthrift_field_field4"sv,
  "__fbthrift_field_field_id_to_size"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::Empty>::name = "Empty";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::apache::thrift::test::Empty>::fields_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::apache::thrift::test::Empty>::fields_ids = {{
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::apache::thrift::test::Empty>::fields_types = {{
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::apache::thrift::test::Empty>::storage_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::apache::thrift::test::Empty>::isset_indexes = {{
}};

} // namespace thrift
} // namespace apache
