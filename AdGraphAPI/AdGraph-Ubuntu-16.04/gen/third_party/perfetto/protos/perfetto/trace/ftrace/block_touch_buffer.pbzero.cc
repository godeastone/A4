// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/block_touch_buffer.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_BlockTouchBufferFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"size", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* BlockTouchBufferFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_BlockTouchBufferFtraceEvent[0];
    case kSectorFieldNumber:
      return &kFields_BlockTouchBufferFtraceEvent[1];
    case kSizeFieldNumber:
      return &kFields_BlockTouchBufferFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.