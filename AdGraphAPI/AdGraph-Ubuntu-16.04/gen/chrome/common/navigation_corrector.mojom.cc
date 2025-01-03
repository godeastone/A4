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

#include "chrome/common/navigation_corrector.mojom.h"

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

#include "chrome/common/navigation_corrector.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
const char NavigationCorrector::Name_[] = "chrome.mojom.NavigationCorrector";

NavigationCorrectorProxy::NavigationCorrectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NavigationCorrectorProxy::SetNavigationCorrectionInfo(
    const GURL& in_navigation_correction_url, const std::string& in_language, const std::string& in_country_code, const std::string& in_api_key, const GURL& in_search_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NavigationCorrector::SetNavigationCorrectionInfo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNavigationCorrector_SetNavigationCorrectionInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->navigation_correction_url)::BaseType::BufferWriter
      navigation_correction_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_navigation_correction_url, buffer, &navigation_correction_url_writer, &serialization_context);
  params->navigation_correction_url.Set(
      navigation_correction_url_writer.is_null() ? nullptr : navigation_correction_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->navigation_correction_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null navigation_correction_url in NavigationCorrector.SetNavigationCorrectionInfo request");
  typename decltype(params->language)::BaseType::BufferWriter
      language_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_language, buffer, &language_writer, &serialization_context);
  params->language.Set(
      language_writer.is_null() ? nullptr : language_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->language.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null language in NavigationCorrector.SetNavigationCorrectionInfo request");
  typename decltype(params->country_code)::BaseType::BufferWriter
      country_code_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_country_code, buffer, &country_code_writer, &serialization_context);
  params->country_code.Set(
      country_code_writer.is_null() ? nullptr : country_code_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->country_code.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null country_code in NavigationCorrector.SetNavigationCorrectionInfo request");
  typename decltype(params->api_key)::BaseType::BufferWriter
      api_key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_api_key, buffer, &api_key_writer, &serialization_context);
  params->api_key.Set(
      api_key_writer.is_null() ? nullptr : api_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->api_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null api_key in NavigationCorrector.SetNavigationCorrectionInfo request");
  typename decltype(params->search_url)::BaseType::BufferWriter
      search_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_search_url, buffer, &search_url_writer, &serialization_context);
  params->search_url.Set(
      search_url_writer.is_null() ? nullptr : search_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->search_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null search_url in NavigationCorrector.SetNavigationCorrectionInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NavigationCorrectorStubDispatch::Accept(
    NavigationCorrector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNavigationCorrector_SetNavigationCorrectionInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NavigationCorrector::SetNavigationCorrectionInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data* params =
          reinterpret_cast<internal::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_navigation_correction_url{};
      std::string p_language{};
      std::string p_country_code{};
      std::string p_api_key{};
      GURL p_search_url{};
      NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNavigationCorrectionUrl(&p_navigation_correction_url))
        success = false;
      if (!input_data_view.ReadLanguage(&p_language))
        success = false;
      if (!input_data_view.ReadCountryCode(&p_country_code))
        success = false;
      if (!input_data_view.ReadApiKey(&p_api_key))
        success = false;
      if (!input_data_view.ReadSearchUrl(&p_search_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NavigationCorrector::SetNavigationCorrectionInfo deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetNavigationCorrectionInfo(
std::move(p_navigation_correction_url), 
std::move(p_language), 
std::move(p_country_code), 
std::move(p_api_key), 
std::move(p_search_url));
      return true;
    }
  }
  return false;
}

// static
bool NavigationCorrectorStubDispatch::AcceptWithResponder(
    NavigationCorrector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNavigationCorrector_SetNavigationCorrectionInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NavigationCorrector::SetNavigationCorrectionInfo",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NavigationCorrectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NavigationCorrector RequestValidator");

  switch (message->header()->name) {
    case internal::kNavigationCorrector_SetNavigationCorrectionInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data>(
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

void NavigationCorrectorInterceptorForTesting::SetNavigationCorrectionInfo(const GURL& navigation_correction_url, const std::string& language, const std::string& country_code, const std::string& api_key, const GURL& search_url) {
  GetForwardingInterface()->SetNavigationCorrectionInfo(std::move(navigation_correction_url), std::move(language), std::move(country_code), std::move(api_key), std::move(search_url));
}
NavigationCorrectorAsyncWaiter::NavigationCorrectorAsyncWaiter(
    NavigationCorrector* proxy) : proxy_(proxy) {}

NavigationCorrectorAsyncWaiter::~NavigationCorrectorAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif