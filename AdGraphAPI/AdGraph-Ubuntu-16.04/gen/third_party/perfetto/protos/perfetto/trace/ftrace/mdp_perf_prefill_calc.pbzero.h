// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_PERF_PREFILL_CALC_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_MDP_PERF_PREFILL_CALC_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class MdpPerfPrefillCalcFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kPnumFieldNumber = 1,
    kLatencyBufFieldNumber = 2,
    kOtFieldNumber = 3,
    kYBufFieldNumber = 4,
    kYScalerFieldNumber = 5,
    kPpLinesFieldNumber = 6,
    kPpBytesFieldNumber = 7,
    kPostScFieldNumber = 8,
    kFbcBytesFieldNumber = 9,
    kPrefillBytesFieldNumber = 10,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_pnum(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_latency_buf(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_ot(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_y_buf(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_y_scaler(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_pp_lines(uint32_t value) {
    AppendVarInt(6, value);
  }
  void set_pp_bytes(uint32_t value) {
    AppendVarInt(7, value);
  }
  void set_post_sc(uint32_t value) {
    AppendVarInt(8, value);
  }
  void set_fbc_bytes(uint32_t value) {
    AppendVarInt(9, value);
  }
  void set_prefill_bytes(uint32_t value) {
    AppendVarInt(10, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.