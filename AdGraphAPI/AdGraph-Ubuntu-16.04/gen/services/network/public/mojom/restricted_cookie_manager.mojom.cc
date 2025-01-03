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

#include "services/network/public/mojom/restricted_cookie_manager.mojom.h"

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

#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace network {
namespace mojom {
CookieManagerGetOptions::CookieManagerGetOptions()
    : name(),
      match_type() {}

CookieManagerGetOptions::CookieManagerGetOptions(
    const std::string& name_in,
    CookieMatchType match_type_in)
    : name(std::move(name_in)),
      match_type(std::move(match_type_in)) {}

CookieManagerGetOptions::~CookieManagerGetOptions() = default;
size_t CookieManagerGetOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->match_type);
  return seed;
}

bool CookieManagerGetOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char RestrictedCookieManager::Name_[] = "network.mojom.RestrictedCookieManager";

class RestrictedCookieManager_GetAllForUrl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RestrictedCookieManager_GetAllForUrl_ForwardToCallback(
      RestrictedCookieManager::GetAllForUrlCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RestrictedCookieManager::GetAllForUrlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_GetAllForUrl_ForwardToCallback);
};

class RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback(
      RestrictedCookieManager::SetCanonicalCookieCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RestrictedCookieManager::SetCanonicalCookieCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback);
};

RestrictedCookieManagerProxy::RestrictedCookieManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class RestrictedCookieManagerProxy_GetAllForUrl_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit RestrictedCookieManagerProxy_GetAllForUrl_Message(
      uint32_t message_flags
      , const GURL& param_url
      , const GURL& param_site_for_cookies
      , CookieManagerGetOptionsPtr param_options
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kRestrictedCookieManager_GetAllForUrl_Name,
          message_flags)
      , param_url_(std::move(param_url))
      , param_site_for_cookies_(std::move(param_site_for_cookies))
      , param_options_(std::move(param_options)){}
  ~RestrictedCookieManagerProxy_GetAllForUrl_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const GURL& param_url, const GURL& param_site_for_cookies, CookieManagerGetOptionsPtr param_options) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<RestrictedCookieManagerProxy_GetAllForUrl_Message>(
          kFlags
          , std::move(param_url)
          , std::move(param_site_for_cookies)
          , std::move(param_options)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kRestrictedCookieManager_GetAllForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_GetAllForUrl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.GetAllForUrl request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.GetAllForUrl request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::network::mojom::CookieManagerGetOptionsDataView>(
      param_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in RestrictedCookieManager.GetAllForUrl request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(RestrictedCookieManager* impl, RestrictedCookieManager::GetAllForUrlCallback callback) {
    impl->GetAllForUrl(
        std::move(param_url_),
        std::move(param_site_for_cookies_),
        std::move(param_options_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::RestrictedCookieManager_GetAllForUrl_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url_, buffer, &url_writer, serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.GetAllForUrl request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies_, buffer, &site_for_cookies_writer, serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.GetAllForUrl request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::network::mojom::CookieManagerGetOptionsDataView>(
      param_options_, buffer, &options_writer, serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in RestrictedCookieManager.GetAllForUrl request");
  }
  GURL param_url_;
  GURL param_site_for_cookies_;
  CookieManagerGetOptionsPtr param_options_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManagerProxy_GetAllForUrl_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
RestrictedCookieManagerProxy_GetAllForUrl_Message::kMessageTag = {};

void RestrictedCookieManagerProxy::GetAllForUrl(
    const GURL& in_url, const GURL& in_site_for_cookies, CookieManagerGetOptionsPtr in_options, GetAllForUrlCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::RestrictedCookieManager::GetAllForUrl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = RestrictedCookieManagerProxy_GetAllForUrl_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_url), std::move(in_site_for_cookies), std::move(in_options));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RestrictedCookieManager_GetAllForUrl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RestrictedCookieManagerProxy_SetCanonicalCookie_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit RestrictedCookieManagerProxy_SetCanonicalCookie_Message(
      uint32_t message_flags
      , const net::CanonicalCookie& param_cookie
      , const GURL& param_url
      , const GURL& param_site_for_cookies
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kRestrictedCookieManager_SetCanonicalCookie_Name,
          message_flags)
      , param_cookie_(std::move(param_cookie))
      , param_url_(std::move(param_url))
      , param_site_for_cookies_(std::move(param_site_for_cookies)){}
  ~RestrictedCookieManagerProxy_SetCanonicalCookie_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const net::CanonicalCookie& param_cookie, const GURL& param_url, const GURL& param_site_for_cookies) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<RestrictedCookieManagerProxy_SetCanonicalCookie_Message>(
          kFlags
          , std::move(param_cookie)
          , std::move(param_url)
          , std::move(param_site_for_cookies)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kRestrictedCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      param_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in RestrictedCookieManager.SetCanonicalCookie request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.SetCanonicalCookie request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.SetCanonicalCookie request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(RestrictedCookieManager* impl, RestrictedCookieManager::SetCanonicalCookieCallback callback) {
    impl->SetCanonicalCookie(
        std::move(param_cookie_),
        std::move(param_url_),
        std::move(param_site_for_cookies_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      param_cookie_, buffer, &cookie_writer, serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in RestrictedCookieManager.SetCanonicalCookie request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url_, buffer, &url_writer, serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.SetCanonicalCookie request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies_, buffer, &site_for_cookies_writer, serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.SetCanonicalCookie request");
  }
  net::CanonicalCookie param_cookie_;
  GURL param_url_;
  GURL param_site_for_cookies_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManagerProxy_SetCanonicalCookie_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
RestrictedCookieManagerProxy_SetCanonicalCookie_Message::kMessageTag = {};

void RestrictedCookieManagerProxy::SetCanonicalCookie(
    const net::CanonicalCookie& in_cookie, const GURL& in_url, const GURL& in_site_for_cookies, SetCanonicalCookieCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::RestrictedCookieManager::SetCanonicalCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = RestrictedCookieManagerProxy_SetCanonicalCookie_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_cookie), std::move(in_url), std::move(in_site_for_cookies));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RestrictedCookieManagerProxy_AddChangeListener_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit RestrictedCookieManagerProxy_AddChangeListener_Message(
      uint32_t message_flags
      , const GURL& param_url
      , const GURL& param_site_for_cookies
      , ::network::mojom::CookieChangeListenerPtr param_listener
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kRestrictedCookieManager_AddChangeListener_Name,
          message_flags)
      , param_url_(std::move(param_url))
      , param_site_for_cookies_(std::move(param_site_for_cookies))
      , param_listener_(param_listener.PassInterface()){}
  ~RestrictedCookieManagerProxy_AddChangeListener_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const GURL& param_url, const GURL& param_site_for_cookies, ::network::mojom::CookieChangeListenerPtr param_listener) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<RestrictedCookieManagerProxy_AddChangeListener_Message>(
          kFlags
          , std::move(param_url)
          , std::move(param_site_for_cookies)
          , std::move(param_listener)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kRestrictedCookieManager_AddChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_AddChangeListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.AddChangeListener request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.AddChangeListener request");
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      param_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in RestrictedCookieManager.AddChangeListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(RestrictedCookieManager* impl) {
    impl->AddChangeListener(
        std::move(param_url_),
        std::move(param_site_for_cookies_),
        ::network::mojom::CookieChangeListenerPtr(std::move(param_listener_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::RestrictedCookieManager_AddChangeListener_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url_, buffer, &url_writer, serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.AddChangeListener request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_site_for_cookies_, buffer, &site_for_cookies_writer, serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.AddChangeListener request");
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      param_listener_, &params->listener, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in RestrictedCookieManager.AddChangeListener request");
  }
  GURL param_url_;
  GURL param_site_for_cookies_;
  ::network::mojom::CookieChangeListenerPtrInfo param_listener_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManagerProxy_AddChangeListener_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
RestrictedCookieManagerProxy_AddChangeListener_Message::kMessageTag = {};

void RestrictedCookieManagerProxy::AddChangeListener(
    const GURL& in_url, const GURL& in_site_for_cookies, ::network::mojom::CookieChangeListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::RestrictedCookieManager::AddChangeListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = RestrictedCookieManagerProxy_AddChangeListener_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_url), std::move(in_site_for_cookies), std::move(in_listener));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class RestrictedCookieManager_GetAllForUrl_ProxyToResponder {
 public:
  static RestrictedCookieManager::GetAllForUrlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RestrictedCookieManager_GetAllForUrl_ProxyToResponder> proxy(
        new RestrictedCookieManager_GetAllForUrl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RestrictedCookieManager_GetAllForUrl_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RestrictedCookieManager_GetAllForUrl_ProxyToResponder() {
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
  RestrictedCookieManager_GetAllForUrl_ProxyToResponder(
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
        << "RestrictedCookieManager::GetAllForUrlCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<net::CanonicalCookie>& in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_GetAllForUrl_ProxyToResponder);
};
class RestrictedCookieManager_GetAllForUrl_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit RestrictedCookieManager_GetAllForUrl_Response_Message(
      uint32_t message_flags
      , const std::vector<net::CanonicalCookie>& param_cookies
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kRestrictedCookieManager_GetAllForUrl_Name,
          message_flags)
      , param_cookies_(std::move(param_cookies)){}
  ~RestrictedCookieManager_GetAllForUrl_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const std::vector<net::CanonicalCookie>& param_cookies) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<RestrictedCookieManager_GetAllForUrl_Response_Message>(
          kFlags
          , std::move(param_cookies)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kRestrictedCookieManager_GetAllForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookies)::BaseType::BufferWriter
      cookies_writer;
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
      param_cookies, buffer, &cookies_writer, &cookies_validate_params,
      &serialization_context);
  params->cookies.Set(
      cookies_writer.is_null() ? nullptr : cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in RestrictedCookieManager.GetAllForUrl response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(RestrictedCookieManager::GetAllForUrlCallback* callback) {
    std::move(*callback).Run(
        std::move(param_cookies_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->cookies)::BaseType::BufferWriter
      cookies_writer;
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
      param_cookies_, buffer, &cookies_writer, &cookies_validate_params,
      serialization_context);
  params->cookies.Set(
      cookies_writer.is_null() ? nullptr : cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in RestrictedCookieManager.GetAllForUrl response");
  }
  std::vector<net::CanonicalCookie> param_cookies_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_GetAllForUrl_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
RestrictedCookieManager_GetAllForUrl_Response_Message::kMessageTag = {};

bool RestrictedCookieManager_GetAllForUrl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::RestrictedCookieManager::GetAllForUrlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<RestrictedCookieManager_GetAllForUrl_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<net::CanonicalCookie> p_cookies{};
  RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RestrictedCookieManager::GetAllForUrl response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies));
  return true;
}

void RestrictedCookieManager_GetAllForUrl_ProxyToResponder::Run(
    const std::vector<net::CanonicalCookie>& in_cookies) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = RestrictedCookieManager_GetAllForUrl_Response_Message::Build(kSerialize, is_sync_, std::move(in_cookies));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::GetAllForUrlCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder {
 public:
  static RestrictedCookieManager::SetCanonicalCookieCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder> proxy(
        new RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder() {
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
  RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder(
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
        << "RestrictedCookieManager::SetCanonicalCookieCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder);
};
class RestrictedCookieManager_SetCanonicalCookie_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit RestrictedCookieManager_SetCanonicalCookie_Response_Message(
      uint32_t message_flags
      , bool param_success
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kRestrictedCookieManager_SetCanonicalCookie_Name,
          message_flags)
      , param_success_(std::move(param_success)){}
  ~RestrictedCookieManager_SetCanonicalCookie_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_success) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<RestrictedCookieManager_SetCanonicalCookie_Response_Message>(
          kFlags
          , std::move(param_success)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kRestrictedCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = param_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(RestrictedCookieManager::SetCanonicalCookieCallback* callback) {
    std::move(*callback).Run(
        std::move(param_success_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->success = param_success_;
  }
  bool param_success_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_SetCanonicalCookie_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
RestrictedCookieManager_SetCanonicalCookie_Response_Message::kMessageTag = {};

bool RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::RestrictedCookieManager::SetCanonicalCookieCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<RestrictedCookieManager_SetCanonicalCookie_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RestrictedCookieManager::SetCanonicalCookie response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::Run(
    bool in_success) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = RestrictedCookieManager_SetCanonicalCookie_Response_Message::Build(kSerialize, is_sync_, std::move(in_success));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::SetCanonicalCookieCallback",
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
bool RestrictedCookieManagerStubDispatch::Accept(
    RestrictedCookieManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::GetAllForUrl",
               "message", message->name());
#endif
      break;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::SetCanonicalCookie",
               "message", message->name());
#endif
      break;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::AddChangeListener",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            RestrictedCookieManagerProxy_AddChangeListener_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::RestrictedCookieManager_AddChangeListener_Params_Data* params =
          reinterpret_cast<internal::RestrictedCookieManager_AddChangeListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      GURL p_site_for_cookies{};
      ::network::mojom::CookieChangeListenerPtr p_listener{};
      RestrictedCookieManager_AddChangeListener_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RestrictedCookieManager::AddChangeListener deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddChangeListener(
std::move(p_url), 
std::move(p_site_for_cookies), 
std::move(p_listener));
      return true;
    }
  }
  return false;
}

// static
bool RestrictedCookieManagerStubDispatch::AcceptWithResponder(
    RestrictedCookieManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::GetAllForUrl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            RestrictedCookieManagerProxy_GetAllForUrl_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          RestrictedCookieManager::GetAllForUrlCallback callback =
              RestrictedCookieManager_GetAllForUrl_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::RestrictedCookieManager_GetAllForUrl_Params_Data* params =
          reinterpret_cast<
              internal::RestrictedCookieManager_GetAllForUrl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      GURL p_site_for_cookies{};
      CookieManagerGetOptionsPtr p_options{};
      RestrictedCookieManager_GetAllForUrl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RestrictedCookieManager::GetAllForUrl deserializer");
        return false;
      }
      RestrictedCookieManager::GetAllForUrlCallback callback =
          RestrictedCookieManager_GetAllForUrl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAllForUrl(
std::move(p_url), 
std::move(p_site_for_cookies), 
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::SetCanonicalCookie",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            RestrictedCookieManagerProxy_SetCanonicalCookie_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          RestrictedCookieManager::SetCanonicalCookieCallback callback =
              RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data* params =
          reinterpret_cast<
              internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::CanonicalCookie p_cookie{};
      GURL p_url{};
      GURL p_site_for_cookies{};
      RestrictedCookieManager_SetCanonicalCookie_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RestrictedCookieManager::SetCanonicalCookie deserializer");
        return false;
      }
      RestrictedCookieManager::SetCanonicalCookieCallback callback =
          RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCanonicalCookie(
std::move(p_cookie), 
std::move(p_url), 
std::move(p_site_for_cookies), std::move(callback));
      return true;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::RestrictedCookieManager::AddChangeListener",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RestrictedCookieManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RestrictedCookieManager RequestValidator");

  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_GetAllForUrl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_AddChangeListener_Params_Data>(
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

bool RestrictedCookieManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RestrictedCookieManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data>(
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
void RestrictedCookieManagerInterceptorForTesting::GetAllForUrl(const GURL& url, const GURL& site_for_cookies, CookieManagerGetOptionsPtr options, GetAllForUrlCallback callback) {
  GetForwardingInterface()->GetAllForUrl(std::move(url), std::move(site_for_cookies), std::move(options), std::move(callback));
}
void RestrictedCookieManagerInterceptorForTesting::SetCanonicalCookie(const net::CanonicalCookie& cookie, const GURL& url, const GURL& site_for_cookies, SetCanonicalCookieCallback callback) {
  GetForwardingInterface()->SetCanonicalCookie(std::move(cookie), std::move(url), std::move(site_for_cookies), std::move(callback));
}
void RestrictedCookieManagerInterceptorForTesting::AddChangeListener(const GURL& url, const GURL& site_for_cookies, ::network::mojom::CookieChangeListenerPtr listener) {
  GetForwardingInterface()->AddChangeListener(std::move(url), std::move(site_for_cookies), std::move(listener));
}
RestrictedCookieManagerAsyncWaiter::RestrictedCookieManagerAsyncWaiter(
    RestrictedCookieManager* proxy) : proxy_(proxy) {}

RestrictedCookieManagerAsyncWaiter::~RestrictedCookieManagerAsyncWaiter() = default;

void RestrictedCookieManagerAsyncWaiter::GetAllForUrl(
    const GURL& url, const GURL& site_for_cookies, CookieManagerGetOptionsPtr options, std::vector<net::CanonicalCookie>* out_cookies) {
  base::RunLoop loop;
  proxy_->GetAllForUrl(std::move(url),std::move(site_for_cookies),std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<net::CanonicalCookie>* out_cookies
,
             const std::vector<net::CanonicalCookie>& cookies) {*out_cookies = std::move(cookies);
            loop->Quit();
          },
          &loop,
          out_cookies));
  loop.Run();
}
void RestrictedCookieManagerAsyncWaiter::SetCanonicalCookie(
    const net::CanonicalCookie& cookie, const GURL& url, const GURL& site_for_cookies, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetCanonicalCookie(std::move(cookie),std::move(url),std::move(site_for_cookies),
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

}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::CookieManagerGetOptions::DataView, ::network::mojom::CookieManagerGetOptionsPtr>::Read(
    ::network::mojom::CookieManagerGetOptions::DataView input,
    ::network::mojom::CookieManagerGetOptionsPtr* output) {
  bool success = true;
  ::network::mojom::CookieManagerGetOptionsPtr result(::network::mojom::CookieManagerGetOptions::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadMatchType(&result->match_type))
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