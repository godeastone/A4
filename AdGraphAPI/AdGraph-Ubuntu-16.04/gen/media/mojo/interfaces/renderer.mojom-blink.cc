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

#include "media/mojo/interfaces/renderer.mojom-blink.h"

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

#include "media/mojo/interfaces/renderer.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
namespace blink {
const char Renderer::Name_[] = "media.mojom.Renderer";

class Renderer_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Renderer_Initialize_ForwardToCallback(
      Renderer::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Renderer::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Renderer_Initialize_ForwardToCallback);
};

class Renderer_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Renderer_Flush_ForwardToCallback(
      Renderer::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Renderer::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Renderer_Flush_ForwardToCallback);
};

class Renderer_SetCdm_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Renderer_SetCdm_ForwardToCallback(
      Renderer::SetCdmCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Renderer::SetCdmCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Renderer_SetCdm_ForwardToCallback);
};

class Renderer_InitiateScopedSurfaceRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Renderer_InitiateScopedSurfaceRequest_ForwardToCallback(
      Renderer::InitiateScopedSurfaceRequestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Renderer::InitiateScopedSurfaceRequestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Renderer_InitiateScopedSurfaceRequest_ForwardToCallback);
};

RendererProxy::RendererProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererProxy::Initialize(
    RendererClientAssociatedPtrInfo in_client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> in_streams, const base::Optional<::blink::KURL>& in_media_url, const base::Optional<::blink::KURL>& in_first_party_for_cookies, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RendererClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in Renderer.Initialize request");
  typename decltype(params->streams)::BaseType::BufferWriter
      streams_writer;
  const mojo::internal::ContainerValidateParams streams_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::DemuxerStreamPtrDataView>>(
      in_streams, buffer, &streams_writer, &streams_validate_params,
      &serialization_context);
  params->streams.Set(
      streams_writer.is_null() ? nullptr : streams_writer.data());
  typename decltype(params->media_url)::BaseType::BufferWriter
      media_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_media_url, buffer, &media_url_writer, &serialization_context);
  params->media_url.Set(
      media_url_writer.is_null() ? nullptr : media_url_writer.data());
  typename decltype(params->first_party_for_cookies)::BaseType::BufferWriter
      first_party_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_first_party_for_cookies, buffer, &first_party_for_cookies_writer, &serialization_context);
  params->first_party_for_cookies.Set(
      first_party_for_cookies_writer.is_null() ? nullptr : first_party_for_cookies_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Renderer_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RendererProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Renderer_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RendererProxy::StartPlayingFrom(
    WTF::TimeDelta in_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::StartPlayingFrom");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_StartPlayingFrom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_StartPlayingFrom_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in Renderer.StartPlayingFrom request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetPlaybackRate(
    double in_playback_rate) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::SetPlaybackRate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetPlaybackRate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_SetPlaybackRate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->playback_rate = in_playback_rate;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetVolume(
    float in_volume) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::SetVolume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetVolume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_SetVolume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->volume = in_volume;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetCdm(
    int32_t in_cdm_id, SetCdmCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::SetCdm");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetCdm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_SetCdm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->cdm_id = in_cdm_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Renderer_SetCdm_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RendererProxy::InitiateScopedSurfaceRequest(
    InitiateScopedSurfaceRequestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::Renderer::InitiateScopedSurfaceRequest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_InitiateScopedSurfaceRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_InitiateScopedSurfaceRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Renderer_InitiateScopedSurfaceRequest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Renderer_Initialize_ProxyToResponder {
 public:
  static Renderer::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Renderer_Initialize_ProxyToResponder> proxy(
        new Renderer_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Renderer_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Renderer_Initialize_ProxyToResponder() {
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
  Renderer_Initialize_ProxyToResponder(
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
        << "Renderer::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Renderer_Initialize_ProxyToResponder);
};

bool Renderer_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::Renderer::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Renderer_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Renderer_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Renderer_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Renderer::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Renderer_Initialize_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Renderer_Flush_ProxyToResponder {
 public:
  static Renderer::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Renderer_Flush_ProxyToResponder> proxy(
        new Renderer_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Renderer_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Renderer_Flush_ProxyToResponder() {
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
  Renderer_Flush_ProxyToResponder(
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
        << "Renderer::FlushCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Renderer_Flush_ProxyToResponder);
};

bool Renderer_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::Renderer::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Renderer_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Renderer_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  Renderer_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Renderer::Flush response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void Renderer_Flush_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::FlushCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Renderer_SetCdm_ProxyToResponder {
 public:
  static Renderer::SetCdmCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Renderer_SetCdm_ProxyToResponder> proxy(
        new Renderer_SetCdm_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Renderer_SetCdm_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Renderer_SetCdm_ProxyToResponder() {
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
  Renderer_SetCdm_ProxyToResponder(
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
        << "Renderer::SetCdmCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Renderer_SetCdm_ProxyToResponder);
};

bool Renderer_SetCdm_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::Renderer::SetCdmCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Renderer_SetCdm_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Renderer_SetCdm_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Renderer_SetCdm_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Renderer::SetCdm response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Renderer_SetCdm_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetCdm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_SetCdm_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetCdmCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Renderer_InitiateScopedSurfaceRequest_ProxyToResponder {
 public:
  static Renderer::InitiateScopedSurfaceRequestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Renderer_InitiateScopedSurfaceRequest_ProxyToResponder> proxy(
        new Renderer_InitiateScopedSurfaceRequest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Renderer_InitiateScopedSurfaceRequest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Renderer_InitiateScopedSurfaceRequest_ProxyToResponder() {
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
  Renderer_InitiateScopedSurfaceRequest_ProxyToResponder(
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
        << "Renderer::InitiateScopedSurfaceRequestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::mojo_base::mojom::blink::UnguessableTokenPtr in_request_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Renderer_InitiateScopedSurfaceRequest_ProxyToResponder);
};

bool Renderer_InitiateScopedSurfaceRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::Renderer::InitiateScopedSurfaceRequestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::mojo_base::mojom::blink::UnguessableTokenPtr p_request_token{};
  Renderer_InitiateScopedSurfaceRequest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRequestToken(&p_request_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Renderer::InitiateScopedSurfaceRequest response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_request_token));
  return true;
}

void Renderer_InitiateScopedSurfaceRequest_ProxyToResponder::Run(
    ::mojo_base::mojom::blink::UnguessableTokenPtr in_request_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_InitiateScopedSurfaceRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_token)::BaseType::BufferWriter
      request_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_token, buffer, &request_token_writer, &serialization_context);
  params->request_token.Set(
      request_token_writer.is_null() ? nullptr : request_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::InitiateScopedSurfaceRequestCallback",
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
bool RendererStubDispatch::Accept(
    Renderer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderer_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::Flush",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_StartPlayingFrom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::StartPlayingFrom",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_StartPlayingFrom_Params_Data* params =
          reinterpret_cast<internal::Renderer_StartPlayingFrom_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_time{};
      Renderer_StartPlayingFrom_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTime(&p_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::StartPlayingFrom deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartPlayingFrom(
std::move(p_time));
      return true;
    }
    case internal::kRenderer_SetPlaybackRate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetPlaybackRate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetPlaybackRate_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetPlaybackRate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_playback_rate{};
      Renderer_SetPlaybackRate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_playback_rate = input_data_view.playback_rate();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetPlaybackRate deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPlaybackRate(
std::move(p_playback_rate));
      return true;
    }
    case internal::kRenderer_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetVolume",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetVolume_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetVolume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      float p_volume{};
      Renderer_SetVolume_ParamsDataView input_data_view(params, &serialization_context);
      
      p_volume = input_data_view.volume();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetVolume deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVolume(
std::move(p_volume));
      return true;
    }
    case internal::kRenderer_SetCdm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetCdm",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_InitiateScopedSurfaceRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::InitiateScopedSurfaceRequest",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool RendererStubDispatch::AcceptWithResponder(
    Renderer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderer_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Renderer_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::Renderer_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RendererClientAssociatedPtrInfo p_client{};
      base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> p_streams{};
      base::Optional<::blink::KURL> p_media_url{};
      base::Optional<::blink::KURL> p_first_party_for_cookies{};
      Renderer_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadStreams(&p_streams))
        success = false;
      if (!input_data_view.ReadMediaUrl(&p_media_url))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::Initialize deserializer");
        return false;
      }
      Renderer::InitializeCallback callback =
          Renderer_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_client), 
std::move(p_streams), 
std::move(p_media_url), 
std::move(p_first_party_for_cookies), std::move(callback));
      return true;
    }
    case internal::kRenderer_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::Flush",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Renderer_Flush_Params_Data* params =
          reinterpret_cast<
              internal::Renderer_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Renderer_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::Flush deserializer");
        return false;
      }
      Renderer::FlushCallback callback =
          Renderer_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Flush(std::move(callback));
      return true;
    }
    case internal::kRenderer_StartPlayingFrom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::StartPlayingFrom",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetPlaybackRate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetPlaybackRate",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetVolume",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetCdm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::SetCdm",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Renderer_SetCdm_Params_Data* params =
          reinterpret_cast<
              internal::Renderer_SetCdm_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_cdm_id{};
      Renderer_SetCdm_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cdm_id = input_data_view.cdm_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetCdm deserializer");
        return false;
      }
      Renderer::SetCdmCallback callback =
          Renderer_SetCdm_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCdm(
std::move(p_cdm_id), std::move(callback));
      return true;
    }
    case internal::kRenderer_InitiateScopedSurfaceRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::Renderer::InitiateScopedSurfaceRequest",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Renderer_InitiateScopedSurfaceRequest_Params_Data* params =
          reinterpret_cast<
              internal::Renderer_InitiateScopedSurfaceRequest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Renderer_InitiateScopedSurfaceRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::InitiateScopedSurfaceRequest deserializer");
        return false;
      }
      Renderer::InitiateScopedSurfaceRequestCallback callback =
          Renderer_InitiateScopedSurfaceRequest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InitiateScopedSurfaceRequest(std::move(callback));
      return true;
    }
  }
  return false;
}

bool RendererRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Renderer RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderer_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_Flush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_StartPlayingFrom_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_StartPlayingFrom_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetPlaybackRate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetPlaybackRate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetVolume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetVolume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetCdm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetCdm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_InitiateScopedSurfaceRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_InitiateScopedSurfaceRequest_Params_Data>(
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

bool RendererResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Renderer ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRenderer_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_Flush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetCdm_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetCdm_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_InitiateScopedSurfaceRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_InitiateScopedSurfaceRequest_ResponseParams_Data>(
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
void RendererInterceptorForTesting::Initialize(RendererClientAssociatedPtrInfo client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> streams, const base::Optional<::blink::KURL>& media_url, const base::Optional<::blink::KURL>& first_party_for_cookies, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(client), std::move(streams), std::move(media_url), std::move(first_party_for_cookies), std::move(callback));
}
void RendererInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
void RendererInterceptorForTesting::StartPlayingFrom(WTF::TimeDelta time) {
  GetForwardingInterface()->StartPlayingFrom(std::move(time));
}
void RendererInterceptorForTesting::SetPlaybackRate(double playback_rate) {
  GetForwardingInterface()->SetPlaybackRate(std::move(playback_rate));
}
void RendererInterceptorForTesting::SetVolume(float volume) {
  GetForwardingInterface()->SetVolume(std::move(volume));
}
void RendererInterceptorForTesting::SetCdm(int32_t cdm_id, SetCdmCallback callback) {
  GetForwardingInterface()->SetCdm(std::move(cdm_id), std::move(callback));
}
void RendererInterceptorForTesting::InitiateScopedSurfaceRequest(InitiateScopedSurfaceRequestCallback callback) {
  GetForwardingInterface()->InitiateScopedSurfaceRequest(std::move(callback));
}
RendererAsyncWaiter::RendererAsyncWaiter(
    Renderer* proxy) : proxy_(proxy) {}

RendererAsyncWaiter::~RendererAsyncWaiter() = default;

void RendererAsyncWaiter::Initialize(
    RendererClientAssociatedPtrInfo client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> streams, const base::Optional<::blink::KURL>& media_url, const base::Optional<::blink::KURL>& first_party_for_cookies, bool* out_success) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(client),std::move(streams),std::move(media_url),std::move(first_party_for_cookies),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void RendererAsyncWaiter::Flush(
    ) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void RendererAsyncWaiter::SetCdm(
    int32_t cdm_id, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetCdm(std::move(cdm_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void RendererAsyncWaiter::InitiateScopedSurfaceRequest(
    ::mojo_base::mojom::blink::UnguessableTokenPtr* out_request_token) {
  base::RunLoop loop;
  proxy_->InitiateScopedSurfaceRequest(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::mojo_base::mojom::blink::UnguessableTokenPtr* out_request_token
,
             ::mojo_base::mojom::blink::UnguessableTokenPtr request_token) {*out_request_token = std::move(request_token);
            loop->Quit();
          },
          &loop,
          out_request_token));
  loop.Run();
}

const char RendererClient::Name_[] = "media.mojom.RendererClient";

RendererClientProxy::RendererClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererClientProxy::OnTimeUpdate(
    WTF::TimeDelta in_time, WTF::TimeDelta in_max_time, ::mojo_base::mojom::blink::TimeTicksPtr in_capture_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnTimeUpdate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnTimeUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnTimeUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in RendererClient.OnTimeUpdate request");
  typename decltype(params->max_time)::BaseType::BufferWriter
      max_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_max_time, buffer, &max_time_writer, &serialization_context);
  params->max_time.Set(
      max_time_writer.is_null() ? nullptr : max_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->max_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null max_time in RendererClient.OnTimeUpdate request");
  typename decltype(params->capture_time)::BaseType::BufferWriter
      capture_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_capture_time, buffer, &capture_time_writer, &serialization_context);
  params->capture_time.Set(
      capture_time_writer.is_null() ? nullptr : capture_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->capture_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null capture_time in RendererClient.OnTimeUpdate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnBufferingStateChange(
    ::media::mojom::blink::BufferingState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnBufferingStateChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnBufferingStateChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnBufferingStateChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::BufferingState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnEnded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnEnded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnEnded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnEnded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnError(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnAudioConfigChange(
    ::media::mojom::blink::AudioDecoderConfigPtr in_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnAudioConfigChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnAudioConfigChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnAudioConfigChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in RendererClient.OnAudioConfigChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnVideoConfigChange(
    ::media::mojom::blink::VideoDecoderConfigPtr in_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnVideoConfigChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnVideoConfigChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnVideoConfigChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in RendererClient.OnVideoConfigChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnVideoNaturalSizeChange(
    const ::blink::WebSize& in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnVideoNaturalSizeChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnVideoNaturalSizeChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnVideoNaturalSizeChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in RendererClient.OnVideoNaturalSizeChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnVideoOpacityChange(
    bool in_opaque) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnVideoOpacityChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnVideoOpacityChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnVideoOpacityChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->opaque = in_opaque;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnStatisticsUpdate(
    ::media::mojom::blink::PipelineStatisticsPtr in_stats) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnStatisticsUpdate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnStatisticsUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnStatisticsUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->stats)::BaseType::BufferWriter
      stats_writer;
  mojo::internal::Serialize<::media::mojom::PipelineStatisticsDataView>(
      in_stats, buffer, &stats_writer, &serialization_context);
  params->stats.Set(
      stats_writer.is_null() ? nullptr : stats_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->stats.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null stats in RendererClient.OnStatisticsUpdate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnWaitingForDecryptionKey(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnWaitingForDecryptionKey");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnWaitingForDecryptionKey_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnWaitingForDecryptionKey_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererClientProxy::OnDurationChange(
    WTF::TimeDelta in_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::RendererClient::OnDurationChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererClient_OnDurationChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::RendererClient_OnDurationChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->duration)::BaseType::BufferWriter
      duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_duration, buffer, &duration_writer, &serialization_context);
  params->duration.Set(
      duration_writer.is_null() ? nullptr : duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null duration in RendererClient.OnDurationChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RendererClientStubDispatch::Accept(
    RendererClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRendererClient_OnTimeUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnTimeUpdate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnTimeUpdate_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnTimeUpdate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_time{};
      WTF::TimeDelta p_max_time{};
      ::mojo_base::mojom::blink::TimeTicksPtr p_capture_time{};
      RendererClient_OnTimeUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTime(&p_time))
        success = false;
      if (!input_data_view.ReadMaxTime(&p_max_time))
        success = false;
      if (!input_data_view.ReadCaptureTime(&p_capture_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnTimeUpdate deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTimeUpdate(
std::move(p_time), 
std::move(p_max_time), 
std::move(p_capture_time));
      return true;
    }
    case internal::kRendererClient_OnBufferingStateChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnBufferingStateChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnBufferingStateChange_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnBufferingStateChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::BufferingState p_state{};
      RendererClient_OnBufferingStateChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnBufferingStateChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBufferingStateChange(
std::move(p_state));
      return true;
    }
    case internal::kRendererClient_OnEnded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnEnded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnEnded_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnEnded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RendererClient_OnEnded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnEnded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnEnded();
      return true;
    }
    case internal::kRendererClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnError_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RendererClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError();
      return true;
    }
    case internal::kRendererClient_OnAudioConfigChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnAudioConfigChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnAudioConfigChange_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnAudioConfigChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::AudioDecoderConfigPtr p_config{};
      RendererClient_OnAudioConfigChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnAudioConfigChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAudioConfigChange(
std::move(p_config));
      return true;
    }
    case internal::kRendererClient_OnVideoConfigChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnVideoConfigChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnVideoConfigChange_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnVideoConfigChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::VideoDecoderConfigPtr p_config{};
      RendererClient_OnVideoConfigChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnVideoConfigChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnVideoConfigChange(
std::move(p_config));
      return true;
    }
    case internal::kRendererClient_OnVideoNaturalSizeChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnVideoNaturalSizeChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnVideoNaturalSizeChange_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnVideoNaturalSizeChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebSize p_size{};
      RendererClient_OnVideoNaturalSizeChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnVideoNaturalSizeChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnVideoNaturalSizeChange(
std::move(p_size));
      return true;
    }
    case internal::kRendererClient_OnVideoOpacityChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnVideoOpacityChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnVideoOpacityChange_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnVideoOpacityChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_opaque{};
      RendererClient_OnVideoOpacityChange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_opaque = input_data_view.opaque();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnVideoOpacityChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnVideoOpacityChange(
std::move(p_opaque));
      return true;
    }
    case internal::kRendererClient_OnStatisticsUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnStatisticsUpdate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnStatisticsUpdate_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnStatisticsUpdate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::PipelineStatisticsPtr p_stats{};
      RendererClient_OnStatisticsUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStats(&p_stats))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnStatisticsUpdate deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStatisticsUpdate(
std::move(p_stats));
      return true;
    }
    case internal::kRendererClient_OnWaitingForDecryptionKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnWaitingForDecryptionKey",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnWaitingForDecryptionKey_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnWaitingForDecryptionKey_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RendererClient_OnWaitingForDecryptionKey_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnWaitingForDecryptionKey deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWaitingForDecryptionKey();
      return true;
    }
    case internal::kRendererClient_OnDurationChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnDurationChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererClient_OnDurationChange_Params_Data* params =
          reinterpret_cast<internal::RendererClient_OnDurationChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_duration{};
      RendererClient_OnDurationChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDuration(&p_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererClient::OnDurationChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDurationChange(
std::move(p_duration));
      return true;
    }
  }
  return false;
}

// static
bool RendererClientStubDispatch::AcceptWithResponder(
    RendererClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRendererClient_OnTimeUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnTimeUpdate",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnBufferingStateChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnBufferingStateChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnEnded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnEnded",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnAudioConfigChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnAudioConfigChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnVideoConfigChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnVideoConfigChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnVideoNaturalSizeChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnVideoNaturalSizeChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnVideoOpacityChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnVideoOpacityChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnStatisticsUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnStatisticsUpdate",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnWaitingForDecryptionKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnWaitingForDecryptionKey",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererClient_OnDurationChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::RendererClient::OnDurationChange",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RendererClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererClient RequestValidator");

  switch (message->header()->name) {
    case internal::kRendererClient_OnTimeUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnTimeUpdate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnBufferingStateChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnBufferingStateChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnEnded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnEnded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnAudioConfigChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnAudioConfigChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnVideoConfigChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnVideoConfigChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnVideoNaturalSizeChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnVideoNaturalSizeChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnVideoOpacityChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnVideoOpacityChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnStatisticsUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnStatisticsUpdate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnWaitingForDecryptionKey_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnWaitingForDecryptionKey_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererClient_OnDurationChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererClient_OnDurationChange_Params_Data>(
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

void RendererClientInterceptorForTesting::OnTimeUpdate(WTF::TimeDelta time, WTF::TimeDelta max_time, ::mojo_base::mojom::blink::TimeTicksPtr capture_time) {
  GetForwardingInterface()->OnTimeUpdate(std::move(time), std::move(max_time), std::move(capture_time));
}
void RendererClientInterceptorForTesting::OnBufferingStateChange(::media::mojom::blink::BufferingState state) {
  GetForwardingInterface()->OnBufferingStateChange(std::move(state));
}
void RendererClientInterceptorForTesting::OnEnded() {
  GetForwardingInterface()->OnEnded();
}
void RendererClientInterceptorForTesting::OnError() {
  GetForwardingInterface()->OnError();
}
void RendererClientInterceptorForTesting::OnAudioConfigChange(::media::mojom::blink::AudioDecoderConfigPtr config) {
  GetForwardingInterface()->OnAudioConfigChange(std::move(config));
}
void RendererClientInterceptorForTesting::OnVideoConfigChange(::media::mojom::blink::VideoDecoderConfigPtr config) {
  GetForwardingInterface()->OnVideoConfigChange(std::move(config));
}
void RendererClientInterceptorForTesting::OnVideoNaturalSizeChange(const ::blink::WebSize& size) {
  GetForwardingInterface()->OnVideoNaturalSizeChange(std::move(size));
}
void RendererClientInterceptorForTesting::OnVideoOpacityChange(bool opaque) {
  GetForwardingInterface()->OnVideoOpacityChange(std::move(opaque));
}
void RendererClientInterceptorForTesting::OnStatisticsUpdate(::media::mojom::blink::PipelineStatisticsPtr stats) {
  GetForwardingInterface()->OnStatisticsUpdate(std::move(stats));
}
void RendererClientInterceptorForTesting::OnWaitingForDecryptionKey() {
  GetForwardingInterface()->OnWaitingForDecryptionKey();
}
void RendererClientInterceptorForTesting::OnDurationChange(WTF::TimeDelta duration) {
  GetForwardingInterface()->OnDurationChange(std::move(duration));
}
RendererClientAsyncWaiter::RendererClientAsyncWaiter(
    RendererClient* proxy) : proxy_(proxy) {}

RendererClientAsyncWaiter::~RendererClientAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif