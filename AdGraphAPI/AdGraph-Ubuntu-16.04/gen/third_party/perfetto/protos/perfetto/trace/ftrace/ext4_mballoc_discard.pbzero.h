// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_EXT4_MBALLOC_DISCARD_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_EXT4_MBALLOC_DISCARD_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class Ext4MballocDiscardFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kInoFieldNumber = 2,
    kResultStartFieldNumber = 3,
    kResultGroupFieldNumber = 4,
    kResultLenFieldNumber = 5,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_ino(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_result_start(int32_t value) {
    AppendVarInt(3, value);
  }
  void set_result_group(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_result_len(int32_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.