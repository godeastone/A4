// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/trace/ps/process_tree.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_ProcessTree[] = {
  {"processes", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 1, 1},
  {"threads", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 2, 1},
};

const ::protozero::ProtoFieldDescriptor* ProcessTree::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kProcessesFieldNumber:
      return &kFields_ProcessTree[0];
    case kThreadsFieldNumber:
      return &kFields_ProcessTree[1];
    default:
      return &kInvalidField;
  }
}

ProcessTree_Process* ProcessTree::add_processes() {
  return BeginNestedMessage<ProcessTree_Process>(1);
}

ProcessTree_Thread* ProcessTree::add_threads() {
  return BeginNestedMessage<ProcessTree_Thread>(2);
}

static const ::protozero::ProtoFieldDescriptor kFields_ProcessTree_Process[] = {
  {"pid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"ppid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 2, 0},
  {"cmdline", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 3, 1},
  {"threads_deprecated", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 4, 1},
};

const ::protozero::ProtoFieldDescriptor* ProcessTree_Process::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kPidFieldNumber:
      return &kFields_ProcessTree_Process[0];
    case kPpidFieldNumber:
      return &kFields_ProcessTree_Process[1];
    case kCmdlineFieldNumber:
      return &kFields_ProcessTree_Process[2];
    case kThreadsDeprecatedFieldNumber:
      return &kFields_ProcessTree_Process[3];
    default:
      return &kInvalidField;
  }
}

ProcessTree_Thread* ProcessTree_Process::add_threads_deprecated() {
  return BeginNestedMessage<ProcessTree_Thread>(4);
}

static const ::protozero::ProtoFieldDescriptor kFields_ProcessTree_Thread[] = {
  {"tid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 1, 0},
  {"tgid", ::protozero::ProtoFieldDescriptor::Type::TYPE_INT32, 3, 0},
  {"name", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 2, 0},
};

const ::protozero::ProtoFieldDescriptor* ProcessTree_Thread::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kTidFieldNumber:
      return &kFields_ProcessTree_Thread[0];
    case kTgidFieldNumber:
      return &kFields_ProcessTree_Thread[1];
    case kNameFieldNumber:
      return &kFields_ProcessTree_Thread[2];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.