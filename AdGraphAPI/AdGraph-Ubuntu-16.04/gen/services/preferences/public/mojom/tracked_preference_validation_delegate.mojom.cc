// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
namespace prefs {
namespace mojom {
const char TrackedPreferenceValidationDelegate::Name_[] = "prefs.mojom.TrackedPreferenceValidationDelegate";

TrackedPreferenceValidationDelegateProxy::TrackedPreferenceValidationDelegateProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TrackedPreferenceValidationDelegateProxy::OnAtomicPreferenceValidation(
    const std::string& in_pref_path, base::Optional<base::Value> in_value, TrackedPreferenceValidationDelegate::ValueState in_value_state, TrackedPreferenceValidationDelegate::ValueState in_external_validation_value_state, bool in_is_personal) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::TrackedPreferenceValidationDelegate::OnAtomicPreferenceValidation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pref_path)::BaseType::BufferWriter
      pref_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_pref_path, buffer, &pref_path_writer, &serialization_context);
  params->pref_path.Set(
      pref_path_writer.is_null() ? nullptr : pref_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pref_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pref_path in TrackedPreferenceValidationDelegate.OnAtomicPreferenceValidation request");
  typename decltype(params->value)::BufferWriter value_writer;
  value_writer.AllocateInline(buffer, &params->value);
  mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
      in_value, buffer, &value_writer, true, &serialization_context);
  mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
      in_value_state, &params->value_state);
  mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
      in_external_validation_value_state, &params->external_validation_value_state);
  params->is_personal = in_is_personal;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TrackedPreferenceValidationDelegateProxy::OnSplitPreferenceValidation(
    const std::string& in_pref_path, const std::vector<std::string>& in_invalid_keys, const std::vector<std::string>& in_external_validation_invalid_keys, TrackedPreferenceValidationDelegate::ValueState in_value_state, TrackedPreferenceValidationDelegate::ValueState in_external_validation_value_state, bool in_is_personal) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::TrackedPreferenceValidationDelegate::OnSplitPreferenceValidation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pref_path)::BaseType::BufferWriter
      pref_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_pref_path, buffer, &pref_path_writer, &serialization_context);
  params->pref_path.Set(
      pref_path_writer.is_null() ? nullptr : pref_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pref_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pref_path in TrackedPreferenceValidationDelegate.OnSplitPreferenceValidation request");
  typename decltype(params->invalid_keys)::BaseType::BufferWriter
      invalid_keys_writer;
  const mojo::internal::ContainerValidateParams invalid_keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_invalid_keys, buffer, &invalid_keys_writer, &invalid_keys_validate_params,
      &serialization_context);
  params->invalid_keys.Set(
      invalid_keys_writer.is_null() ? nullptr : invalid_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->invalid_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null invalid_keys in TrackedPreferenceValidationDelegate.OnSplitPreferenceValidation request");
  typename decltype(params->external_validation_invalid_keys)::BaseType::BufferWriter
      external_validation_invalid_keys_writer;
  const mojo::internal::ContainerValidateParams external_validation_invalid_keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_external_validation_invalid_keys, buffer, &external_validation_invalid_keys_writer, &external_validation_invalid_keys_validate_params,
      &serialization_context);
  params->external_validation_invalid_keys.Set(
      external_validation_invalid_keys_writer.is_null() ? nullptr : external_validation_invalid_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->external_validation_invalid_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null external_validation_invalid_keys in TrackedPreferenceValidationDelegate.OnSplitPreferenceValidation request");
  mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
      in_value_state, &params->value_state);
  mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
      in_external_validation_value_state, &params->external_validation_value_state);
  params->is_personal = in_is_personal;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TrackedPreferenceValidationDelegateStubDispatch::Accept(
    TrackedPreferenceValidationDelegate* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::TrackedPreferenceValidationDelegate::OnAtomicPreferenceValidation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* params =
          reinterpret_cast<internal::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_pref_path{};
      base::Optional<base::Value> p_value{};
      TrackedPreferenceValidationDelegate::ValueState p_value_state{};
      TrackedPreferenceValidationDelegate::ValueState p_external_validation_value_state{};
      bool p_is_personal{};
      TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPrefPath(&p_pref_path))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadValueState(&p_value_state))
        success = false;
      if (!input_data_view.ReadExternalValidationValueState(&p_external_validation_value_state))
        success = false;
      p_is_personal = input_data_view.is_personal();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TrackedPreferenceValidationDelegate::OnAtomicPreferenceValidation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAtomicPreferenceValidation(
std::move(p_pref_path), 
std::move(p_value), 
std::move(p_value_state), 
std::move(p_external_validation_value_state), 
std::move(p_is_personal));
      return true;
    }
    case internal::kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::TrackedPreferenceValidationDelegate::OnSplitPreferenceValidation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* params =
          reinterpret_cast<internal::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_pref_path{};
      std::vector<std::string> p_invalid_keys{};
      std::vector<std::string> p_external_validation_invalid_keys{};
      TrackedPreferenceValidationDelegate::ValueState p_value_state{};
      TrackedPreferenceValidationDelegate::ValueState p_external_validation_value_state{};
      bool p_is_personal{};
      TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPrefPath(&p_pref_path))
        success = false;
      if (!input_data_view.ReadInvalidKeys(&p_invalid_keys))
        success = false;
      if (!input_data_view.ReadExternalValidationInvalidKeys(&p_external_validation_invalid_keys))
        success = false;
      if (!input_data_view.ReadValueState(&p_value_state))
        success = false;
      if (!input_data_view.ReadExternalValidationValueState(&p_external_validation_value_state))
        success = false;
      p_is_personal = input_data_view.is_personal();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TrackedPreferenceValidationDelegate::OnSplitPreferenceValidation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSplitPreferenceValidation(
std::move(p_pref_path), 
std::move(p_invalid_keys), 
std::move(p_external_validation_invalid_keys), 
std::move(p_value_state), 
std::move(p_external_validation_value_state), 
std::move(p_is_personal));
      return true;
    }
  }
  return false;
}

// static
bool TrackedPreferenceValidationDelegateStubDispatch::AcceptWithResponder(
    TrackedPreferenceValidationDelegate* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::TrackedPreferenceValidationDelegate::OnAtomicPreferenceValidation",
               "message", message->name());
#endif
      break;
    }
    case internal::kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::TrackedPreferenceValidationDelegate::OnSplitPreferenceValidation",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool TrackedPreferenceValidationDelegateRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TrackedPreferenceValidationDelegate RequestValidator");

  switch (message->header()->name) {
    case internal::kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void TrackedPreferenceValidationDelegateInterceptorForTesting::OnAtomicPreferenceValidation(const std::string& pref_path, base::Optional<base::Value> value, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) {
  GetForwardingInterface()->OnAtomicPreferenceValidation(std::move(pref_path), std::move(value), std::move(value_state), std::move(external_validation_value_state), std::move(is_personal));
}
void TrackedPreferenceValidationDelegateInterceptorForTesting::OnSplitPreferenceValidation(const std::string& pref_path, const std::vector<std::string>& invalid_keys, const std::vector<std::string>& external_validation_invalid_keys, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) {
  GetForwardingInterface()->OnSplitPreferenceValidation(std::move(pref_path), std::move(invalid_keys), std::move(external_validation_invalid_keys), std::move(value_state), std::move(external_validation_value_state), std::move(is_personal));
}
TrackedPreferenceValidationDelegateAsyncWaiter::TrackedPreferenceValidationDelegateAsyncWaiter(
    TrackedPreferenceValidationDelegate* proxy) : proxy_(proxy) {}

TrackedPreferenceValidationDelegateAsyncWaiter::~TrackedPreferenceValidationDelegateAsyncWaiter() = default;


}  // namespace mojom
}  // namespace prefs

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif