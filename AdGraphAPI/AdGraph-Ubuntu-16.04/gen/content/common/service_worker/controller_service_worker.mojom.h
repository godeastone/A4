// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_H_

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
#include "content/common/service_worker/controller_service_worker.mojom-shared.h"
#include "content/common/service_worker/dispatch_fetch_event_params.mojom.h"
#include "content/common/service_worker/service_worker_event_dispatcher.mojom.h"
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class ControllerServiceWorker;
using ControllerServiceWorkerPtr = mojo::InterfacePtr<ControllerServiceWorker>;
using ControllerServiceWorkerPtrInfo = mojo::InterfacePtrInfo<ControllerServiceWorker>;
using ThreadSafeControllerServiceWorkerPtr =
    mojo::ThreadSafeInterfacePtr<ControllerServiceWorker>;
using ControllerServiceWorkerRequest = mojo::InterfaceRequest<ControllerServiceWorker>;
using ControllerServiceWorkerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ControllerServiceWorker>;
using ThreadSafeControllerServiceWorkerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ControllerServiceWorker>;
using ControllerServiceWorkerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ControllerServiceWorker>;
using ControllerServiceWorkerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ControllerServiceWorker>;

class ControllerServiceWorkerInfo;
using ControllerServiceWorkerInfoPtr = mojo::StructPtr<ControllerServiceWorkerInfo>;


class ControllerServiceWorkerProxy;

template <typename ImplRefTraits>
class ControllerServiceWorkerStub;

class ControllerServiceWorkerRequestValidator;
class ControllerServiceWorkerResponseValidator;

class CONTENT_EXPORT ControllerServiceWorker
    : public ControllerServiceWorkerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ControllerServiceWorkerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ControllerServiceWorkerStub<ImplRefTraits>;

  using RequestValidator_ = ControllerServiceWorkerRequestValidator;
  using ResponseValidator_ = ControllerServiceWorkerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDispatchFetchEventMinVersion = 0,
    kCloneMinVersion = 0,
  };
  virtual ~ControllerServiceWorker() {}


  using DispatchFetchEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, base::Time)>;
  virtual void DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) = 0;

  virtual void Clone(ControllerServiceWorkerRequest controller) = 0;
};
class CONTENT_EXPORT ControllerServiceWorkerInterceptorForTesting : public ControllerServiceWorker {
  virtual ControllerServiceWorker* GetForwardingInterface() = 0;
  void DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) override;
  void Clone(ControllerServiceWorkerRequest controller) override;
};
class CONTENT_EXPORT ControllerServiceWorkerAsyncWaiter {
 public:
  explicit ControllerServiceWorkerAsyncWaiter(ControllerServiceWorker* proxy);
  ~ControllerServiceWorkerAsyncWaiter();
  void DispatchFetchEvent(
      ::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time);

 private:
  ControllerServiceWorker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorkerAsyncWaiter);
};

class CONTENT_EXPORT ControllerServiceWorkerProxy
    : public ControllerServiceWorker {
 public:
  explicit ControllerServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) final;
  void Clone(ControllerServiceWorkerRequest controller) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ControllerServiceWorkerStubDispatch {
 public:
  static bool Accept(ControllerServiceWorker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ControllerServiceWorker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ControllerServiceWorker>>
class ControllerServiceWorkerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ControllerServiceWorkerStub() {}
  ~ControllerServiceWorkerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ControllerServiceWorkerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ControllerServiceWorkerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ControllerServiceWorkerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ControllerServiceWorkerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CONTENT_EXPORT ControllerServiceWorkerInfo {
 public:
  using DataView = ControllerServiceWorkerInfoDataView;
  using Data_ = internal::ControllerServiceWorkerInfo_Data;

  template <typename... Args>
  static ControllerServiceWorkerInfoPtr New(Args&&... args) {
    return ControllerServiceWorkerInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ControllerServiceWorkerInfoPtr From(const U& u) {
    return mojo::TypeConverter<ControllerServiceWorkerInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ControllerServiceWorkerInfo>::Convert(*this);
  }


  ControllerServiceWorkerInfo();

  ControllerServiceWorkerInfo(
      ControllerServiceWorkerPtrInfo endpoint,
      const std::string& client_id,
      ::blink::mojom::ServiceWorkerObjectInfoPtr object_info);

  ~ControllerServiceWorkerInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ControllerServiceWorkerInfoPtr>
  ControllerServiceWorkerInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ControllerServiceWorkerInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ControllerServiceWorkerInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ControllerServiceWorkerInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ControllerServiceWorkerInfo_UnserializedMessageContext<
            UserType, ControllerServiceWorkerInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ControllerServiceWorkerInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ControllerServiceWorkerInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ControllerServiceWorkerInfo_UnserializedMessageContext<
            UserType, ControllerServiceWorkerInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ControllerServiceWorkerInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ControllerServiceWorkerPtrInfo endpoint;
  std::string client_id;
  ::blink::mojom::ServiceWorkerObjectInfoPtr object_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorkerInfo);
};

template <typename StructPtrType>
ControllerServiceWorkerInfoPtr ControllerServiceWorkerInfo::Clone() const {
  return New(
      mojo::Clone(endpoint),
      mojo::Clone(client_id),
      mojo::Clone(object_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ControllerServiceWorkerInfo>::value>::type*>
bool ControllerServiceWorkerInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->endpoint, other_struct.endpoint))
    return false;
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  if (!mojo::Equals(this->object_info, other_struct.object_info))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ControllerServiceWorkerInfo::DataView,
                                         ::content::mojom::ControllerServiceWorkerInfoPtr> {
  static bool IsNull(const ::content::mojom::ControllerServiceWorkerInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ControllerServiceWorkerInfoPtr* output) { output->reset(); }

  static  decltype(::content::mojom::ControllerServiceWorkerInfo::endpoint)& endpoint(
       ::content::mojom::ControllerServiceWorkerInfoPtr& input) {
    return input->endpoint;
  }

  static const decltype(::content::mojom::ControllerServiceWorkerInfo::client_id)& client_id(
      const ::content::mojom::ControllerServiceWorkerInfoPtr& input) {
    return input->client_id;
  }

  static  decltype(::content::mojom::ControllerServiceWorkerInfo::object_info)& object_info(
       ::content::mojom::ControllerServiceWorkerInfoPtr& input) {
    return input->object_info;
  }

  static bool Read(::content::mojom::ControllerServiceWorkerInfo::DataView input, ::content::mojom::ControllerServiceWorkerInfoPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_H_