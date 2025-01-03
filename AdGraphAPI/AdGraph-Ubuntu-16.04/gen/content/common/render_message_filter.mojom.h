// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_H_
#define CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_H_

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
#include "content/common/render_message_filter.mojom-shared.h"
#include "content/common/input/input_handler.mojom.h"
#include "content/common/native_types.mojom.h"
#include "content/common/widget.mojom.h"
#include "mojo/public/mojom/base/thread_priority.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class RenderMessageFilter;
using RenderMessageFilterPtr = mojo::InterfacePtr<RenderMessageFilter>;
using RenderMessageFilterPtrInfo = mojo::InterfacePtrInfo<RenderMessageFilter>;
using ThreadSafeRenderMessageFilterPtr =
    mojo::ThreadSafeInterfacePtr<RenderMessageFilter>;
using RenderMessageFilterRequest = mojo::InterfaceRequest<RenderMessageFilter>;
using RenderMessageFilterAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderMessageFilter>;
using ThreadSafeRenderMessageFilterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RenderMessageFilter>;
using RenderMessageFilterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderMessageFilter>;
using RenderMessageFilterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RenderMessageFilter>;


class RenderMessageFilterProxy;

template <typename ImplRefTraits>
class RenderMessageFilterStub;

class RenderMessageFilterRequestValidator;
class RenderMessageFilterResponseValidator;

class CONTENT_EXPORT RenderMessageFilter
    : public RenderMessageFilterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = RenderMessageFilterProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderMessageFilterStub<ImplRefTraits>;

  using RequestValidator_ = RenderMessageFilterRequestValidator;
  using ResponseValidator_ = RenderMessageFilterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGenerateRoutingIDMinVersion = 0,
    kCreateNewWidgetMinVersion = 0,
    kCreateFullscreenWidgetMinVersion = 0,
    kDidGenerateCacheableMetadataMinVersion = 0,
    kDidGenerateCacheableMetadataInCacheStorageMinVersion = 0,
    kHasGpuProcessMinVersion = 0,
    kSetThreadPriorityMinVersion = 0,
  };
  virtual ~RenderMessageFilter() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GenerateRoutingID(int32_t* out_routing_id);

  using GenerateRoutingIDCallback = base::OnceCallback<void(int32_t)>;
  virtual void GenerateRoutingID(GenerateRoutingIDCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, int32_t* out_route_id);

  using CreateNewWidgetCallback = base::OnceCallback<void(int32_t)>;
  virtual void CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, CreateNewWidgetCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, int32_t* out_route_id);

  using CreateFullscreenWidgetCallback = base::OnceCallback<void(int32_t)>;
  virtual void CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, CreateFullscreenWidgetCallback callback) = 0;

  virtual void DidGenerateCacheableMetadata(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data) = 0;

  virtual void DidGenerateCacheableMetadataInCacheStorage(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data, const url::Origin& cache_storage_origin, const std::string& cache_storage_cache_name) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool HasGpuProcess(bool* out_has_gpu_process);

  using HasGpuProcessCallback = base::OnceCallback<void(bool)>;
  virtual void HasGpuProcess(HasGpuProcessCallback callback) = 0;

  virtual void SetThreadPriority(int32_t platform_thread_id, base::ThreadPriority thread_priority) = 0;
};
class CONTENT_EXPORT RenderMessageFilterInterceptorForTesting : public RenderMessageFilter {
  virtual RenderMessageFilter* GetForwardingInterface() = 0;
  void GenerateRoutingID(GenerateRoutingIDCallback callback) override;
  void CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, CreateNewWidgetCallback callback) override;
  void CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, CreateFullscreenWidgetCallback callback) override;
  void DidGenerateCacheableMetadata(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data) override;
  void DidGenerateCacheableMetadataInCacheStorage(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data, const url::Origin& cache_storage_origin, const std::string& cache_storage_cache_name) override;
  void HasGpuProcess(HasGpuProcessCallback callback) override;
  void SetThreadPriority(int32_t platform_thread_id, base::ThreadPriority thread_priority) override;
};
class CONTENT_EXPORT RenderMessageFilterAsyncWaiter {
 public:
  explicit RenderMessageFilterAsyncWaiter(RenderMessageFilter* proxy);
  ~RenderMessageFilterAsyncWaiter();
  void GenerateRoutingID(
      int32_t* out_routing_id);
  void CreateNewWidget(
      int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, int32_t* out_route_id);
  void CreateFullscreenWidget(
      int32_t opener_id, ::content::mojom::WidgetPtr widget, int32_t* out_route_id);
  void HasGpuProcess(
      bool* out_has_gpu_process);

 private:
  RenderMessageFilter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilterAsyncWaiter);
};

class CONTENT_EXPORT RenderMessageFilterProxy
    : public RenderMessageFilter {
 public:
  explicit RenderMessageFilterProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GenerateRoutingID(int32_t* out_routing_id) final;
  void GenerateRoutingID(GenerateRoutingIDCallback callback) final;
  bool CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, int32_t* out_route_id) final;
  void CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, CreateNewWidgetCallback callback) final;
  bool CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, int32_t* out_route_id) final;
  void CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, CreateFullscreenWidgetCallback callback) final;
  void DidGenerateCacheableMetadata(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data) final;
  void DidGenerateCacheableMetadataInCacheStorage(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data, const url::Origin& cache_storage_origin, const std::string& cache_storage_cache_name) final;
  bool HasGpuProcess(bool* out_has_gpu_process) final;
  void HasGpuProcess(HasGpuProcessCallback callback) final;
  void SetThreadPriority(int32_t platform_thread_id, base::ThreadPriority thread_priority) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RenderMessageFilterStubDispatch {
 public:
  static bool Accept(RenderMessageFilter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderMessageFilter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderMessageFilter>>
class RenderMessageFilterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderMessageFilterStub() {}
  ~RenderMessageFilterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderMessageFilterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderMessageFilterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RenderMessageFilterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RenderMessageFilterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_H_