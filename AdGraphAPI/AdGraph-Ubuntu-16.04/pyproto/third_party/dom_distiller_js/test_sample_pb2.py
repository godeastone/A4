# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: test_sample.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='test_sample.proto',
  package='dom_distiller.test_sample.proto',
  syntax='proto2',
  serialized_pb=_b('\n\x11test_sample.proto\x12\x1f\x64om_distiller.test_sample.proto\"\xd8\x01\n\x08TypeTest\x12\x13\n\x0b\x66loat_value\x18\x01 \x01(\x02\x12\x14\n\x0c\x64ouble_value\x18\x02 \x01(\x01\x12\x13\n\x0bint32_value\x18\x03 \x01(\x05\x12\x12\n\nbool_value\x18\x04 \x01(\x08\x12\x14\n\x0cstring_value\x18\x05 \x01(\t\x12H\n\rmessage_value\x18\x06 \x01(\x0b\x32\x31.dom_distiller.test_sample.proto.TypeTest.Message\x1a\x18\n\x07Message\x12\r\n\x05\x64ummy\x18\x01 \x01(\x08\"\xd8\x01\n\x08Repeated\x12\x13\n\x0b\x66loat_value\x18\x01 \x03(\x02\x12\x14\n\x0c\x64ouble_value\x18\x02 \x03(\x01\x12\x13\n\x0bint32_value\x18\x03 \x03(\x05\x12\x12\n\nbool_value\x18\x04 \x03(\x08\x12\x14\n\x0cstring_value\x18\x05 \x03(\t\x12H\n\rmessage_value\x18\x06 \x03(\x0b\x32\x31.dom_distiller.test_sample.proto.Repeated.Message\x1a\x18\n\x07Message\x12\r\n\x05\x64ummy\x18\x01 \x03(\x08\x42\x44\n(org.chromium.distiller.test_sample.protoB\x16\x44omDistillerTestProtosH\x03')
)




_TYPETEST_MESSAGE = _descriptor.Descriptor(
  name='Message',
  full_name='dom_distiller.test_sample.proto.TypeTest.Message',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='dummy', full_name='dom_distiller.test_sample.proto.TypeTest.Message.dummy', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=247,
  serialized_end=271,
)

_TYPETEST = _descriptor.Descriptor(
  name='TypeTest',
  full_name='dom_distiller.test_sample.proto.TypeTest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='float_value', full_name='dom_distiller.test_sample.proto.TypeTest.float_value', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='double_value', full_name='dom_distiller.test_sample.proto.TypeTest.double_value', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='int32_value', full_name='dom_distiller.test_sample.proto.TypeTest.int32_value', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bool_value', full_name='dom_distiller.test_sample.proto.TypeTest.bool_value', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='string_value', full_name='dom_distiller.test_sample.proto.TypeTest.string_value', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='message_value', full_name='dom_distiller.test_sample.proto.TypeTest.message_value', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_TYPETEST_MESSAGE, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=55,
  serialized_end=271,
)


_REPEATED_MESSAGE = _descriptor.Descriptor(
  name='Message',
  full_name='dom_distiller.test_sample.proto.Repeated.Message',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='dummy', full_name='dom_distiller.test_sample.proto.Repeated.Message.dummy', index=0,
      number=1, type=8, cpp_type=7, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=466,
  serialized_end=490,
)

_REPEATED = _descriptor.Descriptor(
  name='Repeated',
  full_name='dom_distiller.test_sample.proto.Repeated',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='float_value', full_name='dom_distiller.test_sample.proto.Repeated.float_value', index=0,
      number=1, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='double_value', full_name='dom_distiller.test_sample.proto.Repeated.double_value', index=1,
      number=2, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='int32_value', full_name='dom_distiller.test_sample.proto.Repeated.int32_value', index=2,
      number=3, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bool_value', full_name='dom_distiller.test_sample.proto.Repeated.bool_value', index=3,
      number=4, type=8, cpp_type=7, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='string_value', full_name='dom_distiller.test_sample.proto.Repeated.string_value', index=4,
      number=5, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='message_value', full_name='dom_distiller.test_sample.proto.Repeated.message_value', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REPEATED_MESSAGE, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=274,
  serialized_end=490,
)

_TYPETEST_MESSAGE.containing_type = _TYPETEST
_TYPETEST.fields_by_name['message_value'].message_type = _TYPETEST_MESSAGE
_REPEATED_MESSAGE.containing_type = _REPEATED
_REPEATED.fields_by_name['message_value'].message_type = _REPEATED_MESSAGE
DESCRIPTOR.message_types_by_name['TypeTest'] = _TYPETEST
DESCRIPTOR.message_types_by_name['Repeated'] = _REPEATED
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TypeTest = _reflection.GeneratedProtocolMessageType('TypeTest', (_message.Message,), dict(

  Message = _reflection.GeneratedProtocolMessageType('Message', (_message.Message,), dict(
    DESCRIPTOR = _TYPETEST_MESSAGE,
    __module__ = 'test_sample_pb2'
    # @@protoc_insertion_point(class_scope:dom_distiller.test_sample.proto.TypeTest.Message)
    ))
  ,
  DESCRIPTOR = _TYPETEST,
  __module__ = 'test_sample_pb2'
  # @@protoc_insertion_point(class_scope:dom_distiller.test_sample.proto.TypeTest)
  ))
_sym_db.RegisterMessage(TypeTest)
_sym_db.RegisterMessage(TypeTest.Message)

Repeated = _reflection.GeneratedProtocolMessageType('Repeated', (_message.Message,), dict(

  Message = _reflection.GeneratedProtocolMessageType('Message', (_message.Message,), dict(
    DESCRIPTOR = _REPEATED_MESSAGE,
    __module__ = 'test_sample_pb2'
    # @@protoc_insertion_point(class_scope:dom_distiller.test_sample.proto.Repeated.Message)
    ))
  ,
  DESCRIPTOR = _REPEATED,
  __module__ = 'test_sample_pb2'
  # @@protoc_insertion_point(class_scope:dom_distiller.test_sample.proto.Repeated)
  ))
_sym_db.RegisterMessage(Repeated)
_sym_db.RegisterMessage(Repeated.Message)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n(org.chromium.distiller.test_sample.protoB\026DomDistillerTestProtosH\003'))
# @@protoc_insertion_point(module_scope)