// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_discard_blocks.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4DiscardBlocksFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"blk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"count", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4DiscardBlocksFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4DiscardBlocksFtraceEvent[0];
    case kBlkFieldNumber:
      return &kFields_Ext4DiscardBlocksFtraceEvent[1];
    case kCountFieldNumber:
      return &kFields_Ext4DiscardBlocksFtraceEvent[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.