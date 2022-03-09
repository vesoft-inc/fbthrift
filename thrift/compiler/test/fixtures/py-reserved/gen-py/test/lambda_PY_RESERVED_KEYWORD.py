#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import sys
from thrift.util.Recursive import fix_spec
from thrift.Thrift import TType, TMessageType, TPriority, TRequestContext, TProcessorEventHandler, TServerInterface, TProcessor, TException, TApplicationException, UnimplementedTypedef
from thrift.protocol.TProtocol import TProtocolException

from json import loads
import sys
if sys.version_info[0] >= 3:
  long = int

from .ttypes import UTF8STRINGS, def_PY_RESERVED_KEYWORD
from thrift.Thrift import TProcessor
import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
fastproto = None
try:
  from thrift.protocol import fastproto
except ImportError:
  pass

all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

from thrift.util.Decorators import (
  future_process_main,
  future_process_method,
  process_main as thrift_process_main,
  process_method as thrift_process_method,
  should_run_on_thread,
  write_results_after_future,
)

class Iface:
  def global_PY_RESERVED_KEYWORD(self, raise_PY_RESERVED_KEYWORD=None):
    """
    Parameters:
     - raise_PY_RESERVED_KEYWORD
    """
    pass

  def import_PY_RESERVED_KEYWORD(self, ):
    pass


class ContextIface:
  def global_PY_RESERVED_KEYWORD(self, handler_ctx, raise_PY_RESERVED_KEYWORD=None):
    """
    Parameters:
     - raise_PY_RESERVED_KEYWORD
    """
    pass

  def import_PY_RESERVED_KEYWORD(self, handler_ctx, ):
    pass


# HELPER FUNCTIONS AND STRUCTURES

class global_args:
  """
  Attributes:
   - raise_PY_RESERVED_KEYWORD
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.I64:
          self.raise_PY_RESERVED_KEYWORD = iprot.readI64()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('global_args')
    if self.raise_PY_RESERVED_KEYWORD != None:
      oprot.writeFieldBegin('raise', TType.I64, 1)
      oprot.writeI64(self.raise_PY_RESERVED_KEYWORD)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    set_cls = kwargs.pop('custom_set_cls', set)
    dict_cls = kwargs.pop('custom_dict_cls', dict)
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)
    if 'raise' in json_obj and json_obj['raise'] is not None:
      self.raise_PY_RESERVED_KEYWORD = long(json_obj['raise'])

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.raise_PY_RESERVED_KEYWORD is not None:
      value = pprint.pformat(self.raise_PY_RESERVED_KEYWORD, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    raise_PY_RESERVED_KEYWORD=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(global_args)
global_args.thrift_spec = (
  None, # 0
  (1, TType.I64, 'raise_PY_RESERVED_KEYWORD', None, None, 2, ), # 1
)

global_args.thrift_struct_annotations = {
}
global_args.thrift_field_annotations = {
}

def global_args__init__(self, raise_PY_RESERVED_KEYWORD=None,):
  self.raise_PY_RESERVED_KEYWORD = raise_PY_RESERVED_KEYWORD

global_args.__init__ = global_args__init__

def global_args__setstate__(self, state):
  state.setdefault('raise_PY_RESERVED_KEYWORD', None)
  self.__dict__ = state

global_args.__getstate__ = lambda self: self.__dict__.copy()
global_args.__setstate__ = global_args__setstate__

class global_PY_RESERVED_KEYWORD_result:
  """
  Attributes:
   - success
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.BOOL:
          self.success = iprot.readBool()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('global_PY_RESERVED_KEYWORD_result')
    if self.success != None:
      oprot.writeFieldBegin('success', TType.BOOL, 0)
      oprot.writeBool(self.success)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    set_cls = kwargs.pop('custom_set_cls', set)
    dict_cls = kwargs.pop('custom_dict_cls', dict)
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)
    if 'success' in json_obj and json_obj['success'] is not None:
      self.success = json_obj['success']

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.success is not None:
      value = pprint.pformat(self.success, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    success=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(global_PY_RESERVED_KEYWORD_result)
global_PY_RESERVED_KEYWORD_result.thrift_spec = (
  (0, TType.BOOL, 'success', None, None, 2, ), # 0
)

global_PY_RESERVED_KEYWORD_result.thrift_struct_annotations = {
}
global_PY_RESERVED_KEYWORD_result.thrift_field_annotations = {
}

def global_PY_RESERVED_KEYWORD_result__init__(self, success=None,):
  self.success = success

global_PY_RESERVED_KEYWORD_result.__init__ = global_PY_RESERVED_KEYWORD_result__init__

def global_PY_RESERVED_KEYWORD_result__setstate__(self, state):
  state.setdefault('success', None)
  self.__dict__ = state

global_PY_RESERVED_KEYWORD_result.__getstate__ = lambda self: self.__dict__.copy()
global_PY_RESERVED_KEYWORD_result.__setstate__ = global_PY_RESERVED_KEYWORD_result__setstate__

class import_args:

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('import_args')
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    set_cls = kwargs.pop('custom_set_cls', set)
    dict_cls = kwargs.pop('custom_dict_cls', dict)
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)

  def __repr__(self):
    L = []
    padding = ' ' * 4
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(import_args)
import_args.thrift_spec = (
)

import_args.thrift_struct_annotations = {
}
import_args.thrift_field_annotations = {
}

class import_PY_RESERVED_KEYWORD_result:
  """
  Attributes:
   - success
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.STRUCT:
          self.success = def_PY_RESERVED_KEYWORD()
          self.success.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('import_PY_RESERVED_KEYWORD_result')
    if self.success != None:
      oprot.writeFieldBegin('success', TType.STRUCT, 0)
      self.success.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def readFromJson(self, json, is_text=True, **kwargs):
    relax_enum_validation = bool(kwargs.pop('relax_enum_validation', False))
    set_cls = kwargs.pop('custom_set_cls', set)
    dict_cls = kwargs.pop('custom_dict_cls', dict)
    if kwargs:
        extra_kwargs = ', '.join(kwargs.keys())
        raise ValueError(
            'Unexpected keyword arguments: ' + extra_kwargs
        )
    json_obj = json
    if is_text:
      json_obj = loads(json)
    if 'success' in json_obj and json_obj['success'] is not None:
      self.success = def_PY_RESERVED_KEYWORD()
      self.success.readFromJson(json_obj['success'], is_text=False, relax_enum_validation=relax_enum_validation, custom_set_cls=set_cls, custom_dict_cls=dict_cls)

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.success is not None:
      value = pprint.pformat(self.success, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    success=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(import_PY_RESERVED_KEYWORD_result)
import_PY_RESERVED_KEYWORD_result.thrift_spec = (
  (0, TType.STRUCT, 'success', [def_PY_RESERVED_KEYWORD, def_PY_RESERVED_KEYWORD.thrift_spec, False], None, 2, ), # 0
)

import_PY_RESERVED_KEYWORD_result.thrift_struct_annotations = {
}
import_PY_RESERVED_KEYWORD_result.thrift_field_annotations = {
}

def import_PY_RESERVED_KEYWORD_result__init__(self, success=None,):
  self.success = success

import_PY_RESERVED_KEYWORD_result.__init__ = import_PY_RESERVED_KEYWORD_result__init__

def import_PY_RESERVED_KEYWORD_result__setstate__(self, state):
  state.setdefault('success', None)
  self.__dict__ = state

import_PY_RESERVED_KEYWORD_result.__getstate__ = lambda self: self.__dict__.copy()
import_PY_RESERVED_KEYWORD_result.__setstate__ = import_PY_RESERVED_KEYWORD_result__setstate__

class Client(Iface):
  def __enter__(self):
    return self

  def __exit__(self, type, value, tb):
    if self._iprot:
      self._iprot.trans.close()
    if self._oprot and self._iprot is not self._oprot:
      self._oprot.trans.close()

  def __init__(self, iprot=None, oprot=None, cpp_transport=None):
    self._iprot = self._oprot = iprot
    if oprot != None:
      self._oprot = oprot
    self._seqid = 0
    self._fbthrift_cpp_transport = cpp_transport

  def global_PY_RESERVED_KEYWORD(self, raise_PY_RESERVED_KEYWORD=None):
    """
    Parameters:
     - raise_PY_RESERVED_KEYWORD
    """
    if (self._fbthrift_cpp_transport):
      args = global_args()
      args.raise_PY_RESERVED_KEYWORD = raise_PY_RESERVED_KEYWORD
      return self._fbthrift_cpp_transport._send_request("lambda", "global", args, global_result).success
    self.send_global_PY_RESERVED_KEYWORD(raise_PY_RESERVED_KEYWORD)
    return self.recv_global_PY_RESERVED_KEYWORD()

  def send_global_PY_RESERVED_KEYWORD(self, raise_PY_RESERVED_KEYWORD=None):
    self._oprot.writeMessageBegin('global', TMessageType.CALL, self._seqid)
    args = global_args()
    args.raise_PY_RESERVED_KEYWORD = raise_PY_RESERVED_KEYWORD
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_global(self, ):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = global_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success != None:
      return result.success
    raise TApplicationException(TApplicationException.MISSING_RESULT, "global failed: unknown result");

  def import_PY_RESERVED_KEYWORD(self, ):
    if (self._fbthrift_cpp_transport):
      args = import_args()
      return self._fbthrift_cpp_transport._send_request("lambda", "import", args, import_result).success
    self.send_import_PY_RESERVED_KEYWORD()
    return self.recv_import_PY_RESERVED_KEYWORD()

  def send_import_PY_RESERVED_KEYWORD(self, ):
    self._oprot.writeMessageBegin('import', TMessageType.CALL, self._seqid)
    args = import_args()
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_import(self, ):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = import_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success != None:
      return result.success
    raise TApplicationException(TApplicationException.MISSING_RESULT, "import failed: unknown result");


class Processor(Iface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    TProcessor.__init__(self)
    self._handler = handler
    self._processMap = {}
    self._priorityMap = {}
    self._processMap["global"] = Processor.process_global
    self._priorityMap["global"] = TPriority.NORMAL
    self._processMap["import"] = Processor.process_import
    self._priorityMap["import"] = TPriority.NORMAL

  def onewayMethods(self):
    l = []
    l.extend(Processor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(global_args, oneway=False)
  def process_global(self, args, handler_ctx):
    result = global_result()
    try:
      result.success = self._handler.global_PY_RESERVED_KEYWORD(args.raise_PY_RESERVED_KEYWORD)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'global', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

  @thrift_process_method(import_args, oneway=False)
  def process_import(self, args, handler_ctx):
    result = import_result()
    try:
      result.success = self._handler.import_PY_RESERVED_KEYWORD()
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'import', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

Iface._processor_type = Processor

class ContextProcessor(ContextIface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    TProcessor.__init__(self)
    self._handler = handler
    self._processMap = {}
    self._priorityMap = {}
    self._processMap["global"] = ContextProcessor.process_global
    self._priorityMap["global"] = TPriority.NORMAL
    self._processMap["import"] = ContextProcessor.process_import
    self._priorityMap["import"] = TPriority.NORMAL

  def onewayMethods(self):
    l = []
    l.extend(ContextProcessor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(global_args, oneway=False)
  def process_global(self, args, handler_ctx):
    result = global_result()
    try:
      result.success = self._handler.global_PY_RESERVED_KEYWORD(handler_ctx, args.raise_PY_RESERVED_KEYWORD)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'global', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

  @thrift_process_method(import_args, oneway=False)
  def process_import(self, args, handler_ctx):
    result = import_result()
    try:
      result.success = self._handler.import_PY_RESERVED_KEYWORD(handler_ctx)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'import', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

ContextIface._processor_type = ContextProcessor

fix_spec(all_structs)
del all_structs

