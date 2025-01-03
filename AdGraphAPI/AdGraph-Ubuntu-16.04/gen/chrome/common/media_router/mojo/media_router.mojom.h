// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "chrome/common/media_router/mojo/media_router.mojom-shared.h"
#include "chrome/common/media_router/mojo/media_controller.mojom.h"
#include "chrome/common/media_router/mojo/media_status.mojom.h"
#include "media/mojo/interfaces/mirror_service_remoting.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "net/interfaces/ip_address.mojom.h"
#include "net/interfaces/ip_endpoint.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "chrome/common/media_router/discovery/media_sink_internal.h"
#include "chrome/common/media_router/issue.h"
#include "chrome/common/media_router/media_route.h"
#include "chrome/common/media_router/media_route_provider_helper.h"
#include "chrome/common/media_router/media_sink.h"
#include "chrome/common/media_router/media_source.h"
#include "chrome/common/media_router/route_request_result.h"
#include "content/public/common/presentation_connection_message.h"


namespace media_router {
namespace mojom {
class MediaRouteProvider;
using MediaRouteProviderPtr = mojo::InterfacePtr<MediaRouteProvider>;
using MediaRouteProviderPtrInfo = mojo::InterfacePtrInfo<MediaRouteProvider>;
using ThreadSafeMediaRouteProviderPtr =
    mojo::ThreadSafeInterfacePtr<MediaRouteProvider>;
using MediaRouteProviderRequest = mojo::InterfaceRequest<MediaRouteProvider>;
using MediaRouteProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaRouteProvider>;
using ThreadSafeMediaRouteProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaRouteProvider>;
using MediaRouteProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaRouteProvider>;
using MediaRouteProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaRouteProvider>;

class MediaRouter;
using MediaRouterPtr = mojo::InterfacePtr<MediaRouter>;
using MediaRouterPtrInfo = mojo::InterfacePtrInfo<MediaRouter>;
using ThreadSafeMediaRouterPtr =
    mojo::ThreadSafeInterfacePtr<MediaRouter>;
using MediaRouterRequest = mojo::InterfaceRequest<MediaRouter>;
using MediaRouterAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaRouter>;
using ThreadSafeMediaRouterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaRouter>;
using MediaRouterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaRouter>;
using MediaRouterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaRouter>;

class MediaSink;
using MediaSinkPtr = mojo::StructPtr<MediaSink>;

class DialMediaSink;
using DialMediaSinkPtr = mojo::StructPtr<DialMediaSink>;

class CastMediaSink;
using CastMediaSinkPtr = mojo::StructPtr<CastMediaSink>;

class MediaRoute;
using MediaRoutePtr = mojo::StructPtr<MediaRoute>;

class Issue;
using IssuePtr = mojo::StructPtr<Issue>;

class RouteMessage;
using RouteMessagePtr = mojo::StructPtr<RouteMessage>;

class SinkSearchCriteria;
using SinkSearchCriteriaPtr = mojo::InlinedStructPtr<SinkSearchCriteria>;

class MediaRouteProviderConfig;
using MediaRouteProviderConfigPtr = mojo::InlinedStructPtr<MediaRouteProviderConfig>;

class MediaSinkExtraData;

typedef mojo::StructPtr<MediaSinkExtraData> MediaSinkExtraDataPtr;


class MediaRouteProviderProxy;

template <typename ImplRefTraits>
class MediaRouteProviderStub;

class MediaRouteProviderRequestValidator;
class MediaRouteProviderResponseValidator;

class  MediaRouteProvider
    : public MediaRouteProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaRouteProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaRouteProviderStub<ImplRefTraits>;

  using RequestValidator_ = MediaRouteProviderRequestValidator;
  using ResponseValidator_ = MediaRouteProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateRouteMinVersion = 0,
    kJoinRouteMinVersion = 0,
    kConnectRouteByRouteIdMinVersion = 0,
    kTerminateRouteMinVersion = 0,
    kSendRouteMessageMinVersion = 0,
    kSendRouteBinaryMessageMinVersion = 0,
    kStartObservingMediaSinksMinVersion = 0,
    kStopObservingMediaSinksMinVersion = 0,
    kStartObservingMediaRoutesMinVersion = 0,
    kStopObservingMediaRoutesMinVersion = 0,
    kStartListeningForRouteMessagesMinVersion = 0,
    kStopListeningForRouteMessagesMinVersion = 0,
    kDetachRouteMinVersion = 0,
    kEnableMdnsDiscoveryMinVersion = 0,
    kUpdateMediaSinksMinVersion = 0,
    kSearchSinksMinVersion = 0,
    kProvideSinksMinVersion = 0,
    kCreateMediaRouteControllerMinVersion = 0,
  };
  using Id = MediaRouteProvider_Id;
  virtual ~MediaRouteProvider() {}


  using CreateRouteCallback = base::OnceCallback<void(const base::Optional<media_router::MediaRoute>&, const base::Optional<std::string>&, media_router::RouteRequestResult::ResultCode)>;
  virtual void CreateRoute(const std::string& media_source, const std::string& sink_id, const std::string& original_presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, CreateRouteCallback callback) = 0;


  using JoinRouteCallback = base::OnceCallback<void(const base::Optional<media_router::MediaRoute>&, const base::Optional<std::string>&, media_router::RouteRequestResult::ResultCode)>;
  virtual void JoinRoute(const std::string& media_source, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, JoinRouteCallback callback) = 0;


  using ConnectRouteByRouteIdCallback = base::OnceCallback<void(const base::Optional<media_router::MediaRoute>&, const base::Optional<std::string>&, media_router::RouteRequestResult::ResultCode)>;
  virtual void ConnectRouteByRouteId(const std::string& media_source, const std::string& route_id, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, ConnectRouteByRouteIdCallback callback) = 0;


  using TerminateRouteCallback = base::OnceCallback<void(const base::Optional<std::string>&, media_router::RouteRequestResult::ResultCode)>;
  virtual void TerminateRoute(const std::string& route_id, TerminateRouteCallback callback) = 0;


  using SendRouteMessageCallback = base::OnceCallback<void(bool)>;
  virtual void SendRouteMessage(const std::string& media_route_id, const std::string& message, SendRouteMessageCallback callback) = 0;


  using SendRouteBinaryMessageCallback = base::OnceCallback<void(bool)>;
  virtual void SendRouteBinaryMessage(const std::string& media_route_id, const std::vector<uint8_t>& data, SendRouteBinaryMessageCallback callback) = 0;

  virtual void StartObservingMediaSinks(const std::string& media_source) = 0;

  virtual void StopObservingMediaSinks(const std::string& media_source) = 0;

  virtual void StartObservingMediaRoutes(const std::string& media_source) = 0;

  virtual void StopObservingMediaRoutes(const std::string& media_source) = 0;

  virtual void StartListeningForRouteMessages(const std::string& route_id) = 0;

  virtual void StopListeningForRouteMessages(const std::string& route_id) = 0;

  virtual void DetachRoute(const std::string& route_id) = 0;

  virtual void EnableMdnsDiscovery() = 0;

  virtual void UpdateMediaSinks(const std::string& media_source) = 0;


  using SearchSinksCallback = base::OnceCallback<void(const std::string&)>;
  virtual void SearchSinks(const std::string& sink_id, const std::string& media_source, SinkSearchCriteriaPtr search_criteria, SearchSinksCallback callback) = 0;

  virtual void ProvideSinks(const std::string& provider_name, const std::vector<media_router::MediaSinkInternal>& sinks) = 0;


  using CreateMediaRouteControllerCallback = base::OnceCallback<void(bool)>;
  virtual void CreateMediaRouteController(const std::string& route_id, ::media_router::mojom::MediaControllerRequest media_controller, ::media_router::mojom::MediaStatusObserverPtr observer, CreateMediaRouteControllerCallback callback) = 0;
};
class  MediaRouteProviderInterceptorForTesting : public MediaRouteProvider {
  virtual MediaRouteProvider* GetForwardingInterface() = 0;
  void CreateRoute(const std::string& media_source, const std::string& sink_id, const std::string& original_presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, CreateRouteCallback callback) override;
  void JoinRoute(const std::string& media_source, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, JoinRouteCallback callback) override;
  void ConnectRouteByRouteId(const std::string& media_source, const std::string& route_id, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, ConnectRouteByRouteIdCallback callback) override;
  void TerminateRoute(const std::string& route_id, TerminateRouteCallback callback) override;
  void SendRouteMessage(const std::string& media_route_id, const std::string& message, SendRouteMessageCallback callback) override;
  void SendRouteBinaryMessage(const std::string& media_route_id, const std::vector<uint8_t>& data, SendRouteBinaryMessageCallback callback) override;
  void StartObservingMediaSinks(const std::string& media_source) override;
  void StopObservingMediaSinks(const std::string& media_source) override;
  void StartObservingMediaRoutes(const std::string& media_source) override;
  void StopObservingMediaRoutes(const std::string& media_source) override;
  void StartListeningForRouteMessages(const std::string& route_id) override;
  void StopListeningForRouteMessages(const std::string& route_id) override;
  void DetachRoute(const std::string& route_id) override;
  void EnableMdnsDiscovery() override;
  void UpdateMediaSinks(const std::string& media_source) override;
  void SearchSinks(const std::string& sink_id, const std::string& media_source, SinkSearchCriteriaPtr search_criteria, SearchSinksCallback callback) override;
  void ProvideSinks(const std::string& provider_name, const std::vector<media_router::MediaSinkInternal>& sinks) override;
  void CreateMediaRouteController(const std::string& route_id, ::media_router::mojom::MediaControllerRequest media_controller, ::media_router::mojom::MediaStatusObserverPtr observer, CreateMediaRouteControllerCallback callback) override;
};
class  MediaRouteProviderAsyncWaiter {
 public:
  explicit MediaRouteProviderAsyncWaiter(MediaRouteProvider* proxy);
  ~MediaRouteProviderAsyncWaiter();
  void CreateRoute(
      const std::string& media_source, const std::string& sink_id, const std::string& original_presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, base::Optional<media_router::MediaRoute>* out_route, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code);
  void JoinRoute(
      const std::string& media_source, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, base::Optional<media_router::MediaRoute>* out_route, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code);
  void ConnectRouteByRouteId(
      const std::string& media_source, const std::string& route_id, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, base::Optional<media_router::MediaRoute>* out_route, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code);
  void TerminateRoute(
      const std::string& route_id, base::Optional<std::string>* out_error_text, media_router::RouteRequestResult::ResultCode* out_result_code);
  void SendRouteMessage(
      const std::string& media_route_id, const std::string& message, bool* out_sent);
  void SendRouteBinaryMessage(
      const std::string& media_route_id, const std::vector<uint8_t>& data, bool* out_sent);
  void SearchSinks(
      const std::string& sink_id, const std::string& media_source, SinkSearchCriteriaPtr search_criteria, std::string* out_sink_id);
  void CreateMediaRouteController(
      const std::string& route_id, ::media_router::mojom::MediaControllerRequest media_controller, ::media_router::mojom::MediaStatusObserverPtr observer, bool* out_success);

 private:
  MediaRouteProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouteProviderAsyncWaiter);
};

class MediaRouterProxy;

template <typename ImplRefTraits>
class MediaRouterStub;

class MediaRouterRequestValidator;
class MediaRouterResponseValidator;

class  MediaRouter
    : public MediaRouterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaRouterProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaRouterStub<ImplRefTraits>;

  using RequestValidator_ = MediaRouterRequestValidator;
  using ResponseValidator_ = MediaRouterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMediaRouteProviderMinVersion = 0,
    kOnSinksReceivedMinVersion = 0,
    kOnIssueMinVersion = 0,
    kOnRoutesUpdatedMinVersion = 0,
    kOnSinkAvailabilityUpdatedMinVersion = 0,
    kOnPresentationConnectionStateChangedMinVersion = 0,
    kOnPresentationConnectionClosedMinVersion = 0,
    kOnRouteMessagesReceivedMinVersion = 0,
    kOnMediaRemoterCreatedMinVersion = 0,
    kGetMediaSinkServiceStatusMinVersion = 0,
  };
  using SinkAvailability = MediaRouter_SinkAvailability;
  using PresentationConnectionState = MediaRouter_PresentationConnectionState;
  using PresentationConnectionCloseReason = MediaRouter_PresentationConnectionCloseReason;
  virtual ~MediaRouter() {}


  using RegisterMediaRouteProviderCallback = base::OnceCallback<void(const std::string&, MediaRouteProviderConfigPtr)>;
  virtual void RegisterMediaRouteProvider(media_router::MediaRouteProviderId provider_id, MediaRouteProviderPtr media_router_provider, RegisterMediaRouteProviderCallback callback) = 0;

  virtual void OnSinksReceived(media_router::MediaRouteProviderId provider_id, const std::string& media_source, const std::vector<media_router::MediaSinkInternal>& sinks, const std::vector<url::Origin>& origins) = 0;

  virtual void OnIssue(const media_router::IssueInfo& issue) = 0;

  virtual void OnRoutesUpdated(media_router::MediaRouteProviderId provider_id, const std::vector<media_router::MediaRoute>& routes, const std::string& media_source, const std::vector<std::string>& joinable_route_ids) = 0;

  virtual void OnSinkAvailabilityUpdated(media_router::MediaRouteProviderId provider_id, MediaRouter::SinkAvailability availability) = 0;

  virtual void OnPresentationConnectionStateChanged(const std::string& route_id, MediaRouter::PresentationConnectionState state) = 0;

  virtual void OnPresentationConnectionClosed(const std::string& route_id, MediaRouter::PresentationConnectionCloseReason reason, const std::string& message) = 0;

  virtual void OnRouteMessagesReceived(const std::string& route_id, const std::vector<content::PresentationConnectionMessage>& messages) = 0;

  virtual void OnMediaRemoterCreated(int32_t tab_id, ::media::mojom::MirrorServiceRemoterPtr remoter, ::media::mojom::MirrorServiceRemotingSourceRequest remoting_source) = 0;


  using GetMediaSinkServiceStatusCallback = base::OnceCallback<void(const std::string&)>;
  virtual void GetMediaSinkServiceStatus(GetMediaSinkServiceStatusCallback callback) = 0;
};
class  MediaRouterInterceptorForTesting : public MediaRouter {
  virtual MediaRouter* GetForwardingInterface() = 0;
  void RegisterMediaRouteProvider(media_router::MediaRouteProviderId provider_id, MediaRouteProviderPtr media_router_provider, RegisterMediaRouteProviderCallback callback) override;
  void OnSinksReceived(media_router::MediaRouteProviderId provider_id, const std::string& media_source, const std::vector<media_router::MediaSinkInternal>& sinks, const std::vector<url::Origin>& origins) override;
  void OnIssue(const media_router::IssueInfo& issue) override;
  void OnRoutesUpdated(media_router::MediaRouteProviderId provider_id, const std::vector<media_router::MediaRoute>& routes, const std::string& media_source, const std::vector<std::string>& joinable_route_ids) override;
  void OnSinkAvailabilityUpdated(media_router::MediaRouteProviderId provider_id, MediaRouter::SinkAvailability availability) override;
  void OnPresentationConnectionStateChanged(const std::string& route_id, MediaRouter::PresentationConnectionState state) override;
  void OnPresentationConnectionClosed(const std::string& route_id, MediaRouter::PresentationConnectionCloseReason reason, const std::string& message) override;
  void OnRouteMessagesReceived(const std::string& route_id, const std::vector<content::PresentationConnectionMessage>& messages) override;
  void OnMediaRemoterCreated(int32_t tab_id, ::media::mojom::MirrorServiceRemoterPtr remoter, ::media::mojom::MirrorServiceRemotingSourceRequest remoting_source) override;
  void GetMediaSinkServiceStatus(GetMediaSinkServiceStatusCallback callback) override;
};
class  MediaRouterAsyncWaiter {
 public:
  explicit MediaRouterAsyncWaiter(MediaRouter* proxy);
  ~MediaRouterAsyncWaiter();
  void RegisterMediaRouteProvider(
      media_router::MediaRouteProviderId provider_id, MediaRouteProviderPtr media_router_provider, std::string* out_instance_id, MediaRouteProviderConfigPtr* out_config);
  void GetMediaSinkServiceStatus(
      std::string* out_status);

 private:
  MediaRouter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaRouterAsyncWaiter);
};

class  MediaRouteProviderProxy
    : public MediaRouteProvider {
 public:
  explicit MediaRouteProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateRoute(const std::string& media_source, const std::string& sink_id, const std::string& original_presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, CreateRouteCallback callback) final;
  void JoinRoute(const std::string& media_source, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, JoinRouteCallback callback) final;
  void ConnectRouteByRouteId(const std::string& media_source, const std::string& route_id, const std::string& presentation_id, const url::Origin& origin, int32_t tab_id, base::TimeDelta timeout, bool incognito, ConnectRouteByRouteIdCallback callback) final;
  void TerminateRoute(const std::string& route_id, TerminateRouteCallback callback) final;
  void SendRouteMessage(const std::string& media_route_id, const std::string& message, SendRouteMessageCallback callback) final;
  void SendRouteBinaryMessage(const std::string& media_route_id, const std::vector<uint8_t>& data, SendRouteBinaryMessageCallback callback) final;
  void StartObservingMediaSinks(const std::string& media_source) final;
  void StopObservingMediaSinks(const std::string& media_source) final;
  void StartObservingMediaRoutes(const std::string& media_source) final;
  void StopObservingMediaRoutes(const std::string& media_source) final;
  void StartListeningForRouteMessages(const std::string& route_id) final;
  void StopListeningForRouteMessages(const std::string& route_id) final;
  void DetachRoute(const std::string& route_id) final;
  void EnableMdnsDiscovery() final;
  void UpdateMediaSinks(const std::string& media_source) final;
  void SearchSinks(const std::string& sink_id, const std::string& media_source, SinkSearchCriteriaPtr search_criteria, SearchSinksCallback callback) final;
  void ProvideSinks(const std::string& provider_name, const std::vector<media_router::MediaSinkInternal>& sinks) final;
  void CreateMediaRouteController(const std::string& route_id, ::media_router::mojom::MediaControllerRequest media_controller, ::media_router::mojom::MediaStatusObserverPtr observer, CreateMediaRouteControllerCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaRouterProxy
    : public MediaRouter {
 public:
  explicit MediaRouterProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterMediaRouteProvider(media_router::MediaRouteProviderId provider_id, MediaRouteProviderPtr media_router_provider, RegisterMediaRouteProviderCallback callback) final;
  void OnSinksReceived(media_router::MediaRouteProviderId provider_id, const std::string& media_source, const std::vector<media_router::MediaSinkInternal>& sinks, const std::vector<url::Origin>& origins) final;
  void OnIssue(const media_router::IssueInfo& issue) final;
  void OnRoutesUpdated(media_router::MediaRouteProviderId provider_id, const std::vector<media_router::MediaRoute>& routes, const std::string& media_source, const std::vector<std::string>& joinable_route_ids) final;
  void OnSinkAvailabilityUpdated(media_router::MediaRouteProviderId provider_id, MediaRouter::SinkAvailability availability) final;
  void OnPresentationConnectionStateChanged(const std::string& route_id, MediaRouter::PresentationConnectionState state) final;
  void OnPresentationConnectionClosed(const std::string& route_id, MediaRouter::PresentationConnectionCloseReason reason, const std::string& message) final;
  void OnRouteMessagesReceived(const std::string& route_id, const std::vector<content::PresentationConnectionMessage>& messages) final;
  void OnMediaRemoterCreated(int32_t tab_id, ::media::mojom::MirrorServiceRemoterPtr remoter, ::media::mojom::MirrorServiceRemotingSourceRequest remoting_source) final;
  void GetMediaSinkServiceStatus(GetMediaSinkServiceStatusCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaRouteProviderStubDispatch {
 public:
  static bool Accept(MediaRouteProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaRouteProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaRouteProvider>>
class MediaRouteProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaRouteProviderStub() {}
  ~MediaRouteProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaRouteProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaRouteProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaRouterStubDispatch {
 public:
  static bool Accept(MediaRouter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaRouter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaRouter>>
class MediaRouterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaRouterStub() {}
  ~MediaRouterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaRouterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaRouterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaRouteProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaRouterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaRouteProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaRouterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  SinkSearchCriteria {
 public:
  using DataView = SinkSearchCriteriaDataView;
  using Data_ = internal::SinkSearchCriteria_Data;

  template <typename... Args>
  static SinkSearchCriteriaPtr New(Args&&... args) {
    return SinkSearchCriteriaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SinkSearchCriteriaPtr From(const U& u) {
    return mojo::TypeConverter<SinkSearchCriteriaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SinkSearchCriteria>::Convert(*this);
  }


  SinkSearchCriteria();

  SinkSearchCriteria(
      const std::string& input,
      const std::string& domain);

  ~SinkSearchCriteria();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SinkSearchCriteriaPtr>
  SinkSearchCriteriaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SinkSearchCriteria>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SinkSearchCriteria::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SinkSearchCriteria::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SinkSearchCriteria_UnserializedMessageContext<
            UserType, SinkSearchCriteria::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SinkSearchCriteria::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SinkSearchCriteria::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SinkSearchCriteria_UnserializedMessageContext<
            UserType, SinkSearchCriteria::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SinkSearchCriteria::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string input;
  std::string domain;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  MediaRouteProviderConfig {
 public:
  using DataView = MediaRouteProviderConfigDataView;
  using Data_ = internal::MediaRouteProviderConfig_Data;

  template <typename... Args>
  static MediaRouteProviderConfigPtr New(Args&&... args) {
    return MediaRouteProviderConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaRouteProviderConfigPtr From(const U& u) {
    return mojo::TypeConverter<MediaRouteProviderConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaRouteProviderConfig>::Convert(*this);
  }


  MediaRouteProviderConfig();

  MediaRouteProviderConfig(
      bool enable_dial_discovery,
      bool enable_cast_discovery,
      bool enable_dial_sink_query,
      bool enable_cast_sink_query);

  ~MediaRouteProviderConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaRouteProviderConfigPtr>
  MediaRouteProviderConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaRouteProviderConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaRouteProviderConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaRouteProviderConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaRouteProviderConfig_UnserializedMessageContext<
            UserType, MediaRouteProviderConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaRouteProviderConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaRouteProviderConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaRouteProviderConfig_UnserializedMessageContext<
            UserType, MediaRouteProviderConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaRouteProviderConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool enable_dial_discovery;
  bool enable_cast_discovery;
  bool enable_dial_sink_query;
  bool enable_cast_sink_query;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  MediaSinkExtraData {
 public:
  using DataView = MediaSinkExtraDataDataView;
  using Data_ = internal::MediaSinkExtraData_Data;
  using Tag = Data_::MediaSinkExtraData_Tag;

  static MediaSinkExtraDataPtr New() {
    return MediaSinkExtraDataPtr(base::in_place);
  }
  // Construct an instance holding |dial_media_sink|.
  static MediaSinkExtraDataPtr
  NewDialMediaSink(
      DialMediaSinkPtr dial_media_sink) {
    auto result = MediaSinkExtraDataPtr(base::in_place);
    result->set_dial_media_sink(std::move(dial_media_sink));
    return result;
  }
  // Construct an instance holding |cast_media_sink|.
  static MediaSinkExtraDataPtr
  NewCastMediaSink(
      CastMediaSinkPtr cast_media_sink) {
    auto result = MediaSinkExtraDataPtr(base::in_place);
    result->set_cast_media_sink(std::move(cast_media_sink));
    return result;
  }

  template <typename U>
  static MediaSinkExtraDataPtr From(const U& u) {
    return mojo::TypeConverter<MediaSinkExtraDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaSinkExtraData>::Convert(*this);
  }

  MediaSinkExtraData();
  ~MediaSinkExtraData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = MediaSinkExtraDataPtr>
  MediaSinkExtraDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaSinkExtraData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_dial_media_sink() const { return tag_ == Tag::DIAL_MEDIA_SINK; }

  DialMediaSinkPtr& get_dial_media_sink() const {
    DCHECK(tag_ == Tag::DIAL_MEDIA_SINK);
    return *(data_.dial_media_sink);
  }

  void set_dial_media_sink(
      DialMediaSinkPtr dial_media_sink);
  bool is_cast_media_sink() const { return tag_ == Tag::CAST_MEDIA_SINK; }

  CastMediaSinkPtr& get_cast_media_sink() const {
    DCHECK(tag_ == Tag::CAST_MEDIA_SINK);
    return *(data_.cast_media_sink);
  }

  void set_cast_media_sink(
      CastMediaSinkPtr cast_media_sink);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaSinkExtraData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<MediaSinkExtraData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    DialMediaSinkPtr* dial_media_sink;
    CastMediaSinkPtr* cast_media_sink;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class  MediaSink {
 public:
  using DataView = MediaSinkDataView;
  using Data_ = internal::MediaSink_Data;

  template <typename... Args>
  static MediaSinkPtr New(Args&&... args) {
    return MediaSinkPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaSinkPtr From(const U& u) {
    return mojo::TypeConverter<MediaSinkPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaSink>::Convert(*this);
  }


  MediaSink();

  MediaSink(
      const std::string& sink_id,
      const std::string& name,
      const base::Optional<std::string>& description,
      const base::Optional<std::string>& domain,
      SinkIconType icon_type,
      media_router::MediaRouteProviderId provider_id,
      MediaSinkExtraDataPtr extra_data);

  ~MediaSink();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaSinkPtr>
  MediaSinkPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaSink>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaSink::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaSink::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaSink_UnserializedMessageContext<
            UserType, MediaSink::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaSink::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaSink::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaSink_UnserializedMessageContext<
            UserType, MediaSink::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaSink::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string sink_id;
  std::string name;
  base::Optional<std::string> description;
  base::Optional<std::string> domain;
  SinkIconType icon_type;
  media_router::MediaRouteProviderId provider_id;
  MediaSinkExtraDataPtr extra_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaSink);
};


class  DialMediaSink {
 public:
  using DataView = DialMediaSinkDataView;
  using Data_ = internal::DialMediaSink_Data;

  template <typename... Args>
  static DialMediaSinkPtr New(Args&&... args) {
    return DialMediaSinkPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DialMediaSinkPtr From(const U& u) {
    return mojo::TypeConverter<DialMediaSinkPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DialMediaSink>::Convert(*this);
  }


  DialMediaSink();

  DialMediaSink(
      const net::IPAddress& ip_address,
      const std::string& model_name,
      const GURL& app_url);

  ~DialMediaSink();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DialMediaSinkPtr>
  DialMediaSinkPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DialMediaSink>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DialMediaSink::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DialMediaSink::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DialMediaSink_UnserializedMessageContext<
            UserType, DialMediaSink::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DialMediaSink::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DialMediaSink::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DialMediaSink_UnserializedMessageContext<
            UserType, DialMediaSink::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DialMediaSink::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  net::IPAddress ip_address;
  std::string model_name;
  GURL app_url;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  CastMediaSink {
 public:
  using DataView = CastMediaSinkDataView;
  using Data_ = internal::CastMediaSink_Data;

  template <typename... Args>
  static CastMediaSinkPtr New(Args&&... args) {
    return CastMediaSinkPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CastMediaSinkPtr From(const U& u) {
    return mojo::TypeConverter<CastMediaSinkPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CastMediaSink>::Convert(*this);
  }


  CastMediaSink();

  CastMediaSink(
      const net::IPEndPoint& ip_endpoint,
      const std::string& model_name,
      uint8_t capabilities,
      int32_t cast_channel_id);

  ~CastMediaSink();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CastMediaSinkPtr>
  CastMediaSinkPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CastMediaSink>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CastMediaSink::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CastMediaSink::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CastMediaSink_UnserializedMessageContext<
            UserType, CastMediaSink::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CastMediaSink::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CastMediaSink::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CastMediaSink_UnserializedMessageContext<
            UserType, CastMediaSink::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CastMediaSink::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  net::IPEndPoint ip_endpoint;
  std::string model_name;
  uint8_t capabilities;
  int32_t cast_channel_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  MediaRoute {
 public:
  using DataView = MediaRouteDataView;
  using Data_ = internal::MediaRoute_Data;

  template <typename... Args>
  static MediaRoutePtr New(Args&&... args) {
    return MediaRoutePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaRoutePtr From(const U& u) {
    return mojo::TypeConverter<MediaRoutePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaRoute>::Convert(*this);
  }


  MediaRoute();

  MediaRoute(
      const std::string& media_route_id,
      const std::string& presentation_id,
      const base::Optional<std::string>& media_source,
      const std::string& media_sink_id,
      const std::string& description,
      bool is_local,
      RouteControllerType controller_type,
      bool for_display,
      bool is_incognito,
      bool is_local_presentation);

  ~MediaRoute();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaRoutePtr>
  MediaRoutePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaRoute>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaRoute::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaRoute::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaRoute_UnserializedMessageContext<
            UserType, MediaRoute::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaRoute::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaRoute::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaRoute_UnserializedMessageContext<
            UserType, MediaRoute::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaRoute::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string media_route_id;
  std::string presentation_id;
  base::Optional<std::string> media_source;
  std::string media_sink_id;
  std::string description;
  bool is_local;
  RouteControllerType controller_type;
  bool for_display;
  bool is_incognito;
  bool is_local_presentation;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  Issue {
 public:
  using DataView = IssueDataView;
  using Data_ = internal::Issue_Data;using Severity = Issue_Severity;using ActionType = Issue_ActionType;

  template <typename... Args>
  static IssuePtr New(Args&&... args) {
    return IssuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IssuePtr From(const U& u) {
    return mojo::TypeConverter<IssuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Issue>::Convert(*this);
  }


  Issue();

  Issue(
      const base::Optional<std::string>& route_id,
      media_router::IssueInfo::Severity severity,
      bool is_blocking,
      const std::string& title,
      const base::Optional<std::string>& message,
      media_router::IssueInfo::Action default_action,
      const std::vector<media_router::IssueInfo::Action>& secondary_actions,
      int32_t help_page_id);

  ~Issue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IssuePtr>
  IssuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Issue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Issue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Issue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Issue_UnserializedMessageContext<
            UserType, Issue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Issue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Issue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Issue_UnserializedMessageContext<
            UserType, Issue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Issue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<std::string> route_id;
  media_router::IssueInfo::Severity severity;
  bool is_blocking;
  std::string title;
  base::Optional<std::string> message;
  media_router::IssueInfo::Action default_action;
  std::vector<media_router::IssueInfo::Action> secondary_actions;
  int32_t help_page_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  RouteMessage {
 public:
  using DataView = RouteMessageDataView;
  using Data_ = internal::RouteMessage_Data;using Type = RouteMessage_Type;

  template <typename... Args>
  static RouteMessagePtr New(Args&&... args) {
    return RouteMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RouteMessagePtr From(const U& u) {
    return mojo::TypeConverter<RouteMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RouteMessage>::Convert(*this);
  }


  RouteMessage();

  RouteMessage(
      RouteMessage::Type type,
      const base::Optional<std::string>& message,
      const base::Optional<std::vector<uint8_t>>& data);

  ~RouteMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RouteMessagePtr>
  RouteMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RouteMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RouteMessage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RouteMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RouteMessage_UnserializedMessageContext<
            UserType, RouteMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RouteMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RouteMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RouteMessage_UnserializedMessageContext<
            UserType, RouteMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RouteMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  RouteMessage::Type type;
  base::Optional<std::string> message;
  base::Optional<std::vector<uint8_t>> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



template <typename UnionPtrType>
MediaSinkExtraDataPtr MediaSinkExtraData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::DIAL_MEDIA_SINK:
      rv->set_dial_media_sink(mojo::Clone(*data_.dial_media_sink));
      break;
    case Tag::CAST_MEDIA_SINK:
      rv->set_cast_media_sink(mojo::Clone(*data_.cast_media_sink));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaSinkExtraData>::value>::type*>
bool MediaSinkExtraData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::DIAL_MEDIA_SINK:
      return mojo::Equals(*(data_.dial_media_sink), *(other.data_.dial_media_sink));
    case Tag::CAST_MEDIA_SINK:
      return mojo::Equals(*(data_.cast_media_sink), *(other.data_.cast_media_sink));
  };

  return false;
}
template <typename StructPtrType>
MediaSinkPtr MediaSink::Clone() const {
  return New(
      mojo::Clone(sink_id),
      mojo::Clone(name),
      mojo::Clone(description),
      mojo::Clone(domain),
      mojo::Clone(icon_type),
      mojo::Clone(provider_id),
      mojo::Clone(extra_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaSink>::value>::type*>
bool MediaSink::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->sink_id, other_struct.sink_id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->domain, other_struct.domain))
    return false;
  if (!mojo::Equals(this->icon_type, other_struct.icon_type))
    return false;
  if (!mojo::Equals(this->provider_id, other_struct.provider_id))
    return false;
  if (!mojo::Equals(this->extra_data, other_struct.extra_data))
    return false;
  return true;
}
template <typename StructPtrType>
DialMediaSinkPtr DialMediaSink::Clone() const {
  return New(
      mojo::Clone(ip_address),
      mojo::Clone(model_name),
      mojo::Clone(app_url)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DialMediaSink>::value>::type*>
bool DialMediaSink::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ip_address, other_struct.ip_address))
    return false;
  if (!mojo::Equals(this->model_name, other_struct.model_name))
    return false;
  if (!mojo::Equals(this->app_url, other_struct.app_url))
    return false;
  return true;
}
template <typename StructPtrType>
CastMediaSinkPtr CastMediaSink::Clone() const {
  return New(
      mojo::Clone(ip_endpoint),
      mojo::Clone(model_name),
      mojo::Clone(capabilities),
      mojo::Clone(cast_channel_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CastMediaSink>::value>::type*>
bool CastMediaSink::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ip_endpoint, other_struct.ip_endpoint))
    return false;
  if (!mojo::Equals(this->model_name, other_struct.model_name))
    return false;
  if (!mojo::Equals(this->capabilities, other_struct.capabilities))
    return false;
  if (!mojo::Equals(this->cast_channel_id, other_struct.cast_channel_id))
    return false;
  return true;
}
template <typename StructPtrType>
MediaRoutePtr MediaRoute::Clone() const {
  return New(
      mojo::Clone(media_route_id),
      mojo::Clone(presentation_id),
      mojo::Clone(media_source),
      mojo::Clone(media_sink_id),
      mojo::Clone(description),
      mojo::Clone(is_local),
      mojo::Clone(controller_type),
      mojo::Clone(for_display),
      mojo::Clone(is_incognito),
      mojo::Clone(is_local_presentation)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaRoute>::value>::type*>
bool MediaRoute::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->media_route_id, other_struct.media_route_id))
    return false;
  if (!mojo::Equals(this->presentation_id, other_struct.presentation_id))
    return false;
  if (!mojo::Equals(this->media_source, other_struct.media_source))
    return false;
  if (!mojo::Equals(this->media_sink_id, other_struct.media_sink_id))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->is_local, other_struct.is_local))
    return false;
  if (!mojo::Equals(this->controller_type, other_struct.controller_type))
    return false;
  if (!mojo::Equals(this->for_display, other_struct.for_display))
    return false;
  if (!mojo::Equals(this->is_incognito, other_struct.is_incognito))
    return false;
  if (!mojo::Equals(this->is_local_presentation, other_struct.is_local_presentation))
    return false;
  return true;
}
template <typename StructPtrType>
IssuePtr Issue::Clone() const {
  return New(
      mojo::Clone(route_id),
      mojo::Clone(severity),
      mojo::Clone(is_blocking),
      mojo::Clone(title),
      mojo::Clone(message),
      mojo::Clone(default_action),
      mojo::Clone(secondary_actions),
      mojo::Clone(help_page_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Issue>::value>::type*>
bool Issue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->route_id, other_struct.route_id))
    return false;
  if (!mojo::Equals(this->severity, other_struct.severity))
    return false;
  if (!mojo::Equals(this->is_blocking, other_struct.is_blocking))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->default_action, other_struct.default_action))
    return false;
  if (!mojo::Equals(this->secondary_actions, other_struct.secondary_actions))
    return false;
  if (!mojo::Equals(this->help_page_id, other_struct.help_page_id))
    return false;
  return true;
}
template <typename StructPtrType>
RouteMessagePtr RouteMessage::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(message),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RouteMessage>::value>::type*>
bool RouteMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
SinkSearchCriteriaPtr SinkSearchCriteria::Clone() const {
  return New(
      mojo::Clone(input),
      mojo::Clone(domain)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SinkSearchCriteria>::value>::type*>
bool SinkSearchCriteria::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->input, other_struct.input))
    return false;
  if (!mojo::Equals(this->domain, other_struct.domain))
    return false;
  return true;
}
template <typename StructPtrType>
MediaRouteProviderConfigPtr MediaRouteProviderConfig::Clone() const {
  return New(
      mojo::Clone(enable_dial_discovery),
      mojo::Clone(enable_cast_discovery),
      mojo::Clone(enable_dial_sink_query),
      mojo::Clone(enable_cast_sink_query)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaRouteProviderConfig>::value>::type*>
bool MediaRouteProviderConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->enable_dial_discovery, other_struct.enable_dial_discovery))
    return false;
  if (!mojo::Equals(this->enable_cast_discovery, other_struct.enable_cast_discovery))
    return false;
  if (!mojo::Equals(this->enable_dial_sink_query, other_struct.enable_dial_sink_query))
    return false;
  if (!mojo::Equals(this->enable_cast_sink_query, other_struct.enable_cast_sink_query))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media_router

namespace mojo {


template <>
struct  StructTraits<::media_router::mojom::MediaSink::DataView,
                                         ::media_router::mojom::MediaSinkPtr> {
  static bool IsNull(const ::media_router::mojom::MediaSinkPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaSinkPtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::MediaSink::sink_id)& sink_id(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->sink_id;
  }

  static const decltype(::media_router::mojom::MediaSink::name)& name(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->name;
  }

  static const decltype(::media_router::mojom::MediaSink::description)& description(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->description;
  }

  static const decltype(::media_router::mojom::MediaSink::domain)& domain(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->domain;
  }

  static decltype(::media_router::mojom::MediaSink::icon_type) icon_type(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->icon_type;
  }

  static decltype(::media_router::mojom::MediaSink::provider_id) provider_id(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->provider_id;
  }

  static const decltype(::media_router::mojom::MediaSink::extra_data)& extra_data(
      const ::media_router::mojom::MediaSinkPtr& input) {
    return input->extra_data;
  }

  static bool Read(::media_router::mojom::MediaSink::DataView input, ::media_router::mojom::MediaSinkPtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::DialMediaSink::DataView,
                                         ::media_router::mojom::DialMediaSinkPtr> {
  static bool IsNull(const ::media_router::mojom::DialMediaSinkPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::DialMediaSinkPtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::DialMediaSink::ip_address)& ip_address(
      const ::media_router::mojom::DialMediaSinkPtr& input) {
    return input->ip_address;
  }

  static const decltype(::media_router::mojom::DialMediaSink::model_name)& model_name(
      const ::media_router::mojom::DialMediaSinkPtr& input) {
    return input->model_name;
  }

  static const decltype(::media_router::mojom::DialMediaSink::app_url)& app_url(
      const ::media_router::mojom::DialMediaSinkPtr& input) {
    return input->app_url;
  }

  static bool Read(::media_router::mojom::DialMediaSink::DataView input, ::media_router::mojom::DialMediaSinkPtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::CastMediaSink::DataView,
                                         ::media_router::mojom::CastMediaSinkPtr> {
  static bool IsNull(const ::media_router::mojom::CastMediaSinkPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::CastMediaSinkPtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::CastMediaSink::ip_endpoint)& ip_endpoint(
      const ::media_router::mojom::CastMediaSinkPtr& input) {
    return input->ip_endpoint;
  }

  static const decltype(::media_router::mojom::CastMediaSink::model_name)& model_name(
      const ::media_router::mojom::CastMediaSinkPtr& input) {
    return input->model_name;
  }

  static decltype(::media_router::mojom::CastMediaSink::capabilities) capabilities(
      const ::media_router::mojom::CastMediaSinkPtr& input) {
    return input->capabilities;
  }

  static decltype(::media_router::mojom::CastMediaSink::cast_channel_id) cast_channel_id(
      const ::media_router::mojom::CastMediaSinkPtr& input) {
    return input->cast_channel_id;
  }

  static bool Read(::media_router::mojom::CastMediaSink::DataView input, ::media_router::mojom::CastMediaSinkPtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::MediaRoute::DataView,
                                         ::media_router::mojom::MediaRoutePtr> {
  static bool IsNull(const ::media_router::mojom::MediaRoutePtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaRoutePtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::MediaRoute::media_route_id)& media_route_id(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->media_route_id;
  }

  static const decltype(::media_router::mojom::MediaRoute::presentation_id)& presentation_id(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->presentation_id;
  }

  static const decltype(::media_router::mojom::MediaRoute::media_source)& media_source(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->media_source;
  }

  static const decltype(::media_router::mojom::MediaRoute::media_sink_id)& media_sink_id(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->media_sink_id;
  }

  static const decltype(::media_router::mojom::MediaRoute::description)& description(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->description;
  }

  static decltype(::media_router::mojom::MediaRoute::is_local) is_local(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->is_local;
  }

  static decltype(::media_router::mojom::MediaRoute::controller_type) controller_type(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->controller_type;
  }

  static decltype(::media_router::mojom::MediaRoute::for_display) for_display(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->for_display;
  }

  static decltype(::media_router::mojom::MediaRoute::is_incognito) is_incognito(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->is_incognito;
  }

  static decltype(::media_router::mojom::MediaRoute::is_local_presentation) is_local_presentation(
      const ::media_router::mojom::MediaRoutePtr& input) {
    return input->is_local_presentation;
  }

  static bool Read(::media_router::mojom::MediaRoute::DataView input, ::media_router::mojom::MediaRoutePtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::Issue::DataView,
                                         ::media_router::mojom::IssuePtr> {
  static bool IsNull(const ::media_router::mojom::IssuePtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::IssuePtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::Issue::route_id)& route_id(
      const ::media_router::mojom::IssuePtr& input) {
    return input->route_id;
  }

  static decltype(::media_router::mojom::Issue::severity) severity(
      const ::media_router::mojom::IssuePtr& input) {
    return input->severity;
  }

  static decltype(::media_router::mojom::Issue::is_blocking) is_blocking(
      const ::media_router::mojom::IssuePtr& input) {
    return input->is_blocking;
  }

  static const decltype(::media_router::mojom::Issue::title)& title(
      const ::media_router::mojom::IssuePtr& input) {
    return input->title;
  }

  static const decltype(::media_router::mojom::Issue::message)& message(
      const ::media_router::mojom::IssuePtr& input) {
    return input->message;
  }

  static decltype(::media_router::mojom::Issue::default_action) default_action(
      const ::media_router::mojom::IssuePtr& input) {
    return input->default_action;
  }

  static const decltype(::media_router::mojom::Issue::secondary_actions)& secondary_actions(
      const ::media_router::mojom::IssuePtr& input) {
    return input->secondary_actions;
  }

  static decltype(::media_router::mojom::Issue::help_page_id) help_page_id(
      const ::media_router::mojom::IssuePtr& input) {
    return input->help_page_id;
  }

  static bool Read(::media_router::mojom::Issue::DataView input, ::media_router::mojom::IssuePtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::RouteMessage::DataView,
                                         ::media_router::mojom::RouteMessagePtr> {
  static bool IsNull(const ::media_router::mojom::RouteMessagePtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::RouteMessagePtr* output) { output->reset(); }

  static decltype(::media_router::mojom::RouteMessage::type) type(
      const ::media_router::mojom::RouteMessagePtr& input) {
    return input->type;
  }

  static const decltype(::media_router::mojom::RouteMessage::message)& message(
      const ::media_router::mojom::RouteMessagePtr& input) {
    return input->message;
  }

  static const decltype(::media_router::mojom::RouteMessage::data)& data(
      const ::media_router::mojom::RouteMessagePtr& input) {
    return input->data;
  }

  static bool Read(::media_router::mojom::RouteMessage::DataView input, ::media_router::mojom::RouteMessagePtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::SinkSearchCriteria::DataView,
                                         ::media_router::mojom::SinkSearchCriteriaPtr> {
  static bool IsNull(const ::media_router::mojom::SinkSearchCriteriaPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::SinkSearchCriteriaPtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::SinkSearchCriteria::input)& input(
      const ::media_router::mojom::SinkSearchCriteriaPtr& input) {
    return input->input;
  }

  static const decltype(::media_router::mojom::SinkSearchCriteria::domain)& domain(
      const ::media_router::mojom::SinkSearchCriteriaPtr& input) {
    return input->domain;
  }

  static bool Read(::media_router::mojom::SinkSearchCriteria::DataView input, ::media_router::mojom::SinkSearchCriteriaPtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::MediaRouteProviderConfig::DataView,
                                         ::media_router::mojom::MediaRouteProviderConfigPtr> {
  static bool IsNull(const ::media_router::mojom::MediaRouteProviderConfigPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaRouteProviderConfigPtr* output) { output->reset(); }

  static decltype(::media_router::mojom::MediaRouteProviderConfig::enable_dial_discovery) enable_dial_discovery(
      const ::media_router::mojom::MediaRouteProviderConfigPtr& input) {
    return input->enable_dial_discovery;
  }

  static decltype(::media_router::mojom::MediaRouteProviderConfig::enable_cast_discovery) enable_cast_discovery(
      const ::media_router::mojom::MediaRouteProviderConfigPtr& input) {
    return input->enable_cast_discovery;
  }

  static decltype(::media_router::mojom::MediaRouteProviderConfig::enable_dial_sink_query) enable_dial_sink_query(
      const ::media_router::mojom::MediaRouteProviderConfigPtr& input) {
    return input->enable_dial_sink_query;
  }

  static decltype(::media_router::mojom::MediaRouteProviderConfig::enable_cast_sink_query) enable_cast_sink_query(
      const ::media_router::mojom::MediaRouteProviderConfigPtr& input) {
    return input->enable_cast_sink_query;
  }

  static bool Read(::media_router::mojom::MediaRouteProviderConfig::DataView input, ::media_router::mojom::MediaRouteProviderConfigPtr* output);
};


template <>
struct  UnionTraits<::media_router::mojom::MediaSinkExtraData::DataView,
                                        ::media_router::mojom::MediaSinkExtraDataPtr> {
  static bool IsNull(const ::media_router::mojom::MediaSinkExtraDataPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaSinkExtraDataPtr* output) { output->reset(); }

  static ::media_router::mojom::MediaSinkExtraData::Tag GetTag(const ::media_router::mojom::MediaSinkExtraDataPtr& input) {
    return input->which();
  }

  static const ::media_router::mojom::DialMediaSinkPtr& dial_media_sink(const ::media_router::mojom::MediaSinkExtraDataPtr& input) {
    return input->get_dial_media_sink();
  }

  static const ::media_router::mojom::CastMediaSinkPtr& cast_media_sink(const ::media_router::mojom::MediaSinkExtraDataPtr& input) {
    return input->get_cast_media_sink();
  }

  static bool Read(::media_router::mojom::MediaSinkExtraData::DataView input, ::media_router::mojom::MediaSinkExtraDataPtr* output);
};

}  // namespace mojo

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_H_