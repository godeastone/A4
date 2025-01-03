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

#include "services/network/public/mojom/cookie_manager.mojom-blink.h"

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

#include "services/network/public/mojom/cookie_manager.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
namespace network {
namespace mojom {
namespace blink {
CookieOptions::CookieOptions()
    : exclude_httponly(true),
      cookie_same_site_filter(CookieSameSiteFilter::DO_NOT_INCLUDE),
      update_access_time(true),
      server_time() {}

CookieOptions::CookieOptions(
    bool exclude_httponly_in,
    CookieSameSiteFilter cookie_same_site_filter_in,
    bool update_access_time_in,
    base::Optional<WTF::Time> server_time_in)
    : exclude_httponly(std::move(exclude_httponly_in)),
      cookie_same_site_filter(std::move(cookie_same_site_filter_in)),
      update_access_time(std::move(update_access_time_in)),
      server_time(std::move(server_time_in)) {}

CookieOptions::~CookieOptions() = default;

bool CookieOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CanonicalCookie::CanonicalCookie()
    : name(),
      value(),
      domain(),
      path(),
      creation(),
      expiry(),
      last_access(),
      secure(false),
      httponly(false),
      site_restrictions(CookieSameSite::NO_RESTRICTION),
      priority(CookiePriority::MEDIUM) {}

CanonicalCookie::CanonicalCookie(
    const WTF::String& name_in,
    const WTF::String& value_in,
    const WTF::String& domain_in,
    const WTF::String& path_in,
    base::Optional<WTF::Time> creation_in,
    base::Optional<WTF::Time> expiry_in,
    base::Optional<WTF::Time> last_access_in,
    bool secure_in,
    bool httponly_in,
    CookieSameSite site_restrictions_in,
    CookiePriority priority_in)
    : name(std::move(name_in)),
      value(std::move(value_in)),
      domain(std::move(domain_in)),
      path(std::move(path_in)),
      creation(std::move(creation_in)),
      expiry(std::move(expiry_in)),
      last_access(std::move(last_access_in)),
      secure(std::move(secure_in)),
      httponly(std::move(httponly_in)),
      site_restrictions(std::move(site_restrictions_in)),
      priority(std::move(priority_in)) {}

CanonicalCookie::~CanonicalCookie() = default;

bool CanonicalCookie::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CookieDeletionFilter::CookieDeletionFilter()
    : created_after_time(),
      created_before_time(),
      excluding_domains(),
      including_domains(),
      cookie_name(),
      host_name(),
      url(),
      session_control(CookieDeletionSessionControl::IGNORE_CONTROL) {}

CookieDeletionFilter::CookieDeletionFilter(
    base::Optional<WTF::Time> created_after_time_in,
    base::Optional<WTF::Time> created_before_time_in,
    const base::Optional<WTF::Vector<WTF::String>>& excluding_domains_in,
    const base::Optional<WTF::Vector<WTF::String>>& including_domains_in,
    const WTF::String& cookie_name_in,
    const WTF::String& host_name_in,
    const base::Optional<::blink::KURL>& url_in,
    CookieDeletionSessionControl session_control_in)
    : created_after_time(std::move(created_after_time_in)),
      created_before_time(std::move(created_before_time_in)),
      excluding_domains(std::move(excluding_domains_in)),
      including_domains(std::move(including_domains_in)),
      cookie_name(std::move(cookie_name_in)),
      host_name(std::move(host_name_in)),
      url(std::move(url_in)),
      session_control(std::move(session_control_in)) {}

CookieDeletionFilter::~CookieDeletionFilter() = default;

bool CookieDeletionFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CookieChangeListener::Name_[] = "network.mojom.CookieChangeListener";

CookieChangeListenerProxy::CookieChangeListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class CookieChangeListenerProxy_OnCookieChange_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieChangeListenerProxy_OnCookieChange_Message(
      uint32_t message_flags
      , CanonicalCookiePtr param_cookie
      , CookieChangeCause param_cause
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieChangeListener_OnCookieChange_Name,
          message_flags)
      , param_cookie_(std::move(param_cookie))
      , param_cause_(std::move(param_cause)){}
  ~CookieChangeListenerProxy_OnCookieChange_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      CanonicalCookiePtr param_cookie, CookieChangeCause param_cause) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieChangeListenerProxy_OnCookieChange_Message>(
          kFlags
          , std::move(param_cookie)
          , std::move(param_cause)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieChangeListener_OnCookieChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieChangeListener_OnCookieChange_Params_Data::BufferWriter
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
      "null cookie in CookieChangeListener.OnCookieChange request");
  mojo::internal::Serialize<::network::mojom::CookieChangeCause>(
      param_cause, &params->cause);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieChangeListener* impl) {
    impl->OnCookieChange(
        std::move(param_cookie_),
        std::move(param_cause_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieChangeListener_OnCookieChange_Params_Data::BufferWriter
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
      "null cookie in CookieChangeListener.OnCookieChange request");
  mojo::internal::Serialize<::network::mojom::CookieChangeCause>(
      param_cause_, &params->cause);
  }
  CanonicalCookiePtr param_cookie_;
  CookieChangeCause param_cause_;

  DISALLOW_COPY_AND_ASSIGN(CookieChangeListenerProxy_OnCookieChange_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieChangeListenerProxy_OnCookieChange_Message::kMessageTag = {};

void CookieChangeListenerProxy::OnCookieChange(
    CanonicalCookiePtr in_cookie, CookieChangeCause in_cause) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieChangeListener::OnCookieChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CookieChangeListenerProxy_OnCookieChange_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_cookie), std::move(in_cause));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CookieChangeListenerStubDispatch::Accept(
    CookieChangeListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCookieChangeListener_OnCookieChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieChangeListener::OnCookieChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CookieChangeListenerProxy_OnCookieChange_Message>();
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
      internal::CookieChangeListener_OnCookieChange_Params_Data* params =
          reinterpret_cast<internal::CookieChangeListener_OnCookieChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CanonicalCookiePtr p_cookie{};
      CookieChangeCause p_cause{};
      CookieChangeListener_OnCookieChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadCause(&p_cause))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieChangeListener::OnCookieChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCookieChange(
std::move(p_cookie), 
std::move(p_cause));
      return true;
    }
  }
  return false;
}

// static
bool CookieChangeListenerStubDispatch::AcceptWithResponder(
    CookieChangeListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCookieChangeListener_OnCookieChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieChangeListener::OnCookieChange",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CookieChangeListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieChangeListener RequestValidator");

  switch (message->header()->name) {
    case internal::kCookieChangeListener_OnCookieChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieChangeListener_OnCookieChange_Params_Data>(
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

void CookieChangeListenerInterceptorForTesting::OnCookieChange(CanonicalCookiePtr cookie, CookieChangeCause cause) {
  GetForwardingInterface()->OnCookieChange(std::move(cookie), std::move(cause));
}
CookieChangeListenerAsyncWaiter::CookieChangeListenerAsyncWaiter(
    CookieChangeListener* proxy) : proxy_(proxy) {}

CookieChangeListenerAsyncWaiter::~CookieChangeListenerAsyncWaiter() = default;


const char CookieManager::Name_[] = "network.mojom.CookieManager";

class CookieManager_GetAllCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_GetAllCookies_ForwardToCallback(
      CookieManager::GetAllCookiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::GetAllCookiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetAllCookies_ForwardToCallback);
};

class CookieManager_GetCookieList_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_GetCookieList_ForwardToCallback(
      CookieManager::GetCookieListCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::GetCookieListCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetCookieList_ForwardToCallback);
};

class CookieManager_SetCanonicalCookie_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_SetCanonicalCookie_ForwardToCallback(
      CookieManager::SetCanonicalCookieCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::SetCanonicalCookieCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_SetCanonicalCookie_ForwardToCallback);
};

class CookieManager_DeleteCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_DeleteCookies_ForwardToCallback(
      CookieManager::DeleteCookiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::DeleteCookiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_DeleteCookies_ForwardToCallback);
};

class CookieManager_FlushCookieStore_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_FlushCookieStore_ForwardToCallback(
      CookieManager::FlushCookieStoreCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::FlushCookieStoreCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_FlushCookieStore_ForwardToCallback);
};

CookieManagerProxy::CookieManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class CookieManagerProxy_GetAllCookies_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManagerProxy_GetAllCookies_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_GetAllCookies_Name,
          message_flags){}
  ~CookieManagerProxy_GetAllCookies_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManagerProxy_GetAllCookies_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_GetAllCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetAllCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager* impl, CookieManager::GetAllCookiesCallback callback) {
    impl->GetAllCookies(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_GetAllCookies_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(CookieManagerProxy_GetAllCookies_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManagerProxy_GetAllCookies_Message::kMessageTag = {};

void CookieManagerProxy::GetAllCookies(
    GetAllCookiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::GetAllCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CookieManagerProxy_GetAllCookies_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_GetAllCookies_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::GetCookieList(
    const ::blink::KURL& in_url, CookieOptionsPtr in_cookie_options, GetCookieListCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::GetCookieList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_GetCookieList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetCookieList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CookieManager.GetCookieList request");
  typename decltype(params->cookie_options)::BaseType::BufferWriter
      cookie_options_writer;
  mojo::internal::Serialize<::network::mojom::CookieOptionsDataView>(
      in_cookie_options, buffer, &cookie_options_writer, &serialization_context);
  params->cookie_options.Set(
      cookie_options_writer.is_null() ? nullptr : cookie_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie_options in CookieManager.GetCookieList request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_GetCookieList_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CookieManagerProxy_SetCanonicalCookie_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManagerProxy_SetCanonicalCookie_Message(
      uint32_t message_flags
      , CanonicalCookiePtr param_cookie
      , bool param_secure_source
      , bool param_modify_http_only
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_SetCanonicalCookie_Name,
          message_flags)
      , param_cookie_(std::move(param_cookie))
      , param_secure_source_(std::move(param_secure_source))
      , param_modify_http_only_(std::move(param_modify_http_only)){}
  ~CookieManagerProxy_SetCanonicalCookie_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      CanonicalCookiePtr param_cookie, bool param_secure_source, bool param_modify_http_only) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManagerProxy_SetCanonicalCookie_Message>(
          kFlags
          , std::move(param_cookie)
          , std::move(param_secure_source)
          , std::move(param_modify_http_only)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_SetCanonicalCookie_Params_Data::BufferWriter
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
      "null cookie in CookieManager.SetCanonicalCookie request");
  params->secure_source = param_secure_source;
  params->modify_http_only = param_modify_http_only;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager* impl, CookieManager::SetCanonicalCookieCallback callback) {
    impl->SetCanonicalCookie(
        std::move(param_cookie_),
        std::move(param_secure_source_),
        std::move(param_modify_http_only_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_SetCanonicalCookie_Params_Data::BufferWriter
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
      "null cookie in CookieManager.SetCanonicalCookie request");
  params->secure_source = param_secure_source_;
  params->modify_http_only = param_modify_http_only_;
  }
  CanonicalCookiePtr param_cookie_;
  bool param_secure_source_;
  bool param_modify_http_only_;

  DISALLOW_COPY_AND_ASSIGN(CookieManagerProxy_SetCanonicalCookie_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManagerProxy_SetCanonicalCookie_Message::kMessageTag = {};

void CookieManagerProxy::SetCanonicalCookie(
    CanonicalCookiePtr in_cookie, bool in_secure_source, bool in_modify_http_only, SetCanonicalCookieCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::SetCanonicalCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CookieManagerProxy_SetCanonicalCookie_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_cookie), std::move(in_secure_source), std::move(in_modify_http_only));
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_SetCanonicalCookie_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::DeleteCookies(
    CookieDeletionFilterPtr in_filter, DeleteCookiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::DeleteCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_DeleteCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_DeleteCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::CookieDeletionFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filter.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter in CookieManager.DeleteCookies request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_DeleteCookies_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::AddCookieChangeListener(
    const ::blink::KURL& in_url, const WTF::String& in_name, CookieChangeListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::AddCookieChangeListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_AddCookieChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_AddCookieChangeListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CookieManager.AddCookieChangeListener request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in CookieManager.AddCookieChangeListener request");
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in CookieManager.AddCookieChangeListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CookieManagerProxy_AddGlobalChangeListener_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManagerProxy_AddGlobalChangeListener_Message(
      uint32_t message_flags
      , CookieChangeListenerPtr param_notification_pointer
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_AddGlobalChangeListener_Name,
          message_flags)
      , param_notification_pointer_(param_notification_pointer.PassInterface()){}
  ~CookieManagerProxy_AddGlobalChangeListener_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      CookieChangeListenerPtr param_notification_pointer) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManagerProxy_AddGlobalChangeListener_Message>(
          kFlags
          , std::move(param_notification_pointer)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_AddGlobalChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_AddGlobalChangeListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      param_notification_pointer, &params->notification_pointer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->notification_pointer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid notification_pointer in CookieManager.AddGlobalChangeListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager* impl) {
    impl->AddGlobalChangeListener(
        CookieChangeListenerPtr(std::move(param_notification_pointer_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_AddGlobalChangeListener_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      param_notification_pointer_, &params->notification_pointer, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->notification_pointer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid notification_pointer in CookieManager.AddGlobalChangeListener request");
  }
  CookieChangeListenerPtrInfo param_notification_pointer_;

  DISALLOW_COPY_AND_ASSIGN(CookieManagerProxy_AddGlobalChangeListener_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManagerProxy_AddGlobalChangeListener_Message::kMessageTag = {};

void CookieManagerProxy::AddGlobalChangeListener(
    CookieChangeListenerPtr in_notification_pointer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::AddGlobalChangeListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CookieManagerProxy_AddGlobalChangeListener_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_notification_pointer));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CookieManagerProxy_CloneInterface_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManagerProxy_CloneInterface_Message(
      uint32_t message_flags
      , CookieManagerRequest param_new_interface
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_CloneInterface_Name,
          message_flags)
      , param_new_interface_(std::move(param_new_interface)){}
  ~CookieManagerProxy_CloneInterface_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      CookieManagerRequest param_new_interface) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManagerProxy_CloneInterface_Message>(
          kFlags
          , std::move(param_new_interface)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_CloneInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_CloneInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieManagerRequestDataView>(
      param_new_interface, &params->new_interface, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->new_interface),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid new_interface in CookieManager.CloneInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager* impl) {
    impl->CloneInterface(
        std::move(param_new_interface_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_CloneInterface_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieManagerRequestDataView>(
      param_new_interface_, &params->new_interface, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->new_interface),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid new_interface in CookieManager.CloneInterface request");
  }
  CookieManagerRequest param_new_interface_;

  DISALLOW_COPY_AND_ASSIGN(CookieManagerProxy_CloneInterface_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManagerProxy_CloneInterface_Message::kMessageTag = {};

void CookieManagerProxy::CloneInterface(
    CookieManagerRequest in_new_interface) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::CloneInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CookieManagerProxy_CloneInterface_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_new_interface));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CookieManagerProxy_FlushCookieStore_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManagerProxy_FlushCookieStore_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_FlushCookieStore_Name,
          message_flags){}
  ~CookieManagerProxy_FlushCookieStore_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManagerProxy_FlushCookieStore_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_FlushCookieStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_FlushCookieStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager* impl, CookieManager::FlushCookieStoreCallback callback) {
    impl->FlushCookieStore(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_FlushCookieStore_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(CookieManagerProxy_FlushCookieStore_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManagerProxy_FlushCookieStore_Message::kMessageTag = {};

void CookieManagerProxy::FlushCookieStore(
    FlushCookieStoreCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::CookieManager::FlushCookieStore");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CookieManagerProxy_FlushCookieStore_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_FlushCookieStore_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CookieManager_GetAllCookies_ProxyToResponder {
 public:
  static CookieManager::GetAllCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_GetAllCookies_ProxyToResponder> proxy(
        new CookieManager_GetAllCookies_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_GetAllCookies_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_GetAllCookies_ProxyToResponder() {
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
  CookieManager_GetAllCookies_ProxyToResponder(
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
        << "CookieManager::GetAllCookiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<CanonicalCookiePtr> in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetAllCookies_ProxyToResponder);
};
class CookieManager_GetAllCookies_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManager_GetAllCookies_Response_Message(
      uint32_t message_flags
      , WTF::Vector<CanonicalCookiePtr> param_cookies
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_GetAllCookies_Name,
          message_flags)
      , param_cookies_(std::move(param_cookies)){}
  ~CookieManager_GetAllCookies_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      WTF::Vector<CanonicalCookiePtr> param_cookies) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManager_GetAllCookies_Response_Message>(
          kFlags
          , std::move(param_cookies)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_GetAllCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetAllCookies_ResponseParams_Data::BufferWriter
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
      "null cookies in CookieManager.GetAllCookies response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager::GetAllCookiesCallback* callback) {
    std::move(*callback).Run(
        std::move(param_cookies_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_GetAllCookies_ResponseParams_Data::BufferWriter
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
      "null cookies in CookieManager.GetAllCookies response");
  }
  WTF::Vector<CanonicalCookiePtr> param_cookies_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetAllCookies_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManager_GetAllCookies_Response_Message::kMessageTag = {};

bool CookieManager_GetAllCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::CookieManager::GetAllCookiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<CookieManager_GetAllCookies_Response_Message>();
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
  internal::CookieManager_GetAllCookies_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_GetAllCookies_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<CanonicalCookiePtr> p_cookies{};
  CookieManager_GetAllCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CookieManager::GetAllCookies response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies));
  return true;
}

void CookieManager_GetAllCookies_ProxyToResponder::Run(
    WTF::Vector<CanonicalCookiePtr> in_cookies) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = CookieManager_GetAllCookies_Response_Message::Build(kSerialize, is_sync_, std::move(in_cookies));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::GetAllCookiesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_GetCookieList_ProxyToResponder {
 public:
  static CookieManager::GetCookieListCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_GetCookieList_ProxyToResponder> proxy(
        new CookieManager_GetCookieList_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_GetCookieList_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_GetCookieList_ProxyToResponder() {
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
  CookieManager_GetCookieList_ProxyToResponder(
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
        << "CookieManager::GetCookieListCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<CanonicalCookiePtr> in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetCookieList_ProxyToResponder);
};

bool CookieManager_GetCookieList_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::CookieManager::GetCookieListCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_GetCookieList_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_GetCookieList_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<CanonicalCookiePtr> p_cookies{};
  CookieManager_GetCookieList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CookieManager::GetCookieList response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies));
  return true;
}

void CookieManager_GetCookieList_ProxyToResponder::Run(
    WTF::Vector<CanonicalCookiePtr> in_cookies) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_GetCookieList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetCookieList_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookies)::BaseType::BufferWriter
      cookies_writer;
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
      in_cookies, buffer, &cookies_writer, &cookies_validate_params,
      &serialization_context);
  params->cookies.Set(
      cookies_writer.is_null() ? nullptr : cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::GetCookieListCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_SetCanonicalCookie_ProxyToResponder {
 public:
  static CookieManager::SetCanonicalCookieCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_SetCanonicalCookie_ProxyToResponder> proxy(
        new CookieManager_SetCanonicalCookie_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_SetCanonicalCookie_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_SetCanonicalCookie_ProxyToResponder() {
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
  CookieManager_SetCanonicalCookie_ProxyToResponder(
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
        << "CookieManager::SetCanonicalCookieCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(CookieManager_SetCanonicalCookie_ProxyToResponder);
};
class CookieManager_SetCanonicalCookie_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManager_SetCanonicalCookie_Response_Message(
      uint32_t message_flags
      , bool param_success
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_SetCanonicalCookie_Name,
          message_flags)
      , param_success_(std::move(param_success)){}
  ~CookieManager_SetCanonicalCookie_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_success) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManager_SetCanonicalCookie_Response_Message>(
          kFlags
          , std::move(param_success)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_SetCanonicalCookie_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = param_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager::SetCanonicalCookieCallback* callback) {
    std::move(*callback).Run(
        std::move(param_success_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_SetCanonicalCookie_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->success = param_success_;
  }
  bool param_success_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_SetCanonicalCookie_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManager_SetCanonicalCookie_Response_Message::kMessageTag = {};

bool CookieManager_SetCanonicalCookie_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::CookieManager::SetCanonicalCookieCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<CookieManager_SetCanonicalCookie_Response_Message>();
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
  internal::CookieManager_SetCanonicalCookie_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_SetCanonicalCookie_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  CookieManager_SetCanonicalCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CookieManager::SetCanonicalCookie response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void CookieManager_SetCanonicalCookie_ProxyToResponder::Run(
    bool in_success) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = CookieManager_SetCanonicalCookie_Response_Message::Build(kSerialize, is_sync_, std::move(in_success));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::SetCanonicalCookieCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_DeleteCookies_ProxyToResponder {
 public:
  static CookieManager::DeleteCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_DeleteCookies_ProxyToResponder> proxy(
        new CookieManager_DeleteCookies_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_DeleteCookies_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_DeleteCookies_ProxyToResponder() {
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
  CookieManager_DeleteCookies_ProxyToResponder(
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
        << "CookieManager::DeleteCookiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_num_deleted);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_DeleteCookies_ProxyToResponder);
};

bool CookieManager_DeleteCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::CookieManager::DeleteCookiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_DeleteCookies_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_DeleteCookies_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_num_deleted{};
  CookieManager_DeleteCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_num_deleted = input_data_view.num_deleted();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CookieManager::DeleteCookies response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_num_deleted));
  return true;
}

void CookieManager_DeleteCookies_ProxyToResponder::Run(
    uint32_t in_num_deleted) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_DeleteCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_DeleteCookies_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_deleted = in_num_deleted;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::DeleteCookiesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_FlushCookieStore_ProxyToResponder {
 public:
  static CookieManager::FlushCookieStoreCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_FlushCookieStore_ProxyToResponder> proxy(
        new CookieManager_FlushCookieStore_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_FlushCookieStore_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_FlushCookieStore_ProxyToResponder() {
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
  CookieManager_FlushCookieStore_ProxyToResponder(
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
        << "CookieManager::FlushCookieStoreCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(CookieManager_FlushCookieStore_ProxyToResponder);
};
class CookieManager_FlushCookieStore_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CookieManager_FlushCookieStore_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCookieManager_FlushCookieStore_Name,
          message_flags){}
  ~CookieManager_FlushCookieStore_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CookieManager_FlushCookieStore_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCookieManager_FlushCookieStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_FlushCookieStore_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(CookieManager::FlushCookieStoreCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::CookieManager_FlushCookieStore_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(CookieManager_FlushCookieStore_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CookieManager_FlushCookieStore_Response_Message::kMessageTag = {};

bool CookieManager_FlushCookieStore_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "network::mojom::CookieManager::FlushCookieStoreCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<CookieManager_FlushCookieStore_Response_Message>();
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
  internal::CookieManager_FlushCookieStore_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_FlushCookieStore_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CookieManager_FlushCookieStore_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CookieManager::FlushCookieStore response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CookieManager_FlushCookieStore_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = CookieManager_FlushCookieStore_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::FlushCookieStoreCallback",
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
bool CookieManagerStubDispatch::Accept(
    CookieManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::GetAllCookies",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_GetCookieList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::GetCookieList",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::SetCanonicalCookie",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::DeleteCookies",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_AddCookieChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::AddCookieChangeListener",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_AddCookieChangeListener_Params_Data* params =
          reinterpret_cast<internal::CookieManager_AddCookieChangeListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      WTF::String p_name{};
      CookieChangeListenerPtr p_listener{};
      CookieManager_AddCookieChangeListener_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::AddCookieChangeListener deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddCookieChangeListener(
std::move(p_url), 
std::move(p_name), 
std::move(p_listener));
      return true;
    }
    case internal::kCookieManager_AddGlobalChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::AddGlobalChangeListener",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CookieManagerProxy_AddGlobalChangeListener_Message>();
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
      internal::CookieManager_AddGlobalChangeListener_Params_Data* params =
          reinterpret_cast<internal::CookieManager_AddGlobalChangeListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieChangeListenerPtr p_notification_pointer{};
      CookieManager_AddGlobalChangeListener_ParamsDataView input_data_view(params, &serialization_context);
      
      p_notification_pointer =
          input_data_view.TakeNotificationPointer<decltype(p_notification_pointer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::AddGlobalChangeListener deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddGlobalChangeListener(
std::move(p_notification_pointer));
      return true;
    }
    case internal::kCookieManager_CloneInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::CloneInterface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CookieManagerProxy_CloneInterface_Message>();
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
      internal::CookieManager_CloneInterface_Params_Data* params =
          reinterpret_cast<internal::CookieManager_CloneInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManagerRequest p_new_interface{};
      CookieManager_CloneInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      p_new_interface =
          input_data_view.TakeNewInterface<decltype(p_new_interface)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::CloneInterface deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CloneInterface(
std::move(p_new_interface));
      return true;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::FlushCookieStore",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CookieManagerStubDispatch::AcceptWithResponder(
    CookieManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::GetAllCookies",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CookieManagerProxy_GetAllCookies_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          CookieManager::GetAllCookiesCallback callback =
              CookieManager_GetAllCookies_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::CookieManager_GetAllCookies_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_GetAllCookies_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManager_GetAllCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::GetAllCookies deserializer");
        return false;
      }
      CookieManager::GetAllCookiesCallback callback =
          CookieManager_GetAllCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAllCookies(std::move(callback));
      return true;
    }
    case internal::kCookieManager_GetCookieList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::GetCookieList",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_GetCookieList_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_GetCookieList_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      CookieOptionsPtr p_cookie_options{};
      CookieManager_GetCookieList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadCookieOptions(&p_cookie_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::GetCookieList deserializer");
        return false;
      }
      CookieManager::GetCookieListCallback callback =
          CookieManager_GetCookieList_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCookieList(
std::move(p_url), 
std::move(p_cookie_options), std::move(callback));
      return true;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::SetCanonicalCookie",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CookieManagerProxy_SetCanonicalCookie_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          CookieManager::SetCanonicalCookieCallback callback =
              CookieManager_SetCanonicalCookie_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::CookieManager_SetCanonicalCookie_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_SetCanonicalCookie_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CanonicalCookiePtr p_cookie{};
      bool p_secure_source{};
      bool p_modify_http_only{};
      CookieManager_SetCanonicalCookie_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      p_secure_source = input_data_view.secure_source();
      p_modify_http_only = input_data_view.modify_http_only();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::SetCanonicalCookie deserializer");
        return false;
      }
      CookieManager::SetCanonicalCookieCallback callback =
          CookieManager_SetCanonicalCookie_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCanonicalCookie(
std::move(p_cookie), 
std::move(p_secure_source), 
std::move(p_modify_http_only), std::move(callback));
      return true;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::DeleteCookies",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_DeleteCookies_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_DeleteCookies_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieDeletionFilterPtr p_filter{};
      CookieManager_DeleteCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::DeleteCookies deserializer");
        return false;
      }
      CookieManager::DeleteCookiesCallback callback =
          CookieManager_DeleteCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteCookies(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kCookieManager_AddCookieChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::AddCookieChangeListener",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_AddGlobalChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::AddGlobalChangeListener",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_CloneInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::CloneInterface",
               "message", message->name());
#endif
      break;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::CookieManager::FlushCookieStore",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CookieManagerProxy_FlushCookieStore_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          CookieManager::FlushCookieStoreCallback callback =
              CookieManager_FlushCookieStore_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::CookieManager_FlushCookieStore_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_FlushCookieStore_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManager_FlushCookieStore_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CookieManager::FlushCookieStore deserializer");
        return false;
      }
      CookieManager::FlushCookieStoreCallback callback =
          CookieManager_FlushCookieStore_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FlushCookieStore(std::move(callback));
      return true;
    }
  }
  return false;
}

bool CookieManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieManager RequestValidator");

  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetAllCookies_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_GetCookieList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetCookieList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_SetCanonicalCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_DeleteCookies_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_AddCookieChangeListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_AddCookieChangeListener_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_AddGlobalChangeListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_AddGlobalChangeListener_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_CloneInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_CloneInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_FlushCookieStore_Params_Data>(
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

bool CookieManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetAllCookies_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_GetCookieList_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetCookieList_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_SetCanonicalCookie_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_DeleteCookies_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_FlushCookieStore_ResponseParams_Data>(
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
void CookieManagerInterceptorForTesting::GetAllCookies(GetAllCookiesCallback callback) {
  GetForwardingInterface()->GetAllCookies(std::move(callback));
}
void CookieManagerInterceptorForTesting::GetCookieList(const ::blink::KURL& url, CookieOptionsPtr cookie_options, GetCookieListCallback callback) {
  GetForwardingInterface()->GetCookieList(std::move(url), std::move(cookie_options), std::move(callback));
}
void CookieManagerInterceptorForTesting::SetCanonicalCookie(CanonicalCookiePtr cookie, bool secure_source, bool modify_http_only, SetCanonicalCookieCallback callback) {
  GetForwardingInterface()->SetCanonicalCookie(std::move(cookie), std::move(secure_source), std::move(modify_http_only), std::move(callback));
}
void CookieManagerInterceptorForTesting::DeleteCookies(CookieDeletionFilterPtr filter, DeleteCookiesCallback callback) {
  GetForwardingInterface()->DeleteCookies(std::move(filter), std::move(callback));
}
void CookieManagerInterceptorForTesting::AddCookieChangeListener(const ::blink::KURL& url, const WTF::String& name, CookieChangeListenerPtr listener) {
  GetForwardingInterface()->AddCookieChangeListener(std::move(url), std::move(name), std::move(listener));
}
void CookieManagerInterceptorForTesting::AddGlobalChangeListener(CookieChangeListenerPtr notification_pointer) {
  GetForwardingInterface()->AddGlobalChangeListener(std::move(notification_pointer));
}
void CookieManagerInterceptorForTesting::CloneInterface(CookieManagerRequest new_interface) {
  GetForwardingInterface()->CloneInterface(std::move(new_interface));
}
void CookieManagerInterceptorForTesting::FlushCookieStore(FlushCookieStoreCallback callback) {
  GetForwardingInterface()->FlushCookieStore(std::move(callback));
}
CookieManagerAsyncWaiter::CookieManagerAsyncWaiter(
    CookieManager* proxy) : proxy_(proxy) {}

CookieManagerAsyncWaiter::~CookieManagerAsyncWaiter() = default;

void CookieManagerAsyncWaiter::GetAllCookies(
    WTF::Vector<CanonicalCookiePtr>* out_cookies) {
  base::RunLoop loop;
  proxy_->GetAllCookies(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<CanonicalCookiePtr>* out_cookies
,
             WTF::Vector<CanonicalCookiePtr> cookies) {*out_cookies = std::move(cookies);
            loop->Quit();
          },
          &loop,
          out_cookies));
  loop.Run();
}
void CookieManagerAsyncWaiter::GetCookieList(
    const ::blink::KURL& url, CookieOptionsPtr cookie_options, WTF::Vector<CanonicalCookiePtr>* out_cookies) {
  base::RunLoop loop;
  proxy_->GetCookieList(std::move(url),std::move(cookie_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<CanonicalCookiePtr>* out_cookies
,
             WTF::Vector<CanonicalCookiePtr> cookies) {*out_cookies = std::move(cookies);
            loop->Quit();
          },
          &loop,
          out_cookies));
  loop.Run();
}
void CookieManagerAsyncWaiter::SetCanonicalCookie(
    CanonicalCookiePtr cookie, bool secure_source, bool modify_http_only, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetCanonicalCookie(std::move(cookie),std::move(secure_source),std::move(modify_http_only),
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
void CookieManagerAsyncWaiter::DeleteCookies(
    CookieDeletionFilterPtr filter, uint32_t* out_num_deleted) {
  base::RunLoop loop;
  proxy_->DeleteCookies(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_num_deleted
,
             uint32_t num_deleted) {*out_num_deleted = std::move(num_deleted);
            loop->Quit();
          },
          &loop,
          out_num_deleted));
  loop.Run();
}
void CookieManagerAsyncWaiter::FlushCookieStore(
    ) {
  base::RunLoop loop;
  proxy_->FlushCookieStore(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::CookieOptions::DataView, ::network::mojom::blink::CookieOptionsPtr>::Read(
    ::network::mojom::blink::CookieOptions::DataView input,
    ::network::mojom::blink::CookieOptionsPtr* output) {
  bool success = true;
  ::network::mojom::blink::CookieOptionsPtr result(::network::mojom::blink::CookieOptions::New());
  
      result->exclude_httponly = input.exclude_httponly();
      if (!input.ReadCookieSameSiteFilter(&result->cookie_same_site_filter))
        success = false;
      result->update_access_time = input.update_access_time();
      if (!input.ReadServerTime(&result->server_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::CanonicalCookie::DataView, ::network::mojom::blink::CanonicalCookiePtr>::Read(
    ::network::mojom::blink::CanonicalCookie::DataView input,
    ::network::mojom::blink::CanonicalCookiePtr* output) {
  bool success = true;
  ::network::mojom::blink::CanonicalCookiePtr result(::network::mojom::blink::CanonicalCookie::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadDomain(&result->domain))
        success = false;
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadCreation(&result->creation))
        success = false;
      if (!input.ReadExpiry(&result->expiry))
        success = false;
      if (!input.ReadLastAccess(&result->last_access))
        success = false;
      result->secure = input.secure();
      result->httponly = input.httponly();
      if (!input.ReadSiteRestrictions(&result->site_restrictions))
        success = false;
      if (!input.ReadPriority(&result->priority))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::CookieDeletionFilter::DataView, ::network::mojom::blink::CookieDeletionFilterPtr>::Read(
    ::network::mojom::blink::CookieDeletionFilter::DataView input,
    ::network::mojom::blink::CookieDeletionFilterPtr* output) {
  bool success = true;
  ::network::mojom::blink::CookieDeletionFilterPtr result(::network::mojom::blink::CookieDeletionFilter::New());
  
      if (!input.ReadCreatedAfterTime(&result->created_after_time))
        success = false;
      if (!input.ReadCreatedBeforeTime(&result->created_before_time))
        success = false;
      if (!input.ReadExcludingDomains(&result->excluding_domains))
        success = false;
      if (!input.ReadIncludingDomains(&result->including_domains))
        success = false;
      if (!input.ReadCookieName(&result->cookie_name))
        success = false;
      if (!input.ReadHostName(&result->host_name))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadSessionControl(&result->session_control))
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