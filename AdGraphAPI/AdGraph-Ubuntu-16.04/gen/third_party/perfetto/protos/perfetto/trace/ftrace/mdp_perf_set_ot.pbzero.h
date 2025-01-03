// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_PERF_SET_OT_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_PERF_SET_OT_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class MdpPerfSetOtFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kPnumFieldNumber = 1,
    kXinIdFieldNumber = 2,
    kRdLimFieldNumber = 3,
    kIsVbifRtFieldNumber = 4,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_pnum(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_xin_id(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_rd_lim(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_is_vbif_rt(uint32_t value) {
    AppendVarInt(4, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.