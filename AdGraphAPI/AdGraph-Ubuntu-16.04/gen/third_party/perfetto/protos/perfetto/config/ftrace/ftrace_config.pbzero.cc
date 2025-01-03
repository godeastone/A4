// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/config/ftrace/ftrace_config.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_FtraceConfig[] = {
  {"ftrace_events", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 1},
  {"atrace_categories", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 2, 1},
  {"atrace_apps", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 3, 1},
  {"buffer_size_kb", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 10, 0},
  {"drain_period_ms", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 11, 0},
};

const ::protozero::ProtoFieldDescriptor* FtraceConfig::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kFtraceEventsFieldNumber:
      return &kFields_FtraceConfig[0];
    case kAtraceCategoriesFieldNumber:
      return &kFields_FtraceConfig[1];
    case kAtraceAppsFieldNumber:
      return &kFields_FtraceConfig[2];
    case kBufferSizeKbFieldNumber:
      return &kFields_FtraceConfig[3];
    case kDrainPeriodMsFieldNumber:
      return &kFields_FtraceConfig[4];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
