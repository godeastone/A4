# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: chrome_user_metrics_extension.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import cast_logs_pb2 as cast__logs__pb2
import histogram_event_pb2 as histogram__event__pb2
import memory_leak_report_pb2 as memory__leak__report__pb2
import omnibox_event_pb2 as omnibox__event__pb2
import perf_data_pb2 as perf__data__pb2
import printer_event_pb2 as printer__event__pb2
import reporting_info_pb2 as reporting__info__pb2
import sampled_profile_pb2 as sampled__profile__pb2
import system_profile_pb2 as system__profile__pb2
import translate_event_pb2 as translate__event__pb2
import user_action_event_pb2 as user__action__event__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='chrome_user_metrics_extension.proto',
  package='metrics',
  syntax='proto2',
  serialized_pb=_b('\n#chrome_user_metrics_extension.proto\x12\x07metrics\x1a\x0f\x63\x61st_logs.proto\x1a\x15histogram_event.proto\x1a\x18memory_leak_report.proto\x1a\x13omnibox_event.proto\x1a\x0fperf_data.proto\x1a\x13printer_event.proto\x1a\x14reporting_info.proto\x1a\x15sampled_profile.proto\x1a\x14system_profile.proto\x1a\x15translate_event.proto\x1a\x17user_action_event.proto\"\xc8\x05\n\x1a\x43hromeUserMetricsExtension\x12\x12\n\x07product\x18\n \x01(\x05:\x01\x30\x12\x11\n\tclient_id\x18\x01 \x01(\x06\x12\x12\n\nsession_id\x18\x02 \x01(\x05\x12\x33\n\x0esystem_profile\x18\x03 \x01(\x0b\x32\x1b.metrics.SystemProfileProto\x12\x38\n\x11user_action_event\x18\x04 \x03(\x0b\x32\x1d.metrics.UserActionEventProto\x12\x31\n\romnibox_event\x18\x05 \x03(\x0b\x32\x1a.metrics.OmniboxEventProto\x12\x35\n\x0fhistogram_event\x18\x06 \x03(\x0b\x32\x1c.metrics.HistogramEventProto\x12\x35\n\x0ftranslate_event\x18\x0f \x03(\x0b\x32\x1c.metrics.TranslateEventProto\x12\x31\n\rprinter_event\x18\x10 \x03(\x0b\x32\x1a.metrics.PrinterEventProto\x12-\n\tperf_data\x18\x08 \x03(\x0b\x32\x16.metrics.PerfDataProtoB\x02\x18\x01\x12\x30\n\x0fsampled_profile\x18\x0b \x03(\x0b\x32\x17.metrics.SampledProfile\x12)\n\tcast_logs\x18\x0c \x01(\x0b\x32\x16.metrics.CastLogsProto\x12:\n\x12memory_leak_report\x18\r \x03(\x0b\x32\x1e.metrics.MemoryLeakReportProto\x12.\n\x0ereporting_info\x18\x11 \x01(\x0b\x32\x16.metrics.ReportingInfo\"4\n\x07Product\x12\n\n\x06\x43HROME\x10\x00\x12\x13\n\x0f\x41NDROID_WEBVIEW\x10\x14\x12\x08\n\x04\x43\x41ST\x10#BE\n\x1forg.chromium.components.metricsB ChromeUserMetricsExtensionProtosH\x03')
  ,
  dependencies=[cast__logs__pb2.DESCRIPTOR,histogram__event__pb2.DESCRIPTOR,memory__leak__report__pb2.DESCRIPTOR,omnibox__event__pb2.DESCRIPTOR,perf__data__pb2.DESCRIPTOR,printer__event__pb2.DESCRIPTOR,reporting__info__pb2.DESCRIPTOR,sampled__profile__pb2.DESCRIPTOR,system__profile__pb2.DESCRIPTOR,translate__event__pb2.DESCRIPTOR,user__action__event__pb2.DESCRIPTOR,])



_CHROMEUSERMETRICSEXTENSION_PRODUCT = _descriptor.EnumDescriptor(
  name='Product',
  full_name='metrics.ChromeUserMetricsExtension.Product',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CHROME', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ANDROID_WEBVIEW', index=1, number=20,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CAST', index=2, number=35,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=949,
  serialized_end=1001,
)
_sym_db.RegisterEnumDescriptor(_CHROMEUSERMETRICSEXTENSION_PRODUCT)


_CHROMEUSERMETRICSEXTENSION = _descriptor.Descriptor(
  name='ChromeUserMetricsExtension',
  full_name='metrics.ChromeUserMetricsExtension',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='product', full_name='metrics.ChromeUserMetricsExtension.product', index=0,
      number=10, type=5, cpp_type=1, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='client_id', full_name='metrics.ChromeUserMetricsExtension.client_id', index=1,
      number=1, type=6, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='session_id', full_name='metrics.ChromeUserMetricsExtension.session_id', index=2,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='system_profile', full_name='metrics.ChromeUserMetricsExtension.system_profile', index=3,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_action_event', full_name='metrics.ChromeUserMetricsExtension.user_action_event', index=4,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='omnibox_event', full_name='metrics.ChromeUserMetricsExtension.omnibox_event', index=5,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='histogram_event', full_name='metrics.ChromeUserMetricsExtension.histogram_event', index=6,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='translate_event', full_name='metrics.ChromeUserMetricsExtension.translate_event', index=7,
      number=15, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='printer_event', full_name='metrics.ChromeUserMetricsExtension.printer_event', index=8,
      number=16, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='perf_data', full_name='metrics.ChromeUserMetricsExtension.perf_data', index=9,
      number=8, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\030\001'))),
    _descriptor.FieldDescriptor(
      name='sampled_profile', full_name='metrics.ChromeUserMetricsExtension.sampled_profile', index=10,
      number=11, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cast_logs', full_name='metrics.ChromeUserMetricsExtension.cast_logs', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='memory_leak_report', full_name='metrics.ChromeUserMetricsExtension.memory_leak_report', index=12,
      number=13, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='reporting_info', full_name='metrics.ChromeUserMetricsExtension.reporting_info', index=13,
      number=17, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _CHROMEUSERMETRICSEXTENSION_PRODUCT,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=289,
  serialized_end=1001,
)

_CHROMEUSERMETRICSEXTENSION.fields_by_name['system_profile'].message_type = system__profile__pb2._SYSTEMPROFILEPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['user_action_event'].message_type = user__action__event__pb2._USERACTIONEVENTPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['omnibox_event'].message_type = omnibox__event__pb2._OMNIBOXEVENTPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['histogram_event'].message_type = histogram__event__pb2._HISTOGRAMEVENTPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['translate_event'].message_type = translate__event__pb2._TRANSLATEEVENTPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['printer_event'].message_type = printer__event__pb2._PRINTEREVENTPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['perf_data'].message_type = perf__data__pb2._PERFDATAPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['sampled_profile'].message_type = sampled__profile__pb2._SAMPLEDPROFILE
_CHROMEUSERMETRICSEXTENSION.fields_by_name['cast_logs'].message_type = cast__logs__pb2._CASTLOGSPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['memory_leak_report'].message_type = memory__leak__report__pb2._MEMORYLEAKREPORTPROTO
_CHROMEUSERMETRICSEXTENSION.fields_by_name['reporting_info'].message_type = reporting__info__pb2._REPORTINGINFO
_CHROMEUSERMETRICSEXTENSION_PRODUCT.containing_type = _CHROMEUSERMETRICSEXTENSION
DESCRIPTOR.message_types_by_name['ChromeUserMetricsExtension'] = _CHROMEUSERMETRICSEXTENSION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ChromeUserMetricsExtension = _reflection.GeneratedProtocolMessageType('ChromeUserMetricsExtension', (_message.Message,), dict(
  DESCRIPTOR = _CHROMEUSERMETRICSEXTENSION,
  __module__ = 'chrome_user_metrics_extension_pb2'
  # @@protoc_insertion_point(class_scope:metrics.ChromeUserMetricsExtension)
  ))
_sym_db.RegisterMessage(ChromeUserMetricsExtension)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\037org.chromium.components.metricsB ChromeUserMetricsExtensionProtosH\003'))
_CHROMEUSERMETRICSEXTENSION.fields_by_name['perf_data'].has_options = True
_CHROMEUSERMETRICSEXTENSION.fields_by_name['perf_data']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\030\001'))
# @@protoc_insertion_point(module_scope)
