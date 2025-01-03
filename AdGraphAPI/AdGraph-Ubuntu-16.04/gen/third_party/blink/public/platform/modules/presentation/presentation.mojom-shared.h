// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/presentation/presentation.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class PresentationInfoDataView;

class PresentationErrorDataView;

class PresentationConnectionMessageDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::PresentationInfoDataView> {
  using Data = ::blink::mojom::internal::PresentationInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PresentationErrorDataView> {
  using Data = ::blink::mojom::internal::PresentationError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PresentationConnectionMessageDataView> {
  using Data = ::blink::mojom::internal::PresentationConnectionMessage_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class ScreenAvailability : int32_t {
  UNKNOWN,
  UNAVAILABLE,
  SOURCE_NOT_SUPPORTED,
  DISABLED,
  AVAILABLE,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, ScreenAvailability value) {
  switch(value) {
    case ScreenAvailability::UNKNOWN:
      return os << "ScreenAvailability::UNKNOWN";
    case ScreenAvailability::UNAVAILABLE:
      return os << "ScreenAvailability::UNAVAILABLE";
    case ScreenAvailability::SOURCE_NOT_SUPPORTED:
      return os << "ScreenAvailability::SOURCE_NOT_SUPPORTED";
    case ScreenAvailability::DISABLED:
      return os << "ScreenAvailability::DISABLED";
    case ScreenAvailability::AVAILABLE:
      return os << "ScreenAvailability::AVAILABLE";
    default:
      return os << "Unknown ScreenAvailability value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ScreenAvailability value) {
  return internal::ScreenAvailability_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PresentationConnectionState : int32_t {
  CONNECTING,
  CONNECTED,
  CLOSED,
  TERMINATED,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, PresentationConnectionState value) {
  switch(value) {
    case PresentationConnectionState::CONNECTING:
      return os << "PresentationConnectionState::CONNECTING";
    case PresentationConnectionState::CONNECTED:
      return os << "PresentationConnectionState::CONNECTED";
    case PresentationConnectionState::CLOSED:
      return os << "PresentationConnectionState::CLOSED";
    case PresentationConnectionState::TERMINATED:
      return os << "PresentationConnectionState::TERMINATED";
    default:
      return os << "Unknown PresentationConnectionState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationConnectionState value) {
  return internal::PresentationConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PresentationConnectionCloseReason : int32_t {
  CONNECTION_ERROR,
  CLOSED,
  WENT_AWAY,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, PresentationConnectionCloseReason value) {
  switch(value) {
    case PresentationConnectionCloseReason::CONNECTION_ERROR:
      return os << "PresentationConnectionCloseReason::CONNECTION_ERROR";
    case PresentationConnectionCloseReason::CLOSED:
      return os << "PresentationConnectionCloseReason::CLOSED";
    case PresentationConnectionCloseReason::WENT_AWAY:
      return os << "PresentationConnectionCloseReason::WENT_AWAY";
    default:
      return os << "Unknown PresentationConnectionCloseReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationConnectionCloseReason value) {
  return internal::PresentationConnectionCloseReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PresentationErrorType : int32_t {
  NO_AVAILABLE_SCREENS,
  PRESENTATION_REQUEST_CANCELLED,
  NO_PRESENTATION_FOUND,
  PREVIOUS_START_IN_PROGRESS,
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, PresentationErrorType value) {
  switch(value) {
    case PresentationErrorType::NO_AVAILABLE_SCREENS:
      return os << "PresentationErrorType::NO_AVAILABLE_SCREENS";
    case PresentationErrorType::PRESENTATION_REQUEST_CANCELLED:
      return os << "PresentationErrorType::PRESENTATION_REQUEST_CANCELLED";
    case PresentationErrorType::NO_PRESENTATION_FOUND:
      return os << "PresentationErrorType::NO_PRESENTATION_FOUND";
    case PresentationErrorType::PREVIOUS_START_IN_PROGRESS:
      return os << "PresentationErrorType::PREVIOUS_START_IN_PROGRESS";
    case PresentationErrorType::UNKNOWN:
      return os << "PresentationErrorType::UNKNOWN";
    default:
      return os << "Unknown PresentationErrorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationErrorType value) {
  return internal::PresentationErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PresentationConnectionInterfaceBase {};

using PresentationConnectionPtrDataView =
    mojo::InterfacePtrDataView<PresentationConnectionInterfaceBase>;
using PresentationConnectionRequestDataView =
    mojo::InterfaceRequestDataView<PresentationConnectionInterfaceBase>;
using PresentationConnectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationConnectionInterfaceBase>;
using PresentationConnectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationConnectionInterfaceBase>;
class PresentationServiceInterfaceBase {};

using PresentationServicePtrDataView =
    mojo::InterfacePtrDataView<PresentationServiceInterfaceBase>;
using PresentationServiceRequestDataView =
    mojo::InterfaceRequestDataView<PresentationServiceInterfaceBase>;
using PresentationServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationServiceInterfaceBase>;
using PresentationServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationServiceInterfaceBase>;
class PresentationControllerInterfaceBase {};

using PresentationControllerPtrDataView =
    mojo::InterfacePtrDataView<PresentationControllerInterfaceBase>;
using PresentationControllerRequestDataView =
    mojo::InterfaceRequestDataView<PresentationControllerInterfaceBase>;
using PresentationControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationControllerInterfaceBase>;
using PresentationControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationControllerInterfaceBase>;
class PresentationReceiverInterfaceBase {};

using PresentationReceiverPtrDataView =
    mojo::InterfacePtrDataView<PresentationReceiverInterfaceBase>;
using PresentationReceiverRequestDataView =
    mojo::InterfaceRequestDataView<PresentationReceiverInterfaceBase>;
using PresentationReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationReceiverInterfaceBase>;
using PresentationReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationReceiverInterfaceBase>;
class PresentationInfoDataView {
 public:
  PresentationInfoDataView() {}

  PresentationInfoDataView(
      internal::PresentationInfo_Data* data,
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
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationErrorDataView {
 public:
  PresentationErrorDataView() {}

  PresentationErrorDataView(
      internal::PresentationError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorType>(
        data_value, output);
  }

  PresentationErrorType error_type() const {
    return static_cast<PresentationErrorType>(data_->error_type);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationConnection_OnMessage_ParamsDataView {
 public:
  PresentationConnection_OnMessage_ParamsDataView() {}

  PresentationConnection_OnMessage_ParamsDataView(
      internal::PresentationConnection_OnMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      PresentationConnectionMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = !data_->message.is_null() ? &data_->message : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationConnection_OnMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationConnection_OnMessage_ResponseParamsDataView {
 public:
  PresentationConnection_OnMessage_ResponseParamsDataView() {}

  PresentationConnection_OnMessage_ResponseParamsDataView(
      internal::PresentationConnection_OnMessage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::PresentationConnection_OnMessage_ResponseParams_Data* data_ = nullptr;
};

class PresentationConnection_DidChangeState_ParamsDataView {
 public:
  PresentationConnection_DidChangeState_ParamsDataView() {}

  PresentationConnection_DidChangeState_ParamsDataView(
      internal::PresentationConnection_DidChangeState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionState>(
        data_value, output);
  }

  PresentationConnectionState state() const {
    return static_cast<PresentationConnectionState>(data_->state);
  }
 private:
  internal::PresentationConnection_DidChangeState_Params_Data* data_ = nullptr;
};

class PresentationConnection_RequestClose_ParamsDataView {
 public:
  PresentationConnection_RequestClose_ParamsDataView() {}

  PresentationConnection_RequestClose_ParamsDataView(
      internal::PresentationConnection_RequestClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PresentationConnection_RequestClose_Params_Data* data_ = nullptr;
};

class PresentationService_SetController_ParamsDataView {
 public:
  PresentationService_SetController_ParamsDataView() {}

  PresentationService_SetController_ParamsDataView(
      internal::PresentationService_SetController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationControllerPtrDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationService_SetController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_SetReceiver_ParamsDataView {
 public:
  PresentationService_SetReceiver_ParamsDataView() {}

  PresentationService_SetReceiver_ParamsDataView(
      internal::PresentationService_SetReceiver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationReceiverPtrDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationService_SetReceiver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_SetDefaultPresentationUrls_ParamsDataView {
 public:
  PresentationService_SetDefaultPresentationUrls_ParamsDataView() {}

  PresentationService_SetDefaultPresentationUrls_ParamsDataView(
      internal::PresentationService_SetDefaultPresentationUrls_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrls(UserType* output) {
    auto* pointer = data_->presentation_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_SetDefaultPresentationUrls_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_ListenForScreenAvailability_ParamsDataView {
 public:
  PresentationService_ListenForScreenAvailability_ParamsDataView() {}

  PresentationService_ListenForScreenAvailability_ParamsDataView(
      internal::PresentationService_ListenForScreenAvailability_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAvailabilityUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailabilityUrl(UserType* output) {
    auto* pointer = data_->availability_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ListenForScreenAvailability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_StopListeningForScreenAvailability_ParamsDataView {
 public:
  PresentationService_StopListeningForScreenAvailability_ParamsDataView() {}

  PresentationService_StopListeningForScreenAvailability_ParamsDataView(
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAvailabilityUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailabilityUrl(UserType* output) {
    auto* pointer = data_->availability_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StopListeningForScreenAvailability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_StartPresentation_ParamsDataView {
 public:
  PresentationService_StartPresentation_ParamsDataView() {}

  PresentationService_StartPresentation_ParamsDataView(
      internal::PresentationService_StartPresentation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrls(UserType* output) {
    auto* pointer = data_->presentation_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StartPresentation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_StartPresentation_ResponseParamsDataView {
 public:
  PresentationService_StartPresentation_ResponseParamsDataView() {}

  PresentationService_StartPresentation_ResponseParamsDataView(
      internal::PresentationService_StartPresentation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      PresentationErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_StartPresentation_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_ReconnectPresentation_ParamsDataView {
 public:
  PresentationService_ReconnectPresentation_ParamsDataView() {}

  PresentationService_ReconnectPresentation_ParamsDataView(
      internal::PresentationService_ReconnectPresentation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrls(UserType* output) {
    auto* pointer = data_->presentation_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ReconnectPresentation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_ReconnectPresentation_ResponseParamsDataView {
 public:
  PresentationService_ReconnectPresentation_ResponseParamsDataView() {}

  PresentationService_ReconnectPresentation_ResponseParamsDataView(
      internal::PresentationService_ReconnectPresentation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      PresentationErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_ReconnectPresentation_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_SetPresentationConnection_ParamsDataView {
 public:
  PresentationService_SetPresentationConnection_ParamsDataView() {}

  PresentationService_SetPresentationConnection_ParamsDataView(
      internal::PresentationService_SetPresentationConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeControllerConnectionPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionPtrDataView>(
            &data_->controller_connection_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeReceiverConnectionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionRequestDataView>(
            &data_->receiver_connection_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationService_SetPresentationConnection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_CloseConnection_ParamsDataView {
 public:
  PresentationService_CloseConnection_ParamsDataView() {}

  PresentationService_CloseConnection_ParamsDataView(
      internal::PresentationService_CloseConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrl(UserType* output) {
    auto* pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_CloseConnection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationService_Terminate_ParamsDataView {
 public:
  PresentationService_Terminate_ParamsDataView() {}

  PresentationService_Terminate_ParamsDataView(
      internal::PresentationService_Terminate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationUrl(UserType* output) {
    auto* pointer = data_->presentation_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationService_Terminate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnScreenAvailabilityUpdated_ParamsDataView {
 public:
  PresentationController_OnScreenAvailabilityUpdated_ParamsDataView() {}

  PresentationController_OnScreenAvailabilityUpdated_ParamsDataView(
      internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data* data,
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailability(UserType* output) const {
    auto data_value = data_->availability;
    return mojo::internal::Deserialize<::blink::mojom::ScreenAvailability>(
        data_value, output);
  }

  ScreenAvailability availability() const {
    return static_cast<ScreenAvailability>(data_->availability);
  }
 private:
  internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnDefaultPresentationStarted_ParamsDataView {
 public:
  PresentationController_OnDefaultPresentationStarted_ParamsDataView() {}

  PresentationController_OnDefaultPresentationStarted_ParamsDataView(
      internal::PresentationController_OnDefaultPresentationStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationController_OnDefaultPresentationStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnConnectionStateChanged_ParamsDataView {
 public:
  PresentationController_OnConnectionStateChanged_ParamsDataView() {}

  PresentationController_OnConnectionStateChanged_ParamsDataView(
      internal::PresentationController_OnConnectionStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewState(UserType* output) const {
    auto data_value = data_->newState;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionState>(
        data_value, output);
  }

  PresentationConnectionState newState() const {
    return static_cast<PresentationConnectionState>(data_->newState);
  }
 private:
  internal::PresentationController_OnConnectionStateChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationController_OnConnectionClosed_ParamsDataView {
 public:
  PresentationController_OnConnectionClosed_ParamsDataView() {}

  PresentationController_OnConnectionClosed_ParamsDataView(
      internal::PresentationController_OnConnectionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::blink::mojom::PresentationConnectionCloseReason>(
        data_value, output);
  }

  PresentationConnectionCloseReason reason() const {
    return static_cast<PresentationConnectionCloseReason>(data_->reason);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationController_OnConnectionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView {
 public:
  PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView() {}

  PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView(
      internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeControllerConnection() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionPtrDataView>(
            &data_->controller_connection, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeReceiverConnectionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionRequestDataView>(
            &data_->receiver_connection_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationConnectionMessageDataView {
 public:
  using Tag = internal::PresentationConnectionMessage_Data::PresentationConnectionMessage_Tag;

  PresentationConnectionMessageDataView() {}

  PresentationConnectionMessageDataView(
      internal::PresentationConnectionMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_message() const { return data_->tag == Tag::MESSAGE; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    DCHECK(is_message());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_message.Get(), output, context_);
  }
  bool is_data() const { return data_->tag == Tag::DATA; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    DCHECK(is_data());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_data.Get(), output, context_);
  }

 private:
  internal::PresentationConnectionMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ScreenAvailability>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ScreenAvailability> {};

template <>
struct hash<::blink::mojom::PresentationConnectionState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationConnectionState> {};

template <>
struct hash<::blink::mojom::PresentationConnectionCloseReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationConnectionCloseReason> {};

template <>
struct hash<::blink::mojom::PresentationErrorType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationErrorType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ScreenAvailability, ::blink::mojom::ScreenAvailability> {
  static ::blink::mojom::ScreenAvailability ToMojom(::blink::mojom::ScreenAvailability input) { return input; }
  static bool FromMojom(::blink::mojom::ScreenAvailability input, ::blink::mojom::ScreenAvailability* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ScreenAvailability, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ScreenAvailability, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ScreenAvailability>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationConnectionState, ::blink::mojom::PresentationConnectionState> {
  static ::blink::mojom::PresentationConnectionState ToMojom(::blink::mojom::PresentationConnectionState input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationConnectionState input, ::blink::mojom::PresentationConnectionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationConnectionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationConnectionState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationConnectionCloseReason, ::blink::mojom::PresentationConnectionCloseReason> {
  static ::blink::mojom::PresentationConnectionCloseReason ToMojom(::blink::mojom::PresentationConnectionCloseReason input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationConnectionCloseReason input, ::blink::mojom::PresentationConnectionCloseReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionCloseReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationConnectionCloseReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationConnectionCloseReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationErrorType, ::blink::mojom::PresentationErrorType> {
  static ::blink::mojom::PresentationErrorType ToMojom(::blink::mojom::PresentationErrorType input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationErrorType input, ::blink::mojom::PresentationErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationErrorType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PresentationInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in PresentationInfo struct");
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
        "null id in PresentationInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PresentationInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PresentationErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::PresentationErrorType>(
        CallWithContext(Traits::error_type, input, custom_context), &(*output)->error_type);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in PresentationError struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PresentationError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::PresentationConnectionMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationConnectionMessage_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::PresentationConnectionMessage_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::blink::mojom::PresentationConnectionMessageDataView::Tag::MESSAGE: {
        decltype(CallWithContext(Traits::message, input, custom_context))
            in_message = CallWithContext(Traits::message, input,
                                          custom_context);
        typename decltype(result->data.f_message)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_message, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null message in PresentationConnectionMessage union");
        result->data.f_message.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::PresentationConnectionMessageDataView::Tag::DATA: {
        decltype(CallWithContext(Traits::data, input, custom_context))
            in_data = CallWithContext(Traits::data, input,
                                          custom_context);
        typename decltype(result->data.f_data)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams data_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_data, buffer, &value_writer, &data_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null data in PresentationConnectionMessage union");
        result->data.f_data.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PresentationConnectionMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationConnectionMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void PresentationInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PresentationInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationConnection_OnMessage_ParamsDataView::GetMessageDataView(
    PresentationConnectionMessageDataView* output) {
  auto pointer = &data_->message;
  *output = PresentationConnectionMessageDataView(pointer, context_);
}












inline void PresentationService_SetDefaultPresentationUrls_ParamsDataView::GetPresentationUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->presentation_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void PresentationService_ListenForScreenAvailability_ParamsDataView::GetAvailabilityUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->availability_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PresentationService_StopListeningForScreenAvailability_ParamsDataView::GetAvailabilityUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->availability_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PresentationService_StartPresentation_ParamsDataView::GetPresentationUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->presentation_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void PresentationService_StartPresentation_ResponseParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}
inline void PresentationService_StartPresentation_ResponseParamsDataView::GetErrorDataView(
    PresentationErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = PresentationErrorDataView(pointer, context_);
}


inline void PresentationService_ReconnectPresentation_ParamsDataView::GetPresentationUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->presentation_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}
inline void PresentationService_ReconnectPresentation_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationService_ReconnectPresentation_ResponseParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}
inline void PresentationService_ReconnectPresentation_ResponseParamsDataView::GetErrorDataView(
    PresentationErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = PresentationErrorDataView(pointer, context_);
}


inline void PresentationService_SetPresentationConnection_ParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}


inline void PresentationService_CloseConnection_ParamsDataView::GetPresentationUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PresentationService_CloseConnection_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationService_Terminate_ParamsDataView::GetPresentationUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->presentation_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PresentationService_Terminate_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationController_OnScreenAvailabilityUpdated_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PresentationController_OnDefaultPresentationStarted_ParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}


inline void PresentationController_OnConnectionStateChanged_ParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}


inline void PresentationController_OnConnectionClosed_ParamsDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}
inline void PresentationController_OnConnectionClosed_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView::GetInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}


inline void PresentationConnectionMessageDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  DCHECK(is_message());
  *output = mojo::StringDataView(data_->data.f_message.Get(), context_);
}
inline void PresentationConnectionMessageDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_data());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_data.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_
