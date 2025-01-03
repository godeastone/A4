// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_H_

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
#include "content/common/service_worker/embedded_worker.mojom-shared-internal.h"
#include "content/common/native_types.mojom-shared.h"
#include "content/common/service_worker/controller_service_worker.mojom-shared.h"
#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared.h"
#include "content/common/service_worker/service_worker_provider.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared.h"
#include "third_party/blink/public/web/console_message.mojom-shared.h"
#include "third_party/blink/public/web/devtools_agent.mojom-shared.h"
#include "third_party/blink/public/web/worker_content_settings_proxy.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class EmbeddedWorkerStartParamsDataView;

class EmbeddedWorkerStartTimingDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::EmbeddedWorkerStartParamsDataView> {
  using Data = ::content::mojom::internal::EmbeddedWorkerStartParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::EmbeddedWorkerStartTimingDataView> {
  using Data = ::content::mojom::internal::EmbeddedWorkerStartTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class EmbeddedWorkerInstanceClientInterfaceBase {};

using EmbeddedWorkerInstanceClientPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
using EmbeddedWorkerInstanceClientRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
using EmbeddedWorkerInstanceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
using EmbeddedWorkerInstanceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
class EmbeddedWorkerInstanceHostInterfaceBase {};

using EmbeddedWorkerInstanceHostPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
using EmbeddedWorkerInstanceHostRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
using EmbeddedWorkerInstanceHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
using EmbeddedWorkerInstanceHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
class EmbeddedWorkerStartParamsDataView {
 public:
  EmbeddedWorkerStartParamsDataView() {}

  EmbeddedWorkerStartParamsDataView(
      internal::EmbeddedWorkerStartParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t embedded_worker_id() const {
    return data_->embedded_worker_id;
  }
  int64_t service_worker_version_id() const {
    return data_->service_worker_version_id;
  }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetScriptUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptUrl(UserType* output) {
    auto* pointer = data_->script_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t worker_devtools_agent_route_id() const {
    return data_->worker_devtools_agent_route_id;
  }
  inline void GetDevtoolsWorkerTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsWorkerToken(UserType* output) {
    auto* pointer = data_->devtools_worker_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  bool pause_after_download() const {
    return data_->pause_after_download;
  }
  bool wait_for_debugger() const {
    return data_->wait_for_debugger;
  }
  bool is_installed() const {
    return data_->is_installed;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadV8CacheOptions(UserType* output) const {
    auto data_value = data_->v8_cache_options;
    return mojo::internal::Deserialize<::content::mojom::V8CacheOptions>(
        data_value, output);
  }

  ::content::mojom::V8CacheOptions v8_cache_options() const {
    return static_cast<::content::mojom::V8CacheOptions>(data_->v8_cache_options);
  }
  bool data_saver_enabled() const {
    return data_->data_saver_enabled;
  }
  template <typename UserType>
  UserType TakeDispatcherRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerEventDispatcherRequestDataView>(
            &data_->dispatcher_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeControllerRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerRequestDataView>(
            &data_->controller_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInstalledScriptsInfoDataView(
      ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalledScriptsInfo(UserType* output) {
    auto* pointer = data_->installed_scripts_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeInstanceHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::EmbeddedWorkerInstanceHostAssociatedPtrInfoDataView>(
            &data_->instance_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetProviderInfoDataView(
      ::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderInfo(UserType* output) {
    auto* pointer = data_->provider_info.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeContentSettingsProxy() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
            &data_->content_settings_proxy, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedWorkerStartParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerStartTimingDataView {
 public:
  EmbeddedWorkerStartTimingDataView() {}

  EmbeddedWorkerStartTimingDataView(
      internal::EmbeddedWorkerStartTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlinkInitializedTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlinkInitializedTime(UserType* output) {
    auto* pointer = data_->blink_initialized_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetStartWorkerReceivedTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartWorkerReceivedTime(UserType* output) {
    auto* pointer = data_->start_worker_received_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerStartTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      EmbeddedWorkerStartParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::EmbeddedWorkerStartParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevel(UserType* output) const {
    auto data_value = data_->level;
    return mojo::internal::Deserialize<::blink::mojom::ConsoleMessageLevel>(
        data_value, output);
  }

  ::blink::mojom::ConsoleMessageLevel level() const {
    return static_cast<::blink::mojom::ConsoleMessageLevel>(data_->level);
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
  internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView {
 public:
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView() {}

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView(
      internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDevtoolsAgent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsAgentAssociatedRequestDataView>(
            &data_->devtools_agent, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::WebFeature>(
        data_value, output);
  }

  ::blink::mojom::WebFeature feature() const {
    return static_cast<::blink::mojom::WebFeature>(data_->feature);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnScriptLoadFailed_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnThreadStarted_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnThreadStarted_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnThreadStarted_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t thread_id() const {
    return data_->thread_id;
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnScriptEvaluated_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnScriptEvaluated_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data* data_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimingDataView(
      EmbeddedWorkerStartTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTiming(UserType* output) {
    auto* pointer = data_->start_timing.Get();
    return mojo::internal::Deserialize<::content::mojom::EmbeddedWorkerStartTimingDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
  inline void GetSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceUrl(UserType* output) {
    auto* pointer = data_->source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t source_identifier() const {
    return data_->source_identifier;
  }
  int32_t message_level() const {
    return data_->message_level;
  }
  inline void GetMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  inline void GetSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceUrl(UserType* output) {
    auto* pointer = data_->source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView {
 public:
  EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView() {}

  EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView(
      internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::EmbeddedWorkerStartParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::EmbeddedWorkerStartParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::EmbeddedWorkerStartParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->embedded_worker_id = CallWithContext(Traits::embedded_worker_id, input, custom_context);
    (*output)->service_worker_version_id = CallWithContext(Traits::service_worker_version_id, input, custom_context);
    decltype(CallWithContext(Traits::scope, input, custom_context)) in_scope = CallWithContext(Traits::scope, input, custom_context);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in EmbeddedWorkerStartParams struct");
    decltype(CallWithContext(Traits::script_url, input, custom_context)) in_script_url = CallWithContext(Traits::script_url, input, custom_context);
    typename decltype((*output)->script_url)::BaseType::BufferWriter
        script_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_script_url, buffer, &script_url_writer, context);
    (*output)->script_url.Set(
        script_url_writer.is_null() ? nullptr : script_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_url in EmbeddedWorkerStartParams struct");
    (*output)->worker_devtools_agent_route_id = CallWithContext(Traits::worker_devtools_agent_route_id, input, custom_context);
    decltype(CallWithContext(Traits::devtools_worker_token, input, custom_context)) in_devtools_worker_token = CallWithContext(Traits::devtools_worker_token, input, custom_context);
    typename decltype((*output)->devtools_worker_token)::BaseType::BufferWriter
        devtools_worker_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_devtools_worker_token, buffer, &devtools_worker_token_writer, context);
    (*output)->devtools_worker_token.Set(
        devtools_worker_token_writer.is_null() ? nullptr : devtools_worker_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->devtools_worker_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devtools_worker_token in EmbeddedWorkerStartParams struct");
    (*output)->pause_after_download = CallWithContext(Traits::pause_after_download, input, custom_context);
    (*output)->wait_for_debugger = CallWithContext(Traits::wait_for_debugger, input, custom_context);
    (*output)->is_installed = CallWithContext(Traits::is_installed, input, custom_context);
    mojo::internal::Serialize<::content::mojom::V8CacheOptions>(
        CallWithContext(Traits::v8_cache_options, input, custom_context), &(*output)->v8_cache_options);
    (*output)->data_saver_enabled = CallWithContext(Traits::data_saver_enabled, input, custom_context);
    decltype(CallWithContext(Traits::dispatcher_request, input, custom_context)) in_dispatcher_request = CallWithContext(Traits::dispatcher_request, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerEventDispatcherRequestDataView>(
        in_dispatcher_request, &(*output)->dispatcher_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->dispatcher_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid dispatcher_request in EmbeddedWorkerStartParams struct");
    decltype(CallWithContext(Traits::controller_request, input, custom_context)) in_controller_request = CallWithContext(Traits::controller_request, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ControllerServiceWorkerRequestDataView>(
        in_controller_request, &(*output)->controller_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->controller_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid controller_request in EmbeddedWorkerStartParams struct");
    decltype(CallWithContext(Traits::installed_scripts_info, input, custom_context)) in_installed_scripts_info = CallWithContext(Traits::installed_scripts_info, input, custom_context);
    typename decltype((*output)->installed_scripts_info)::BaseType::BufferWriter
        installed_scripts_info_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView>(
        in_installed_scripts_info, buffer, &installed_scripts_info_writer, context);
    (*output)->installed_scripts_info.Set(
        installed_scripts_info_writer.is_null() ? nullptr : installed_scripts_info_writer.data());
    decltype(CallWithContext(Traits::instance_host, input, custom_context)) in_instance_host = CallWithContext(Traits::instance_host, input, custom_context);
    mojo::internal::Serialize<::content::mojom::EmbeddedWorkerInstanceHostAssociatedPtrInfoDataView>(
        in_instance_host, &(*output)->instance_host, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->instance_host),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid instance_host in EmbeddedWorkerStartParams struct");
    decltype(CallWithContext(Traits::provider_info, input, custom_context)) in_provider_info = CallWithContext(Traits::provider_info, input, custom_context);
    typename decltype((*output)->provider_info)::BaseType::BufferWriter
        provider_info_writer;
    mojo::internal::Serialize<::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView>(
        in_provider_info, buffer, &provider_info_writer, context);
    (*output)->provider_info.Set(
        provider_info_writer.is_null() ? nullptr : provider_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->provider_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null provider_info in EmbeddedWorkerStartParams struct");
    decltype(CallWithContext(Traits::content_settings_proxy, input, custom_context)) in_content_settings_proxy = CallWithContext(Traits::content_settings_proxy, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
        in_content_settings_proxy, &(*output)->content_settings_proxy, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->content_settings_proxy),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid content_settings_proxy in EmbeddedWorkerStartParams struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::EmbeddedWorkerStartParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::EmbeddedWorkerStartParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::EmbeddedWorkerStartTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::EmbeddedWorkerStartTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::EmbeddedWorkerStartTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::blink_initialized_time, input, custom_context)) in_blink_initialized_time = CallWithContext(Traits::blink_initialized_time, input, custom_context);
    typename decltype((*output)->blink_initialized_time)::BaseType::BufferWriter
        blink_initialized_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_blink_initialized_time, buffer, &blink_initialized_time_writer, context);
    (*output)->blink_initialized_time.Set(
        blink_initialized_time_writer.is_null() ? nullptr : blink_initialized_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->blink_initialized_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null blink_initialized_time in EmbeddedWorkerStartTiming struct");
    decltype(CallWithContext(Traits::start_worker_received_time, input, custom_context)) in_start_worker_received_time = CallWithContext(Traits::start_worker_received_time, input, custom_context);
    typename decltype((*output)->start_worker_received_time)::BaseType::BufferWriter
        start_worker_received_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_start_worker_received_time, buffer, &start_worker_received_time_writer, context);
    (*output)->start_worker_received_time.Set(
        start_worker_received_time_writer.is_null() ? nullptr : start_worker_received_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->start_worker_received_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null start_worker_received_time in EmbeddedWorkerStartTiming struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::EmbeddedWorkerStartTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::EmbeddedWorkerStartTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void EmbeddedWorkerStartParamsDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetDevtoolsWorkerTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_worker_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetInstalledScriptsInfoDataView(
    ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView* output) {
  auto pointer = data_->installed_scripts_info.Get();
  *output = ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetProviderInfoDataView(
    ::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView* output) {
  auto pointer = data_->provider_info.Get();
  *output = ::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView(pointer, context_);
}


inline void EmbeddedWorkerStartTimingDataView::GetBlinkInitializedTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->blink_initialized_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void EmbeddedWorkerStartTimingDataView::GetStartWorkerReceivedTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->start_worker_received_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}


inline void EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView::GetParamsDataView(
    EmbeddedWorkerStartParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = EmbeddedWorkerStartParamsDataView(pointer, context_);
}






inline void EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


















inline void EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView::GetStartTimingDataView(
    EmbeddedWorkerStartTimingDataView* output) {
  auto pointer = data_->start_timing.Get();
  *output = EmbeddedWorkerStartTimingDataView(pointer, context_);
}


inline void EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView::GetErrorMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->error_message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView::GetSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView::GetSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_H_
