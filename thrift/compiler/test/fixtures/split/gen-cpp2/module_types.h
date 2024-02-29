/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/split/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct MyIntField;
struct MyStringField;
struct MyDataField;
struct myEnum;
struct oneway;
struct readonly;
struct idempotent;
struct myEnum;
struct myStruct;
struct myDataItem;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_MyIntField
#define APACHE_THRIFT_ACCESSOR_MyIntField
APACHE_THRIFT_DEFINE_ACCESSOR(MyIntField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyStringField
#define APACHE_THRIFT_ACCESSOR_MyStringField
APACHE_THRIFT_DEFINE_ACCESSOR(MyStringField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyDataField
#define APACHE_THRIFT_ACCESSOR_MyDataField
APACHE_THRIFT_DEFINE_ACCESSOR(MyDataField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_oneway
#define APACHE_THRIFT_ACCESSOR_oneway
APACHE_THRIFT_DEFINE_ACCESSOR(oneway);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_readonly
#define APACHE_THRIFT_ACCESSOR_readonly
APACHE_THRIFT_DEFINE_ACCESSOR(readonly);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_idempotent
#define APACHE_THRIFT_ACCESSOR_idempotent
APACHE_THRIFT_DEFINE_ACCESSOR(idempotent);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myStruct
#define APACHE_THRIFT_ACCESSOR_myStruct
APACHE_THRIFT_DEFINE_ACCESSOR(myStruct);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myDataItem
#define APACHE_THRIFT_ACCESSOR_myDataItem
APACHE_THRIFT_DEFINE_ACCESSOR(myDataItem);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
};



} // cpp2

namespace std {
template<> struct hash<::cpp2::MyEnum> :
  ::apache::thrift::detail::enum_hash<::cpp2::MyEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::MyEnum>;

template <> struct TEnumTraits<::cpp2::MyEnum> {
  using type = ::cpp2::MyEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static bool findName(type value, folly::StringPiece* out) noexcept;
  static bool findValue(folly::StringPiece name, type* out) noexcept;

  static bool findName(type value, std::string_view* out) noexcept {
    folly::StringPiece outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    folly::StringPiece ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::MyValue2; }
};


}} // apache::thrift


// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class MyStruct;
class MyDataItem;
class MyUnion;
} // cpp2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class MyDataItem final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0};
  using __fbthrift_reflection_type_tags = folly::tag_t<
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 0;

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
  using __fbthrift_cpp2_type = MyDataItem;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyDataItem() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyDataItem(apache::thrift::FragileConstructor);

  MyDataItem(MyDataItem&&) = default;

  MyDataItem(const MyDataItem&) = default;


  MyDataItem& operator=(MyDataItem&&) = default;

  MyDataItem& operator=(const MyDataItem&) = default;

 public:

  bool operator==(const MyDataItem&) const;
  bool operator<(const MyDataItem&) const;

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

  friend class ::apache::thrift::Cpp2Ops<MyDataItem>;
  friend void swap(MyDataItem& a, MyDataItem& b);
};

template <class Protocol_>
unsigned long MyDataItem::read(Protocol_* iprot) {
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
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::MyIntField,
    ::apache::thrift::ident::MyStringField,
    ::apache::thrift::ident::MyDataField,
    ::apache::thrift::ident::myEnum,
    ::apache::thrift::ident::oneway,
    ::apache::thrift::ident::readonly,
    ::apache::thrift::ident::idempotent
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,3,4,5,6,7};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::i64_t,
    ::apache::thrift::type::string_t,
    ::apache::thrift::type::struct_t<::cpp2::MyDataItem>,
    ::apache::thrift::type::enum_t<::cpp2::MyEnum>,
    ::apache::thrift::type::bool_t,
    ::apache::thrift::type::bool_t,
    ::apache::thrift::type::bool_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 7;

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

  MyStruct();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::std::string MyStringField__arg, ::cpp2::MyDataItem MyDataField__arg, ::cpp2::MyEnum myEnum__arg, bool oneway__arg, bool readonly__arg, bool idempotent__arg);

  MyStruct(MyStruct&&) noexcept;

  MyStruct(const MyStruct& src);


  MyStruct& operator=(MyStruct&&) noexcept;
  MyStruct& operator=(const MyStruct& src);

  ~MyStruct();

 private:
  ::std::int64_t __fbthrift_field_MyIntField;
 private:
  ::std::string __fbthrift_field_MyStringField;
 private:
  ::cpp2::MyDataItem __fbthrift_field_MyDataField;
 private:
  ::cpp2::MyEnum __fbthrift_field_myEnum;
 private:
  bool __fbthrift_field_oneway;
 private:
  bool __fbthrift_field_readonly;
 private:
  bool __fbthrift_field_idempotent;
 private:
  apache::thrift::detail::isset_bitset<7, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyIntField_ref() const& {
    return {this->__fbthrift_field_MyIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyIntField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyIntField_ref() & {
    return {this->__fbthrift_field_MyIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyIntField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyIntField() const& {
    return {this->__fbthrift_field_MyIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyIntField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyIntField() & {
    return {this->__fbthrift_field_MyIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyIntField() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyStringField_ref() const& {
    return {this->__fbthrift_field_MyStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyStringField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyStringField_ref() & {
    return {this->__fbthrift_field_MyStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyStringField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyStringField() const& {
    return {this->__fbthrift_field_MyStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyStringField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyStringField() & {
    return {this->__fbthrift_field_MyStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyStringField() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyDataField_ref() const& {
    return {this->__fbthrift_field_MyDataField, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyDataField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyDataField), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyDataField_ref() & {
    return {this->__fbthrift_field_MyDataField, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyDataField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyDataField), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyDataField() const& {
    return {this->__fbthrift_field_MyDataField, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyDataField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyDataField), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyDataField() & {
    return {this->__fbthrift_field_MyDataField, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyDataField() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyDataField), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myEnum_ref() const& {
    return {this->__fbthrift_field_myEnum, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myEnum_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myEnum), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myEnum_ref() & {
    return {this->__fbthrift_field_myEnum, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myEnum_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_myEnum), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myEnum() const& {
    return {this->__fbthrift_field_myEnum, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myEnum() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myEnum), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myEnum() & {
    return {this->__fbthrift_field_myEnum, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myEnum() && {
    return {static_cast<T&&>(this->__fbthrift_field_myEnum), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> oneway_ref() const& {
    return {this->__fbthrift_field_oneway, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> oneway_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_oneway), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> oneway_ref() & {
    return {this->__fbthrift_field_oneway, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> oneway_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_oneway), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> oneway() const& {
    return {this->__fbthrift_field_oneway, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> oneway() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_oneway), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> oneway() & {
    return {this->__fbthrift_field_oneway, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> oneway() && {
    return {static_cast<T&&>(this->__fbthrift_field_oneway), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> readonly_ref() const& {
    return {this->__fbthrift_field_readonly, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> readonly_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_readonly), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> readonly_ref() & {
    return {this->__fbthrift_field_readonly, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> readonly_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_readonly), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> readonly() const& {
    return {this->__fbthrift_field_readonly, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> readonly() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_readonly), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> readonly() & {
    return {this->__fbthrift_field_readonly, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> readonly() && {
    return {static_cast<T&&>(this->__fbthrift_field_readonly), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> idempotent_ref() const& {
    return {this->__fbthrift_field_idempotent, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> idempotent_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_idempotent), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> idempotent_ref() & {
    return {this->__fbthrift_field_idempotent, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> idempotent_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_idempotent), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> idempotent() const& {
    return {this->__fbthrift_field_idempotent, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> idempotent() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_idempotent), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> idempotent() & {
    return {this->__fbthrift_field_idempotent, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> idempotent() && {
    return {static_cast<T&&>(this->__fbthrift_field_idempotent), __isset.at(6), __isset.bit(6)};
  }

  ::std::int64_t get_MyIntField() const {
    return __fbthrift_field_MyIntField;
  }

  [[deprecated("Use `FOO.MyIntField_ref() = BAR;` instead of `FOO.set_MyIntField(BAR);`")]]
  ::std::int64_t& set_MyIntField(::std::int64_t MyIntField_) {
    MyIntField_ref() = MyIntField_;
    return __fbthrift_field_MyIntField;
  }

  const ::std::string& get_MyStringField() const& {
    return __fbthrift_field_MyStringField;
  }

  ::std::string get_MyStringField() && {
    return std::move(__fbthrift_field_MyStringField);
  }

  template <typename T_MyStruct_MyStringField_struct_setter = ::std::string>
  [[deprecated("Use `FOO.MyStringField_ref() = BAR;` instead of `FOO.set_MyStringField(BAR);`")]]
  ::std::string& set_MyStringField(T_MyStruct_MyStringField_struct_setter&& MyStringField_) {
    MyStringField_ref() = std::forward<T_MyStruct_MyStringField_struct_setter>(MyStringField_);
    return __fbthrift_field_MyStringField;
  }
  const ::cpp2::MyDataItem& get_MyDataField() const&;
  ::cpp2::MyDataItem get_MyDataField() &&;

  template <typename T_MyStruct_MyDataField_struct_setter = ::cpp2::MyDataItem>
  [[deprecated("Use `FOO.MyDataField_ref() = BAR;` instead of `FOO.set_MyDataField(BAR);`")]]
  ::cpp2::MyDataItem& set_MyDataField(T_MyStruct_MyDataField_struct_setter&& MyDataField_) {
    MyDataField_ref() = std::forward<T_MyStruct_MyDataField_struct_setter>(MyDataField_);
    return __fbthrift_field_MyDataField;
  }

  ::cpp2::MyEnum get_myEnum() const {
    return __fbthrift_field_myEnum;
  }

  [[deprecated("Use `FOO.myEnum_ref() = BAR;` instead of `FOO.set_myEnum(BAR);`")]]
  ::cpp2::MyEnum& set_myEnum(::cpp2::MyEnum myEnum_) {
    myEnum_ref() = myEnum_;
    return __fbthrift_field_myEnum;
  }

  bool get_oneway() const {
    return __fbthrift_field_oneway;
  }

  [[deprecated("Use `FOO.oneway_ref() = BAR;` instead of `FOO.set_oneway(BAR);`")]]
  bool& set_oneway(bool oneway_) {
    oneway_ref() = oneway_;
    return __fbthrift_field_oneway;
  }

  bool get_readonly() const {
    return __fbthrift_field_readonly;
  }

  [[deprecated("Use `FOO.readonly_ref() = BAR;` instead of `FOO.set_readonly(BAR);`")]]
  bool& set_readonly(bool readonly_) {
    readonly_ref() = readonly_;
    return __fbthrift_field_readonly;
  }

  bool get_idempotent() const {
    return __fbthrift_field_idempotent;
  }

  [[deprecated("Use `FOO.idempotent_ref() = BAR;` instead of `FOO.set_idempotent(BAR);`")]]
  bool& set_idempotent(bool idempotent_) {
    idempotent_ref() = idempotent_;
    return __fbthrift_field_idempotent;
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


class MyUnion final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::myEnum,
    ::apache::thrift::ident::myStruct,
    ::apache::thrift::ident::myDataItem
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,3};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::enum_t<::cpp2::MyEnum>,
    ::apache::thrift::type::struct_t<::cpp2::MyStruct>,
    ::apache::thrift::type::struct_t<::cpp2::MyDataItem>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 3;

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
  void __fbthrift_destruct();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = MyUnion;
  static constexpr bool __fbthrift_cpp2_is_union =
    true;


 public:
  enum Type : int {
    __EMPTY__ = 0,
    myEnum = 1,
    myStruct = 2,
    myDataItem = 3,
  } ;

  MyUnion()
      : type_(folly::to_underlying(Type::__EMPTY__)) {}

  MyUnion(MyUnion&& rhs) noexcept
      : type_(folly::to_underlying(Type::__EMPTY__)) {
    if (this == &rhs) { return; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
      {
        return;
      }
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(std::move(rhs.value_.myStruct));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    apache::thrift::clear(rhs);
  }

  MyUnion(const MyUnion& rhs);

  MyUnion& operator=(MyUnion&& rhs) noexcept {
    if (this == &rhs) { return *this; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
      {
        __fbthrift_clear();
        return *this;
      }
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(std::move(rhs.value_.myStruct));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        __fbthrift_clear();
      }
    }
    apache::thrift::clear(rhs);
    return *this;
  }

  MyUnion& operator=(const MyUnion& rhs);

  ~MyUnion();

  union storage_type {
    ::cpp2::MyEnum myEnum;
    ::cpp2::MyStruct myStruct;
    ::cpp2::MyDataItem myDataItem;

    storage_type() {}
    ~storage_type() {}
  } ;

  bool operator==(const MyUnion&) const;
  bool operator<(const MyUnion&) const;

  template <typename... A, std::enable_if_t<!sizeof...(A), int> = 0>
  ::cpp2::MyEnum& set_myEnum(::cpp2::MyEnum t = ::cpp2::MyEnum()) {
    using T0 = ::cpp2::MyEnum;
    using T = folly::type_t<T0, A...>;
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myEnum);
    ::new (std::addressof(value_.myEnum)) T(t);
    return value_.myEnum;
  }


  template <typename... A, std::enable_if_t<!sizeof...(A), int> = 0>
  ::cpp2::MyStruct& set_myStruct(::cpp2::MyStruct const &t) {
    using T0 = ::cpp2::MyStruct;
    using T = folly::type_t<T0, A...>;
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myStruct);
    ::new (std::addressof(value_.myStruct)) T(t);
    return value_.myStruct;
  }

  template <typename... A, std::enable_if_t<!sizeof...(A), int> = 0>
  ::cpp2::MyStruct& set_myStruct(::cpp2::MyStruct&& t) {
    using T0 = ::cpp2::MyStruct;
    using T = folly::type_t<T0, A...>;
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myStruct);
    ::new (std::addressof(value_.myStruct)) T(std::move(t));
    return value_.myStruct;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::cpp2::MyStruct, T...>> ::cpp2::MyStruct& set_myStruct(T&&... t) {
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myStruct);
    ::new (std::addressof(value_.myStruct)) ::cpp2::MyStruct(std::forward<T>(t)...);
    return value_.myStruct;
  }

  template <typename... A, std::enable_if_t<!sizeof...(A), int> = 0>
  ::cpp2::MyDataItem& set_myDataItem(::cpp2::MyDataItem const &t) {
    using T0 = ::cpp2::MyDataItem;
    using T = folly::type_t<T0, A...>;
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myDataItem);
    ::new (std::addressof(value_.myDataItem)) T(t);
    return value_.myDataItem;
  }

  template <typename... A, std::enable_if_t<!sizeof...(A), int> = 0>
  ::cpp2::MyDataItem& set_myDataItem(::cpp2::MyDataItem&& t) {
    using T0 = ::cpp2::MyDataItem;
    using T = folly::type_t<T0, A...>;
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myDataItem);
    ::new (std::addressof(value_.myDataItem)) T(std::move(t));
    return value_.myDataItem;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::cpp2::MyDataItem, T...>> ::cpp2::MyDataItem& set_myDataItem(T&&... t) {
    __fbthrift_clear();
    type_ = folly::to_underlying(Type::myDataItem);
    ::new (std::addressof(value_.myDataItem)) ::cpp2::MyDataItem(std::forward<T>(t)...);
    return value_.myDataItem;
  }

  ::cpp2::MyEnum const& get_myEnum() const {
    if (getType() != Type::myEnum) {
      ::apache::thrift::detail::throw_on_bad_union_field_access();
    }
    return value_.myEnum;
  }

  ::cpp2::MyStruct const& get_myStruct() const {
    if (getType() != Type::myStruct) {
      ::apache::thrift::detail::throw_on_bad_union_field_access();
    }
    return value_.myStruct;
  }

  ::cpp2::MyDataItem const& get_myDataItem() const {
    if (getType() != Type::myDataItem) {
      ::apache::thrift::detail::throw_on_bad_union_field_access();
    }
    return value_.myDataItem;
  }

  ::cpp2::MyEnum& mutable_myEnum() {
    assert(getType() == Type::myEnum);
    return value_.myEnum;
  }

  ::cpp2::MyStruct& mutable_myStruct() {
    assert(getType() == Type::myStruct);
    return value_.myStruct;
  }

  ::cpp2::MyDataItem& mutable_myDataItem() {
    assert(getType() == Type::myDataItem);
    return value_.myDataItem;
  }

  ::cpp2::MyEnum move_myEnum() {
    assert(getType() == Type::myEnum);
    return std::move(value_.myEnum);
  }

  ::cpp2::MyStruct move_myStruct() {
    assert(getType() == Type::myStruct);
    return std::move(value_.myStruct);
  }

  ::cpp2::MyDataItem move_myDataItem() {
    assert(getType() == Type::myDataItem);
    return std::move(value_.myDataItem);
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myEnum_ref() const& {
    return {value_.myEnum, type_, folly::to_underlying(Type::myEnum), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myEnum_ref() const&& {
    return {std::move(value_.myEnum), type_, folly::to_underlying(Type::myEnum), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myEnum_ref() & {
    return {value_.myEnum, type_, folly::to_underlying(Type::myEnum), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myEnum_ref() && {
    return {std::move(value_.myEnum), type_, folly::to_underlying(Type::myEnum), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myStruct_ref() const& {
    return {value_.myStruct, type_, folly::to_underlying(Type::myStruct), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myStruct_ref() const&& {
    return {std::move(value_.myStruct), type_, folly::to_underlying(Type::myStruct), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myStruct_ref() & {
    return {value_.myStruct, type_, folly::to_underlying(Type::myStruct), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myStruct_ref() && {
    return {std::move(value_.myStruct), type_, folly::to_underlying(Type::myStruct), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myDataItem_ref() const& {
    return {value_.myDataItem, type_, folly::to_underlying(Type::myDataItem), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myDataItem_ref() const&& {
    return {std::move(value_.myDataItem), type_, folly::to_underlying(Type::myDataItem), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myDataItem_ref() & {
    return {value_.myDataItem, type_, folly::to_underlying(Type::myDataItem), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::cpp2::MyDataItem>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myDataItem_ref() && {
    return {std::move(value_.myDataItem), type_, folly::to_underlying(Type::myDataItem), this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  Type getType() const { return static_cast<Type>(type_); }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  storage_type value_;
  std::underlying_type_t<Type> type_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyUnion>;
  friend void swap(MyUnion& a, MyUnion& b);
};

template <class Protocol_>
unsigned long MyUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::MyUnion::Type>;

template <> struct TEnumTraits<::cpp2::MyUnion::Type> {
  using type = ::cpp2::MyUnion::Type;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static bool findName(type value, folly::StringPiece* out) noexcept;
  static bool findValue(folly::StringPiece name, type* out) noexcept;

  static bool findName(type value, std::string_view* out) noexcept {
    folly::StringPiece outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
  static char const* findName(type value) noexcept {
    folly::StringPiece ret;
    (void)findName(value, &ret);
    return ret.data();
  }
};
}} // apache::thrift
