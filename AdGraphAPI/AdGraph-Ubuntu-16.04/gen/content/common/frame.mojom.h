// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_MOJOM_H_
#define CONTENT_COMMON_FRAME_MOJOM_H_

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
#include "content/common/frame.mojom-shared.h"
#include "content/common/navigation_params.mojom.h"
#include "content/common/service_worker/controller_service_worker.mojom.h"
#include "content/common/url_loader_factory_bundle.mojom.h"
#include "content/public/common/resource_type.mojom.h"
#include "content/public/common/resource_load_info.mojom.h"
#include "content/public/common/transferrable_url_loader.mojom.h"
#include "content/public/common/window_container_type.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom.h"
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom.h"
#include "third_party/blink/public/platform/referrer.mojom.h"
#include "third_party/blink/public/web/commit_result.mojom.h"
#include "third_party/blink/public/web/window_features.mojom.h"
#include "ui/base/mojo/window_open_disposition.mojom.h"
#include "url/mojom/url.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "content/common/frame_messages_forward.h"
#include "content/common/navigation_params.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
CONTENT_EXPORT extern const char kNavigation_FrameSpec[];
class Frame;
using FramePtr = mojo::InterfacePtr<Frame>;
using FramePtrInfo = mojo::InterfacePtrInfo<Frame>;
using ThreadSafeFramePtr =
    mojo::ThreadSafeInterfacePtr<Frame>;
using FrameRequest = mojo::InterfaceRequest<Frame>;
using FrameAssociatedPtr =
    mojo::AssociatedInterfacePtr<Frame>;
using ThreadSafeFrameAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Frame>;
using FrameAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Frame>;
using FrameAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Frame>;

class FrameNavigationControl;
using FrameNavigationControlPtr = mojo::InterfacePtr<FrameNavigationControl>;
using FrameNavigationControlPtrInfo = mojo::InterfacePtrInfo<FrameNavigationControl>;
using ThreadSafeFrameNavigationControlPtr =
    mojo::ThreadSafeInterfacePtr<FrameNavigationControl>;
using FrameNavigationControlRequest = mojo::InterfaceRequest<FrameNavigationControl>;
using FrameNavigationControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameNavigationControl>;
using ThreadSafeFrameNavigationControlAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameNavigationControl>;
using FrameNavigationControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameNavigationControl>;
using FrameNavigationControlAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameNavigationControl>;

class FrameBindingsControl;
using FrameBindingsControlPtr = mojo::InterfacePtr<FrameBindingsControl>;
using FrameBindingsControlPtrInfo = mojo::InterfacePtrInfo<FrameBindingsControl>;
using ThreadSafeFrameBindingsControlPtr =
    mojo::ThreadSafeInterfacePtr<FrameBindingsControl>;
using FrameBindingsControlRequest = mojo::InterfaceRequest<FrameBindingsControl>;
using FrameBindingsControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameBindingsControl>;
using ThreadSafeFrameBindingsControlAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameBindingsControl>;
using FrameBindingsControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameBindingsControl>;
using FrameBindingsControlAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameBindingsControl>;

class FrameFactory;
using FrameFactoryPtr = mojo::InterfacePtr<FrameFactory>;
using FrameFactoryPtrInfo = mojo::InterfacePtrInfo<FrameFactory>;
using ThreadSafeFrameFactoryPtr =
    mojo::ThreadSafeInterfacePtr<FrameFactory>;
using FrameFactoryRequest = mojo::InterfaceRequest<FrameFactory>;
using FrameFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameFactory>;
using ThreadSafeFrameFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameFactory>;
using FrameFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameFactory>;
using FrameFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameFactory>;

class KeepAliveHandle;
using KeepAliveHandlePtr = mojo::InterfacePtr<KeepAliveHandle>;
using KeepAliveHandlePtrInfo = mojo::InterfacePtrInfo<KeepAliveHandle>;
using ThreadSafeKeepAliveHandlePtr =
    mojo::ThreadSafeInterfacePtr<KeepAliveHandle>;
using KeepAliveHandleRequest = mojo::InterfaceRequest<KeepAliveHandle>;
using KeepAliveHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<KeepAliveHandle>;
using ThreadSafeKeepAliveHandleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<KeepAliveHandle>;
using KeepAliveHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<KeepAliveHandle>;
using KeepAliveHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<KeepAliveHandle>;

class FrameHost;
using FrameHostPtr = mojo::InterfacePtr<FrameHost>;
using FrameHostPtrInfo = mojo::InterfacePtrInfo<FrameHost>;
using ThreadSafeFrameHostPtr =
    mojo::ThreadSafeInterfacePtr<FrameHost>;
using FrameHostRequest = mojo::InterfaceRequest<FrameHost>;
using FrameHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameHost>;
using ThreadSafeFrameHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameHost>;
using FrameHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameHost>;
using FrameHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameHost>;

using CommonNavigationParams = mojo::native::NativeStruct;
using CommonNavigationParamsPtr = mojo::native::NativeStructPtr;

using RequestNavigationParams = mojo::native::NativeStruct;
using RequestNavigationParamsPtr = mojo::native::NativeStructPtr;

class CreateNewWindowParams;
using CreateNewWindowParamsPtr = mojo::StructPtr<CreateNewWindowParams>;

class CreateNewWindowReply;
using CreateNewWindowReplyPtr = mojo::StructPtr<CreateNewWindowReply>;

using DidCommitProvisionalLoadParams = mojo::native::NativeStruct;
using DidCommitProvisionalLoadParamsPtr = mojo::native::NativeStructPtr;


class FrameProxy;

template <typename ImplRefTraits>
class FrameStub;

class FrameRequestValidator;
class FrameResponseValidator;

class CONTENT_EXPORT Frame
    : public FrameInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameStub<ImplRefTraits>;

  using RequestValidator_ = FrameRequestValidator;
  using ResponseValidator_ = FrameResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetInterfaceProviderMinVersion = 0,
    kGetCanonicalUrlForSharingMinVersion = 0,
  };
  virtual ~Frame() {}

  virtual void GetInterfaceProvider(::service_manager::mojom::InterfaceProviderRequest interfaces) = 0;


  using GetCanonicalUrlForSharingCallback = base::OnceCallback<void(const base::Optional<GURL>&)>;
  virtual void GetCanonicalUrlForSharing(GetCanonicalUrlForSharingCallback callback) = 0;
};
class CONTENT_EXPORT FrameInterceptorForTesting : public Frame {
  virtual Frame* GetForwardingInterface() = 0;
  void GetInterfaceProvider(::service_manager::mojom::InterfaceProviderRequest interfaces) override;
  void GetCanonicalUrlForSharing(GetCanonicalUrlForSharingCallback callback) override;
};
class CONTENT_EXPORT FrameAsyncWaiter {
 public:
  explicit FrameAsyncWaiter(Frame* proxy);
  ~FrameAsyncWaiter();
  void GetCanonicalUrlForSharing(
      base::Optional<GURL>* out_canonical_url);

 private:
  Frame* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameAsyncWaiter);
};

class FrameNavigationControlProxy;

template <typename ImplRefTraits>
class FrameNavigationControlStub;

class FrameNavigationControlRequestValidator;
class FrameNavigationControlResponseValidator;

class CONTENT_EXPORT FrameNavigationControl
    : public FrameNavigationControlInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameNavigationControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameNavigationControlStub<ImplRefTraits>;

  using RequestValidator_ = FrameNavigationControlRequestValidator;
  using ResponseValidator_ = FrameNavigationControlResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCommitNavigationMinVersion = 0,
    kCommitFailedNavigationMinVersion = 0,
    kCommitSameDocumentNavigationMinVersion = 0,
    kHandleRendererDebugURLMinVersion = 0,
    kUpdateSubresourceLoaderFactoriesMinVersion = 0,
  };
  virtual ~FrameNavigationControl() {}

  virtual void CommitNavigation(const network::ResourceResponseHead& head, const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, ::network::mojom::URLLoaderClientEndpointsPtr url_loader_client_endpoints, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories, base::Optional<std::vector<::content::mojom::TransferrableURLLoaderPtr>> subresource_overrides, ::content::mojom::ControllerServiceWorkerInfoPtr controller_service_worker_info, const base::UnguessableToken& devtools_navigation_token) = 0;

  virtual void CommitFailedNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, bool has_stale_copy_in_cache, int32_t error_code, const base::Optional<std::string>& error_page_content, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) = 0;


  using CommitSameDocumentNavigationCallback = base::OnceCallback<void(::blink::mojom::CommitResult)>;
  virtual void CommitSameDocumentNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, CommitSameDocumentNavigationCallback callback) = 0;

  virtual void HandleRendererDebugURL(const GURL& url) = 0;

  virtual void UpdateSubresourceLoaderFactories(std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) = 0;
};
class CONTENT_EXPORT FrameNavigationControlInterceptorForTesting : public FrameNavigationControl {
  virtual FrameNavigationControl* GetForwardingInterface() = 0;
  void CommitNavigation(const network::ResourceResponseHead& head, const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, ::network::mojom::URLLoaderClientEndpointsPtr url_loader_client_endpoints, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories, base::Optional<std::vector<::content::mojom::TransferrableURLLoaderPtr>> subresource_overrides, ::content::mojom::ControllerServiceWorkerInfoPtr controller_service_worker_info, const base::UnguessableToken& devtools_navigation_token) override;
  void CommitFailedNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, bool has_stale_copy_in_cache, int32_t error_code, const base::Optional<std::string>& error_page_content, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) override;
  void CommitSameDocumentNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, CommitSameDocumentNavigationCallback callback) override;
  void HandleRendererDebugURL(const GURL& url) override;
  void UpdateSubresourceLoaderFactories(std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) override;
};
class CONTENT_EXPORT FrameNavigationControlAsyncWaiter {
 public:
  explicit FrameNavigationControlAsyncWaiter(FrameNavigationControl* proxy);
  ~FrameNavigationControlAsyncWaiter();
  void CommitSameDocumentNavigation(
      const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, ::blink::mojom::CommitResult* out_commit_result);

 private:
  FrameNavigationControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameNavigationControlAsyncWaiter);
};

class FrameBindingsControlProxy;

template <typename ImplRefTraits>
class FrameBindingsControlStub;

class FrameBindingsControlRequestValidator;

class CONTENT_EXPORT FrameBindingsControl
    : public FrameBindingsControlInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameBindingsControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameBindingsControlStub<ImplRefTraits>;

  using RequestValidator_ = FrameBindingsControlRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAllowBindingsMinVersion = 0,
  };
  virtual ~FrameBindingsControl() {}

  virtual void AllowBindings(int32_t enabled_bindings_flags) = 0;
};
class CONTENT_EXPORT FrameBindingsControlInterceptorForTesting : public FrameBindingsControl {
  virtual FrameBindingsControl* GetForwardingInterface() = 0;
  void AllowBindings(int32_t enabled_bindings_flags) override;
};
class CONTENT_EXPORT FrameBindingsControlAsyncWaiter {
 public:
  explicit FrameBindingsControlAsyncWaiter(FrameBindingsControl* proxy);
  ~FrameBindingsControlAsyncWaiter();

 private:
  FrameBindingsControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameBindingsControlAsyncWaiter);
};

class FrameFactoryProxy;

template <typename ImplRefTraits>
class FrameFactoryStub;

class FrameFactoryRequestValidator;

class CONTENT_EXPORT FrameFactory
    : public FrameFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameFactoryStub<ImplRefTraits>;

  using RequestValidator_ = FrameFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateFrameMinVersion = 0,
  };
  virtual ~FrameFactory() {}

  virtual void CreateFrame(int32_t frame_routing_id, FrameRequest frame) = 0;
};
class CONTENT_EXPORT FrameFactoryInterceptorForTesting : public FrameFactory {
  virtual FrameFactory* GetForwardingInterface() = 0;
  void CreateFrame(int32_t frame_routing_id, FrameRequest frame) override;
};
class CONTENT_EXPORT FrameFactoryAsyncWaiter {
 public:
  explicit FrameFactoryAsyncWaiter(FrameFactory* proxy);
  ~FrameFactoryAsyncWaiter();

 private:
  FrameFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameFactoryAsyncWaiter);
};

class KeepAliveHandleProxy;

template <typename ImplRefTraits>
class KeepAliveHandleStub;

class KeepAliveHandleRequestValidator;

class CONTENT_EXPORT KeepAliveHandle
    : public KeepAliveHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = KeepAliveHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = KeepAliveHandleStub<ImplRefTraits>;

  using RequestValidator_ = KeepAliveHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~KeepAliveHandle() {}
};
class CONTENT_EXPORT KeepAliveHandleInterceptorForTesting : public KeepAliveHandle {
  virtual KeepAliveHandle* GetForwardingInterface() = 0;
};
class CONTENT_EXPORT KeepAliveHandleAsyncWaiter {
 public:
  explicit KeepAliveHandleAsyncWaiter(KeepAliveHandle* proxy);
  ~KeepAliveHandleAsyncWaiter();

 private:
  KeepAliveHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(KeepAliveHandleAsyncWaiter);
};

class FrameHostProxy;

template <typename ImplRefTraits>
class FrameHostStub;

class FrameHostRequestValidator;
class FrameHostResponseValidator;

class CONTENT_EXPORT FrameHost
    : public FrameHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = FrameHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameHostStub<ImplRefTraits>;

  using RequestValidator_ = FrameHostRequestValidator;
  using ResponseValidator_ = FrameHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateNewWindowMinVersion = 0,
    kIssueKeepAliveHandleMinVersion = 0,
    kDidCommitProvisionalLoadMinVersion = 0,
    kDidCommitSameDocumentNavigationMinVersion = 0,
    kBeginNavigationMinVersion = 0,
    kSubresourceResponseStartedMinVersion = 0,
    kResourceLoadCompleteMinVersion = 0,
    kDidChangeNameMinVersion = 0,
    kEnforceInsecureRequestPolicyMinVersion = 0,
    kEnforceInsecureNavigationsSetMinVersion = 0,
    kDidSetFramePolicyHeadersMinVersion = 0,
    kCancelInitialHistoryLoadMinVersion = 0,
    kUpdateEncodingMinVersion = 0,
    kFrameSizeChangedMinVersion = 0,
  };
  virtual ~FrameHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowStatus* out_status, CreateNewWindowReplyPtr* out_reply);

  using CreateNewWindowCallback = base::OnceCallback<void(CreateNewWindowStatus, CreateNewWindowReplyPtr)>;
  virtual void CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowCallback callback) = 0;

  virtual void IssueKeepAliveHandle(KeepAliveHandleRequest keep_alive_handle) = 0;

  virtual void DidCommitProvisionalLoad(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params, ::service_manager::mojom::InterfaceProviderRequest interface_provider_request) = 0;

  virtual void DidCommitSameDocumentNavigation(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params) = 0;

  virtual void BeginNavigation(const content::CommonNavigationParams& common_params, ::content::mojom::BeginNavigationParamsPtr begin_params, ::blink::mojom::BlobURLTokenPtr blob_url_token) = 0;

  virtual void SubresourceResponseStarted(const GURL& url, uint32_t cert_status) = 0;

  virtual void ResourceLoadComplete(::content::mojom::ResourceLoadInfoPtr url_load_info) = 0;

  virtual void DidChangeName(const std::string& name, const std::string& unique_name) = 0;

  virtual void EnforceInsecureRequestPolicy(uint8_t policy_bitmap) = 0;

  virtual void EnforceInsecureNavigationsSet(const std::vector<uint32_t>& set) = 0;

  virtual void DidSetFramePolicyHeaders(blink::WebSandboxFlags sandbox_flags, const std::vector<blink::ParsedFeaturePolicyDeclaration>& parsed_header) = 0;

  virtual void CancelInitialHistoryLoad() = 0;

  virtual void UpdateEncoding(const std::string& encoding_name) = 0;

  virtual void FrameSizeChanged(const gfx::Size& size) = 0;
};
class CONTENT_EXPORT FrameHostInterceptorForTesting : public FrameHost {
  virtual FrameHost* GetForwardingInterface() = 0;
  void CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowCallback callback) override;
  void IssueKeepAliveHandle(KeepAliveHandleRequest keep_alive_handle) override;
  void DidCommitProvisionalLoad(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params, ::service_manager::mojom::InterfaceProviderRequest interface_provider_request) override;
  void DidCommitSameDocumentNavigation(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params) override;
  void BeginNavigation(const content::CommonNavigationParams& common_params, ::content::mojom::BeginNavigationParamsPtr begin_params, ::blink::mojom::BlobURLTokenPtr blob_url_token) override;
  void SubresourceResponseStarted(const GURL& url, uint32_t cert_status) override;
  void ResourceLoadComplete(::content::mojom::ResourceLoadInfoPtr url_load_info) override;
  void DidChangeName(const std::string& name, const std::string& unique_name) override;
  void EnforceInsecureRequestPolicy(uint8_t policy_bitmap) override;
  void EnforceInsecureNavigationsSet(const std::vector<uint32_t>& set) override;
  void DidSetFramePolicyHeaders(blink::WebSandboxFlags sandbox_flags, const std::vector<blink::ParsedFeaturePolicyDeclaration>& parsed_header) override;
  void CancelInitialHistoryLoad() override;
  void UpdateEncoding(const std::string& encoding_name) override;
  void FrameSizeChanged(const gfx::Size& size) override;
};
class CONTENT_EXPORT FrameHostAsyncWaiter {
 public:
  explicit FrameHostAsyncWaiter(FrameHost* proxy);
  ~FrameHostAsyncWaiter();
  void CreateNewWindow(
      CreateNewWindowParamsPtr params, CreateNewWindowStatus* out_status, CreateNewWindowReplyPtr* out_reply);

 private:
  FrameHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameHostAsyncWaiter);
};

class CONTENT_EXPORT FrameProxy
    : public Frame {
 public:
  explicit FrameProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInterfaceProvider(::service_manager::mojom::InterfaceProviderRequest interfaces) final;
  void GetCanonicalUrlForSharing(GetCanonicalUrlForSharingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT FrameNavigationControlProxy
    : public FrameNavigationControl {
 public:
  explicit FrameNavigationControlProxy(mojo::MessageReceiverWithResponder* receiver);
  void CommitNavigation(const network::ResourceResponseHead& head, const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, ::network::mojom::URLLoaderClientEndpointsPtr url_loader_client_endpoints, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories, base::Optional<std::vector<::content::mojom::TransferrableURLLoaderPtr>> subresource_overrides, ::content::mojom::ControllerServiceWorkerInfoPtr controller_service_worker_info, const base::UnguessableToken& devtools_navigation_token) final;
  void CommitFailedNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, bool has_stale_copy_in_cache, int32_t error_code, const base::Optional<std::string>& error_page_content, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) final;
  void CommitSameDocumentNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, CommitSameDocumentNavigationCallback callback) final;
  void HandleRendererDebugURL(const GURL& url) final;
  void UpdateSubresourceLoaderFactories(std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT FrameBindingsControlProxy
    : public FrameBindingsControl {
 public:
  explicit FrameBindingsControlProxy(mojo::MessageReceiverWithResponder* receiver);
  void AllowBindings(int32_t enabled_bindings_flags) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT FrameFactoryProxy
    : public FrameFactory {
 public:
  explicit FrameFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateFrame(int32_t frame_routing_id, FrameRequest frame) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT KeepAliveHandleProxy
    : public KeepAliveHandle {
 public:
  explicit KeepAliveHandleProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT FrameHostProxy
    : public FrameHost {
 public:
  explicit FrameHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowStatus* out_status, CreateNewWindowReplyPtr* out_reply) final;
  void CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowCallback callback) final;
  void IssueKeepAliveHandle(KeepAliveHandleRequest keep_alive_handle) final;
  void DidCommitProvisionalLoad(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params, ::service_manager::mojom::InterfaceProviderRequest interface_provider_request) final;
  void DidCommitSameDocumentNavigation(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params) final;
  void BeginNavigation(const content::CommonNavigationParams& common_params, ::content::mojom::BeginNavigationParamsPtr begin_params, ::blink::mojom::BlobURLTokenPtr blob_url_token) final;
  void SubresourceResponseStarted(const GURL& url, uint32_t cert_status) final;
  void ResourceLoadComplete(::content::mojom::ResourceLoadInfoPtr url_load_info) final;
  void DidChangeName(const std::string& name, const std::string& unique_name) final;
  void EnforceInsecureRequestPolicy(uint8_t policy_bitmap) final;
  void EnforceInsecureNavigationsSet(const std::vector<uint32_t>& set) final;
  void DidSetFramePolicyHeaders(blink::WebSandboxFlags sandbox_flags, const std::vector<blink::ParsedFeaturePolicyDeclaration>& parsed_header) final;
  void CancelInitialHistoryLoad() final;
  void UpdateEncoding(const std::string& encoding_name) final;
  void FrameSizeChanged(const gfx::Size& size) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT FrameStubDispatch {
 public:
  static bool Accept(Frame* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Frame* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Frame>>
class FrameStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameStub() {}
  ~FrameStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameNavigationControlStubDispatch {
 public:
  static bool Accept(FrameNavigationControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameNavigationControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameNavigationControl>>
class FrameNavigationControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameNavigationControlStub() {}
  ~FrameNavigationControlStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameNavigationControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameNavigationControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameBindingsControlStubDispatch {
 public:
  static bool Accept(FrameBindingsControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameBindingsControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameBindingsControl>>
class FrameBindingsControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameBindingsControlStub() {}
  ~FrameBindingsControlStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameBindingsControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameBindingsControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameFactoryStubDispatch {
 public:
  static bool Accept(FrameFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameFactory>>
class FrameFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameFactoryStub() {}
  ~FrameFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT KeepAliveHandleStubDispatch {
 public:
  static bool Accept(KeepAliveHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      KeepAliveHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<KeepAliveHandle>>
class KeepAliveHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  KeepAliveHandleStub() {}
  ~KeepAliveHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeepAliveHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeepAliveHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameHostStubDispatch {
 public:
  static bool Accept(FrameHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameHost>>
class FrameHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameHostStub() {}
  ~FrameHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameNavigationControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameBindingsControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT KeepAliveHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameNavigationControlResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};











class CONTENT_EXPORT CreateNewWindowParams {
 public:
  using DataView = CreateNewWindowParamsDataView;
  using Data_ = internal::CreateNewWindowParams_Data;

  template <typename... Args>
  static CreateNewWindowParamsPtr New(Args&&... args) {
    return CreateNewWindowParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CreateNewWindowParamsPtr From(const U& u) {
    return mojo::TypeConverter<CreateNewWindowParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CreateNewWindowParams>::Convert(*this);
  }


  CreateNewWindowParams();

  CreateNewWindowParams(
      bool user_gesture,
      ::content::mojom::WindowContainerType window_container_type,
      const std::string& session_storage_namespace_id,
      const std::string& clone_from_session_storage_namespace_id,
      const std::string& frame_name,
      bool opener_suppressed,
      WindowOpenDisposition disposition,
      const GURL& target_url,
      const content::Referrer& referrer,
      ::blink::mojom::WindowFeaturesPtr features);

  ~CreateNewWindowParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CreateNewWindowParamsPtr>
  CreateNewWindowParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CreateNewWindowParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CreateNewWindowParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CreateNewWindowParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CreateNewWindowParams_UnserializedMessageContext<
            UserType, CreateNewWindowParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CreateNewWindowParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CreateNewWindowParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CreateNewWindowParams_UnserializedMessageContext<
            UserType, CreateNewWindowParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CreateNewWindowParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool user_gesture;
  ::content::mojom::WindowContainerType window_container_type;
  std::string session_storage_namespace_id;
  std::string clone_from_session_storage_namespace_id;
  std::string frame_name;
  bool opener_suppressed;
  WindowOpenDisposition disposition;
  GURL target_url;
  content::Referrer referrer;
  ::blink::mojom::WindowFeaturesPtr features;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CreateNewWindowParams);
};


class CONTENT_EXPORT CreateNewWindowReply {
 public:
  using DataView = CreateNewWindowReplyDataView;
  using Data_ = internal::CreateNewWindowReply_Data;

  template <typename... Args>
  static CreateNewWindowReplyPtr New(Args&&... args) {
    return CreateNewWindowReplyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CreateNewWindowReplyPtr From(const U& u) {
    return mojo::TypeConverter<CreateNewWindowReplyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CreateNewWindowReply>::Convert(*this);
  }


  CreateNewWindowReply();

  CreateNewWindowReply(
      int32_t route_id,
      int32_t main_frame_route_id,
      int32_t main_frame_widget_route_id,
      ::service_manager::mojom::InterfaceProviderPtrInfo main_frame_interface_provider,
      const std::string& cloned_session_storage_namespace_id,
      const base::UnguessableToken& devtools_main_frame_token);

  ~CreateNewWindowReply();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CreateNewWindowReplyPtr>
  CreateNewWindowReplyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CreateNewWindowReply>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CreateNewWindowReply::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CreateNewWindowReply::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CreateNewWindowReply_UnserializedMessageContext<
            UserType, CreateNewWindowReply::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CreateNewWindowReply::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CreateNewWindowReply::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CreateNewWindowReply_UnserializedMessageContext<
            UserType, CreateNewWindowReply::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CreateNewWindowReply::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t route_id;
  int32_t main_frame_route_id;
  int32_t main_frame_widget_route_id;
  ::service_manager::mojom::InterfaceProviderPtrInfo main_frame_interface_provider;
  std::string cloned_session_storage_namespace_id;
  base::UnguessableToken devtools_main_frame_token;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CreateNewWindowReply);
};


template <typename StructPtrType>
CreateNewWindowParamsPtr CreateNewWindowParams::Clone() const {
  return New(
      mojo::Clone(user_gesture),
      mojo::Clone(window_container_type),
      mojo::Clone(session_storage_namespace_id),
      mojo::Clone(clone_from_session_storage_namespace_id),
      mojo::Clone(frame_name),
      mojo::Clone(opener_suppressed),
      mojo::Clone(disposition),
      mojo::Clone(target_url),
      mojo::Clone(referrer),
      mojo::Clone(features)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CreateNewWindowParams>::value>::type*>
bool CreateNewWindowParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->user_gesture, other_struct.user_gesture))
    return false;
  if (!mojo::Equals(this->window_container_type, other_struct.window_container_type))
    return false;
  if (!mojo::Equals(this->session_storage_namespace_id, other_struct.session_storage_namespace_id))
    return false;
  if (!mojo::Equals(this->clone_from_session_storage_namespace_id, other_struct.clone_from_session_storage_namespace_id))
    return false;
  if (!mojo::Equals(this->frame_name, other_struct.frame_name))
    return false;
  if (!mojo::Equals(this->opener_suppressed, other_struct.opener_suppressed))
    return false;
  if (!mojo::Equals(this->disposition, other_struct.disposition))
    return false;
  if (!mojo::Equals(this->target_url, other_struct.target_url))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->features, other_struct.features))
    return false;
  return true;
}
template <typename StructPtrType>
CreateNewWindowReplyPtr CreateNewWindowReply::Clone() const {
  return New(
      mojo::Clone(route_id),
      mojo::Clone(main_frame_route_id),
      mojo::Clone(main_frame_widget_route_id),
      mojo::Clone(main_frame_interface_provider),
      mojo::Clone(cloned_session_storage_namespace_id),
      mojo::Clone(devtools_main_frame_token)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CreateNewWindowReply>::value>::type*>
bool CreateNewWindowReply::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->route_id, other_struct.route_id))
    return false;
  if (!mojo::Equals(this->main_frame_route_id, other_struct.main_frame_route_id))
    return false;
  if (!mojo::Equals(this->main_frame_widget_route_id, other_struct.main_frame_widget_route_id))
    return false;
  if (!mojo::Equals(this->main_frame_interface_provider, other_struct.main_frame_interface_provider))
    return false;
  if (!mojo::Equals(this->cloned_session_storage_namespace_id, other_struct.cloned_session_storage_namespace_id))
    return false;
  if (!mojo::Equals(this->devtools_main_frame_token, other_struct.devtools_main_frame_token))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::CreateNewWindowParams::DataView,
                                         ::content::mojom::CreateNewWindowParamsPtr> {
  static bool IsNull(const ::content::mojom::CreateNewWindowParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::CreateNewWindowParamsPtr* output) { output->reset(); }

  static decltype(::content::mojom::CreateNewWindowParams::user_gesture) user_gesture(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->user_gesture;
  }

  static decltype(::content::mojom::CreateNewWindowParams::window_container_type) window_container_type(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->window_container_type;
  }

  static const decltype(::content::mojom::CreateNewWindowParams::session_storage_namespace_id)& session_storage_namespace_id(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->session_storage_namespace_id;
  }

  static const decltype(::content::mojom::CreateNewWindowParams::clone_from_session_storage_namespace_id)& clone_from_session_storage_namespace_id(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->clone_from_session_storage_namespace_id;
  }

  static const decltype(::content::mojom::CreateNewWindowParams::frame_name)& frame_name(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->frame_name;
  }

  static decltype(::content::mojom::CreateNewWindowParams::opener_suppressed) opener_suppressed(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->opener_suppressed;
  }

  static decltype(::content::mojom::CreateNewWindowParams::disposition) disposition(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->disposition;
  }

  static const decltype(::content::mojom::CreateNewWindowParams::target_url)& target_url(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->target_url;
  }

  static const decltype(::content::mojom::CreateNewWindowParams::referrer)& referrer(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->referrer;
  }

  static const decltype(::content::mojom::CreateNewWindowParams::features)& features(
      const ::content::mojom::CreateNewWindowParamsPtr& input) {
    return input->features;
  }

  static bool Read(::content::mojom::CreateNewWindowParams::DataView input, ::content::mojom::CreateNewWindowParamsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::CreateNewWindowReply::DataView,
                                         ::content::mojom::CreateNewWindowReplyPtr> {
  static bool IsNull(const ::content::mojom::CreateNewWindowReplyPtr& input) { return !input; }
  static void SetToNull(::content::mojom::CreateNewWindowReplyPtr* output) { output->reset(); }

  static decltype(::content::mojom::CreateNewWindowReply::route_id) route_id(
      const ::content::mojom::CreateNewWindowReplyPtr& input) {
    return input->route_id;
  }

  static decltype(::content::mojom::CreateNewWindowReply::main_frame_route_id) main_frame_route_id(
      const ::content::mojom::CreateNewWindowReplyPtr& input) {
    return input->main_frame_route_id;
  }

  static decltype(::content::mojom::CreateNewWindowReply::main_frame_widget_route_id) main_frame_widget_route_id(
      const ::content::mojom::CreateNewWindowReplyPtr& input) {
    return input->main_frame_widget_route_id;
  }

  static  decltype(::content::mojom::CreateNewWindowReply::main_frame_interface_provider)& main_frame_interface_provider(
       ::content::mojom::CreateNewWindowReplyPtr& input) {
    return input->main_frame_interface_provider;
  }

  static const decltype(::content::mojom::CreateNewWindowReply::cloned_session_storage_namespace_id)& cloned_session_storage_namespace_id(
      const ::content::mojom::CreateNewWindowReplyPtr& input) {
    return input->cloned_session_storage_namespace_id;
  }

  static const decltype(::content::mojom::CreateNewWindowReply::devtools_main_frame_token)& devtools_main_frame_token(
      const ::content::mojom::CreateNewWindowReplyPtr& input) {
    return input->devtools_main_frame_token;
  }

  static bool Read(::content::mojom::CreateNewWindowReply::DataView input, ::content::mojom::CreateNewWindowReplyPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_FRAME_MOJOM_H_