# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: get_pivots_response.proto

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
  name='get_pivots_response.proto',
  package='contextual_suggestions',
  syntax='proto2',
  serialized_pb=_b('\n\x19get_pivots_response.proto\x12\x16\x63ontextual_suggestions\"C\n\x11GetPivotsResponse\x12.\n\x06pivots\x18\x02 \x01(\x0b\x32\x1e.contextual_suggestions.Pivots\"\xb8\x01\n\x06Pivots\x12/\n\x04item\x18\x01 \x03(\x0b\x32!.contextual_suggestions.PivotItem\x12H\n\x14\x61uto_peek_conditions\x18\x03 \x01(\x0b\x32*.contextual_suggestions.AutoPeekConditions\x12\x33\n\tpeek_text\x18\x04 \x01(\x0b\x32 .contextual_suggestions.PeekText\"\x87\x01\n\tPivotItem\x12\x39\n\x08\x64ocument\x18\x01 \x01(\x0b\x32%.contextual_suggestions.PivotDocumentH\x00\x12\x37\n\x07\x63luster\x18\x06 \x01(\x0b\x32$.contextual_suggestions.PivotClusterH\x00\x42\x06\n\x04kind\"\xd0\x01\n\rPivotDocument\x12(\n\x03url\x18\x01 \x01(\x0b\x32\x1b.contextual_suggestions.Url\x12,\n\x05image\x18\x02 \x01(\x0b\x32\x1d.contextual_suggestions.Image\x12\r\n\x05title\x18\x03 \x01(\t\x12\x0f\n\x07summary\x18\x04 \x01(\t\x12\x11\n\tsite_name\x18\x05 \x01(\t\x12\x34\n\rfavicon_image\x18\x06 \x01(\x0b\x32\x1d.contextual_suggestions.Image\"\xa3\x01\n\x0cPivotCluster\x12\x33\n\x05label\x18\x01 \x01(\x0b\x32$.contextual_suggestions.ClusterLabel\x12/\n\x04item\x18\x02 \x03(\x0b\x32!.contextual_suggestions.PivotItem\x12-\n\"num_items_to_display_pre_expansion\x18\x03 \x01(\x05:\x01\x31\"\x1d\n\x0c\x43lusterLabel\x12\r\n\x05label\x18\x01 \x01(\t\"\x96\x01\n\x12\x41utoPeekConditions\x12\x15\n\nconfidence\x18\x01 \x01(\x02:\x01\x31\x12!\n\x16page_scroll_percentage\x18\x02 \x01(\x02:\x01\x30\x12\"\n\x17minimum_seconds_on_page\x18\x03 \x01(\x02:\x01\x30\x12\"\n\x17maximum_number_of_peeks\x18\x04 \x01(\x04:\x01\x30\"\x18\n\x08PeekText\x12\x0c\n\x04text\x18\x01 \x01(\t\"\x16\n\x03Url\x12\x0f\n\x07raw_url\x18\x01 \x01(\t\"n\n\x05Image\x12+\n\x02id\x18\x01 \x01(\x0b\x32\x1f.contextual_suggestions.ImageId\x12\x38\n\x0bsource_data\x18\x02 \x01(\x0b\x32#.contextual_suggestions.ImageSource\"\"\n\x07ImageId\x12\x17\n\x0f\x65ncrypted_docid\x18\x01 \x01(\t\"B\n\x0bImageSource\x12\x33\n\x06raster\x18\x01 \x01(\x0b\x32#.contextual_suggestions.RasterImage\"7\n\x0bRasterImage\x12(\n\x03url\x18\x02 \x01(\x0b\x32\x1b.contextual_suggestions.UrlB\x02H\x03')
)




_GETPIVOTSRESPONSE = _descriptor.Descriptor(
  name='GetPivotsResponse',
  full_name='contextual_suggestions.GetPivotsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pivots', full_name='contextual_suggestions.GetPivotsResponse.pivots', index=0,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=53,
  serialized_end=120,
)


_PIVOTS = _descriptor.Descriptor(
  name='Pivots',
  full_name='contextual_suggestions.Pivots',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='item', full_name='contextual_suggestions.Pivots.item', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='auto_peek_conditions', full_name='contextual_suggestions.Pivots.auto_peek_conditions', index=1,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='peek_text', full_name='contextual_suggestions.Pivots.peek_text', index=2,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=123,
  serialized_end=307,
)


_PIVOTITEM = _descriptor.Descriptor(
  name='PivotItem',
  full_name='contextual_suggestions.PivotItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='document', full_name='contextual_suggestions.PivotItem.document', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cluster', full_name='contextual_suggestions.PivotItem.cluster', index=1,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
    _descriptor.OneofDescriptor(
      name='kind', full_name='contextual_suggestions.PivotItem.kind',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=310,
  serialized_end=445,
)


_PIVOTDOCUMENT = _descriptor.Descriptor(
  name='PivotDocument',
  full_name='contextual_suggestions.PivotDocument',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='url', full_name='contextual_suggestions.PivotDocument.url', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='image', full_name='contextual_suggestions.PivotDocument.image', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='title', full_name='contextual_suggestions.PivotDocument.title', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='summary', full_name='contextual_suggestions.PivotDocument.summary', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='site_name', full_name='contextual_suggestions.PivotDocument.site_name', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='favicon_image', full_name='contextual_suggestions.PivotDocument.favicon_image', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=448,
  serialized_end=656,
)


_PIVOTCLUSTER = _descriptor.Descriptor(
  name='PivotCluster',
  full_name='contextual_suggestions.PivotCluster',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='label', full_name='contextual_suggestions.PivotCluster.label', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='item', full_name='contextual_suggestions.PivotCluster.item', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='num_items_to_display_pre_expansion', full_name='contextual_suggestions.PivotCluster.num_items_to_display_pre_expansion', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=True, default_value=1,
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
  serialized_start=659,
  serialized_end=822,
)


_CLUSTERLABEL = _descriptor.Descriptor(
  name='ClusterLabel',
  full_name='contextual_suggestions.ClusterLabel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='label', full_name='contextual_suggestions.ClusterLabel.label', index=0,
      number=1, type=9, cpp_type=9, label=1,
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
  serialized_start=824,
  serialized_end=853,
)


_AUTOPEEKCONDITIONS = _descriptor.Descriptor(
  name='AutoPeekConditions',
  full_name='contextual_suggestions.AutoPeekConditions',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='confidence', full_name='contextual_suggestions.AutoPeekConditions.confidence', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=True, default_value=float(1),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='page_scroll_percentage', full_name='contextual_suggestions.AutoPeekConditions.page_scroll_percentage', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=True, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='minimum_seconds_on_page', full_name='contextual_suggestions.AutoPeekConditions.minimum_seconds_on_page', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=True, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='maximum_number_of_peeks', full_name='contextual_suggestions.AutoPeekConditions.maximum_number_of_peeks', index=3,
      number=4, type=4, cpp_type=4, label=1,
      has_default_value=True, default_value=0,
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
  serialized_start=856,
  serialized_end=1006,
)


_PEEKTEXT = _descriptor.Descriptor(
  name='PeekText',
  full_name='contextual_suggestions.PeekText',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='text', full_name='contextual_suggestions.PeekText.text', index=0,
      number=1, type=9, cpp_type=9, label=1,
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
  serialized_start=1008,
  serialized_end=1032,
)


_URL = _descriptor.Descriptor(
  name='Url',
  full_name='contextual_suggestions.Url',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='raw_url', full_name='contextual_suggestions.Url.raw_url', index=0,
      number=1, type=9, cpp_type=9, label=1,
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
  serialized_start=1034,
  serialized_end=1056,
)


_IMAGE = _descriptor.Descriptor(
  name='Image',
  full_name='contextual_suggestions.Image',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='contextual_suggestions.Image.id', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='source_data', full_name='contextual_suggestions.Image.source_data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=1058,
  serialized_end=1168,
)


_IMAGEID = _descriptor.Descriptor(
  name='ImageId',
  full_name='contextual_suggestions.ImageId',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='encrypted_docid', full_name='contextual_suggestions.ImageId.encrypted_docid', index=0,
      number=1, type=9, cpp_type=9, label=1,
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
  serialized_start=1170,
  serialized_end=1204,
)


_IMAGESOURCE = _descriptor.Descriptor(
  name='ImageSource',
  full_name='contextual_suggestions.ImageSource',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='raster', full_name='contextual_suggestions.ImageSource.raster', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=1206,
  serialized_end=1272,
)


_RASTERIMAGE = _descriptor.Descriptor(
  name='RasterImage',
  full_name='contextual_suggestions.RasterImage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='url', full_name='contextual_suggestions.RasterImage.url', index=0,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=1274,
  serialized_end=1329,
)

_GETPIVOTSRESPONSE.fields_by_name['pivots'].message_type = _PIVOTS
_PIVOTS.fields_by_name['item'].message_type = _PIVOTITEM
_PIVOTS.fields_by_name['auto_peek_conditions'].message_type = _AUTOPEEKCONDITIONS
_PIVOTS.fields_by_name['peek_text'].message_type = _PEEKTEXT
_PIVOTITEM.fields_by_name['document'].message_type = _PIVOTDOCUMENT
_PIVOTITEM.fields_by_name['cluster'].message_type = _PIVOTCLUSTER
_PIVOTITEM.oneofs_by_name['kind'].fields.append(
  _PIVOTITEM.fields_by_name['document'])
_PIVOTITEM.fields_by_name['document'].containing_oneof = _PIVOTITEM.oneofs_by_name['kind']
_PIVOTITEM.oneofs_by_name['kind'].fields.append(
  _PIVOTITEM.fields_by_name['cluster'])
_PIVOTITEM.fields_by_name['cluster'].containing_oneof = _PIVOTITEM.oneofs_by_name['kind']
_PIVOTDOCUMENT.fields_by_name['url'].message_type = _URL
_PIVOTDOCUMENT.fields_by_name['image'].message_type = _IMAGE
_PIVOTDOCUMENT.fields_by_name['favicon_image'].message_type = _IMAGE
_PIVOTCLUSTER.fields_by_name['label'].message_type = _CLUSTERLABEL
_PIVOTCLUSTER.fields_by_name['item'].message_type = _PIVOTITEM
_IMAGE.fields_by_name['id'].message_type = _IMAGEID
_IMAGE.fields_by_name['source_data'].message_type = _IMAGESOURCE
_IMAGESOURCE.fields_by_name['raster'].message_type = _RASTERIMAGE
_RASTERIMAGE.fields_by_name['url'].message_type = _URL
DESCRIPTOR.message_types_by_name['GetPivotsResponse'] = _GETPIVOTSRESPONSE
DESCRIPTOR.message_types_by_name['Pivots'] = _PIVOTS
DESCRIPTOR.message_types_by_name['PivotItem'] = _PIVOTITEM
DESCRIPTOR.message_types_by_name['PivotDocument'] = _PIVOTDOCUMENT
DESCRIPTOR.message_types_by_name['PivotCluster'] = _PIVOTCLUSTER
DESCRIPTOR.message_types_by_name['ClusterLabel'] = _CLUSTERLABEL
DESCRIPTOR.message_types_by_name['AutoPeekConditions'] = _AUTOPEEKCONDITIONS
DESCRIPTOR.message_types_by_name['PeekText'] = _PEEKTEXT
DESCRIPTOR.message_types_by_name['Url'] = _URL
DESCRIPTOR.message_types_by_name['Image'] = _IMAGE
DESCRIPTOR.message_types_by_name['ImageId'] = _IMAGEID
DESCRIPTOR.message_types_by_name['ImageSource'] = _IMAGESOURCE
DESCRIPTOR.message_types_by_name['RasterImage'] = _RASTERIMAGE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GetPivotsResponse = _reflection.GeneratedProtocolMessageType('GetPivotsResponse', (_message.Message,), dict(
  DESCRIPTOR = _GETPIVOTSRESPONSE,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.GetPivotsResponse)
  ))
_sym_db.RegisterMessage(GetPivotsResponse)

Pivots = _reflection.GeneratedProtocolMessageType('Pivots', (_message.Message,), dict(
  DESCRIPTOR = _PIVOTS,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.Pivots)
  ))
_sym_db.RegisterMessage(Pivots)

PivotItem = _reflection.GeneratedProtocolMessageType('PivotItem', (_message.Message,), dict(
  DESCRIPTOR = _PIVOTITEM,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.PivotItem)
  ))
_sym_db.RegisterMessage(PivotItem)

PivotDocument = _reflection.GeneratedProtocolMessageType('PivotDocument', (_message.Message,), dict(
  DESCRIPTOR = _PIVOTDOCUMENT,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.PivotDocument)
  ))
_sym_db.RegisterMessage(PivotDocument)

PivotCluster = _reflection.GeneratedProtocolMessageType('PivotCluster', (_message.Message,), dict(
  DESCRIPTOR = _PIVOTCLUSTER,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.PivotCluster)
  ))
_sym_db.RegisterMessage(PivotCluster)

ClusterLabel = _reflection.GeneratedProtocolMessageType('ClusterLabel', (_message.Message,), dict(
  DESCRIPTOR = _CLUSTERLABEL,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.ClusterLabel)
  ))
_sym_db.RegisterMessage(ClusterLabel)

AutoPeekConditions = _reflection.GeneratedProtocolMessageType('AutoPeekConditions', (_message.Message,), dict(
  DESCRIPTOR = _AUTOPEEKCONDITIONS,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.AutoPeekConditions)
  ))
_sym_db.RegisterMessage(AutoPeekConditions)

PeekText = _reflection.GeneratedProtocolMessageType('PeekText', (_message.Message,), dict(
  DESCRIPTOR = _PEEKTEXT,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.PeekText)
  ))
_sym_db.RegisterMessage(PeekText)

Url = _reflection.GeneratedProtocolMessageType('Url', (_message.Message,), dict(
  DESCRIPTOR = _URL,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.Url)
  ))
_sym_db.RegisterMessage(Url)

Image = _reflection.GeneratedProtocolMessageType('Image', (_message.Message,), dict(
  DESCRIPTOR = _IMAGE,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.Image)
  ))
_sym_db.RegisterMessage(Image)

ImageId = _reflection.GeneratedProtocolMessageType('ImageId', (_message.Message,), dict(
  DESCRIPTOR = _IMAGEID,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.ImageId)
  ))
_sym_db.RegisterMessage(ImageId)

ImageSource = _reflection.GeneratedProtocolMessageType('ImageSource', (_message.Message,), dict(
  DESCRIPTOR = _IMAGESOURCE,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.ImageSource)
  ))
_sym_db.RegisterMessage(ImageSource)

RasterImage = _reflection.GeneratedProtocolMessageType('RasterImage', (_message.Message,), dict(
  DESCRIPTOR = _RASTERIMAGE,
  __module__ = 'get_pivots_response_pb2'
  # @@protoc_insertion_point(class_scope:contextual_suggestions.RasterImage)
  ))
_sym_db.RegisterMessage(RasterImage)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)