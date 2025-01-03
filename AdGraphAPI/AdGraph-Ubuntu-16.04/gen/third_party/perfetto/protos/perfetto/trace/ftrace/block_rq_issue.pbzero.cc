// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/block_rq_issue.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_BlockRqIssueFtraceEvent[] = {
  {"dev", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 1, 0},
  {"sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT64, 2, 0},
  {"nr_sector", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"bytes", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"rwbs", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 5, 0},
  {"comm", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 6, 0},
  {"cmd", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 7, 0},
};

const ::protozero::ProtoFieldDescriptor* BlockRqIssueFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kDevFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[0];
    case kSectorFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[1];
    case kNrSectorFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[2];
    case kBytesFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[3];
    case kRwbsFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[4];
    case kCommFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[5];
    case kCmdFieldNumber:
      return &kFields_BlockRqIssueFtraceEvent[6];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
