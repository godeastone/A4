// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_H_

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
#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom.h"
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


namespace viz {
namespace mojom {
class ExternalBeginFrameController;
using ExternalBeginFrameControllerPtr = mojo::InterfacePtr<ExternalBeginFrameController>;
using ExternalBeginFrameControllerPtrInfo = mojo::InterfacePtrInfo<ExternalBeginFrameController>;
using ThreadSafeExternalBeginFrameControllerPtr =
    mojo::ThreadSafeInterfacePtr<ExternalBeginFrameController>;
using ExternalBeginFrameControllerRequest = mojo::InterfaceRequest<ExternalBeginFrameController>;
using ExternalBeginFrameControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ExternalBeginFrameController>;
using ThreadSafeExternalBeginFrameControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ExternalBeginFrameController>;
using ExternalBeginFrameControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ExternalBeginFrameController>;
using ExternalBeginFrameControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ExternalBeginFrameController>;

class ExternalBeginFrameControllerClient;
using ExternalBeginFrameControllerClientPtr = mojo::InterfacePtr<ExternalBeginFrameControllerClient>;
using ExternalBeginFrameControllerClientPtrInfo = mojo::InterfacePtrInfo<ExternalBeginFrameControllerClient>;
using ThreadSafeExternalBeginFrameControllerClientPtr =
    mojo::ThreadSafeInterfacePtr<ExternalBeginFrameControllerClient>;
using ExternalBeginFrameControllerClientRequest = mojo::InterfaceRequest<ExternalBeginFrameControllerClient>;
using ExternalBeginFrameControllerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ExternalBeginFrameControllerClient>;
using ThreadSafeExternalBeginFrameControllerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ExternalBeginFrameControllerClient>;
using ExternalBeginFrameControllerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ExternalBeginFrameControllerClient>;
using ExternalBeginFrameControllerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ExternalBeginFrameControllerClient>;


class ExternalBeginFrameControllerProxy;

template <typename ImplRefTraits>
class ExternalBeginFrameControllerStub;

class ExternalBeginFrameControllerRequestValidator;

class  ExternalBeginFrameController
    : public ExternalBeginFrameControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ExternalBeginFrameControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ExternalBeginFrameControllerStub<ImplRefTraits>;

  using RequestValidator_ = ExternalBeginFrameControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kIssueExternalBeginFrameMinVersion = 0,
  };
  virtual ~ExternalBeginFrameController() {}

  virtual void IssueExternalBeginFrame(const viz::BeginFrameArgs& args) = 0;
};
class  ExternalBeginFrameControllerInterceptorForTesting : public ExternalBeginFrameController {
  virtual ExternalBeginFrameController* GetForwardingInterface() = 0;
  void IssueExternalBeginFrame(const viz::BeginFrameArgs& args) override;
};
class  ExternalBeginFrameControllerAsyncWaiter {
 public:
  explicit ExternalBeginFrameControllerAsyncWaiter(ExternalBeginFrameController* proxy);
  ~ExternalBeginFrameControllerAsyncWaiter();

 private:
  ExternalBeginFrameController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ExternalBeginFrameControllerAsyncWaiter);
};

class ExternalBeginFrameControllerClientProxy;

template <typename ImplRefTraits>
class ExternalBeginFrameControllerClientStub;

class ExternalBeginFrameControllerClientRequestValidator;

class  ExternalBeginFrameControllerClient
    : public ExternalBeginFrameControllerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ExternalBeginFrameControllerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ExternalBeginFrameControllerClientStub<ImplRefTraits>;

  using RequestValidator_ = ExternalBeginFrameControllerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnNeedsBeginFramesMinVersion = 0,
    kOnDisplayDidFinishFrameMinVersion = 0,
  };
  virtual ~ExternalBeginFrameControllerClient() {}

  virtual void OnNeedsBeginFrames(bool needs_begin_frames) = 0;

  virtual void OnDisplayDidFinishFrame(const viz::BeginFrameAck& ack) = 0;
};
class  ExternalBeginFrameControllerClientInterceptorForTesting : public ExternalBeginFrameControllerClient {
  virtual ExternalBeginFrameControllerClient* GetForwardingInterface() = 0;
  void OnNeedsBeginFrames(bool needs_begin_frames) override;
  void OnDisplayDidFinishFrame(const viz::BeginFrameAck& ack) override;
};
class  ExternalBeginFrameControllerClientAsyncWaiter {
 public:
  explicit ExternalBeginFrameControllerClientAsyncWaiter(ExternalBeginFrameControllerClient* proxy);
  ~ExternalBeginFrameControllerClientAsyncWaiter();

 private:
  ExternalBeginFrameControllerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ExternalBeginFrameControllerClientAsyncWaiter);
};

class  ExternalBeginFrameControllerProxy
    : public ExternalBeginFrameController {
 public:
  explicit ExternalBeginFrameControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void IssueExternalBeginFrame(const viz::BeginFrameArgs& args) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ExternalBeginFrameControllerClientProxy
    : public ExternalBeginFrameControllerClient {
 public:
  explicit ExternalBeginFrameControllerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnNeedsBeginFrames(bool needs_begin_frames) final;
  void OnDisplayDidFinishFrame(const viz::BeginFrameAck& ack) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ExternalBeginFrameControllerStubDispatch {
 public:
  static bool Accept(ExternalBeginFrameController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ExternalBeginFrameController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ExternalBeginFrameController>>
class ExternalBeginFrameControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ExternalBeginFrameControllerStub() {}
  ~ExternalBeginFrameControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ExternalBeginFrameControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ExternalBeginFrameControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ExternalBeginFrameControllerClientStubDispatch {
 public:
  static bool Accept(ExternalBeginFrameControllerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ExternalBeginFrameControllerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ExternalBeginFrameControllerClient>>
class ExternalBeginFrameControllerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ExternalBeginFrameControllerClientStub() {}
  ~ExternalBeginFrameControllerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ExternalBeginFrameControllerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ExternalBeginFrameControllerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ExternalBeginFrameControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ExternalBeginFrameControllerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_H_