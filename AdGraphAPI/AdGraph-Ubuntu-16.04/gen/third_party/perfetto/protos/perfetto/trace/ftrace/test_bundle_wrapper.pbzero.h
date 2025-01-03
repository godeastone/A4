// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class FtraceEventBundle;

class TestBundleWrapper : public ::protozero::Message {
 public:
  enum : int32_t {
    kBeforeFieldNumber = 1,
    kBundleFieldNumber = 2,
    kAfterFieldNumber = 3,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_before(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_before(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  FtraceEventBundle* add_bundle();
  void set_after(const char* value) {
    AppendString(3, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_after(const char* value, size_t size) {
    AppendBytes(3, value, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
