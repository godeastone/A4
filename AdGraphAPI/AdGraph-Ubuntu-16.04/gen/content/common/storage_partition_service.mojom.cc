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

#include "content/common/storage_partition_service.mojom.h"

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

#include "content/common/storage_partition_service.mojom-shared-message-ids.h"
#include "url/mojom/origin_mojom_traits.h"
namespace content {
namespace mojom {
const char SessionStorageNamespace::Name_[] = "content.mojom.SessionStorageNamespace";

SessionStorageNamespaceProxy::SessionStorageNamespaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SessionStorageNamespaceProxy::OpenArea(
    const url::Origin& in_origin, ::content::mojom::LevelDBWrapperAssociatedRequest in_database) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SessionStorageNamespace::OpenArea");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSessionStorageNamespace_OpenArea_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SessionStorageNamespace_OpenArea_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in SessionStorageNamespace.OpenArea request");
  mojo::internal::Serialize<::content::mojom::LevelDBWrapperAssociatedRequestDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database in SessionStorageNamespace.OpenArea request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SessionStorageNamespaceProxy::Clone(
    const std::string& in_clone_to_namespace) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SessionStorageNamespace::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSessionStorageNamespace_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SessionStorageNamespace_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->clone_to_namespace)::BaseType::BufferWriter
      clone_to_namespace_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_clone_to_namespace, buffer, &clone_to_namespace_writer, &serialization_context);
  params->clone_to_namespace.Set(
      clone_to_namespace_writer.is_null() ? nullptr : clone_to_namespace_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->clone_to_namespace.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null clone_to_namespace in SessionStorageNamespace.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SessionStorageNamespaceStubDispatch::Accept(
    SessionStorageNamespace* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSessionStorageNamespace_OpenArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SessionStorageNamespace::OpenArea",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SessionStorageNamespace_OpenArea_Params_Data* params =
          reinterpret_cast<internal::SessionStorageNamespace_OpenArea_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      ::content::mojom::LevelDBWrapperAssociatedRequest p_database{};
      SessionStorageNamespace_OpenArea_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SessionStorageNamespace::OpenArea deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenArea(
std::move(p_origin), 
std::move(p_database));
      return true;
    }
    case internal::kSessionStorageNamespace_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SessionStorageNamespace::Clone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SessionStorageNamespace_Clone_Params_Data* params =
          reinterpret_cast<internal::SessionStorageNamespace_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_clone_to_namespace{};
      SessionStorageNamespace_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCloneToNamespace(&p_clone_to_namespace))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SessionStorageNamespace::Clone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clone(
std::move(p_clone_to_namespace));
      return true;
    }
  }
  return false;
}

// static
bool SessionStorageNamespaceStubDispatch::AcceptWithResponder(
    SessionStorageNamespace* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSessionStorageNamespace_OpenArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SessionStorageNamespace::OpenArea",
               "message", message->name());
#endif
      break;
    }
    case internal::kSessionStorageNamespace_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SessionStorageNamespace::Clone",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SessionStorageNamespaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SessionStorageNamespace RequestValidator");

  switch (message->header()->name) {
    case internal::kSessionStorageNamespace_OpenArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SessionStorageNamespace_OpenArea_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSessionStorageNamespace_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SessionStorageNamespace_Clone_Params_Data>(
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

void SessionStorageNamespaceInterceptorForTesting::OpenArea(const url::Origin& origin, ::content::mojom::LevelDBWrapperAssociatedRequest database) {
  GetForwardingInterface()->OpenArea(std::move(origin), std::move(database));
}
void SessionStorageNamespaceInterceptorForTesting::Clone(const std::string& clone_to_namespace) {
  GetForwardingInterface()->Clone(std::move(clone_to_namespace));
}
SessionStorageNamespaceAsyncWaiter::SessionStorageNamespaceAsyncWaiter(
    SessionStorageNamespace* proxy) : proxy_(proxy) {}

SessionStorageNamespaceAsyncWaiter::~SessionStorageNamespaceAsyncWaiter() = default;


const char StoragePartitionService::Name_[] = "content.mojom.StoragePartitionService";

StoragePartitionServiceProxy::StoragePartitionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StoragePartitionServiceProxy::OpenLocalStorage(
    const url::Origin& in_origin, ::content::mojom::LevelDBWrapperRequest in_database) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::StoragePartitionService::OpenLocalStorage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStoragePartitionService_OpenLocalStorage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::StoragePartitionService_OpenLocalStorage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in StoragePartitionService.OpenLocalStorage request");
  mojo::internal::Serialize<::content::mojom::LevelDBWrapperRequestDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid database in StoragePartitionService.OpenLocalStorage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StoragePartitionServiceProxy::OpenSessionStorage(
    const std::string& in_namespace_id, SessionStorageNamespaceRequest in_session_namespace) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::StoragePartitionService::OpenSessionStorage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStoragePartitionService_OpenSessionStorage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::StoragePartitionService_OpenSessionStorage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->namespace_id)::BaseType::BufferWriter
      namespace_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_namespace_id, buffer, &namespace_id_writer, &serialization_context);
  params->namespace_id.Set(
      namespace_id_writer.is_null() ? nullptr : namespace_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->namespace_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null namespace_id in StoragePartitionService.OpenSessionStorage request");
  mojo::internal::Serialize<::content::mojom::SessionStorageNamespaceRequestDataView>(
      in_session_namespace, &params->session_namespace, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->session_namespace),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid session_namespace in StoragePartitionService.OpenSessionStorage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool StoragePartitionServiceStubDispatch::Accept(
    StoragePartitionService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::StoragePartitionService::OpenLocalStorage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StoragePartitionService_OpenLocalStorage_Params_Data* params =
          reinterpret_cast<internal::StoragePartitionService_OpenLocalStorage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      ::content::mojom::LevelDBWrapperRequest p_database{};
      StoragePartitionService_OpenLocalStorage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StoragePartitionService::OpenLocalStorage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenLocalStorage(
std::move(p_origin), 
std::move(p_database));
      return true;
    }
    case internal::kStoragePartitionService_OpenSessionStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::StoragePartitionService::OpenSessionStorage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StoragePartitionService_OpenSessionStorage_Params_Data* params =
          reinterpret_cast<internal::StoragePartitionService_OpenSessionStorage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_namespace_id{};
      SessionStorageNamespaceRequest p_session_namespace{};
      StoragePartitionService_OpenSessionStorage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNamespaceId(&p_namespace_id))
        success = false;
      p_session_namespace =
          input_data_view.TakeSessionNamespace<decltype(p_session_namespace)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StoragePartitionService::OpenSessionStorage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenSessionStorage(
std::move(p_namespace_id), 
std::move(p_session_namespace));
      return true;
    }
  }
  return false;
}

// static
bool StoragePartitionServiceStubDispatch::AcceptWithResponder(
    StoragePartitionService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::StoragePartitionService::OpenLocalStorage",
               "message", message->name());
#endif
      break;
    }
    case internal::kStoragePartitionService_OpenSessionStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::StoragePartitionService::OpenSessionStorage",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool StoragePartitionServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StoragePartitionService RequestValidator");

  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StoragePartitionService_OpenLocalStorage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStoragePartitionService_OpenSessionStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StoragePartitionService_OpenSessionStorage_Params_Data>(
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

void StoragePartitionServiceInterceptorForTesting::OpenLocalStorage(const url::Origin& origin, ::content::mojom::LevelDBWrapperRequest database) {
  GetForwardingInterface()->OpenLocalStorage(std::move(origin), std::move(database));
}
void StoragePartitionServiceInterceptorForTesting::OpenSessionStorage(const std::string& namespace_id, SessionStorageNamespaceRequest session_namespace) {
  GetForwardingInterface()->OpenSessionStorage(std::move(namespace_id), std::move(session_namespace));
}
StoragePartitionServiceAsyncWaiter::StoragePartitionServiceAsyncWaiter(
    StoragePartitionService* proxy) : proxy_(proxy) {}

StoragePartitionServiceAsyncWaiter::~StoragePartitionServiceAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif