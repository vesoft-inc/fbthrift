/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/annotation/gen-py3cpp/thrift_data.h"
#include "thrift/annotation/gen-py3cpp/thrift_types.h"
#include "thrift/annotation/gen-py3cpp/thrift_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::facebook::thrift::annotation::Beta>(
    ::facebook::thrift::annotation::Beta& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::Experimental>(
    ::facebook::thrift::annotation::Experimental& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::Testing>(
    ::facebook::thrift::annotation::Testing& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::ReserveIds>(
    ::facebook::thrift::annotation::ReserveIds& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.ids_ref().copy_from(default_inst<::facebook::thrift::annotation::ReserveIds>().ids_ref());
      return;
    case 1:
      obj.id_ranges_ref().copy_from(default_inst<::facebook::thrift::annotation::ReserveIds>().id_ranges_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::RequiresBackwardCompatibility>(
    ::facebook::thrift::annotation::RequiresBackwardCompatibility& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_name_ref().copy_from(default_inst<::facebook::thrift::annotation::RequiresBackwardCompatibility>().field_name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::NoTesting>(
    ::facebook::thrift::annotation::NoTesting& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::NoExperimental>(
    ::facebook::thrift::annotation::NoExperimental& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::NoBeta>(
    ::facebook::thrift::annotation::NoBeta& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::Released>(
    ::facebook::thrift::annotation::Released& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::TerseWrite>(
    ::facebook::thrift::annotation::TerseWrite& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::Box>(
    ::facebook::thrift::annotation::Box& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::Mixin>(
    ::facebook::thrift::annotation::Mixin& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::SerializeInFieldIdOrder>(
    ::facebook::thrift::annotation::SerializeInFieldIdOrder& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::BitmaskEnum>(
    ::facebook::thrift::annotation::BitmaskEnum& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::ExceptionMessage>(
    ::facebook::thrift::annotation::ExceptionMessage& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_ref().copy_from(default_inst<::facebook::thrift::annotation::ExceptionMessage>().field_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::GenerateRuntimeSchema>(
    ::facebook::thrift::annotation::GenerateRuntimeSchema& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::GenerateRuntimeSchema>().name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::InternBox>(
    ::facebook::thrift::annotation::InternBox& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::Beta>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::Experimental>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::Testing>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::ReserveIds>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::RequiresBackwardCompatibility>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::NoTesting>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::NoExperimental>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::NoBeta>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::Released>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::TerseWrite>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::Box>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::Mixin>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::SerializeInFieldIdOrder>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::BitmaskEnum>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::ExceptionMessage>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::GenerateRuntimeSchema>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::InternBox>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
