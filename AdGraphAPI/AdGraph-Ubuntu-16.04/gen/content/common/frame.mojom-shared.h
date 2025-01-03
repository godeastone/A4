// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_MOJOM_SHARED_H_
#define CONTENT_COMMON_FRAME_MOJOM_SHARED_H_

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
#include "content/common/frame.mojom-shared-internal.h"
#include "content/common/navigation_params.mojom-shared.h"
#include "content/common/service_worker/controller_service_worker.mojom-shared.h"
#include "content/common/url_loader_factory_bundle.mojom-shared.h"
#include "content/public/common/resource_type.mojom-shared.h"
#include "content/public/common/resource_load_info.mojom-shared.h"
#include "content/public/common/transferrable_url_loader.mojom-shared.h"
#include "content/public/common/window_container_type.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared.h"
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared.h"
#include "third_party/blink/public/platform/referrer.mojom-shared.h"
#include "third_party/blink/public/web/commit_result.mojom-shared.h"
#include "third_party/blink/public/web/window_features.mojom-shared.h"
#include "ui/base/mojo/window_open_disposition.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
using CommonNavigationParamsDataView = mojo::native::NativeStructDataView;

using RequestNavigationParamsDataView = mojo::native::NativeStructDataView;

class CreateNewWindowParamsDataView;

class CreateNewWindowReplyDataView;

using DidCommitProvisionalLoadParamsDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::CreateNewWindowParamsDataView> {
  using Data = ::content::mojom::internal::CreateNewWindowParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::CreateNewWindowReplyDataView> {
  using Data = ::content::mojom::internal::CreateNewWindowReply_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class CreateNewWindowStatus : int32_t {
  kIgnore,
  kReuse,
  kSuccess,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CreateNewWindowStatus value) {
  switch(value) {
    case CreateNewWindowStatus::kIgnore:
      return os << "CreateNewWindowStatus::kIgnore";
    case CreateNewWindowStatus::kReuse:
      return os << "CreateNewWindowStatus::kReuse";
    case CreateNewWindowStatus::kSuccess:
      return os << "CreateNewWindowStatus::kSuccess";
    default:
      return os << "Unknown CreateNewWindowStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CreateNewWindowStatus value) {
  return internal::CreateNewWindowStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FrameInterfaceBase {};

using FramePtrDataView =
    mojo::InterfacePtrDataView<FrameInterfaceBase>;
using FrameRequestDataView =
    mojo::InterfaceRequestDataView<FrameInterfaceBase>;
using FrameAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameInterfaceBase>;
using FrameAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameInterfaceBase>;
class FrameNavigationControlInterfaceBase {};

using FrameNavigationControlPtrDataView =
    mojo::InterfacePtrDataView<FrameNavigationControlInterfaceBase>;
using FrameNavigationControlRequestDataView =
    mojo::InterfaceRequestDataView<FrameNavigationControlInterfaceBase>;
using FrameNavigationControlAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameNavigationControlInterfaceBase>;
using FrameNavigationControlAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameNavigationControlInterfaceBase>;
class FrameBindingsControlInterfaceBase {};

using FrameBindingsControlPtrDataView =
    mojo::InterfacePtrDataView<FrameBindingsControlInterfaceBase>;
using FrameBindingsControlRequestDataView =
    mojo::InterfaceRequestDataView<FrameBindingsControlInterfaceBase>;
using FrameBindingsControlAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameBindingsControlInterfaceBase>;
using FrameBindingsControlAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameBindingsControlInterfaceBase>;
class FrameFactoryInterfaceBase {};

using FrameFactoryPtrDataView =
    mojo::InterfacePtrDataView<FrameFactoryInterfaceBase>;
using FrameFactoryRequestDataView =
    mojo::InterfaceRequestDataView<FrameFactoryInterfaceBase>;
using FrameFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameFactoryInterfaceBase>;
using FrameFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameFactoryInterfaceBase>;
class KeepAliveHandleInterfaceBase {};

using KeepAliveHandlePtrDataView =
    mojo::InterfacePtrDataView<KeepAliveHandleInterfaceBase>;
using KeepAliveHandleRequestDataView =
    mojo::InterfaceRequestDataView<KeepAliveHandleInterfaceBase>;
using KeepAliveHandleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<KeepAliveHandleInterfaceBase>;
using KeepAliveHandleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<KeepAliveHandleInterfaceBase>;
class FrameHostInterfaceBase {};

using FrameHostPtrDataView =
    mojo::InterfacePtrDataView<FrameHostInterfaceBase>;
using FrameHostRequestDataView =
    mojo::InterfaceRequestDataView<FrameHostInterfaceBase>;
using FrameHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameHostInterfaceBase>;
using FrameHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameHostInterfaceBase>;
class CreateNewWindowParamsDataView {
 public:
  CreateNewWindowParamsDataView() {}

  CreateNewWindowParamsDataView(
      internal::CreateNewWindowParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool user_gesture() const {
    return data_->user_gesture;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindowContainerType(UserType* output) const {
    auto data_value = data_->window_container_type;
    return mojo::internal::Deserialize<::content::mojom::WindowContainerType>(
        data_value, output);
  }

  ::content::mojom::WindowContainerType window_container_type() const {
    return static_cast<::content::mojom::WindowContainerType>(data_->window_container_type);
  }
  inline void GetSessionStorageNamespaceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionStorageNamespaceId(UserType* output) {
    auto* pointer = data_->session_storage_namespace_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCloneFromSessionStorageNamespaceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCloneFromSessionStorageNamespaceId(UserType* output) {
    auto* pointer = data_->clone_from_session_storage_namespace_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFrameNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameName(UserType* output) {
    auto* pointer = data_->frame_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool opener_suppressed() const {
    return data_->opener_suppressed;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisposition(UserType* output) const {
    auto data_value = data_->disposition;
    return mojo::internal::Deserialize<::ui::mojom::WindowOpenDisposition>(
        data_value, output);
  }

  ::ui::mojom::WindowOpenDisposition disposition() const {
    return static_cast<::ui::mojom::WindowOpenDisposition>(data_->disposition);
  }
  inline void GetTargetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetUrl(UserType* output) {
    auto* pointer = data_->target_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      ::blink::mojom::ReferrerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::blink::mojom::ReferrerDataView>(
        pointer, output, context_);
  }
  inline void GetFeaturesDataView(
      ::blink::mojom::WindowFeaturesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatures(UserType* output) {
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<::blink::mojom::WindowFeaturesDataView>(
        pointer, output, context_);
  }
 private:
  internal::CreateNewWindowParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CreateNewWindowReplyDataView {
 public:
  CreateNewWindowReplyDataView() {}

  CreateNewWindowReplyDataView(
      internal::CreateNewWindowReply_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t route_id() const {
    return data_->route_id;
  }
  int32_t main_frame_route_id() const {
    return data_->main_frame_route_id;
  }
  int32_t main_frame_widget_route_id() const {
    return data_->main_frame_widget_route_id;
  }
  template <typename UserType>
  UserType TakeMainFrameInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->main_frame_interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetClonedSessionStorageNamespaceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClonedSessionStorageNamespaceId(UserType* output) {
    auto* pointer = data_->cloned_session_storage_namespace_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsMainFrameTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsMainFrameToken(UserType* output) {
    auto* pointer = data_->devtools_main_frame_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::CreateNewWindowReply_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Frame_GetInterfaceProvider_ParamsDataView {
 public:
  Frame_GetInterfaceProvider_ParamsDataView() {}

  Frame_GetInterfaceProvider_ParamsDataView(
      internal::Frame_GetInterfaceProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeInterfaces() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
            &data_->interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Frame_GetInterfaceProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Frame_GetCanonicalUrlForSharing_ParamsDataView {
 public:
  Frame_GetCanonicalUrlForSharing_ParamsDataView() {}

  Frame_GetCanonicalUrlForSharing_ParamsDataView(
      internal::Frame_GetCanonicalUrlForSharing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Frame_GetCanonicalUrlForSharing_Params_Data* data_ = nullptr;
};

class Frame_GetCanonicalUrlForSharing_ResponseParamsDataView {
 public:
  Frame_GetCanonicalUrlForSharing_ResponseParamsDataView() {}

  Frame_GetCanonicalUrlForSharing_ResponseParamsDataView(
      internal::Frame_GetCanonicalUrlForSharing_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCanonicalUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCanonicalUrl(UserType* output) {
    auto* pointer = data_->canonical_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::Frame_GetCanonicalUrlForSharing_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameNavigationControl_CommitNavigation_ParamsDataView {
 public:
  FrameNavigationControl_CommitNavigation_ParamsDataView() {}

  FrameNavigationControl_CommitNavigation_ParamsDataView(
      internal::FrameNavigationControl_CommitNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadDataView(
      ::network::mojom::URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
  inline void GetCommonParamsDataView(
      CommonNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommonParams(UserType* output) {
    auto* pointer = data_->common_params.Get();
    return mojo::internal::Deserialize<::content::mojom::CommonNavigationParamsDataView>(
        pointer, output, context_);
  }
  inline void GetRequestParamsDataView(
      RequestNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestParams(UserType* output) {
    auto* pointer = data_->request_params.Get();
    return mojo::internal::Deserialize<::content::mojom::RequestNavigationParamsDataView>(
        pointer, output, context_);
  }
  inline void GetUrlLoaderClientEndpointsDataView(
      ::network::mojom::URLLoaderClientEndpointsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlLoaderClientEndpoints(UserType* output) {
    auto* pointer = data_->url_loader_client_endpoints.Get();
    return mojo::internal::Deserialize<::network::mojom::URLLoaderClientEndpointsDataView>(
        pointer, output, context_);
  }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::content::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceLoaderFactories(UserType* output) {
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::content::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, context_);
  }
  inline void GetSubresourceOverridesDataView(
      mojo::ArrayDataView<::content::mojom::TransferrableURLLoaderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceOverrides(UserType* output) {
    auto* pointer = data_->subresource_overrides.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::TransferrableURLLoaderDataView>>(
        pointer, output, context_);
  }
  inline void GetControllerServiceWorkerInfoDataView(
      ::content::mojom::ControllerServiceWorkerInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControllerServiceWorkerInfo(UserType* output) {
    auto* pointer = data_->controller_service_worker_info.Get();
    return mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerInfoDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsNavigationTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsNavigationToken(UserType* output) {
    auto* pointer = data_->devtools_navigation_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameNavigationControl_CommitNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameNavigationControl_CommitFailedNavigation_ParamsDataView {
 public:
  FrameNavigationControl_CommitFailedNavigation_ParamsDataView() {}

  FrameNavigationControl_CommitFailedNavigation_ParamsDataView(
      internal::FrameNavigationControl_CommitFailedNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCommonParamsDataView(
      CommonNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommonParams(UserType* output) {
    auto* pointer = data_->common_params.Get();
    return mojo::internal::Deserialize<::content::mojom::CommonNavigationParamsDataView>(
        pointer, output, context_);
  }
  inline void GetRequestParamsDataView(
      RequestNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestParams(UserType* output) {
    auto* pointer = data_->request_params.Get();
    return mojo::internal::Deserialize<::content::mojom::RequestNavigationParamsDataView>(
        pointer, output, context_);
  }
  bool has_stale_copy_in_cache() const {
    return data_->has_stale_copy_in_cache;
  }
  int32_t error_code() const {
    return data_->error_code;
  }
  inline void GetErrorPageContentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorPageContent(UserType* output) {
    auto* pointer = data_->error_page_content.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::content::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceLoaderFactories(UserType* output) {
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::content::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameNavigationControl_CommitFailedNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameNavigationControl_CommitSameDocumentNavigation_ParamsDataView {
 public:
  FrameNavigationControl_CommitSameDocumentNavigation_ParamsDataView() {}

  FrameNavigationControl_CommitSameDocumentNavigation_ParamsDataView(
      internal::FrameNavigationControl_CommitSameDocumentNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCommonParamsDataView(
      CommonNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommonParams(UserType* output) {
    auto* pointer = data_->common_params.Get();
    return mojo::internal::Deserialize<::content::mojom::CommonNavigationParamsDataView>(
        pointer, output, context_);
  }
  inline void GetRequestParamsDataView(
      RequestNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestParams(UserType* output) {
    auto* pointer = data_->request_params.Get();
    return mojo::internal::Deserialize<::content::mojom::RequestNavigationParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameNavigationControl_CommitSameDocumentNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameNavigationControl_CommitSameDocumentNavigation_ResponseParamsDataView {
 public:
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParamsDataView() {}

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParamsDataView(
      internal::FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommitResult(UserType* output) const {
    auto data_value = data_->commit_result;
    return mojo::internal::Deserialize<::blink::mojom::CommitResult>(
        data_value, output);
  }

  ::blink::mojom::CommitResult commit_result() const {
    return static_cast<::blink::mojom::CommitResult>(data_->commit_result);
  }
 private:
  internal::FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data* data_ = nullptr;
};

class FrameNavigationControl_HandleRendererDebugURL_ParamsDataView {
 public:
  FrameNavigationControl_HandleRendererDebugURL_ParamsDataView() {}

  FrameNavigationControl_HandleRendererDebugURL_ParamsDataView(
      internal::FrameNavigationControl_HandleRendererDebugURL_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameNavigationControl_HandleRendererDebugURL_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameNavigationControl_UpdateSubresourceLoaderFactories_ParamsDataView {
 public:
  FrameNavigationControl_UpdateSubresourceLoaderFactories_ParamsDataView() {}

  FrameNavigationControl_UpdateSubresourceLoaderFactories_ParamsDataView(
      internal::FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::content::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceLoaderFactories(UserType* output) {
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::content::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameBindingsControl_AllowBindings_ParamsDataView {
 public:
  FrameBindingsControl_AllowBindings_ParamsDataView() {}

  FrameBindingsControl_AllowBindings_ParamsDataView(
      internal::FrameBindingsControl_AllowBindings_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t enabled_bindings_flags() const {
    return data_->enabled_bindings_flags;
  }
 private:
  internal::FrameBindingsControl_AllowBindings_Params_Data* data_ = nullptr;
};

class FrameFactory_CreateFrame_ParamsDataView {
 public:
  FrameFactory_CreateFrame_ParamsDataView() {}

  FrameFactory_CreateFrame_ParamsDataView(
      internal::FrameFactory_CreateFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t frame_routing_id() const {
    return data_->frame_routing_id;
  }
  template <typename UserType>
  UserType TakeFrame() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::FrameRequestDataView>(
            &data_->frame, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameFactory_CreateFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_CreateNewWindow_ParamsDataView {
 public:
  FrameHost_CreateNewWindow_ParamsDataView() {}

  FrameHost_CreateNewWindow_ParamsDataView(
      internal::FrameHost_CreateNewWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      CreateNewWindowParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::CreateNewWindowParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_CreateNewWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_CreateNewWindow_ResponseParamsDataView {
 public:
  FrameHost_CreateNewWindow_ResponseParamsDataView() {}

  FrameHost_CreateNewWindow_ResponseParamsDataView(
      internal::FrameHost_CreateNewWindow_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::content::mojom::CreateNewWindowStatus>(
        data_value, output);
  }

  CreateNewWindowStatus status() const {
    return static_cast<CreateNewWindowStatus>(data_->status);
  }
  inline void GetReplyDataView(
      CreateNewWindowReplyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReply(UserType* output) {
    auto* pointer = data_->reply.Get();
    return mojo::internal::Deserialize<::content::mojom::CreateNewWindowReplyDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_CreateNewWindow_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_IssueKeepAliveHandle_ParamsDataView {
 public:
  FrameHost_IssueKeepAliveHandle_ParamsDataView() {}

  FrameHost_IssueKeepAliveHandle_ParamsDataView(
      internal::FrameHost_IssueKeepAliveHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeKeepAliveHandle() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::KeepAliveHandleRequestDataView>(
            &data_->keep_alive_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameHost_IssueKeepAliveHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_DidCommitProvisionalLoad_ParamsDataView {
 public:
  FrameHost_DidCommitProvisionalLoad_ParamsDataView() {}

  FrameHost_DidCommitProvisionalLoad_ParamsDataView(
      internal::FrameHost_DidCommitProvisionalLoad_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      DidCommitProvisionalLoadParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::DidCommitProvisionalLoadParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeInterfaceProviderRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
            &data_->interface_provider_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameHost_DidCommitProvisionalLoad_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_DidCommitSameDocumentNavigation_ParamsDataView {
 public:
  FrameHost_DidCommitSameDocumentNavigation_ParamsDataView() {}

  FrameHost_DidCommitSameDocumentNavigation_ParamsDataView(
      internal::FrameHost_DidCommitSameDocumentNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      DidCommitProvisionalLoadParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::DidCommitProvisionalLoadParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_DidCommitSameDocumentNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_BeginNavigation_ParamsDataView {
 public:
  FrameHost_BeginNavigation_ParamsDataView() {}

  FrameHost_BeginNavigation_ParamsDataView(
      internal::FrameHost_BeginNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCommonParamsDataView(
      CommonNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommonParams(UserType* output) {
    auto* pointer = data_->common_params.Get();
    return mojo::internal::Deserialize<::content::mojom::CommonNavigationParamsDataView>(
        pointer, output, context_);
  }
  inline void GetBeginParamsDataView(
      ::content::mojom::BeginNavigationParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBeginParams(UserType* output) {
    auto* pointer = data_->begin_params.Get();
    return mojo::internal::Deserialize<::content::mojom::BeginNavigationParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeBlobUrlToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLTokenPtrDataView>(
            &data_->blob_url_token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameHost_BeginNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_SubresourceResponseStarted_ParamsDataView {
 public:
  FrameHost_SubresourceResponseStarted_ParamsDataView() {}

  FrameHost_SubresourceResponseStarted_ParamsDataView(
      internal::FrameHost_SubresourceResponseStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  uint32_t cert_status() const {
    return data_->cert_status;
  }
 private:
  internal::FrameHost_SubresourceResponseStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_ResourceLoadComplete_ParamsDataView {
 public:
  FrameHost_ResourceLoadComplete_ParamsDataView() {}

  FrameHost_ResourceLoadComplete_ParamsDataView(
      internal::FrameHost_ResourceLoadComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlLoadInfoDataView(
      ::content::mojom::ResourceLoadInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlLoadInfo(UserType* output) {
    auto* pointer = data_->url_load_info.Get();
    return mojo::internal::Deserialize<::content::mojom::ResourceLoadInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_ResourceLoadComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_DidChangeName_ParamsDataView {
 public:
  FrameHost_DidChangeName_ParamsDataView() {}

  FrameHost_DidChangeName_ParamsDataView(
      internal::FrameHost_DidChangeName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueName(UserType* output) {
    auto* pointer = data_->unique_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_DidChangeName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_EnforceInsecureRequestPolicy_ParamsDataView {
 public:
  FrameHost_EnforceInsecureRequestPolicy_ParamsDataView() {}

  FrameHost_EnforceInsecureRequestPolicy_ParamsDataView(
      internal::FrameHost_EnforceInsecureRequestPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t policy_bitmap() const {
    return data_->policy_bitmap;
  }
 private:
  internal::FrameHost_EnforceInsecureRequestPolicy_Params_Data* data_ = nullptr;
};

class FrameHost_EnforceInsecureNavigationsSet_ParamsDataView {
 public:
  FrameHost_EnforceInsecureNavigationsSet_ParamsDataView() {}

  FrameHost_EnforceInsecureNavigationsSet_ParamsDataView(
      internal::FrameHost_EnforceInsecureNavigationsSet_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSetDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSet(UserType* output) {
    auto* pointer = data_->set.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_EnforceInsecureNavigationsSet_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_DidSetFramePolicyHeaders_ParamsDataView {
 public:
  FrameHost_DidSetFramePolicyHeaders_ParamsDataView() {}

  FrameHost_DidSetFramePolicyHeaders_ParamsDataView(
      internal::FrameHost_DidSetFramePolicyHeaders_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSandboxFlags(UserType* output) const {
    auto data_value = data_->sandbox_flags;
    return mojo::internal::Deserialize<::blink::mojom::WebSandboxFlags>(
        data_value, output);
  }

  ::blink::mojom::WebSandboxFlags sandbox_flags() const {
    return static_cast<::blink::mojom::WebSandboxFlags>(data_->sandbox_flags);
  }
  inline void GetParsedHeaderDataView(
      mojo::ArrayDataView<::blink::mojom::ParsedFeaturePolicyDeclarationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParsedHeader(UserType* output) {
    auto* pointer = data_->parsed_header.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ParsedFeaturePolicyDeclarationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_DidSetFramePolicyHeaders_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_CancelInitialHistoryLoad_ParamsDataView {
 public:
  FrameHost_CancelInitialHistoryLoad_ParamsDataView() {}

  FrameHost_CancelInitialHistoryLoad_ParamsDataView(
      internal::FrameHost_CancelInitialHistoryLoad_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameHost_CancelInitialHistoryLoad_Params_Data* data_ = nullptr;
};

class FrameHost_UpdateEncoding_ParamsDataView {
 public:
  FrameHost_UpdateEncoding_ParamsDataView() {}

  FrameHost_UpdateEncoding_ParamsDataView(
      internal::FrameHost_UpdateEncoding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncodingNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncodingName(UserType* output) {
    auto* pointer = data_->encoding_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_UpdateEncoding_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameHost_FrameSizeChanged_ParamsDataView {
 public:
  FrameHost_FrameSizeChanged_ParamsDataView() {}

  FrameHost_FrameSizeChanged_ParamsDataView(
      internal::FrameHost_FrameSizeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameHost_FrameSizeChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::CreateNewWindowStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::CreateNewWindowStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::CreateNewWindowStatus, ::content::mojom::CreateNewWindowStatus> {
  static ::content::mojom::CreateNewWindowStatus ToMojom(::content::mojom::CreateNewWindowStatus input) { return input; }
  static bool FromMojom(::content::mojom::CreateNewWindowStatus input, ::content::mojom::CreateNewWindowStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CreateNewWindowStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::CreateNewWindowStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::CreateNewWindowStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CreateNewWindowParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::CreateNewWindowParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::CreateNewWindowParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->user_gesture = CallWithContext(Traits::user_gesture, input, custom_context);
    mojo::internal::Serialize<::content::mojom::WindowContainerType>(
        CallWithContext(Traits::window_container_type, input, custom_context), &(*output)->window_container_type);
    decltype(CallWithContext(Traits::session_storage_namespace_id, input, custom_context)) in_session_storage_namespace_id = CallWithContext(Traits::session_storage_namespace_id, input, custom_context);
    typename decltype((*output)->session_storage_namespace_id)::BaseType::BufferWriter
        session_storage_namespace_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_session_storage_namespace_id, buffer, &session_storage_namespace_id_writer, context);
    (*output)->session_storage_namespace_id.Set(
        session_storage_namespace_id_writer.is_null() ? nullptr : session_storage_namespace_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->session_storage_namespace_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null session_storage_namespace_id in CreateNewWindowParams struct");
    decltype(CallWithContext(Traits::clone_from_session_storage_namespace_id, input, custom_context)) in_clone_from_session_storage_namespace_id = CallWithContext(Traits::clone_from_session_storage_namespace_id, input, custom_context);
    typename decltype((*output)->clone_from_session_storage_namespace_id)::BaseType::BufferWriter
        clone_from_session_storage_namespace_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_clone_from_session_storage_namespace_id, buffer, &clone_from_session_storage_namespace_id_writer, context);
    (*output)->clone_from_session_storage_namespace_id.Set(
        clone_from_session_storage_namespace_id_writer.is_null() ? nullptr : clone_from_session_storage_namespace_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->clone_from_session_storage_namespace_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null clone_from_session_storage_namespace_id in CreateNewWindowParams struct");
    decltype(CallWithContext(Traits::frame_name, input, custom_context)) in_frame_name = CallWithContext(Traits::frame_name, input, custom_context);
    typename decltype((*output)->frame_name)::BaseType::BufferWriter
        frame_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_frame_name, buffer, &frame_name_writer, context);
    (*output)->frame_name.Set(
        frame_name_writer.is_null() ? nullptr : frame_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_name in CreateNewWindowParams struct");
    (*output)->opener_suppressed = CallWithContext(Traits::opener_suppressed, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::WindowOpenDisposition>(
        CallWithContext(Traits::disposition, input, custom_context), &(*output)->disposition);
    decltype(CallWithContext(Traits::target_url, input, custom_context)) in_target_url = CallWithContext(Traits::target_url, input, custom_context);
    typename decltype((*output)->target_url)::BaseType::BufferWriter
        target_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_target_url, buffer, &target_url_writer, context);
    (*output)->target_url.Set(
        target_url_writer.is_null() ? nullptr : target_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->target_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null target_url in CreateNewWindowParams struct");
    decltype(CallWithContext(Traits::referrer, input, custom_context)) in_referrer = CallWithContext(Traits::referrer, input, custom_context);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<::blink::mojom::ReferrerDataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referrer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referrer in CreateNewWindowParams struct");
    decltype(CallWithContext(Traits::features, input, custom_context)) in_features = CallWithContext(Traits::features, input, custom_context);
    typename decltype((*output)->features)::BaseType::BufferWriter
        features_writer;
    mojo::internal::Serialize<::blink::mojom::WindowFeaturesDataView>(
        in_features, buffer, &features_writer, context);
    (*output)->features.Set(
        features_writer.is_null() ? nullptr : features_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->features.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null features in CreateNewWindowParams struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::CreateNewWindowParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::CreateNewWindowParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CreateNewWindowReplyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::CreateNewWindowReplyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::CreateNewWindowReply_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->route_id = CallWithContext(Traits::route_id, input, custom_context);
    (*output)->main_frame_route_id = CallWithContext(Traits::main_frame_route_id, input, custom_context);
    (*output)->main_frame_widget_route_id = CallWithContext(Traits::main_frame_widget_route_id, input, custom_context);
    decltype(CallWithContext(Traits::main_frame_interface_provider, input, custom_context)) in_main_frame_interface_provider = CallWithContext(Traits::main_frame_interface_provider, input, custom_context);
    mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
        in_main_frame_interface_provider, &(*output)->main_frame_interface_provider, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->main_frame_interface_provider),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid main_frame_interface_provider in CreateNewWindowReply struct");
    decltype(CallWithContext(Traits::cloned_session_storage_namespace_id, input, custom_context)) in_cloned_session_storage_namespace_id = CallWithContext(Traits::cloned_session_storage_namespace_id, input, custom_context);
    typename decltype((*output)->cloned_session_storage_namespace_id)::BaseType::BufferWriter
        cloned_session_storage_namespace_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_cloned_session_storage_namespace_id, buffer, &cloned_session_storage_namespace_id_writer, context);
    (*output)->cloned_session_storage_namespace_id.Set(
        cloned_session_storage_namespace_id_writer.is_null() ? nullptr : cloned_session_storage_namespace_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cloned_session_storage_namespace_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cloned_session_storage_namespace_id in CreateNewWindowReply struct");
    decltype(CallWithContext(Traits::devtools_main_frame_token, input, custom_context)) in_devtools_main_frame_token = CallWithContext(Traits::devtools_main_frame_token, input, custom_context);
    typename decltype((*output)->devtools_main_frame_token)::BaseType::BufferWriter
        devtools_main_frame_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_devtools_main_frame_token, buffer, &devtools_main_frame_token_writer, context);
    (*output)->devtools_main_frame_token.Set(
        devtools_main_frame_token_writer.is_null() ? nullptr : devtools_main_frame_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->devtools_main_frame_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devtools_main_frame_token in CreateNewWindowReply struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::CreateNewWindowReply_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::CreateNewWindowReplyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void CreateNewWindowParamsDataView::GetSessionStorageNamespaceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_storage_namespace_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CreateNewWindowParamsDataView::GetCloneFromSessionStorageNamespaceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->clone_from_session_storage_namespace_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CreateNewWindowParamsDataView::GetFrameNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->frame_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CreateNewWindowParamsDataView::GetTargetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->target_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CreateNewWindowParamsDataView::GetReferrerDataView(
    ::blink::mojom::ReferrerDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::blink::mojom::ReferrerDataView(pointer, context_);
}
inline void CreateNewWindowParamsDataView::GetFeaturesDataView(
    ::blink::mojom::WindowFeaturesDataView* output) {
  auto pointer = data_->features.Get();
  *output = ::blink::mojom::WindowFeaturesDataView(pointer, context_);
}


inline void CreateNewWindowReplyDataView::GetClonedSessionStorageNamespaceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cloned_session_storage_namespace_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CreateNewWindowReplyDataView::GetDevtoolsMainFrameTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_main_frame_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}






inline void Frame_GetCanonicalUrlForSharing_ResponseParamsDataView::GetCanonicalUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->canonical_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetHeadDataView(
    ::network::mojom::URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = ::network::mojom::URLResponseHeadDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetCommonParamsDataView(
    CommonNavigationParamsDataView* output) {
  auto pointer = data_->common_params.Get();
  *output = CommonNavigationParamsDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetRequestParamsDataView(
    RequestNavigationParamsDataView* output) {
  auto pointer = data_->request_params.Get();
  *output = RequestNavigationParamsDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetUrlLoaderClientEndpointsDataView(
    ::network::mojom::URLLoaderClientEndpointsDataView* output) {
  auto pointer = data_->url_loader_client_endpoints.Get();
  *output = ::network::mojom::URLLoaderClientEndpointsDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::content::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::content::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetSubresourceOverridesDataView(
    mojo::ArrayDataView<::content::mojom::TransferrableURLLoaderDataView>* output) {
  auto pointer = data_->subresource_overrides.Get();
  *output = mojo::ArrayDataView<::content::mojom::TransferrableURLLoaderDataView>(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetControllerServiceWorkerInfoDataView(
    ::content::mojom::ControllerServiceWorkerInfoDataView* output) {
  auto pointer = data_->controller_service_worker_info.Get();
  *output = ::content::mojom::ControllerServiceWorkerInfoDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitNavigation_ParamsDataView::GetDevtoolsNavigationTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_navigation_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void FrameNavigationControl_CommitFailedNavigation_ParamsDataView::GetCommonParamsDataView(
    CommonNavigationParamsDataView* output) {
  auto pointer = data_->common_params.Get();
  *output = CommonNavigationParamsDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitFailedNavigation_ParamsDataView::GetRequestParamsDataView(
    RequestNavigationParamsDataView* output) {
  auto pointer = data_->request_params.Get();
  *output = RequestNavigationParamsDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitFailedNavigation_ParamsDataView::GetErrorPageContentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_page_content.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitFailedNavigation_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::content::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::content::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}


inline void FrameNavigationControl_CommitSameDocumentNavigation_ParamsDataView::GetCommonParamsDataView(
    CommonNavigationParamsDataView* output) {
  auto pointer = data_->common_params.Get();
  *output = CommonNavigationParamsDataView(pointer, context_);
}
inline void FrameNavigationControl_CommitSameDocumentNavigation_ParamsDataView::GetRequestParamsDataView(
    RequestNavigationParamsDataView* output) {
  auto pointer = data_->request_params.Get();
  *output = RequestNavigationParamsDataView(pointer, context_);
}




inline void FrameNavigationControl_HandleRendererDebugURL_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FrameNavigationControl_UpdateSubresourceLoaderFactories_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::content::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::content::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}






inline void FrameHost_CreateNewWindow_ParamsDataView::GetParamsDataView(
    CreateNewWindowParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = CreateNewWindowParamsDataView(pointer, context_);
}


inline void FrameHost_CreateNewWindow_ResponseParamsDataView::GetReplyDataView(
    CreateNewWindowReplyDataView* output) {
  auto pointer = data_->reply.Get();
  *output = CreateNewWindowReplyDataView(pointer, context_);
}




inline void FrameHost_DidCommitProvisionalLoad_ParamsDataView::GetParamsDataView(
    DidCommitProvisionalLoadParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = DidCommitProvisionalLoadParamsDataView(pointer, context_);
}


inline void FrameHost_DidCommitSameDocumentNavigation_ParamsDataView::GetParamsDataView(
    DidCommitProvisionalLoadParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = DidCommitProvisionalLoadParamsDataView(pointer, context_);
}


inline void FrameHost_BeginNavigation_ParamsDataView::GetCommonParamsDataView(
    CommonNavigationParamsDataView* output) {
  auto pointer = data_->common_params.Get();
  *output = CommonNavigationParamsDataView(pointer, context_);
}
inline void FrameHost_BeginNavigation_ParamsDataView::GetBeginParamsDataView(
    ::content::mojom::BeginNavigationParamsDataView* output) {
  auto pointer = data_->begin_params.Get();
  *output = ::content::mojom::BeginNavigationParamsDataView(pointer, context_);
}


inline void FrameHost_SubresourceResponseStarted_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void FrameHost_ResourceLoadComplete_ParamsDataView::GetUrlLoadInfoDataView(
    ::content::mojom::ResourceLoadInfoDataView* output) {
  auto pointer = data_->url_load_info.Get();
  *output = ::content::mojom::ResourceLoadInfoDataView(pointer, context_);
}


inline void FrameHost_DidChangeName_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FrameHost_DidChangeName_ParamsDataView::GetUniqueNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void FrameHost_EnforceInsecureNavigationsSet_ParamsDataView::GetSetDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->set.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}


inline void FrameHost_DidSetFramePolicyHeaders_ParamsDataView::GetParsedHeaderDataView(
    mojo::ArrayDataView<::blink::mojom::ParsedFeaturePolicyDeclarationDataView>* output) {
  auto pointer = data_->parsed_header.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ParsedFeaturePolicyDeclarationDataView>(pointer, context_);
}




inline void FrameHost_UpdateEncoding_ParamsDataView::GetEncodingNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->encoding_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FrameHost_FrameSizeChanged_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_MOJOM_SHARED_H_
