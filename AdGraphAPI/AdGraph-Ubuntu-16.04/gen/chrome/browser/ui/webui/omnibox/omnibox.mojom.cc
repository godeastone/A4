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

#include "chrome/browser/ui/webui/omnibox/omnibox.mojom.h"

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

#include "chrome/browser/ui/webui/omnibox/omnibox.mojom-shared-message-ids.h"
namespace mojom {
AutocompleteAdditionalInfo::AutocompleteAdditionalInfo()
    : key(),
      value() {}

AutocompleteAdditionalInfo::AutocompleteAdditionalInfo(
    const std::string& key_in,
    const std::string& value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

AutocompleteAdditionalInfo::~AutocompleteAdditionalInfo() = default;
size_t AutocompleteAdditionalInfo::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->key);
  seed = mojo::internal::Hash(seed, this->value);
  return seed;
}

bool AutocompleteAdditionalInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AutocompleteMatch::AutocompleteMatch()
    : provider_name(),
      provider_done(),
      relevance(),
      deletable(),
      fill_into_edit(),
      inline_autocompletion(),
      destination_url(),
      contents(),
      description(),
      transition(),
      allowed_to_be_default_match(),
      type(),
      has_tab_match(),
      associated_keyword(),
      keyword(),
      starred(),
      duplicates(),
      from_previous(),
      additional_info() {}

AutocompleteMatch::AutocompleteMatch(
    const base::Optional<std::string>& provider_name_in,
    bool provider_done_in,
    int32_t relevance_in,
    bool deletable_in,
    const std::string& fill_into_edit_in,
    const std::string& inline_autocompletion_in,
    const std::string& destination_url_in,
    const std::string& contents_in,
    const std::string& description_in,
    int32_t transition_in,
    bool allowed_to_be_default_match_in,
    const std::string& type_in,
    bool has_tab_match_in,
    const base::Optional<std::string>& associated_keyword_in,
    const std::string& keyword_in,
    bool starred_in,
    int32_t duplicates_in,
    bool from_previous_in,
    std::vector<AutocompleteAdditionalInfoPtr> additional_info_in)
    : provider_name(std::move(provider_name_in)),
      provider_done(std::move(provider_done_in)),
      relevance(std::move(relevance_in)),
      deletable(std::move(deletable_in)),
      fill_into_edit(std::move(fill_into_edit_in)),
      inline_autocompletion(std::move(inline_autocompletion_in)),
      destination_url(std::move(destination_url_in)),
      contents(std::move(contents_in)),
      description(std::move(description_in)),
      transition(std::move(transition_in)),
      allowed_to_be_default_match(std::move(allowed_to_be_default_match_in)),
      type(std::move(type_in)),
      has_tab_match(std::move(has_tab_match_in)),
      associated_keyword(std::move(associated_keyword_in)),
      keyword(std::move(keyword_in)),
      starred(std::move(starred_in)),
      duplicates(std::move(duplicates_in)),
      from_previous(std::move(from_previous_in)),
      additional_info(std::move(additional_info_in)) {}

AutocompleteMatch::~AutocompleteMatch() = default;

bool AutocompleteMatch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AutocompleteResultsForProvider::AutocompleteResultsForProvider()
    : provider_name(),
      results() {}

AutocompleteResultsForProvider::AutocompleteResultsForProvider(
    const std::string& provider_name_in,
    std::vector<AutocompleteMatchPtr> results_in)
    : provider_name(std::move(provider_name_in)),
      results(std::move(results_in)) {}

AutocompleteResultsForProvider::~AutocompleteResultsForProvider() = default;

bool AutocompleteResultsForProvider::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
OmniboxResult::OmniboxResult()
    : done(),
      time_since_omnibox_started_ms(),
      host(),
      is_typed_host(),
      combined_results(),
      results_by_provider() {}

OmniboxResult::OmniboxResult(
    bool done_in,
    int32_t time_since_omnibox_started_ms_in,
    const std::string& host_in,
    bool is_typed_host_in,
    std::vector<AutocompleteMatchPtr> combined_results_in,
    std::vector<AutocompleteResultsForProviderPtr> results_by_provider_in)
    : done(std::move(done_in)),
      time_since_omnibox_started_ms(std::move(time_since_omnibox_started_ms_in)),
      host(std::move(host_in)),
      is_typed_host(std::move(is_typed_host_in)),
      combined_results(std::move(combined_results_in)),
      results_by_provider(std::move(results_by_provider_in)) {}

OmniboxResult::~OmniboxResult() = default;

bool OmniboxResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char OmniboxPageHandler::Name_[] = "mojom.OmniboxPageHandler";

OmniboxPageHandlerProxy::OmniboxPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OmniboxPageHandlerProxy::SetClientPage(
    OmniboxPagePtr in_page) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::OmniboxPageHandler::SetClientPage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOmniboxPageHandler_SetClientPage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::OmniboxPageHandler_SetClientPage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojom::OmniboxPagePtrDataView>(
      in_page, &params->page, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->page),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid page in OmniboxPageHandler.SetClientPage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void OmniboxPageHandlerProxy::StartOmniboxQuery(
    const std::string& in_input_string, int32_t in_cursor_position, bool in_prevent_inline_autocomplete, bool in_prefer_keyword, int32_t in_page_classification) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::OmniboxPageHandler::StartOmniboxQuery");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOmniboxPageHandler_StartOmniboxQuery_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_string)::BaseType::BufferWriter
      input_string_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_input_string, buffer, &input_string_writer, &serialization_context);
  params->input_string.Set(
      input_string_writer.is_null() ? nullptr : input_string_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_string.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_string in OmniboxPageHandler.StartOmniboxQuery request");
  params->cursor_position = in_cursor_position;
  params->prevent_inline_autocomplete = in_prevent_inline_autocomplete;
  params->prefer_keyword = in_prefer_keyword;
  params->page_classification = in_page_classification;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OmniboxPageHandlerStubDispatch::Accept(
    OmniboxPageHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOmniboxPageHandler_SetClientPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::OmniboxPageHandler::SetClientPage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OmniboxPageHandler_SetClientPage_Params_Data* params =
          reinterpret_cast<internal::OmniboxPageHandler_SetClientPage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      OmniboxPagePtr p_page{};
      OmniboxPageHandler_SetClientPage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page =
          input_data_view.TakePage<decltype(p_page)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OmniboxPageHandler::SetClientPage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClientPage(
std::move(p_page));
      return true;
    }
    case internal::kOmniboxPageHandler_StartOmniboxQuery_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::OmniboxPageHandler::StartOmniboxQuery",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data* params =
          reinterpret_cast<internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_input_string{};
      int32_t p_cursor_position{};
      bool p_prevent_inline_autocomplete{};
      bool p_prefer_keyword{};
      int32_t p_page_classification{};
      OmniboxPageHandler_StartOmniboxQuery_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputString(&p_input_string))
        success = false;
      p_cursor_position = input_data_view.cursor_position();
      p_prevent_inline_autocomplete = input_data_view.prevent_inline_autocomplete();
      p_prefer_keyword = input_data_view.prefer_keyword();
      p_page_classification = input_data_view.page_classification();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OmniboxPageHandler::StartOmniboxQuery deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartOmniboxQuery(
std::move(p_input_string), 
std::move(p_cursor_position), 
std::move(p_prevent_inline_autocomplete), 
std::move(p_prefer_keyword), 
std::move(p_page_classification));
      return true;
    }
  }
  return false;
}

// static
bool OmniboxPageHandlerStubDispatch::AcceptWithResponder(
    OmniboxPageHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOmniboxPageHandler_SetClientPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::OmniboxPageHandler::SetClientPage",
               "message", message->name());
#endif
      break;
    }
    case internal::kOmniboxPageHandler_StartOmniboxQuery_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::OmniboxPageHandler::StartOmniboxQuery",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool OmniboxPageHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OmniboxPageHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kOmniboxPageHandler_SetClientPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OmniboxPageHandler_SetClientPage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kOmniboxPageHandler_StartOmniboxQuery_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OmniboxPageHandler_StartOmniboxQuery_Params_Data>(
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

void OmniboxPageHandlerInterceptorForTesting::SetClientPage(OmniboxPagePtr page) {
  GetForwardingInterface()->SetClientPage(std::move(page));
}
void OmniboxPageHandlerInterceptorForTesting::StartOmniboxQuery(const std::string& input_string, int32_t cursor_position, bool prevent_inline_autocomplete, bool prefer_keyword, int32_t page_classification) {
  GetForwardingInterface()->StartOmniboxQuery(std::move(input_string), std::move(cursor_position), std::move(prevent_inline_autocomplete), std::move(prefer_keyword), std::move(page_classification));
}
OmniboxPageHandlerAsyncWaiter::OmniboxPageHandlerAsyncWaiter(
    OmniboxPageHandler* proxy) : proxy_(proxy) {}

OmniboxPageHandlerAsyncWaiter::~OmniboxPageHandlerAsyncWaiter() = default;


const char OmniboxPage::Name_[] = "mojom.OmniboxPage";

OmniboxPageProxy::OmniboxPageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OmniboxPageProxy::HandleNewAutocompleteResult(
    OmniboxResultPtr in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::OmniboxPage::HandleNewAutocompleteResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOmniboxPage_HandleNewAutocompleteResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::mojom::OmniboxResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in OmniboxPage.HandleNewAutocompleteResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OmniboxPageStubDispatch::Accept(
    OmniboxPage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOmniboxPage_HandleNewAutocompleteResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::OmniboxPage::HandleNewAutocompleteResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data* params =
          reinterpret_cast<internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      OmniboxResultPtr p_result{};
      OmniboxPage_HandleNewAutocompleteResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OmniboxPage::HandleNewAutocompleteResult deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HandleNewAutocompleteResult(
std::move(p_result));
      return true;
    }
  }
  return false;
}

// static
bool OmniboxPageStubDispatch::AcceptWithResponder(
    OmniboxPage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOmniboxPage_HandleNewAutocompleteResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::OmniboxPage::HandleNewAutocompleteResult",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool OmniboxPageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OmniboxPage RequestValidator");

  switch (message->header()->name) {
    case internal::kOmniboxPage_HandleNewAutocompleteResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OmniboxPage_HandleNewAutocompleteResult_Params_Data>(
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

void OmniboxPageInterceptorForTesting::HandleNewAutocompleteResult(OmniboxResultPtr result) {
  GetForwardingInterface()->HandleNewAutocompleteResult(std::move(result));
}
OmniboxPageAsyncWaiter::OmniboxPageAsyncWaiter(
    OmniboxPage* proxy) : proxy_(proxy) {}

OmniboxPageAsyncWaiter::~OmniboxPageAsyncWaiter() = default;


}  // namespace mojom

namespace mojo {


// static
bool StructTraits<::mojom::AutocompleteAdditionalInfo::DataView, ::mojom::AutocompleteAdditionalInfoPtr>::Read(
    ::mojom::AutocompleteAdditionalInfo::DataView input,
    ::mojom::AutocompleteAdditionalInfoPtr* output) {
  bool success = true;
  ::mojom::AutocompleteAdditionalInfoPtr result(::mojom::AutocompleteAdditionalInfo::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::AutocompleteMatch::DataView, ::mojom::AutocompleteMatchPtr>::Read(
    ::mojom::AutocompleteMatch::DataView input,
    ::mojom::AutocompleteMatchPtr* output) {
  bool success = true;
  ::mojom::AutocompleteMatchPtr result(::mojom::AutocompleteMatch::New());
  
      if (!input.ReadProviderName(&result->provider_name))
        success = false;
      result->provider_done = input.provider_done();
      result->relevance = input.relevance();
      result->deletable = input.deletable();
      if (!input.ReadFillIntoEdit(&result->fill_into_edit))
        success = false;
      if (!input.ReadInlineAutocompletion(&result->inline_autocompletion))
        success = false;
      if (!input.ReadDestinationUrl(&result->destination_url))
        success = false;
      if (!input.ReadContents(&result->contents))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      result->transition = input.transition();
      result->allowed_to_be_default_match = input.allowed_to_be_default_match();
      if (!input.ReadType(&result->type))
        success = false;
      result->has_tab_match = input.has_tab_match();
      if (!input.ReadAssociatedKeyword(&result->associated_keyword))
        success = false;
      if (!input.ReadKeyword(&result->keyword))
        success = false;
      result->starred = input.starred();
      result->duplicates = input.duplicates();
      result->from_previous = input.from_previous();
      if (!input.ReadAdditionalInfo(&result->additional_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::AutocompleteResultsForProvider::DataView, ::mojom::AutocompleteResultsForProviderPtr>::Read(
    ::mojom::AutocompleteResultsForProvider::DataView input,
    ::mojom::AutocompleteResultsForProviderPtr* output) {
  bool success = true;
  ::mojom::AutocompleteResultsForProviderPtr result(::mojom::AutocompleteResultsForProvider::New());
  
      if (!input.ReadProviderName(&result->provider_name))
        success = false;
      if (!input.ReadResults(&result->results))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::OmniboxResult::DataView, ::mojom::OmniboxResultPtr>::Read(
    ::mojom::OmniboxResult::DataView input,
    ::mojom::OmniboxResultPtr* output) {
  bool success = true;
  ::mojom::OmniboxResultPtr result(::mojom::OmniboxResult::New());
  
      result->done = input.done();
      result->time_since_omnibox_started_ms = input.time_since_omnibox_started_ms();
      if (!input.ReadHost(&result->host))
        success = false;
      result->is_typed_host = input.is_typed_host();
      if (!input.ReadCombinedResults(&result->combined_results))
        success = false;
      if (!input.ReadResultsByProvider(&result->results_by_provider))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif