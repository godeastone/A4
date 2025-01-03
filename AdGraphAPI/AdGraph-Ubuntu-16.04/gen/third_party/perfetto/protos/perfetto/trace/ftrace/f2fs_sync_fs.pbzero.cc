// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/f2fs_sync_fs.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_F2fsSyncFsFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"dirty", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"wait", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* F2fsSyncFsFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_F2fsSyncFsFtraceEvent[0];
    case kDirtyFieldNumber:
      return &kFields_F2fsSyncFsFtraceEvent[1];
    case kWaitFieldNumber:
      return &kFields_F2fsSyncFsFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
