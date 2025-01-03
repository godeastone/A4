// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerHostInterfaceBase {};

using ServiceWorkerHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerHostInterfaceBase>;
using ServiceWorkerHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerHostInterfaceBase>;
using ServiceWorkerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerHostInterfaceBase>;
using ServiceWorkerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerHostInterfaceBase>;
class ServiceWorkerHost_SetCachedMetadata_ParamsDataView {
 public:
  ServiceWorkerHost_SetCachedMetadata_ParamsDataView() {}

  ServiceWorkerHost_SetCachedMetadata_ParamsDataView(
      internal::ServiceWorkerHost_SetCachedMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_SetCachedMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_ClearCachedMetadata_ParamsDataView {
 public:
  ServiceWorkerHost_ClearCachedMetadata_ParamsDataView() {}

  ServiceWorkerHost_ClearCachedMetadata_ParamsDataView(
      internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClients_ParamsDataView {
 public:
  ServiceWorkerHost_GetClients_ParamsDataView() {}

  ServiceWorkerHost_GetClients_ParamsDataView(
      internal::ServiceWorkerHost_GetClients_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      ::blink::mojom::ServiceWorkerClientQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientQueryOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClients_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClients_ResponseParamsDataView {
 public:
  ServiceWorkerHost_GetClients_ResponseParamsDataView() {}

  ServiceWorkerHost_GetClients_ResponseParamsDataView(
      internal::ServiceWorkerHost_GetClients_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientsDataView(
      mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClients(UserType* output) {
    auto* pointer = data_->clients.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClients_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClient_ParamsDataView {
 public:
  ServiceWorkerHost_GetClient_ParamsDataView() {}

  ServiceWorkerHost_GetClient_ParamsDataView(
      internal::ServiceWorkerHost_GetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClient_ResponseParamsDataView {
 public:
  ServiceWorkerHost_GetClient_ResponseParamsDataView() {}

  ServiceWorkerHost_GetClient_ResponseParamsDataView(
      internal::ServiceWorkerHost_GetClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenNewTab_ParamsDataView {
 public:
  ServiceWorkerHost_OpenNewTab_ParamsDataView() {}

  ServiceWorkerHost_OpenNewTab_ParamsDataView(
      internal::ServiceWorkerHost_OpenNewTab_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenNewTab_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenNewTab_ResponseParamsDataView {
 public:
  ServiceWorkerHost_OpenNewTab_ResponseParamsDataView() {}

  ServiceWorkerHost_OpenNewTab_ResponseParamsDataView(
      internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView {
 public:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView() {}

  ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView(
      internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView {
 public:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView() {}

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView(
      internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_PostMessageToClient_ParamsDataView {
 public:
  ServiceWorkerHost_PostMessageToClient_ParamsDataView() {}

  ServiceWorkerHost_PostMessageToClient_ParamsDataView(
      internal::ServiceWorkerHost_PostMessageToClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
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
  internal::ServiceWorkerHost_PostMessageToClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_FocusClient_ParamsDataView {
 public:
  ServiceWorkerHost_FocusClient_ParamsDataView() {}

  ServiceWorkerHost_FocusClient_ParamsDataView(
      internal::ServiceWorkerHost_FocusClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_FocusClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_FocusClient_ResponseParamsDataView {
 public:
  ServiceWorkerHost_FocusClient_ResponseParamsDataView() {}

  ServiceWorkerHost_FocusClient_ResponseParamsDataView(
      internal::ServiceWorkerHost_FocusClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_FocusClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_NavigateClient_ParamsDataView {
 public:
  ServiceWorkerHost_NavigateClient_ParamsDataView() {}

  ServiceWorkerHost_NavigateClient_ParamsDataView(
      internal::ServiceWorkerHost_NavigateClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_NavigateClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_NavigateClient_ResponseParamsDataView {
 public:
  ServiceWorkerHost_NavigateClient_ResponseParamsDataView() {}

  ServiceWorkerHost_NavigateClient_ResponseParamsDataView(
      internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_SkipWaiting_ParamsDataView {
 public:
  ServiceWorkerHost_SkipWaiting_ParamsDataView() {}

  ServiceWorkerHost_SkipWaiting_ParamsDataView(
      internal::ServiceWorkerHost_SkipWaiting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerHost_SkipWaiting_Params_Data* data_ = nullptr;
};

class ServiceWorkerHost_SkipWaiting_ResponseParamsDataView {
 public:
  ServiceWorkerHost_SkipWaiting_ResponseParamsDataView() {}

  ServiceWorkerHost_SkipWaiting_ResponseParamsDataView(
      internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerHost_ClaimClients_ParamsDataView {
 public:
  ServiceWorkerHost_ClaimClients_ParamsDataView() {}

  ServiceWorkerHost_ClaimClients_ParamsDataView(
      internal::ServiceWorkerHost_ClaimClients_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerHost_ClaimClients_Params_Data* data_ = nullptr;
};

class ServiceWorkerHost_ClaimClients_ResponseParamsDataView {
 public:
  ServiceWorkerHost_ClaimClients_ResponseParamsDataView() {}

  ServiceWorkerHost_ClaimClients_ResponseParamsDataView(
      internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data* data,
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
 private:
  internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ServiceWorkerHost_SetCachedMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerHost_SetCachedMetadata_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ServiceWorkerHost_ClearCachedMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_GetClients_ParamsDataView::GetOptionsDataView(
    ::blink::mojom::ServiceWorkerClientQueryOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::blink::mojom::ServiceWorkerClientQueryOptionsDataView(pointer, context_);
}


inline void ServiceWorkerHost_GetClients_ResponseParamsDataView::GetClientsDataView(
    mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>* output) {
  auto pointer = data_->clients.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>(pointer, context_);
}


inline void ServiceWorkerHost_GetClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_GetClient_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenNewTab_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenNewTab_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ServiceWorkerHost_OpenNewTab_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_PostMessageToClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerHost_PostMessageToClient_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}


inline void ServiceWorkerHost_FocusClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_FocusClient_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}


inline void ServiceWorkerHost_NavigateClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerHost_NavigateClient_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_NavigateClient_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ServiceWorkerHost_NavigateClient_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void ServiceWorkerHost_ClaimClients_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_H_
