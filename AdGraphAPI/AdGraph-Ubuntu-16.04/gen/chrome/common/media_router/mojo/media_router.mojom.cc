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

#include "chrome/common/media_router/mojo/media_router.mojom.h"

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

#include "chrome/common/media_router/mojo/media_router.mojom-shared-message-ids.h"
#include "chrome/common/media_router/mojo/media_router_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "net/interfaces/ip_address_struct_traits.h"
#include "net/interfaces/ip_endpoint_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace media_router {
namespace mojom {
MediaSink::MediaSink()
    : sink_id(),
      name(),
      description(),
      domain(),
      icon_type(),
      provider_id(),
      extra_data() {}

MediaSink::MediaSink(
    const std::string& sink_id_in,
    const std::string& name_in,
    const base::Optional<std::string>& description_in,
    const base::Optional<std::string>& domain_in,
    SinkIconType icon_type_in,
    media_router::MediaRouteProviderId provider_id_in,
    MediaSinkExtraDataPtr extra_data_in)
    : sink_id(std::move(sink_id_in)),
      name(std::move(name_in)),
      description(std::move(description_in)),
      domain(std::move(domain_in)),
      icon_type(std::move(icon_type_in)),
      provider_id(std::move(provider_id_in)),
      extra_data(std::move(extra_data_in)) {}

MediaSink::~MediaSink() = default;

bool MediaSink::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DialMediaSink::DialMediaSink()
    : ip_address(),
      model_name(),
      app_url() {}

DialMediaSink::DialMediaSink(
    const net::IPAddress& ip_address_in,
    const std::string& model_name_in,
    const GURL& app_url_in)
    : ip_address(std::move(ip_address_in)),
      model_name(std::move(model_name_in)),
      app_url(std::move(app_url_in)) {}

DialMediaSink::~DialMediaSink() = default;

bool DialMediaSink::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CastMediaSink::CastMediaSink()
    : ip_endpoint(),
      model_name(),
      capabilities(),
      cast_channel_id() {}

CastMediaSink::CastMediaSink(
    const net::IPEndPoint& ip_endpoint_in,
    const std::string& model_name_in,
    uint8_t capabilities_in,
    int32_t cast_channel_id_in)
    : ip_endpoint(std::move(ip_endpoint_in)),
      model_name(std::move(model_name_in)),
      capabilities(std::move(capabilities_in)),
      cast_channel_id(std::move(cast_channel_id_in)) {}

CastMediaSink::~CastMediaSink() = default;

bool CastMediaSink::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaRoute::MediaRoute()
    : media_route_id(),
      presentation_id(),
      media_source(),
      media_sink_id(),
      description(),
      is_local(),
      controller_type(),
      for_display(),
      is_incognito(),
      is_local_presentation() {}

MediaRoute::MediaRoute(
    const std::string& media_route_id_in,
    const std::string& presentation_id_in,
    const base::Optional<std::string>& media_source_in,
    const std::string& media_sink_id_in,
    const std::string& description_in,
    bool is_local_in,
    RouteControllerType controller_type_in,
    bool for_display_in,
    bool is_incognito_in,
    bool is_local_presentation_in)
    : media_route_id(std::move(media_route_id_in)),
      presentation_id(std::move(presentation_id_in)),
      media_source(std::move(media_source_in)),
      media_sink_id(std::move(media_sink_id_in)),
      description(std::move(description_in)),
      is_local(std::move(is_local_in)),
      controller_type(std::move(controller_type_in)),
      for_display(std::move(for_display_in)),
      is_incognito(std::move(is_incognito_in)),
      is_local_presentation(std::move(is_local_presentation_in)) {}

MediaRoute::~MediaRoute() = default;

bool MediaRoute::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Issue::Issue()
    : route_id(),
      severity(),
      is_blocking(),
      title(),
      message(),
      default_action(),
      secondary_actions(),
      help_page_id() {}

Issue::Issue(
    const base::Optional<std::string>& route_id_in,
    media_router::IssueInfo::Severity severity_in,
    bool is_blocking_in,
    const std::string& title_in,
    const base::Optional<std::string>& message_in,
    media_router::IssueInfo::Action default_action_in,
    const std::vector<media_router::IssueInfo::Action>& secondary_actions_in,
    int32_t help_page_id_in)
    : route_id(std::move(route_id_in)),
      severity(std::move(severity_in)),
      is_blocking(std::move(is_blocking_in)),
      title(std::move(title_in)),
      message(std::move(message_in)),
      default_action(std::move(default_action_in)),
      secondary_actions(std::move(secondary_actions_in)),
      help_page_id(std::move(help_page_id_in)) {}

Issue::~Issue() = default;

bool Issue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RouteMessage::RouteMessage()
    : type(),
      message(),
      data() {}

RouteMessage::RouteMessage(
    RouteMessage::Type type_in,
    const base::Optional<std::string>& message_in,
    const base::Optional<std::vector<uint8_t>>& data_in)
    : type(std::move(type_in)),
      message(std::move(message_in)),
      data(std::move(data_in)) {}

RouteMessage::~RouteMessage() = default;

bool RouteMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SinkSearchCriteria::SinkSearchCriteria()
    : input(),
      domain() {}

SinkSearchCriteria::SinkSearchCriteria(
    const std::string& input_in,
    const std::string& domain_in)
    : input(std::move(input_in)),
      domain(std::move(domain_in)) {}

SinkSearchCriteria::~SinkSearchCriteria() = default;
size_t SinkSearchCriteria::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->input);
  seed = mojo::internal::Hash(seed, this->domain);
  return seed;
}

bool SinkSearchCriteria::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaRouteProviderConfig::MediaRouteProviderConfig()
    : enable_dial_discovery(),
      enable_cast_discovery(),
      enable_dial_sink_query(),
      enable_cast_sink_query() {}

MediaRouteProviderConfig::MediaRouteProviderConfig(
    bool enable_dial_discovery_in,
    bool enable_cast_discovery_in,
    bool enable_dial_sink_query_in,
    bool enable_cast_sink_query_in)
    : enable_dial_discovery(std::move(enable_dial_discovery_in)),
      enable_cast_discovery(std::move(enable_cast_discovery_in)),
      enable_dial_sink_query(std::move(enable_dial_sink_query_in)),
      enable_cast_sink_query(std::move(enable_cast_sink_query_in)) {}

MediaRouteProviderConfig::~MediaRouteProviderConfig() = default;
size_t MediaRouteProviderConfig::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->enable_dial_discovery);
  seed = mojo::internal::Hash(seed, this->enable_cast_discovery);
  seed = mojo::internal::Hash(seed, this->enable_dial_sink_query);
  seed = mojo::internal::Hash(seed, this->enable_cast_sink_query);
  return seed;
}

bool MediaRouteProviderConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaSinkExtraData::MediaSinkExtraData() : tag_(Tag::DIAL_MEDIA_SINK) {
  data_.dial_media_sink = new DialMediaSinkPtr;
}

MediaSinkExtraData::~MediaSinkExtraData() {
  DestroyActive();
}


void MediaSinkExtraData::set_dial_media_sink(
    DialMediaSinkPtr dial_media_sink) {
  if (tag_ == Tag::DIAL_MEDIA_SINK) {
    *(data_.dial_media_sink) = std::move(dial_media_sink);
  } else {
    DestroyActive();
    tag_ = Tag::DIAL_MEDIA_SINK;
    data_.dial_media_sink = new DialMediaSinkPtr(
        std::move(dial_media_sink));
  }
}
void MediaSinkExtraData::set_cast_media_sink(
    CastMediaSinkPtr cast_media_sink) {
  if (tag_ == Tag::CAST_MEDIA_SINK) {
    *(data_.cast_media_sink) = std::move(cast_media_sink);
  } else {
    DestroyActive();
    tag_ = Tag::CAST_MEDIA_SINK;
    data_.cast_media_sink = new CastMediaSinkPtr(
        std::move(cast_media_sink));
  }
}

void MediaSinkExtraData::DestroyActive() {
  switch (tag_) {

    case Tag::DIAL_MEDIA_SINK:

      delete data_.dial_media_sink;
      break;
    case Tag::CAST_MEDIA_SINK:

      delete data_.cast_media_sink;
      break;
  }
}

bool MediaSinkExtraData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char MediaRouteProvider::Name_[] = "media_router.mojom.MediaRouteProvider";

class MediaRouteProvider_CreateRoute_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_CreateRoute_ForwardToCallback(
      MediaRouteProvider::CreateRouteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::CreateRouteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_CreateRoute_ForwardToCallback);
};

class MediaRouteProvider_JoinRoute_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_JoinRoute_ForwardToCallback(
      MediaRouteProvider::JoinRouteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::JoinRouteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_JoinRoute_ForwardToCallback);
};

class MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback(
      MediaRouteProvider::ConnectRouteByRouteIdCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::ConnectRouteByRouteIdCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback);
};

class MediaRouteProvider_TerminateRoute_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_TerminateRoute_ForwardToCallback(
      MediaRouteProvider::TerminateRouteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::TerminateRouteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_TerminateRoute_ForwardToCallback);
};

class MediaRouteProvider_SendRouteMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_SendRouteMessage_ForwardToCallback(
      MediaRouteProvider::SendRouteMessageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::SendRouteMessageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteMessage_ForwardToCallback);
};

class MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback(
      MediaRouteProvider::SendRouteBinaryMessageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::SendRouteBinaryMessageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback);
};

class MediaRouteProvider_SearchSinks_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_SearchSinks_ForwardToCallback(
      MediaRouteProvider::SearchSinksCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::SearchSinksCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SearchSinks_ForwardToCallback);
};

class MediaRouteProvider_CreateMediaRouteController_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_CreateMediaRouteController_ForwardToCallback(
      MediaRouteProvider::CreateMediaRouteControllerCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::CreateMediaRouteControllerCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_CreateMediaRouteController_ForwardToCallback);
};

MediaRouteProviderProxy::MediaRouteProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaRouteProviderProxy::CreateRoute(
    const std::string& in_media_source, const std::string& in_sink_id, const std::string& in_original_presentation_id, const url::Origin& in_origin, int32_t in_tab_id, base::TimeDelta in_timeout, bool in_incognito, CreateRouteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::CreateRoute");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_CreateRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_CreateRoute_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.CreateRoute request");
  typename decltype(params->sink_id)::BaseType::BufferWriter
      sink_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_sink_id, buffer, &sink_id_writer, &serialization_context);
  params->sink_id.Set(
      sink_id_writer.is_null() ? nullptr : sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sink_id in MediaRouteProvider.CreateRoute request");
  typename decltype(params->original_presentation_id)::BaseType::BufferWriter
      original_presentation_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_original_presentation_id, buffer, &original_presentation_id_writer, &serialization_context);
  params->original_presentation_id.Set(
      original_presentation_id_writer.is_null() ? nullptr : original_presentation_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_presentation_id in MediaRouteProvider.CreateRoute request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in MediaRouteProvider.CreateRoute request");
  params->tab_id = in_tab_id;
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in MediaRouteProvider.CreateRoute request");
  params->incognito = in_incognito;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_CreateRoute_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::JoinRoute(
    const std::string& in_media_source, const std::string& in_presentation_id, const url::Origin& in_origin, int32_t in_tab_id, base::TimeDelta in_timeout, bool in_incognito, JoinRouteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::JoinRoute");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_JoinRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_JoinRoute_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.JoinRoute request");
  typename decltype(params->presentation_id)::BaseType::BufferWriter
      presentation_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_presentation_id, buffer, &presentation_id_writer, &serialization_context);
  params->presentation_id.Set(
      presentation_id_writer.is_null() ? nullptr : presentation_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in MediaRouteProvider.JoinRoute request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in MediaRouteProvider.JoinRoute request");
  params->tab_id = in_tab_id;
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in MediaRouteProvider.JoinRoute request");
  params->incognito = in_incognito;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_JoinRoute_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::ConnectRouteByRouteId(
    const std::string& in_media_source, const std::string& in_route_id, const std::string& in_presentation_id, const url::Origin& in_origin, int32_t in_tab_id, base::TimeDelta in_timeout, bool in_incognito, ConnectRouteByRouteIdCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::ConnectRouteByRouteId");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_ConnectRouteByRouteId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.ConnectRouteByRouteId request");
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.ConnectRouteByRouteId request");
  typename decltype(params->presentation_id)::BaseType::BufferWriter
      presentation_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_presentation_id, buffer, &presentation_id_writer, &serialization_context);
  params->presentation_id.Set(
      presentation_id_writer.is_null() ? nullptr : presentation_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in MediaRouteProvider.ConnectRouteByRouteId request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in MediaRouteProvider.ConnectRouteByRouteId request");
  params->tab_id = in_tab_id;
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in MediaRouteProvider.ConnectRouteByRouteId request");
  params->incognito = in_incognito;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::TerminateRoute(
    const std::string& in_route_id, TerminateRouteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::TerminateRoute");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_TerminateRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_TerminateRoute_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.TerminateRoute request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_TerminateRoute_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::SendRouteMessage(
    const std::string& in_media_route_id, const std::string& in_message, SendRouteMessageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::SendRouteMessage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_SendRouteMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_SendRouteMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_route_id)::BaseType::BufferWriter
      media_route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_route_id, buffer, &media_route_id_writer, &serialization_context);
  params->media_route_id.Set(
      media_route_id_writer.is_null() ? nullptr : media_route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_route_id in MediaRouteProvider.SendRouteMessage request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in MediaRouteProvider.SendRouteMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_SendRouteMessage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::SendRouteBinaryMessage(
    const std::string& in_media_route_id, const std::vector<uint8_t>& in_data, SendRouteBinaryMessageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::SendRouteBinaryMessage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_SendRouteBinaryMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_route_id)::BaseType::BufferWriter
      media_route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_route_id, buffer, &media_route_id_writer, &serialization_context);
  params->media_route_id.Set(
      media_route_id_writer.is_null() ? nullptr : media_route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_route_id in MediaRouteProvider.SendRouteBinaryMessage request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in MediaRouteProvider.SendRouteBinaryMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::StartObservingMediaSinks(
    const std::string& in_media_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::StartObservingMediaSinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_StartObservingMediaSinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StartObservingMediaSinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::StopObservingMediaSinks(
    const std::string& in_media_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::StopObservingMediaSinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_StopObservingMediaSinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StopObservingMediaSinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::StartObservingMediaRoutes(
    const std::string& in_media_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::StartObservingMediaRoutes");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_StartObservingMediaRoutes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StartObservingMediaRoutes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::StopObservingMediaRoutes(
    const std::string& in_media_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::StopObservingMediaRoutes");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_StopObservingMediaRoutes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StopObservingMediaRoutes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::StartListeningForRouteMessages(
    const std::string& in_route_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::StartListeningForRouteMessages");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_StartListeningForRouteMessages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_StartListeningForRouteMessages_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.StartListeningForRouteMessages request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::StopListeningForRouteMessages(
    const std::string& in_route_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::StopListeningForRouteMessages");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_StopListeningForRouteMessages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.StopListeningForRouteMessages request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::DetachRoute(
    const std::string& in_route_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::DetachRoute");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_DetachRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_DetachRoute_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.DetachRoute request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::EnableMdnsDiscovery(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::EnableMdnsDiscovery");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_EnableMdnsDiscovery_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_EnableMdnsDiscovery_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::UpdateMediaSinks(
    const std::string& in_media_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::UpdateMediaSinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_UpdateMediaSinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_UpdateMediaSinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.UpdateMediaSinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::SearchSinks(
    const std::string& in_sink_id, const std::string& in_media_source, SinkSearchCriteriaPtr in_search_criteria, SearchSinksCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::SearchSinks");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_SearchSinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_SearchSinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->sink_id)::BaseType::BufferWriter
      sink_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_sink_id, buffer, &sink_id_writer, &serialization_context);
  params->sink_id.Set(
      sink_id_writer.is_null() ? nullptr : sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sink_id in MediaRouteProvider.SearchSinks request");
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.SearchSinks request");
  typename decltype(params->search_criteria)::BaseType::BufferWriter
      search_criteria_writer;
  mojo::internal::Serialize<::media_router::mojom::SinkSearchCriteriaDataView>(
      in_search_criteria, buffer, &search_criteria_writer, &serialization_context);
  params->search_criteria.Set(
      search_criteria_writer.is_null() ? nullptr : search_criteria_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->search_criteria.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null search_criteria in MediaRouteProvider.SearchSinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_SearchSinks_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouteProviderProxy::ProvideSinks(
    const std::string& in_provider_name, const std::vector<media_router::MediaSinkInternal>& in_sinks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::ProvideSinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_ProvideSinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_ProvideSinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->provider_name)::BaseType::BufferWriter
      provider_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_provider_name, buffer, &provider_name_writer, &serialization_context);
  params->provider_name.Set(
      provider_name_writer.is_null() ? nullptr : provider_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->provider_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null provider_name in MediaRouteProvider.ProvideSinks request");
  typename decltype(params->sinks)::BaseType::BufferWriter
      sinks_writer;
  const mojo::internal::ContainerValidateParams sinks_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_router::mojom::MediaSinkDataView>>(
      in_sinks, buffer, &sinks_writer, &sinks_validate_params,
      &serialization_context);
  params->sinks.Set(
      sinks_writer.is_null() ? nullptr : sinks_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sinks.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sinks in MediaRouteProvider.ProvideSinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouteProviderProxy::CreateMediaRouteController(
    const std::string& in_route_id, ::media_router::mojom::MediaControllerRequest in_media_controller, ::media_router::mojom::MediaStatusObserverPtr in_observer, CreateMediaRouteControllerCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouteProvider::CreateMediaRouteController");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_CreateMediaRouteController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_CreateMediaRouteController_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.CreateMediaRouteController request");
  mojo::internal::Serialize<::media_router::mojom::MediaControllerRequestDataView>(
      in_media_controller, &params->media_controller, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_controller),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_controller in MediaRouteProvider.CreateMediaRouteController request");
  mojo::internal::Serialize<::media_router::mojom::MediaStatusObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in MediaRouteProvider.CreateMediaRouteController request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouteProvider_CreateMediaRouteController_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaRouteProvider_CreateRoute_ProxyToResponder {
 public:
  static MediaRouteProvider::CreateRouteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_CreateRoute_ProxyToResponder> proxy(
        new MediaRouteProvider_CreateRoute_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_CreateRoute_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_CreateRoute_ProxyToResponder() {
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
  MediaRouteProvider_CreateRoute_ProxyToResponder(
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
        << "MediaRouteProvider::CreateRouteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<media_router::MediaRoute>& in_route, const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_CreateRoute_ProxyToResponder);
};

bool MediaRouteProvider_CreateRoute_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::CreateRouteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_CreateRoute_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_CreateRoute_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<media_router::MediaRoute> p_route{};
  base::Optional<std::string> p_error_text{};
  media_router::RouteRequestResult::ResultCode p_result_code{};
  MediaRouteProvider_CreateRoute_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRoute(&p_route))
    success = false;
  if (!input_data_view.ReadErrorText(&p_error_text))
    success = false;
  if (!input_data_view.ReadResultCode(&p_result_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::CreateRoute response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_route), 
std::move(p_error_text), 
std::move(p_result_code));
  return true;
}

void MediaRouteProvider_CreateRoute_ProxyToResponder::Run(
    const base::Optional<media_router::MediaRoute>& in_route, const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_CreateRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_CreateRoute_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route)::BaseType::BufferWriter
      route_writer;
  mojo::internal::Serialize<::media_router::mojom::MediaRouteDataView>(
      in_route, buffer, &route_writer, &serialization_context);
  params->route.Set(
      route_writer.is_null() ? nullptr : route_writer.data());
  typename decltype(params->error_text)::BaseType::BufferWriter
      error_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_text, buffer, &error_text_writer, &serialization_context);
  params->error_text.Set(
      error_text_writer.is_null() ? nullptr : error_text_writer.data());
  mojo::internal::Serialize<::media_router::mojom::RouteRequestResultCode>(
      in_result_code, &params->result_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::CreateRouteCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_JoinRoute_ProxyToResponder {
 public:
  static MediaRouteProvider::JoinRouteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_JoinRoute_ProxyToResponder> proxy(
        new MediaRouteProvider_JoinRoute_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_JoinRoute_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_JoinRoute_ProxyToResponder() {
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
  MediaRouteProvider_JoinRoute_ProxyToResponder(
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
        << "MediaRouteProvider::JoinRouteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<media_router::MediaRoute>& in_route, const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_JoinRoute_ProxyToResponder);
};

bool MediaRouteProvider_JoinRoute_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::JoinRouteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_JoinRoute_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_JoinRoute_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<media_router::MediaRoute> p_route{};
  base::Optional<std::string> p_error_text{};
  media_router::RouteRequestResult::ResultCode p_result_code{};
  MediaRouteProvider_JoinRoute_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRoute(&p_route))
    success = false;
  if (!input_data_view.ReadErrorText(&p_error_text))
    success = false;
  if (!input_data_view.ReadResultCode(&p_result_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::JoinRoute response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_route), 
std::move(p_error_text), 
std::move(p_result_code));
  return true;
}

void MediaRouteProvider_JoinRoute_ProxyToResponder::Run(
    const base::Optional<media_router::MediaRoute>& in_route, const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_JoinRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_JoinRoute_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route)::BaseType::BufferWriter
      route_writer;
  mojo::internal::Serialize<::media_router::mojom::MediaRouteDataView>(
      in_route, buffer, &route_writer, &serialization_context);
  params->route.Set(
      route_writer.is_null() ? nullptr : route_writer.data());
  typename decltype(params->error_text)::BaseType::BufferWriter
      error_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_text, buffer, &error_text_writer, &serialization_context);
  params->error_text.Set(
      error_text_writer.is_null() ? nullptr : error_text_writer.data());
  mojo::internal::Serialize<::media_router::mojom::RouteRequestResultCode>(
      in_result_code, &params->result_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::JoinRouteCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder {
 public:
  static MediaRouteProvider::ConnectRouteByRouteIdCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder> proxy(
        new MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder() {
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
  MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder(
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
        << "MediaRouteProvider::ConnectRouteByRouteIdCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<media_router::MediaRoute>& in_route, const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder);
};

bool MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::ConnectRouteByRouteIdCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<media_router::MediaRoute> p_route{};
  base::Optional<std::string> p_error_text{};
  media_router::RouteRequestResult::ResultCode p_result_code{};
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRoute(&p_route))
    success = false;
  if (!input_data_view.ReadErrorText(&p_error_text))
    success = false;
  if (!input_data_view.ReadResultCode(&p_result_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::ConnectRouteByRouteId response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_route), 
std::move(p_error_text), 
std::move(p_result_code));
  return true;
}

void MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder::Run(
    const base::Optional<media_router::MediaRoute>& in_route, const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_ConnectRouteByRouteId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route)::BaseType::BufferWriter
      route_writer;
  mojo::internal::Serialize<::media_router::mojom::MediaRouteDataView>(
      in_route, buffer, &route_writer, &serialization_context);
  params->route.Set(
      route_writer.is_null() ? nullptr : route_writer.data());
  typename decltype(params->error_text)::BaseType::BufferWriter
      error_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_text, buffer, &error_text_writer, &serialization_context);
  params->error_text.Set(
      error_text_writer.is_null() ? nullptr : error_text_writer.data());
  mojo::internal::Serialize<::media_router::mojom::RouteRequestResultCode>(
      in_result_code, &params->result_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::ConnectRouteByRouteIdCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_TerminateRoute_ProxyToResponder {
 public:
  static MediaRouteProvider::TerminateRouteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_TerminateRoute_ProxyToResponder> proxy(
        new MediaRouteProvider_TerminateRoute_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_TerminateRoute_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_TerminateRoute_ProxyToResponder() {
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
  MediaRouteProvider_TerminateRoute_ProxyToResponder(
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
        << "MediaRouteProvider::TerminateRouteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_TerminateRoute_ProxyToResponder);
};

bool MediaRouteProvider_TerminateRoute_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::TerminateRouteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_TerminateRoute_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_TerminateRoute_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::string> p_error_text{};
  media_router::RouteRequestResult::ResultCode p_result_code{};
  MediaRouteProvider_TerminateRoute_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorText(&p_error_text))
    success = false;
  if (!input_data_view.ReadResultCode(&p_result_code))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::TerminateRoute response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_text), 
std::move(p_result_code));
  return true;
}

void MediaRouteProvider_TerminateRoute_ProxyToResponder::Run(
    const base::Optional<std::string>& in_error_text, media_router::RouteRequestResult::ResultCode in_result_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_TerminateRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_TerminateRoute_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error_text)::BaseType::BufferWriter
      error_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_text, buffer, &error_text_writer, &serialization_context);
  params->error_text.Set(
      error_text_writer.is_null() ? nullptr : error_text_writer.data());
  mojo::internal::Serialize<::media_router::mojom::RouteRequestResultCode>(
      in_result_code, &params->result_code);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::TerminateRouteCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_SendRouteMessage_ProxyToResponder {
 public:
  static MediaRouteProvider::SendRouteMessageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_SendRouteMessage_ProxyToResponder> proxy(
        new MediaRouteProvider_SendRouteMessage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_SendRouteMessage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_SendRouteMessage_ProxyToResponder() {
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
  MediaRouteProvider_SendRouteMessage_ProxyToResponder(
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
        << "MediaRouteProvider::SendRouteMessageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_sent);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteMessage_ProxyToResponder);
};

bool MediaRouteProvider_SendRouteMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::SendRouteMessageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_sent{};
  MediaRouteProvider_SendRouteMessage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sent = input_data_view.sent();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::SendRouteMessage response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sent));
  return true;
}

void MediaRouteProvider_SendRouteMessage_ProxyToResponder::Run(
    bool in_sent) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_SendRouteMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sent = in_sent;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SendRouteMessageCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder {
 public:
  static MediaRouteProvider::SendRouteBinaryMessageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder> proxy(
        new MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder() {
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
  MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder(
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
        << "MediaRouteProvider::SendRouteBinaryMessageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_sent);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder);
};

bool MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::SendRouteBinaryMessageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_sent{};
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sent = input_data_view.sent();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::SendRouteBinaryMessage response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sent));
  return true;
}

void MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder::Run(
    bool in_sent) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_SendRouteBinaryMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sent = in_sent;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SendRouteBinaryMessageCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_SearchSinks_ProxyToResponder {
 public:
  static MediaRouteProvider::SearchSinksCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_SearchSinks_ProxyToResponder> proxy(
        new MediaRouteProvider_SearchSinks_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_SearchSinks_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_SearchSinks_ProxyToResponder() {
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
  MediaRouteProvider_SearchSinks_ProxyToResponder(
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
        << "MediaRouteProvider::SearchSinksCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_sink_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SearchSinks_ProxyToResponder);
};

bool MediaRouteProvider_SearchSinks_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::SearchSinksCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_SearchSinks_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_SearchSinks_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_sink_id{};
  MediaRouteProvider_SearchSinks_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSinkId(&p_sink_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::SearchSinks response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sink_id));
  return true;
}

void MediaRouteProvider_SearchSinks_ProxyToResponder::Run(
    const std::string& in_sink_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_SearchSinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_SearchSinks_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->sink_id)::BaseType::BufferWriter
      sink_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_sink_id, buffer, &sink_id_writer, &serialization_context);
  params->sink_id.Set(
      sink_id_writer.is_null() ? nullptr : sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sink_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SearchSinksCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouteProvider_CreateMediaRouteController_ProxyToResponder {
 public:
  static MediaRouteProvider::CreateMediaRouteControllerCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouteProvider_CreateMediaRouteController_ProxyToResponder> proxy(
        new MediaRouteProvider_CreateMediaRouteController_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouteProvider_CreateMediaRouteController_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouteProvider_CreateMediaRouteController_ProxyToResponder() {
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
  MediaRouteProvider_CreateMediaRouteController_ProxyToResponder(
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
        << "MediaRouteProvider::CreateMediaRouteControllerCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_CreateMediaRouteController_ProxyToResponder);
};

bool MediaRouteProvider_CreateMediaRouteController_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouteProvider::CreateMediaRouteControllerCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  MediaRouteProvider_CreateMediaRouteController_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouteProvider::CreateMediaRouteController response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void MediaRouteProvider_CreateMediaRouteController_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouteProvider_CreateMediaRouteController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::CreateMediaRouteControllerCallback",
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
bool MediaRouteProviderStubDispatch::Accept(
    MediaRouteProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::CreateRoute",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::JoinRoute",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::ConnectRouteByRouteId",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::TerminateRoute",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SendRouteMessage",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SendRouteBinaryMessage",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_StartObservingMediaSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StartObservingMediaSinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      MediaRouteProvider_StartObservingMediaSinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::StartObservingMediaSinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartObservingMediaSinks(
std::move(p_media_source));
      return true;
    }
    case internal::kMediaRouteProvider_StopObservingMediaSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StopObservingMediaSinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      MediaRouteProvider_StopObservingMediaSinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::StopObservingMediaSinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StopObservingMediaSinks(
std::move(p_media_source));
      return true;
    }
    case internal::kMediaRouteProvider_StartObservingMediaRoutes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StartObservingMediaRoutes",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      MediaRouteProvider_StartObservingMediaRoutes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::StartObservingMediaRoutes deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartObservingMediaRoutes(
std::move(p_media_source));
      return true;
    }
    case internal::kMediaRouteProvider_StopObservingMediaRoutes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StopObservingMediaRoutes",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      MediaRouteProvider_StopObservingMediaRoutes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::StopObservingMediaRoutes deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StopObservingMediaRoutes(
std::move(p_media_source));
      return true;
    }
    case internal::kMediaRouteProvider_StartListeningForRouteMessages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StartListeningForRouteMessages",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_StartListeningForRouteMessages_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StartListeningForRouteMessages_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      MediaRouteProvider_StartListeningForRouteMessages_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::StartListeningForRouteMessages deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartListeningForRouteMessages(
std::move(p_route_id));
      return true;
    }
    case internal::kMediaRouteProvider_StopListeningForRouteMessages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StopListeningForRouteMessages",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      MediaRouteProvider_StopListeningForRouteMessages_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::StopListeningForRouteMessages deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StopListeningForRouteMessages(
std::move(p_route_id));
      return true;
    }
    case internal::kMediaRouteProvider_DetachRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::DetachRoute",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_DetachRoute_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_DetachRoute_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      MediaRouteProvider_DetachRoute_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::DetachRoute deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DetachRoute(
std::move(p_route_id));
      return true;
    }
    case internal::kMediaRouteProvider_EnableMdnsDiscovery_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::EnableMdnsDiscovery",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_EnableMdnsDiscovery_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_EnableMdnsDiscovery_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaRouteProvider_EnableMdnsDiscovery_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::EnableMdnsDiscovery deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EnableMdnsDiscovery();
      return true;
    }
    case internal::kMediaRouteProvider_UpdateMediaSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::UpdateMediaSinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_UpdateMediaSinks_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_UpdateMediaSinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      MediaRouteProvider_UpdateMediaSinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::UpdateMediaSinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateMediaSinks(
std::move(p_media_source));
      return true;
    }
    case internal::kMediaRouteProvider_SearchSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SearchSinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_ProvideSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::ProvideSinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouteProvider_ProvideSinks_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_ProvideSinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_provider_name{};
      std::vector<media_router::MediaSinkInternal> p_sinks{};
      MediaRouteProvider_ProvideSinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProviderName(&p_provider_name))
        success = false;
      if (!input_data_view.ReadSinks(&p_sinks))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::ProvideSinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProvideSinks(
std::move(p_provider_name), 
std::move(p_sinks));
      return true;
    }
    case internal::kMediaRouteProvider_CreateMediaRouteController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::CreateMediaRouteController",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaRouteProviderStubDispatch::AcceptWithResponder(
    MediaRouteProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::CreateRoute",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_CreateRoute_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_CreateRoute_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      std::string p_sink_id{};
      std::string p_original_presentation_id{};
      url::Origin p_origin{};
      int32_t p_tab_id{};
      base::TimeDelta p_timeout{};
      bool p_incognito{};
      MediaRouteProvider_CreateRoute_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!input_data_view.ReadSinkId(&p_sink_id))
        success = false;
      if (!input_data_view.ReadOriginalPresentationId(&p_original_presentation_id))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_tab_id = input_data_view.tab_id();
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      p_incognito = input_data_view.incognito();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::CreateRoute deserializer");
        return false;
      }
      MediaRouteProvider::CreateRouteCallback callback =
          MediaRouteProvider_CreateRoute_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateRoute(
std::move(p_media_source), 
std::move(p_sink_id), 
std::move(p_original_presentation_id), 
std::move(p_origin), 
std::move(p_tab_id), 
std::move(p_timeout), 
std::move(p_incognito), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::JoinRoute",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_JoinRoute_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_JoinRoute_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      std::string p_presentation_id{};
      url::Origin p_origin{};
      int32_t p_tab_id{};
      base::TimeDelta p_timeout{};
      bool p_incognito{};
      MediaRouteProvider_JoinRoute_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_tab_id = input_data_view.tab_id();
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      p_incognito = input_data_view.incognito();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::JoinRoute deserializer");
        return false;
      }
      MediaRouteProvider::JoinRouteCallback callback =
          MediaRouteProvider_JoinRoute_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->JoinRoute(
std::move(p_media_source), 
std::move(p_presentation_id), 
std::move(p_origin), 
std::move(p_tab_id), 
std::move(p_timeout), 
std::move(p_incognito), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::ConnectRouteByRouteId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_source{};
      std::string p_route_id{};
      std::string p_presentation_id{};
      url::Origin p_origin{};
      int32_t p_tab_id{};
      base::TimeDelta p_timeout{};
      bool p_incognito{};
      MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_tab_id = input_data_view.tab_id();
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      p_incognito = input_data_view.incognito();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::ConnectRouteByRouteId deserializer");
        return false;
      }
      MediaRouteProvider::ConnectRouteByRouteIdCallback callback =
          MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConnectRouteByRouteId(
std::move(p_media_source), 
std::move(p_route_id), 
std::move(p_presentation_id), 
std::move(p_origin), 
std::move(p_tab_id), 
std::move(p_timeout), 
std::move(p_incognito), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::TerminateRoute",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_TerminateRoute_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_TerminateRoute_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      MediaRouteProvider_TerminateRoute_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::TerminateRoute deserializer");
        return false;
      }
      MediaRouteProvider::TerminateRouteCallback callback =
          MediaRouteProvider_TerminateRoute_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->TerminateRoute(
std::move(p_route_id), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SendRouteMessage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_SendRouteMessage_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_SendRouteMessage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_route_id{};
      std::string p_message{};
      MediaRouteProvider_SendRouteMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaRouteId(&p_media_route_id))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::SendRouteMessage deserializer");
        return false;
      }
      MediaRouteProvider::SendRouteMessageCallback callback =
          MediaRouteProvider_SendRouteMessage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SendRouteMessage(
std::move(p_media_route_id), 
std::move(p_message), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SendRouteBinaryMessage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_media_route_id{};
      std::vector<uint8_t> p_data{};
      MediaRouteProvider_SendRouteBinaryMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMediaRouteId(&p_media_route_id))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::SendRouteBinaryMessage deserializer");
        return false;
      }
      MediaRouteProvider::SendRouteBinaryMessageCallback callback =
          MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SendRouteBinaryMessage(
std::move(p_media_route_id), 
std::move(p_data), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_StartObservingMediaSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StartObservingMediaSinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_StopObservingMediaSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StopObservingMediaSinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_StartObservingMediaRoutes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StartObservingMediaRoutes",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_StopObservingMediaRoutes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StopObservingMediaRoutes",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_StartListeningForRouteMessages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StartListeningForRouteMessages",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_StopListeningForRouteMessages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::StopListeningForRouteMessages",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_DetachRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::DetachRoute",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_EnableMdnsDiscovery_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::EnableMdnsDiscovery",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_UpdateMediaSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::UpdateMediaSinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_SearchSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::SearchSinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_SearchSinks_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_SearchSinks_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_sink_id{};
      std::string p_media_source{};
      SinkSearchCriteriaPtr p_search_criteria{};
      MediaRouteProvider_SearchSinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSinkId(&p_sink_id))
        success = false;
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!input_data_view.ReadSearchCriteria(&p_search_criteria))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::SearchSinks deserializer");
        return false;
      }
      MediaRouteProvider::SearchSinksCallback callback =
          MediaRouteProvider_SearchSinks_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SearchSinks(
std::move(p_sink_id), 
std::move(p_media_source), 
std::move(p_search_criteria), std::move(callback));
      return true;
    }
    case internal::kMediaRouteProvider_ProvideSinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::ProvideSinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouteProvider_CreateMediaRouteController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouteProvider::CreateMediaRouteController",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouteProvider_CreateMediaRouteController_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouteProvider_CreateMediaRouteController_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      ::media_router::mojom::MediaControllerRequest p_media_controller{};
      ::media_router::mojom::MediaStatusObserverPtr p_observer{};
      MediaRouteProvider_CreateMediaRouteController_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      p_media_controller =
          input_data_view.TakeMediaController<decltype(p_media_controller)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouteProvider::CreateMediaRouteController deserializer");
        return false;
      }
      MediaRouteProvider::CreateMediaRouteControllerCallback callback =
          MediaRouteProvider_CreateMediaRouteController_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateMediaRouteController(
std::move(p_route_id), 
std::move(p_media_controller), 
std::move(p_observer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaRouteProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaRouteProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_CreateRoute_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_JoinRoute_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_TerminateRoute_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_StartObservingMediaSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_StopObservingMediaSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_StartObservingMediaRoutes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_StopObservingMediaRoutes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_StartListeningForRouteMessages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StartListeningForRouteMessages_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_StopListeningForRouteMessages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_DetachRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_DetachRoute_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_EnableMdnsDiscovery_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_EnableMdnsDiscovery_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_UpdateMediaSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_UpdateMediaSinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_SearchSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SearchSinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_ProvideSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ProvideSinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_CreateMediaRouteController_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_CreateMediaRouteController_Params_Data>(
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

bool MediaRouteProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaRouteProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_CreateRoute_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_JoinRoute_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_TerminateRoute_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_SearchSinks_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SearchSinks_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouteProvider_CreateMediaRouteController_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data>(
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
void MediaRouteProviderInterceptorForTesting::CreateRoute(const std::string& media_source, const std::string& sink_id, const std::string& original_presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, CreateRouteCallback callback) {
  GetForwardingInterface()->CreateRoute(std::move(media_source), std::move(sink_id), std::move(original_presentation_id), std::move(origin), std::move(tab_id), std::move(timeout), std::move(incognito), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::JoinRoute(const std::string& media_source, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, JoinRouteCallback callback) {
  GetForwardingInterface()->JoinRoute(std::move(media_source), std::move(presentation_id), std::move(origin), std::move(tab_id), std::move(timeout), std::move(incognito), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::ConnectRouteByRouteId(const std::string& media_source, const std::string& route_id, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, ConnectRouteByRouteIdCallback callback) {
  GetForwardingInterface()->ConnectRouteByRouteId(std::move(media_source), std::move(route_id), std::move(presentation_id), std::move(origin), std::move(tab_id), std::move(timeout), std::move(incognito), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::TerminateRoute(const std::string& route_id, TerminateRouteCallback callback) {
  GetForwardingInterface()->TerminateRoute(std::move(route_id), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::SendRouteMessage(const std::string& media_route_id, const std::string& message, SendRouteMessageCallback callback) {
  GetForwardingInterface()->SendRouteMessage(std::move(media_route_id), std::move(message), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::SendRouteBinaryMessage(const std::string& media_route_id, const std::vector<uint8_t>& data, SendRouteBinaryMessageCallback callback) {
  GetForwardingInterface()->SendRouteBinaryMessage(std::move(media_route_id), std::move(data), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::StartObservingMediaSinks(const std::string& media_source) {
  GetForwardingInterface()->StartObservingMediaSinks(std::move(media_source));
}
void MediaRouteProviderInterceptorForTesting::StopObservingMediaSinks(const std::string& media_source) {
  GetForwardingInterface()->StopObservingMediaSinks(std::move(media_source));
}
void MediaRouteProviderInterceptorForTesting::StartObservingMediaRoutes(const std::string& media_source) {
  GetForwardingInterface()->StartObservingMediaRoutes(std::move(media_source));
}
void MediaRouteProviderInterceptorForTesting::StopObservingMediaRoutes(const std::string& media_source) {
  GetForwardingInterface()->StopObservingMediaRoutes(std::move(media_source));
}
void MediaRouteProviderInterceptorForTesting::StartListeningForRouteMessages(const std::string& route_id) {
  GetForwardingInterface()->StartListeningForRouteMessages(std::move(route_id));
}
void MediaRouteProviderInterceptorForTesting::StopListeningForRouteMessages(const std::string& route_id) {
  GetForwardingInterface()->StopListeningForRouteMessages(std::move(route_id));
}
void MediaRouteProviderInterceptorForTesting::DetachRoute(const std::string& route_id) {
  GetForwardingInterface()->DetachRoute(std::move(route_id));
}
void MediaRouteProviderInterceptorForTesting::EnableMdnsDiscovery() {
  GetForwardingInterface()->EnableMdnsDiscovery();
}
void MediaRouteProviderInterceptorForTesting::UpdateMediaSinks(const std::string& media_source) {
  GetForwardingInterface()->UpdateMediaSinks(std::move(media_source));
}
void MediaRouteProviderInterceptorForTesting::SearchSinks(const std::string& sink_id, const std::string& media_source, SinkSearchCriteriaPtr search_criteria, SearchSinksCallback callback) {
  GetForwardingInterface()->SearchSinks(std::move(sink_id), std::move(media_source), std::move(search_criteria), std::move(callback));
}
void MediaRouteProviderInterceptorForTesting::ProvideSinks(const std::string& provider_name, const std::vector<media_router::MediaSinkInternal>& sinks) {
  GetForwardingInterface()->ProvideSinks(std::move(provider_name), std::move(sinks));
}
void MediaRouteProviderInterceptorForTesting::CreateMediaRouteController(const std::string& route_id, ::media_router::mojom::MediaControllerRequest media_controller, ::media_router::mojom::MediaStatusObserverPtr observer, CreateMediaRouteControllerCallback callback) {
  GetForwardingInterface()->CreateMediaRouteController(std::move(route_id), std::move(media_controller), std::move(observer), std::move(callback));
}
MediaRouteProviderAsyncWaiter::MediaRouteProviderAsyncWaiter(
    MediaRouteProvider* proxy) : proxy_(proxy) {}

MediaRouteProviderAsyncWaiter::~MediaRouteProviderAsyncWaiter() = default;

void MediaRouteProviderAsyncWaiter::CreateRoute(
    const std::string& media_source, const std::string& sink_id, const std::string& original_presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, base::Optional<media_router::MediaRoute>* out_route, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code) {
  base::RunLoop loop;
  proxy_->CreateRoute(std::move(media_source),std::move(sink_id),std::move(original_presentation_id),std::move(origin),std::move(tab_id),std::move(timeout),std::move(incognito),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<media_router::MediaRoute>* out_route
,
             base::Optional<std::string>* out_error_text
,
             media_router::RouteRequestResult::ResultCode* out_result_code
,
             const base::Optional<media_router::MediaRoute>& route,
             const base::Optional<std::string>& error_text,
             media_router::RouteRequestResult::ResultCode result_code) {*out_route = std::move(route);*out_error_text = std::move(error_text);*out_result_code = std::move(result_code);
            loop->Quit();
          },
          &loop,
          out_route,
          out_error_text,
          out_result_code));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::JoinRoute(
    const std::string& media_source, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, base::Optional<media_router::MediaRoute>* out_route, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code) {
  base::RunLoop loop;
  proxy_->JoinRoute(std::move(media_source),std::move(presentation_id),std::move(origin),std::move(tab_id),std::move(timeout),std::move(incognito),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<media_router::MediaRoute>* out_route
,
             base::Optional<std::string>* out_error_text
,
             media_router::RouteRequestResult::ResultCode* out_result_code
,
             const base::Optional<media_router::MediaRoute>& route,
             const base::Optional<std::string>& error_text,
             media_router::RouteRequestResult::ResultCode result_code) {*out_route = std::move(route);*out_error_text = std::move(error_text);*out_result_code = std::move(result_code);
            loop->Quit();
          },
          &loop,
          out_route,
          out_error_text,
          out_result_code));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::ConnectRouteByRouteId(
    const std::string& media_source, const std::string& route_id, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, base::Optional<media_router::MediaRoute>* out_route, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code) {
  base::RunLoop loop;
  proxy_->ConnectRouteByRouteId(std::move(media_source),std::move(route_id),std::move(presentation_id),std::move(origin),std::move(tab_id),std::move(timeout),std::move(incognito),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<media_router::MediaRoute>* out_route
,
             base::Optional<std::string>* out_error_text
,
             media_router::RouteRequestResult::ResultCode* out_result_code
,
             const base::Optional<media_router::MediaRoute>& route,
             const base::Optional<std::string>& error_text,
             media_router::RouteRequestResult::ResultCode result_code) {*out_route = std::move(route);*out_error_text = std::move(error_text);*out_result_code = std::move(result_code);
            loop->Quit();
          },
          &loop,
          out_route,
          out_error_text,
          out_result_code));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::TerminateRoute(
    const std::string& route_id, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code) {
  base::RunLoop loop;
  proxy_->TerminateRoute(std::move(route_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::string>* out_error_text
,
             media_router::RouteRequestResult::ResultCode* out_result_code
,
             const base::Optional<std::string>& error_text,
             media_router::RouteRequestResult::ResultCode result_code) {*out_error_text = std::move(error_text);*out_result_code = std::move(result_code);
            loop->Quit();
          },
          &loop,
          out_error_text,
          out_result_code));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::SendRouteMessage(
    const std::string& media_route_id, const std::string& message, bool* out_sent) {
  base::RunLoop loop;
  proxy_->SendRouteMessage(std::move(media_route_id),std::move(message),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_sent
,
             bool sent) {*out_sent = std::move(sent);
            loop->Quit();
          },
          &loop,
          out_sent));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::SendRouteBinaryMessage(
    const std::string& media_route_id, const std::vector<uint8_t>& data, bool* out_sent) {
  base::RunLoop loop;
  proxy_->SendRouteBinaryMessage(std::move(media_route_id),std::move(data),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_sent
,
             bool sent) {*out_sent = std::move(sent);
            loop->Quit();
          },
          &loop,
          out_sent));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::SearchSinks(
    const std::string& sink_id, const std::string& media_source, SinkSearchCriteriaPtr search_criteria, std::string* out_sink_id) {
  base::RunLoop loop;
  proxy_->SearchSinks(std::move(sink_id),std::move(media_source),std::move(search_criteria),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_sink_id
,
             const std::string& sink_id) {*out_sink_id = std::move(sink_id);
            loop->Quit();
          },
          &loop,
          out_sink_id));
  loop.Run();
}
void MediaRouteProviderAsyncWaiter::CreateMediaRouteController(
    const std::string& route_id, ::media_router::mojom::MediaControllerRequest media_controller, ::media_router::mojom::MediaStatusObserverPtr observer, bool* out_success) {
  base::RunLoop loop;
  proxy_->CreateMediaRouteController(std::move(route_id),std::move(media_controller),std::move(observer),
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

const char MediaRouter::Name_[] = "media_router.mojom.MediaRouter";

class MediaRouter_RegisterMediaRouteProvider_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouter_RegisterMediaRouteProvider_ForwardToCallback(
      MediaRouter::RegisterMediaRouteProviderCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouter::RegisterMediaRouteProviderCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouter_RegisterMediaRouteProvider_ForwardToCallback);
};

class MediaRouter_GetMediaSinkServiceStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouter_GetMediaSinkServiceStatus_ForwardToCallback(
      MediaRouter::GetMediaSinkServiceStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouter::GetMediaSinkServiceStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaRouter_GetMediaSinkServiceStatus_ForwardToCallback);
};

MediaRouterProxy::MediaRouterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaRouterProxy::RegisterMediaRouteProvider(
    media_router::MediaRouteProviderId in_provider_id, MediaRouteProviderPtr in_media_router_provider, RegisterMediaRouteProviderCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::RegisterMediaRouteProvider");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_RegisterMediaRouteProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_RegisterMediaRouteProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_router::mojom::MediaRouteProvider_Id>(
      in_provider_id, &params->provider_id);
  mojo::internal::Serialize<::media_router::mojom::MediaRouteProviderPtrDataView>(
      in_media_router_provider, &params->media_router_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_router_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_router_provider in MediaRouter.RegisterMediaRouteProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouter_RegisterMediaRouteProvider_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaRouterProxy::OnSinksReceived(
    media_router::MediaRouteProviderId in_provider_id, const std::string& in_media_source, const std::vector<media_router::MediaSinkInternal>& in_sinks, const std::vector<url::Origin>& in_origins) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnSinksReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnSinksReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnSinksReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_router::mojom::MediaRouteProvider_Id>(
      in_provider_id, &params->provider_id);
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouter.OnSinksReceived request");
  typename decltype(params->sinks)::BaseType::BufferWriter
      sinks_writer;
  const mojo::internal::ContainerValidateParams sinks_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_router::mojom::MediaSinkDataView>>(
      in_sinks, buffer, &sinks_writer, &sinks_validate_params,
      &serialization_context);
  params->sinks.Set(
      sinks_writer.is_null() ? nullptr : sinks_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sinks.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sinks in MediaRouter.OnSinksReceived request");
  typename decltype(params->origins)::BaseType::BufferWriter
      origins_writer;
  const mojo::internal::ContainerValidateParams origins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
      in_origins, buffer, &origins_writer, &origins_validate_params,
      &serialization_context);
  params->origins.Set(
      origins_writer.is_null() ? nullptr : origins_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origins in MediaRouter.OnSinksReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnIssue(
    const media_router::IssueInfo& in_issue) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnIssue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnIssue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnIssue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->issue)::BaseType::BufferWriter
      issue_writer;
  mojo::internal::Serialize<::media_router::mojom::IssueDataView>(
      in_issue, buffer, &issue_writer, &serialization_context);
  params->issue.Set(
      issue_writer.is_null() ? nullptr : issue_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->issue.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null issue in MediaRouter.OnIssue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnRoutesUpdated(
    media_router::MediaRouteProviderId in_provider_id, const std::vector<media_router::MediaRoute>& in_routes, const std::string& in_media_source, const std::vector<std::string>& in_joinable_route_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnRoutesUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnRoutesUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnRoutesUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_router::mojom::MediaRouteProvider_Id>(
      in_provider_id, &params->provider_id);
  typename decltype(params->routes)::BaseType::BufferWriter
      routes_writer;
  const mojo::internal::ContainerValidateParams routes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_router::mojom::MediaRouteDataView>>(
      in_routes, buffer, &routes_writer, &routes_validate_params,
      &serialization_context);
  params->routes.Set(
      routes_writer.is_null() ? nullptr : routes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->routes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null routes in MediaRouter.OnRoutesUpdated request");
  typename decltype(params->media_source)::BaseType::BufferWriter
      media_source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_media_source, buffer, &media_source_writer, &serialization_context);
  params->media_source.Set(
      media_source_writer.is_null() ? nullptr : media_source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->media_source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouter.OnRoutesUpdated request");
  typename decltype(params->joinable_route_ids)::BaseType::BufferWriter
      joinable_route_ids_writer;
  const mojo::internal::ContainerValidateParams joinable_route_ids_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_joinable_route_ids, buffer, &joinable_route_ids_writer, &joinable_route_ids_validate_params,
      &serialization_context);
  params->joinable_route_ids.Set(
      joinable_route_ids_writer.is_null() ? nullptr : joinable_route_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->joinable_route_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null joinable_route_ids in MediaRouter.OnRoutesUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnSinkAvailabilityUpdated(
    media_router::MediaRouteProviderId in_provider_id, MediaRouter::SinkAvailability in_availability) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnSinkAvailabilityUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnSinkAvailabilityUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_router::mojom::MediaRouteProvider_Id>(
      in_provider_id, &params->provider_id);
  mojo::internal::Serialize<::media_router::mojom::MediaRouter_SinkAvailability>(
      in_availability, &params->availability);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnPresentationConnectionStateChanged(
    const std::string& in_route_id, MediaRouter::PresentationConnectionState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnPresentationConnectionStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnPresentationConnectionStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouter.OnPresentationConnectionStateChanged request");
  mojo::internal::Serialize<::media_router::mojom::MediaRouter_PresentationConnectionState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnPresentationConnectionClosed(
    const std::string& in_route_id, MediaRouter::PresentationConnectionCloseReason in_reason, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnPresentationConnectionClosed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnPresentationConnectionClosed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnPresentationConnectionClosed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouter.OnPresentationConnectionClosed request");
  mojo::internal::Serialize<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason>(
      in_reason, &params->reason);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in MediaRouter.OnPresentationConnectionClosed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnRouteMessagesReceived(
    const std::string& in_route_id, const std::vector<content::PresentationConnectionMessage>& in_messages) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnRouteMessagesReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnRouteMessagesReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnRouteMessagesReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->route_id)::BaseType::BufferWriter
      route_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_route_id, buffer, &route_id_writer, &serialization_context);
  params->route_id.Set(
      route_id_writer.is_null() ? nullptr : route_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->route_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouter.OnRouteMessagesReceived request");
  typename decltype(params->messages)::BaseType::BufferWriter
      messages_writer;
  const mojo::internal::ContainerValidateParams messages_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_router::mojom::RouteMessageDataView>>(
      in_messages, buffer, &messages_writer, &messages_validate_params,
      &serialization_context);
  params->messages.Set(
      messages_writer.is_null() ? nullptr : messages_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->messages.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null messages in MediaRouter.OnRouteMessagesReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::OnMediaRemoterCreated(
    int32_t in_tab_id, ::media::mojom::MirrorServiceRemoterPtr in_remoter, ::media::mojom::MirrorServiceRemotingSourceRequest in_remoting_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::OnMediaRemoterCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_OnMediaRemoterCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_OnMediaRemoterCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->tab_id = in_tab_id;
  mojo::internal::Serialize<::media::mojom::MirrorServiceRemoterPtrDataView>(
      in_remoter, &params->remoter, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->remoter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid remoter in MediaRouter.OnMediaRemoterCreated request");
  mojo::internal::Serialize<::media::mojom::MirrorServiceRemotingSourceRequestDataView>(
      in_remoting_source, &params->remoting_source, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->remoting_source),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid remoting_source in MediaRouter.OnMediaRemoterCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaRouterProxy::GetMediaSinkServiceStatus(
    GetMediaSinkServiceStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaRouter::GetMediaSinkServiceStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_GetMediaSinkServiceStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_GetMediaSinkServiceStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaRouter_GetMediaSinkServiceStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaRouter_RegisterMediaRouteProvider_ProxyToResponder {
 public:
  static MediaRouter::RegisterMediaRouteProviderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouter_RegisterMediaRouteProvider_ProxyToResponder> proxy(
        new MediaRouter_RegisterMediaRouteProvider_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouter_RegisterMediaRouteProvider_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouter_RegisterMediaRouteProvider_ProxyToResponder() {
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
  MediaRouter_RegisterMediaRouteProvider_ProxyToResponder(
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
        << "MediaRouter::RegisterMediaRouteProviderCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_instance_id, MediaRouteProviderConfigPtr in_config);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouter_RegisterMediaRouteProvider_ProxyToResponder);
};

bool MediaRouter_RegisterMediaRouteProvider_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouter::RegisterMediaRouteProviderCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_instance_id{};
  MediaRouteProviderConfigPtr p_config{};
  MediaRouter_RegisterMediaRouteProvider_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInstanceId(&p_instance_id))
    success = false;
  if (!input_data_view.ReadConfig(&p_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouter::RegisterMediaRouteProvider response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_instance_id), 
std::move(p_config));
  return true;
}

void MediaRouter_RegisterMediaRouteProvider_ProxyToResponder::Run(
    const std::string& in_instance_id, MediaRouteProviderConfigPtr in_config) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_RegisterMediaRouteProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->instance_id)::BaseType::BufferWriter
      instance_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_instance_id, buffer, &instance_id_writer, &serialization_context);
  params->instance_id.Set(
      instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instance_id in ");
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media_router::mojom::MediaRouteProviderConfigDataView>(
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
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::RegisterMediaRouteProviderCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder {
 public:
  static MediaRouter::GetMediaSinkServiceStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder> proxy(
        new MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder() {
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
  MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder(
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
        << "MediaRouter::GetMediaSinkServiceStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder);
};

bool MediaRouter_GetMediaSinkServiceStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media_router::mojom::MediaRouter::GetMediaSinkServiceStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_status{};
  MediaRouter_GetMediaSinkServiceStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaRouter::GetMediaSinkServiceStatus response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder::Run(
    const std::string& in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaRouter_GetMediaSinkServiceStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->status)::BaseType::BufferWriter
      status_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_status, buffer, &status_writer, &serialization_context);
  params->status.Set(
      status_writer.is_null() ? nullptr : status_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::GetMediaSinkServiceStatusCallback",
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
bool MediaRouterStubDispatch::Accept(
    MediaRouter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::RegisterMediaRouteProvider",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnSinksReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnSinksReceived",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnSinksReceived_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnSinksReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media_router::MediaRouteProviderId p_provider_id{};
      std::string p_media_source{};
      std::vector<media_router::MediaSinkInternal> p_sinks{};
      std::vector<url::Origin> p_origins{};
      MediaRouter_OnSinksReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProviderId(&p_provider_id))
        success = false;
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!input_data_view.ReadSinks(&p_sinks))
        success = false;
      if (!input_data_view.ReadOrigins(&p_origins))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnSinksReceived deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSinksReceived(
std::move(p_provider_id), 
std::move(p_media_source), 
std::move(p_sinks), 
std::move(p_origins));
      return true;
    }
    case internal::kMediaRouter_OnIssue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnIssue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnIssue_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnIssue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media_router::IssueInfo p_issue{};
      MediaRouter_OnIssue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIssue(&p_issue))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnIssue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnIssue(
std::move(p_issue));
      return true;
    }
    case internal::kMediaRouter_OnRoutesUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnRoutesUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnRoutesUpdated_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnRoutesUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media_router::MediaRouteProviderId p_provider_id{};
      std::vector<media_router::MediaRoute> p_routes{};
      std::string p_media_source{};
      std::vector<std::string> p_joinable_route_ids{};
      MediaRouter_OnRoutesUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProviderId(&p_provider_id))
        success = false;
      if (!input_data_view.ReadRoutes(&p_routes))
        success = false;
      if (!input_data_view.ReadMediaSource(&p_media_source))
        success = false;
      if (!input_data_view.ReadJoinableRouteIds(&p_joinable_route_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnRoutesUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnRoutesUpdated(
std::move(p_provider_id), 
std::move(p_routes), 
std::move(p_media_source), 
std::move(p_joinable_route_ids));
      return true;
    }
    case internal::kMediaRouter_OnSinkAvailabilityUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnSinkAvailabilityUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media_router::MediaRouteProviderId p_provider_id{};
      MediaRouter::SinkAvailability p_availability{};
      MediaRouter_OnSinkAvailabilityUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProviderId(&p_provider_id))
        success = false;
      if (!input_data_view.ReadAvailability(&p_availability))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnSinkAvailabilityUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSinkAvailabilityUpdated(
std::move(p_provider_id), 
std::move(p_availability));
      return true;
    }
    case internal::kMediaRouter_OnPresentationConnectionStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnPresentationConnectionStateChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      MediaRouter::PresentationConnectionState p_state{};
      MediaRouter_OnPresentationConnectionStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnPresentationConnectionStateChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPresentationConnectionStateChanged(
std::move(p_route_id), 
std::move(p_state));
      return true;
    }
    case internal::kMediaRouter_OnPresentationConnectionClosed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnPresentationConnectionClosed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnPresentationConnectionClosed_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnPresentationConnectionClosed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      MediaRouter::PresentationConnectionCloseReason p_reason{};
      std::string p_message{};
      MediaRouter_OnPresentationConnectionClosed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnPresentationConnectionClosed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPresentationConnectionClosed(
std::move(p_route_id), 
std::move(p_reason), 
std::move(p_message));
      return true;
    }
    case internal::kMediaRouter_OnRouteMessagesReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnRouteMessagesReceived",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnRouteMessagesReceived_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnRouteMessagesReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_route_id{};
      std::vector<content::PresentationConnectionMessage> p_messages{};
      MediaRouter_OnRouteMessagesReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRouteId(&p_route_id))
        success = false;
      if (!input_data_view.ReadMessages(&p_messages))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnRouteMessagesReceived deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnRouteMessagesReceived(
std::move(p_route_id), 
std::move(p_messages));
      return true;
    }
    case internal::kMediaRouter_OnMediaRemoterCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnMediaRemoterCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaRouter_OnMediaRemoterCreated_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnMediaRemoterCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_tab_id{};
      ::media::mojom::MirrorServiceRemoterPtr p_remoter{};
      ::media::mojom::MirrorServiceRemotingSourceRequest p_remoting_source{};
      MediaRouter_OnMediaRemoterCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tab_id = input_data_view.tab_id();
      p_remoter =
          input_data_view.TakeRemoter<decltype(p_remoter)>();
      p_remoting_source =
          input_data_view.TakeRemotingSource<decltype(p_remoting_source)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::OnMediaRemoterCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnMediaRemoterCreated(
std::move(p_tab_id), 
std::move(p_remoter), 
std::move(p_remoting_source));
      return true;
    }
    case internal::kMediaRouter_GetMediaSinkServiceStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::GetMediaSinkServiceStatus",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaRouterStubDispatch::AcceptWithResponder(
    MediaRouter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::RegisterMediaRouteProvider",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouter_RegisterMediaRouteProvider_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouter_RegisterMediaRouteProvider_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media_router::MediaRouteProviderId p_provider_id{};
      MediaRouteProviderPtr p_media_router_provider{};
      MediaRouter_RegisterMediaRouteProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProviderId(&p_provider_id))
        success = false;
      p_media_router_provider =
          input_data_view.TakeMediaRouterProvider<decltype(p_media_router_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::RegisterMediaRouteProvider deserializer");
        return false;
      }
      MediaRouter::RegisterMediaRouteProviderCallback callback =
          MediaRouter_RegisterMediaRouteProvider_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterMediaRouteProvider(
std::move(p_provider_id), 
std::move(p_media_router_provider), std::move(callback));
      return true;
    }
    case internal::kMediaRouter_OnSinksReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnSinksReceived",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnIssue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnIssue",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnRoutesUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnRoutesUpdated",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnSinkAvailabilityUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnSinkAvailabilityUpdated",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnPresentationConnectionStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnPresentationConnectionStateChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnPresentationConnectionClosed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnPresentationConnectionClosed",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnRouteMessagesReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnRouteMessagesReceived",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_OnMediaRemoterCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::OnMediaRemoterCreated",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaRouter_GetMediaSinkServiceStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaRouter::GetMediaSinkServiceStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaRouter_GetMediaSinkServiceStatus_Params_Data* params =
          reinterpret_cast<
              internal::MediaRouter_GetMediaSinkServiceStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaRouter_GetMediaSinkServiceStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaRouter::GetMediaSinkServiceStatus deserializer");
        return false;
      }
      MediaRouter::GetMediaSinkServiceStatusCallback callback =
          MediaRouter_GetMediaSinkServiceStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetMediaSinkServiceStatus(std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaRouterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaRouter RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_RegisterMediaRouteProvider_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnSinksReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnSinksReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnIssue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnIssue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnRoutesUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnRoutesUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnSinkAvailabilityUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnPresentationConnectionStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnPresentationConnectionClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnPresentationConnectionClosed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnRouteMessagesReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnRouteMessagesReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_OnMediaRemoterCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnMediaRemoterCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_GetMediaSinkServiceStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_GetMediaSinkServiceStatus_Params_Data>(
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

bool MediaRouterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaRouter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaRouter_GetMediaSinkServiceStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data>(
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
void MediaRouterInterceptorForTesting::RegisterMediaRouteProvider(media_router::MediaRouteProviderId provider_id, MediaRouteProviderPtr media_router_provider, RegisterMediaRouteProviderCallback callback) {
  GetForwardingInterface()->RegisterMediaRouteProvider(std::move(provider_id), std::move(media_router_provider), std::move(callback));
}
void MediaRouterInterceptorForTesting::OnSinksReceived(media_router::MediaRouteProviderId provider_id, const std::string& media_source, const std::vector<media_router::MediaSinkInternal>& sinks, const std::vector<url::Origin>& origins) {
  GetForwardingInterface()->OnSinksReceived(std::move(provider_id), std::move(media_source), std::move(sinks), std::move(origins));
}
void MediaRouterInterceptorForTesting::OnIssue(const media_router::IssueInfo& issue) {
  GetForwardingInterface()->OnIssue(std::move(issue));
}
void MediaRouterInterceptorForTesting::OnRoutesUpdated(media_router::MediaRouteProviderId provider_id, const std::vector<media_router::MediaRoute>& routes, const std::string& media_source, const std::vector<std::string>& joinable_route_ids) {
  GetForwardingInterface()->OnRoutesUpdated(std::move(provider_id), std::move(routes), std::move(media_source), std::move(joinable_route_ids));
}
void MediaRouterInterceptorForTesting::OnSinkAvailabilityUpdated(media_router::MediaRouteProviderId provider_id, MediaRouter::SinkAvailability availability) {
  GetForwardingInterface()->OnSinkAvailabilityUpdated(std::move(provider_id), std::move(availability));
}
void MediaRouterInterceptorForTesting::OnPresentationConnectionStateChanged(const std::string& route_id, MediaRouter::PresentationConnectionState state) {
  GetForwardingInterface()->OnPresentationConnectionStateChanged(std::move(route_id), std::move(state));
}
void MediaRouterInterceptorForTesting::OnPresentationConnectionClosed(const std::string& route_id, MediaRouter::PresentationConnectionCloseReason reason, const std::string& message) {
  GetForwardingInterface()->OnPresentationConnectionClosed(std::move(route_id), std::move(reason), std::move(message));
}
void MediaRouterInterceptorForTesting::OnRouteMessagesReceived(const std::string& route_id, const std::vector<content::PresentationConnectionMessage>& messages) {
  GetForwardingInterface()->OnRouteMessagesReceived(std::move(route_id), std::move(messages));
}
void MediaRouterInterceptorForTesting::OnMediaRemoterCreated(int32_t tab_id, ::media::mojom::MirrorServiceRemoterPtr remoter, ::media::mojom::MirrorServiceRemotingSourceRequest remoting_source) {
  GetForwardingInterface()->OnMediaRemoterCreated(std::move(tab_id), std::move(remoter), std::move(remoting_source));
}
void MediaRouterInterceptorForTesting::GetMediaSinkServiceStatus(GetMediaSinkServiceStatusCallback callback) {
  GetForwardingInterface()->GetMediaSinkServiceStatus(std::move(callback));
}
MediaRouterAsyncWaiter::MediaRouterAsyncWaiter(
    MediaRouter* proxy) : proxy_(proxy) {}

MediaRouterAsyncWaiter::~MediaRouterAsyncWaiter() = default;

void MediaRouterAsyncWaiter::RegisterMediaRouteProvider(
    media_router::MediaRouteProviderId provider_id, MediaRouteProviderPtr media_router_provider, std::string* out_instance_id, MediaRouteProviderConfigPtr* out_config) {
  base::RunLoop loop;
  proxy_->RegisterMediaRouteProvider(std::move(provider_id),std::move(media_router_provider),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_instance_id
,
             MediaRouteProviderConfigPtr* out_config
,
             const std::string& instance_id,
             MediaRouteProviderConfigPtr config) {*out_instance_id = std::move(instance_id);*out_config = std::move(config);
            loop->Quit();
          },
          &loop,
          out_instance_id,
          out_config));
  loop.Run();
}
void MediaRouterAsyncWaiter::GetMediaSinkServiceStatus(
    std::string* out_status) {
  base::RunLoop loop;
  proxy_->GetMediaSinkServiceStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_status
,
             const std::string& status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}

}  // namespace mojom
}  // namespace media_router

namespace mojo {


// static
bool StructTraits<::media_router::mojom::MediaSink::DataView, ::media_router::mojom::MediaSinkPtr>::Read(
    ::media_router::mojom::MediaSink::DataView input,
    ::media_router::mojom::MediaSinkPtr* output) {
  bool success = true;
  ::media_router::mojom::MediaSinkPtr result(::media_router::mojom::MediaSink::New());
  
      if (!input.ReadSinkId(&result->sink_id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadDomain(&result->domain))
        success = false;
      if (!input.ReadIconType(&result->icon_type))
        success = false;
      if (!input.ReadProviderId(&result->provider_id))
        success = false;
      if (!input.ReadExtraData(&result->extra_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::DialMediaSink::DataView, ::media_router::mojom::DialMediaSinkPtr>::Read(
    ::media_router::mojom::DialMediaSink::DataView input,
    ::media_router::mojom::DialMediaSinkPtr* output) {
  bool success = true;
  ::media_router::mojom::DialMediaSinkPtr result(::media_router::mojom::DialMediaSink::New());
  
      if (!input.ReadIpAddress(&result->ip_address))
        success = false;
      if (!input.ReadModelName(&result->model_name))
        success = false;
      if (!input.ReadAppUrl(&result->app_url))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::CastMediaSink::DataView, ::media_router::mojom::CastMediaSinkPtr>::Read(
    ::media_router::mojom::CastMediaSink::DataView input,
    ::media_router::mojom::CastMediaSinkPtr* output) {
  bool success = true;
  ::media_router::mojom::CastMediaSinkPtr result(::media_router::mojom::CastMediaSink::New());
  
      if (!input.ReadIpEndpoint(&result->ip_endpoint))
        success = false;
      if (!input.ReadModelName(&result->model_name))
        success = false;
      result->capabilities = input.capabilities();
      result->cast_channel_id = input.cast_channel_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::MediaRoute::DataView, ::media_router::mojom::MediaRoutePtr>::Read(
    ::media_router::mojom::MediaRoute::DataView input,
    ::media_router::mojom::MediaRoutePtr* output) {
  bool success = true;
  ::media_router::mojom::MediaRoutePtr result(::media_router::mojom::MediaRoute::New());
  
      if (!input.ReadMediaRouteId(&result->media_route_id))
        success = false;
      if (!input.ReadPresentationId(&result->presentation_id))
        success = false;
      if (!input.ReadMediaSource(&result->media_source))
        success = false;
      if (!input.ReadMediaSinkId(&result->media_sink_id))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      result->is_local = input.is_local();
      if (!input.ReadControllerType(&result->controller_type))
        success = false;
      result->for_display = input.for_display();
      result->is_incognito = input.is_incognito();
      result->is_local_presentation = input.is_local_presentation();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::Issue::DataView, ::media_router::mojom::IssuePtr>::Read(
    ::media_router::mojom::Issue::DataView input,
    ::media_router::mojom::IssuePtr* output) {
  bool success = true;
  ::media_router::mojom::IssuePtr result(::media_router::mojom::Issue::New());
  
      if (!input.ReadRouteId(&result->route_id))
        success = false;
      if (!input.ReadSeverity(&result->severity))
        success = false;
      result->is_blocking = input.is_blocking();
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadDefaultAction(&result->default_action))
        success = false;
      if (!input.ReadSecondaryActions(&result->secondary_actions))
        success = false;
      result->help_page_id = input.help_page_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::RouteMessage::DataView, ::media_router::mojom::RouteMessagePtr>::Read(
    ::media_router::mojom::RouteMessage::DataView input,
    ::media_router::mojom::RouteMessagePtr* output) {
  bool success = true;
  ::media_router::mojom::RouteMessagePtr result(::media_router::mojom::RouteMessage::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::SinkSearchCriteria::DataView, ::media_router::mojom::SinkSearchCriteriaPtr>::Read(
    ::media_router::mojom::SinkSearchCriteria::DataView input,
    ::media_router::mojom::SinkSearchCriteriaPtr* output) {
  bool success = true;
  ::media_router::mojom::SinkSearchCriteriaPtr result(::media_router::mojom::SinkSearchCriteria::New());
  
      if (!input.ReadInput(&result->input))
        success = false;
      if (!input.ReadDomain(&result->domain))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::MediaRouteProviderConfig::DataView, ::media_router::mojom::MediaRouteProviderConfigPtr>::Read(
    ::media_router::mojom::MediaRouteProviderConfig::DataView input,
    ::media_router::mojom::MediaRouteProviderConfigPtr* output) {
  bool success = true;
  ::media_router::mojom::MediaRouteProviderConfigPtr result(::media_router::mojom::MediaRouteProviderConfig::New());
  
      result->enable_dial_discovery = input.enable_dial_discovery();
      result->enable_cast_discovery = input.enable_cast_discovery();
      result->enable_dial_sink_query = input.enable_dial_sink_query();
      result->enable_cast_sink_query = input.enable_cast_sink_query();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::media_router::mojom::MediaSinkExtraData::DataView, ::media_router::mojom::MediaSinkExtraDataPtr>::Read(
    ::media_router::mojom::MediaSinkExtraData::DataView input,
    ::media_router::mojom::MediaSinkExtraDataPtr* output) {
  using UnionType = ::media_router::mojom::MediaSinkExtraData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::DIAL_MEDIA_SINK: {
      ::media_router::mojom::DialMediaSinkPtr result_dial_media_sink;
      if (!input.ReadDialMediaSink(&result_dial_media_sink))
        return false;

      *output = UnionType::NewDialMediaSink(
          std::move(result_dial_media_sink));
      break;
    }
    case Tag::CAST_MEDIA_SINK: {
      ::media_router::mojom::CastMediaSinkPtr result_cast_media_sink;
      if (!input.ReadCastMediaSink(&result_cast_media_sink))
        return false;

      *output = UnionType::NewCastMediaSink(
          std::move(result_cast_media_sink));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif