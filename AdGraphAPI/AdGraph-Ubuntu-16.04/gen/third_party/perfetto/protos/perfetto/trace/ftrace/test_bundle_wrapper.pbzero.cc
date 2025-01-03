// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ftrace/test_bundle_wrapper.pbzero.h"
#include "perfetto/trace/ftrace/ftrace_event_bundle.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_TestBundleWrapper[] = {
  {"before", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"bundle", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 2, 1},
  {"after", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 3, 0},
};

const ::protozero::ProtoFieldDescriptor* TestBundleWrapper::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kBeforeFieldNumber:
      return &kFields_TestBundleWrapper[0];
    case kBundleFieldNumber:
      return &kFields_TestBundleWrapper[1];
    case kAfterFieldNumber:
      return &kFields_TestBundleWrapper[2];
    default:
      return &kInvalidField;
  }
}

FtraceEventBundle* TestBundleWrapper::add_bundle() {
  return BeginNestedMessage<FtraceEventBundle>(2);
}

} // Namespace.
} // Namespace.
} // Namespace.
