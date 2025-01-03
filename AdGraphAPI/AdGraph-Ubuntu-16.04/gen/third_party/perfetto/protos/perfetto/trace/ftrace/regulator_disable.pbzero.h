// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_REGULATOR_DISABLE_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_REGULATOR_DISABLE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class RegulatorDisableFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNameFieldNumber = 1,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_name(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_name(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
