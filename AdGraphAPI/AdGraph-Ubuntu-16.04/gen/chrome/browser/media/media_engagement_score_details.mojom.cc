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

#include "chrome/browser/media/media_engagement_score_details.mojom.h"

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

#include "chrome/browser/media/media_engagement_score_details.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace media {
namespace mojom {
MediaEngagementScoreDetails::MediaEngagementScoreDetails()
    : origin(),
      total_score(),
      visits(),
      media_playbacks(),
      last_media_playback_time(),
      is_high(),
      audible_playbacks(),
      significant_playbacks(),
      high_score_changes() {}

MediaEngagementScoreDetails::MediaEngagementScoreDetails(
    const GURL& origin_in,
    double total_score_in,
    int32_t visits_in,
    int32_t media_playbacks_in,
    double last_media_playback_time_in,
    bool is_high_in,
    int32_t audible_playbacks_in,
    int32_t significant_playbacks_in,
    int32_t high_score_changes_in)
    : origin(std::move(origin_in)),
      total_score(std::move(total_score_in)),
      visits(std::move(visits_in)),
      media_playbacks(std::move(media_playbacks_in)),
      last_media_playback_time(std::move(last_media_playback_time_in)),
      is_high(std::move(is_high_in)),
      audible_playbacks(std::move(audible_playbacks_in)),
      significant_playbacks(std::move(significant_playbacks_in)),
      high_score_changes(std::move(high_score_changes_in)) {}

MediaEngagementScoreDetails::~MediaEngagementScoreDetails() = default;

bool MediaEngagementScoreDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaEngagementConfig::MediaEngagementConfig()
    : score_min_visits(),
      high_score_lower_threshold(),
      high_score_upper_threshold(),
      feature_record_data(),
      feature_bypass_autoplay(),
      feature_preload_data(),
      autoplay_policy(),
      preload_version() {}

MediaEngagementConfig::MediaEngagementConfig(
    int32_t score_min_visits_in,
    double high_score_lower_threshold_in,
    double high_score_upper_threshold_in,
    bool feature_record_data_in,
    bool feature_bypass_autoplay_in,
    bool feature_preload_data_in,
    const std::string& autoplay_policy_in,
    const std::string& preload_version_in)
    : score_min_visits(std::move(score_min_visits_in)),
      high_score_lower_threshold(std::move(high_score_lower_threshold_in)),
      high_score_upper_threshold(std::move(high_score_upper_threshold_in)),
      feature_record_data(std::move(feature_record_data_in)),
      feature_bypass_autoplay(std::move(feature_bypass_autoplay_in)),
      feature_preload_data(std::move(feature_preload_data_in)),
      autoplay_policy(std::move(autoplay_policy_in)),
      preload_version(std::move(preload_version_in)) {}

MediaEngagementConfig::~MediaEngagementConfig() = default;
size_t MediaEngagementConfig::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->score_min_visits);
  seed = mojo::internal::Hash(seed, this->high_score_lower_threshold);
  seed = mojo::internal::Hash(seed, this->high_score_upper_threshold);
  seed = mojo::internal::Hash(seed, this->feature_record_data);
  seed = mojo::internal::Hash(seed, this->feature_bypass_autoplay);
  seed = mojo::internal::Hash(seed, this->feature_preload_data);
  seed = mojo::internal::Hash(seed, this->autoplay_policy);
  seed = mojo::internal::Hash(seed, this->preload_version);
  return seed;
}

bool MediaEngagementConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaEngagementScoreDetailsProvider::Name_[] = "media.mojom.MediaEngagementScoreDetailsProvider";

class MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ForwardToCallback(
      MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ForwardToCallback);
};

class MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ForwardToCallback(
      MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ForwardToCallback);
};

MediaEngagementScoreDetailsProviderProxy::MediaEngagementScoreDetailsProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaEngagementScoreDetailsProviderProxy::GetMediaEngagementScoreDetails(
    GetMediaEngagementScoreDetailsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetails");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaEngagementScoreDetailsProviderProxy::GetMediaEngagementConfig(
    GetMediaEngagementConfigCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementConfig");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder {
 public:
  static MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder> proxy(
        new MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder() {
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
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder(
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
        << "MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<MediaEngagementScoreDetailsPtr> in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder);
};

bool MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<MediaEngagementScoreDetailsPtr> p_info{};
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetails response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder::Run(
    std::vector<MediaEngagementScoreDetailsPtr> in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  const mojo::internal::ContainerValidateParams info_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::MediaEngagementScoreDetailsDataView>>(
      in_info, buffer, &info_writer, &info_validate_params,
      &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder {
 public:
  static MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder> proxy(
        new MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder() {
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
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder(
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
        << "MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MediaEngagementConfigPtr in_config);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder);
};

bool MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MediaEngagementConfigPtr p_config{};
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadConfig(&p_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaEngagementScoreDetailsProvider::GetMediaEngagementConfig response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_config));
  return true;
}

void MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder::Run(
    MediaEngagementConfigPtr in_config) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::MediaEngagementConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback",
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
bool MediaEngagementScoreDetailsProviderStubDispatch::Accept(
    MediaEngagementScoreDetailsProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetails",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementConfig",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaEngagementScoreDetailsProviderStubDispatch::AcceptWithResponder(
    MediaEngagementScoreDetailsProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetails",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data* params =
          reinterpret_cast<
              internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetails deserializer");
        return false;
      }
      MediaEngagementScoreDetailsProvider::GetMediaEngagementScoreDetailsCallback callback =
          MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetMediaEngagementScoreDetails(std::move(callback));
      return true;
    }
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaEngagementScoreDetailsProvider::GetMediaEngagementConfig",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data* params =
          reinterpret_cast<
              internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaEngagementScoreDetailsProvider::GetMediaEngagementConfig deserializer");
        return false;
      }
      MediaEngagementScoreDetailsProvider::GetMediaEngagementConfigCallback callback =
          MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetMediaEngagementConfig(std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaEngagementScoreDetailsProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaEngagementScoreDetailsProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data>(
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

bool MediaEngagementScoreDetailsProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaEngagementScoreDetailsProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data>(
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
void MediaEngagementScoreDetailsProviderInterceptorForTesting::GetMediaEngagementScoreDetails(GetMediaEngagementScoreDetailsCallback callback) {
  GetForwardingInterface()->GetMediaEngagementScoreDetails(std::move(callback));
}
void MediaEngagementScoreDetailsProviderInterceptorForTesting::GetMediaEngagementConfig(GetMediaEngagementConfigCallback callback) {
  GetForwardingInterface()->GetMediaEngagementConfig(std::move(callback));
}
MediaEngagementScoreDetailsProviderAsyncWaiter::MediaEngagementScoreDetailsProviderAsyncWaiter(
    MediaEngagementScoreDetailsProvider* proxy) : proxy_(proxy) {}

MediaEngagementScoreDetailsProviderAsyncWaiter::~MediaEngagementScoreDetailsProviderAsyncWaiter() = default;

void MediaEngagementScoreDetailsProviderAsyncWaiter::GetMediaEngagementScoreDetails(
    std::vector<MediaEngagementScoreDetailsPtr>* out_info) {
  base::RunLoop loop;
  proxy_->GetMediaEngagementScoreDetails(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<MediaEngagementScoreDetailsPtr>* out_info
,
             std::vector<MediaEngagementScoreDetailsPtr> info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void MediaEngagementScoreDetailsProviderAsyncWaiter::GetMediaEngagementConfig(
    MediaEngagementConfigPtr* out_config) {
  base::RunLoop loop;
  proxy_->GetMediaEngagementConfig(
      base::BindOnce(
          [](base::RunLoop* loop,
             MediaEngagementConfigPtr* out_config
,
             MediaEngagementConfigPtr config) {*out_config = std::move(config);
            loop->Quit();
          },
          &loop,
          out_config));
  loop.Run();
}

}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::MediaEngagementScoreDetails::DataView, ::media::mojom::MediaEngagementScoreDetailsPtr>::Read(
    ::media::mojom::MediaEngagementScoreDetails::DataView input,
    ::media::mojom::MediaEngagementScoreDetailsPtr* output) {
  bool success = true;
  ::media::mojom::MediaEngagementScoreDetailsPtr result(::media::mojom::MediaEngagementScoreDetails::New());
  
      if (!input.ReadOrigin(&result->origin))
        success = false;
      result->total_score = input.total_score();
      result->visits = input.visits();
      result->media_playbacks = input.media_playbacks();
      result->last_media_playback_time = input.last_media_playback_time();
      result->is_high = input.is_high();
      result->audible_playbacks = input.audible_playbacks();
      result->significant_playbacks = input.significant_playbacks();
      result->high_score_changes = input.high_score_changes();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::MediaEngagementConfig::DataView, ::media::mojom::MediaEngagementConfigPtr>::Read(
    ::media::mojom::MediaEngagementConfig::DataView input,
    ::media::mojom::MediaEngagementConfigPtr* output) {
  bool success = true;
  ::media::mojom::MediaEngagementConfigPtr result(::media::mojom::MediaEngagementConfig::New());
  
      result->score_min_visits = input.score_min_visits();
      result->high_score_lower_threshold = input.high_score_lower_threshold();
      result->high_score_upper_threshold = input.high_score_upper_threshold();
      result->feature_record_data = input.feature_record_data();
      result->feature_bypass_autoplay = input.feature_bypass_autoplay();
      result->feature_preload_data = input.feature_preload_data();
      if (!input.ReadAutoplayPolicy(&result->autoplay_policy))
        success = false;
      if (!input.ReadPreloadVersion(&result->preload_version))
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