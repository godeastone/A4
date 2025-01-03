// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/smbus_write.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_SmbusWriteFtraceEvent[] = {
  {"adapter_nr", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"addr", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"flags", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"command", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 4, 0},
  {"len", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 5, 0},
  {"protocol", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 6, 0},
};

const ::protozero::ProtoFieldDescriptor* SmbusWriteFtraceEvent::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kAdapterNrFieldNumber:
      return &kFields_SmbusWriteFtraceEvent[0];
    case kAddrFieldNumber:
      return &kFields_SmbusWriteFtraceEvent[1];
    case kFlagsFieldNumber:
      return &kFields_SmbusWriteFtraceEvent[2];
    case kCommandFieldNumber:
      return &kFields_SmbusWriteFtraceEvent[3];
    case kLenFieldNumber:
      return &kFields_SmbusWriteFtraceEvent[4];
    case kProtocolFieldNumber:
      return &kFields_SmbusWriteFtraceEvent[5];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.