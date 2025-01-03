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

#include "components/spellcheck/common/spellcheck.mojom.h"

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

#include "components/spellcheck/common/spellcheck.mojom-shared-message-ids.h"
#include "components/spellcheck/common/spellcheck_struct_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
namespace spellcheck {
namespace mojom {
SpellCheckBDictLanguage::SpellCheckBDictLanguage()
    : file(),
      language() {}

SpellCheckBDictLanguage::SpellCheckBDictLanguage(
    base::File file_in,
    const std::string& language_in)
    : file(std::move(file_in)),
      language(std::move(language_in)) {}

SpellCheckBDictLanguage::~SpellCheckBDictLanguage() = default;

bool SpellCheckBDictLanguage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SpellCheckResult::SpellCheckResult()
    : decoration(),
      location(),
      length(),
      replacements() {}

SpellCheckResult::SpellCheckResult(
    ::SpellCheckResult::Decoration decoration_in,
    int32_t location_in,
    int32_t length_in,
    const std::vector<base::string16>& replacements_in)
    : decoration(std::move(decoration_in)),
      location(std::move(location_in)),
      length(std::move(length_in)),
      replacements(std::move(replacements_in)) {}

SpellCheckResult::~SpellCheckResult() = default;

bool SpellCheckResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SpellChecker::Name_[] = "spellcheck.mojom.SpellChecker";

SpellCheckerProxy::SpellCheckerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SpellCheckerProxy::Initialize(
    std::vector<SpellCheckBDictLanguagePtr> in_dictionaries, const std::vector<std::string>& in_custom_words, bool in_enable) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "spellcheck::mojom::SpellChecker::Initialize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpellChecker_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::spellcheck::mojom::internal::SpellChecker_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dictionaries)::BaseType::BufferWriter
      dictionaries_writer;
  const mojo::internal::ContainerValidateParams dictionaries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::spellcheck::mojom::SpellCheckBDictLanguageDataView>>(
      in_dictionaries, buffer, &dictionaries_writer, &dictionaries_validate_params,
      &serialization_context);
  params->dictionaries.Set(
      dictionaries_writer.is_null() ? nullptr : dictionaries_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dictionaries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dictionaries in SpellChecker.Initialize request");
  typename decltype(params->custom_words)::BaseType::BufferWriter
      custom_words_writer;
  const mojo::internal::ContainerValidateParams custom_words_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_custom_words, buffer, &custom_words_writer, &custom_words_validate_params,
      &serialization_context);
  params->custom_words.Set(
      custom_words_writer.is_null() ? nullptr : custom_words_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->custom_words.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null custom_words in SpellChecker.Initialize request");
  params->enable = in_enable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpellCheckerProxy::CustomDictionaryChanged(
    const std::vector<std::string>& in_words_added, const std::vector<std::string>& in_words_removed) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "spellcheck::mojom::SpellChecker::CustomDictionaryChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpellChecker_CustomDictionaryChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::spellcheck::mojom::internal::SpellChecker_CustomDictionaryChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->words_added)::BaseType::BufferWriter
      words_added_writer;
  const mojo::internal::ContainerValidateParams words_added_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_words_added, buffer, &words_added_writer, &words_added_validate_params,
      &serialization_context);
  params->words_added.Set(
      words_added_writer.is_null() ? nullptr : words_added_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->words_added.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null words_added in SpellChecker.CustomDictionaryChanged request");
  typename decltype(params->words_removed)::BaseType::BufferWriter
      words_removed_writer;
  const mojo::internal::ContainerValidateParams words_removed_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_words_removed, buffer, &words_removed_writer, &words_removed_validate_params,
      &serialization_context);
  params->words_removed.Set(
      words_removed_writer.is_null() ? nullptr : words_removed_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->words_removed.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null words_removed in SpellChecker.CustomDictionaryChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SpellCheckerStubDispatch::Accept(
    SpellChecker* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSpellChecker_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellChecker::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpellChecker_Initialize_Params_Data* params =
          reinterpret_cast<internal::SpellChecker_Initialize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<SpellCheckBDictLanguagePtr> p_dictionaries{};
      std::vector<std::string> p_custom_words{};
      bool p_enable{};
      SpellChecker_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDictionaries(&p_dictionaries))
        success = false;
      if (!input_data_view.ReadCustomWords(&p_custom_words))
        success = false;
      p_enable = input_data_view.enable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SpellChecker::Initialize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_dictionaries), 
std::move(p_custom_words), 
std::move(p_enable));
      return true;
    }
    case internal::kSpellChecker_CustomDictionaryChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellChecker::CustomDictionaryChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpellChecker_CustomDictionaryChanged_Params_Data* params =
          reinterpret_cast<internal::SpellChecker_CustomDictionaryChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<std::string> p_words_added{};
      std::vector<std::string> p_words_removed{};
      SpellChecker_CustomDictionaryChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWordsAdded(&p_words_added))
        success = false;
      if (!input_data_view.ReadWordsRemoved(&p_words_removed))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SpellChecker::CustomDictionaryChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CustomDictionaryChanged(
std::move(p_words_added), 
std::move(p_words_removed));
      return true;
    }
  }
  return false;
}

// static
bool SpellCheckerStubDispatch::AcceptWithResponder(
    SpellChecker* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSpellChecker_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellChecker::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kSpellChecker_CustomDictionaryChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellChecker::CustomDictionaryChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SpellCheckerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpellChecker RequestValidator");

  switch (message->header()->name) {
    case internal::kSpellChecker_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpellChecker_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpellChecker_CustomDictionaryChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpellChecker_CustomDictionaryChanged_Params_Data>(
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

void SpellCheckerInterceptorForTesting::Initialize(std::vector<SpellCheckBDictLanguagePtr> dictionaries, const std::vector<std::string>& custom_words, bool enable) {
  GetForwardingInterface()->Initialize(std::move(dictionaries), std::move(custom_words), std::move(enable));
}
void SpellCheckerInterceptorForTesting::CustomDictionaryChanged(const std::vector<std::string>& words_added, const std::vector<std::string>& words_removed) {
  GetForwardingInterface()->CustomDictionaryChanged(std::move(words_added), std::move(words_removed));
}
SpellCheckerAsyncWaiter::SpellCheckerAsyncWaiter(
    SpellChecker* proxy) : proxy_(proxy) {}

SpellCheckerAsyncWaiter::~SpellCheckerAsyncWaiter() = default;


const char SpellCheckHost::Name_[] = "spellcheck.mojom.SpellCheckHost";

class SpellCheckHost_CallSpellingService_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SpellCheckHost_CallSpellingService_ForwardToCallback(
      SpellCheckHost::CallSpellingServiceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SpellCheckHost::CallSpellingServiceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SpellCheckHost_CallSpellingService_ForwardToCallback);
};

SpellCheckHostProxy::SpellCheckHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SpellCheckHostProxy::RequestDictionary(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "spellcheck::mojom::SpellCheckHost::RequestDictionary");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpellCheckHost_RequestDictionary_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::spellcheck::mojom::internal::SpellCheckHost_RequestDictionary_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpellCheckHostProxy::NotifyChecked(
    const base::string16& in_word, bool in_misspelled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "spellcheck::mojom::SpellCheckHost::NotifyChecked");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpellCheckHost_NotifyChecked_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::spellcheck::mojom::internal::SpellCheckHost_NotifyChecked_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->word)::BaseType::BufferWriter
      word_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_word, buffer, &word_writer, &serialization_context);
  params->word.Set(
      word_writer.is_null() ? nullptr : word_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->word.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null word in SpellCheckHost.NotifyChecked request");
  params->misspelled = in_misspelled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpellCheckHostProxy::CallSpellingService(
    const base::string16& in_text, CallSpellingServiceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "spellcheck::mojom::SpellCheckHost::CallSpellingService");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpellCheckHost_CallSpellingService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::spellcheck::mojom::internal::SpellCheckHost_CallSpellingService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in SpellCheckHost.CallSpellingService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SpellCheckHost_CallSpellingService_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SpellCheckHost_CallSpellingService_ProxyToResponder {
 public:
  static SpellCheckHost::CallSpellingServiceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SpellCheckHost_CallSpellingService_ProxyToResponder> proxy(
        new SpellCheckHost_CallSpellingService_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SpellCheckHost_CallSpellingService_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SpellCheckHost_CallSpellingService_ProxyToResponder() {
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
  SpellCheckHost_CallSpellingService_ProxyToResponder(
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
        << "SpellCheckHost::CallSpellingServiceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const std::vector<::SpellCheckResult>& in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SpellCheckHost_CallSpellingService_ProxyToResponder);
};

bool SpellCheckHost_CallSpellingService_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "spellcheck::mojom::SpellCheckHost::CallSpellingServiceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SpellCheckHost_CallSpellingService_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SpellCheckHost_CallSpellingService_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  std::vector<::SpellCheckResult> p_results{};
  SpellCheckHost_CallSpellingService_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SpellCheckHost::CallSpellingService response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_results));
  return true;
}

void SpellCheckHost_CallSpellingService_ProxyToResponder::Run(
    bool in_success, const std::vector<::SpellCheckResult>& in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpellCheckHost_CallSpellingService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::spellcheck::mojom::internal::SpellCheckHost_CallSpellingService_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::spellcheck::mojom::SpellCheckResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::CallSpellingServiceCallback",
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
bool SpellCheckHostStubDispatch::Accept(
    SpellCheckHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSpellCheckHost_RequestDictionary_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::RequestDictionary",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpellCheckHost_RequestDictionary_Params_Data* params =
          reinterpret_cast<internal::SpellCheckHost_RequestDictionary_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpellCheckHost_RequestDictionary_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SpellCheckHost::RequestDictionary deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestDictionary();
      return true;
    }
    case internal::kSpellCheckHost_NotifyChecked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::NotifyChecked",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpellCheckHost_NotifyChecked_Params_Data* params =
          reinterpret_cast<internal::SpellCheckHost_NotifyChecked_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_word{};
      bool p_misspelled{};
      SpellCheckHost_NotifyChecked_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWord(&p_word))
        success = false;
      p_misspelled = input_data_view.misspelled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SpellCheckHost::NotifyChecked deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyChecked(
std::move(p_word), 
std::move(p_misspelled));
      return true;
    }
    case internal::kSpellCheckHost_CallSpellingService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::CallSpellingService",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SpellCheckHostStubDispatch::AcceptWithResponder(
    SpellCheckHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSpellCheckHost_RequestDictionary_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::RequestDictionary",
               "message", message->name());
#endif
      break;
    }
    case internal::kSpellCheckHost_NotifyChecked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::NotifyChecked",
               "message", message->name());
#endif
      break;
    }
    case internal::kSpellCheckHost_CallSpellingService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)spellcheck::mojom::SpellCheckHost::CallSpellingService",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SpellCheckHost_CallSpellingService_Params_Data* params =
          reinterpret_cast<
              internal::SpellCheckHost_CallSpellingService_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_text{};
      SpellCheckHost_CallSpellingService_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SpellCheckHost::CallSpellingService deserializer");
        return false;
      }
      SpellCheckHost::CallSpellingServiceCallback callback =
          SpellCheckHost_CallSpellingService_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CallSpellingService(
std::move(p_text), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SpellCheckHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpellCheckHost RequestValidator");

  switch (message->header()->name) {
    case internal::kSpellCheckHost_RequestDictionary_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpellCheckHost_RequestDictionary_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpellCheckHost_NotifyChecked_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpellCheckHost_NotifyChecked_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpellCheckHost_CallSpellingService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpellCheckHost_CallSpellingService_Params_Data>(
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

bool SpellCheckHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpellCheckHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSpellCheckHost_CallSpellingService_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpellCheckHost_CallSpellingService_ResponseParams_Data>(
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
void SpellCheckHostInterceptorForTesting::RequestDictionary() {
  GetForwardingInterface()->RequestDictionary();
}
void SpellCheckHostInterceptorForTesting::NotifyChecked(const base::string16& word, bool misspelled) {
  GetForwardingInterface()->NotifyChecked(std::move(word), std::move(misspelled));
}
void SpellCheckHostInterceptorForTesting::CallSpellingService(const base::string16& text, CallSpellingServiceCallback callback) {
  GetForwardingInterface()->CallSpellingService(std::move(text), std::move(callback));
}
SpellCheckHostAsyncWaiter::SpellCheckHostAsyncWaiter(
    SpellCheckHost* proxy) : proxy_(proxy) {}

SpellCheckHostAsyncWaiter::~SpellCheckHostAsyncWaiter() = default;

void SpellCheckHostAsyncWaiter::CallSpellingService(
    const base::string16& text, bool* out_success, std::vector<::SpellCheckResult>* out_results) {
  base::RunLoop loop;
  proxy_->CallSpellingService(std::move(text),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             std::vector<::SpellCheckResult>* out_results
,
             bool success,
             const std::vector<::SpellCheckResult>& results) {*out_success = std::move(success);*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_success,
          out_results));
  loop.Run();
}

}  // namespace mojom
}  // namespace spellcheck

namespace mojo {


// static
bool StructTraits<::spellcheck::mojom::SpellCheckBDictLanguage::DataView, ::spellcheck::mojom::SpellCheckBDictLanguagePtr>::Read(
    ::spellcheck::mojom::SpellCheckBDictLanguage::DataView input,
    ::spellcheck::mojom::SpellCheckBDictLanguagePtr* output) {
  bool success = true;
  ::spellcheck::mojom::SpellCheckBDictLanguagePtr result(::spellcheck::mojom::SpellCheckBDictLanguage::New());
  
      if (!input.ReadFile(&result->file))
        success = false;
      if (!input.ReadLanguage(&result->language))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::spellcheck::mojom::SpellCheckResult::DataView, ::spellcheck::mojom::SpellCheckResultPtr>::Read(
    ::spellcheck::mojom::SpellCheckResult::DataView input,
    ::spellcheck::mojom::SpellCheckResultPtr* output) {
  bool success = true;
  ::spellcheck::mojom::SpellCheckResultPtr result(::spellcheck::mojom::SpellCheckResult::New());
  
      if (!input.ReadDecoration(&result->decoration))
        success = false;
      result->location = input.location();
      result->length = input.length();
      if (!input.ReadReplacements(&result->replacements))
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