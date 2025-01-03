// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "components/metrics/public/interfaces/call_stack_profile_collector.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/profiler/stack_sampling_profiler.h"
#include "components/metrics/call_stack_profile_params.h"


namespace metrics {
namespace mojom {
class CallStackProfileCollector;
using CallStackProfileCollectorPtr = mojo::InterfacePtr<CallStackProfileCollector>;
using CallStackProfileCollectorPtrInfo = mojo::InterfacePtrInfo<CallStackProfileCollector>;
using ThreadSafeCallStackProfileCollectorPtr =
    mojo::ThreadSafeInterfacePtr<CallStackProfileCollector>;
using CallStackProfileCollectorRequest = mojo::InterfaceRequest<CallStackProfileCollector>;
using CallStackProfileCollectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<CallStackProfileCollector>;
using ThreadSafeCallStackProfileCollectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CallStackProfileCollector>;
using CallStackProfileCollectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CallStackProfileCollector>;
using CallStackProfileCollectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CallStackProfileCollector>;

class CallStackModule;
using CallStackModulePtr = mojo::StructPtr<CallStackModule>;

class CallStackFrame;
using CallStackFramePtr = mojo::InlinedStructPtr<CallStackFrame>;

class CallStackSample;
using CallStackSamplePtr = mojo::StructPtr<CallStackSample>;

class CallStackProfile;
using CallStackProfilePtr = mojo::StructPtr<CallStackProfile>;

class CallStackProfileParams;
using CallStackProfileParamsPtr = mojo::InlinedStructPtr<CallStackProfileParams>;


class CallStackProfileCollectorProxy;

template <typename ImplRefTraits>
class CallStackProfileCollectorStub;

class CallStackProfileCollectorRequestValidator;

class  CallStackProfileCollector
    : public CallStackProfileCollectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CallStackProfileCollectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = CallStackProfileCollectorStub<ImplRefTraits>;

  using RequestValidator_ = CallStackProfileCollectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCollectMinVersion = 0,
  };
  virtual ~CallStackProfileCollector() {}

  virtual void Collect(const metrics::CallStackProfileParams& params, base::TimeTicks start_timestamp, std::vector<base::StackSamplingProfiler::CallStackProfile> profiles) = 0;
};
class  CallStackProfileCollectorInterceptorForTesting : public CallStackProfileCollector {
  virtual CallStackProfileCollector* GetForwardingInterface() = 0;
  void Collect(const metrics::CallStackProfileParams& params, base::TimeTicks start_timestamp, std::vector<base::StackSamplingProfiler::CallStackProfile> profiles) override;
};
class  CallStackProfileCollectorAsyncWaiter {
 public:
  explicit CallStackProfileCollectorAsyncWaiter(CallStackProfileCollector* proxy);
  ~CallStackProfileCollectorAsyncWaiter();

 private:
  CallStackProfileCollector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CallStackProfileCollectorAsyncWaiter);
};

class  CallStackProfileCollectorProxy
    : public CallStackProfileCollector {
 public:
  explicit CallStackProfileCollectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Collect(const metrics::CallStackProfileParams& params, base::TimeTicks start_timestamp, std::vector<base::StackSamplingProfiler::CallStackProfile> profiles) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CallStackProfileCollectorStubDispatch {
 public:
  static bool Accept(CallStackProfileCollector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CallStackProfileCollector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CallStackProfileCollector>>
class CallStackProfileCollectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CallStackProfileCollectorStub() {}
  ~CallStackProfileCollectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CallStackProfileCollectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CallStackProfileCollectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CallStackProfileCollectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



class  CallStackFrame {
 public:
  using DataView = CallStackFrameDataView;
  using Data_ = internal::CallStackFrame_Data;

  template <typename... Args>
  static CallStackFramePtr New(Args&&... args) {
    return CallStackFramePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CallStackFramePtr From(const U& u) {
    return mojo::TypeConverter<CallStackFramePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CallStackFrame>::Convert(*this);
  }


  CallStackFrame();

  CallStackFrame(
      uint64_t instruction_pointer,
      uint64_t module_index);

  ~CallStackFrame();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CallStackFramePtr>
  CallStackFramePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CallStackFrame>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CallStackFrame::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CallStackFrame::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CallStackFrame_UnserializedMessageContext<
            UserType, CallStackFrame::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CallStackFrame::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CallStackFrame::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CallStackFrame_UnserializedMessageContext<
            UserType, CallStackFrame::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CallStackFrame::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t instruction_pointer;
  uint64_t module_index;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  CallStackProfileParams {
 public:
  using DataView = CallStackProfileParamsDataView;
  using Data_ = internal::CallStackProfileParams_Data;

  template <typename... Args>
  static CallStackProfileParamsPtr New(Args&&... args) {
    return CallStackProfileParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CallStackProfileParamsPtr From(const U& u) {
    return mojo::TypeConverter<CallStackProfileParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CallStackProfileParams>::Convert(*this);
  }


  CallStackProfileParams();

  CallStackProfileParams(
      metrics::CallStackProfileParams::Process process,
      metrics::CallStackProfileParams::Thread thread,
      metrics::CallStackProfileParams::Trigger trigger,
      metrics::CallStackProfileParams::SampleOrderingSpec ordering_spec);

  ~CallStackProfileParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CallStackProfileParamsPtr>
  CallStackProfileParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CallStackProfileParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CallStackProfileParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CallStackProfileParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CallStackProfileParams_UnserializedMessageContext<
            UserType, CallStackProfileParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CallStackProfileParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CallStackProfileParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CallStackProfileParams_UnserializedMessageContext<
            UserType, CallStackProfileParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CallStackProfileParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  metrics::CallStackProfileParams::Process process;
  metrics::CallStackProfileParams::Thread thread;
  metrics::CallStackProfileParams::Trigger trigger;
  metrics::CallStackProfileParams::SampleOrderingSpec ordering_spec;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  CallStackModule {
 public:
  using DataView = CallStackModuleDataView;
  using Data_ = internal::CallStackModule_Data;

  template <typename... Args>
  static CallStackModulePtr New(Args&&... args) {
    return CallStackModulePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CallStackModulePtr From(const U& u) {
    return mojo::TypeConverter<CallStackModulePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CallStackModule>::Convert(*this);
  }


  CallStackModule();

  CallStackModule(
      uint64_t base_address,
      const std::string& id,
      const base::FilePath& filename);

  ~CallStackModule();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CallStackModulePtr>
  CallStackModulePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CallStackModule>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CallStackModule::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CallStackModule::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CallStackModule_UnserializedMessageContext<
            UserType, CallStackModule::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CallStackModule::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CallStackModule::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CallStackModule_UnserializedMessageContext<
            UserType, CallStackModule::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CallStackModule::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t base_address;
  std::string id;
  base::FilePath filename;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  CallStackSample {
 public:
  using DataView = CallStackSampleDataView;
  using Data_ = internal::CallStackSample_Data;

  template <typename... Args>
  static CallStackSamplePtr New(Args&&... args) {
    return CallStackSamplePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CallStackSamplePtr From(const U& u) {
    return mojo::TypeConverter<CallStackSamplePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CallStackSample>::Convert(*this);
  }


  CallStackSample();

  CallStackSample(
      const std::vector<base::StackSamplingProfiler::Frame>& frames,
      uint32_t process_milestones);

  ~CallStackSample();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CallStackSamplePtr>
  CallStackSamplePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CallStackSample>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CallStackSample::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CallStackSample::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CallStackSample_UnserializedMessageContext<
            UserType, CallStackSample::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CallStackSample::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CallStackSample::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CallStackSample_UnserializedMessageContext<
            UserType, CallStackSample::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CallStackSample::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<base::StackSamplingProfiler::Frame> frames;
  uint32_t process_milestones;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  CallStackProfile {
 public:
  using DataView = CallStackProfileDataView;
  using Data_ = internal::CallStackProfile_Data;

  template <typename... Args>
  static CallStackProfilePtr New(Args&&... args) {
    return CallStackProfilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CallStackProfilePtr From(const U& u) {
    return mojo::TypeConverter<CallStackProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CallStackProfile>::Convert(*this);
  }


  CallStackProfile();

  CallStackProfile(
      const std::vector<base::StackSamplingProfiler::Module>& modules,
      std::vector<base::StackSamplingProfiler::Sample> samples,
      base::TimeDelta profile_duration,
      base::TimeDelta sampling_period);

  ~CallStackProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CallStackProfilePtr>
  CallStackProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CallStackProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CallStackProfile::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CallStackProfile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CallStackProfile_UnserializedMessageContext<
            UserType, CallStackProfile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CallStackProfile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CallStackProfile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CallStackProfile_UnserializedMessageContext<
            UserType, CallStackProfile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CallStackProfile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<base::StackSamplingProfiler::Module> modules;
  std::vector<base::StackSamplingProfiler::Sample> samples;
  base::TimeDelta profile_duration;
  base::TimeDelta sampling_period;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CallStackProfile);
};


template <typename StructPtrType>
CallStackModulePtr CallStackModule::Clone() const {
  return New(
      mojo::Clone(base_address),
      mojo::Clone(id),
      mojo::Clone(filename)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CallStackModule>::value>::type*>
bool CallStackModule::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->base_address, other_struct.base_address))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->filename, other_struct.filename))
    return false;
  return true;
}
template <typename StructPtrType>
CallStackFramePtr CallStackFrame::Clone() const {
  return New(
      mojo::Clone(instruction_pointer),
      mojo::Clone(module_index)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CallStackFrame>::value>::type*>
bool CallStackFrame::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instruction_pointer, other_struct.instruction_pointer))
    return false;
  if (!mojo::Equals(this->module_index, other_struct.module_index))
    return false;
  return true;
}
template <typename StructPtrType>
CallStackSamplePtr CallStackSample::Clone() const {
  return New(
      mojo::Clone(frames),
      mojo::Clone(process_milestones)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CallStackSample>::value>::type*>
bool CallStackSample::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frames, other_struct.frames))
    return false;
  if (!mojo::Equals(this->process_milestones, other_struct.process_milestones))
    return false;
  return true;
}
template <typename StructPtrType>
CallStackProfilePtr CallStackProfile::Clone() const {
  return New(
      mojo::Clone(modules),
      mojo::Clone(samples),
      mojo::Clone(profile_duration),
      mojo::Clone(sampling_period)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CallStackProfile>::value>::type*>
bool CallStackProfile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->modules, other_struct.modules))
    return false;
  if (!mojo::Equals(this->samples, other_struct.samples))
    return false;
  if (!mojo::Equals(this->profile_duration, other_struct.profile_duration))
    return false;
  if (!mojo::Equals(this->sampling_period, other_struct.sampling_period))
    return false;
  return true;
}
template <typename StructPtrType>
CallStackProfileParamsPtr CallStackProfileParams::Clone() const {
  return New(
      mojo::Clone(process),
      mojo::Clone(thread),
      mojo::Clone(trigger),
      mojo::Clone(ordering_spec)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CallStackProfileParams>::value>::type*>
bool CallStackProfileParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process, other_struct.process))
    return false;
  if (!mojo::Equals(this->thread, other_struct.thread))
    return false;
  if (!mojo::Equals(this->trigger, other_struct.trigger))
    return false;
  if (!mojo::Equals(this->ordering_spec, other_struct.ordering_spec))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace metrics

namespace mojo {


template <>
struct  StructTraits<::metrics::mojom::CallStackModule::DataView,
                                         ::metrics::mojom::CallStackModulePtr> {
  static bool IsNull(const ::metrics::mojom::CallStackModulePtr& input) { return !input; }
  static void SetToNull(::metrics::mojom::CallStackModulePtr* output) { output->reset(); }

  static decltype(::metrics::mojom::CallStackModule::base_address) base_address(
      const ::metrics::mojom::CallStackModulePtr& input) {
    return input->base_address;
  }

  static const decltype(::metrics::mojom::CallStackModule::id)& id(
      const ::metrics::mojom::CallStackModulePtr& input) {
    return input->id;
  }

  static const decltype(::metrics::mojom::CallStackModule::filename)& filename(
      const ::metrics::mojom::CallStackModulePtr& input) {
    return input->filename;
  }

  static bool Read(::metrics::mojom::CallStackModule::DataView input, ::metrics::mojom::CallStackModulePtr* output);
};


template <>
struct  StructTraits<::metrics::mojom::CallStackFrame::DataView,
                                         ::metrics::mojom::CallStackFramePtr> {
  static bool IsNull(const ::metrics::mojom::CallStackFramePtr& input) { return !input; }
  static void SetToNull(::metrics::mojom::CallStackFramePtr* output) { output->reset(); }

  static decltype(::metrics::mojom::CallStackFrame::instruction_pointer) instruction_pointer(
      const ::metrics::mojom::CallStackFramePtr& input) {
    return input->instruction_pointer;
  }

  static decltype(::metrics::mojom::CallStackFrame::module_index) module_index(
      const ::metrics::mojom::CallStackFramePtr& input) {
    return input->module_index;
  }

  static bool Read(::metrics::mojom::CallStackFrame::DataView input, ::metrics::mojom::CallStackFramePtr* output);
};


template <>
struct  StructTraits<::metrics::mojom::CallStackSample::DataView,
                                         ::metrics::mojom::CallStackSamplePtr> {
  static bool IsNull(const ::metrics::mojom::CallStackSamplePtr& input) { return !input; }
  static void SetToNull(::metrics::mojom::CallStackSamplePtr* output) { output->reset(); }

  static const decltype(::metrics::mojom::CallStackSample::frames)& frames(
      const ::metrics::mojom::CallStackSamplePtr& input) {
    return input->frames;
  }

  static decltype(::metrics::mojom::CallStackSample::process_milestones) process_milestones(
      const ::metrics::mojom::CallStackSamplePtr& input) {
    return input->process_milestones;
  }

  static bool Read(::metrics::mojom::CallStackSample::DataView input, ::metrics::mojom::CallStackSamplePtr* output);
};


template <>
struct  StructTraits<::metrics::mojom::CallStackProfile::DataView,
                                         ::metrics::mojom::CallStackProfilePtr> {
  static bool IsNull(const ::metrics::mojom::CallStackProfilePtr& input) { return !input; }
  static void SetToNull(::metrics::mojom::CallStackProfilePtr* output) { output->reset(); }

  static const decltype(::metrics::mojom::CallStackProfile::modules)& modules(
      const ::metrics::mojom::CallStackProfilePtr& input) {
    return input->modules;
  }

  static const decltype(::metrics::mojom::CallStackProfile::samples)& samples(
      const ::metrics::mojom::CallStackProfilePtr& input) {
    return input->samples;
  }

  static const decltype(::metrics::mojom::CallStackProfile::profile_duration)& profile_duration(
      const ::metrics::mojom::CallStackProfilePtr& input) {
    return input->profile_duration;
  }

  static const decltype(::metrics::mojom::CallStackProfile::sampling_period)& sampling_period(
      const ::metrics::mojom::CallStackProfilePtr& input) {
    return input->sampling_period;
  }

  static bool Read(::metrics::mojom::CallStackProfile::DataView input, ::metrics::mojom::CallStackProfilePtr* output);
};


template <>
struct  StructTraits<::metrics::mojom::CallStackProfileParams::DataView,
                                         ::metrics::mojom::CallStackProfileParamsPtr> {
  static bool IsNull(const ::metrics::mojom::CallStackProfileParamsPtr& input) { return !input; }
  static void SetToNull(::metrics::mojom::CallStackProfileParamsPtr* output) { output->reset(); }

  static decltype(::metrics::mojom::CallStackProfileParams::process) process(
      const ::metrics::mojom::CallStackProfileParamsPtr& input) {
    return input->process;
  }

  static decltype(::metrics::mojom::CallStackProfileParams::thread) thread(
      const ::metrics::mojom::CallStackProfileParamsPtr& input) {
    return input->thread;
  }

  static decltype(::metrics::mojom::CallStackProfileParams::trigger) trigger(
      const ::metrics::mojom::CallStackProfileParamsPtr& input) {
    return input->trigger;
  }

  static decltype(::metrics::mojom::CallStackProfileParams::ordering_spec) ordering_spec(
      const ::metrics::mojom::CallStackProfileParamsPtr& input) {
    return input->ordering_spec;
  }

  static bool Read(::metrics::mojom::CallStackProfileParams::DataView input, ::metrics::mojom::CallStackProfileParamsPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_H_