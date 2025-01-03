// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/clock_enable.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_ClockEnableFtraceEvent[] = {
  {"name", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"state", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"cpu_id", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* ClockEnableFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kNameFieldNumber:
      return &kFields_ClockEnableFtraceEvent[0];
    case kStateFieldNumber:
      return &kFields_ClockEnableFtraceEvent[1];
    case kCpuIdFieldNumber:
      return &kFields_ClockEnableFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
