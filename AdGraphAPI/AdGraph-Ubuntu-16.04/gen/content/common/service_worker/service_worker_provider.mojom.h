// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_H_

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
#include "content/common/service_worker/service_worker_provider.mojom-shared.h"
#include "content/common/service_worker/service_worker_container.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
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
#include "content/common/service_worker/service_worker_provider_host_info.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
CONTENT_EXPORT extern const char kNavigation_ServiceWorkerSpec[];
class ServiceWorkerWorkerClient;
using ServiceWorkerWorkerClientPtr = mojo::InterfacePtr<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerWorkerClient>;
using ThreadSafeServiceWorkerWorkerClientPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientRequest = mojo::InterfaceRequest<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerWorkerClient>;
using ThreadSafeServiceWorkerWorkerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerWorkerClient>;

class ServiceWorkerProviderInfoForSharedWorker;
using ServiceWorkerProviderInfoForSharedWorkerPtr = mojo::StructPtr<ServiceWorkerProviderInfoForSharedWorker>;

class ServiceWorkerProviderInfoForStartWorker;
using ServiceWorkerProviderInfoForStartWorkerPtr = mojo::StructPtr<ServiceWorkerProviderInfoForStartWorker>;

class ServiceWorkerProviderHostInfo;
using ServiceWorkerProviderHostInfoPtr = mojo::StructPtr<ServiceWorkerProviderHostInfo>;


class ServiceWorkerWorkerClientProxy;

template <typename ImplRefTraits>
class ServiceWorkerWorkerClientStub;

class ServiceWorkerWorkerClientRequestValidator;

class CONTENT_EXPORT ServiceWorkerWorkerClient
    : public ServiceWorkerWorkerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceWorkerWorkerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerWorkerClientStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerWorkerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetControllerServiceWorkerMinVersion = 0,
  };
  virtual ~ServiceWorkerWorkerClient() {}

  virtual void SetControllerServiceWorker(int64_t controller_version_id) = 0;
};
class CONTENT_EXPORT ServiceWorkerWorkerClientInterceptorForTesting : public ServiceWorkerWorkerClient {
  virtual ServiceWorkerWorkerClient* GetForwardingInterface() = 0;
  void SetControllerServiceWorker(int64_t controller_version_id) override;
};
class CONTENT_EXPORT ServiceWorkerWorkerClientAsyncWaiter {
 public:
  explicit ServiceWorkerWorkerClientAsyncWaiter(ServiceWorkerWorkerClient* proxy);
  ~ServiceWorkerWorkerClientAsyncWaiter();

 private:
  ServiceWorkerWorkerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerWorkerClientAsyncWaiter);
};

class CONTENT_EXPORT ServiceWorkerWorkerClientProxy
    : public ServiceWorkerWorkerClient {
 public:
  explicit ServiceWorkerWorkerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetControllerServiceWorker(int64_t controller_version_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ServiceWorkerWorkerClientStubDispatch {
 public:
  static bool Accept(ServiceWorkerWorkerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerWorkerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerWorkerClient>>
class ServiceWorkerWorkerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerWorkerClientStub() {}
  ~ServiceWorkerWorkerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerWorkerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerWorkerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ServiceWorkerWorkerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class CONTENT_EXPORT ServiceWorkerProviderInfoForSharedWorker {
 public:
  using DataView = ServiceWorkerProviderInfoForSharedWorkerDataView;
  using Data_ = internal::ServiceWorkerProviderInfoForSharedWorker_Data;

  template <typename... Args>
  static ServiceWorkerProviderInfoForSharedWorkerPtr New(Args&&... args) {
    return ServiceWorkerProviderInfoForSharedWorkerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerProviderInfoForSharedWorkerPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerProviderInfoForSharedWorkerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerProviderInfoForSharedWorker>::Convert(*this);
  }


  ServiceWorkerProviderInfoForSharedWorker();

  ServiceWorkerProviderInfoForSharedWorker(
      int32_t provider_id,
      ::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info,
      ::content::mojom::ServiceWorkerContainerAssociatedRequest client_request);

  ~ServiceWorkerProviderInfoForSharedWorker();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerProviderInfoForSharedWorkerPtr>
  ServiceWorkerProviderInfoForSharedWorkerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerProviderInfoForSharedWorker>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerProviderInfoForSharedWorker::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerProviderInfoForSharedWorker::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerProviderInfoForSharedWorker_UnserializedMessageContext<
            UserType, ServiceWorkerProviderInfoForSharedWorker::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerProviderInfoForSharedWorker::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerProviderInfoForSharedWorker::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerProviderInfoForSharedWorker_UnserializedMessageContext<
            UserType, ServiceWorkerProviderInfoForSharedWorker::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerProviderInfoForSharedWorker::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t provider_id;
  ::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info;
  ::content::mojom::ServiceWorkerContainerAssociatedRequest client_request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerProviderInfoForSharedWorker);
};


class CONTENT_EXPORT ServiceWorkerProviderInfoForStartWorker {
 public:
  using DataView = ServiceWorkerProviderInfoForStartWorkerDataView;
  using Data_ = internal::ServiceWorkerProviderInfoForStartWorker_Data;

  template <typename... Args>
  static ServiceWorkerProviderInfoForStartWorkerPtr New(Args&&... args) {
    return ServiceWorkerProviderInfoForStartWorkerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerProviderInfoForStartWorkerPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerProviderInfoForStartWorkerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerProviderInfoForStartWorker>::Convert(*this);
  }


  ServiceWorkerProviderInfoForStartWorker();

  ServiceWorkerProviderInfoForStartWorker(
      int32_t provider_id,
      ::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info,
      ::content::mojom::ServiceWorkerContainerAssociatedRequest client_request,
      ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info,
      ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider);

  ~ServiceWorkerProviderInfoForStartWorker();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerProviderInfoForStartWorkerPtr>
  ServiceWorkerProviderInfoForStartWorkerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerProviderInfoForStartWorker>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerProviderInfoForStartWorker::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerProviderInfoForStartWorker::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext<
            UserType, ServiceWorkerProviderInfoForStartWorker::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerProviderInfoForStartWorker::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerProviderInfoForStartWorker::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext<
            UserType, ServiceWorkerProviderInfoForStartWorker::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerProviderInfoForStartWorker::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t provider_id;
  ::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info;
  ::content::mojom::ServiceWorkerContainerAssociatedRequest client_request;
  ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info;
  ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerProviderInfoForStartWorker);
};


class CONTENT_EXPORT ServiceWorkerProviderHostInfo {
 public:
  using DataView = ServiceWorkerProviderHostInfoDataView;
  using Data_ = internal::ServiceWorkerProviderHostInfo_Data;

  template <typename... Args>
  static ServiceWorkerProviderHostInfoPtr New(Args&&... args) {
    return ServiceWorkerProviderHostInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerProviderHostInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerProviderHostInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerProviderHostInfo>::Convert(*this);
  }


  ServiceWorkerProviderHostInfo();

  ServiceWorkerProviderHostInfo(
      int32_t provider_id,
      int32_t route_id,
      ::blink::mojom::ServiceWorkerProviderType type,
      bool is_parent_frame_secure,
      ::content::mojom::ServiceWorkerContainerHostAssociatedRequest host_request,
      ::content::mojom::ServiceWorkerContainerAssociatedPtrInfo client_ptr_info);

  ~ServiceWorkerProviderHostInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerProviderHostInfoPtr>
  ServiceWorkerProviderHostInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerProviderHostInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerProviderHostInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerProviderHostInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerProviderHostInfo_UnserializedMessageContext<
            UserType, ServiceWorkerProviderHostInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerProviderHostInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerProviderHostInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerProviderHostInfo_UnserializedMessageContext<
            UserType, ServiceWorkerProviderHostInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerProviderHostInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t provider_id;
  int32_t route_id;
  ::blink::mojom::ServiceWorkerProviderType type;
  bool is_parent_frame_secure;
  ::content::mojom::ServiceWorkerContainerHostAssociatedRequest host_request;
  ::content::mojom::ServiceWorkerContainerAssociatedPtrInfo client_ptr_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerProviderHostInfo);
};

template <typename StructPtrType>
ServiceWorkerProviderInfoForSharedWorkerPtr ServiceWorkerProviderInfoForSharedWorker::Clone() const {
  return New(
      mojo::Clone(provider_id),
      mojo::Clone(host_ptr_info),
      mojo::Clone(client_request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerProviderInfoForSharedWorker>::value>::type*>
bool ServiceWorkerProviderInfoForSharedWorker::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provider_id, other_struct.provider_id))
    return false;
  if (!mojo::Equals(this->host_ptr_info, other_struct.host_ptr_info))
    return false;
  if (!mojo::Equals(this->client_request, other_struct.client_request))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceWorkerProviderInfoForStartWorkerPtr ServiceWorkerProviderInfoForStartWorker::Clone() const {
  return New(
      mojo::Clone(provider_id),
      mojo::Clone(host_ptr_info),
      mojo::Clone(client_request),
      mojo::Clone(script_loader_factory_ptr_info),
      mojo::Clone(interface_provider)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerProviderInfoForStartWorker>::value>::type*>
bool ServiceWorkerProviderInfoForStartWorker::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provider_id, other_struct.provider_id))
    return false;
  if (!mojo::Equals(this->host_ptr_info, other_struct.host_ptr_info))
    return false;
  if (!mojo::Equals(this->client_request, other_struct.client_request))
    return false;
  if (!mojo::Equals(this->script_loader_factory_ptr_info, other_struct.script_loader_factory_ptr_info))
    return false;
  if (!mojo::Equals(this->interface_provider, other_struct.interface_provider))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceWorkerProviderHostInfoPtr ServiceWorkerProviderHostInfo::Clone() const {
  return New(
      mojo::Clone(provider_id),
      mojo::Clone(route_id),
      mojo::Clone(type),
      mojo::Clone(is_parent_frame_secure),
      mojo::Clone(host_request),
      mojo::Clone(client_ptr_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerProviderHostInfo>::value>::type*>
bool ServiceWorkerProviderHostInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provider_id, other_struct.provider_id))
    return false;
  if (!mojo::Equals(this->route_id, other_struct.route_id))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->is_parent_frame_secure, other_struct.is_parent_frame_secure))
    return false;
  if (!mojo::Equals(this->host_request, other_struct.host_request))
    return false;
  if (!mojo::Equals(this->client_ptr_info, other_struct.client_ptr_info))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ServiceWorkerProviderInfoForSharedWorker::DataView,
                                         ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr> {
  static bool IsNull(const ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr* output) { output->reset(); }

  static decltype(::content::mojom::ServiceWorkerProviderInfoForSharedWorker::provider_id) provider_id(
      const ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr& input) {
    return input->provider_id;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderInfoForSharedWorker::host_ptr_info)& host_ptr_info(
       ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr& input) {
    return input->host_ptr_info;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderInfoForSharedWorker::client_request)& client_request(
       ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr& input) {
    return input->client_request;
  }

  static bool Read(::content::mojom::ServiceWorkerProviderInfoForSharedWorker::DataView input, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ServiceWorkerProviderInfoForStartWorker::DataView,
                                         ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr> {
  static bool IsNull(const ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr* output) { output->reset(); }

  static decltype(::content::mojom::ServiceWorkerProviderInfoForStartWorker::provider_id) provider_id(
      const ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr& input) {
    return input->provider_id;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderInfoForStartWorker::host_ptr_info)& host_ptr_info(
       ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr& input) {
    return input->host_ptr_info;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderInfoForStartWorker::client_request)& client_request(
       ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr& input) {
    return input->client_request;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderInfoForStartWorker::script_loader_factory_ptr_info)& script_loader_factory_ptr_info(
       ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr& input) {
    return input->script_loader_factory_ptr_info;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderInfoForStartWorker::interface_provider)& interface_provider(
       ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr& input) {
    return input->interface_provider;
  }

  static bool Read(::content::mojom::ServiceWorkerProviderInfoForStartWorker::DataView input, ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ServiceWorkerProviderHostInfo::DataView,
                                         ::content::mojom::ServiceWorkerProviderHostInfoPtr> {
  static bool IsNull(const ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ServiceWorkerProviderHostInfoPtr* output) { output->reset(); }

  static decltype(::content::mojom::ServiceWorkerProviderHostInfo::provider_id) provider_id(
      const ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) {
    return input->provider_id;
  }

  static decltype(::content::mojom::ServiceWorkerProviderHostInfo::route_id) route_id(
      const ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) {
    return input->route_id;
  }

  static decltype(::content::mojom::ServiceWorkerProviderHostInfo::type) type(
      const ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) {
    return input->type;
  }

  static decltype(::content::mojom::ServiceWorkerProviderHostInfo::is_parent_frame_secure) is_parent_frame_secure(
      const ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) {
    return input->is_parent_frame_secure;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderHostInfo::host_request)& host_request(
       ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) {
    return input->host_request;
  }

  static  decltype(::content::mojom::ServiceWorkerProviderHostInfo::client_ptr_info)& client_ptr_info(
       ::content::mojom::ServiceWorkerProviderHostInfoPtr& input) {
    return input->client_ptr_info;
  }

  static bool Read(::content::mojom::ServiceWorkerProviderHostInfo::DataView input, ::content::mojom::ServiceWorkerProviderHostInfoPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_H_