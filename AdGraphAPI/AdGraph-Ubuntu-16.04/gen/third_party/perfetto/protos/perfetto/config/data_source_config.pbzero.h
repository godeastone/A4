// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_CONFIG_DATA_SOURCE_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_CONFIG_DATA_SOURCE_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class ChromeConfig;
class FtraceConfig;
class InodeFileConfig;
class ProcessStatsConfig;
class TestConfig;

class DataSourceConfig : public ::protozero::Message {
 public:
  enum : int32_t {
    kNameFieldNumber = 1,
    kTargetBufferFieldNumber = 2,
    kTraceDurationMsFieldNumber = 3,
    kFtraceConfigFieldNumber = 100,
    kChromeConfigFieldNumber = 101,
    kInodeFileConfigFieldNumber = 102,
    kProcessStatsConfigFieldNumber = 103,
    kLegacyConfigFieldNumber = 1000,
    kForTestingFieldNumber = 536870911,
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
  void set_target_buffer(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_trace_duration_ms(uint32_t value) {
    AppendVarInt(3, value);
  }
  FtraceConfig* set_ftrace_config();
  ChromeConfig* set_chrome_config();
  InodeFileConfig* set_inode_file_config();
  ProcessStatsConfig* set_process_stats_config();
  void set_legacy_config(const char* value) {
    AppendString(1000, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_legacy_config(const char* value, size_t size) {
    AppendBytes(1000, value, size);
  }
  TestConfig* set_for_testing();
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
