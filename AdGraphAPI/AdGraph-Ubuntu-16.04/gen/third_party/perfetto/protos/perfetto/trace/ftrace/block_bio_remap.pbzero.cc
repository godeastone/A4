// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/block_bio_remap.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_BlockBioRemapFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"nr_sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"old_dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 4, 0},
  {"old_sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 5, 0},
  {"rwbs", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* BlockBioRemapFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_BlockBioRemapFtraceEvent[0];
    case kSectorFieldNumber:
      return &kFields_BlockBioRemapFtraceEvent[1];
    case kNrSectorFieldNumber:
      return &kFields_BlockBioRemapFtraceEvent[2];
    case kOldDevFieldNumber:
      return &kFields_BlockBioRemapFtraceEvent[3];
    case kOldSectorFieldNumber:
      return &kFields_BlockBioRemapFtraceEvent[4];
    case kRwbsFieldNumber:
      return &kFields_BlockBioRemapFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.