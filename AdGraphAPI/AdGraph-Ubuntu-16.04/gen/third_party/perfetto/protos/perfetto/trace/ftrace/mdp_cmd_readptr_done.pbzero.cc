// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/mdp_cmd_readptr_done.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_MdpCmdReadptrDoneFtraceEvent[] = {
  {"ctl_num", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"koff_cnt", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
};

const ::protozero::ProtoFieldDescriptor* MdpCmdReadptrDoneFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kCtlNumFieldNumber:
      return &kFields_MdpCmdReadptrDoneFtraceEvent[0];
    case kKoffCntFieldNumber:
      return &kFields_MdpCmdReadptrDoneFtraceEvent[1];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.
