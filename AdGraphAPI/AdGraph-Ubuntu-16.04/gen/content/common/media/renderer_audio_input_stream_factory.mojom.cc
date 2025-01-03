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

#include "content/common/media/renderer_audio_input_stream_factory.mojom.h"

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

#include "content/common/media/renderer_audio_input_stream_factory.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
namespace content {
namespace mojom {
const char RendererAudioInputStreamFactory::Name_[] = "content.mojom.RendererAudioInputStreamFactory";

RendererAudioInputStreamFactoryProxy::RendererAudioInputStreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererAudioInputStreamFactoryProxy::CreateStream(
    RendererAudioInputStreamFactoryClientPtr in_client, int32_t in_session_id, const media::AudioParameters& in_params, bool in_automatic_gain_control, uint32_t in_shared_memory_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererAudioInputStreamFactory::CreateStream");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererAudioInputStreamFactory_CreateStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererAudioInputStreamFactory_CreateStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::RendererAudioInputStreamFactoryClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in RendererAudioInputStreamFactory.CreateStream request");
  params->session_id = in_session_id;
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in RendererAudioInputStreamFactory.CreateStream request");
  params->automatic_gain_control = in_automatic_gain_control;
  params->shared_memory_count = in_shared_memory_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererAudioInputStreamFactoryProxy::AssociateInputAndOutputForAec(
    const base::UnguessableToken& in_input_stream_id, const std::string& in_output_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererAudioInputStreamFactory::AssociateInputAndOutputForAec");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_stream_id)::BaseType::BufferWriter
      input_stream_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_input_stream_id, buffer, &input_stream_id_writer, &serialization_context);
  params->input_stream_id.Set(
      input_stream_id_writer.is_null() ? nullptr : input_stream_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_stream_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_stream_id in RendererAudioInputStreamFactory.AssociateInputAndOutputForAec request");
  typename decltype(params->output_device_id)::BaseType::BufferWriter
      output_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_output_device_id, buffer, &output_device_id_writer, &serialization_context);
  params->output_device_id.Set(
      output_device_id_writer.is_null() ? nullptr : output_device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output_device_id in RendererAudioInputStreamFactory.AssociateInputAndOutputForAec request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RendererAudioInputStreamFactoryStubDispatch::Accept(
    RendererAudioInputStreamFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRendererAudioInputStreamFactory_CreateStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioInputStreamFactory::CreateStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererAudioInputStreamFactory_CreateStream_Params_Data* params =
          reinterpret_cast<internal::RendererAudioInputStreamFactory_CreateStream_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RendererAudioInputStreamFactoryClientPtr p_client{};
      int32_t p_session_id{};
      media::AudioParameters p_params{};
      bool p_automatic_gain_control{};
      uint32_t p_shared_memory_count{};
      RendererAudioInputStreamFactory_CreateStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_session_id = input_data_view.session_id();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_automatic_gain_control = input_data_view.automatic_gain_control();
      p_shared_memory_count = input_data_view.shared_memory_count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererAudioInputStreamFactory::CreateStream deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateStream(
std::move(p_client), 
std::move(p_session_id), 
std::move(p_params), 
std::move(p_automatic_gain_control), 
std::move(p_shared_memory_count));
      return true;
    }
    case internal::kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioInputStreamFactory::AssociateInputAndOutputForAec",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data* params =
          reinterpret_cast<internal::RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_input_stream_id{};
      std::string p_output_device_id{};
      RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputStreamId(&p_input_stream_id))
        success = false;
      if (!input_data_view.ReadOutputDeviceId(&p_output_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererAudioInputStreamFactory::AssociateInputAndOutputForAec deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AssociateInputAndOutputForAec(
std::move(p_input_stream_id), 
std::move(p_output_device_id));
      return true;
    }
  }
  return false;
}

// static
bool RendererAudioInputStreamFactoryStubDispatch::AcceptWithResponder(
    RendererAudioInputStreamFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRendererAudioInputStreamFactory_CreateStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioInputStreamFactory::CreateStream",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioInputStreamFactory::AssociateInputAndOutputForAec",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RendererAudioInputStreamFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererAudioInputStreamFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kRendererAudioInputStreamFactory_CreateStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererAudioInputStreamFactory_CreateStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data>(
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

void RendererAudioInputStreamFactoryInterceptorForTesting::CreateStream(RendererAudioInputStreamFactoryClientPtr client, int32_t session_id, const media::AudioParameters& params, bool automatic_gain_control, uint32_t shared_memory_count) {
  GetForwardingInterface()->CreateStream(std::move(client), std::move(session_id), std::move(params), std::move(automatic_gain_control), std::move(shared_memory_count));
}
void RendererAudioInputStreamFactoryInterceptorForTesting::AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) {
  GetForwardingInterface()->AssociateInputAndOutputForAec(std::move(input_stream_id), std::move(output_device_id));
}
RendererAudioInputStreamFactoryAsyncWaiter::RendererAudioInputStreamFactoryAsyncWaiter(
    RendererAudioInputStreamFactory* proxy) : proxy_(proxy) {}

RendererAudioInputStreamFactoryAsyncWaiter::~RendererAudioInputStreamFactoryAsyncWaiter() = default;


const char RendererAudioInputStreamFactoryClient::Name_[] = "content.mojom.RendererAudioInputStreamFactoryClient";

RendererAudioInputStreamFactoryClientProxy::RendererAudioInputStreamFactoryClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererAudioInputStreamFactoryClientProxy::StreamCreated(
    ::media::mojom::AudioInputStreamPtr in_stream, ::media::mojom::AudioInputStreamClientRequest in_client_request, ::media::mojom::AudioDataPipePtr in_data_pipe, bool in_initially_muted, const base::Optional<base::UnguessableToken>& in_stream_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RendererAudioInputStreamFactoryClient::StreamCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererAudioInputStreamFactoryClient_StreamCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioInputStreamPtrDataView>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in RendererAudioInputStreamFactoryClient.StreamCreated request");
  mojo::internal::Serialize<::media::mojom::AudioInputStreamClientRequestDataView>(
      in_client_request, &params->client_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_request in RendererAudioInputStreamFactoryClient.StreamCreated request");
  typename decltype(params->data_pipe)::BaseType::BufferWriter
      data_pipe_writer;
  mojo::internal::Serialize<::media::mojom::AudioDataPipeDataView>(
      in_data_pipe, buffer, &data_pipe_writer, &serialization_context);
  params->data_pipe.Set(
      data_pipe_writer.is_null() ? nullptr : data_pipe_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_pipe.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_pipe in RendererAudioInputStreamFactoryClient.StreamCreated request");
  params->initially_muted = in_initially_muted;
  typename decltype(params->stream_id)::BaseType::BufferWriter
      stream_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_stream_id, buffer, &stream_id_writer, &serialization_context);
  params->stream_id.Set(
      stream_id_writer.is_null() ? nullptr : stream_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RendererAudioInputStreamFactoryClientStubDispatch::Accept(
    RendererAudioInputStreamFactoryClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRendererAudioInputStreamFactoryClient_StreamCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioInputStreamFactoryClient::StreamCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data* params =
          reinterpret_cast<internal::RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::AudioInputStreamPtr p_stream{};
      ::media::mojom::AudioInputStreamClientRequest p_client_request{};
      ::media::mojom::AudioDataPipePtr p_data_pipe{};
      bool p_initially_muted{};
      base::Optional<base::UnguessableToken> p_stream_id{};
      RendererAudioInputStreamFactoryClient_StreamCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream =
          input_data_view.TakeStream<decltype(p_stream)>();
      p_client_request =
          input_data_view.TakeClientRequest<decltype(p_client_request)>();
      if (!input_data_view.ReadDataPipe(&p_data_pipe))
        success = false;
      p_initially_muted = input_data_view.initially_muted();
      if (!input_data_view.ReadStreamId(&p_stream_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererAudioInputStreamFactoryClient::StreamCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StreamCreated(
std::move(p_stream), 
std::move(p_client_request), 
std::move(p_data_pipe), 
std::move(p_initially_muted), 
std::move(p_stream_id));
      return true;
    }
  }
  return false;
}

// static
bool RendererAudioInputStreamFactoryClientStubDispatch::AcceptWithResponder(
    RendererAudioInputStreamFactoryClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRendererAudioInputStreamFactoryClient_StreamCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RendererAudioInputStreamFactoryClient::StreamCreated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RendererAudioInputStreamFactoryClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererAudioInputStreamFactoryClient RequestValidator");

  switch (message->header()->name) {
    case internal::kRendererAudioInputStreamFactoryClient_StreamCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data>(
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

void RendererAudioInputStreamFactoryClientInterceptorForTesting::StreamCreated(::media::mojom::AudioInputStreamPtr stream, ::media::mojom::AudioInputStreamClientRequest client_request, ::media::mojom::AudioDataPipePtr data_pipe, bool initially_muted, const base::Optional<base::UnguessableToken>& stream_id) {
  GetForwardingInterface()->StreamCreated(std::move(stream), std::move(client_request), std::move(data_pipe), std::move(initially_muted), std::move(stream_id));
}
RendererAudioInputStreamFactoryClientAsyncWaiter::RendererAudioInputStreamFactoryClientAsyncWaiter(
    RendererAudioInputStreamFactoryClient* proxy) : proxy_(proxy) {}

RendererAudioInputStreamFactoryClientAsyncWaiter::~RendererAudioInputStreamFactoryClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif