// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "chrome/common/media_router/mojo/media_router.mojom-shared-internal.h"
#include "chrome/common/media_router/mojo/media_controller.mojom-shared.h"
#include "chrome/common/media_router/mojo/media_status.mojom-shared.h"
#include "media/mojo/interfaces/mirror_service_remoting.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "net/interfaces/ip_address.mojom-shared.h"
#include "net/interfaces/ip_endpoint.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media_router {
namespace mojom {
class MediaSinkDataView;

class DialMediaSinkDataView;

class CastMediaSinkDataView;

class MediaRouteDataView;

class IssueDataView;

class RouteMessageDataView;

class SinkSearchCriteriaDataView;

class MediaRouteProviderConfigDataView;

class MediaSinkExtraDataDataView;


}  // namespace mojom
}  // namespace media_router

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media_router::mojom::MediaSinkDataView> {
  using Data = ::media_router::mojom::internal::MediaSink_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::DialMediaSinkDataView> {
  using Data = ::media_router::mojom::internal::DialMediaSink_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::CastMediaSinkDataView> {
  using Data = ::media_router::mojom::internal::CastMediaSink_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::MediaRouteDataView> {
  using Data = ::media_router::mojom::internal::MediaRoute_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::IssueDataView> {
  using Data = ::media_router::mojom::internal::Issue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::RouteMessageDataView> {
  using Data = ::media_router::mojom::internal::RouteMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::SinkSearchCriteriaDataView> {
  using Data = ::media_router::mojom::internal::SinkSearchCriteria_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::MediaRouteProviderConfigDataView> {
  using Data = ::media_router::mojom::internal::MediaRouteProviderConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::MediaSinkExtraDataDataView> {
  using Data = ::media_router::mojom::internal::MediaSinkExtraData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace media_router {
namespace mojom {

enum class SinkIconType : int32_t {
  CAST,
  CAST_AUDIO_GROUP,
  CAST_AUDIO,
  MEETING,
  HANGOUT,
  EDUCATION,
  WIRED_DISPLAY,
  GENERIC,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, SinkIconType value) {
  switch(value) {
    case SinkIconType::CAST:
      return os << "SinkIconType::CAST";
    case SinkIconType::CAST_AUDIO_GROUP:
      return os << "SinkIconType::CAST_AUDIO_GROUP";
    case SinkIconType::CAST_AUDIO:
      return os << "SinkIconType::CAST_AUDIO";
    case SinkIconType::MEETING:
      return os << "SinkIconType::MEETING";
    case SinkIconType::HANGOUT:
      return os << "SinkIconType::HANGOUT";
    case SinkIconType::EDUCATION:
      return os << "SinkIconType::EDUCATION";
    case SinkIconType::WIRED_DISPLAY:
      return os << "SinkIconType::WIRED_DISPLAY";
    case SinkIconType::GENERIC:
      return os << "SinkIconType::GENERIC";
    default:
      return os << "Unknown SinkIconType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SinkIconType value) {
  return internal::SinkIconType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class RouteControllerType : int32_t {
  kNone,
  kGeneric,
  kHangouts,
  kMirroring,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, RouteControllerType value) {
  switch(value) {
    case RouteControllerType::kNone:
      return os << "RouteControllerType::kNone";
    case RouteControllerType::kGeneric:
      return os << "RouteControllerType::kGeneric";
    case RouteControllerType::kHangouts:
      return os << "RouteControllerType::kHangouts";
    case RouteControllerType::kMirroring:
      return os << "RouteControllerType::kMirroring";
    default:
      return os << "Unknown RouteControllerType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RouteControllerType value) {
  return internal::RouteControllerType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class RouteRequestResultCode : int32_t {
  UNKNOWN_ERROR,
  OK,
  TIMED_OUT,
  ROUTE_NOT_FOUND,
  SINK_NOT_FOUND,
  INVALID_ORIGIN,
  INCOGNITO_MISMATCH,
  NO_SUPPORTED_PROVIDER,
  CANCELLED,
  ROUTE_ALREADY_EXISTS,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, RouteRequestResultCode value) {
  switch(value) {
    case RouteRequestResultCode::UNKNOWN_ERROR:
      return os << "RouteRequestResultCode::UNKNOWN_ERROR";
    case RouteRequestResultCode::OK:
      return os << "RouteRequestResultCode::OK";
    case RouteRequestResultCode::TIMED_OUT:
      return os << "RouteRequestResultCode::TIMED_OUT";
    case RouteRequestResultCode::ROUTE_NOT_FOUND:
      return os << "RouteRequestResultCode::ROUTE_NOT_FOUND";
    case RouteRequestResultCode::SINK_NOT_FOUND:
      return os << "RouteRequestResultCode::SINK_NOT_FOUND";
    case RouteRequestResultCode::INVALID_ORIGIN:
      return os << "RouteRequestResultCode::INVALID_ORIGIN";
    case RouteRequestResultCode::INCOGNITO_MISMATCH:
      return os << "RouteRequestResultCode::INCOGNITO_MISMATCH";
    case RouteRequestResultCode::NO_SUPPORTED_PROVIDER:
      return os << "RouteRequestResultCode::NO_SUPPORTED_PROVIDER";
    case RouteRequestResultCode::CANCELLED:
      return os << "RouteRequestResultCode::CANCELLED";
    case RouteRequestResultCode::ROUTE_ALREADY_EXISTS:
      return os << "RouteRequestResultCode::ROUTE_ALREADY_EXISTS";
    default:
      return os << "Unknown RouteRequestResultCode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RouteRequestResultCode value) {
  return internal::RouteRequestResultCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Issue_Severity : int32_t {
  FATAL,
  WARNING,
  NOTIFICATION,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, Issue_Severity value) {
  switch(value) {
    case Issue_Severity::FATAL:
      return os << "Issue_Severity::FATAL";
    case Issue_Severity::WARNING:
      return os << "Issue_Severity::WARNING";
    case Issue_Severity::NOTIFICATION:
      return os << "Issue_Severity::NOTIFICATION";
    default:
      return os << "Unknown Issue_Severity value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Issue_Severity value) {
  return internal::Issue_Severity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Issue_ActionType : int32_t {
  DISMISS,
  LEARN_MORE,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, Issue_ActionType value) {
  switch(value) {
    case Issue_ActionType::DISMISS:
      return os << "Issue_ActionType::DISMISS";
    case Issue_ActionType::LEARN_MORE:
      return os << "Issue_ActionType::LEARN_MORE";
    default:
      return os << "Unknown Issue_ActionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Issue_ActionType value) {
  return internal::Issue_ActionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class RouteMessage_Type : int32_t {
  TEXT,
  BINARY,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, RouteMessage_Type value) {
  switch(value) {
    case RouteMessage_Type::TEXT:
      return os << "RouteMessage_Type::TEXT";
    case RouteMessage_Type::BINARY:
      return os << "RouteMessage_Type::BINARY";
    default:
      return os << "Unknown RouteMessage_Type value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RouteMessage_Type value) {
  return internal::RouteMessage_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MediaRouteProvider_Id : int32_t {
  EXTENSION,
  WIRED_DISPLAY,
  CAST,
  DIAL,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, MediaRouteProvider_Id value) {
  switch(value) {
    case MediaRouteProvider_Id::EXTENSION:
      return os << "MediaRouteProvider_Id::EXTENSION";
    case MediaRouteProvider_Id::WIRED_DISPLAY:
      return os << "MediaRouteProvider_Id::WIRED_DISPLAY";
    case MediaRouteProvider_Id::CAST:
      return os << "MediaRouteProvider_Id::CAST";
    case MediaRouteProvider_Id::DIAL:
      return os << "MediaRouteProvider_Id::DIAL";
    default:
      return os << "Unknown MediaRouteProvider_Id value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaRouteProvider_Id value) {
  return internal::MediaRouteProvider_Id_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MediaRouter_SinkAvailability : int32_t {
  UNAVAILABLE,
  PER_SOURCE,
  AVAILABLE,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, MediaRouter_SinkAvailability value) {
  switch(value) {
    case MediaRouter_SinkAvailability::UNAVAILABLE:
      return os << "MediaRouter_SinkAvailability::UNAVAILABLE";
    case MediaRouter_SinkAvailability::PER_SOURCE:
      return os << "MediaRouter_SinkAvailability::PER_SOURCE";
    case MediaRouter_SinkAvailability::AVAILABLE:
      return os << "MediaRouter_SinkAvailability::AVAILABLE";
    default:
      return os << "Unknown MediaRouter_SinkAvailability value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaRouter_SinkAvailability value) {
  return internal::MediaRouter_SinkAvailability_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MediaRouter_PresentationConnectionState : int32_t {
  CONNECTING,
  CONNECTED,
  CLOSED,
  TERMINATED,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, MediaRouter_PresentationConnectionState value) {
  switch(value) {
    case MediaRouter_PresentationConnectionState::CONNECTING:
      return os << "MediaRouter_PresentationConnectionState::CONNECTING";
    case MediaRouter_PresentationConnectionState::CONNECTED:
      return os << "MediaRouter_PresentationConnectionState::CONNECTED";
    case MediaRouter_PresentationConnectionState::CLOSED:
      return os << "MediaRouter_PresentationConnectionState::CLOSED";
    case MediaRouter_PresentationConnectionState::TERMINATED:
      return os << "MediaRouter_PresentationConnectionState::TERMINATED";
    default:
      return os << "Unknown MediaRouter_PresentationConnectionState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaRouter_PresentationConnectionState value) {
  return internal::MediaRouter_PresentationConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MediaRouter_PresentationConnectionCloseReason : int32_t {
  CONNECTION_ERROR,
  CLOSED,
  WENT_AWAY,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, MediaRouter_PresentationConnectionCloseReason value) {
  switch(value) {
    case MediaRouter_PresentationConnectionCloseReason::CONNECTION_ERROR:
      return os << "MediaRouter_PresentationConnectionCloseReason::CONNECTION_ERROR";
    case MediaRouter_PresentationConnectionCloseReason::CLOSED:
      return os << "MediaRouter_PresentationConnectionCloseReason::CLOSED";
    case MediaRouter_PresentationConnectionCloseReason::WENT_AWAY:
      return os << "MediaRouter_PresentationConnectionCloseReason::WENT_AWAY";
    default:
      return os << "Unknown MediaRouter_PresentationConnectionCloseReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaRouter_PresentationConnectionCloseReason value) {
  return internal::MediaRouter_PresentationConnectionCloseReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaRouteProviderInterfaceBase {};

using MediaRouteProviderPtrDataView =
    mojo::InterfacePtrDataView<MediaRouteProviderInterfaceBase>;
using MediaRouteProviderRequestDataView =
    mojo::InterfaceRequestDataView<MediaRouteProviderInterfaceBase>;
using MediaRouteProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaRouteProviderInterfaceBase>;
using MediaRouteProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaRouteProviderInterfaceBase>;
class MediaRouterInterfaceBase {};

using MediaRouterPtrDataView =
    mojo::InterfacePtrDataView<MediaRouterInterfaceBase>;
using MediaRouterRequestDataView =
    mojo::InterfaceRequestDataView<MediaRouterInterfaceBase>;
using MediaRouterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaRouterInterfaceBase>;
using MediaRouterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaRouterInterfaceBase>;
class MediaSinkDataView {
 public:
  MediaSinkDataView() {}

  MediaSinkDataView(
      internal::MediaSink_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSinkId(UserType* output) {
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIconType(UserType* output) const {
    auto data_value = data_->icon_type;
    return mojo::internal::Deserialize<::media_router::mojom::SinkIconType>(
        data_value, output);
  }

  SinkIconType icon_type() const {
    return static_cast<SinkIconType>(data_->icon_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderId(UserType* output) const {
    auto data_value = data_->provider_id;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteProvider_Id>(
        data_value, output);
  }

  MediaRouteProvider_Id provider_id() const {
    return static_cast<MediaRouteProvider_Id>(data_->provider_id);
  }
  inline void GetExtraDataDataView(
      MediaSinkExtraDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraData(UserType* output) {
    auto* pointer = !data_->extra_data.is_null() ? &data_->extra_data : nullptr;
    return mojo::internal::Deserialize<::media_router::mojom::MediaSinkExtraDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSink_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DialMediaSinkDataView {
 public:
  DialMediaSinkDataView() {}

  DialMediaSinkDataView(
      internal::DialMediaSink_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIpAddressDataView(
      ::net::interfaces::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIpAddress(UserType* output) {
    auto* pointer = data_->ip_address.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPAddressDataView>(
        pointer, output, context_);
  }
  inline void GetModelNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModelName(UserType* output) {
    auto* pointer = data_->model_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAppUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAppUrl(UserType* output) {
    auto* pointer = data_->app_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::DialMediaSink_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CastMediaSinkDataView {
 public:
  CastMediaSinkDataView() {}

  CastMediaSinkDataView(
      internal::CastMediaSink_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIpEndpointDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIpEndpoint(UserType* output) {
    auto* pointer = data_->ip_endpoint.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetModelNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModelName(UserType* output) {
    auto* pointer = data_->model_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint8_t capabilities() const {
    return data_->capabilities;
  }
  int32_t cast_channel_id() const {
    return data_->cast_channel_id;
  }
 private:
  internal::CastMediaSink_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteDataView {
 public:
  MediaRouteDataView() {}

  MediaRouteDataView(
      internal::MediaRoute_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaRouteId(UserType* output) {
    auto* pointer = data_->media_route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMediaSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSinkId(UserType* output) {
    auto* pointer = data_->media_sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_local() const {
    return data_->is_local;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControllerType(UserType* output) const {
    auto data_value = data_->controller_type;
    return mojo::internal::Deserialize<::media_router::mojom::RouteControllerType>(
        data_value, output);
  }

  RouteControllerType controller_type() const {
    return static_cast<RouteControllerType>(data_->controller_type);
  }
  bool for_display() const {
    return data_->for_display;
  }
  bool is_incognito() const {
    return data_->is_incognito;
  }
  bool is_local_presentation() const {
    return data_->is_local_presentation;
  }
 private:
  internal::MediaRoute_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IssueDataView {
 public:
  IssueDataView() {}

  IssueDataView(
      internal::Issue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSeverity(UserType* output) const {
    auto data_value = data_->severity;
    return mojo::internal::Deserialize<::media_router::mojom::Issue_Severity>(
        data_value, output);
  }

  Issue_Severity severity() const {
    return static_cast<Issue_Severity>(data_->severity);
  }
  bool is_blocking() const {
    return data_->is_blocking;
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultAction(UserType* output) const {
    auto data_value = data_->default_action;
    return mojo::internal::Deserialize<::media_router::mojom::Issue_ActionType>(
        data_value, output);
  }

  Issue_ActionType default_action() const {
    return static_cast<Issue_ActionType>(data_->default_action);
  }
  inline void GetSecondaryActionsDataView(
      mojo::ArrayDataView<Issue_ActionType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecondaryActions(UserType* output) {
    auto* pointer = data_->secondary_actions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_router::mojom::Issue_ActionType>>(
        pointer, output, context_);
  }
  int32_t help_page_id() const {
    return data_->help_page_id;
  }
 private:
  internal::Issue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RouteMessageDataView {
 public:
  RouteMessageDataView() {}

  RouteMessageDataView(
      internal::RouteMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media_router::mojom::RouteMessage_Type>(
        data_value, output);
  }

  RouteMessage_Type type() const {
    return static_cast<RouteMessage_Type>(data_->type);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::RouteMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SinkSearchCriteriaDataView {
 public:
  SinkSearchCriteriaDataView() {}

  SinkSearchCriteriaDataView(
      internal::SinkSearchCriteria_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInput(UserType* output) {
    auto* pointer = data_->input.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SinkSearchCriteria_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProviderConfigDataView {
 public:
  MediaRouteProviderConfigDataView() {}

  MediaRouteProviderConfigDataView(
      internal::MediaRouteProviderConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable_dial_discovery() const {
    return data_->enable_dial_discovery;
  }
  bool enable_cast_discovery() const {
    return data_->enable_cast_discovery;
  }
  bool enable_dial_sink_query() const {
    return data_->enable_dial_sink_query;
  }
  bool enable_cast_sink_query() const {
    return data_->enable_cast_sink_query;
  }
 private:
  internal::MediaRouteProviderConfig_Data* data_ = nullptr;
};

class MediaRouteProvider_CreateRoute_ParamsDataView {
 public:
  MediaRouteProvider_CreateRoute_ParamsDataView() {}

  MediaRouteProvider_CreateRoute_ParamsDataView(
      internal::MediaRouteProvider_CreateRoute_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSinkId(UserType* output) {
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginalPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalPresentationId(UserType* output) {
    auto* pointer = data_->original_presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool incognito() const {
    return data_->incognito;
  }
 private:
  internal::MediaRouteProvider_CreateRoute_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_CreateRoute_ResponseParamsDataView {
 public:
  MediaRouteProvider_CreateRoute_ResponseParamsDataView() {}

  MediaRouteProvider_CreateRoute_ResponseParamsDataView(
      internal::MediaRouteProvider_CreateRoute_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteDataView(
      MediaRouteDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoute(UserType* output) {
    auto* pointer = data_->route.Get();
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteDataView>(
        pointer, output, context_);
  }
  inline void GetErrorTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorText(UserType* output) {
    auto* pointer = data_->error_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultCode(UserType* output) const {
    auto data_value = data_->result_code;
    return mojo::internal::Deserialize<::media_router::mojom::RouteRequestResultCode>(
        data_value, output);
  }

  RouteRequestResultCode result_code() const {
    return static_cast<RouteRequestResultCode>(data_->result_code);
  }
 private:
  internal::MediaRouteProvider_CreateRoute_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_JoinRoute_ParamsDataView {
 public:
  MediaRouteProvider_JoinRoute_ParamsDataView() {}

  MediaRouteProvider_JoinRoute_ParamsDataView(
      internal::MediaRouteProvider_JoinRoute_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool incognito() const {
    return data_->incognito;
  }
 private:
  internal::MediaRouteProvider_JoinRoute_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_JoinRoute_ResponseParamsDataView {
 public:
  MediaRouteProvider_JoinRoute_ResponseParamsDataView() {}

  MediaRouteProvider_JoinRoute_ResponseParamsDataView(
      internal::MediaRouteProvider_JoinRoute_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteDataView(
      MediaRouteDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoute(UserType* output) {
    auto* pointer = data_->route.Get();
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteDataView>(
        pointer, output, context_);
  }
  inline void GetErrorTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorText(UserType* output) {
    auto* pointer = data_->error_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultCode(UserType* output) const {
    auto data_value = data_->result_code;
    return mojo::internal::Deserialize<::media_router::mojom::RouteRequestResultCode>(
        data_value, output);
  }

  RouteRequestResultCode result_code() const {
    return static_cast<RouteRequestResultCode>(data_->result_code);
  }
 private:
  internal::MediaRouteProvider_JoinRoute_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView {
 public:
  MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView() {}

  MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView(
      internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationId(UserType* output) {
    auto* pointer = data_->presentation_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool incognito() const {
    return data_->incognito;
  }
 private:
  internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_ConnectRouteByRouteId_ResponseParamsDataView {
 public:
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParamsDataView() {}

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParamsDataView(
      internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteDataView(
      MediaRouteDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoute(UserType* output) {
    auto* pointer = data_->route.Get();
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteDataView>(
        pointer, output, context_);
  }
  inline void GetErrorTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorText(UserType* output) {
    auto* pointer = data_->error_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultCode(UserType* output) const {
    auto data_value = data_->result_code;
    return mojo::internal::Deserialize<::media_router::mojom::RouteRequestResultCode>(
        data_value, output);
  }

  RouteRequestResultCode result_code() const {
    return static_cast<RouteRequestResultCode>(data_->result_code);
  }
 private:
  internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_TerminateRoute_ParamsDataView {
 public:
  MediaRouteProvider_TerminateRoute_ParamsDataView() {}

  MediaRouteProvider_TerminateRoute_ParamsDataView(
      internal::MediaRouteProvider_TerminateRoute_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_TerminateRoute_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_TerminateRoute_ResponseParamsDataView {
 public:
  MediaRouteProvider_TerminateRoute_ResponseParamsDataView() {}

  MediaRouteProvider_TerminateRoute_ResponseParamsDataView(
      internal::MediaRouteProvider_TerminateRoute_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorText(UserType* output) {
    auto* pointer = data_->error_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultCode(UserType* output) const {
    auto data_value = data_->result_code;
    return mojo::internal::Deserialize<::media_router::mojom::RouteRequestResultCode>(
        data_value, output);
  }

  RouteRequestResultCode result_code() const {
    return static_cast<RouteRequestResultCode>(data_->result_code);
  }
 private:
  internal::MediaRouteProvider_TerminateRoute_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_SendRouteMessage_ParamsDataView {
 public:
  MediaRouteProvider_SendRouteMessage_ParamsDataView() {}

  MediaRouteProvider_SendRouteMessage_ParamsDataView(
      internal::MediaRouteProvider_SendRouteMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaRouteId(UserType* output) {
    auto* pointer = data_->media_route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_SendRouteMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_SendRouteMessage_ResponseParamsDataView {
 public:
  MediaRouteProvider_SendRouteMessage_ResponseParamsDataView() {}

  MediaRouteProvider_SendRouteMessage_ResponseParamsDataView(
      internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool sent() const {
    return data_->sent;
  }
 private:
  internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data* data_ = nullptr;
};

class MediaRouteProvider_SendRouteBinaryMessage_ParamsDataView {
 public:
  MediaRouteProvider_SendRouteBinaryMessage_ParamsDataView() {}

  MediaRouteProvider_SendRouteBinaryMessage_ParamsDataView(
      internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaRouteId(UserType* output) {
    auto* pointer = data_->media_route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_SendRouteBinaryMessage_ResponseParamsDataView {
 public:
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParamsDataView() {}

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParamsDataView(
      internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool sent() const {
    return data_->sent;
  }
 private:
  internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* data_ = nullptr;
};

class MediaRouteProvider_StartObservingMediaSinks_ParamsDataView {
 public:
  MediaRouteProvider_StartObservingMediaSinks_ParamsDataView() {}

  MediaRouteProvider_StartObservingMediaSinks_ParamsDataView(
      internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_StopObservingMediaSinks_ParamsDataView {
 public:
  MediaRouteProvider_StopObservingMediaSinks_ParamsDataView() {}

  MediaRouteProvider_StopObservingMediaSinks_ParamsDataView(
      internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_StartObservingMediaRoutes_ParamsDataView {
 public:
  MediaRouteProvider_StartObservingMediaRoutes_ParamsDataView() {}

  MediaRouteProvider_StartObservingMediaRoutes_ParamsDataView(
      internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_StopObservingMediaRoutes_ParamsDataView {
 public:
  MediaRouteProvider_StopObservingMediaRoutes_ParamsDataView() {}

  MediaRouteProvider_StopObservingMediaRoutes_ParamsDataView(
      internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_StartListeningForRouteMessages_ParamsDataView {
 public:
  MediaRouteProvider_StartListeningForRouteMessages_ParamsDataView() {}

  MediaRouteProvider_StartListeningForRouteMessages_ParamsDataView(
      internal::MediaRouteProvider_StartListeningForRouteMessages_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_StartListeningForRouteMessages_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_StopListeningForRouteMessages_ParamsDataView {
 public:
  MediaRouteProvider_StopListeningForRouteMessages_ParamsDataView() {}

  MediaRouteProvider_StopListeningForRouteMessages_ParamsDataView(
      internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_DetachRoute_ParamsDataView {
 public:
  MediaRouteProvider_DetachRoute_ParamsDataView() {}

  MediaRouteProvider_DetachRoute_ParamsDataView(
      internal::MediaRouteProvider_DetachRoute_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_DetachRoute_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_EnableMdnsDiscovery_ParamsDataView {
 public:
  MediaRouteProvider_EnableMdnsDiscovery_ParamsDataView() {}

  MediaRouteProvider_EnableMdnsDiscovery_ParamsDataView(
      internal::MediaRouteProvider_EnableMdnsDiscovery_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaRouteProvider_EnableMdnsDiscovery_Params_Data* data_ = nullptr;
};

class MediaRouteProvider_UpdateMediaSinks_ParamsDataView {
 public:
  MediaRouteProvider_UpdateMediaSinks_ParamsDataView() {}

  MediaRouteProvider_UpdateMediaSinks_ParamsDataView(
      internal::MediaRouteProvider_UpdateMediaSinks_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_UpdateMediaSinks_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_SearchSinks_ParamsDataView {
 public:
  MediaRouteProvider_SearchSinks_ParamsDataView() {}

  MediaRouteProvider_SearchSinks_ParamsDataView(
      internal::MediaRouteProvider_SearchSinks_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSinkId(UserType* output) {
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSearchCriteriaDataView(
      SinkSearchCriteriaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchCriteria(UserType* output) {
    auto* pointer = data_->search_criteria.Get();
    return mojo::internal::Deserialize<::media_router::mojom::SinkSearchCriteriaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_SearchSinks_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_SearchSinks_ResponseParamsDataView {
 public:
  MediaRouteProvider_SearchSinks_ResponseParamsDataView() {}

  MediaRouteProvider_SearchSinks_ResponseParamsDataView(
      internal::MediaRouteProvider_SearchSinks_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSinkId(UserType* output) {
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_SearchSinks_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_ProvideSinks_ParamsDataView {
 public:
  MediaRouteProvider_ProvideSinks_ParamsDataView() {}

  MediaRouteProvider_ProvideSinks_ParamsDataView(
      internal::MediaRouteProvider_ProvideSinks_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProviderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderName(UserType* output) {
    auto* pointer = data_->provider_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSinksDataView(
      mojo::ArrayDataView<MediaSinkDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSinks(UserType* output) {
    auto* pointer = data_->sinks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_router::mojom::MediaSinkDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouteProvider_ProvideSinks_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_CreateMediaRouteController_ParamsDataView {
 public:
  MediaRouteProvider_CreateMediaRouteController_ParamsDataView() {}

  MediaRouteProvider_CreateMediaRouteController_ParamsDataView(
      internal::MediaRouteProvider_CreateMediaRouteController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeMediaController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_router::mojom::MediaControllerRequestDataView>(
            &data_->media_controller, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_router::mojom::MediaStatusObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaRouteProvider_CreateMediaRouteController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouteProvider_CreateMediaRouteController_ResponseParamsDataView {
 public:
  MediaRouteProvider_CreateMediaRouteController_ResponseParamsDataView() {}

  MediaRouteProvider_CreateMediaRouteController_ResponseParamsDataView(
      internal::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data* data_ = nullptr;
};

class MediaRouter_RegisterMediaRouteProvider_ParamsDataView {
 public:
  MediaRouter_RegisterMediaRouteProvider_ParamsDataView() {}

  MediaRouter_RegisterMediaRouteProvider_ParamsDataView(
      internal::MediaRouter_RegisterMediaRouteProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderId(UserType* output) const {
    auto data_value = data_->provider_id;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteProvider_Id>(
        data_value, output);
  }

  MediaRouteProvider_Id provider_id() const {
    return static_cast<MediaRouteProvider_Id>(data_->provider_id);
  }
  template <typename UserType>
  UserType TakeMediaRouterProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_router::mojom::MediaRouteProviderPtrDataView>(
            &data_->media_router_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaRouter_RegisterMediaRouteProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_RegisterMediaRouteProvider_ResponseParamsDataView {
 public:
  MediaRouter_RegisterMediaRouteProvider_ResponseParamsDataView() {}

  MediaRouter_RegisterMediaRouteProvider_ResponseParamsDataView(
      internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetConfigDataView(
      MediaRouteProviderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteProviderConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnSinksReceived_ParamsDataView {
 public:
  MediaRouter_OnSinksReceived_ParamsDataView() {}

  MediaRouter_OnSinksReceived_ParamsDataView(
      internal::MediaRouter_OnSinksReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderId(UserType* output) const {
    auto data_value = data_->provider_id;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteProvider_Id>(
        data_value, output);
  }

  MediaRouteProvider_Id provider_id() const {
    return static_cast<MediaRouteProvider_Id>(data_->provider_id);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSinksDataView(
      mojo::ArrayDataView<MediaSinkDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSinks(UserType* output) {
    auto* pointer = data_->sinks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_router::mojom::MediaSinkDataView>>(
        pointer, output, context_);
  }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_OnSinksReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnIssue_ParamsDataView {
 public:
  MediaRouter_OnIssue_ParamsDataView() {}

  MediaRouter_OnIssue_ParamsDataView(
      internal::MediaRouter_OnIssue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIssueDataView(
      IssueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIssue(UserType* output) {
    auto* pointer = data_->issue.Get();
    return mojo::internal::Deserialize<::media_router::mojom::IssueDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_OnIssue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnRoutesUpdated_ParamsDataView {
 public:
  MediaRouter_OnRoutesUpdated_ParamsDataView() {}

  MediaRouter_OnRoutesUpdated_ParamsDataView(
      internal::MediaRouter_OnRoutesUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderId(UserType* output) const {
    auto data_value = data_->provider_id;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteProvider_Id>(
        data_value, output);
  }

  MediaRouteProvider_Id provider_id() const {
    return static_cast<MediaRouteProvider_Id>(data_->provider_id);
  }
  inline void GetRoutesDataView(
      mojo::ArrayDataView<MediaRouteDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoutes(UserType* output) {
    auto* pointer = data_->routes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_router::mojom::MediaRouteDataView>>(
        pointer, output, context_);
  }
  inline void GetMediaSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaSource(UserType* output) {
    auto* pointer = data_->media_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetJoinableRouteIdsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadJoinableRouteIds(UserType* output) {
    auto* pointer = data_->joinable_route_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_OnRoutesUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnSinkAvailabilityUpdated_ParamsDataView {
 public:
  MediaRouter_OnSinkAvailabilityUpdated_ParamsDataView() {}

  MediaRouter_OnSinkAvailabilityUpdated_ParamsDataView(
      internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderId(UserType* output) const {
    auto data_value = data_->provider_id;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouteProvider_Id>(
        data_value, output);
  }

  MediaRouteProvider_Id provider_id() const {
    return static_cast<MediaRouteProvider_Id>(data_->provider_id);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAvailability(UserType* output) const {
    auto data_value = data_->availability;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouter_SinkAvailability>(
        data_value, output);
  }

  MediaRouter_SinkAvailability availability() const {
    return static_cast<MediaRouter_SinkAvailability>(data_->availability);
  }
 private:
  internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data* data_ = nullptr;
};

class MediaRouter_OnPresentationConnectionStateChanged_ParamsDataView {
 public:
  MediaRouter_OnPresentationConnectionStateChanged_ParamsDataView() {}

  MediaRouter_OnPresentationConnectionStateChanged_ParamsDataView(
      internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouter_PresentationConnectionState>(
        data_value, output);
  }

  MediaRouter_PresentationConnectionState state() const {
    return static_cast<MediaRouter_PresentationConnectionState>(data_->state);
  }
 private:
  internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnPresentationConnectionClosed_ParamsDataView {
 public:
  MediaRouter_OnPresentationConnectionClosed_ParamsDataView() {}

  MediaRouter_OnPresentationConnectionClosed_ParamsDataView(
      internal::MediaRouter_OnPresentationConnectionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason>(
        data_value, output);
  }

  MediaRouter_PresentationConnectionCloseReason reason() const {
    return static_cast<MediaRouter_PresentationConnectionCloseReason>(data_->reason);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_OnPresentationConnectionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnRouteMessagesReceived_ParamsDataView {
 public:
  MediaRouter_OnRouteMessagesReceived_ParamsDataView() {}

  MediaRouter_OnRouteMessagesReceived_ParamsDataView(
      internal::MediaRouter_OnRouteMessagesReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRouteIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRouteId(UserType* output) {
    auto* pointer = data_->route_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessagesDataView(
      mojo::ArrayDataView<RouteMessageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessages(UserType* output) {
    auto* pointer = data_->messages.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_router::mojom::RouteMessageDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_OnRouteMessagesReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_OnMediaRemoterCreated_ParamsDataView {
 public:
  MediaRouter_OnMediaRemoterCreated_ParamsDataView() {}

  MediaRouter_OnMediaRemoterCreated_ParamsDataView(
      internal::MediaRouter_OnMediaRemoterCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  template <typename UserType>
  UserType TakeRemoter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::MirrorServiceRemoterPtrDataView>(
            &data_->remoter, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRemotingSource() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::MirrorServiceRemotingSourceRequestDataView>(
            &data_->remoting_source, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaRouter_OnMediaRemoterCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaRouter_GetMediaSinkServiceStatus_ParamsDataView {
 public:
  MediaRouter_GetMediaSinkServiceStatus_ParamsDataView() {}

  MediaRouter_GetMediaSinkServiceStatus_ParamsDataView(
      internal::MediaRouter_GetMediaSinkServiceStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaRouter_GetMediaSinkServiceStatus_Params_Data* data_ = nullptr;
};

class MediaRouter_GetMediaSinkServiceStatus_ResponseParamsDataView {
 public:
  MediaRouter_GetMediaSinkServiceStatus_ResponseParamsDataView() {}

  MediaRouter_GetMediaSinkServiceStatus_ResponseParamsDataView(
      internal::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) {
    auto* pointer = data_->status.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSinkExtraDataDataView {
 public:
  using Tag = internal::MediaSinkExtraData_Data::MediaSinkExtraData_Tag;

  MediaSinkExtraDataDataView() {}

  MediaSinkExtraDataDataView(
      internal::MediaSinkExtraData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_dial_media_sink() const { return data_->tag == Tag::DIAL_MEDIA_SINK; }
  inline void GetDialMediaSinkDataView(
      DialMediaSinkDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDialMediaSink(UserType* output) {
    DCHECK(is_dial_media_sink());
    return mojo::internal::Deserialize<::media_router::mojom::DialMediaSinkDataView>(
        data_->data.f_dial_media_sink.Get(), output, context_);
  }
  bool is_cast_media_sink() const { return data_->tag == Tag::CAST_MEDIA_SINK; }
  inline void GetCastMediaSinkDataView(
      CastMediaSinkDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCastMediaSink(UserType* output) {
    DCHECK(is_cast_media_sink());
    return mojo::internal::Deserialize<::media_router::mojom::CastMediaSinkDataView>(
        data_->data.f_cast_media_sink.Get(), output, context_);
  }

 private:
  internal::MediaSinkExtraData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media_router

namespace std {

template <>
struct hash<::media_router::mojom::SinkIconType>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::SinkIconType> {};

template <>
struct hash<::media_router::mojom::RouteControllerType>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::RouteControllerType> {};

template <>
struct hash<::media_router::mojom::RouteRequestResultCode>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::RouteRequestResultCode> {};

template <>
struct hash<::media_router::mojom::Issue_Severity>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::Issue_Severity> {};

template <>
struct hash<::media_router::mojom::Issue_ActionType>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::Issue_ActionType> {};

template <>
struct hash<::media_router::mojom::RouteMessage_Type>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::RouteMessage_Type> {};

template <>
struct hash<::media_router::mojom::MediaRouteProvider_Id>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::MediaRouteProvider_Id> {};

template <>
struct hash<::media_router::mojom::MediaRouter_SinkAvailability>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::MediaRouter_SinkAvailability> {};

template <>
struct hash<::media_router::mojom::MediaRouter_PresentationConnectionState>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::MediaRouter_PresentationConnectionState> {};

template <>
struct hash<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media_router::mojom::SinkIconType, ::media_router::mojom::SinkIconType> {
  static ::media_router::mojom::SinkIconType ToMojom(::media_router::mojom::SinkIconType input) { return input; }
  static bool FromMojom(::media_router::mojom::SinkIconType input, ::media_router::mojom::SinkIconType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::SinkIconType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::SinkIconType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::SinkIconType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::RouteControllerType, ::media_router::mojom::RouteControllerType> {
  static ::media_router::mojom::RouteControllerType ToMojom(::media_router::mojom::RouteControllerType input) { return input; }
  static bool FromMojom(::media_router::mojom::RouteControllerType input, ::media_router::mojom::RouteControllerType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::RouteControllerType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::RouteControllerType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::RouteControllerType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::RouteRequestResultCode, ::media_router::mojom::RouteRequestResultCode> {
  static ::media_router::mojom::RouteRequestResultCode ToMojom(::media_router::mojom::RouteRequestResultCode input) { return input; }
  static bool FromMojom(::media_router::mojom::RouteRequestResultCode input, ::media_router::mojom::RouteRequestResultCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::RouteRequestResultCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::RouteRequestResultCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::RouteRequestResultCode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::Issue_Severity, ::media_router::mojom::Issue_Severity> {
  static ::media_router::mojom::Issue_Severity ToMojom(::media_router::mojom::Issue_Severity input) { return input; }
  static bool FromMojom(::media_router::mojom::Issue_Severity input, ::media_router::mojom::Issue_Severity* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::Issue_Severity, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::Issue_Severity, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::Issue_Severity>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::Issue_ActionType, ::media_router::mojom::Issue_ActionType> {
  static ::media_router::mojom::Issue_ActionType ToMojom(::media_router::mojom::Issue_ActionType input) { return input; }
  static bool FromMojom(::media_router::mojom::Issue_ActionType input, ::media_router::mojom::Issue_ActionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::Issue_ActionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::Issue_ActionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::Issue_ActionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::RouteMessage_Type, ::media_router::mojom::RouteMessage_Type> {
  static ::media_router::mojom::RouteMessage_Type ToMojom(::media_router::mojom::RouteMessage_Type input) { return input; }
  static bool FromMojom(::media_router::mojom::RouteMessage_Type input, ::media_router::mojom::RouteMessage_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::RouteMessage_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::RouteMessage_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::RouteMessage_Type>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::MediaRouteProvider_Id, ::media_router::mojom::MediaRouteProvider_Id> {
  static ::media_router::mojom::MediaRouteProvider_Id ToMojom(::media_router::mojom::MediaRouteProvider_Id input) { return input; }
  static bool FromMojom(::media_router::mojom::MediaRouteProvider_Id input, ::media_router::mojom::MediaRouteProvider_Id* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaRouteProvider_Id, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::MediaRouteProvider_Id, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::MediaRouteProvider_Id>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::MediaRouter_SinkAvailability, ::media_router::mojom::MediaRouter_SinkAvailability> {
  static ::media_router::mojom::MediaRouter_SinkAvailability ToMojom(::media_router::mojom::MediaRouter_SinkAvailability input) { return input; }
  static bool FromMojom(::media_router::mojom::MediaRouter_SinkAvailability input, ::media_router::mojom::MediaRouter_SinkAvailability* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaRouter_SinkAvailability, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::MediaRouter_SinkAvailability, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::MediaRouter_SinkAvailability>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::MediaRouter_PresentationConnectionState, ::media_router::mojom::MediaRouter_PresentationConnectionState> {
  static ::media_router::mojom::MediaRouter_PresentationConnectionState ToMojom(::media_router::mojom::MediaRouter_PresentationConnectionState input) { return input; }
  static bool FromMojom(::media_router::mojom::MediaRouter_PresentationConnectionState input, ::media_router::mojom::MediaRouter_PresentationConnectionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaRouter_PresentationConnectionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::MediaRouter_PresentationConnectionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::MediaRouter_PresentationConnectionState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason, ::media_router::mojom::MediaRouter_PresentationConnectionCloseReason> {
  static ::media_router::mojom::MediaRouter_PresentationConnectionCloseReason ToMojom(::media_router::mojom::MediaRouter_PresentationConnectionCloseReason input) { return input; }
  static bool FromMojom(::media_router::mojom::MediaRouter_PresentationConnectionCloseReason input, ::media_router::mojom::MediaRouter_PresentationConnectionCloseReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::MediaRouter_PresentationConnectionCloseReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaSinkDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::MediaSinkDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::MediaSink_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::sink_id, input, custom_context)) in_sink_id = CallWithContext(Traits::sink_id, input, custom_context);
    typename decltype((*output)->sink_id)::BaseType::BufferWriter
        sink_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sink_id, buffer, &sink_id_writer, context);
    (*output)->sink_id.Set(
        sink_id_writer.is_null() ? nullptr : sink_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sink_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sink_id in MediaSink struct");
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in MediaSink struct");
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    decltype(CallWithContext(Traits::domain, input, custom_context)) in_domain = CallWithContext(Traits::domain, input, custom_context);
    typename decltype((*output)->domain)::BaseType::BufferWriter
        domain_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_domain, buffer, &domain_writer, context);
    (*output)->domain.Set(
        domain_writer.is_null() ? nullptr : domain_writer.data());
    mojo::internal::Serialize<::media_router::mojom::SinkIconType>(
        CallWithContext(Traits::icon_type, input, custom_context), &(*output)->icon_type);
    mojo::internal::Serialize<::media_router::mojom::MediaRouteProvider_Id>(
        CallWithContext(Traits::provider_id, input, custom_context), &(*output)->provider_id);
    decltype(CallWithContext(Traits::extra_data, input, custom_context)) in_extra_data = CallWithContext(Traits::extra_data, input, custom_context);
    typename decltype((*output)->extra_data)::BufferWriter extra_data_writer;
    extra_data_writer.AllocateInline(buffer, &(*output)->extra_data);
    mojo::internal::Serialize<::media_router::mojom::MediaSinkExtraDataDataView>(
        in_extra_data, buffer, &extra_data_writer, true, context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::MediaSink_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::MediaSinkDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::DialMediaSinkDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::DialMediaSinkDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::DialMediaSink_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::ip_address, input, custom_context)) in_ip_address = CallWithContext(Traits::ip_address, input, custom_context);
    typename decltype((*output)->ip_address)::BaseType::BufferWriter
        ip_address_writer;
    mojo::internal::Serialize<::net::interfaces::IPAddressDataView>(
        in_ip_address, buffer, &ip_address_writer, context);
    (*output)->ip_address.Set(
        ip_address_writer.is_null() ? nullptr : ip_address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ip_address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ip_address in DialMediaSink struct");
    decltype(CallWithContext(Traits::model_name, input, custom_context)) in_model_name = CallWithContext(Traits::model_name, input, custom_context);
    typename decltype((*output)->model_name)::BaseType::BufferWriter
        model_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_model_name, buffer, &model_name_writer, context);
    (*output)->model_name.Set(
        model_name_writer.is_null() ? nullptr : model_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->model_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null model_name in DialMediaSink struct");
    decltype(CallWithContext(Traits::app_url, input, custom_context)) in_app_url = CallWithContext(Traits::app_url, input, custom_context);
    typename decltype((*output)->app_url)::BaseType::BufferWriter
        app_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_app_url, buffer, &app_url_writer, context);
    (*output)->app_url.Set(
        app_url_writer.is_null() ? nullptr : app_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->app_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null app_url in DialMediaSink struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::DialMediaSink_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::DialMediaSinkDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::CastMediaSinkDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::CastMediaSinkDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::CastMediaSink_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::ip_endpoint, input, custom_context)) in_ip_endpoint = CallWithContext(Traits::ip_endpoint, input, custom_context);
    typename decltype((*output)->ip_endpoint)::BaseType::BufferWriter
        ip_endpoint_writer;
    mojo::internal::Serialize<::net::interfaces::IPEndPointDataView>(
        in_ip_endpoint, buffer, &ip_endpoint_writer, context);
    (*output)->ip_endpoint.Set(
        ip_endpoint_writer.is_null() ? nullptr : ip_endpoint_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ip_endpoint.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ip_endpoint in CastMediaSink struct");
    decltype(CallWithContext(Traits::model_name, input, custom_context)) in_model_name = CallWithContext(Traits::model_name, input, custom_context);
    typename decltype((*output)->model_name)::BaseType::BufferWriter
        model_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_model_name, buffer, &model_name_writer, context);
    (*output)->model_name.Set(
        model_name_writer.is_null() ? nullptr : model_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->model_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null model_name in CastMediaSink struct");
    (*output)->capabilities = CallWithContext(Traits::capabilities, input, custom_context);
    (*output)->cast_channel_id = CallWithContext(Traits::cast_channel_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::CastMediaSink_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::CastMediaSinkDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaRouteDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::MediaRouteDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::MediaRoute_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::media_route_id, input, custom_context)) in_media_route_id = CallWithContext(Traits::media_route_id, input, custom_context);
    typename decltype((*output)->media_route_id)::BaseType::BufferWriter
        media_route_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_media_route_id, buffer, &media_route_id_writer, context);
    (*output)->media_route_id.Set(
        media_route_id_writer.is_null() ? nullptr : media_route_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->media_route_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null media_route_id in MediaRoute struct");
    decltype(CallWithContext(Traits::presentation_id, input, custom_context)) in_presentation_id = CallWithContext(Traits::presentation_id, input, custom_context);
    typename decltype((*output)->presentation_id)::BaseType::BufferWriter
        presentation_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_presentation_id, buffer, &presentation_id_writer, context);
    (*output)->presentation_id.Set(
        presentation_id_writer.is_null() ? nullptr : presentation_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->presentation_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null presentation_id in MediaRoute struct");
    decltype(CallWithContext(Traits::media_source, input, custom_context)) in_media_source = CallWithContext(Traits::media_source, input, custom_context);
    typename decltype((*output)->media_source)::BaseType::BufferWriter
        media_source_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_media_source, buffer, &media_source_writer, context);
    (*output)->media_source.Set(
        media_source_writer.is_null() ? nullptr : media_source_writer.data());
    decltype(CallWithContext(Traits::media_sink_id, input, custom_context)) in_media_sink_id = CallWithContext(Traits::media_sink_id, input, custom_context);
    typename decltype((*output)->media_sink_id)::BaseType::BufferWriter
        media_sink_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_media_sink_id, buffer, &media_sink_id_writer, context);
    (*output)->media_sink_id.Set(
        media_sink_id_writer.is_null() ? nullptr : media_sink_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->media_sink_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null media_sink_id in MediaRoute struct");
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in MediaRoute struct");
    (*output)->is_local = CallWithContext(Traits::is_local, input, custom_context);
    mojo::internal::Serialize<::media_router::mojom::RouteControllerType>(
        CallWithContext(Traits::controller_type, input, custom_context), &(*output)->controller_type);
    (*output)->for_display = CallWithContext(Traits::for_display, input, custom_context);
    (*output)->is_incognito = CallWithContext(Traits::is_incognito, input, custom_context);
    (*output)->is_local_presentation = CallWithContext(Traits::is_local_presentation, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::MediaRoute_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::MediaRouteDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::IssueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::IssueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::Issue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::route_id, input, custom_context)) in_route_id = CallWithContext(Traits::route_id, input, custom_context);
    typename decltype((*output)->route_id)::BaseType::BufferWriter
        route_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_route_id, buffer, &route_id_writer, context);
    (*output)->route_id.Set(
        route_id_writer.is_null() ? nullptr : route_id_writer.data());
    mojo::internal::Serialize<::media_router::mojom::Issue_Severity>(
        CallWithContext(Traits::severity, input, custom_context), &(*output)->severity);
    (*output)->is_blocking = CallWithContext(Traits::is_blocking, input, custom_context);
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in Issue struct");
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    mojo::internal::Serialize<::media_router::mojom::Issue_ActionType>(
        CallWithContext(Traits::default_action, input, custom_context), &(*output)->default_action);
    decltype(CallWithContext(Traits::secondary_actions, input, custom_context)) in_secondary_actions = CallWithContext(Traits::secondary_actions, input, custom_context);
    typename decltype((*output)->secondary_actions)::BaseType::BufferWriter
        secondary_actions_writer;
    const mojo::internal::ContainerValidateParams secondary_actions_validate_params(
        0, ::media_router::mojom::internal::Issue_ActionType_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media_router::mojom::Issue_ActionType>>(
        in_secondary_actions, buffer, &secondary_actions_writer, &secondary_actions_validate_params,
        context);
    (*output)->secondary_actions.Set(
        secondary_actions_writer.is_null() ? nullptr : secondary_actions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->secondary_actions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null secondary_actions in Issue struct");
    (*output)->help_page_id = CallWithContext(Traits::help_page_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::Issue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::IssueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::RouteMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::RouteMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::RouteMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media_router::mojom::RouteMessage_Type>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::RouteMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::RouteMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::SinkSearchCriteriaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::SinkSearchCriteriaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::SinkSearchCriteria_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::input, input, custom_context)) in_input = CallWithContext(Traits::input, input, custom_context);
    typename decltype((*output)->input)::BaseType::BufferWriter
        input_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_input, buffer, &input_writer, context);
    (*output)->input.Set(
        input_writer.is_null() ? nullptr : input_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->input.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input in SinkSearchCriteria struct");
    decltype(CallWithContext(Traits::domain, input, custom_context)) in_domain = CallWithContext(Traits::domain, input, custom_context);
    typename decltype((*output)->domain)::BaseType::BufferWriter
        domain_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_domain, buffer, &domain_writer, context);
    (*output)->domain.Set(
        domain_writer.is_null() ? nullptr : domain_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domain.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domain in SinkSearchCriteria struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::SinkSearchCriteria_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::SinkSearchCriteriaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaRouteProviderConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::MediaRouteProviderConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::MediaRouteProviderConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->enable_dial_discovery = CallWithContext(Traits::enable_dial_discovery, input, custom_context);
    (*output)->enable_cast_discovery = CallWithContext(Traits::enable_cast_discovery, input, custom_context);
    (*output)->enable_dial_sink_query = CallWithContext(Traits::enable_dial_sink_query, input, custom_context);
    (*output)->enable_cast_sink_query = CallWithContext(Traits::enable_cast_sink_query, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::MediaRouteProviderConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::MediaRouteProviderConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaSinkExtraDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::media_router::mojom::MediaSinkExtraDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::MediaSinkExtraData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::media_router::mojom::internal::MediaSinkExtraData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::media_router::mojom::MediaSinkExtraDataDataView::Tag::DIAL_MEDIA_SINK: {
        decltype(CallWithContext(Traits::dial_media_sink, input, custom_context))
            in_dial_media_sink = CallWithContext(Traits::dial_media_sink, input,
                                          custom_context);
        typename decltype(result->data.f_dial_media_sink)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media_router::mojom::DialMediaSinkDataView>(
            in_dial_media_sink, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null dial_media_sink in MediaSinkExtraData union");
        result->data.f_dial_media_sink.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::media_router::mojom::MediaSinkExtraDataDataView::Tag::CAST_MEDIA_SINK: {
        decltype(CallWithContext(Traits::cast_media_sink, input, custom_context))
            in_cast_media_sink = CallWithContext(Traits::cast_media_sink, input,
                                          custom_context);
        typename decltype(result->data.f_cast_media_sink)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media_router::mojom::CastMediaSinkDataView>(
            in_cast_media_sink, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null cast_media_sink in MediaSinkExtraData union");
        result->data.f_cast_media_sink.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::MediaSinkExtraData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::MediaSinkExtraDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media_router {
namespace mojom {

inline void MediaSinkDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaSinkDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaSinkDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaSinkDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaSinkDataView::GetExtraDataDataView(
    MediaSinkExtraDataDataView* output) {
  auto pointer = &data_->extra_data;
  *output = MediaSinkExtraDataDataView(pointer, context_);
}


inline void DialMediaSinkDataView::GetIpAddressDataView(
    ::net::interfaces::IPAddressDataView* output) {
  auto pointer = data_->ip_address.Get();
  *output = ::net::interfaces::IPAddressDataView(pointer, context_);
}
inline void DialMediaSinkDataView::GetModelNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->model_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DialMediaSinkDataView::GetAppUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->app_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void CastMediaSinkDataView::GetIpEndpointDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->ip_endpoint.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void CastMediaSinkDataView::GetModelNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->model_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteDataView::GetMediaRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteDataView::GetMediaSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_sink_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void IssueDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IssueDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IssueDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IssueDataView::GetSecondaryActionsDataView(
    mojo::ArrayDataView<Issue_ActionType>* output) {
  auto pointer = data_->secondary_actions.Get();
  *output = mojo::ArrayDataView<Issue_ActionType>(pointer, context_);
}


inline void RouteMessageDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RouteMessageDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void SinkSearchCriteriaDataView::GetInputDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->input.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SinkSearchCriteriaDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaRouteProvider_CreateRoute_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_CreateRoute_ParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_CreateRoute_ParamsDataView::GetOriginalPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->original_presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_CreateRoute_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void MediaRouteProvider_CreateRoute_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaRouteProvider_CreateRoute_ResponseParamsDataView::GetRouteDataView(
    MediaRouteDataView* output) {
  auto pointer = data_->route.Get();
  *output = MediaRouteDataView(pointer, context_);
}
inline void MediaRouteProvider_CreateRoute_ResponseParamsDataView::GetErrorTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_JoinRoute_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_JoinRoute_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_JoinRoute_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void MediaRouteProvider_JoinRoute_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaRouteProvider_JoinRoute_ResponseParamsDataView::GetRouteDataView(
    MediaRouteDataView* output) {
  auto pointer = data_->route.Get();
  *output = MediaRouteDataView(pointer, context_);
}
inline void MediaRouteProvider_JoinRoute_ResponseParamsDataView::GetErrorTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView::GetPresentationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->presentation_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void MediaRouteProvider_ConnectRouteByRouteId_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaRouteProvider_ConnectRouteByRouteId_ResponseParamsDataView::GetRouteDataView(
    MediaRouteDataView* output) {
  auto pointer = data_->route.Get();
  *output = MediaRouteDataView(pointer, context_);
}
inline void MediaRouteProvider_ConnectRouteByRouteId_ResponseParamsDataView::GetErrorTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_TerminateRoute_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_TerminateRoute_ResponseParamsDataView::GetErrorTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_SendRouteMessage_ParamsDataView::GetMediaRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_SendRouteMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaRouteProvider_SendRouteBinaryMessage_ParamsDataView::GetMediaRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_SendRouteBinaryMessage_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void MediaRouteProvider_StartObservingMediaSinks_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_StopObservingMediaSinks_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_StartObservingMediaRoutes_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_StopObservingMediaRoutes_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_StartListeningForRouteMessages_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_StopListeningForRouteMessages_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_DetachRoute_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaRouteProvider_UpdateMediaSinks_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_SearchSinks_ParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_SearchSinks_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_SearchSinks_ParamsDataView::GetSearchCriteriaDataView(
    SinkSearchCriteriaDataView* output) {
  auto pointer = data_->search_criteria.Get();
  *output = SinkSearchCriteriaDataView(pointer, context_);
}


inline void MediaRouteProvider_SearchSinks_ResponseParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouteProvider_ProvideSinks_ParamsDataView::GetProviderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->provider_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouteProvider_ProvideSinks_ParamsDataView::GetSinksDataView(
    mojo::ArrayDataView<MediaSinkDataView>* output) {
  auto pointer = data_->sinks.Get();
  *output = mojo::ArrayDataView<MediaSinkDataView>(pointer, context_);
}


inline void MediaRouteProvider_CreateMediaRouteController_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void MediaRouter_RegisterMediaRouteProvider_ResponseParamsDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouter_RegisterMediaRouteProvider_ResponseParamsDataView::GetConfigDataView(
    MediaRouteProviderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = MediaRouteProviderConfigDataView(pointer, context_);
}


inline void MediaRouter_OnSinksReceived_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouter_OnSinksReceived_ParamsDataView::GetSinksDataView(
    mojo::ArrayDataView<MediaSinkDataView>* output) {
  auto pointer = data_->sinks.Get();
  *output = mojo::ArrayDataView<MediaSinkDataView>(pointer, context_);
}
inline void MediaRouter_OnSinksReceived_ParamsDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}


inline void MediaRouter_OnIssue_ParamsDataView::GetIssueDataView(
    IssueDataView* output) {
  auto pointer = data_->issue.Get();
  *output = IssueDataView(pointer, context_);
}


inline void MediaRouter_OnRoutesUpdated_ParamsDataView::GetRoutesDataView(
    mojo::ArrayDataView<MediaRouteDataView>* output) {
  auto pointer = data_->routes.Get();
  *output = mojo::ArrayDataView<MediaRouteDataView>(pointer, context_);
}
inline void MediaRouter_OnRoutesUpdated_ParamsDataView::GetMediaSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouter_OnRoutesUpdated_ParamsDataView::GetJoinableRouteIdsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->joinable_route_ids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void MediaRouter_OnPresentationConnectionStateChanged_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouter_OnPresentationConnectionClosed_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouter_OnPresentationConnectionClosed_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaRouter_OnRouteMessagesReceived_ParamsDataView::GetRouteIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->route_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaRouter_OnRouteMessagesReceived_ParamsDataView::GetMessagesDataView(
    mojo::ArrayDataView<RouteMessageDataView>* output) {
  auto pointer = data_->messages.Get();
  *output = mojo::ArrayDataView<RouteMessageDataView>(pointer, context_);
}






inline void MediaRouter_GetMediaSinkServiceStatus_ResponseParamsDataView::GetStatusDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->status.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaSinkExtraDataDataView::GetDialMediaSinkDataView(
    DialMediaSinkDataView* output) {
  DCHECK(is_dial_media_sink());
  *output = DialMediaSinkDataView(data_->data.f_dial_media_sink.Get(), context_);
}
inline void MediaSinkExtraDataDataView::GetCastMediaSinkDataView(
    CastMediaSinkDataView* output) {
  DCHECK(is_cast_media_sink());
  *output = CastMediaSinkDataView(data_->data.f_cast_media_sink.Get(), context_);
}


}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_H_
