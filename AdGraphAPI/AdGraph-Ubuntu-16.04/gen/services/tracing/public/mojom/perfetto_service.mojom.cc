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

#include "services/tracing/public/mojom/perfetto_service.mojom.h"

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

#include "services/tracing/public/mojom/perfetto_service.mojom-shared-message-ids.h"
namespace tracing {
namespace mojom {
const char kTraceEventDataSourceName[] = "org.chromium.trace_event";
ChunksToMove::ChunksToMove()
    : page(),
      chunk(),
      target_buffer() {}

ChunksToMove::ChunksToMove(
    uint32_t page_in,
    uint32_t chunk_in,
    uint32_t target_buffer_in)
    : page(std::move(page_in)),
      chunk(std::move(chunk_in)),
      target_buffer(std::move(target_buffer_in)) {}

ChunksToMove::~ChunksToMove() = default;
size_t ChunksToMove::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->page);
  seed = mojo::internal::Hash(seed, this->chunk);
  seed = mojo::internal::Hash(seed, this->target_buffer);
  return seed;
}

bool ChunksToMove::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ChunkPatch::ChunkPatch()
    : offset(),
      data() {}

ChunkPatch::ChunkPatch(
    uint32_t offset_in,
    const std::string& data_in)
    : offset(std::move(offset_in)),
      data(std::move(data_in)) {}

ChunkPatch::~ChunkPatch() = default;
size_t ChunkPatch::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->offset);
  seed = mojo::internal::Hash(seed, this->data);
  return seed;
}

bool ChunkPatch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ChunksToPatch::ChunksToPatch()
    : target_buffer(),
      writer_id(),
      chunk_id(),
      patches(),
      has_more_patches() {}

ChunksToPatch::ChunksToPatch(
    uint32_t target_buffer_in,
    uint32_t writer_id_in,
    uint32_t chunk_id_in,
    std::vector<ChunkPatchPtr> patches_in,
    bool has_more_patches_in)
    : target_buffer(std::move(target_buffer_in)),
      writer_id(std::move(writer_id_in)),
      chunk_id(std::move(chunk_id_in)),
      patches(std::move(patches_in)),
      has_more_patches(std::move(has_more_patches_in)) {}

ChunksToPatch::~ChunksToPatch() = default;

bool ChunksToPatch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CommitDataRequest::CommitDataRequest()
    : chunks_to_move(),
      chunks_to_patch() {}

CommitDataRequest::CommitDataRequest(
    std::vector<ChunksToMovePtr> chunks_to_move_in,
    std::vector<ChunksToPatchPtr> chunks_to_patch_in)
    : chunks_to_move(std::move(chunks_to_move_in)),
      chunks_to_patch(std::move(chunks_to_patch_in)) {}

CommitDataRequest::~CommitDataRequest() = default;

bool CommitDataRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataSourceConfig::DataSourceConfig()
    : name(),
      trace_config(),
      target_buffer() {}

DataSourceConfig::DataSourceConfig(
    const std::string& name_in,
    const std::string& trace_config_in,
    uint32_t target_buffer_in)
    : name(std::move(name_in)),
      trace_config(std::move(trace_config_in)),
      target_buffer(std::move(target_buffer_in)) {}

DataSourceConfig::~DataSourceConfig() = default;
size_t DataSourceConfig::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->trace_config);
  seed = mojo::internal::Hash(seed, this->target_buffer);
  return seed;
}

bool DataSourceConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProducerHost::Name_[] = "tracing.mojom.ProducerHost";

ProducerHostProxy::ProducerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProducerHostProxy::CommitData(
    CommitDataRequestPtr in_data_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "tracing::mojom::ProducerHost::CommitData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerHost_CommitData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerHost_CommitData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data_request)::BaseType::BufferWriter
      data_request_writer;
  mojo::internal::Serialize<::tracing::mojom::CommitDataRequestDataView>(
      in_data_request, buffer, &data_request_writer, &serialization_context);
  params->data_request.Set(
      data_request_writer.is_null() ? nullptr : data_request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_request in ProducerHost.CommitData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProducerHostStubDispatch::Accept(
    ProducerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProducerHost_CommitData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerHost::CommitData",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerHost_CommitData_Params_Data* params =
          reinterpret_cast<internal::ProducerHost_CommitData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CommitDataRequestPtr p_data_request{};
      ProducerHost_CommitData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDataRequest(&p_data_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProducerHost::CommitData deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CommitData(
std::move(p_data_request));
      return true;
    }
  }
  return false;
}

// static
bool ProducerHostStubDispatch::AcceptWithResponder(
    ProducerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProducerHost_CommitData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerHost::CommitData",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProducerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProducerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kProducerHost_CommitData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerHost_CommitData_Params_Data>(
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

void ProducerHostInterceptorForTesting::CommitData(CommitDataRequestPtr data_request) {
  GetForwardingInterface()->CommitData(std::move(data_request));
}
ProducerHostAsyncWaiter::ProducerHostAsyncWaiter(
    ProducerHost* proxy) : proxy_(proxy) {}

ProducerHostAsyncWaiter::~ProducerHostAsyncWaiter() = default;


const char ProducerClient::Name_[] = "tracing.mojom.ProducerClient";

ProducerClientProxy::ProducerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProducerClientProxy::OnTracingStart(
    mojo::ScopedSharedBufferHandle in_shared_memory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "tracing::mojom::ProducerClient::OnTracingStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_OnTracingStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_OnTracingStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_shared_memory, &params->shared_memory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->shared_memory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shared_memory in ProducerClient.OnTracingStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerClientProxy::CreateDataSourceInstance(
    uint64_t in_id, DataSourceConfigPtr in_data_source_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "tracing::mojom::ProducerClient::CreateDataSourceInstance");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_CreateDataSourceInstance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_CreateDataSourceInstance_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  typename decltype(params->data_source_config)::BaseType::BufferWriter
      data_source_config_writer;
  mojo::internal::Serialize<::tracing::mojom::DataSourceConfigDataView>(
      in_data_source_config, buffer, &data_source_config_writer, &serialization_context);
  params->data_source_config.Set(
      data_source_config_writer.is_null() ? nullptr : data_source_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_source_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_source_config in ProducerClient.CreateDataSourceInstance request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerClientProxy::TearDownDataSourceInstance(
    uint64_t in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "tracing::mojom::ProducerClient::TearDownDataSourceInstance");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_TearDownDataSourceInstance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_TearDownDataSourceInstance_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerClientProxy::Flush(
    uint64_t in_flush_request_id, const std::vector<uint64_t>& in_data_source_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "tracing::mojom::ProducerClient::Flush");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->flush_request_id = in_flush_request_id;
  typename decltype(params->data_source_ids)::BaseType::BufferWriter
      data_source_ids_writer;
  const mojo::internal::ContainerValidateParams data_source_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint64_t>>(
      in_data_source_ids, buffer, &data_source_ids_writer, &data_source_ids_validate_params,
      &serialization_context);
  params->data_source_ids.Set(
      data_source_ids_writer.is_null() ? nullptr : data_source_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_source_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_source_ids in ProducerClient.Flush request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProducerClientStubDispatch::Accept(
    ProducerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProducerClient_OnTracingStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::OnTracingStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerClient_OnTracingStart_Params_Data* params =
          reinterpret_cast<internal::ProducerClient_OnTracingStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedSharedBufferHandle p_shared_memory{};
      ProducerClient_OnTracingStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_shared_memory = input_data_view.TakeSharedMemory();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProducerClient::OnTracingStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTracingStart(
std::move(p_shared_memory));
      return true;
    }
    case internal::kProducerClient_CreateDataSourceInstance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::CreateDataSourceInstance",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerClient_CreateDataSourceInstance_Params_Data* params =
          reinterpret_cast<internal::ProducerClient_CreateDataSourceInstance_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_id{};
      DataSourceConfigPtr p_data_source_config{};
      ProducerClient_CreateDataSourceInstance_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadDataSourceConfig(&p_data_source_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProducerClient::CreateDataSourceInstance deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateDataSourceInstance(
std::move(p_id), 
std::move(p_data_source_config));
      return true;
    }
    case internal::kProducerClient_TearDownDataSourceInstance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::TearDownDataSourceInstance",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerClient_TearDownDataSourceInstance_Params_Data* params =
          reinterpret_cast<internal::ProducerClient_TearDownDataSourceInstance_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_id{};
      ProducerClient_TearDownDataSourceInstance_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProducerClient::TearDownDataSourceInstance deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TearDownDataSourceInstance(
std::move(p_id));
      return true;
    }
    case internal::kProducerClient_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::Flush",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerClient_Flush_Params_Data* params =
          reinterpret_cast<internal::ProducerClient_Flush_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_flush_request_id{};
      std::vector<uint64_t> p_data_source_ids{};
      ProducerClient_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      p_flush_request_id = input_data_view.flush_request_id();
      if (!input_data_view.ReadDataSourceIds(&p_data_source_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProducerClient::Flush deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Flush(
std::move(p_flush_request_id), 
std::move(p_data_source_ids));
      return true;
    }
  }
  return false;
}

// static
bool ProducerClientStubDispatch::AcceptWithResponder(
    ProducerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProducerClient_OnTracingStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::OnTracingStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProducerClient_CreateDataSourceInstance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::CreateDataSourceInstance",
               "message", message->name());
#endif
      break;
    }
    case internal::kProducerClient_TearDownDataSourceInstance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::TearDownDataSourceInstance",
               "message", message->name());
#endif
      break;
    }
    case internal::kProducerClient_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::ProducerClient::Flush",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProducerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProducerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProducerClient_OnTracingStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_OnTracingStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_CreateDataSourceInstance_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_CreateDataSourceInstance_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_TearDownDataSourceInstance_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_TearDownDataSourceInstance_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_Flush_Params_Data>(
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

void ProducerClientInterceptorForTesting::OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) {
  GetForwardingInterface()->OnTracingStart(std::move(shared_memory));
}
void ProducerClientInterceptorForTesting::CreateDataSourceInstance(uint64_t id, DataSourceConfigPtr data_source_config) {
  GetForwardingInterface()->CreateDataSourceInstance(std::move(id), std::move(data_source_config));
}
void ProducerClientInterceptorForTesting::TearDownDataSourceInstance(uint64_t id) {
  GetForwardingInterface()->TearDownDataSourceInstance(std::move(id));
}
void ProducerClientInterceptorForTesting::Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) {
  GetForwardingInterface()->Flush(std::move(flush_request_id), std::move(data_source_ids));
}
ProducerClientAsyncWaiter::ProducerClientAsyncWaiter(
    ProducerClient* proxy) : proxy_(proxy) {}

ProducerClientAsyncWaiter::~ProducerClientAsyncWaiter() = default;


const char PerfettoService::Name_[] = "tracing.mojom.PerfettoService";

PerfettoServiceProxy::PerfettoServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PerfettoServiceProxy::ConnectToProducerHost(
    ProducerClientPtr in_producer_client, ProducerHostRequest in_producer_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "tracing::mojom::PerfettoService::ConnectToProducerHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPerfettoService_ConnectToProducerHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::PerfettoService_ConnectToProducerHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::tracing::mojom::ProducerClientPtrDataView>(
      in_producer_client, &params->producer_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->producer_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid producer_client in PerfettoService.ConnectToProducerHost request");
  mojo::internal::Serialize<::tracing::mojom::ProducerHostRequestDataView>(
      in_producer_host, &params->producer_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->producer_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid producer_host in PerfettoService.ConnectToProducerHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PerfettoServiceStubDispatch::Accept(
    PerfettoService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPerfettoService_ConnectToProducerHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::PerfettoService::ConnectToProducerHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PerfettoService_ConnectToProducerHost_Params_Data* params =
          reinterpret_cast<internal::PerfettoService_ConnectToProducerHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProducerClientPtr p_producer_client{};
      ProducerHostRequest p_producer_host{};
      PerfettoService_ConnectToProducerHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_producer_client =
          input_data_view.TakeProducerClient<decltype(p_producer_client)>();
      p_producer_host =
          input_data_view.TakeProducerHost<decltype(p_producer_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PerfettoService::ConnectToProducerHost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConnectToProducerHost(
std::move(p_producer_client), 
std::move(p_producer_host));
      return true;
    }
  }
  return false;
}

// static
bool PerfettoServiceStubDispatch::AcceptWithResponder(
    PerfettoService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPerfettoService_ConnectToProducerHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)tracing::mojom::PerfettoService::ConnectToProducerHost",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PerfettoServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PerfettoService RequestValidator");

  switch (message->header()->name) {
    case internal::kPerfettoService_ConnectToProducerHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PerfettoService_ConnectToProducerHost_Params_Data>(
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

void PerfettoServiceInterceptorForTesting::ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) {
  GetForwardingInterface()->ConnectToProducerHost(std::move(producer_client), std::move(producer_host));
}
PerfettoServiceAsyncWaiter::PerfettoServiceAsyncWaiter(
    PerfettoService* proxy) : proxy_(proxy) {}

PerfettoServiceAsyncWaiter::~PerfettoServiceAsyncWaiter() = default;


}  // namespace mojom
}  // namespace tracing

namespace mojo {


// static
bool StructTraits<::tracing::mojom::ChunksToMove::DataView, ::tracing::mojom::ChunksToMovePtr>::Read(
    ::tracing::mojom::ChunksToMove::DataView input,
    ::tracing::mojom::ChunksToMovePtr* output) {
  bool success = true;
  ::tracing::mojom::ChunksToMovePtr result(::tracing::mojom::ChunksToMove::New());
  
      result->page = input.page();
      result->chunk = input.chunk();
      result->target_buffer = input.target_buffer();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::ChunkPatch::DataView, ::tracing::mojom::ChunkPatchPtr>::Read(
    ::tracing::mojom::ChunkPatch::DataView input,
    ::tracing::mojom::ChunkPatchPtr* output) {
  bool success = true;
  ::tracing::mojom::ChunkPatchPtr result(::tracing::mojom::ChunkPatch::New());
  
      result->offset = input.offset();
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::ChunksToPatch::DataView, ::tracing::mojom::ChunksToPatchPtr>::Read(
    ::tracing::mojom::ChunksToPatch::DataView input,
    ::tracing::mojom::ChunksToPatchPtr* output) {
  bool success = true;
  ::tracing::mojom::ChunksToPatchPtr result(::tracing::mojom::ChunksToPatch::New());
  
      result->target_buffer = input.target_buffer();
      result->writer_id = input.writer_id();
      result->chunk_id = input.chunk_id();
      if (!input.ReadPatches(&result->patches))
        success = false;
      result->has_more_patches = input.has_more_patches();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::CommitDataRequest::DataView, ::tracing::mojom::CommitDataRequestPtr>::Read(
    ::tracing::mojom::CommitDataRequest::DataView input,
    ::tracing::mojom::CommitDataRequestPtr* output) {
  bool success = true;
  ::tracing::mojom::CommitDataRequestPtr result(::tracing::mojom::CommitDataRequest::New());
  
      if (!input.ReadChunksToMove(&result->chunks_to_move))
        success = false;
      if (!input.ReadChunksToPatch(&result->chunks_to_patch))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::DataSourceConfig::DataView, ::tracing::mojom::DataSourceConfigPtr>::Read(
    ::tracing::mojom::DataSourceConfig::DataView input,
    ::tracing::mojom::DataSourceConfigPtr* output) {
  bool success = true;
  ::tracing::mojom::DataSourceConfigPtr result(::tracing::mojom::DataSourceConfig::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadTraceConfig(&result->trace_config))
        success = false;
      result->target_buffer = input.target_buffer();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif