
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.utility cimport move as __move
from folly.iobuf cimport (
    from_unique_ptr as __IOBuf_from_unique_ptr,
    IOBuf as __IOBuf,
)
from thrift.python.serializer import (
    deserialize as __deserialize,
    Protocol as __Protocol,
    serialize_iobuf as __serialize_iobuf,
)
import test.fixtures.python_capi.containers.thrift_types as __thrift_types

cdef api int can_extract__test__fixtures__python_capi__containers__TemplateLists(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.TemplateLists) else 0

cdef api __cIOBuf* extract__test__fixtures__python_capi__containers__TemplateLists(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__test__fixtures__python_capi__containers__TemplateLists(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.TemplateLists,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__test__fixtures__python_capi__containers__TemplateLists(object data):
    return __thrift_types.TemplateLists._fbthrift_create(data)

cdef api int can_extract__test__fixtures__python_capi__containers__TemplateSets(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.TemplateSets) else 0

cdef api __cIOBuf* extract__test__fixtures__python_capi__containers__TemplateSets(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__test__fixtures__python_capi__containers__TemplateSets(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.TemplateSets,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__test__fixtures__python_capi__containers__TemplateSets(object data):
    return __thrift_types.TemplateSets._fbthrift_create(data)

cdef api int can_extract__test__fixtures__python_capi__containers__TemplateMaps(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.TemplateMaps) else 0

cdef api __cIOBuf* extract__test__fixtures__python_capi__containers__TemplateMaps(object __obj) except NULL:
    cdef __IOBuf __buf = __serialize_iobuf(__obj, protocol=__Protocol.BINARY)
    return __buf._ours.release()

cdef api object construct__test__fixtures__python_capi__containers__TemplateMaps(__unique_ptr[__cIOBuf] __s):
    return __deserialize(
        __thrift_types.TemplateMaps,
        __IOBuf_from_unique_ptr(__move(__s)),
        protocol=__Protocol.BINARY
    )

cdef api object init__test__fixtures__python_capi__containers__TemplateMaps(object data):
    return __thrift_types.TemplateMaps._fbthrift_create(data)

