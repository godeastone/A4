// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_es_cache_extent.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4EsCacheExtentFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"lblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"pblk", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 5, 0},
  {"status", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4EsCacheExtentFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4EsCacheExtentFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4EsCacheExtentFtraceEvent[1];
    case kLblkFieldNumber:
      return &kFields_Ext4EsCacheExtentFtraceEvent[2];
    case kLenFieldNumber:
      return &kFields_Ext4EsCacheExtentFtraceEvent[3];
    case kPblkFieldNumber:
      return &kFields_Ext4EsCacheExtentFtraceEvent[4];
    case kStatusFieldNumber:
      return &kFields_Ext4EsCacheExtentFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
