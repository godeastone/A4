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

#include "chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom.h"

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

#include "chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
namespace chrome {
namespace mojom {
const char RemovableStorageWriter::Name_[] = "chrome.mojom.RemovableStorageWriter";
const char RemovableStorageWriter::kTestDevice[] = "chrome://test-removable-storage-writer";

RemovableStorageWriterProxy::RemovableStorageWriterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemovableStorageWriterProxy::Write(
    const base::FilePath& in_source, const base::FilePath& in_target, RemovableStorageWriterClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RemovableStorageWriter::Write");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemovableStorageWriter_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RemovableStorageWriter_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in RemovableStorageWriter.Write request");
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_target, buffer, &target_writer, &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in RemovableStorageWriter.Write request");
  mojo::internal::Serialize<::chrome::mojom::RemovableStorageWriterClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in RemovableStorageWriter.Write request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemovableStorageWriterProxy::Verify(
    const base::FilePath& in_source, const base::FilePath& in_target, RemovableStorageWriterClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RemovableStorageWriter::Verify");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemovableStorageWriter_Verify_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RemovableStorageWriter_Verify_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in RemovableStorageWriter.Verify request");
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_target, buffer, &target_writer, &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in RemovableStorageWriter.Verify request");
  mojo::internal::Serialize<::chrome::mojom::RemovableStorageWriterClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in RemovableStorageWriter.Verify request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemovableStorageWriterStubDispatch::Accept(
    RemovableStorageWriter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemovableStorageWriter_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriter::Write",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemovableStorageWriter_Write_Params_Data* params =
          reinterpret_cast<internal::RemovableStorageWriter_Write_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_source{};
      base::FilePath p_target{};
      RemovableStorageWriterClientPtr p_client{};
      RemovableStorageWriter_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemovableStorageWriter::Write deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Write(
std::move(p_source), 
std::move(p_target), 
std::move(p_client));
      return true;
    }
    case internal::kRemovableStorageWriter_Verify_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriter::Verify",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemovableStorageWriter_Verify_Params_Data* params =
          reinterpret_cast<internal::RemovableStorageWriter_Verify_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_source{};
      base::FilePath p_target{};
      RemovableStorageWriterClientPtr p_client{};
      RemovableStorageWriter_Verify_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemovableStorageWriter::Verify deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Verify(
std::move(p_source), 
std::move(p_target), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool RemovableStorageWriterStubDispatch::AcceptWithResponder(
    RemovableStorageWriter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemovableStorageWriter_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriter::Write",
               "message", message->name());
#endif
      break;
    }
    case internal::kRemovableStorageWriter_Verify_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriter::Verify",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RemovableStorageWriterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemovableStorageWriter RequestValidator");

  switch (message->header()->name) {
    case internal::kRemovableStorageWriter_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemovableStorageWriter_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemovableStorageWriter_Verify_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemovableStorageWriter_Verify_Params_Data>(
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

void RemovableStorageWriterInterceptorForTesting::Write(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) {
  GetForwardingInterface()->Write(std::move(source), std::move(target), std::move(client));
}
void RemovableStorageWriterInterceptorForTesting::Verify(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) {
  GetForwardingInterface()->Verify(std::move(source), std::move(target), std::move(client));
}
RemovableStorageWriterAsyncWaiter::RemovableStorageWriterAsyncWaiter(
    RemovableStorageWriter* proxy) : proxy_(proxy) {}

RemovableStorageWriterAsyncWaiter::~RemovableStorageWriterAsyncWaiter() = default;


const char RemovableStorageWriterClient::Name_[] = "chrome.mojom.RemovableStorageWriterClient";

RemovableStorageWriterClientProxy::RemovableStorageWriterClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemovableStorageWriterClientProxy::Progress(
    int64_t in_progress) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RemovableStorageWriterClient::Progress");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemovableStorageWriterClient_Progress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RemovableStorageWriterClient_Progress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->progress = in_progress;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemovableStorageWriterClientProxy::Complete(
    const base::Optional<std::string>& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RemovableStorageWriterClient::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemovableStorageWriterClient_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RemovableStorageWriterClient_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemovableStorageWriterClientStubDispatch::Accept(
    RemovableStorageWriterClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemovableStorageWriterClient_Progress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriterClient::Progress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemovableStorageWriterClient_Progress_Params_Data* params =
          reinterpret_cast<internal::RemovableStorageWriterClient_Progress_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_progress{};
      RemovableStorageWriterClient_Progress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_progress = input_data_view.progress();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemovableStorageWriterClient::Progress deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Progress(
std::move(p_progress));
      return true;
    }
    case internal::kRemovableStorageWriterClient_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriterClient::Complete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemovableStorageWriterClient_Complete_Params_Data* params =
          reinterpret_cast<internal::RemovableStorageWriterClient_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<std::string> p_error{};
      RemovableStorageWriterClient_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RemovableStorageWriterClient::Complete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Complete(
std::move(p_error));
      return true;
    }
  }
  return false;
}

// static
bool RemovableStorageWriterClientStubDispatch::AcceptWithResponder(
    RemovableStorageWriterClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemovableStorageWriterClient_Progress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriterClient::Progress",
               "message", message->name());
#endif
      break;
    }
    case internal::kRemovableStorageWriterClient_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RemovableStorageWriterClient::Complete",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RemovableStorageWriterClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemovableStorageWriterClient RequestValidator");

  switch (message->header()->name) {
    case internal::kRemovableStorageWriterClient_Progress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemovableStorageWriterClient_Progress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemovableStorageWriterClient_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemovableStorageWriterClient_Complete_Params_Data>(
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

void RemovableStorageWriterClientInterceptorForTesting::Progress(int64_t progress) {
  GetForwardingInterface()->Progress(std::move(progress));
}
void RemovableStorageWriterClientInterceptorForTesting::Complete(const base::Optional<std::string>& error) {
  GetForwardingInterface()->Complete(std::move(error));
}
RemovableStorageWriterClientAsyncWaiter::RemovableStorageWriterClientAsyncWaiter(
    RemovableStorageWriterClient* proxy) : proxy_(proxy) {}

RemovableStorageWriterClientAsyncWaiter::~RemovableStorageWriterClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif