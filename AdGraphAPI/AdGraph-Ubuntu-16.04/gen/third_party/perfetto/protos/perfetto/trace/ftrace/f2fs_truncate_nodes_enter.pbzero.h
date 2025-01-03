// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_F2FS_TRUNCATE_NODES_ENTER_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_F2FS_TRUNCATE_NODES_ENTER_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class F2fsTruncateNodesEnterFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kInoFieldNumber = 2,
    kNidFieldNumber = 3,
    kBlkAddrFieldNumber = 4,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_ino(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nid(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_blk_addr(uint32_t value) {
    AppendVarInt(4, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
