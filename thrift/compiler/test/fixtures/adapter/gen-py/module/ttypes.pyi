#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

# pyre-unsafe

import typing as __T  # sometimes `t` is used as a field name

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

__property__ = property  # sometimes `property` is used as a field name

import thrift.annotation.cpp.ttypes
import thrift.annotation.python.ttypes
import thrift.annotation.thrift.ttypes
import thrift.annotation.hack.ttypes
import my

UTF8STRINGS: bool


class Foo:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        intField: __T.Optional[int] = ...,
        optionalIntField: __T.Optional[int] = ...,
        intFieldWithDefault: int = ...,
        setField: __T.Optional[__T.Set[str]] = ...,
        optionalSetField: __T.Optional[__T.Set[str]] = ...,
        mapField: __T.Optional[__T.Dict[str, __T.List[str]]] = ...,
        optionalMapField: __T.Optional[__T.Dict[str, __T.List[str]]] = ...,
        binaryField: __T.Optional[bytes] = ...,
        longField: __T.Optional[int] = ...,
        adaptedLongField: __T.Optional[int] = ...,
        doubleAdaptedField: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def intField(self) -> int: ...
    @intField.setter
    def intField(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def optionalIntField(self) -> __T.Optional[int]: ...
    @optionalIntField.setter
    def optionalIntField(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def intFieldWithDefault(self) -> int: ...
    @intFieldWithDefault.setter
    def intFieldWithDefault(self, value: int) -> None: ...
    @__property__
    def setField(self) -> __T.Set[str]: ...
    @setField.setter
    def setField(self, value: __T.Optional[__T.Set[str]]) -> None: ...
    @__property__
    def optionalSetField(self) -> __T.Optional[__T.Set[str]]: ...
    @optionalSetField.setter
    def optionalSetField(self, value: __T.Optional[__T.Set[str]]) -> None: ...
    @__property__
    def mapField(self) -> __T.Dict[str, __T.List[str]]: ...
    @mapField.setter
    def mapField(self, value: __T.Optional[__T.Dict[str, __T.List[str]]]) -> None: ...
    @__property__
    def optionalMapField(self) -> __T.Optional[__T.Dict[str, __T.List[str]]]: ...
    @optionalMapField.setter
    def optionalMapField(self, value: __T.Optional[__T.Dict[str, __T.List[str]]]) -> None: ...
    @__property__
    def binaryField(self) -> bytes: ...
    @binaryField.setter
    def binaryField(self, value: __T.Optional[bytes]) -> None: ...
    @__property__
    def longField(self) -> int: ...
    @longField.setter
    def longField(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def adaptedLongField(self) -> int: ...
    @adaptedLongField.setter
    def adaptedLongField(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def doubleAdaptedField(self) -> int: ...
    @doubleAdaptedField.setter
    def doubleAdaptedField(self, value: __T.Optional[int]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class Baz:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        intField: __T.Optional[int] = ...,
        setField: __T.Optional[__T.Set[str]] = ...,
        mapField: __T.Optional[__T.Dict[str, __T.List[str]]] = ...,
        binaryField: __T.Optional[bytes] = ...,
        longField: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def intField(self) -> int: ...
    @intField.setter
    def intField(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def setField(self) -> __T.Set[str]: ...
    @setField.setter
    def setField(self, value: __T.Optional[__T.Set[str]]) -> None: ...
    @__property__
    def mapField(self) -> __T.Dict[str, __T.List[str]]: ...
    @mapField.setter
    def mapField(self, value: __T.Optional[__T.Dict[str, __T.List[str]]]) -> None: ...
    @__property__
    def binaryField(self) -> bytes: ...
    @binaryField.setter
    def binaryField(self, value: __T.Optional[bytes]) -> None: ...
    @__property__
    def longField(self) -> int: ...
    @longField.setter
    def longField(self, value: __T.Optional[int]) -> None: ...

    def getType(self) -> int: ...

    def get_intField(self) -> int: ...
    def set_intField(self, value: int) -> None: ...
    def get_setField(self) -> __T.Set[str]: ...
    def set_setField(self, value: __T.Set[str]) -> None: ...
    def get_mapField(self) -> __T.Dict[str, __T.List[str]]: ...
    def set_mapField(self, value: __T.Dict[str, __T.List[str]]) -> None: ...
    def get_binaryField(self) -> bytes: ...
    def set_binaryField(self, value: bytes) -> None: ...
    def get_longField(self) -> int: ...
    def set_longField(self, value: int) -> None: ...

    __EMPTY__: int = ...
    INTFIELD: int = ...
    SETFIELD: int = ...
    MAPFIELD: int = ...
    BINARYFIELD: int = ...
    LONGFIELD: int = ...

    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class Bar:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        structField: __T.Optional[my.Adapter1.Type] = ...,
        optionalStructField: __T.Optional[my.Adapter1.Type] = ...,
        structListField: __T.Optional[__T.List[my.Adapter1.Type]] = ...,
        optionalStructListField: __T.Optional[__T.List[my.Adapter1.Type]] = ...,
        unionField: __T.Optional[my.Adapter1.Type] = ...,
        optionalUnionField: __T.Optional[my.Adapter1.Type] = ...,
        adaptedStructField: __T.Optional[DirectlyAdapted] = ...
    ) -> None:
        ...

    @__property__
    def structField(self) -> my.Adapter1.Type: ...
    @structField.setter
    def structField(self, value: __T.Optional[my.Adapter1.Type]) -> None: ...
    @__property__
    def optionalStructField(self) -> __T.Optional[my.Adapter1.Type]: ...
    @optionalStructField.setter
    def optionalStructField(self, value: __T.Optional[my.Adapter1.Type]) -> None: ...
    @__property__
    def structListField(self) -> __T.List[my.Adapter1.Type]: ...
    @structListField.setter
    def structListField(self, value: __T.Optional[__T.List[my.Adapter1.Type]]) -> None: ...
    @__property__
    def optionalStructListField(self) -> __T.Optional[__T.List[my.Adapter1.Type]]: ...
    @optionalStructListField.setter
    def optionalStructListField(self, value: __T.Optional[__T.List[my.Adapter1.Type]]) -> None: ...
    @__property__
    def unionField(self) -> my.Adapter1.Type: ...
    @unionField.setter
    def unionField(self, value: __T.Optional[my.Adapter1.Type]) -> None: ...
    @__property__
    def optionalUnionField(self) -> __T.Optional[my.Adapter1.Type]: ...
    @optionalUnionField.setter
    def optionalUnionField(self, value: __T.Optional[my.Adapter1.Type]) -> None: ...
    @__property__
    def adaptedStructField(self) -> DirectlyAdapted: ...
    @adaptedStructField.setter
    def adaptedStructField(self, value: __T.Optional[DirectlyAdapted]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class DirectlyAdapted:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        field: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def field(self) -> int: ...
    @field.setter
    def field(self, value: __T.Optional[int]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class StructWithFieldAdapter:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        field: __T.Optional[int] = ...,
        shared_field: __T.Optional[int] = ...,
        opt_shared_field: __T.Optional[int] = ...,
        opt_boxed_field: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def field(self) -> int: ...
    @field.setter
    def field(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def shared_field(self) -> int: ...
    @shared_field.setter
    def shared_field(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def opt_shared_field(self) -> __T.Optional[int]: ...
    @opt_shared_field.setter
    def opt_shared_field(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def opt_boxed_field(self) -> __T.Optional[int]: ...
    @opt_boxed_field.setter
    def opt_boxed_field(self, value: __T.Optional[int]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class TerseAdaptedFields:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        int_field: __T.Optional[int] = ...,
        string_field: __T.Optional[str] = ...,
        set_field: __T.Optional[__T.Set[int]] = ...
    ) -> None:
        ...

    @__property__
    def int_field(self) -> int: ...
    @int_field.setter
    def int_field(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def string_field(self) -> str: ...
    @string_field.setter
    def string_field(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def set_field(self) -> __T.Set[int]: ...
    @set_field.setter
    def set_field(self, value: __T.Optional[__T.Set[int]]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class B:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        a: __T.Optional[A] = ...
    ) -> None:
        ...

    @__property__
    def a(self) -> A: ...
    @a.setter
    def a(self, value: __T.Optional[A]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class A:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


SetWithAdapter = __T.Set[str]
StringWithAdapter = str
ListWithElemAdapter = __T.List[str]
ListWithElemAdapter_withAdapter = __T.List[str]
MyI64 = int
DoubleTypedefI64 = int
MyI32 = int
FooWithAdapter = Foo
StructWithAdapter = my.Adapter2.Type
UnionWithAdapter = my.Adapter2.Type
AdaptedA = A
