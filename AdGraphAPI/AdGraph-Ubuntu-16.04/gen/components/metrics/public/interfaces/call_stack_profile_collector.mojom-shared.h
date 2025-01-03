// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "components/metrics/public/interfaces/call_stack_profile_collector.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace metrics {
namespace mojom {
class CallStackModuleDataView;

class CallStackFrameDataView;

class CallStackSampleDataView;

class CallStackProfileDataView;

class CallStackProfileParamsDataView;



}  // namespace mojom
}  // namespace metrics

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::metrics::mojom::CallStackModuleDataView> {
  using Data = ::metrics::mojom::internal::CallStackModule_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::metrics::mojom::CallStackFrameDataView> {
  using Data = ::metrics::mojom::internal::CallStackFrame_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::metrics::mojom::CallStackSampleDataView> {
  using Data = ::metrics::mojom::internal::CallStackSample_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::metrics::mojom::CallStackProfileDataView> {
  using Data = ::metrics::mojom::internal::CallStackProfile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::metrics::mojom::CallStackProfileParamsDataView> {
  using Data = ::metrics::mojom::internal::CallStackProfileParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace metrics {
namespace mojom {

enum class Process : int32_t {
  UNKNOWN_PROCESS,
  BROWSER_PROCESS,
  RENDERER_PROCESS,
  GPU_PROCESS,
  UTILITY_PROCESS,
  ZYGOTE_PROCESS,
  SANDBOX_HELPER_PROCESS,
  PPAPI_PLUGIN_PROCESS,
  PPAPI_BROKER_PROCESS,
  kMinValue = 0,
  kMaxValue = 8,
};

inline std::ostream& operator<<(std::ostream& os, Process value) {
  switch(value) {
    case Process::UNKNOWN_PROCESS:
      return os << "Process::UNKNOWN_PROCESS";
    case Process::BROWSER_PROCESS:
      return os << "Process::BROWSER_PROCESS";
    case Process::RENDERER_PROCESS:
      return os << "Process::RENDERER_PROCESS";
    case Process::GPU_PROCESS:
      return os << "Process::GPU_PROCESS";
    case Process::UTILITY_PROCESS:
      return os << "Process::UTILITY_PROCESS";
    case Process::ZYGOTE_PROCESS:
      return os << "Process::ZYGOTE_PROCESS";
    case Process::SANDBOX_HELPER_PROCESS:
      return os << "Process::SANDBOX_HELPER_PROCESS";
    case Process::PPAPI_PLUGIN_PROCESS:
      return os << "Process::PPAPI_PLUGIN_PROCESS";
    case Process::PPAPI_BROKER_PROCESS:
      return os << "Process::PPAPI_BROKER_PROCESS";
    default:
      return os << "Unknown Process value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Process value) {
  return internal::Process_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Thread : int32_t {
  UNKNOWN_THREAD,
  MAIN_THREAD,
  IO_THREAD,
  COMPOSITOR_THREAD,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, Thread value) {
  switch(value) {
    case Thread::UNKNOWN_THREAD:
      return os << "Thread::UNKNOWN_THREAD";
    case Thread::MAIN_THREAD:
      return os << "Thread::MAIN_THREAD";
    case Thread::IO_THREAD:
      return os << "Thread::IO_THREAD";
    case Thread::COMPOSITOR_THREAD:
      return os << "Thread::COMPOSITOR_THREAD";
    default:
      return os << "Unknown Thread value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Thread value) {
  return internal::Thread_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Trigger : int32_t {
  UNKNOWN,
  PROCESS_STARTUP,
  JANKY_TASK,
  THREAD_HUNG,
  PERIODIC_COLLECTION,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, Trigger value) {
  switch(value) {
    case Trigger::UNKNOWN:
      return os << "Trigger::UNKNOWN";
    case Trigger::PROCESS_STARTUP:
      return os << "Trigger::PROCESS_STARTUP";
    case Trigger::JANKY_TASK:
      return os << "Trigger::JANKY_TASK";
    case Trigger::THREAD_HUNG:
      return os << "Trigger::THREAD_HUNG";
    case Trigger::PERIODIC_COLLECTION:
      return os << "Trigger::PERIODIC_COLLECTION";
    default:
      return os << "Unknown Trigger value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Trigger value) {
  return internal::Trigger_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SampleOrderingSpec : int32_t {
  MAY_SHUFFLE,
  PRESERVE_ORDER,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, SampleOrderingSpec value) {
  switch(value) {
    case SampleOrderingSpec::MAY_SHUFFLE:
      return os << "SampleOrderingSpec::MAY_SHUFFLE";
    case SampleOrderingSpec::PRESERVE_ORDER:
      return os << "SampleOrderingSpec::PRESERVE_ORDER";
    default:
      return os << "Unknown SampleOrderingSpec value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SampleOrderingSpec value) {
  return internal::SampleOrderingSpec_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CallStackProfileCollectorInterfaceBase {};

using CallStackProfileCollectorPtrDataView =
    mojo::InterfacePtrDataView<CallStackProfileCollectorInterfaceBase>;
using CallStackProfileCollectorRequestDataView =
    mojo::InterfaceRequestDataView<CallStackProfileCollectorInterfaceBase>;
using CallStackProfileCollectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CallStackProfileCollectorInterfaceBase>;
using CallStackProfileCollectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CallStackProfileCollectorInterfaceBase>;
class CallStackModuleDataView {
 public:
  CallStackModuleDataView() {}

  CallStackModuleDataView(
      internal::CallStackModule_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t base_address() const {
    return data_->base_address;
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFilenameDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilename(UserType* output) {
    auto* pointer = data_->filename.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::CallStackModule_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CallStackFrameDataView {
 public:
  CallStackFrameDataView() {}

  CallStackFrameDataView(
      internal::CallStackFrame_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t instruction_pointer() const {
    return data_->instruction_pointer;
  }
  uint64_t module_index() const {
    return data_->module_index;
  }
 private:
  internal::CallStackFrame_Data* data_ = nullptr;
};

class CallStackSampleDataView {
 public:
  CallStackSampleDataView() {}

  CallStackSampleDataView(
      internal::CallStackSample_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFramesDataView(
      mojo::ArrayDataView<CallStackFrameDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrames(UserType* output) {
    auto* pointer = data_->frames.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::metrics::mojom::CallStackFrameDataView>>(
        pointer, output, context_);
  }
  uint32_t process_milestones() const {
    return data_->process_milestones;
  }
 private:
  internal::CallStackSample_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CallStackProfileDataView {
 public:
  CallStackProfileDataView() {}

  CallStackProfileDataView(
      internal::CallStackProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetModulesDataView(
      mojo::ArrayDataView<CallStackModuleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModules(UserType* output) {
    auto* pointer = data_->modules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::metrics::mojom::CallStackModuleDataView>>(
        pointer, output, context_);
  }
  inline void GetSamplesDataView(
      mojo::ArrayDataView<CallStackSampleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSamples(UserType* output) {
    auto* pointer = data_->samples.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::metrics::mojom::CallStackSampleDataView>>(
        pointer, output, context_);
  }
  inline void GetProfileDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfileDuration(UserType* output) {
    auto* pointer = data_->profile_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetSamplingPeriodDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSamplingPeriod(UserType* output) {
    auto* pointer = data_->sampling_period.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::CallStackProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CallStackProfileParamsDataView {
 public:
  CallStackProfileParamsDataView() {}

  CallStackProfileParamsDataView(
      internal::CallStackProfileParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcess(UserType* output) const {
    auto data_value = data_->process;
    return mojo::internal::Deserialize<::metrics::mojom::Process>(
        data_value, output);
  }

  Process process() const {
    return static_cast<Process>(data_->process);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThread(UserType* output) const {
    auto data_value = data_->thread;
    return mojo::internal::Deserialize<::metrics::mojom::Thread>(
        data_value, output);
  }

  Thread thread() const {
    return static_cast<Thread>(data_->thread);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrigger(UserType* output) const {
    auto data_value = data_->trigger;
    return mojo::internal::Deserialize<::metrics::mojom::Trigger>(
        data_value, output);
  }

  Trigger trigger() const {
    return static_cast<Trigger>(data_->trigger);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrderingSpec(UserType* output) const {
    auto data_value = data_->ordering_spec;
    return mojo::internal::Deserialize<::metrics::mojom::SampleOrderingSpec>(
        data_value, output);
  }

  SampleOrderingSpec ordering_spec() const {
    return static_cast<SampleOrderingSpec>(data_->ordering_spec);
  }
 private:
  internal::CallStackProfileParams_Data* data_ = nullptr;
};

class CallStackProfileCollector_Collect_ParamsDataView {
 public:
  CallStackProfileCollector_Collect_ParamsDataView() {}

  CallStackProfileCollector_Collect_ParamsDataView(
      internal::CallStackProfileCollector_Collect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      CallStackProfileParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::metrics::mojom::CallStackProfileParamsDataView>(
        pointer, output, context_);
  }
  inline void GetStartTimestampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTimestamp(UserType* output) {
    auto* pointer = data_->start_timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetProfilesDataView(
      mojo::ArrayDataView<CallStackProfileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfiles(UserType* output) {
    auto* pointer = data_->profiles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::metrics::mojom::CallStackProfileDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CallStackProfileCollector_Collect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace metrics

namespace std {

template <>
struct hash<::metrics::mojom::Process>
    : public mojo::internal::EnumHashImpl<::metrics::mojom::Process> {};

template <>
struct hash<::metrics::mojom::Thread>
    : public mojo::internal::EnumHashImpl<::metrics::mojom::Thread> {};

template <>
struct hash<::metrics::mojom::Trigger>
    : public mojo::internal::EnumHashImpl<::metrics::mojom::Trigger> {};

template <>
struct hash<::metrics::mojom::SampleOrderingSpec>
    : public mojo::internal::EnumHashImpl<::metrics::mojom::SampleOrderingSpec> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::metrics::mojom::Process, ::metrics::mojom::Process> {
  static ::metrics::mojom::Process ToMojom(::metrics::mojom::Process input) { return input; }
  static bool FromMojom(::metrics::mojom::Process input, ::metrics::mojom::Process* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::Process, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::metrics::mojom::Process, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::metrics::mojom::Process>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::metrics::mojom::Thread, ::metrics::mojom::Thread> {
  static ::metrics::mojom::Thread ToMojom(::metrics::mojom::Thread input) { return input; }
  static bool FromMojom(::metrics::mojom::Thread input, ::metrics::mojom::Thread* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::Thread, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::metrics::mojom::Thread, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::metrics::mojom::Thread>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::metrics::mojom::Trigger, ::metrics::mojom::Trigger> {
  static ::metrics::mojom::Trigger ToMojom(::metrics::mojom::Trigger input) { return input; }
  static bool FromMojom(::metrics::mojom::Trigger input, ::metrics::mojom::Trigger* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::Trigger, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::metrics::mojom::Trigger, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::metrics::mojom::Trigger>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::metrics::mojom::SampleOrderingSpec, ::metrics::mojom::SampleOrderingSpec> {
  static ::metrics::mojom::SampleOrderingSpec ToMojom(::metrics::mojom::SampleOrderingSpec input) { return input; }
  static bool FromMojom(::metrics::mojom::SampleOrderingSpec input, ::metrics::mojom::SampleOrderingSpec* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::SampleOrderingSpec, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::metrics::mojom::SampleOrderingSpec, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::metrics::mojom::SampleOrderingSpec>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::CallStackModuleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::metrics::mojom::CallStackModuleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::metrics::mojom::internal::CallStackModule_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->base_address = CallWithContext(Traits::base_address, input, custom_context);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in CallStackModule struct");
    decltype(CallWithContext(Traits::filename, input, custom_context)) in_filename = CallWithContext(Traits::filename, input, custom_context);
    typename decltype((*output)->filename)::BaseType::BufferWriter
        filename_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_filename, buffer, &filename_writer, context);
    (*output)->filename.Set(
        filename_writer.is_null() ? nullptr : filename_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filename.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filename in CallStackModule struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::metrics::mojom::internal::CallStackModule_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::metrics::mojom::CallStackModuleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::CallStackFrameDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::metrics::mojom::CallStackFrameDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::metrics::mojom::internal::CallStackFrame_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->instruction_pointer = CallWithContext(Traits::instruction_pointer, input, custom_context);
    (*output)->module_index = CallWithContext(Traits::module_index, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::metrics::mojom::internal::CallStackFrame_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::metrics::mojom::CallStackFrameDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::CallStackSampleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::metrics::mojom::CallStackSampleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::metrics::mojom::internal::CallStackSample_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::frames, input, custom_context)) in_frames = CallWithContext(Traits::frames, input, custom_context);
    typename decltype((*output)->frames)::BaseType::BufferWriter
        frames_writer;
    const mojo::internal::ContainerValidateParams frames_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::metrics::mojom::CallStackFrameDataView>>(
        in_frames, buffer, &frames_writer, &frames_validate_params,
        context);
    (*output)->frames.Set(
        frames_writer.is_null() ? nullptr : frames_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frames.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frames in CallStackSample struct");
    (*output)->process_milestones = CallWithContext(Traits::process_milestones, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::metrics::mojom::internal::CallStackSample_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::metrics::mojom::CallStackSampleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::CallStackProfileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::metrics::mojom::CallStackProfileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::metrics::mojom::internal::CallStackProfile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::modules, input, custom_context)) in_modules = CallWithContext(Traits::modules, input, custom_context);
    typename decltype((*output)->modules)::BaseType::BufferWriter
        modules_writer;
    const mojo::internal::ContainerValidateParams modules_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::metrics::mojom::CallStackModuleDataView>>(
        in_modules, buffer, &modules_writer, &modules_validate_params,
        context);
    (*output)->modules.Set(
        modules_writer.is_null() ? nullptr : modules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modules in CallStackProfile struct");
    decltype(CallWithContext(Traits::samples, input, custom_context)) in_samples = CallWithContext(Traits::samples, input, custom_context);
    typename decltype((*output)->samples)::BaseType::BufferWriter
        samples_writer;
    const mojo::internal::ContainerValidateParams samples_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::metrics::mojom::CallStackSampleDataView>>(
        in_samples, buffer, &samples_writer, &samples_validate_params,
        context);
    (*output)->samples.Set(
        samples_writer.is_null() ? nullptr : samples_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->samples.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null samples in CallStackProfile struct");
    decltype(CallWithContext(Traits::profile_duration, input, custom_context)) in_profile_duration = CallWithContext(Traits::profile_duration, input, custom_context);
    typename decltype((*output)->profile_duration)::BaseType::BufferWriter
        profile_duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_profile_duration, buffer, &profile_duration_writer, context);
    (*output)->profile_duration.Set(
        profile_duration_writer.is_null() ? nullptr : profile_duration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->profile_duration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null profile_duration in CallStackProfile struct");
    decltype(CallWithContext(Traits::sampling_period, input, custom_context)) in_sampling_period = CallWithContext(Traits::sampling_period, input, custom_context);
    typename decltype((*output)->sampling_period)::BaseType::BufferWriter
        sampling_period_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_sampling_period, buffer, &sampling_period_writer, context);
    (*output)->sampling_period.Set(
        sampling_period_writer.is_null() ? nullptr : sampling_period_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sampling_period.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sampling_period in CallStackProfile struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::metrics::mojom::internal::CallStackProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::metrics::mojom::CallStackProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::metrics::mojom::CallStackProfileParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::metrics::mojom::CallStackProfileParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::metrics::mojom::internal::CallStackProfileParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::metrics::mojom::Process>(
        CallWithContext(Traits::process, input, custom_context), &(*output)->process);
    mojo::internal::Serialize<::metrics::mojom::Thread>(
        CallWithContext(Traits::thread, input, custom_context), &(*output)->thread);
    mojo::internal::Serialize<::metrics::mojom::Trigger>(
        CallWithContext(Traits::trigger, input, custom_context), &(*output)->trigger);
    mojo::internal::Serialize<::metrics::mojom::SampleOrderingSpec>(
        CallWithContext(Traits::ordering_spec, input, custom_context), &(*output)->ordering_spec);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::metrics::mojom::internal::CallStackProfileParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::metrics::mojom::CallStackProfileParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace metrics {
namespace mojom {

inline void CallStackModuleDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CallStackModuleDataView::GetFilenameDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->filename.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}




inline void CallStackSampleDataView::GetFramesDataView(
    mojo::ArrayDataView<CallStackFrameDataView>* output) {
  auto pointer = data_->frames.Get();
  *output = mojo::ArrayDataView<CallStackFrameDataView>(pointer, context_);
}


inline void CallStackProfileDataView::GetModulesDataView(
    mojo::ArrayDataView<CallStackModuleDataView>* output) {
  auto pointer = data_->modules.Get();
  *output = mojo::ArrayDataView<CallStackModuleDataView>(pointer, context_);
}
inline void CallStackProfileDataView::GetSamplesDataView(
    mojo::ArrayDataView<CallStackSampleDataView>* output) {
  auto pointer = data_->samples.Get();
  *output = mojo::ArrayDataView<CallStackSampleDataView>(pointer, context_);
}
inline void CallStackProfileDataView::GetProfileDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->profile_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void CallStackProfileDataView::GetSamplingPeriodDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->sampling_period.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void CallStackProfileCollector_Collect_ParamsDataView::GetParamsDataView(
    CallStackProfileParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = CallStackProfileParamsDataView(pointer, context_);
}
inline void CallStackProfileCollector_Collect_ParamsDataView::GetStartTimestampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->start_timestamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void CallStackProfileCollector_Collect_ParamsDataView::GetProfilesDataView(
    mojo::ArrayDataView<CallStackProfileDataView>* output) {
  auto pointer = data_->profiles.Get();
  *output = mojo::ArrayDataView<CallStackProfileDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_H_
