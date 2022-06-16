#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import facebook.thrift.annotation.scope.thrift_types

import facebook.thrift.annotation.thrift.thrift_types


class GeneratePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.GeneratePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/GeneratePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_GeneratePatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.GeneratePatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.GeneratePatch, self)


class GenerateOptionalPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.GenerateOptionalPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/GenerateOptionalPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_GenerateOptionalPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.GenerateOptionalPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.GenerateOptionalPatch, self)


class BoolPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "invert",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BoolPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BoolPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BoolPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.BoolPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.BoolPatch, self)


class BytePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BytePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BytePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BytePatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.BytePatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.BytePatch, self)


class I16Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I16Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I16Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I16Patch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.I16Patch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.I16Patch, self)


class I32Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I32Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I32Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I32Patch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.I32Patch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.I32Patch, self)


class I64Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I64Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I64Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I64Patch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.I64Patch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.I64Patch, self)


class FloatPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.FloatPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/FloatPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FloatPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FloatPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.FloatPatch, self)


class DoublePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.DoublePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/DoublePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_DoublePatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.DoublePatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.DoublePatch, self)


class StringPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "prepend",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "append",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.StringPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/StringPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_StringPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.StringPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.StringPatch, self)


class BinaryPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BinaryPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BinaryPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BinaryPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.BinaryPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.BinaryPatch, self)


class OptionalBoolPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BoolPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BoolPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBoolPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBoolPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBoolPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalBoolPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalBoolPatch, self)


class OptionalBytePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BytePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BytePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBytePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBytePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBytePatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalBytePatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalBytePatch, self)


class OptionalI16Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I16Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I16Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI16Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI16Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI16Patch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalI16Patch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalI16Patch, self)


class OptionalI32Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I32Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I32Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI32Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI32Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI32Patch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalI32Patch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalI32Patch, self)


class OptionalI64Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I64Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I64Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI64Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI64Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI64Patch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalI64Patch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalI64Patch, self)


class OptionalFloatPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(FloatPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(FloatPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalFloatPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalFloatPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalFloatPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalFloatPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalFloatPatch, self)


class OptionalDoublePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(DoublePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(DoublePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalDoublePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalDoublePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalDoublePatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalDoublePatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalDoublePatch, self)


class OptionalStringPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(StringPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(StringPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalStringPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalStringPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalStringPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalStringPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalStringPatch, self)


class OptionalBinaryPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BinaryPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BinaryPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBinaryPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBinaryPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBinaryPatch()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalBinaryPatch, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.OptionalBinaryPatch, self)

# This unfortunately has to be down here to prevent circular imports
import apache.thrift.op.patch.thrift_metadata


def _fbthrift_metadata__struct_GeneratePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_GeneratePatch()
def _fbthrift_metadata__struct_GenerateOptionalPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_GenerateOptionalPatch()
def _fbthrift_metadata__struct_BoolPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BoolPatch()
def _fbthrift_metadata__struct_BytePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BytePatch()
def _fbthrift_metadata__struct_I16Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I16Patch()
def _fbthrift_metadata__struct_I32Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I32Patch()
def _fbthrift_metadata__struct_I64Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I64Patch()
def _fbthrift_metadata__struct_FloatPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_FloatPatch()
def _fbthrift_metadata__struct_DoublePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_DoublePatch()
def _fbthrift_metadata__struct_StringPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_StringPatch()
def _fbthrift_metadata__struct_BinaryPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BinaryPatch()
def _fbthrift_metadata__struct_OptionalBoolPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBoolPatch()
def _fbthrift_metadata__struct_OptionalBytePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBytePatch()
def _fbthrift_metadata__struct_OptionalI16Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI16Patch()
def _fbthrift_metadata__struct_OptionalI32Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI32Patch()
def _fbthrift_metadata__struct_OptionalI64Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI64Patch()
def _fbthrift_metadata__struct_OptionalFloatPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalFloatPatch()
def _fbthrift_metadata__struct_OptionalDoublePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalDoublePatch()
def _fbthrift_metadata__struct_OptionalStringPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalStringPatch()
def _fbthrift_metadata__struct_OptionalBinaryPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBinaryPatch()

_fbthrift_all_structs = [
    GeneratePatch,
    GenerateOptionalPatch,
    BoolPatch,
    BytePatch,
    I16Patch,
    I32Patch,
    I64Patch,
    FloatPatch,
    DoublePatch,
    StringPatch,
    BinaryPatch,
    OptionalBoolPatch,
    OptionalBytePatch,
    OptionalI16Patch,
    OptionalI32Patch,
    OptionalI64Patch,
    OptionalFloatPatch,
    OptionalDoublePatch,
    OptionalStringPatch,
    OptionalBinaryPatch,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
