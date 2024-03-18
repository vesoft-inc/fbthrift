/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct reasonable;
struct fine;
struct questionable;
struct tags;
struct me2_3;
struct me3_n3;
struct me1_t1;
struct me1_t2;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_reasonable
#define APACHE_THRIFT_ACCESSOR_reasonable
APACHE_THRIFT_DEFINE_ACCESSOR(reasonable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fine
#define APACHE_THRIFT_ACCESSOR_fine
APACHE_THRIFT_DEFINE_ACCESSOR(fine);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_questionable
#define APACHE_THRIFT_ACCESSOR_questionable
APACHE_THRIFT_DEFINE_ACCESSOR(questionable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_tags
#define APACHE_THRIFT_ACCESSOR_tags
APACHE_THRIFT_DEFINE_ACCESSOR(tags);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_me2_3
#define APACHE_THRIFT_ACCESSOR_me2_3
APACHE_THRIFT_DEFINE_ACCESSOR(me2_3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_me3_n3
#define APACHE_THRIFT_ACCESSOR_me3_n3
APACHE_THRIFT_DEFINE_ACCESSOR(me3_n3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_me1_t1
#define APACHE_THRIFT_ACCESSOR_me1_t1
APACHE_THRIFT_DEFINE_ACCESSOR(me1_t1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_me1_t2
#define APACHE_THRIFT_ACCESSOR_me1_t2
APACHE_THRIFT_DEFINE_ACCESSOR(me1_t2);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace test { namespace fixtures { namespace enums {

enum class Metasyntactic {
  FOO = 1,
  BAR = 2,
  BAZ = 3,
  BAX = 4,
};



enum class MyEnum1 {
  ME1_0 = 0,
  ME1_1 = 1,
  ME1_2 = 2,
  ME1_3 = 3,
  ME1_5 = 5,
  ME1_6 = 6,
};



enum class MyEnum2 {
  ME2_0 = 0,
  ME2_1 = 1,
  ME2_2 = 2,
};



enum class MyEnum3 {
  ME3_0 = 0,
  ME3_1 = 1,
  ME3_N2 = -2,
  ME3_N1 = -1,
  ME3_9 = 9,
  ME3_10 = 10,
};



enum class MyEnum4 {
  ME4_A = 2147483645,
  ME4_B = 2147483646,
  ME4_C = 2147483647,
  ME4_D = -2147483648,
};



enum class MyBitmaskEnum1 {
  ONE = 1,
  TWO = 2,
  FOUR = 4,
};



enum class MyBitmaskEnum2 {
  ONE = 1,
  TWO = 2,
  FOUR = 4,
};

inline constexpr MyBitmaskEnum2 operator&(MyBitmaskEnum2 a, MyBitmaskEnum2 b) {
  using E = MyBitmaskEnum2;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(static_cast<U>(a) & static_cast<U>(b));
}
inline constexpr MyBitmaskEnum2& operator&=(MyBitmaskEnum2& a, MyBitmaskEnum2 b) {
  return a = a & b;
}

inline constexpr MyBitmaskEnum2 operator|(MyBitmaskEnum2 a, MyBitmaskEnum2 b) {
  using E = MyBitmaskEnum2;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(static_cast<U>(a) | static_cast<U>(b));
}
inline constexpr MyBitmaskEnum2& operator|=(MyBitmaskEnum2& a, MyBitmaskEnum2 b) {
  return a = a | b;
}

inline constexpr MyBitmaskEnum2 operator^(MyBitmaskEnum2 a, MyBitmaskEnum2 b) {
  using E = MyBitmaskEnum2;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(static_cast<U>(a) ^ static_cast<U>(b));
}
inline constexpr MyBitmaskEnum2& operator^=(MyBitmaskEnum2& a, MyBitmaskEnum2 b) {
  return a = a ^ b;
}

inline constexpr MyBitmaskEnum2 operator~(MyBitmaskEnum2 a) {
  using E = MyBitmaskEnum2;
  using U = std::underlying_type_t<E>;
  return static_cast<E>(~static_cast<U>(a));
}

}}} // test::fixtures::enums

namespace std {
template<> struct hash<::test::fixtures::enums::Metasyntactic> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::Metasyntactic> {};
template<> struct hash<::test::fixtures::enums::MyEnum1> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::MyEnum1> {};
template<> struct hash<::test::fixtures::enums::MyEnum2> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::MyEnum2> {};
template<> struct hash<::test::fixtures::enums::MyEnum3> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::MyEnum3> {};
template<> struct hash<::test::fixtures::enums::MyEnum4> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::MyEnum4> {};
template<> struct hash<::test::fixtures::enums::MyBitmaskEnum1> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::MyBitmaskEnum1> {};
template<> struct hash<::test::fixtures::enums::MyBitmaskEnum2> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enums::MyBitmaskEnum2> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::test::fixtures::enums::Metasyntactic>;

template <> struct TEnumTraits<::test::fixtures::enums::Metasyntactic> {
  using type = ::test::fixtures::enums::Metasyntactic;

  static constexpr std::size_t const size = 4;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::FOO; }
  static constexpr type max() { return type::BAX; }
};


template <> struct TEnumDataStorage<::test::fixtures::enums::MyEnum1>;

template <> struct TEnumTraits<::test::fixtures::enums::MyEnum1> {
  using type = ::test::fixtures::enums::MyEnum1;

  static constexpr std::size_t const size = 6;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ME1_0; }
  static constexpr type max() { return type::ME1_6; }
};


template <> struct TEnumDataStorage<::test::fixtures::enums::MyEnum2>;

template <> struct TEnumTraits<::test::fixtures::enums::MyEnum2> {
  using type = ::test::fixtures::enums::MyEnum2;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ME2_0; }
  static constexpr type max() { return type::ME2_2; }
};


template <> struct TEnumDataStorage<::test::fixtures::enums::MyEnum3>;

template <> struct TEnumTraits<::test::fixtures::enums::MyEnum3> {
  using type = ::test::fixtures::enums::MyEnum3;

  static constexpr std::size_t const size = 6;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ME3_N2; }
  static constexpr type max() { return type::ME3_10; }
};


template <> struct TEnumDataStorage<::test::fixtures::enums::MyEnum4>;

template <> struct TEnumTraits<::test::fixtures::enums::MyEnum4> {
  using type = ::test::fixtures::enums::MyEnum4;

  static constexpr std::size_t const size = 4;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ME4_D; }
  static constexpr type max() { return type::ME4_C; }
};


template <> struct TEnumDataStorage<::test::fixtures::enums::MyBitmaskEnum1>;

template <> struct TEnumTraits<::test::fixtures::enums::MyBitmaskEnum1> {
  using type = ::test::fixtures::enums::MyBitmaskEnum1;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ONE; }
  static constexpr type max() { return type::FOUR; }
};


template <> struct TEnumDataStorage<::test::fixtures::enums::MyBitmaskEnum2>;

template <> struct TEnumTraits<::test::fixtures::enums::MyBitmaskEnum2> {
  using type = ::test::fixtures::enums::MyBitmaskEnum2;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  static bool findName(type value, folly::StringPiece* out) noexcept {
    std::string_view outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ONE; }
  static constexpr type max() { return type::FOUR; }
};


}} // apache::thrift


// END declare_enums
// BEGIN forward_declare
namespace test { namespace fixtures { namespace enums {
class SomeStruct;
class MyStruct;
}}} // test::fixtures::enums
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace test { namespace fixtures { namespace enums {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class SomeStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const char* __fbthrift_thrift_uri();
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::reasonable,
    ::apache::thrift::ident::fine,
    ::apache::thrift::ident::questionable,
    ::apache::thrift::ident::tags
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,3,4};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::enum_t<::test::fixtures::enums::Metasyntactic>,
    ::apache::thrift::type::enum_t<::test::fixtures::enums::Metasyntactic>,
    ::apache::thrift::type::enum_t<::test::fixtures::enums::Metasyntactic>,
    ::apache::thrift::type::set<::apache::thrift::type::i32_t>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 4;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = SomeStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SomeStruct();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SomeStruct(apache::thrift::FragileConstructor, ::test::fixtures::enums::Metasyntactic reasonable__arg, ::test::fixtures::enums::Metasyntactic fine__arg, ::test::fixtures::enums::Metasyntactic questionable__arg, ::std::set<::std::int32_t> tags__arg);

  SomeStruct(SomeStruct&&) noexcept;

  SomeStruct(const SomeStruct& src);


  SomeStruct& operator=(SomeStruct&&) noexcept;
  SomeStruct& operator=(const SomeStruct& src);

  ~SomeStruct();

 private:
  ::test::fixtures::enums::Metasyntactic __fbthrift_field_reasonable;
 private:
  ::test::fixtures::enums::Metasyntactic __fbthrift_field_fine;
 private:
  ::test::fixtures::enums::Metasyntactic __fbthrift_field_questionable;
 private:
  ::std::set<::std::int32_t> __fbthrift_field_tags;
 private:
  apache::thrift::detail::isset_bitset<4, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const SomeStruct&) const;
  bool operator<(const SomeStruct&) const;

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reasonable_ref() const& {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reasonable_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reasonable_ref() & {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reasonable_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reasonable() const& {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reasonable() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reasonable() & {
    return {this->__fbthrift_field_reasonable, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reasonable() && {
    return {static_cast<T&&>(this->__fbthrift_field_reasonable), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fine_ref() const& {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fine_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fine_ref() & {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fine_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fine() const& {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fine() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fine() & {
    return {this->__fbthrift_field_fine, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fine() && {
    return {static_cast<T&&>(this->__fbthrift_field_fine), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> questionable_ref() const& {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> questionable_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> questionable_ref() & {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> questionable_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> questionable() const& {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> questionable() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> questionable() & {
    return {this->__fbthrift_field_questionable, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> questionable() && {
    return {static_cast<T&&>(this->__fbthrift_field_questionable), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> tags_ref() const& {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> tags_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> tags_ref() & {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> tags_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> tags() const& {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> tags() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> tags() & {
    return {this->__fbthrift_field_tags, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> tags() && {
    return {static_cast<T&&>(this->__fbthrift_field_tags), __isset.at(3), __isset.bit(3)};
  }

  ::test::fixtures::enums::Metasyntactic get_reasonable() const {
    return __fbthrift_field_reasonable;
  }

  [[deprecated("Use `FOO.reasonable_ref() = BAR;` instead of `FOO.set_reasonable(BAR);`")]]
  ::test::fixtures::enums::Metasyntactic& set_reasonable(::test::fixtures::enums::Metasyntactic reasonable_) {
    reasonable_ref() = reasonable_;
    return __fbthrift_field_reasonable;
  }

  ::test::fixtures::enums::Metasyntactic get_fine() const {
    return __fbthrift_field_fine;
  }

  [[deprecated("Use `FOO.fine_ref() = BAR;` instead of `FOO.set_fine(BAR);`")]]
  ::test::fixtures::enums::Metasyntactic& set_fine(::test::fixtures::enums::Metasyntactic fine_) {
    fine_ref() = fine_;
    return __fbthrift_field_fine;
  }

  ::test::fixtures::enums::Metasyntactic get_questionable() const {
    return __fbthrift_field_questionable;
  }

  [[deprecated("Use `FOO.questionable_ref() = BAR;` instead of `FOO.set_questionable(BAR);`")]]
  ::test::fixtures::enums::Metasyntactic& set_questionable(::test::fixtures::enums::Metasyntactic questionable_) {
    questionable_ref() = questionable_;
    return __fbthrift_field_questionable;
  }
  const ::std::set<::std::int32_t>& get_tags() const&;
  ::std::set<::std::int32_t> get_tags() &&;

  template <typename T_SomeStruct_tags_struct_setter = ::std::set<::std::int32_t>>
  [[deprecated("Use `FOO.tags_ref() = BAR;` instead of `FOO.set_tags(BAR);`")]]
  ::std::set<::std::int32_t>& set_tags(T_SomeStruct_tags_struct_setter&& tags_) {
    tags_ref() = std::forward<T_SomeStruct_tags_struct_setter>(tags_);
    return __fbthrift_field_tags;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<SomeStruct>;
  friend void swap(SomeStruct& a, SomeStruct& b);
};

template <class Protocol_>
unsigned long SomeStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const char* __fbthrift_thrift_uri();
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::me2_3,
    ::apache::thrift::ident::me3_n3,
    ::apache::thrift::ident::me1_t1,
    ::apache::thrift::ident::me1_t2
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,4,6};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::enum_t<::test::fixtures::enums::MyEnum2>,
    ::apache::thrift::type::enum_t<::test::fixtures::enums::MyEnum3>,
    ::apache::thrift::type::enum_t<::test::fixtures::enums::MyEnum1>,
    ::apache::thrift::type::enum_t<::test::fixtures::enums::MyEnum1>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 4;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStruct() :
      __fbthrift_field_me2_3(static_cast< ::test::fixtures::enums::MyEnum2>(3)),
      __fbthrift_field_me3_n3(static_cast< ::test::fixtures::enums::MyEnum3>(-3)),
      __fbthrift_field_me1_t1( ::test::fixtures::enums::MyEnum1::ME1_1),
      __fbthrift_field_me1_t2( ::test::fixtures::enums::MyEnum1::ME1_1) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::test::fixtures::enums::MyEnum2 me2_3__arg, ::test::fixtures::enums::MyEnum3 me3_n3__arg, ::test::fixtures::enums::MyEnum1 me1_t1__arg, ::test::fixtures::enums::MyEnum1 me1_t2__arg);

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;


  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
 private:
  ::test::fixtures::enums::MyEnum2 __fbthrift_field_me2_3;
 private:
  ::test::fixtures::enums::MyEnum3 __fbthrift_field_me3_n3;
 private:
  ::test::fixtures::enums::MyEnum1 __fbthrift_field_me1_t1;
 private:
  ::test::fixtures::enums::MyEnum1 __fbthrift_field_me1_t2;
 private:
  apache::thrift::detail::isset_bitset<4, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me2_3_ref() const& {
    return {this->__fbthrift_field_me2_3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me2_3_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me2_3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me2_3_ref() & {
    return {this->__fbthrift_field_me2_3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me2_3_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_me2_3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me2_3() const& {
    return {this->__fbthrift_field_me2_3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me2_3() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me2_3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me2_3() & {
    return {this->__fbthrift_field_me2_3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me2_3() && {
    return {static_cast<T&&>(this->__fbthrift_field_me2_3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me3_n3_ref() const& {
    return {this->__fbthrift_field_me3_n3, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me3_n3_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me3_n3), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me3_n3_ref() & {
    return {this->__fbthrift_field_me3_n3, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me3_n3_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_me3_n3), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me3_n3() const& {
    return {this->__fbthrift_field_me3_n3, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me3_n3() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me3_n3), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me3_n3() & {
    return {this->__fbthrift_field_me3_n3, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me3_n3() && {
    return {static_cast<T&&>(this->__fbthrift_field_me3_n3), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me1_t1_ref() const& {
    return {this->__fbthrift_field_me1_t1, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me1_t1_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me1_t1), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me1_t1_ref() & {
    return {this->__fbthrift_field_me1_t1, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me1_t1_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_me1_t1), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me1_t1() const& {
    return {this->__fbthrift_field_me1_t1, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me1_t1() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me1_t1), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me1_t1() & {
    return {this->__fbthrift_field_me1_t1, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me1_t1() && {
    return {static_cast<T&&>(this->__fbthrift_field_me1_t1), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me1_t2_ref() const& {
    return {this->__fbthrift_field_me1_t2, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me1_t2_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me1_t2), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me1_t2_ref() & {
    return {this->__fbthrift_field_me1_t2, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me1_t2_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_me1_t2), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> me1_t2() const& {
    return {this->__fbthrift_field_me1_t2, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> me1_t2() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_me1_t2), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> me1_t2() & {
    return {this->__fbthrift_field_me1_t2, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::test::fixtures::enums::MyEnum1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> me1_t2() && {
    return {static_cast<T&&>(this->__fbthrift_field_me1_t2), __isset.at(3), __isset.bit(3)};
  }

  ::test::fixtures::enums::MyEnum2 get_me2_3() const {
    return __fbthrift_field_me2_3;
  }

  [[deprecated("Use `FOO.me2_3_ref() = BAR;` instead of `FOO.set_me2_3(BAR);`")]]
  ::test::fixtures::enums::MyEnum2& set_me2_3(::test::fixtures::enums::MyEnum2 me2_3_) {
    me2_3_ref() = me2_3_;
    return __fbthrift_field_me2_3;
  }

  ::test::fixtures::enums::MyEnum3 get_me3_n3() const {
    return __fbthrift_field_me3_n3;
  }

  [[deprecated("Use `FOO.me3_n3_ref() = BAR;` instead of `FOO.set_me3_n3(BAR);`")]]
  ::test::fixtures::enums::MyEnum3& set_me3_n3(::test::fixtures::enums::MyEnum3 me3_n3_) {
    me3_n3_ref() = me3_n3_;
    return __fbthrift_field_me3_n3;
  }

  ::test::fixtures::enums::MyEnum1 get_me1_t1() const {
    return __fbthrift_field_me1_t1;
  }

  [[deprecated("Use `FOO.me1_t1_ref() = BAR;` instead of `FOO.set_me1_t1(BAR);`")]]
  ::test::fixtures::enums::MyEnum1& set_me1_t1(::test::fixtures::enums::MyEnum1 me1_t1_) {
    me1_t1_ref() = me1_t1_;
    return __fbthrift_field_me1_t1;
  }

  ::test::fixtures::enums::MyEnum1 get_me1_t2() const {
    return __fbthrift_field_me1_t2;
  }

  [[deprecated("Use `FOO.me1_t2_ref() = BAR;` instead of `FOO.set_me1_t2(BAR);`")]]
  ::test::fixtures::enums::MyEnum1& set_me1_t2(::test::fixtures::enums::MyEnum1 me1_t2_) {
    me1_t2_ref() = me1_t2_;
    return __fbthrift_field_me1_t2;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStruct>;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
unsigned long MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


}}} // test::fixtures::enums
