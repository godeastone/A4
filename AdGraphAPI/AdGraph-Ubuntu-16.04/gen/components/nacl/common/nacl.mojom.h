// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_NACL_COMMON_NACL_MOJOM_H_
#define COMPONENTS_NACL_COMMON_NACL_MOJOM_H_

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
#include "components/nacl/common/nacl.mojom-shared.h"
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
#include "native_client/src/trusted/service_runtime/nacl_error_code.h"


namespace nacl {
namespace mojom {
class NaClRendererHost;
using NaClRendererHostPtr = mojo::InterfacePtr<NaClRendererHost>;
using NaClRendererHostPtrInfo = mojo::InterfacePtrInfo<NaClRendererHost>;
using ThreadSafeNaClRendererHostPtr =
    mojo::ThreadSafeInterfacePtr<NaClRendererHost>;
using NaClRendererHostRequest = mojo::InterfaceRequest<NaClRendererHost>;
using NaClRendererHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<NaClRendererHost>;
using ThreadSafeNaClRendererHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NaClRendererHost>;
using NaClRendererHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NaClRendererHost>;
using NaClRendererHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NaClRendererHost>;

class NaClExitControl;
using NaClExitControlPtr = mojo::InterfacePtr<NaClExitControl>;
using NaClExitControlPtrInfo = mojo::InterfacePtrInfo<NaClExitControl>;
using ThreadSafeNaClExitControlPtr =
    mojo::ThreadSafeInterfacePtr<NaClExitControl>;
using NaClExitControlRequest = mojo::InterfaceRequest<NaClExitControl>;
using NaClExitControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<NaClExitControl>;
using ThreadSafeNaClExitControlAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NaClExitControl>;
using NaClExitControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NaClExitControl>;
using NaClExitControlAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NaClExitControl>;


class NaClRendererHostProxy;

template <typename ImplRefTraits>
class NaClRendererHostStub;

class NaClRendererHostRequestValidator;
class NaClRendererHostResponseValidator;

class  NaClRendererHost
    : public NaClRendererHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = NaClRendererHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = NaClRendererHostStub<ImplRefTraits>;

  using RequestValidator_ = NaClRendererHostRequestValidator;
  using ResponseValidator_ = NaClRendererHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReportExitStatusMinVersion = 0,
    kReportLoadStatusMinVersion = 0,
    kProvideExitControlMinVersion = 0,
  };
  virtual ~NaClRendererHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReportExitStatus(int32_t exit_status);

  using ReportExitStatusCallback = base::OnceCallback<void()>;
  virtual void ReportExitStatus(int32_t exit_status, ReportExitStatusCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReportLoadStatus(::NaClErrorCode load_status);

  using ReportLoadStatusCallback = base::OnceCallback<void()>;
  virtual void ReportLoadStatus(::NaClErrorCode load_status, ReportLoadStatusCallback callback) = 0;

  virtual void ProvideExitControl(NaClExitControlPtr exit_control) = 0;
};
class  NaClRendererHostInterceptorForTesting : public NaClRendererHost {
  virtual NaClRendererHost* GetForwardingInterface() = 0;
  void ReportExitStatus(int32_t exit_status, ReportExitStatusCallback callback) override;
  void ReportLoadStatus(::NaClErrorCode load_status, ReportLoadStatusCallback callback) override;
  void ProvideExitControl(NaClExitControlPtr exit_control) override;
};
class  NaClRendererHostAsyncWaiter {
 public:
  explicit NaClRendererHostAsyncWaiter(NaClRendererHost* proxy);
  ~NaClRendererHostAsyncWaiter();
  void ReportExitStatus(
      int32_t exit_status);
  void ReportLoadStatus(
      ::NaClErrorCode load_status);

 private:
  NaClRendererHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NaClRendererHostAsyncWaiter);
};

class NaClExitControlProxy;

template <typename ImplRefTraits>
class NaClExitControlStub;

class NaClExitControlRequestValidator;

class  NaClExitControl
    : public NaClExitControlInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NaClExitControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = NaClExitControlStub<ImplRefTraits>;

  using RequestValidator_ = NaClExitControlRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~NaClExitControl() {}
};
class  NaClExitControlInterceptorForTesting : public NaClExitControl {
  virtual NaClExitControl* GetForwardingInterface() = 0;
};
class  NaClExitControlAsyncWaiter {
 public:
  explicit NaClExitControlAsyncWaiter(NaClExitControl* proxy);
  ~NaClExitControlAsyncWaiter();

 private:
  NaClExitControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NaClExitControlAsyncWaiter);
};

class  NaClRendererHostProxy
    : public NaClRendererHost {
 public:
  explicit NaClRendererHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool ReportExitStatus(int32_t exit_status) final;
  void ReportExitStatus(int32_t exit_status, ReportExitStatusCallback callback) final;
  bool ReportLoadStatus(::NaClErrorCode load_status) final;
  void ReportLoadStatus(::NaClErrorCode load_status, ReportLoadStatusCallback callback) final;
  void ProvideExitControl(NaClExitControlPtr exit_control) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NaClExitControlProxy
    : public NaClExitControl {
 public:
  explicit NaClExitControlProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NaClRendererHostStubDispatch {
 public:
  static bool Accept(NaClRendererHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NaClRendererHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NaClRendererHost>>
class NaClRendererHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NaClRendererHostStub() {}
  ~NaClRendererHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NaClRendererHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NaClRendererHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NaClExitControlStubDispatch {
 public:
  static bool Accept(NaClExitControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NaClExitControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NaClExitControl>>
class NaClExitControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NaClExitControlStub() {}
  ~NaClExitControlStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NaClExitControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NaClExitControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NaClRendererHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NaClExitControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NaClRendererHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace nacl

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_NACL_COMMON_NACL_MOJOM_H_