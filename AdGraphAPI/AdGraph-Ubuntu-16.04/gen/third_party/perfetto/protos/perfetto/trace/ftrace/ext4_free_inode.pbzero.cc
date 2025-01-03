// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/ext4_free_inode.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_Ext4FreeInodeFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"ino", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"uid", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"gid", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"blocks", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 5, 0},
  {"mode", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* Ext4FreeInodeFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_Ext4FreeInodeFtraceEvent[0];
    case kInoFieldNumber:
      return &kFields_Ext4FreeInodeFtraceEvent[1];
    case kUidFieldNumber:
      return &kFields_Ext4FreeInodeFtraceEvent[2];
    case kGidFieldNumber:
      return &kFields_Ext4FreeInodeFtraceEvent[3];
    case kBlocksFieldNumber:
      return &kFields_Ext4FreeInodeFtraceEvent[4];
    case kModeFieldNumber:
      return &kFields_Ext4FreeInodeFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.