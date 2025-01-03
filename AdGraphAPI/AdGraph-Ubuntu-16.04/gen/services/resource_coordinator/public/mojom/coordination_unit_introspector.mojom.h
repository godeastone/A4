// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit_introspector.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
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
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {
class CoordinationUnitIntrospector;
using CoordinationUnitIntrospectorPtr = mojo::InterfacePtr<CoordinationUnitIntrospector>;
using CoordinationUnitIntrospectorPtrInfo = mojo::InterfacePtrInfo<CoordinationUnitIntrospector>;
using ThreadSafeCoordinationUnitIntrospectorPtr =
    mojo::ThreadSafeInterfacePtr<CoordinationUnitIntrospector>;
using CoordinationUnitIntrospectorRequest = mojo::InterfaceRequest<CoordinationUnitIntrospector>;
using CoordinationUnitIntrospectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<CoordinationUnitIntrospector>;
using ThreadSafeCoordinationUnitIntrospectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CoordinationUnitIntrospector>;
using CoordinationUnitIntrospectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CoordinationUnitIntrospector>;
using CoordinationUnitIntrospectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CoordinationUnitIntrospector>;

class PageInfo;
using PageInfoPtr = mojo::StructPtr<PageInfo>;

class ProcessInfo;
using ProcessInfoPtr = mojo::StructPtr<ProcessInfo>;


class CoordinationUnitIntrospectorProxy;

template <typename ImplRefTraits>
class CoordinationUnitIntrospectorStub;

class CoordinationUnitIntrospectorRequestValidator;
class CoordinationUnitIntrospectorResponseValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospector
    : public CoordinationUnitIntrospectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CoordinationUnitIntrospectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = CoordinationUnitIntrospectorStub<ImplRefTraits>;

  using RequestValidator_ = CoordinationUnitIntrospectorRequestValidator;
  using ResponseValidator_ = CoordinationUnitIntrospectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetProcessToURLMapMinVersion = 0,
  };
  virtual ~CoordinationUnitIntrospector() {}


  using GetProcessToURLMapCallback = base::OnceCallback<void(std::vector<ProcessInfoPtr>)>;
  virtual void GetProcessToURLMap(GetProcessToURLMapCallback callback) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospectorInterceptorForTesting : public CoordinationUnitIntrospector {
  virtual CoordinationUnitIntrospector* GetForwardingInterface() = 0;
  void GetProcessToURLMap(GetProcessToURLMapCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospectorAsyncWaiter {
 public:
  explicit CoordinationUnitIntrospectorAsyncWaiter(CoordinationUnitIntrospector* proxy);
  ~CoordinationUnitIntrospectorAsyncWaiter();
  void GetProcessToURLMap(
      std::vector<ProcessInfoPtr>* out_process_infos);

 private:
  CoordinationUnitIntrospector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CoordinationUnitIntrospectorAsyncWaiter);
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospectorProxy
    : public CoordinationUnitIntrospector {
 public:
  explicit CoordinationUnitIntrospectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetProcessToURLMap(GetProcessToURLMapCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospectorStubDispatch {
 public:
  static bool Accept(CoordinationUnitIntrospector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CoordinationUnitIntrospector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CoordinationUnitIntrospector>>
class CoordinationUnitIntrospectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CoordinationUnitIntrospectorStub() {}
  ~CoordinationUnitIntrospectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinationUnitIntrospectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinationUnitIntrospectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinationUnitIntrospectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PageInfo {
 public:
  using DataView = PageInfoDataView;
  using Data_ = internal::PageInfo_Data;

  template <typename... Args>
  static PageInfoPtr New(Args&&... args) {
    return PageInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PageInfoPtr From(const U& u) {
    return mojo::TypeConverter<PageInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PageInfo>::Convert(*this);
  }


  PageInfo();

  PageInfo(
      int64_t ukm_source_id,
      bool is_visible,
      base::TimeDelta time_since_last_navigation,
      base::TimeDelta time_since_last_visibility_change);

  ~PageInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PageInfoPtr>
  PageInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PageInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PageInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PageInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PageInfo_UnserializedMessageContext<
            UserType, PageInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PageInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PageInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PageInfo_UnserializedMessageContext<
            UserType, PageInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PageInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t ukm_source_id;
  bool is_visible;
  base::TimeDelta time_since_last_navigation;
  base::TimeDelta time_since_last_visibility_change;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessInfo {
 public:
  using DataView = ProcessInfoDataView;
  using Data_ = internal::ProcessInfo_Data;

  template <typename... Args>
  static ProcessInfoPtr New(Args&&... args) {
    return ProcessInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProcessInfoPtr From(const U& u) {
    return mojo::TypeConverter<ProcessInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProcessInfo>::Convert(*this);
  }


  ProcessInfo();

  ProcessInfo(
      base::ProcessId pid,
      std::vector<PageInfoPtr> page_infos,
      base::Optional<base::Time> launch_time);

  ~ProcessInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProcessInfoPtr>
  ProcessInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProcessInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProcessInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProcessInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProcessInfo_UnserializedMessageContext<
            UserType, ProcessInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProcessInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProcessInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProcessInfo_UnserializedMessageContext<
            UserType, ProcessInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProcessInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::ProcessId pid;
  std::vector<PageInfoPtr> page_infos;
  base::Optional<base::Time> launch_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ProcessInfo);
};

template <typename StructPtrType>
PageInfoPtr PageInfo::Clone() const {
  return New(
      mojo::Clone(ukm_source_id),
      mojo::Clone(is_visible),
      mojo::Clone(time_since_last_navigation),
      mojo::Clone(time_since_last_visibility_change)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PageInfo>::value>::type*>
bool PageInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ukm_source_id, other_struct.ukm_source_id))
    return false;
  if (!mojo::Equals(this->is_visible, other_struct.is_visible))
    return false;
  if (!mojo::Equals(this->time_since_last_navigation, other_struct.time_since_last_navigation))
    return false;
  if (!mojo::Equals(this->time_since_last_visibility_change, other_struct.time_since_last_visibility_change))
    return false;
  return true;
}
template <typename StructPtrType>
ProcessInfoPtr ProcessInfo::Clone() const {
  return New(
      mojo::Clone(pid),
      mojo::Clone(page_infos),
      mojo::Clone(launch_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProcessInfo>::value>::type*>
bool ProcessInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  if (!mojo::Equals(this->page_infos, other_struct.page_infos))
    return false;
  if (!mojo::Equals(this->launch_time, other_struct.launch_time))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::resource_coordinator::mojom::PageInfo::DataView,
                                         ::resource_coordinator::mojom::PageInfoPtr> {
  static bool IsNull(const ::resource_coordinator::mojom::PageInfoPtr& input) { return !input; }
  static void SetToNull(::resource_coordinator::mojom::PageInfoPtr* output) { output->reset(); }

  static decltype(::resource_coordinator::mojom::PageInfo::ukm_source_id) ukm_source_id(
      const ::resource_coordinator::mojom::PageInfoPtr& input) {
    return input->ukm_source_id;
  }

  static decltype(::resource_coordinator::mojom::PageInfo::is_visible) is_visible(
      const ::resource_coordinator::mojom::PageInfoPtr& input) {
    return input->is_visible;
  }

  static const decltype(::resource_coordinator::mojom::PageInfo::time_since_last_navigation)& time_since_last_navigation(
      const ::resource_coordinator::mojom::PageInfoPtr& input) {
    return input->time_since_last_navigation;
  }

  static const decltype(::resource_coordinator::mojom::PageInfo::time_since_last_visibility_change)& time_since_last_visibility_change(
      const ::resource_coordinator::mojom::PageInfoPtr& input) {
    return input->time_since_last_visibility_change;
  }

  static bool Read(::resource_coordinator::mojom::PageInfo::DataView input, ::resource_coordinator::mojom::PageInfoPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::resource_coordinator::mojom::ProcessInfo::DataView,
                                         ::resource_coordinator::mojom::ProcessInfoPtr> {
  static bool IsNull(const ::resource_coordinator::mojom::ProcessInfoPtr& input) { return !input; }
  static void SetToNull(::resource_coordinator::mojom::ProcessInfoPtr* output) { output->reset(); }

  static const decltype(::resource_coordinator::mojom::ProcessInfo::pid)& pid(
      const ::resource_coordinator::mojom::ProcessInfoPtr& input) {
    return input->pid;
  }

  static const decltype(::resource_coordinator::mojom::ProcessInfo::page_infos)& page_infos(
      const ::resource_coordinator::mojom::ProcessInfoPtr& input) {
    return input->page_infos;
  }

  static const decltype(::resource_coordinator::mojom::ProcessInfo::launch_time)& launch_time(
      const ::resource_coordinator::mojom::ProcessInfoPtr& input) {
    return input->launch_time;
  }

  static bool Read(::resource_coordinator::mojom::ProcessInfo::DataView input, ::resource_coordinator::mojom::ProcessInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_H_