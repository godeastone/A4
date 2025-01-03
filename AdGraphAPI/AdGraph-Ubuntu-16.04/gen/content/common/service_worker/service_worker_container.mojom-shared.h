// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_H_

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
#include "content/common/service_worker/service_worker_container.mojom-shared-internal.h"
#include "content/common/service_worker/controller_service_worker.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class ControllerServiceWorkerPurpose : int32_t {
  FETCH_SUB_RESOURCE,
  kMinValue = 0,
  kMaxValue = 0,
};

inline std::ostream& operator<<(std::ostream& os, ControllerServiceWorkerPurpose value) {
  switch(value) {
    case ControllerServiceWorkerPurpose::FETCH_SUB_RESOURCE:
      return os << "ControllerServiceWorkerPurpose::FETCH_SUB_RESOURCE";
    default:
      return os << "Unknown ControllerServiceWorkerPurpose value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ControllerServiceWorkerPurpose value) {
  return internal::ControllerServiceWorkerPurpose_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceWorkerContainerHostInterfaceBase {};

using ServiceWorkerContainerHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerContainerHostInterfaceBase>;
using ServiceWorkerContainerHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerContainerHostInterfaceBase>;
using ServiceWorkerContainerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerContainerHostInterfaceBase>;
using ServiceWorkerContainerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerContainerHostInterfaceBase>;
class ServiceWorkerContainerInterfaceBase {};

using ServiceWorkerContainerPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerContainerInterfaceBase>;
using ServiceWorkerContainerRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerContainerInterfaceBase>;
using ServiceWorkerContainerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerContainerInterfaceBase>;
using ServiceWorkerContainerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerContainerInterfaceBase>;
class ServiceWorkerContainerHost_Register_ParamsDataView {
 public:
  ServiceWorkerContainerHost_Register_ParamsDataView() {}

  ServiceWorkerContainerHost_Register_ParamsDataView(
      internal::ServiceWorkerContainerHost_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScriptUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptUrl(UserType* output) {
    auto* pointer = data_->script_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      ::blink::mojom::ServiceWorkerRegistrationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_Register_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_Register_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_Register_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRegistrationDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_Register_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistration_ParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistration_ParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistration_ParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUrl(UserType* output) {
    auto* pointer = data_->client_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRegistrationDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrations_ParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrations_ParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrations_ParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInfosDataView(
      mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfos(UserType* output) {
    auto* pointer = data_->infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView {
 public:
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView() {}

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView(
      internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerRequestDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPurpose(UserType* output) const {
    auto data_value = data_->purpose;
    return mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerPurpose>(
        data_value, output);
  }

  ControllerServiceWorkerPurpose purpose() const {
    return static_cast<ControllerServiceWorkerPurpose>(data_->purpose);
  }
 private:
  internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_CloneForWorker_ParamsDataView {
 public:
  ServiceWorkerContainerHost_CloneForWorker_ParamsDataView() {}

  ServiceWorkerContainerHost_CloneForWorker_ParamsDataView(
      internal::ServiceWorkerContainerHost_CloneForWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeContainerHostForWorker() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerHostRequestDataView>(
            &data_->container_host_for_worker, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerContainerHost_CloneForWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_Ping_ParamsDataView {
 public:
  ServiceWorkerContainerHost_Ping_ParamsDataView() {}

  ServiceWorkerContainerHost_Ping_ParamsDataView(
      internal::ServiceWorkerContainerHost_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_Ping_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_Ping_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_Ping_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_Ping_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerContainer_SetController_ParamsDataView {
 public:
  ServiceWorkerContainer_SetController_ParamsDataView() {}

  ServiceWorkerContainer_SetController_ParamsDataView(
      internal::ServiceWorkerContainer_SetController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetControllerInfoDataView(
      ::content::mojom::ControllerServiceWorkerInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControllerInfo(UserType* output) {
    auto* pointer = data_->controller_info.Get();
    return mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerInfoDataView>(
        pointer, output, context_);
  }
  inline void GetUsedFeaturesDataView(
      mojo::ArrayDataView<::blink::mojom::WebFeature>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsedFeatures(UserType* output) {
    auto* pointer = data_->used_features.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        pointer, output, context_);
  }
  bool should_notify_controllerchange() const {
    return data_->should_notify_controllerchange;
  }
 private:
  internal::ServiceWorkerContainer_SetController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainer_PostMessageToClient_ParamsDataView {
 public:
  ServiceWorkerContainer_PostMessageToClient_ParamsDataView() {}

  ServiceWorkerContainer_PostMessageToClient_ParamsDataView(
      internal::ServiceWorkerContainer_PostMessageToClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainer_PostMessageToClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainer_CountFeature_ParamsDataView {
 public:
  ServiceWorkerContainer_CountFeature_ParamsDataView() {}

  ServiceWorkerContainer_CountFeature_ParamsDataView(
      internal::ServiceWorkerContainer_CountFeature_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::WebFeature>(
        data_value, output);
  }

  ::blink::mojom::WebFeature feature() const {
    return static_cast<::blink::mojom::WebFeature>(data_->feature);
  }
 private:
  internal::ServiceWorkerContainer_CountFeature_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::ControllerServiceWorkerPurpose>
    : public mojo::internal::EnumHashImpl<::content::mojom::ControllerServiceWorkerPurpose> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::ControllerServiceWorkerPurpose, ::content::mojom::ControllerServiceWorkerPurpose> {
  static ::content::mojom::ControllerServiceWorkerPurpose ToMojom(::content::mojom::ControllerServiceWorkerPurpose input) { return input; }
  static bool FromMojom(::content::mojom::ControllerServiceWorkerPurpose input, ::content::mojom::ControllerServiceWorkerPurpose* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ControllerServiceWorkerPurpose, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::ControllerServiceWorkerPurpose, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::ControllerServiceWorkerPurpose>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void ServiceWorkerContainerHost_Register_ParamsDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_Register_ParamsDataView::GetOptionsDataView(
    ::blink::mojom::ServiceWorkerRegistrationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationOptionsDataView(pointer, context_);
}


inline void ServiceWorkerContainerHost_Register_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_Register_ResponseParamsDataView::GetRegistrationDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}


inline void ServiceWorkerContainerHost_GetRegistration_ParamsDataView::GetClientUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->client_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView::GetRegistrationDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}




inline void ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView::GetInfosDataView(
    mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>* output) {
  auto pointer = data_->infos.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(pointer, context_);
}




inline void ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView::GetRegistrationDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}










inline void ServiceWorkerContainer_SetController_ParamsDataView::GetControllerInfoDataView(
    ::content::mojom::ControllerServiceWorkerInfoDataView* output) {
  auto pointer = data_->controller_info.Get();
  *output = ::content::mojom::ControllerServiceWorkerInfoDataView(pointer, context_);
}
inline void ServiceWorkerContainer_SetController_ParamsDataView::GetUsedFeaturesDataView(
    mojo::ArrayDataView<::blink::mojom::WebFeature>* output) {
  auto pointer = data_->used_features.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebFeature>(pointer, context_);
}


inline void ServiceWorkerContainer_PostMessageToClient_ParamsDataView::GetSourceDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->source.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerContainer_PostMessageToClient_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_H_
