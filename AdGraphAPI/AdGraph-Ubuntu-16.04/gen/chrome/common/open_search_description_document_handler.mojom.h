// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_H_
#define CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_H_

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
#include "chrome/common/open_search_description_document_handler.mojom-shared.h"
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


namespace chrome {
namespace mojom {
class OpenSearchDescriptionDocumentHandler;
using OpenSearchDescriptionDocumentHandlerPtr = mojo::InterfacePtr<OpenSearchDescriptionDocumentHandler>;
using OpenSearchDescriptionDocumentHandlerPtrInfo = mojo::InterfacePtrInfo<OpenSearchDescriptionDocumentHandler>;
using ThreadSafeOpenSearchDescriptionDocumentHandlerPtr =
    mojo::ThreadSafeInterfacePtr<OpenSearchDescriptionDocumentHandler>;
using OpenSearchDescriptionDocumentHandlerRequest = mojo::InterfaceRequest<OpenSearchDescriptionDocumentHandler>;
using OpenSearchDescriptionDocumentHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<OpenSearchDescriptionDocumentHandler>;
using ThreadSafeOpenSearchDescriptionDocumentHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OpenSearchDescriptionDocumentHandler>;
using OpenSearchDescriptionDocumentHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OpenSearchDescriptionDocumentHandler>;
using OpenSearchDescriptionDocumentHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OpenSearchDescriptionDocumentHandler>;


class OpenSearchDescriptionDocumentHandlerProxy;

template <typename ImplRefTraits>
class OpenSearchDescriptionDocumentHandlerStub;

class OpenSearchDescriptionDocumentHandlerRequestValidator;

class  OpenSearchDescriptionDocumentHandler
    : public OpenSearchDescriptionDocumentHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = OpenSearchDescriptionDocumentHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = OpenSearchDescriptionDocumentHandlerStub<ImplRefTraits>;

  using RequestValidator_ = OpenSearchDescriptionDocumentHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPageHasOpenSearchDescriptionDocumentMinVersion = 0,
  };
  virtual ~OpenSearchDescriptionDocumentHandler() {}

  virtual void PageHasOpenSearchDescriptionDocument(const GURL& page_url, const GURL& osdd_url) = 0;
};
class  OpenSearchDescriptionDocumentHandlerInterceptorForTesting : public OpenSearchDescriptionDocumentHandler {
  virtual OpenSearchDescriptionDocumentHandler* GetForwardingInterface() = 0;
  void PageHasOpenSearchDescriptionDocument(const GURL& page_url, const GURL& osdd_url) override;
};
class  OpenSearchDescriptionDocumentHandlerAsyncWaiter {
 public:
  explicit OpenSearchDescriptionDocumentHandlerAsyncWaiter(OpenSearchDescriptionDocumentHandler* proxy);
  ~OpenSearchDescriptionDocumentHandlerAsyncWaiter();

 private:
  OpenSearchDescriptionDocumentHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OpenSearchDescriptionDocumentHandlerAsyncWaiter);
};

class  OpenSearchDescriptionDocumentHandlerProxy
    : public OpenSearchDescriptionDocumentHandler {
 public:
  explicit OpenSearchDescriptionDocumentHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void PageHasOpenSearchDescriptionDocument(const GURL& page_url, const GURL& osdd_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  OpenSearchDescriptionDocumentHandlerStubDispatch {
 public:
  static bool Accept(OpenSearchDescriptionDocumentHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OpenSearchDescriptionDocumentHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OpenSearchDescriptionDocumentHandler>>
class OpenSearchDescriptionDocumentHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OpenSearchDescriptionDocumentHandlerStub() {}
  ~OpenSearchDescriptionDocumentHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OpenSearchDescriptionDocumentHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OpenSearchDescriptionDocumentHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  OpenSearchDescriptionDocumentHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_H_