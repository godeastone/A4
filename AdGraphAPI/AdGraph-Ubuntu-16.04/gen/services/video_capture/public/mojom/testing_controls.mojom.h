// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_TESTING_CONTROLS_MOJOM_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_TESTING_CONTROLS_MOJOM_H_

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
#include "services/video_capture/public/mojom/testing_controls.mojom-shared.h"
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


namespace video_capture {
namespace mojom {
class TestingControls;
using TestingControlsPtr = mojo::InterfacePtr<TestingControls>;
using TestingControlsPtrInfo = mojo::InterfacePtrInfo<TestingControls>;
using ThreadSafeTestingControlsPtr =
    mojo::ThreadSafeInterfacePtr<TestingControls>;
using TestingControlsRequest = mojo::InterfaceRequest<TestingControls>;
using TestingControlsAssociatedPtr =
    mojo::AssociatedInterfacePtr<TestingControls>;
using ThreadSafeTestingControlsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TestingControls>;
using TestingControlsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TestingControls>;
using TestingControlsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TestingControls>;


class TestingControlsProxy;

template <typename ImplRefTraits>
class TestingControlsStub;

class TestingControlsRequestValidator;

class  TestingControls
    : public TestingControlsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TestingControlsProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestingControlsStub<ImplRefTraits>;

  using RequestValidator_ = TestingControlsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCrashMinVersion = 0,
  };
  virtual ~TestingControls() {}

  virtual void Crash() = 0;
};
class  TestingControlsInterceptorForTesting : public TestingControls {
  virtual TestingControls* GetForwardingInterface() = 0;
  void Crash() override;
};
class  TestingControlsAsyncWaiter {
 public:
  explicit TestingControlsAsyncWaiter(TestingControls* proxy);
  ~TestingControlsAsyncWaiter();

 private:
  TestingControls* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TestingControlsAsyncWaiter);
};

class  TestingControlsProxy
    : public TestingControls {
 public:
  explicit TestingControlsProxy(mojo::MessageReceiverWithResponder* receiver);
  void Crash() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TestingControlsStubDispatch {
 public:
  static bool Accept(TestingControls* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestingControls* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestingControls>>
class TestingControlsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestingControlsStub() {}
  ~TestingControlsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestingControlsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestingControlsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestingControlsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_TESTING_CONTROLS_MOJOM_H_