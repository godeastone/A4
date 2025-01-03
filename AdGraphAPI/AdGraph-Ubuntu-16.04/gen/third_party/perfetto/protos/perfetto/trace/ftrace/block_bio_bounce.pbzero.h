// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_BLOCK_BIO_BOUNCE_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_BLOCK_BIO_BOUNCE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class BlockBioBounceFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
