// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/sched_process_hang.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_SchedProcessHangFtraceEvent[] = {
  {"comm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"pid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
};

const ::protozero::ProtoFieldDescriptor* SchedProcessHangFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kCommFieldNumber:
      return &kFields_SchedProcessHangFtraceEvent[0];
    case kPidFieldNumber:
      return &kFields_SchedProcessHangFtraceEvent[1];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
