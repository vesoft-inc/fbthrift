/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct myString;
struct myString;
struct myString;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_myString
#define APACHE_THRIFT_ACCESSOR_myString
APACHE_THRIFT_DEFINE_ACCESSOR(myString);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myString
#define APACHE_THRIFT_ACCESSOR_myString
APACHE_THRIFT_DEFINE_ACCESSOR(myString);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myString
#define APACHE_THRIFT_ACCESSOR_myString
APACHE_THRIFT_DEFINE_ACCESSOR(myString);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class MyStruct;
class MyUnion;
class MyException;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = true;
  static const char* __fbthrift_cpp2_gen_thrift_uri();

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStruct() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::std::string myString__arg);

  MyStruct(MyStruct&&) noexcept;

  MyStruct(const MyStruct&) = default;


  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();
 private:
  ::std::string myString;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool myString;
  } __isset = {};

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myString_ref() const& {
    return {this->myString, __isset.myString};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myString_ref() const&& {
    return {std::move(this->myString), __isset.myString};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myString_ref() & {
    return {this->myString, __isset.myString};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myString_ref() && {
    return {std::move(this->myString), __isset.myString};
  }

  const ::std::string& get_myString() const& {
    return myString;
  }

  ::std::string get_myString() && {
    return std::move(myString);
  }

  template <typename T_MyStruct_myString_struct_setter = ::std::string>
  ::std::string& set_myString(T_MyStruct_myString_struct_setter&& myString_) {
    myString = std::forward<T_MyStruct_myString_struct_setter>(myString_);
    __isset.myString = true;
    return myString;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
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
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyUnion final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = true;
  static const char* __fbthrift_cpp2_gen_thrift_uri();

 public:
  using __fbthrift_cpp2_type = MyUnion;
  static constexpr bool __fbthrift_cpp2_is_union =
    true;


 public:
  enum Type : int {
    __EMPTY__ = 0,
    myString = 1,
  } ;

  MyUnion()
      : type_(Type::__EMPTY__) {}

  MyUnion(MyUnion&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myString:
      {
        set_myString(std::move(rhs.value_.myString));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  MyUnion(const MyUnion& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myString:
      {
        set_myString(rhs.value_.myString);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  MyUnion& operator=(MyUnion&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myString:
      {
        set_myString(std::move(rhs.value_.myString));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  MyUnion& operator=(const MyUnion& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myString:
      {
        set_myString(rhs.value_.myString);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  ~MyUnion() {
    __clear();
  }
  union storage_type {
    ::std::string myString;

    storage_type() {}
    ~storage_type() {}
  } ;

  bool operator==(const MyUnion&) const;
  bool operator<(const MyUnion&) const;

  ::std::string& set_myString(::std::string const &t) {
    __clear();
    type_ = Type::myString;
    ::new (std::addressof(value_.myString)) ::std::string(t);
    return value_.myString;
  }

  ::std::string& set_myString(::std::string&& t) {
    __clear();
    type_ = Type::myString;
    ::new (std::addressof(value_.myString)) ::std::string(std::move(t));
    return value_.myString;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::std::string, T...>> ::std::string& set_myString(T&&... t) {
    __clear();
    type_ = Type::myString;
    ::new (std::addressof(value_.myString)) ::std::string(std::forward<T>(t)...);
    return value_.myString;
  }

  ::std::string const& get_myString() const {
    assert(type_ == Type::myString);
    return value_.myString;
  }

  ::std::string& mutable_myString() {
    assert(type_ == Type::myString);
    return value_.myString;
  }

  ::std::string move_myString() {
    assert(type_ == Type::myString);
    return std::move(value_.myString);
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myString_ref() const& {
    return {value_.myString, type_, myString, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myString_ref() const&& {
    return {std::move(value_.myString), type_, myString, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myString_ref() & {
    return {value_.myString, type_, myString, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myString_ref() && {
    return {std::move(value_.myString), type_, myString, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  Type getType() const { return static_cast<Type>(type_); }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  storage_type value_;
  std::underlying_type_t<Type> type_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyUnion>;
  friend void swap(MyUnion& a, MyUnion& b);
};

template <class Protocol_>
uint32_t MyUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyException final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = true;
  static const char* __fbthrift_cpp2_gen_thrift_uri();

 public:
  using __fbthrift_cpp2_type = MyException;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyException() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyException(apache::thrift::FragileConstructor, ::std::string myString__arg);

  MyException(MyException&&) noexcept;

  MyException(const MyException&) = default;


  MyException& operator=(MyException&&) = default;

  MyException& operator=(const MyException&) = default;
  void __clear();
 private:
  ::std::string myString;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool myString;
  } __isset = {};

  bool operator==(const MyException&) const;
  bool operator<(const MyException&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myString_ref() const& {
    return {this->myString, __isset.myString};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myString_ref() const&& {
    return {std::move(this->myString), __isset.myString};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myString_ref() & {
    return {this->myString, __isset.myString};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myString_ref() && {
    return {std::move(this->myString), __isset.myString};
  }

  const ::std::string& get_myString() const& {
    return myString;
  }

  ::std::string get_myString() && {
    return std::move(myString);
  }

  template <typename T_MyException_myString_struct_setter = ::std::string>
  ::std::string& set_myString(T_MyException_myString_struct_setter&& myString_) {
    myString = std::forward<T_MyException_myString_struct_setter>(myString_);
    __isset.myString = true;
    return myString;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::MyException";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyException>;
  friend void swap(MyException& a, MyException& b);
};

template <class Protocol_>
uint32_t MyException::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::MyUnion::Type>;

template <> struct TEnumTraits<::cpp2::MyUnion::Type> {
  using type = ::cpp2::MyUnion::Type;

  static constexpr std::size_t const size = 1;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

};
}} // apache::thrift
