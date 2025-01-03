# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: feature_extractor.proto

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
  name='feature_extractor.proto',
  package='chrome_lang_id',
  syntax='proto2',
  serialized_pb=_b('\n\x17\x66\x65\x61ture_extractor.proto\x12\x0e\x63hrome_lang_id\"(\n\tParameter\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\"\xb6\x01\n\x19\x46\x65\x61tureFunctionDescriptor\x12\x0c\n\x04type\x18\x01 \x02(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x13\n\x08\x61rgument\x18\x03 \x01(\x05:\x01\x30\x12,\n\tparameter\x18\x04 \x03(\x0b\x32\x19.chrome_lang_id.Parameter\x12:\n\x07\x66\x65\x61ture\x18\x07 \x03(\x0b\x32).chrome_lang_id.FeatureFunctionDescriptor\"X\n\x1a\x46\x65\x61tureExtractorDescriptor\x12:\n\x07\x66\x65\x61ture\x18\x01 \x03(\x0b\x32).chrome_lang_id.FeatureFunctionDescriptorB\x02H\x03')
)




_PARAMETER = _descriptor.Descriptor(
  name='Parameter',
  full_name='chrome_lang_id.Parameter',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='chrome_lang_id.Parameter.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='chrome_lang_id.Parameter.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=43,
  serialized_end=83,
)


_FEATUREFUNCTIONDESCRIPTOR = _descriptor.Descriptor(
  name='FeatureFunctionDescriptor',
  full_name='chrome_lang_id.FeatureFunctionDescriptor',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='chrome_lang_id.FeatureFunctionDescriptor.type', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name', full_name='chrome_lang_id.FeatureFunctionDescriptor.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='argument', full_name='chrome_lang_id.FeatureFunctionDescriptor.argument', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='parameter', full_name='chrome_lang_id.FeatureFunctionDescriptor.parameter', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='feature', full_name='chrome_lang_id.FeatureFunctionDescriptor.feature', index=4,
      number=7, type=11, cpp_type=10, label=3,
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
  serialized_start=86,
  serialized_end=268,
)


_FEATUREEXTRACTORDESCRIPTOR = _descriptor.Descriptor(
  name='FeatureExtractorDescriptor',
  full_name='chrome_lang_id.FeatureExtractorDescriptor',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='feature', full_name='chrome_lang_id.FeatureExtractorDescriptor.feature', index=0,
      number=1, type=11, cpp_type=10, label=3,
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
  serialized_start=270,
  serialized_end=358,
)

_FEATUREFUNCTIONDESCRIPTOR.fields_by_name['parameter'].message_type = _PARAMETER
_FEATUREFUNCTIONDESCRIPTOR.fields_by_name['feature'].message_type = _FEATUREFUNCTIONDESCRIPTOR
_FEATUREEXTRACTORDESCRIPTOR.fields_by_name['feature'].message_type = _FEATUREFUNCTIONDESCRIPTOR
DESCRIPTOR.message_types_by_name['Parameter'] = _PARAMETER
DESCRIPTOR.message_types_by_name['FeatureFunctionDescriptor'] = _FEATUREFUNCTIONDESCRIPTOR
DESCRIPTOR.message_types_by_name['FeatureExtractorDescriptor'] = _FEATUREEXTRACTORDESCRIPTOR
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Parameter = _reflection.GeneratedProtocolMessageType('Parameter', (_message.Message,), dict(
  DESCRIPTOR = _PARAMETER,
  __module__ = 'feature_extractor_pb2'
  # @@protoc_insertion_point(class_scope:chrome_lang_id.Parameter)
  ))
_sym_db.RegisterMessage(Parameter)

FeatureFunctionDescriptor = _reflection.GeneratedProtocolMessageType('FeatureFunctionDescriptor', (_message.Message,), dict(
  DESCRIPTOR = _FEATUREFUNCTIONDESCRIPTOR,
  __module__ = 'feature_extractor_pb2'
  # @@protoc_insertion_point(class_scope:chrome_lang_id.FeatureFunctionDescriptor)
  ))
_sym_db.RegisterMessage(FeatureFunctionDescriptor)

FeatureExtractorDescriptor = _reflection.GeneratedProtocolMessageType('FeatureExtractorDescriptor', (_message.Message,), dict(
  DESCRIPTOR = _FEATUREEXTRACTORDESCRIPTOR,
  __module__ = 'feature_extractor_pb2'
  # @@protoc_insertion_point(class_scope:chrome_lang_id.FeatureExtractorDescriptor)
  ))
_sym_db.RegisterMessage(FeatureExtractorDescriptor)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)