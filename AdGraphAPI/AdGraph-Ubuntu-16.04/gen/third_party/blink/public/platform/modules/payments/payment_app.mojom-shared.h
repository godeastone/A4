// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/payments/payment_app.mojom-shared-internal.h"
#include "components/payments/mojom/payment_request_data.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"
#include "third_party/blink/public/platform/modules/payments/payment_request.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace payments {
namespace mojom {
class PaymentInstrumentDataView;

class CanMakePaymentEventDataDataView;

class PaymentRequestEventDataDataView;

class PaymentHandlerResponseDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentInstrumentDataView> {
  using Data = ::payments::mojom::internal::PaymentInstrument_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::CanMakePaymentEventDataDataView> {
  using Data = ::payments::mojom::internal::CanMakePaymentEventData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentRequestEventDataDataView> {
  using Data = ::payments::mojom::internal::PaymentRequestEventData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentHandlerResponseDataView> {
  using Data = ::payments::mojom::internal::PaymentHandlerResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {

enum class PaymentHandlerStatus : int32_t {
  SUCCESS,
  NOT_IMPLEMENTED,
  NOT_FOUND,
  NO_ACTIVE_WORKER,
  STORAGE_OPERATION_FAILED,
  FETCH_INSTRUMENT_ICON_FAILED,
  FETCH_PAYMENT_APP_INFO_FAILED,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, PaymentHandlerStatus value) {
  switch(value) {
    case PaymentHandlerStatus::SUCCESS:
      return os << "PaymentHandlerStatus::SUCCESS";
    case PaymentHandlerStatus::NOT_IMPLEMENTED:
      return os << "PaymentHandlerStatus::NOT_IMPLEMENTED";
    case PaymentHandlerStatus::NOT_FOUND:
      return os << "PaymentHandlerStatus::NOT_FOUND";
    case PaymentHandlerStatus::NO_ACTIVE_WORKER:
      return os << "PaymentHandlerStatus::NO_ACTIVE_WORKER";
    case PaymentHandlerStatus::STORAGE_OPERATION_FAILED:
      return os << "PaymentHandlerStatus::STORAGE_OPERATION_FAILED";
    case PaymentHandlerStatus::FETCH_INSTRUMENT_ICON_FAILED:
      return os << "PaymentHandlerStatus::FETCH_INSTRUMENT_ICON_FAILED";
    case PaymentHandlerStatus::FETCH_PAYMENT_APP_INFO_FAILED:
      return os << "PaymentHandlerStatus::FETCH_PAYMENT_APP_INFO_FAILED";
    default:
      return os << "Unknown PaymentHandlerStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PaymentHandlerStatus value) {
  return internal::PaymentHandlerStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PaymentManagerInterfaceBase {};

using PaymentManagerPtrDataView =
    mojo::InterfacePtrDataView<PaymentManagerInterfaceBase>;
using PaymentManagerRequestDataView =
    mojo::InterfaceRequestDataView<PaymentManagerInterfaceBase>;
using PaymentManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentManagerInterfaceBase>;
using PaymentManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentManagerInterfaceBase>;
class PaymentHandlerResponseCallbackInterfaceBase {};

using PaymentHandlerResponseCallbackPtrDataView =
    mojo::InterfacePtrDataView<PaymentHandlerResponseCallbackInterfaceBase>;
using PaymentHandlerResponseCallbackRequestDataView =
    mojo::InterfaceRequestDataView<PaymentHandlerResponseCallbackInterfaceBase>;
using PaymentHandlerResponseCallbackAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentHandlerResponseCallbackInterfaceBase>;
using PaymentHandlerResponseCallbackAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentHandlerResponseCallbackInterfaceBase>;
class PaymentInstrumentDataView {
 public:
  PaymentInstrumentDataView() {}

  PaymentInstrumentDataView(
      internal::PaymentInstrument_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIconsDataView(
      mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcons(UserType* output) {
    auto* pointer = data_->icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedCapabilitiesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedCapabilities(UserType* output) {
    auto* pointer = data_->stringified_capabilities.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSupportedNetworksDataView(
      mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedNetworks(UserType* output) {
    auto* pointer = data_->supported_networks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>>(
        pointer, output, context_);
  }
  inline void GetSupportedTypesDataView(
      mojo::ArrayDataView<::payments::mojom::BasicCardType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedTypes(UserType* output) {
    auto* pointer = data_->supported_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::BasicCardType>>(
        pointer, output, context_);
  }
 private:
  internal::PaymentInstrument_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CanMakePaymentEventDataDataView {
 public:
  CanMakePaymentEventDataDataView() {}

  CanMakePaymentEventDataDataView(
      internal::CanMakePaymentEventData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTopOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopOrigin(UserType* output) {
    auto* pointer = data_->top_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPaymentRequestOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaymentRequestOrigin(UserType* output) {
    auto* pointer = data_->payment_request_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiers(UserType* output) {
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CanMakePaymentEventData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestEventDataDataView {
 public:
  PaymentRequestEventDataDataView() {}

  PaymentRequestEventDataDataView(
      internal::PaymentRequestEventData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTopOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopOrigin(UserType* output) {
    auto* pointer = data_->top_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPaymentRequestOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaymentRequestOrigin(UserType* output) {
    auto* pointer = data_->payment_request_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPaymentRequestIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaymentRequestId(UserType* output) {
    auto* pointer = data_->payment_request_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        pointer, output, context_);
  }
  inline void GetTotalDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotal(UserType* output) {
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiers(UserType* output) {
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        pointer, output, context_);
  }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestEventData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerResponseDataView {
 public:
  PaymentHandlerResponseDataView() {}

  PaymentHandlerResponseDataView(
      internal::PaymentHandlerResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodName(UserType* output) {
    auto* pointer = data_->method_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedDetailsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedDetails(UserType* output) {
    auto* pointer = data_->stringified_details.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_Init_ParamsDataView {
 public:
  PaymentManager_Init_ParamsDataView() {}

  PaymentManager_Init_ParamsDataView(
      internal::PaymentManager_Init_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContextUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContextUrl(UserType* output) {
    auto* pointer = data_->context_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetServiceWorkerScopeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceWorkerScope(UserType* output) {
    auto* pointer = data_->service_worker_scope.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_Init_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_DeletePaymentInstrument_ParamsDataView {
 public:
  PaymentManager_DeletePaymentInstrument_ParamsDataView() {}

  PaymentManager_DeletePaymentInstrument_ParamsDataView(
      internal::PaymentManager_DeletePaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_DeletePaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_DeletePaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_DeletePaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_DeletePaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_GetPaymentInstrument_ParamsDataView {
 public:
  PaymentManager_GetPaymentInstrument_ParamsDataView() {}

  PaymentManager_GetPaymentInstrument_ParamsDataView(
      internal::PaymentManager_GetPaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_GetPaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_GetPaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_GetPaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_GetPaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentDataView(
      PaymentInstrumentDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrument(UserType* output) {
    auto* pointer = data_->instrument.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentInstrumentDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_KeysOfPaymentInstruments_ParamsDataView {
 public:
  PaymentManager_KeysOfPaymentInstruments_ParamsDataView() {}

  PaymentManager_KeysOfPaymentInstruments_ParamsDataView(
      internal::PaymentManager_KeysOfPaymentInstruments_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentManager_KeysOfPaymentInstruments_Params_Data* data_ = nullptr;
};

class PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView {
 public:
  PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView() {}

  PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView(
      internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_HasPaymentInstrument_ParamsDataView {
 public:
  PaymentManager_HasPaymentInstrument_ParamsDataView() {}

  PaymentManager_HasPaymentInstrument_ParamsDataView(
      internal::PaymentManager_HasPaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_HasPaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_HasPaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_HasPaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_HasPaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_SetPaymentInstrument_ParamsDataView {
 public:
  PaymentManager_SetPaymentInstrument_ParamsDataView() {}

  PaymentManager_SetPaymentInstrument_ParamsDataView(
      internal::PaymentManager_SetPaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInstrumentDataView(
      PaymentInstrumentDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrument(UserType* output) {
    auto* pointer = data_->instrument.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentInstrumentDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_SetPaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_SetPaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_SetPaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_SetPaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_ClearPaymentInstruments_ParamsDataView {
 public:
  PaymentManager_ClearPaymentInstruments_ParamsDataView() {}

  PaymentManager_ClearPaymentInstruments_ParamsDataView(
      internal::PaymentManager_ClearPaymentInstruments_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentManager_ClearPaymentInstruments_Params_Data* data_ = nullptr;
};

class PaymentManager_ClearPaymentInstruments_ResponseParamsDataView {
 public:
  PaymentManager_ClearPaymentInstruments_ResponseParamsDataView() {}

  PaymentManager_ClearPaymentInstruments_ResponseParamsDataView(
      internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_SetUserHint_ParamsDataView {
 public:
  PaymentManager_SetUserHint_ParamsDataView() {}

  PaymentManager_SetUserHint_ParamsDataView(
      internal::PaymentManager_SetUserHint_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserHintDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserHint(UserType* output) {
    auto* pointer = data_->user_hint.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_SetUserHint_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView {
 public:
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView() {}

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView(
      internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool payment_aborted() const {
    return data_->payment_aborted;
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView {
 public:
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView() {}

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView(
      internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool can_make_payment() const {
    return data_->can_make_payment;
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView {
 public:
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView() {}

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView(
      internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      PaymentHandlerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseDataView>(
        pointer, output, context_);
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

template <>
struct hash<::payments::mojom::PaymentHandlerStatus>
    : public mojo::internal::EnumHashImpl<::payments::mojom::PaymentHandlerStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::payments::mojom::PaymentHandlerStatus, ::payments::mojom::PaymentHandlerStatus> {
  static ::payments::mojom::PaymentHandlerStatus ToMojom(::payments::mojom::PaymentHandlerStatus input) { return input; }
  static bool FromMojom(::payments::mojom::PaymentHandlerStatus input, ::payments::mojom::PaymentHandlerStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::PaymentHandlerStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::PaymentHandlerStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentInstrumentDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentInstrumentDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentInstrument_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PaymentInstrument struct");
    decltype(CallWithContext(Traits::icons, input, custom_context)) in_icons = CallWithContext(Traits::icons, input, custom_context);
    typename decltype((*output)->icons)::BaseType::BufferWriter
        icons_writer;
    const mojo::internal::ContainerValidateParams icons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>>(
        in_icons, buffer, &icons_writer, &icons_validate_params,
        context);
    (*output)->icons.Set(
        icons_writer.is_null() ? nullptr : icons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icons in PaymentInstrument struct");
    decltype(CallWithContext(Traits::method, input, custom_context)) in_method = CallWithContext(Traits::method, input, custom_context);
    typename decltype((*output)->method)::BaseType::BufferWriter
        method_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method, buffer, &method_writer, context);
    (*output)->method.Set(
        method_writer.is_null() ? nullptr : method_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in PaymentInstrument struct");
    decltype(CallWithContext(Traits::stringified_capabilities, input, custom_context)) in_stringified_capabilities = CallWithContext(Traits::stringified_capabilities, input, custom_context);
    typename decltype((*output)->stringified_capabilities)::BaseType::BufferWriter
        stringified_capabilities_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_capabilities, buffer, &stringified_capabilities_writer, context);
    (*output)->stringified_capabilities.Set(
        stringified_capabilities_writer.is_null() ? nullptr : stringified_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stringified_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stringified_capabilities in PaymentInstrument struct");
    decltype(CallWithContext(Traits::supported_networks, input, custom_context)) in_supported_networks = CallWithContext(Traits::supported_networks, input, custom_context);
    typename decltype((*output)->supported_networks)::BaseType::BufferWriter
        supported_networks_writer;
    const mojo::internal::ContainerValidateParams supported_networks_validate_params(
        0, ::payments::mojom::internal::BasicCardNetwork_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>>(
        in_supported_networks, buffer, &supported_networks_writer, &supported_networks_validate_params,
        context);
    (*output)->supported_networks.Set(
        supported_networks_writer.is_null() ? nullptr : supported_networks_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_networks.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_networks in PaymentInstrument struct");
    decltype(CallWithContext(Traits::supported_types, input, custom_context)) in_supported_types = CallWithContext(Traits::supported_types, input, custom_context);
    typename decltype((*output)->supported_types)::BaseType::BufferWriter
        supported_types_writer;
    const mojo::internal::ContainerValidateParams supported_types_validate_params(
        0, ::payments::mojom::internal::BasicCardType_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::BasicCardType>>(
        in_supported_types, buffer, &supported_types_writer, &supported_types_validate_params,
        context);
    (*output)->supported_types.Set(
        supported_types_writer.is_null() ? nullptr : supported_types_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_types.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_types in PaymentInstrument struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentInstrument_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentInstrumentDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::CanMakePaymentEventDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::CanMakePaymentEventDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::CanMakePaymentEventData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::top_origin, input, custom_context)) in_top_origin = CallWithContext(Traits::top_origin, input, custom_context);
    typename decltype((*output)->top_origin)::BaseType::BufferWriter
        top_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_top_origin, buffer, &top_origin_writer, context);
    (*output)->top_origin.Set(
        top_origin_writer.is_null() ? nullptr : top_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->top_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null top_origin in CanMakePaymentEventData struct");
    decltype(CallWithContext(Traits::payment_request_origin, input, custom_context)) in_payment_request_origin = CallWithContext(Traits::payment_request_origin, input, custom_context);
    typename decltype((*output)->payment_request_origin)::BaseType::BufferWriter
        payment_request_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_payment_request_origin, buffer, &payment_request_origin_writer, context);
    (*output)->payment_request_origin.Set(
        payment_request_origin_writer.is_null() ? nullptr : payment_request_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payment_request_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payment_request_origin in CanMakePaymentEventData struct");
    decltype(CallWithContext(Traits::method_data, input, custom_context)) in_method_data = CallWithContext(Traits::method_data, input, custom_context);
    typename decltype((*output)->method_data)::BaseType::BufferWriter
        method_data_writer;
    const mojo::internal::ContainerValidateParams method_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        in_method_data, buffer, &method_data_writer, &method_data_validate_params,
        context);
    (*output)->method_data.Set(
        method_data_writer.is_null() ? nullptr : method_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in CanMakePaymentEventData struct");
    decltype(CallWithContext(Traits::modifiers, input, custom_context)) in_modifiers = CallWithContext(Traits::modifiers, input, custom_context);
    typename decltype((*output)->modifiers)::BaseType::BufferWriter
        modifiers_writer;
    const mojo::internal::ContainerValidateParams modifiers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        in_modifiers, buffer, &modifiers_writer, &modifiers_validate_params,
        context);
    (*output)->modifiers.Set(
        modifiers_writer.is_null() ? nullptr : modifiers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modifiers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modifiers in CanMakePaymentEventData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::payments::mojom::internal::CanMakePaymentEventData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::CanMakePaymentEventDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentRequestEventDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentRequestEventDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentRequestEventData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::top_origin, input, custom_context)) in_top_origin = CallWithContext(Traits::top_origin, input, custom_context);
    typename decltype((*output)->top_origin)::BaseType::BufferWriter
        top_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_top_origin, buffer, &top_origin_writer, context);
    (*output)->top_origin.Set(
        top_origin_writer.is_null() ? nullptr : top_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->top_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null top_origin in PaymentRequestEventData struct");
    decltype(CallWithContext(Traits::payment_request_origin, input, custom_context)) in_payment_request_origin = CallWithContext(Traits::payment_request_origin, input, custom_context);
    typename decltype((*output)->payment_request_origin)::BaseType::BufferWriter
        payment_request_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_payment_request_origin, buffer, &payment_request_origin_writer, context);
    (*output)->payment_request_origin.Set(
        payment_request_origin_writer.is_null() ? nullptr : payment_request_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payment_request_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payment_request_origin in PaymentRequestEventData struct");
    decltype(CallWithContext(Traits::payment_request_id, input, custom_context)) in_payment_request_id = CallWithContext(Traits::payment_request_id, input, custom_context);
    typename decltype((*output)->payment_request_id)::BaseType::BufferWriter
        payment_request_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_payment_request_id, buffer, &payment_request_id_writer, context);
    (*output)->payment_request_id.Set(
        payment_request_id_writer.is_null() ? nullptr : payment_request_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payment_request_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payment_request_id in PaymentRequestEventData struct");
    decltype(CallWithContext(Traits::method_data, input, custom_context)) in_method_data = CallWithContext(Traits::method_data, input, custom_context);
    typename decltype((*output)->method_data)::BaseType::BufferWriter
        method_data_writer;
    const mojo::internal::ContainerValidateParams method_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        in_method_data, buffer, &method_data_writer, &method_data_validate_params,
        context);
    (*output)->method_data.Set(
        method_data_writer.is_null() ? nullptr : method_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in PaymentRequestEventData struct");
    decltype(CallWithContext(Traits::total, input, custom_context)) in_total = CallWithContext(Traits::total, input, custom_context);
    typename decltype((*output)->total)::BaseType::BufferWriter
        total_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_total, buffer, &total_writer, context);
    (*output)->total.Set(
        total_writer.is_null() ? nullptr : total_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->total.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null total in PaymentRequestEventData struct");
    decltype(CallWithContext(Traits::modifiers, input, custom_context)) in_modifiers = CallWithContext(Traits::modifiers, input, custom_context);
    typename decltype((*output)->modifiers)::BaseType::BufferWriter
        modifiers_writer;
    const mojo::internal::ContainerValidateParams modifiers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        in_modifiers, buffer, &modifiers_writer, &modifiers_validate_params,
        context);
    (*output)->modifiers.Set(
        modifiers_writer.is_null() ? nullptr : modifiers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modifiers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modifiers in PaymentRequestEventData struct");
    decltype(CallWithContext(Traits::instrument_key, input, custom_context)) in_instrument_key = CallWithContext(Traits::instrument_key, input, custom_context);
    typename decltype((*output)->instrument_key)::BaseType::BufferWriter
        instrument_key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instrument_key, buffer, &instrument_key_writer, context);
    (*output)->instrument_key.Set(
        instrument_key_writer.is_null() ? nullptr : instrument_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instrument_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instrument_key in PaymentRequestEventData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentRequestEventData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentRequestEventDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentHandlerResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentHandlerResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::method_name, input, custom_context)) in_method_name = CallWithContext(Traits::method_name, input, custom_context);
    typename decltype((*output)->method_name)::BaseType::BufferWriter
        method_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method_name, buffer, &method_name_writer, context);
    (*output)->method_name.Set(
        method_name_writer.is_null() ? nullptr : method_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_name in PaymentHandlerResponse struct");
    decltype(CallWithContext(Traits::stringified_details, input, custom_context)) in_stringified_details = CallWithContext(Traits::stringified_details, input, custom_context);
    typename decltype((*output)->stringified_details)::BaseType::BufferWriter
        stringified_details_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_details, buffer, &stringified_details_writer, context);
    (*output)->stringified_details.Set(
        stringified_details_writer.is_null() ? nullptr : stringified_details_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stringified_details.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stringified_details in PaymentHandlerResponse struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentHandlerResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentHandlerResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentInstrumentDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentInstrumentDataView::GetIconsDataView(
    mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>* output) {
  auto pointer = data_->icons.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ManifestIconDataView>(pointer, context_);
}
inline void PaymentInstrumentDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentInstrumentDataView::GetStringifiedCapabilitiesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_capabilities.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentInstrumentDataView::GetSupportedNetworksDataView(
    mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>* output) {
  auto pointer = data_->supported_networks.Get();
  *output = mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>(pointer, context_);
}
inline void PaymentInstrumentDataView::GetSupportedTypesDataView(
    mojo::ArrayDataView<::payments::mojom::BasicCardType>* output) {
  auto pointer = data_->supported_types.Get();
  *output = mojo::ArrayDataView<::payments::mojom::BasicCardType>(pointer, context_);
}


inline void CanMakePaymentEventDataDataView::GetTopOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->top_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CanMakePaymentEventDataDataView::GetPaymentRequestOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->payment_request_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CanMakePaymentEventDataDataView::GetMethodDataDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output) {
  auto pointer = data_->method_data.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>(pointer, context_);
}
inline void CanMakePaymentEventDataDataView::GetModifiersDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>(pointer, context_);
}


inline void PaymentRequestEventDataDataView::GetTopOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->top_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetPaymentRequestOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->payment_request_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetPaymentRequestIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->payment_request_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetMethodDataDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output) {
  auto pointer = data_->method_data.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetTotalDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->total.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetModifiersDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentHandlerResponseDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentHandlerResponseDataView::GetStringifiedDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_details.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentManager_Init_ParamsDataView::GetContextUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->context_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PaymentManager_Init_ParamsDataView::GetServiceWorkerScopeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_worker_scope.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentManager_DeletePaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PaymentManager_GetPaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentManager_GetPaymentInstrument_ResponseParamsDataView::GetInstrumentDataView(
    PaymentInstrumentDataView* output) {
  auto pointer = data_->instrument.Get();
  *output = PaymentInstrumentDataView(pointer, context_);
}




inline void PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void PaymentManager_HasPaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PaymentManager_SetPaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentManager_SetPaymentInstrument_ParamsDataView::GetInstrumentDataView(
    PaymentInstrumentDataView* output) {
  auto pointer = data_->instrument.Get();
  *output = PaymentInstrumentDataView(pointer, context_);
}








inline void PaymentManager_SetUserHint_ParamsDataView::GetUserHintDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_hint.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView::GetResponseDataView(
    PaymentHandlerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = PaymentHandlerResponseDataView(pointer, context_);
}
inline void PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_H_
