// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_CPUFREQ_INTERACTIVE_TARGET_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_CPUFREQ_INTERACTIVE_TARGET_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class CpufreqInteractiveTargetFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kCpuIdFieldNumber = 1,
    kLoadFieldNumber = 2,
    kCurtargFieldNumber = 3,
    kCuractualFieldNumber = 4,
    kNewtargFieldNumber = 5,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_cpu_id(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_load(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_curtarg(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_curactual(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_newtarg(uint64_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
