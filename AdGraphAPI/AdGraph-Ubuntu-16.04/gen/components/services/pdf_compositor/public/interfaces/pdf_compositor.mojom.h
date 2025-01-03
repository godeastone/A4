// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_H_
#define COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_H_

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
#include "components/services/pdf_compositor/public/interfaces/pdf_compositor.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
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


namespace printing {
namespace mojom {
extern const char kServiceName[];
class PdfCompositor;
using PdfCompositorPtr = mojo::InterfacePtr<PdfCompositor>;
using PdfCompositorPtrInfo = mojo::InterfacePtrInfo<PdfCompositor>;
using ThreadSafePdfCompositorPtr =
    mojo::ThreadSafeInterfacePtr<PdfCompositor>;
using PdfCompositorRequest = mojo::InterfaceRequest<PdfCompositor>;
using PdfCompositorAssociatedPtr =
    mojo::AssociatedInterfacePtr<PdfCompositor>;
using ThreadSafePdfCompositorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PdfCompositor>;
using PdfCompositorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PdfCompositor>;
using PdfCompositorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PdfCompositor>;


class PdfCompositorProxy;

template <typename ImplRefTraits>
class PdfCompositorStub;

class PdfCompositorRequestValidator;
class PdfCompositorResponseValidator;

class  PdfCompositor
    : public PdfCompositorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PdfCompositorProxy;

  template <typename ImplRefTraits>
  using Stub_ = PdfCompositorStub<ImplRefTraits>;

  using RequestValidator_ = PdfCompositorRequestValidator;
  using ResponseValidator_ = PdfCompositorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kNotifyUnavailableSubframeMinVersion = 0,
    kAddSubframeContentMinVersion = 0,
    kCompositePageToPdfMinVersion = 0,
    kCompositeDocumentToPdfMinVersion = 0,
    kSetWebContentsURLMinVersion = 0,
  };
  using Status = PdfCompositor_Status;
  virtual ~PdfCompositor() {}

  virtual void NotifyUnavailableSubframe(uint64_t frame_guid) = 0;

  virtual void AddSubframeContent(uint64_t frame_guid, mojo::ScopedSharedBufferHandle serialized_content, const base::flat_map<uint32_t, uint64_t>& subframe_content_info) = 0;


  using CompositePageToPdfCallback = base::OnceCallback<void(PdfCompositor::Status, base::ReadOnlySharedMemoryRegion)>;
  virtual void CompositePageToPdf(uint64_t frame_guid, uint32_t page_num, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositePageToPdfCallback callback) = 0;


  using CompositeDocumentToPdfCallback = base::OnceCallback<void(PdfCompositor::Status, base::ReadOnlySharedMemoryRegion)>;
  virtual void CompositeDocumentToPdf(uint64_t frame_guid, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositeDocumentToPdfCallback callback) = 0;

  virtual void SetWebContentsURL(const GURL& url) = 0;
};
class  PdfCompositorInterceptorForTesting : public PdfCompositor {
  virtual PdfCompositor* GetForwardingInterface() = 0;
  void NotifyUnavailableSubframe(uint64_t frame_guid) override;
  void AddSubframeContent(uint64_t frame_guid, mojo::ScopedSharedBufferHandle serialized_content, const base::flat_map<uint32_t, uint64_t>& subframe_content_info) override;
  void CompositePageToPdf(uint64_t frame_guid, uint32_t page_num, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositePageToPdfCallback callback) override;
  void CompositeDocumentToPdf(uint64_t frame_guid, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositeDocumentToPdfCallback callback) override;
  void SetWebContentsURL(const GURL& url) override;
};
class  PdfCompositorAsyncWaiter {
 public:
  explicit PdfCompositorAsyncWaiter(PdfCompositor* proxy);
  ~PdfCompositorAsyncWaiter();
  void CompositePageToPdf(
      uint64_t frame_guid, uint32_t page_num, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, PdfCompositor::Status* out_status, base::ReadOnlySharedMemoryRegion* out_pdf_region);
  void CompositeDocumentToPdf(
      uint64_t frame_guid, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, PdfCompositor::Status* out_status, base::ReadOnlySharedMemoryRegion* out_pdf_region);

 private:
  PdfCompositor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PdfCompositorAsyncWaiter);
};

class  PdfCompositorProxy
    : public PdfCompositor {
 public:
  explicit PdfCompositorProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyUnavailableSubframe(uint64_t frame_guid) final;
  void AddSubframeContent(uint64_t frame_guid, mojo::ScopedSharedBufferHandle serialized_content, const base::flat_map<uint32_t, uint64_t>& subframe_content_info) final;
  void CompositePageToPdf(uint64_t frame_guid, uint32_t page_num, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositePageToPdfCallback callback) final;
  void CompositeDocumentToPdf(uint64_t frame_guid, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositeDocumentToPdfCallback callback) final;
  void SetWebContentsURL(const GURL& url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PdfCompositorStubDispatch {
 public:
  static bool Accept(PdfCompositor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PdfCompositor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PdfCompositor>>
class PdfCompositorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PdfCompositorStub() {}
  ~PdfCompositorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfCompositorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PdfCompositorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PdfCompositorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PdfCompositorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace printing

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_PDF_COMPOSITOR_PUBLIC_INTERFACES_PDF_COMPOSITOR_MOJOM_H_