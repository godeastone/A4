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

#include "components/chrome_cleaner/public/interfaces/chrome_prompt.mojom.h"

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

#include "components/chrome_cleaner/public/interfaces/chrome_prompt.mojom-shared-message-ids.h"
#include "components/chrome_cleaner/public/typemaps/chrome_prompt_struct_traits.h"
namespace chrome_cleaner {
namespace mojom {
FilePath::FilePath()
    : value() {}

FilePath::FilePath(
    const std::vector<uint16_t>& value_in)
    : value(std::move(value_in)) {}

FilePath::~FilePath() = default;

bool FilePath::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RegistryKey::RegistryKey()
    : value() {}

RegistryKey::RegistryKey(
    const std::vector<uint16_t>& value_in)
    : value(std::move(value_in)) {}

RegistryKey::~RegistryKey() = default;

bool RegistryKey::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ChromePrompt::Name_[] = "chrome_cleaner.mojom.ChromePrompt";

class ChromePrompt_PromptUser_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ChromePrompt_PromptUser_ForwardToCallback(
      ChromePrompt::PromptUserCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ChromePrompt::PromptUserCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ChromePrompt_PromptUser_ForwardToCallback);
};

ChromePromptProxy::ChromePromptProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChromePromptProxy::PromptUser(
    const std::vector<base::FilePath>& in_files_to_delete, const base::Optional<std::vector<base::string16>>& in_registry_keys, PromptUserCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome_cleaner::mojom::ChromePrompt::PromptUser");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromePrompt_PromptUser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome_cleaner::mojom::internal::ChromePrompt_PromptUser_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->files_to_delete)::BaseType::BufferWriter
      files_to_delete_writer;
  const mojo::internal::ContainerValidateParams files_to_delete_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome_cleaner::mojom::FilePathDataView>>(
      in_files_to_delete, buffer, &files_to_delete_writer, &files_to_delete_validate_params,
      &serialization_context);
  params->files_to_delete.Set(
      files_to_delete_writer.is_null() ? nullptr : files_to_delete_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->files_to_delete.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null files_to_delete in ChromePrompt.PromptUser request");
  typename decltype(params->registry_keys)::BaseType::BufferWriter
      registry_keys_writer;
  const mojo::internal::ContainerValidateParams registry_keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome_cleaner::mojom::RegistryKeyDataView>>(
      in_registry_keys, buffer, &registry_keys_writer, &registry_keys_validate_params,
      &serialization_context);
  params->registry_keys.Set(
      registry_keys_writer.is_null() ? nullptr : registry_keys_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ChromePrompt_PromptUser_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ChromePrompt_PromptUser_ProxyToResponder {
 public:
  static ChromePrompt::PromptUserCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ChromePrompt_PromptUser_ProxyToResponder> proxy(
        new ChromePrompt_PromptUser_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ChromePrompt_PromptUser_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ChromePrompt_PromptUser_ProxyToResponder() {
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
  ChromePrompt_PromptUser_ProxyToResponder(
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
        << "ChromePrompt::PromptUserCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PromptAcceptance in_prompt_acceptance);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ChromePrompt_PromptUser_ProxyToResponder);
};

bool ChromePrompt_PromptUser_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome_cleaner::mojom::ChromePrompt::PromptUserCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ChromePrompt_PromptUser_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ChromePrompt_PromptUser_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PromptAcceptance p_prompt_acceptance{};
  ChromePrompt_PromptUser_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPromptAcceptance(&p_prompt_acceptance))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ChromePrompt::PromptUser response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_prompt_acceptance));
  return true;
}

void ChromePrompt_PromptUser_ProxyToResponder::Run(
    PromptAcceptance in_prompt_acceptance) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromePrompt_PromptUser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome_cleaner::mojom::internal::ChromePrompt_PromptUser_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome_cleaner::mojom::PromptAcceptance>(
      in_prompt_acceptance, &params->prompt_acceptance);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome_cleaner::mojom::ChromePrompt::PromptUserCallback",
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
bool ChromePromptStubDispatch::Accept(
    ChromePrompt* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChromePrompt_PromptUser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome_cleaner::mojom::ChromePrompt::PromptUser",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ChromePromptStubDispatch::AcceptWithResponder(
    ChromePrompt* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChromePrompt_PromptUser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome_cleaner::mojom::ChromePrompt::PromptUser",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ChromePrompt_PromptUser_Params_Data* params =
          reinterpret_cast<
              internal::ChromePrompt_PromptUser_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<base::FilePath> p_files_to_delete{};
      base::Optional<std::vector<base::string16>> p_registry_keys{};
      ChromePrompt_PromptUser_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilesToDelete(&p_files_to_delete))
        success = false;
      if (!input_data_view.ReadRegistryKeys(&p_registry_keys))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromePrompt::PromptUser deserializer");
        return false;
      }
      ChromePrompt::PromptUserCallback callback =
          ChromePrompt_PromptUser_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PromptUser(
std::move(p_files_to_delete), 
std::move(p_registry_keys), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ChromePromptRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChromePrompt RequestValidator");

  switch (message->header()->name) {
    case internal::kChromePrompt_PromptUser_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromePrompt_PromptUser_Params_Data>(
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

bool ChromePromptResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChromePrompt ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kChromePrompt_PromptUser_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromePrompt_PromptUser_ResponseParams_Data>(
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
void ChromePromptInterceptorForTesting::PromptUser(const std::vector<base::FilePath>& files_to_delete, const base::Optional<std::vector<base::string16>>& registry_keys, PromptUserCallback callback) {
  GetForwardingInterface()->PromptUser(std::move(files_to_delete), std::move(registry_keys), std::move(callback));
}
ChromePromptAsyncWaiter::ChromePromptAsyncWaiter(
    ChromePrompt* proxy) : proxy_(proxy) {}

ChromePromptAsyncWaiter::~ChromePromptAsyncWaiter() = default;

void ChromePromptAsyncWaiter::PromptUser(
    const std::vector<base::FilePath>& files_to_delete, const base::Optional<std::vector<base::string16>>& registry_keys, PromptAcceptance* out_prompt_acceptance) {
  base::RunLoop loop;
  proxy_->PromptUser(std::move(files_to_delete),std::move(registry_keys),
      base::BindOnce(
          [](base::RunLoop* loop,
             PromptAcceptance* out_prompt_acceptance
,
             PromptAcceptance prompt_acceptance) {*out_prompt_acceptance = std::move(prompt_acceptance);
            loop->Quit();
          },
          &loop,
          out_prompt_acceptance));
  loop.Run();
}

}  // namespace mojom
}  // namespace chrome_cleaner

namespace mojo {


// static
bool StructTraits<::chrome_cleaner::mojom::FilePath::DataView, ::chrome_cleaner::mojom::FilePathPtr>::Read(
    ::chrome_cleaner::mojom::FilePath::DataView input,
    ::chrome_cleaner::mojom::FilePathPtr* output) {
  bool success = true;
  ::chrome_cleaner::mojom::FilePathPtr result(::chrome_cleaner::mojom::FilePath::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::chrome_cleaner::mojom::RegistryKey::DataView, ::chrome_cleaner::mojom::RegistryKeyPtr>::Read(
    ::chrome_cleaner::mojom::RegistryKey::DataView input,
    ::chrome_cleaner::mojom::RegistryKeyPtr* output) {
  bool success = true;
  ::chrome_cleaner::mojom::RegistryKeyPtr result(::chrome_cleaner::mojom::RegistryKey::New());
  
      if (!input.ReadValue(&result->value))
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