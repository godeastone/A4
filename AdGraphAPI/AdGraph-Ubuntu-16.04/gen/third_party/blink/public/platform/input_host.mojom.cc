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

#include "third_party/blink/public/platform/input_host.mojom.h"

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

#include "third_party/blink/public/platform/input_host.mojom-shared-message-ids.h"
namespace blink {
namespace mojom {
SpellCheckSuggestion::SpellCheckSuggestion()
    : suggestion() {}

SpellCheckSuggestion::SpellCheckSuggestion(
    const std::string& suggestion_in)
    : suggestion(std::move(suggestion_in)) {}

SpellCheckSuggestion::~SpellCheckSuggestion() = default;
size_t SpellCheckSuggestion::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->suggestion);
  return seed;
}

bool SpellCheckSuggestion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TextSuggestion::TextSuggestion()
    : marker_tag(),
      suggestion_index(),
      prefix(),
      suggestion(),
      suffix() {}

TextSuggestion::TextSuggestion(
    int32_t marker_tag_in,
    int32_t suggestion_index_in,
    const std::string& prefix_in,
    const std::string& suggestion_in,
    const std::string& suffix_in)
    : marker_tag(std::move(marker_tag_in)),
      suggestion_index(std::move(suggestion_index_in)),
      prefix(std::move(prefix_in)),
      suggestion(std::move(suggestion_in)),
      suffix(std::move(suffix_in)) {}

TextSuggestion::~TextSuggestion() = default;
size_t TextSuggestion::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->marker_tag);
  seed = mojo::internal::Hash(seed, this->suggestion_index);
  seed = mojo::internal::Hash(seed, this->prefix);
  seed = mojo::internal::Hash(seed, this->suggestion);
  seed = mojo::internal::Hash(seed, this->suffix);
  return seed;
}

bool TextSuggestion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char TextSuggestionHost::Name_[] = "blink.mojom.TextSuggestionHost";

TextSuggestionHostProxy::TextSuggestionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TextSuggestionHostProxy::StartSuggestionMenuTimer(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::TextSuggestionHost::StartSuggestionMenuTimer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionHost_StartSuggestionMenuTimer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionHostProxy::ShowSpellCheckSuggestionMenu(
    double in_caret_x, double in_caret_y, const std::string& in_marked_text, std::vector<SpellCheckSuggestionPtr> in_suggestions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::TextSuggestionHost::ShowSpellCheckSuggestionMenu");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->caret_x = in_caret_x;
  params->caret_y = in_caret_y;
  typename decltype(params->marked_text)::BaseType::BufferWriter
      marked_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_marked_text, buffer, &marked_text_writer, &serialization_context);
  params->marked_text.Set(
      marked_text_writer.is_null() ? nullptr : marked_text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->marked_text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null marked_text in TextSuggestionHost.ShowSpellCheckSuggestionMenu request");
  typename decltype(params->suggestions)::BaseType::BufferWriter
      suggestions_writer;
  const mojo::internal::ContainerValidateParams suggestions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SpellCheckSuggestionDataView>>(
      in_suggestions, buffer, &suggestions_writer, &suggestions_validate_params,
      &serialization_context);
  params->suggestions.Set(
      suggestions_writer.is_null() ? nullptr : suggestions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->suggestions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null suggestions in TextSuggestionHost.ShowSpellCheckSuggestionMenu request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionHostProxy::ShowTextSuggestionMenu(
    double in_caret_x, double in_caret_y, const std::string& in_marked_text, std::vector<TextSuggestionPtr> in_suggestions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::TextSuggestionHost::ShowTextSuggestionMenu");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionHost_ShowTextSuggestionMenu_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->caret_x = in_caret_x;
  params->caret_y = in_caret_y;
  typename decltype(params->marked_text)::BaseType::BufferWriter
      marked_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_marked_text, buffer, &marked_text_writer, &serialization_context);
  params->marked_text.Set(
      marked_text_writer.is_null() ? nullptr : marked_text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->marked_text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null marked_text in TextSuggestionHost.ShowTextSuggestionMenu request");
  typename decltype(params->suggestions)::BaseType::BufferWriter
      suggestions_writer;
  const mojo::internal::ContainerValidateParams suggestions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::TextSuggestionDataView>>(
      in_suggestions, buffer, &suggestions_writer, &suggestions_validate_params,
      &serialization_context);
  params->suggestions.Set(
      suggestions_writer.is_null() ? nullptr : suggestions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->suggestions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null suggestions in TextSuggestionHost.ShowTextSuggestionMenu request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TextSuggestionHostStubDispatch::Accept(
    TextSuggestionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTextSuggestionHost_StartSuggestionMenuTimer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::TextSuggestionHost::StartSuggestionMenuTimer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextSuggestionHost_StartSuggestionMenuTimer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextSuggestionHost::StartSuggestionMenuTimer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartSuggestionMenuTimer();
      return true;
    }
    case internal::kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::TextSuggestionHost::ShowSpellCheckSuggestionMenu",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_caret_x{};
      double p_caret_y{};
      std::string p_marked_text{};
      std::vector<SpellCheckSuggestionPtr> p_suggestions{};
      TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsDataView input_data_view(params, &serialization_context);
      
      p_caret_x = input_data_view.caret_x();
      p_caret_y = input_data_view.caret_y();
      if (!input_data_view.ReadMarkedText(&p_marked_text))
        success = false;
      if (!input_data_view.ReadSuggestions(&p_suggestions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextSuggestionHost::ShowSpellCheckSuggestionMenu deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowSpellCheckSuggestionMenu(
std::move(p_caret_x), 
std::move(p_caret_y), 
std::move(p_marked_text), 
std::move(p_suggestions));
      return true;
    }
    case internal::kTextSuggestionHost_ShowTextSuggestionMenu_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::TextSuggestionHost::ShowTextSuggestionMenu",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_caret_x{};
      double p_caret_y{};
      std::string p_marked_text{};
      std::vector<TextSuggestionPtr> p_suggestions{};
      TextSuggestionHost_ShowTextSuggestionMenu_ParamsDataView input_data_view(params, &serialization_context);
      
      p_caret_x = input_data_view.caret_x();
      p_caret_y = input_data_view.caret_y();
      if (!input_data_view.ReadMarkedText(&p_marked_text))
        success = false;
      if (!input_data_view.ReadSuggestions(&p_suggestions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "TextSuggestionHost::ShowTextSuggestionMenu deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowTextSuggestionMenu(
std::move(p_caret_x), 
std::move(p_caret_y), 
std::move(p_marked_text), 
std::move(p_suggestions));
      return true;
    }
  }
  return false;
}

// static
bool TextSuggestionHostStubDispatch::AcceptWithResponder(
    TextSuggestionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTextSuggestionHost_StartSuggestionMenuTimer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::TextSuggestionHost::StartSuggestionMenuTimer",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::TextSuggestionHost::ShowSpellCheckSuggestionMenu",
               "message", message->name());
#endif
      break;
    }
    case internal::kTextSuggestionHost_ShowTextSuggestionMenu_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::TextSuggestionHost::ShowTextSuggestionMenu",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool TextSuggestionHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextSuggestionHost RequestValidator");

  switch (message->header()->name) {
    case internal::kTextSuggestionHost_StartSuggestionMenuTimer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionHost_ShowSpellCheckSuggestionMenu_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionHost_ShowTextSuggestionMenu_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data>(
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

void TextSuggestionHostInterceptorForTesting::StartSuggestionMenuTimer() {
  GetForwardingInterface()->StartSuggestionMenuTimer();
}
void TextSuggestionHostInterceptorForTesting::ShowSpellCheckSuggestionMenu(double caret_x, double caret_y, const std::string& marked_text, std::vector<SpellCheckSuggestionPtr> suggestions) {
  GetForwardingInterface()->ShowSpellCheckSuggestionMenu(std::move(caret_x), std::move(caret_y), std::move(marked_text), std::move(suggestions));
}
void TextSuggestionHostInterceptorForTesting::ShowTextSuggestionMenu(double caret_x, double caret_y, const std::string& marked_text, std::vector<TextSuggestionPtr> suggestions) {
  GetForwardingInterface()->ShowTextSuggestionMenu(std::move(caret_x), std::move(caret_y), std::move(marked_text), std::move(suggestions));
}
TextSuggestionHostAsyncWaiter::TextSuggestionHostAsyncWaiter(
    TextSuggestionHost* proxy) : proxy_(proxy) {}

TextSuggestionHostAsyncWaiter::~TextSuggestionHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::SpellCheckSuggestion::DataView, ::blink::mojom::SpellCheckSuggestionPtr>::Read(
    ::blink::mojom::SpellCheckSuggestion::DataView input,
    ::blink::mojom::SpellCheckSuggestionPtr* output) {
  bool success = true;
  ::blink::mojom::SpellCheckSuggestionPtr result(::blink::mojom::SpellCheckSuggestion::New());
  
      if (!input.ReadSuggestion(&result->suggestion))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::TextSuggestion::DataView, ::blink::mojom::TextSuggestionPtr>::Read(
    ::blink::mojom::TextSuggestion::DataView input,
    ::blink::mojom::TextSuggestionPtr* output) {
  bool success = true;
  ::blink::mojom::TextSuggestionPtr result(::blink::mojom::TextSuggestion::New());
  
      result->marker_tag = input.marker_tag();
      result->suggestion_index = input.suggestion_index();
      if (!input.ReadPrefix(&result->prefix))
        success = false;
      if (!input.ReadSuggestion(&result->suggestion))
        success = false;
      if (!input.ReadSuffix(&result->suffix))
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