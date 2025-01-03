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

#include "components/translate/content/common/translate.mojom.h"

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

#include "components/translate/content/common/translate.mojom-shared-message-ids.h"
#include "components/translate/content/common/translate_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace translate {
namespace mojom {
LanguageDetectionDetails::LanguageDetectionDetails()
    : time(),
      url(),
      content_language(),
      cld_language(),
      is_cld_reliable(),
      has_notranslate(),
      html_root_language(),
      adopted_language(),
      contents() {}

LanguageDetectionDetails::LanguageDetectionDetails(
    base::Time time_in,
    const GURL& url_in,
    const std::string& content_language_in,
    const std::string& cld_language_in,
    bool is_cld_reliable_in,
    bool has_notranslate_in,
    const std::string& html_root_language_in,
    const std::string& adopted_language_in,
    const base::string16& contents_in)
    : time(std::move(time_in)),
      url(std::move(url_in)),
      content_language(std::move(content_language_in)),
      cld_language(std::move(cld_language_in)),
      is_cld_reliable(std::move(is_cld_reliable_in)),
      has_notranslate(std::move(has_notranslate_in)),
      html_root_language(std::move(html_root_language_in)),
      adopted_language(std::move(adopted_language_in)),
      contents(std::move(contents_in)) {}

LanguageDetectionDetails::~LanguageDetectionDetails() = default;

bool LanguageDetectionDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Page::Name_[] = "translate.mojom.Page";

class Page_Translate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Page_Translate_ForwardToCallback(
      Page::TranslateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Page::TranslateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Page_Translate_ForwardToCallback);
};

PageProxy::PageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageProxy::Translate(
    const std::string& in_translate_script, const std::string& in_source_lang, const std::string& in_target_lang, TranslateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "translate::mojom::Page::Translate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPage_Translate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::translate::mojom::internal::Page_Translate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->translate_script)::BaseType::BufferWriter
      translate_script_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_translate_script, buffer, &translate_script_writer, &serialization_context);
  params->translate_script.Set(
      translate_script_writer.is_null() ? nullptr : translate_script_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->translate_script.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null translate_script in Page.Translate request");
  typename decltype(params->source_lang)::BaseType::BufferWriter
      source_lang_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_lang, buffer, &source_lang_writer, &serialization_context);
  params->source_lang.Set(
      source_lang_writer.is_null() ? nullptr : source_lang_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_lang in Page.Translate request");
  typename decltype(params->target_lang)::BaseType::BufferWriter
      target_lang_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_target_lang, buffer, &target_lang_writer, &serialization_context);
  params->target_lang.Set(
      target_lang_writer.is_null() ? nullptr : target_lang_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target_lang in Page.Translate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Page_Translate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PageProxy::RevertTranslation(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "translate::mojom::Page::RevertTranslation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPage_RevertTranslation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::translate::mojom::internal::Page_RevertTranslation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Page_Translate_ProxyToResponder {
 public:
  static Page::TranslateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Page_Translate_ProxyToResponder> proxy(
        new Page_Translate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Page_Translate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Page_Translate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Page_Translate_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Page::TranslateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_cancelled, const std::string& in_original_lang, const std::string& in_translated_lang, translate::TranslateErrors::Type in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Page_Translate_ProxyToResponder);
};

bool Page_Translate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "translate::mojom::Page::TranslateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Page_Translate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Page_Translate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_cancelled{};
  std::string p_original_lang{};
  std::string p_translated_lang{};
  translate::TranslateErrors::Type p_error{};
  Page_Translate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_cancelled = input_data_view.cancelled();
  if (!input_data_view.ReadOriginalLang(&p_original_lang))
    success = false;
  if (!input_data_view.ReadTranslatedLang(&p_translated_lang))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Page::Translate response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cancelled), 
std::move(p_original_lang), 
std::move(p_translated_lang), 
std::move(p_error));
  return true;
}

void Page_Translate_ProxyToResponder::Run(
    bool in_cancelled, const std::string& in_original_lang, const std::string& in_translated_lang, translate::TranslateErrors::Type in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPage_Translate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::translate::mojom::internal::Page_Translate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->cancelled = in_cancelled;
  typename decltype(params->original_lang)::BaseType::BufferWriter
      original_lang_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_original_lang, buffer, &original_lang_writer, &serialization_context);
  params->original_lang.Set(
      original_lang_writer.is_null() ? nullptr : original_lang_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_lang in ");
  typename decltype(params->translated_lang)::BaseType::BufferWriter
      translated_lang_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_translated_lang, buffer, &translated_lang_writer, &serialization_context);
  params->translated_lang.Set(
      translated_lang_writer.is_null() ? nullptr : translated_lang_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->translated_lang.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null translated_lang in ");
  mojo::internal::Serialize<::translate::mojom::TranslateError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::Page::TranslateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PageStubDispatch::Accept(
    Page* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::Page::Translate",
               "message", message->name());
#endif
      break;
    }
    case internal::kPage_RevertTranslation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::Page::RevertTranslation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Page_RevertTranslation_Params_Data* params =
          reinterpret_cast<internal::Page_RevertTranslation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Page_RevertTranslation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Page::RevertTranslation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RevertTranslation();
      return true;
    }
  }
  return false;
}

// static
bool PageStubDispatch::AcceptWithResponder(
    Page* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::Page::Translate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Page_Translate_Params_Data* params =
          reinterpret_cast<
              internal::Page_Translate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_translate_script{};
      std::string p_source_lang{};
      std::string p_target_lang{};
      Page_Translate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTranslateScript(&p_translate_script))
        success = false;
      if (!input_data_view.ReadSourceLang(&p_source_lang))
        success = false;
      if (!input_data_view.ReadTargetLang(&p_target_lang))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Page::Translate deserializer");
        return false;
      }
      Page::TranslateCallback callback =
          Page_Translate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Translate(
std::move(p_translate_script), 
std::move(p_source_lang), 
std::move(p_target_lang), std::move(callback));
      return true;
    }
    case internal::kPage_RevertTranslation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::Page::RevertTranslation",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Page RequestValidator");

  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Page_Translate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPage_RevertTranslation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Page_RevertTranslation_Params_Data>(
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

bool PageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Page ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPage_Translate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Page_Translate_ResponseParams_Data>(
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
void PageInterceptorForTesting::Translate(const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, TranslateCallback callback) {
  GetForwardingInterface()->Translate(std::move(translate_script), std::move(source_lang), std::move(target_lang), std::move(callback));
}
void PageInterceptorForTesting::RevertTranslation() {
  GetForwardingInterface()->RevertTranslation();
}
PageAsyncWaiter::PageAsyncWaiter(
    Page* proxy) : proxy_(proxy) {}

PageAsyncWaiter::~PageAsyncWaiter() = default;

void PageAsyncWaiter::Translate(
    const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, bool* out_cancelled, std::string* out_original_lang, std::string* out_translated_lang, translate::TranslateErrors::Type* out_error) {
  base::RunLoop loop;
  proxy_->Translate(std::move(translate_script),std::move(source_lang),std::move(target_lang),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_cancelled
,
             std::string* out_original_lang
,
             std::string* out_translated_lang
,
             translate::TranslateErrors::Type* out_error
,
             bool cancelled,
             const std::string& original_lang,
             const std::string& translated_lang,
             translate::TranslateErrors::Type error) {*out_cancelled = std::move(cancelled);*out_original_lang = std::move(original_lang);*out_translated_lang = std::move(translated_lang);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_cancelled,
          out_original_lang,
          out_translated_lang,
          out_error));
  loop.Run();
}

const char ContentTranslateDriver::Name_[] = "translate.mojom.ContentTranslateDriver";

ContentTranslateDriverProxy::ContentTranslateDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContentTranslateDriverProxy::RegisterPage(
    PagePtr in_page, const translate::LanguageDetectionDetails& in_details, bool in_page_needs_translation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "translate::mojom::ContentTranslateDriver::RegisterPage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentTranslateDriver_RegisterPage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::translate::mojom::internal::ContentTranslateDriver_RegisterPage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::translate::mojom::PagePtrDataView>(
      in_page, &params->page, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->page),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid page in ContentTranslateDriver.RegisterPage request");
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::translate::mojom::LanguageDetectionDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in ContentTranslateDriver.RegisterPage request");
  params->page_needs_translation = in_page_needs_translation;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ContentTranslateDriverStubDispatch::Accept(
    ContentTranslateDriver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContentTranslateDriver_RegisterPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::ContentTranslateDriver::RegisterPage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentTranslateDriver_RegisterPage_Params_Data* params =
          reinterpret_cast<internal::ContentTranslateDriver_RegisterPage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PagePtr p_page{};
      translate::LanguageDetectionDetails p_details{};
      bool p_page_needs_translation{};
      ContentTranslateDriver_RegisterPage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page =
          input_data_view.TakePage<decltype(p_page)>();
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      p_page_needs_translation = input_data_view.page_needs_translation();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentTranslateDriver::RegisterPage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterPage(
std::move(p_page), 
std::move(p_details), 
std::move(p_page_needs_translation));
      return true;
    }
  }
  return false;
}

// static
bool ContentTranslateDriverStubDispatch::AcceptWithResponder(
    ContentTranslateDriver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kContentTranslateDriver_RegisterPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)translate::mojom::ContentTranslateDriver::RegisterPage",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ContentTranslateDriverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContentTranslateDriver RequestValidator");

  switch (message->header()->name) {
    case internal::kContentTranslateDriver_RegisterPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentTranslateDriver_RegisterPage_Params_Data>(
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

void ContentTranslateDriverInterceptorForTesting::RegisterPage(PagePtr page, const translate::LanguageDetectionDetails& details, bool page_needs_translation) {
  GetForwardingInterface()->RegisterPage(std::move(page), std::move(details), std::move(page_needs_translation));
}
ContentTranslateDriverAsyncWaiter::ContentTranslateDriverAsyncWaiter(
    ContentTranslateDriver* proxy) : proxy_(proxy) {}

ContentTranslateDriverAsyncWaiter::~ContentTranslateDriverAsyncWaiter() = default;


}  // namespace mojom
}  // namespace translate

namespace mojo {


// static
bool StructTraits<::translate::mojom::LanguageDetectionDetails::DataView, ::translate::mojom::LanguageDetectionDetailsPtr>::Read(
    ::translate::mojom::LanguageDetectionDetails::DataView input,
    ::translate::mojom::LanguageDetectionDetailsPtr* output) {
  bool success = true;
  ::translate::mojom::LanguageDetectionDetailsPtr result(::translate::mojom::LanguageDetectionDetails::New());
  
      if (!input.ReadTime(&result->time))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadContentLanguage(&result->content_language))
        success = false;
      if (!input.ReadCldLanguage(&result->cld_language))
        success = false;
      result->is_cld_reliable = input.is_cld_reliable();
      result->has_notranslate = input.has_notranslate();
      if (!input.ReadHtmlRootLanguage(&result->html_root_language))
        success = false;
      if (!input.ReadAdoptedLanguage(&result->adopted_language))
        success = false;
      if (!input.ReadContents(&result->contents))
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