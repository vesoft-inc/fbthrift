#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport make_unique, unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast


@__cython.auto_pickle(False)
cdef class __Foo_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Foo_FieldsSetter _fbthrift_create(_module_types.cFoo* struct_cpp_obj):
        cdef __Foo_FieldsSetter __fbthrift_inst = __Foo_FieldsSetter.__new__(__Foo_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"intField")] = __Foo_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"optionalIntField")] = __Foo_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"intFieldWithDefault")] = __Foo_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"setField")] = __Foo_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"optionalSetField")] = __Foo_FieldsSetter._set_field_4
        __fbthrift_inst._setters[__cstring_view(<const char*>"mapField")] = __Foo_FieldsSetter._set_field_5
        __fbthrift_inst._setters[__cstring_view(<const char*>"optionalMapField")] = __Foo_FieldsSetter._set_field_6
        __fbthrift_inst._setters[__cstring_view(<const char*>"binaryField")] = __Foo_FieldsSetter._set_field_7
        __fbthrift_inst._setters[__cstring_view(<const char*>"longField")] = __Foo_FieldsSetter._set_field_8
        __fbthrift_inst._setters[__cstring_view(<const char*>"adaptedLongField")] = __Foo_FieldsSetter._set_field_9
        __fbthrift_inst._setters[__cstring_view(<const char*>"doubleAdaptedField")] = __Foo_FieldsSetter._set_field_10
        return __fbthrift_inst

    cdef void set_field(__Foo_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Foo_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field intField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'intField is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).intField_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field optionalIntField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'optionalIntField is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).optionalIntField_ref().assign(_fbthrift_value)

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field intFieldWithDefault
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'intFieldWithDefault is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).intFieldWithDefault_ref().assign(_fbthrift_value)

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field setField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 3)
            return
        deref(self._struct_cpp_obj).setField_ref().assign(deref(_module_types.Set__string(_fbthrift_value)._cpp_obj))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field optionalSetField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 4)
            return
        deref(self._struct_cpp_obj).optionalSetField_ref().assign(deref(_module_types.Set__string(_fbthrift_value)._cpp_obj))

    cdef void _set_field_5(self, _fbthrift_value) except *:
        # for field mapField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 5)
            return
        deref(self._struct_cpp_obj).mapField_ref().assign(deref(_module_types.Map__string_List__string(_fbthrift_value)._cpp_obj))

    cdef void _set_field_6(self, _fbthrift_value) except *:
        # for field optionalMapField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 6)
            return
        deref(self._struct_cpp_obj).optionalMapField_ref().assign(deref(_module_types.Map__string_List__string(_fbthrift_value)._cpp_obj))

    cdef void _set_field_7(self, _fbthrift_value) except *:
        # for field binaryField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 7)
            return
        if not isinstance(_fbthrift_value, bytes):
            raise TypeError(f'binaryField is not a { bytes !r}.')
        deref(self._struct_cpp_obj).binaryField_ref().assign(cmove(bytes_to_string(_fbthrift_value)))

    cdef void _set_field_8(self, _fbthrift_value) except *:
        # for field longField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 8)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'longField is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).longField_ref().assign(_fbthrift_value)

    cdef void _set_field_9(self, _fbthrift_value) except *:
        # for field adaptedLongField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 9)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'adaptedLongField is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).adaptedLongField_ref().assign(_fbthrift_value)

    cdef void _set_field_10(self, _fbthrift_value) except *:
        # for field doubleAdaptedField
        if _fbthrift_value is None:
            __reset_field[_module_types.cFoo](deref(self._struct_cpp_obj), 10)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'doubleAdaptedField is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).doubleAdaptedField_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __Bar_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Bar_FieldsSetter _fbthrift_create(_module_types.cBar* struct_cpp_obj):
        cdef __Bar_FieldsSetter __fbthrift_inst = __Bar_FieldsSetter.__new__(__Bar_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"structField")] = __Bar_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"optionalStructField")] = __Bar_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"structListField")] = __Bar_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"optionalStructListField")] = __Bar_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"unionField")] = __Bar_FieldsSetter._set_field_4
        __fbthrift_inst._setters[__cstring_view(<const char*>"optionalUnionField")] = __Bar_FieldsSetter._set_field_5
        __fbthrift_inst._setters[__cstring_view(<const char*>"adaptedStructField")] = __Bar_FieldsSetter._set_field_6
        return __fbthrift_inst

    cdef void set_field(__Bar_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Bar_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field structField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.Foo):
            raise TypeError(f'structField is not a { _module_types.Foo !r}.')
        deref(self._struct_cpp_obj).structField_ref().assign(deref((<_module_types.Foo?> _fbthrift_value)._cpp_obj))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field optionalStructField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, _module_types.Foo):
            raise TypeError(f'optionalStructField is not a { _module_types.Foo !r}.')
        deref(self._struct_cpp_obj).optionalStructField_ref().assign(deref((<_module_types.Foo?> _fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field structListField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 2)
            return
        deref(self._struct_cpp_obj).structListField_ref().assign(deref(_module_types.List__Foo(_fbthrift_value)._cpp_obj))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field optionalStructListField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 3)
            return
        deref(self._struct_cpp_obj).optionalStructListField_ref().assign(deref(_module_types.List__Foo(_fbthrift_value)._cpp_obj))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field unionField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 4)
            return
        if not isinstance(_fbthrift_value, _module_types.Baz):
            raise TypeError(f'unionField is not a { _module_types.Baz !r}.')
        deref(self._struct_cpp_obj).unionField_ref().assign(deref((<_module_types.Baz?> _fbthrift_value)._cpp_obj))

    cdef void _set_field_5(self, _fbthrift_value) except *:
        # for field optionalUnionField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 5)
            return
        if not isinstance(_fbthrift_value, _module_types.Baz):
            raise TypeError(f'optionalUnionField is not a { _module_types.Baz !r}.')
        deref(self._struct_cpp_obj).optionalUnionField_ref().assign(deref((<_module_types.Baz?> _fbthrift_value)._cpp_obj))

    cdef void _set_field_6(self, _fbthrift_value) except *:
        # for field adaptedStructField
        if _fbthrift_value is None:
            __reset_field[_module_types.cBar](deref(self._struct_cpp_obj), 6)
            return
        if not isinstance(_fbthrift_value, _module_types.DirectlyAdapted):
            raise TypeError(f'adaptedStructField is not a { _module_types.DirectlyAdapted !r}.')
        deref(self._struct_cpp_obj).adaptedStructField_ref().assign(deref((<_module_types.DirectlyAdapted?> _fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __StructWithFieldAdapter_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StructWithFieldAdapter_FieldsSetter _fbthrift_create(_module_types.cStructWithFieldAdapter* struct_cpp_obj):
        cdef __StructWithFieldAdapter_FieldsSetter __fbthrift_inst = __StructWithFieldAdapter_FieldsSetter.__new__(__StructWithFieldAdapter_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"field")] = __StructWithFieldAdapter_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"shared_field")] = __StructWithFieldAdapter_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_shared_field")] = __StructWithFieldAdapter_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"opt_boxed_field")] = __StructWithFieldAdapter_FieldsSetter._set_field_3
        return __fbthrift_inst

    cdef void set_field(__StructWithFieldAdapter_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StructWithFieldAdapter_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithFieldAdapter](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'field is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).field_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field shared_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithFieldAdapter](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'shared_field is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        assign_shared_const_ptr[cint32_t](deref(self._struct_cpp_obj).shared_field_ref(), const_pointer_cast((<cint32_t?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field opt_shared_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithFieldAdapter](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'opt_shared_field is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        assign_shared_const_ptr[cint32_t](deref(self._struct_cpp_obj).opt_shared_field_ref(), const_pointer_cast((<cint32_t?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field opt_boxed_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cStructWithFieldAdapter](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'opt_boxed_field is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).opt_boxed_field_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __TerseAdaptedFields_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __TerseAdaptedFields_FieldsSetter _fbthrift_create(_module_types.cTerseAdaptedFields* struct_cpp_obj):
        cdef __TerseAdaptedFields_FieldsSetter __fbthrift_inst = __TerseAdaptedFields_FieldsSetter.__new__(__TerseAdaptedFields_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"int_field")] = __TerseAdaptedFields_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"string_field")] = __TerseAdaptedFields_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"set_field")] = __TerseAdaptedFields_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__TerseAdaptedFields_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __TerseAdaptedFields_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field int_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cTerseAdaptedFields](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'int_field is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).int_field_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field string_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cTerseAdaptedFields](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'string_field is not a { str !r}.')
        deref(self._struct_cpp_obj).string_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field set_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cTerseAdaptedFields](deref(self._struct_cpp_obj), 2)
            return
        deref(self._struct_cpp_obj).set_field_ref().assign(deref(_module_types.Set__i32(_fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __B_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __B_FieldsSetter _fbthrift_create(_module_types.cB* struct_cpp_obj):
        cdef __B_FieldsSetter __fbthrift_inst = __B_FieldsSetter.__new__(__B_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"a")] = __B_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__B_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __B_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field a
        if _fbthrift_value is None:
            __reset_field[_module_types.cB](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, _module_types.A):
            raise TypeError(f'a is not a { _module_types.A !r}.')
        deref(self._struct_cpp_obj).a_ref().assign(deref((<_module_types.A?> _fbthrift_value)._cpp_obj))


@__cython.auto_pickle(False)
cdef class __A_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __A_FieldsSetter _fbthrift_create(_module_types.cA* struct_cpp_obj):
        cdef __A_FieldsSetter __fbthrift_inst = __A_FieldsSetter.__new__(__A_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        return __fbthrift_inst

    cdef void set_field(__A_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __A_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

