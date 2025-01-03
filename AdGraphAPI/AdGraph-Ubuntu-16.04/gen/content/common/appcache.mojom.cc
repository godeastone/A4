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

#include "content/common/appcache.mojom.h"

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

#include "content/common/appcache.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
AppCacheResourceInfo::AppCacheResourceInfo()
    : url(),
      size(),
      is_master(),
      is_manifest(),
      is_intercept(),
      is_fallback(),
      is_foreign(),
      is_explicit(),
      response_id() {}

AppCacheResourceInfo::AppCacheResourceInfo(
    const GURL& url_in,
    int64_t size_in,
    bool is_master_in,
    bool is_manifest_in,
    bool is_intercept_in,
    bool is_fallback_in,
    bool is_foreign_in,
    bool is_explicit_in,
    int64_t response_id_in)
    : url(std::move(url_in)),
      size(std::move(size_in)),
      is_master(std::move(is_master_in)),
      is_manifest(std::move(is_manifest_in)),
      is_intercept(std::move(is_intercept_in)),
      is_fallback(std::move(is_fallback_in)),
      is_foreign(std::move(is_foreign_in)),
      is_explicit(std::move(is_explicit_in)),
      response_id(std::move(response_id_in)) {}

AppCacheResourceInfo::~AppCacheResourceInfo() = default;

bool AppCacheResourceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AppCacheErrorDetails::AppCacheErrorDetails()
    : message(),
      reason(AppCacheErrorReason::APPCACHE_UNKNOWN_ERROR),
      url(),
      status(),
      is_cross_origin() {}

AppCacheErrorDetails::AppCacheErrorDetails(
    const std::string& message_in,
    AppCacheErrorReason reason_in,
    const GURL& url_in,
    int32_t status_in,
    bool is_cross_origin_in)
    : message(std::move(message_in)),
      reason(std::move(reason_in)),
      url(std::move(url_in)),
      status(std::move(status_in)),
      is_cross_origin(std::move(is_cross_origin_in)) {}

AppCacheErrorDetails::~AppCacheErrorDetails() = default;

bool AppCacheErrorDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AppCacheBackend::Name_[] = "content.mojom.AppCacheBackend";
bool AppCacheBackend::GetStatus(int32_t host_id, ::content::mojom::AppCacheStatus* out_status) {
  NOTREACHED();
  return false;
}
bool AppCacheBackend::StartUpdate(int32_t host_id, bool* out_success) {
  NOTREACHED();
  return false;
}
bool AppCacheBackend::SwapCache(int32_t host_id, bool* out_success) {
  NOTREACHED();
  return false;
}
bool AppCacheBackend::GetResourceList(int32_t host_id, std::vector<AppCacheResourceInfoPtr>* out_resources) {
  NOTREACHED();
  return false;
}
class AppCacheBackend_GetStatus_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_GetStatus_HandleSyncResponse(
      bool* result, ::content::mojom::AppCacheStatus* out_status)
      : result_(result), out_status_(out_status) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::content::mojom::AppCacheStatus* out_status_;DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_GetStatus_HandleSyncResponse);
};

class AppCacheBackend_GetStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_GetStatus_ForwardToCallback(
      AppCacheBackend::GetStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheBackend::GetStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_GetStatus_ForwardToCallback);
};
class AppCacheBackend_StartUpdate_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_StartUpdate_HandleSyncResponse(
      bool* result, bool* out_success)
      : result_(result), out_success_(out_success) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_StartUpdate_HandleSyncResponse);
};

class AppCacheBackend_StartUpdate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_StartUpdate_ForwardToCallback(
      AppCacheBackend::StartUpdateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheBackend::StartUpdateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_StartUpdate_ForwardToCallback);
};
class AppCacheBackend_SwapCache_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_SwapCache_HandleSyncResponse(
      bool* result, bool* out_success)
      : result_(result), out_success_(out_success) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_SwapCache_HandleSyncResponse);
};

class AppCacheBackend_SwapCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_SwapCache_ForwardToCallback(
      AppCacheBackend::SwapCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheBackend::SwapCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_SwapCache_ForwardToCallback);
};
class AppCacheBackend_GetResourceList_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_GetResourceList_HandleSyncResponse(
      bool* result, std::vector<AppCacheResourceInfoPtr>* out_resources)
      : result_(result), out_resources_(out_resources) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<AppCacheResourceInfoPtr>* out_resources_;DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_GetResourceList_HandleSyncResponse);
};

class AppCacheBackend_GetResourceList_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheBackend_GetResourceList_ForwardToCallback(
      AppCacheBackend::GetResourceListCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheBackend::GetResourceListCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_GetResourceList_ForwardToCallback);
};

AppCacheBackendProxy::AppCacheBackendProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppCacheBackendProxy::RegisterHost(
    int32_t in_host_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::RegisterHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_RegisterHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_RegisterHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheBackendProxy::UnregisterHost(
    int32_t in_host_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::UnregisterHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_UnregisterHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_UnregisterHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheBackendProxy::SetSpawningHostId(
    int32_t in_host_id, int32_t in_spawning_host_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::SetSpawningHostId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_SetSpawningHostId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_SetSpawningHostId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  params->spawning_host_id = in_spawning_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheBackendProxy::SelectCache(
    int32_t in_host_id, const GURL& in_document_url, int64_t in_appcache_document_was_loaded_from, const GURL& in_opt_manifest_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::SelectCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_SelectCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_SelectCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  typename decltype(params->document_url)::BaseType::BufferWriter
      document_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_document_url, buffer, &document_url_writer, &serialization_context);
  params->document_url.Set(
      document_url_writer.is_null() ? nullptr : document_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->document_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null document_url in AppCacheBackend.SelectCache request");
  params->appcache_document_was_loaded_from = in_appcache_document_was_loaded_from;
  typename decltype(params->opt_manifest_url)::BaseType::BufferWriter
      opt_manifest_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_opt_manifest_url, buffer, &opt_manifest_url_writer, &serialization_context);
  params->opt_manifest_url.Set(
      opt_manifest_url_writer.is_null() ? nullptr : opt_manifest_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->opt_manifest_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null opt_manifest_url in AppCacheBackend.SelectCache request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheBackendProxy::SelectCacheForSharedWorker(
    int32_t in_host_id, int64_t in_appcache_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::SelectCacheForSharedWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_SelectCacheForSharedWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_SelectCacheForSharedWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  params->appcache_id = in_appcache_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheBackendProxy::MarkAsForeignEntry(
    int32_t in_host_id, const GURL& in_document_url, int64_t in_appcache_document_was_loaded_from) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::MarkAsForeignEntry");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_MarkAsForeignEntry_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_MarkAsForeignEntry_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  typename decltype(params->document_url)::BaseType::BufferWriter
      document_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_document_url, buffer, &document_url_writer, &serialization_context);
  params->document_url.Set(
      document_url_writer.is_null() ? nullptr : document_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->document_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null document_url in AppCacheBackend.MarkAsForeignEntry request");
  params->appcache_document_was_loaded_from = in_appcache_document_was_loaded_from;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool AppCacheBackendProxy::GetStatus(
    int32_t param_host_id, ::content::mojom::AppCacheStatus* out_param_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::GetStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_GetStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_GetStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = param_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_GetStatus_HandleSyncResponse(
          &result, out_param_status));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheBackendProxy::GetStatus(
    int32_t in_host_id, GetStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::GetStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_GetStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_GetStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_GetStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool AppCacheBackendProxy::StartUpdate(
    int32_t param_host_id, bool* out_param_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::StartUpdate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_StartUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_StartUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = param_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_StartUpdate_HandleSyncResponse(
          &result, out_param_success));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheBackendProxy::StartUpdate(
    int32_t in_host_id, StartUpdateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::StartUpdate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_StartUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_StartUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_StartUpdate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool AppCacheBackendProxy::SwapCache(
    int32_t param_host_id, bool* out_param_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::SwapCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_SwapCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_SwapCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = param_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_SwapCache_HandleSyncResponse(
          &result, out_param_success));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheBackendProxy::SwapCache(
    int32_t in_host_id, SwapCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::SwapCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_SwapCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_SwapCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_SwapCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool AppCacheBackendProxy::GetResourceList(
    int32_t param_host_id, std::vector<AppCacheResourceInfoPtr>* out_param_resources) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::GetResourceList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_GetResourceList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_GetResourceList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = param_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_GetResourceList_HandleSyncResponse(
          &result, out_param_resources));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheBackendProxy::GetResourceList(
    int32_t in_host_id, GetResourceListCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheBackend::GetResourceList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_GetResourceList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_GetResourceList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheBackend_GetResourceList_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class AppCacheBackend_GetStatus_ProxyToResponder {
 public:
  static AppCacheBackend::GetStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheBackend_GetStatus_ProxyToResponder> proxy(
        new AppCacheBackend_GetStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheBackend_GetStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheBackend_GetStatus_ProxyToResponder() {
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
  AppCacheBackend_GetStatus_ProxyToResponder(
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
        << "AppCacheBackend::GetStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::content::mojom::AppCacheStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_GetStatus_ProxyToResponder);
};

bool AppCacheBackend_GetStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::AppCacheBackend::GetStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_GetStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheBackend_GetStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::content::mojom::AppCacheStatus p_status{};
  AppCacheBackend_GetStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::GetStatus response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void AppCacheBackend_GetStatus_ProxyToResponder::Run(
    ::content::mojom::AppCacheStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_GetStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_GetStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::AppCacheStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::GetStatusCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheBackend_GetStatus_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_GetStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheBackend_GetStatus_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::content::mojom::AppCacheStatus p_status{};
  AppCacheBackend_GetStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::GetStatus response deserializer");
    return false;
  }
  *out_status_ = std::move(p_status);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class AppCacheBackend_StartUpdate_ProxyToResponder {
 public:
  static AppCacheBackend::StartUpdateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheBackend_StartUpdate_ProxyToResponder> proxy(
        new AppCacheBackend_StartUpdate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheBackend_StartUpdate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheBackend_StartUpdate_ProxyToResponder() {
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
  AppCacheBackend_StartUpdate_ProxyToResponder(
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
        << "AppCacheBackend::StartUpdateCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_StartUpdate_ProxyToResponder);
};

bool AppCacheBackend_StartUpdate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::AppCacheBackend::StartUpdateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_StartUpdate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheBackend_StartUpdate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheBackend_StartUpdate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::StartUpdate response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void AppCacheBackend_StartUpdate_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_StartUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_StartUpdate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::StartUpdateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheBackend_StartUpdate_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_StartUpdate_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheBackend_StartUpdate_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheBackend_StartUpdate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::StartUpdate response deserializer");
    return false;
  }
  *out_success_ = std::move(p_success);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class AppCacheBackend_SwapCache_ProxyToResponder {
 public:
  static AppCacheBackend::SwapCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheBackend_SwapCache_ProxyToResponder> proxy(
        new AppCacheBackend_SwapCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheBackend_SwapCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheBackend_SwapCache_ProxyToResponder() {
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
  AppCacheBackend_SwapCache_ProxyToResponder(
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
        << "AppCacheBackend::SwapCacheCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_SwapCache_ProxyToResponder);
};

bool AppCacheBackend_SwapCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::AppCacheBackend::SwapCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_SwapCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheBackend_SwapCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheBackend_SwapCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::SwapCache response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void AppCacheBackend_SwapCache_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_SwapCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_SwapCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SwapCacheCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheBackend_SwapCache_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_SwapCache_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheBackend_SwapCache_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheBackend_SwapCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::SwapCache response deserializer");
    return false;
  }
  *out_success_ = std::move(p_success);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class AppCacheBackend_GetResourceList_ProxyToResponder {
 public:
  static AppCacheBackend::GetResourceListCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheBackend_GetResourceList_ProxyToResponder> proxy(
        new AppCacheBackend_GetResourceList_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheBackend_GetResourceList_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheBackend_GetResourceList_ProxyToResponder() {
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
  AppCacheBackend_GetResourceList_ProxyToResponder(
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
        << "AppCacheBackend::GetResourceListCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<AppCacheResourceInfoPtr> in_resources);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheBackend_GetResourceList_ProxyToResponder);
};

bool AppCacheBackend_GetResourceList_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::AppCacheBackend::GetResourceListCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_GetResourceList_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheBackend_GetResourceList_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AppCacheResourceInfoPtr> p_resources{};
  AppCacheBackend_GetResourceList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResources(&p_resources))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::GetResourceList response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_resources));
  return true;
}

void AppCacheBackend_GetResourceList_ProxyToResponder::Run(
    std::vector<AppCacheResourceInfoPtr> in_resources) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_GetResourceList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheBackend_GetResourceList_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->resources)::BaseType::BufferWriter
      resources_writer;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::AppCacheResourceInfoDataView>>(
      in_resources, buffer, &resources_writer, &resources_validate_params,
      &serialization_context);
  params->resources.Set(
      resources_writer.is_null() ? nullptr : resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::GetResourceListCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheBackend_GetResourceList_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheBackend_GetResourceList_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheBackend_GetResourceList_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AppCacheResourceInfoPtr> p_resources{};
  AppCacheBackend_GetResourceList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResources(&p_resources))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AppCacheBackend::GetResourceList response deserializer");
    return false;
  }
  *out_resources_ = std::move(p_resources);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool AppCacheBackendStubDispatch::Accept(
    AppCacheBackend* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppCacheBackend_RegisterHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::RegisterHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_RegisterHost_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_RegisterHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      AppCacheBackend_RegisterHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::RegisterHost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterHost(
std::move(p_host_id));
      return true;
    }
    case internal::kAppCacheBackend_UnregisterHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::UnregisterHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_UnregisterHost_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_UnregisterHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      AppCacheBackend_UnregisterHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::UnregisterHost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UnregisterHost(
std::move(p_host_id));
      return true;
    }
    case internal::kAppCacheBackend_SetSpawningHostId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SetSpawningHostId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_SetSpawningHostId_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_SetSpawningHostId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      int32_t p_spawning_host_id{};
      AppCacheBackend_SetSpawningHostId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      p_spawning_host_id = input_data_view.spawning_host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::SetSpawningHostId deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSpawningHostId(
std::move(p_host_id), 
std::move(p_spawning_host_id));
      return true;
    }
    case internal::kAppCacheBackend_SelectCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SelectCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_SelectCache_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_SelectCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      GURL p_document_url{};
      int64_t p_appcache_document_was_loaded_from{};
      GURL p_opt_manifest_url{};
      AppCacheBackend_SelectCache_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!input_data_view.ReadDocumentUrl(&p_document_url))
        success = false;
      p_appcache_document_was_loaded_from = input_data_view.appcache_document_was_loaded_from();
      if (!input_data_view.ReadOptManifestUrl(&p_opt_manifest_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::SelectCache deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectCache(
std::move(p_host_id), 
std::move(p_document_url), 
std::move(p_appcache_document_was_loaded_from), 
std::move(p_opt_manifest_url));
      return true;
    }
    case internal::kAppCacheBackend_SelectCacheForSharedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SelectCacheForSharedWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_SelectCacheForSharedWorker_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_SelectCacheForSharedWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      int64_t p_appcache_id{};
      AppCacheBackend_SelectCacheForSharedWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      p_appcache_id = input_data_view.appcache_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::SelectCacheForSharedWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectCacheForSharedWorker(
std::move(p_host_id), 
std::move(p_appcache_id));
      return true;
    }
    case internal::kAppCacheBackend_MarkAsForeignEntry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::MarkAsForeignEntry",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_MarkAsForeignEntry_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_MarkAsForeignEntry_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      GURL p_document_url{};
      int64_t p_appcache_document_was_loaded_from{};
      AppCacheBackend_MarkAsForeignEntry_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!input_data_view.ReadDocumentUrl(&p_document_url))
        success = false;
      p_appcache_document_was_loaded_from = input_data_view.appcache_document_was_loaded_from();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::MarkAsForeignEntry deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MarkAsForeignEntry(
std::move(p_host_id), 
std::move(p_document_url), 
std::move(p_appcache_document_was_loaded_from));
      return true;
    }
    case internal::kAppCacheBackend_GetStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::GetStatus",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_StartUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::StartUpdate",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_SwapCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SwapCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_GetResourceList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::GetResourceList",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool AppCacheBackendStubDispatch::AcceptWithResponder(
    AppCacheBackend* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppCacheBackend_RegisterHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::RegisterHost",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_UnregisterHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::UnregisterHost",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_SetSpawningHostId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SetSpawningHostId",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_SelectCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SelectCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_SelectCacheForSharedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SelectCacheForSharedWorker",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_MarkAsForeignEntry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::MarkAsForeignEntry",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheBackend_GetStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::GetStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheBackend_GetStatus_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheBackend_GetStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      AppCacheBackend_GetStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::GetStatus deserializer");
        return false;
      }
      AppCacheBackend::GetStatusCallback callback =
          AppCacheBackend_GetStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetStatus(
std::move(p_host_id), std::move(callback));
      return true;
    }
    case internal::kAppCacheBackend_StartUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::StartUpdate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheBackend_StartUpdate_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheBackend_StartUpdate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      AppCacheBackend_StartUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::StartUpdate deserializer");
        return false;
      }
      AppCacheBackend::StartUpdateCallback callback =
          AppCacheBackend_StartUpdate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartUpdate(
std::move(p_host_id), std::move(callback));
      return true;
    }
    case internal::kAppCacheBackend_SwapCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::SwapCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheBackend_SwapCache_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheBackend_SwapCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      AppCacheBackend_SwapCache_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::SwapCache deserializer");
        return false;
      }
      AppCacheBackend::SwapCacheCallback callback =
          AppCacheBackend_SwapCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SwapCache(
std::move(p_host_id), std::move(callback));
      return true;
    }
    case internal::kAppCacheBackend_GetResourceList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheBackend::GetResourceList",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheBackend_GetResourceList_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheBackend_GetResourceList_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      AppCacheBackend_GetResourceList_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheBackend::GetResourceList deserializer");
        return false;
      }
      AppCacheBackend::GetResourceListCallback callback =
          AppCacheBackend_GetResourceList_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetResourceList(
std::move(p_host_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool AppCacheBackendRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheBackend RequestValidator");

  switch (message->header()->name) {
    case internal::kAppCacheBackend_RegisterHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_RegisterHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_UnregisterHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_UnregisterHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_SetSpawningHostId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_SetSpawningHostId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_SelectCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_SelectCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_SelectCacheForSharedWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_SelectCacheForSharedWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_MarkAsForeignEntry_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_MarkAsForeignEntry_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_GetStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_GetStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_StartUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_StartUpdate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_SwapCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_SwapCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_GetResourceList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_GetResourceList_Params_Data>(
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

bool AppCacheBackendResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheBackend ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAppCacheBackend_GetStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_GetStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_StartUpdate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_StartUpdate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_SwapCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_SwapCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheBackend_GetResourceList_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_GetResourceList_ResponseParams_Data>(
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
void AppCacheBackendInterceptorForTesting::RegisterHost(int32_t host_id) {
  GetForwardingInterface()->RegisterHost(std::move(host_id));
}
void AppCacheBackendInterceptorForTesting::UnregisterHost(int32_t host_id) {
  GetForwardingInterface()->UnregisterHost(std::move(host_id));
}
void AppCacheBackendInterceptorForTesting::SetSpawningHostId(int32_t host_id, int32_t spawning_host_id) {
  GetForwardingInterface()->SetSpawningHostId(std::move(host_id), std::move(spawning_host_id));
}
void AppCacheBackendInterceptorForTesting::SelectCache(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) {
  GetForwardingInterface()->SelectCache(std::move(host_id), std::move(document_url), std::move(appcache_document_was_loaded_from), std::move(opt_manifest_url));
}
void AppCacheBackendInterceptorForTesting::SelectCacheForSharedWorker(int32_t host_id, int64_t appcache_id) {
  GetForwardingInterface()->SelectCacheForSharedWorker(std::move(host_id), std::move(appcache_id));
}
void AppCacheBackendInterceptorForTesting::MarkAsForeignEntry(int32_t host_id, const GURL& document_url, int64_t appcache_document_was_loaded_from) {
  GetForwardingInterface()->MarkAsForeignEntry(std::move(host_id), std::move(document_url), std::move(appcache_document_was_loaded_from));
}
void AppCacheBackendInterceptorForTesting::GetStatus(int32_t host_id, GetStatusCallback callback) {
  GetForwardingInterface()->GetStatus(std::move(host_id), std::move(callback));
}
void AppCacheBackendInterceptorForTesting::StartUpdate(int32_t host_id, StartUpdateCallback callback) {
  GetForwardingInterface()->StartUpdate(std::move(host_id), std::move(callback));
}
void AppCacheBackendInterceptorForTesting::SwapCache(int32_t host_id, SwapCacheCallback callback) {
  GetForwardingInterface()->SwapCache(std::move(host_id), std::move(callback));
}
void AppCacheBackendInterceptorForTesting::GetResourceList(int32_t host_id, GetResourceListCallback callback) {
  GetForwardingInterface()->GetResourceList(std::move(host_id), std::move(callback));
}
AppCacheBackendAsyncWaiter::AppCacheBackendAsyncWaiter(
    AppCacheBackend* proxy) : proxy_(proxy) {}

AppCacheBackendAsyncWaiter::~AppCacheBackendAsyncWaiter() = default;

void AppCacheBackendAsyncWaiter::GetStatus(
    int32_t host_id, ::content::mojom::AppCacheStatus* out_status) {
  base::RunLoop loop;
  proxy_->GetStatus(std::move(host_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::content::mojom::AppCacheStatus* out_status
,
             ::content::mojom::AppCacheStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void AppCacheBackendAsyncWaiter::StartUpdate(
    int32_t host_id, bool* out_success) {
  base::RunLoop loop;
  proxy_->StartUpdate(std::move(host_id),
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
void AppCacheBackendAsyncWaiter::SwapCache(
    int32_t host_id, bool* out_success) {
  base::RunLoop loop;
  proxy_->SwapCache(std::move(host_id),
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
void AppCacheBackendAsyncWaiter::GetResourceList(
    int32_t host_id, std::vector<AppCacheResourceInfoPtr>* out_resources) {
  base::RunLoop loop;
  proxy_->GetResourceList(std::move(host_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<AppCacheResourceInfoPtr>* out_resources
,
             std::vector<AppCacheResourceInfoPtr> resources) {*out_resources = std::move(resources);
            loop->Quit();
          },
          &loop,
          out_resources));
  loop.Run();
}

const char AppCacheFrontend::Name_[] = "content.mojom.AppCacheFrontend";

AppCacheFrontendProxy::AppCacheFrontendProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppCacheFrontendProxy::CacheSelected(
    int32_t in_host_id, ::content::mojom::AppCacheInfoPtr in_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::CacheSelected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_CacheSelected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_CacheSelected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::content::mojom::AppCacheInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in AppCacheFrontend.CacheSelected request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::StatusChanged(
    const std::vector<int32_t>& in_host_ids, ::content::mojom::AppCacheStatus in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::StatusChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_StatusChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_StatusChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_ids)::BaseType::BufferWriter
      host_ids_writer;
  const mojo::internal::ContainerValidateParams host_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_host_ids, buffer, &host_ids_writer, &host_ids_validate_params,
      &serialization_context);
  params->host_ids.Set(
      host_ids_writer.is_null() ? nullptr : host_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_ids in AppCacheFrontend.StatusChanged request");
  mojo::internal::Serialize<::content::mojom::AppCacheStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::EventRaised(
    const std::vector<int32_t>& in_host_ids, AppCacheEventID in_event_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::EventRaised");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_EventRaised_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_EventRaised_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_ids)::BaseType::BufferWriter
      host_ids_writer;
  const mojo::internal::ContainerValidateParams host_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_host_ids, buffer, &host_ids_writer, &host_ids_validate_params,
      &serialization_context);
  params->host_ids.Set(
      host_ids_writer.is_null() ? nullptr : host_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_ids in AppCacheFrontend.EventRaised request");
  mojo::internal::Serialize<::content::mojom::AppCacheEventID>(
      in_event_id, &params->event_id);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::ProgressEventRaised(
    const std::vector<int32_t>& in_host_ids, const GURL& in_url, int32_t in_total, int32_t in_complete) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::ProgressEventRaised");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_ProgressEventRaised_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_ProgressEventRaised_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_ids)::BaseType::BufferWriter
      host_ids_writer;
  const mojo::internal::ContainerValidateParams host_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_host_ids, buffer, &host_ids_writer, &host_ids_validate_params,
      &serialization_context);
  params->host_ids.Set(
      host_ids_writer.is_null() ? nullptr : host_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_ids in AppCacheFrontend.ProgressEventRaised request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in AppCacheFrontend.ProgressEventRaised request");
  params->total = in_total;
  params->complete = in_complete;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::ErrorEventRaised(
    const std::vector<int32_t>& in_host_ids, AppCacheErrorDetailsPtr in_error_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::ErrorEventRaised");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_ErrorEventRaised_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_ErrorEventRaised_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_ids)::BaseType::BufferWriter
      host_ids_writer;
  const mojo::internal::ContainerValidateParams host_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_host_ids, buffer, &host_ids_writer, &host_ids_validate_params,
      &serialization_context);
  params->host_ids.Set(
      host_ids_writer.is_null() ? nullptr : host_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_ids in AppCacheFrontend.ErrorEventRaised request");
  typename decltype(params->error_details)::BaseType::BufferWriter
      error_details_writer;
  mojo::internal::Serialize<::content::mojom::AppCacheErrorDetailsDataView>(
      in_error_details, buffer, &error_details_writer, &serialization_context);
  params->error_details.Set(
      error_details_writer.is_null() ? nullptr : error_details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error_details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error_details in AppCacheFrontend.ErrorEventRaised request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::LogMessage(
    int32_t in_host_id, int32_t in_log_level, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::LogMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_LogMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_LogMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  params->log_level = in_log_level;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in AppCacheFrontend.LogMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::ContentBlocked(
    int32_t in_host_id, const GURL& in_manifest_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::ContentBlocked");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_ContentBlocked_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_ContentBlocked_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  typename decltype(params->manifest_url)::BaseType::BufferWriter
      manifest_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_manifest_url, buffer, &manifest_url_writer, &serialization_context);
  params->manifest_url.Set(
      manifest_url_writer.is_null() ? nullptr : manifest_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->manifest_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null manifest_url in AppCacheFrontend.ContentBlocked request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::SetSubresourceFactory(
    int32_t in_host_id, ::network::mojom::URLLoaderFactoryPtr in_url_loader_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AppCacheFrontend::SetSubresourceFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_SetSubresourceFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AppCacheFrontend_SetSubresourceFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
      in_url_loader_factory, &params->url_loader_factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->url_loader_factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid url_loader_factory in AppCacheFrontend.SetSubresourceFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AppCacheFrontendStubDispatch::Accept(
    AppCacheFrontend* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppCacheFrontend_CacheSelected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::CacheSelected",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_CacheSelected_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_CacheSelected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      ::content::mojom::AppCacheInfoPtr p_info{};
      AppCacheFrontend_CacheSelected_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::CacheSelected deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CacheSelected(
std::move(p_host_id), 
std::move(p_info));
      return true;
    }
    case internal::kAppCacheFrontend_StatusChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::StatusChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_StatusChanged_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_StatusChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<int32_t> p_host_ids{};
      ::content::mojom::AppCacheStatus p_status{};
      AppCacheFrontend_StatusChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostIds(&p_host_ids))
        success = false;
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::StatusChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StatusChanged(
std::move(p_host_ids), 
std::move(p_status));
      return true;
    }
    case internal::kAppCacheFrontend_EventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::EventRaised",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_EventRaised_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_EventRaised_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<int32_t> p_host_ids{};
      AppCacheEventID p_event_id{};
      AppCacheFrontend_EventRaised_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostIds(&p_host_ids))
        success = false;
      if (!input_data_view.ReadEventId(&p_event_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::EventRaised deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EventRaised(
std::move(p_host_ids), 
std::move(p_event_id));
      return true;
    }
    case internal::kAppCacheFrontend_ProgressEventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::ProgressEventRaised",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_ProgressEventRaised_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_ProgressEventRaised_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<int32_t> p_host_ids{};
      GURL p_url{};
      int32_t p_total{};
      int32_t p_complete{};
      AppCacheFrontend_ProgressEventRaised_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostIds(&p_host_ids))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_total = input_data_view.total();
      p_complete = input_data_view.complete();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::ProgressEventRaised deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProgressEventRaised(
std::move(p_host_ids), 
std::move(p_url), 
std::move(p_total), 
std::move(p_complete));
      return true;
    }
    case internal::kAppCacheFrontend_ErrorEventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::ErrorEventRaised",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_ErrorEventRaised_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_ErrorEventRaised_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<int32_t> p_host_ids{};
      AppCacheErrorDetailsPtr p_error_details{};
      AppCacheFrontend_ErrorEventRaised_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostIds(&p_host_ids))
        success = false;
      if (!input_data_view.ReadErrorDetails(&p_error_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::ErrorEventRaised deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ErrorEventRaised(
std::move(p_host_ids), 
std::move(p_error_details));
      return true;
    }
    case internal::kAppCacheFrontend_LogMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::LogMessage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_LogMessage_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_LogMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      int32_t p_log_level{};
      std::string p_message{};
      AppCacheFrontend_LogMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      p_log_level = input_data_view.log_level();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::LogMessage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LogMessage(
std::move(p_host_id), 
std::move(p_log_level), 
std::move(p_message));
      return true;
    }
    case internal::kAppCacheFrontend_ContentBlocked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::ContentBlocked",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_ContentBlocked_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_ContentBlocked_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      GURL p_manifest_url{};
      AppCacheFrontend_ContentBlocked_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      if (!input_data_view.ReadManifestUrl(&p_manifest_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::ContentBlocked deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ContentBlocked(
std::move(p_host_id), 
std::move(p_manifest_url));
      return true;
    }
    case internal::kAppCacheFrontend_SetSubresourceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::SetSubresourceFactory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_SetSubresourceFactory_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_SetSubresourceFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      ::network::mojom::URLLoaderFactoryPtr p_url_loader_factory{};
      AppCacheFrontend_SetSubresourceFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      p_url_loader_factory =
          input_data_view.TakeUrlLoaderFactory<decltype(p_url_loader_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppCacheFrontend::SetSubresourceFactory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSubresourceFactory(
std::move(p_host_id), 
std::move(p_url_loader_factory));
      return true;
    }
  }
  return false;
}

// static
bool AppCacheFrontendStubDispatch::AcceptWithResponder(
    AppCacheFrontend* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppCacheFrontend_CacheSelected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::CacheSelected",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_StatusChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::StatusChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_EventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::EventRaised",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_ProgressEventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::ProgressEventRaised",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_ErrorEventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::ErrorEventRaised",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_LogMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::LogMessage",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_ContentBlocked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::ContentBlocked",
               "message", message->name());
#endif
      break;
    }
    case internal::kAppCacheFrontend_SetSubresourceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AppCacheFrontend::SetSubresourceFactory",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AppCacheFrontendRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheFrontend RequestValidator");

  switch (message->header()->name) {
    case internal::kAppCacheFrontend_CacheSelected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_CacheSelected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_StatusChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_StatusChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_EventRaised_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_EventRaised_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_ProgressEventRaised_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_ProgressEventRaised_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_ErrorEventRaised_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_ErrorEventRaised_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_LogMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_LogMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_ContentBlocked_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_ContentBlocked_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_SetSubresourceFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_SetSubresourceFactory_Params_Data>(
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

void AppCacheFrontendInterceptorForTesting::CacheSelected(int32_t host_id, ::content::mojom::AppCacheInfoPtr info) {
  GetForwardingInterface()->CacheSelected(std::move(host_id), std::move(info));
}
void AppCacheFrontendInterceptorForTesting::StatusChanged(const std::vector<int32_t>& host_ids, ::content::mojom::AppCacheStatus status) {
  GetForwardingInterface()->StatusChanged(std::move(host_ids), std::move(status));
}
void AppCacheFrontendInterceptorForTesting::EventRaised(const std::vector<int32_t>& host_ids, AppCacheEventID event_id) {
  GetForwardingInterface()->EventRaised(std::move(host_ids), std::move(event_id));
}
void AppCacheFrontendInterceptorForTesting::ProgressEventRaised(const std::vector<int32_t>& host_ids, const GURL& url, int32_t total, int32_t complete) {
  GetForwardingInterface()->ProgressEventRaised(std::move(host_ids), std::move(url), std::move(total), std::move(complete));
}
void AppCacheFrontendInterceptorForTesting::ErrorEventRaised(const std::vector<int32_t>& host_ids, AppCacheErrorDetailsPtr error_details) {
  GetForwardingInterface()->ErrorEventRaised(std::move(host_ids), std::move(error_details));
}
void AppCacheFrontendInterceptorForTesting::LogMessage(int32_t host_id, int32_t log_level, const std::string& message) {
  GetForwardingInterface()->LogMessage(std::move(host_id), std::move(log_level), std::move(message));
}
void AppCacheFrontendInterceptorForTesting::ContentBlocked(int32_t host_id, const GURL& manifest_url) {
  GetForwardingInterface()->ContentBlocked(std::move(host_id), std::move(manifest_url));
}
void AppCacheFrontendInterceptorForTesting::SetSubresourceFactory(int32_t host_id, ::network::mojom::URLLoaderFactoryPtr url_loader_factory) {
  GetForwardingInterface()->SetSubresourceFactory(std::move(host_id), std::move(url_loader_factory));
}
AppCacheFrontendAsyncWaiter::AppCacheFrontendAsyncWaiter(
    AppCacheFrontend* proxy) : proxy_(proxy) {}

AppCacheFrontendAsyncWaiter::~AppCacheFrontendAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::AppCacheResourceInfo::DataView, ::content::mojom::AppCacheResourceInfoPtr>::Read(
    ::content::mojom::AppCacheResourceInfo::DataView input,
    ::content::mojom::AppCacheResourceInfoPtr* output) {
  bool success = true;
  ::content::mojom::AppCacheResourceInfoPtr result(::content::mojom::AppCacheResourceInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->size = input.size();
      result->is_master = input.is_master();
      result->is_manifest = input.is_manifest();
      result->is_intercept = input.is_intercept();
      result->is_fallback = input.is_fallback();
      result->is_foreign = input.is_foreign();
      result->is_explicit = input.is_explicit();
      result->response_id = input.response_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::AppCacheErrorDetails::DataView, ::content::mojom::AppCacheErrorDetailsPtr>::Read(
    ::content::mojom::AppCacheErrorDetails::DataView input,
    ::content::mojom::AppCacheErrorDetailsPtr* output) {
  bool success = true;
  ::content::mojom::AppCacheErrorDetailsPtr result(::content::mojom::AppCacheErrorDetails::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadReason(&result->reason))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      result->status = input.status();
      result->is_cross_origin = input.is_cross_origin();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif