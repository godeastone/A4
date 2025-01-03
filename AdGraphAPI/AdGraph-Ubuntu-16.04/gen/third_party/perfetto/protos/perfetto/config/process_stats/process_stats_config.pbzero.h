// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_CONFIG_PROCESS_STATS_PROCESS_STATS_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_CONFIG_PROCESS_STATS_PROCESS_STATS_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

enum ProcessStatsConfig_Quirks : int32_t;

enum ProcessStatsConfig_Quirks : int32_t {
  ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED = 0,
  ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP = 1,
  ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND = 2,
};

class ProcessStatsConfig : public ::protozero::Message {
 public:
  enum : int32_t {
    kQuirksFieldNumber = 1,
    kScanAllProcessesOnStartFieldNumber = 2,
    kRecordThreadNamesFieldNumber = 3,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  using Quirks = ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks;
  static const Quirks QUIRKS_UNSPECIFIED = ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED;
  static const Quirks DISABLE_INITIAL_DUMP = ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP;
  static const Quirks DISABLE_ON_DEMAND = ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND;
  void add_quirks(::perfetto::protos::pbzero::ProcessStatsConfig_Quirks value) {
    AppendTinyVarInt(1, value);
  }
  void set_scan_all_processes_on_start(bool value) {
    AppendTinyVarInt(2, value);
  }
  void set_record_thread_names(bool value) {
    AppendTinyVarInt(3, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
