// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SERVICE_PROCESS_MOJOM_H_
#define CHROME_COMMON_SERVICE_PROCESS_MOJOM_H_

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
#include "chrome/common/service_process.mojom-shared.h"
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
class ServiceProcess;
using ServiceProcessPtr = mojo::InterfacePtr<ServiceProcess>;
using ServiceProcessPtrInfo = mojo::InterfacePtrInfo<ServiceProcess>;
using ThreadSafeServiceProcessPtr =
    mojo::ThreadSafeInterfacePtr<ServiceProcess>;
using ServiceProcessRequest = mojo::InterfaceRequest<ServiceProcess>;
using ServiceProcessAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceProcess>;
using ThreadSafeServiceProcessAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceProcess>;
using ServiceProcessAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceProcess>;
using ServiceProcessAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceProcess>;


class ServiceProcessProxy;

template <typename ImplRefTraits>
class ServiceProcessStub;

class ServiceProcessRequestValidator;
class ServiceProcessResponseValidator;

class  ServiceProcess
    : public ServiceProcessInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ServiceProcessProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceProcessStub<ImplRefTraits>;

  using RequestValidator_ = ServiceProcessRequestValidator;
  using ResponseValidator_ = ServiceProcessResponseValidator;
  enum MethodMinVersions : uint32_t {
    kHelloMinVersion = 0,
    kGetHistogramsMinVersion = 0,
    kUpdateAvailableMinVersion = 0,
    kShutDownMinVersion = 0,
  };
  virtual ~ServiceProcess() {}


  using HelloCallback = base::OnceCallback<void()>;
  virtual void Hello(HelloCallback callback) = 0;


  using GetHistogramsCallback = base::OnceCallback<void(const std::vector<std::string>&)>;
  virtual void GetHistograms(GetHistogramsCallback callback) = 0;

  virtual void UpdateAvailable() = 0;

  virtual void ShutDown() = 0;
};
class  ServiceProcessInterceptorForTesting : public ServiceProcess {
  virtual ServiceProcess* GetForwardingInterface() = 0;
  void Hello(HelloCallback callback) override;
  void GetHistograms(GetHistogramsCallback callback) override;
  void UpdateAvailable() override;
  void ShutDown() override;
};
class  ServiceProcessAsyncWaiter {
 public:
  explicit ServiceProcessAsyncWaiter(ServiceProcess* proxy);
  ~ServiceProcessAsyncWaiter();
  void Hello(
      );
  void GetHistograms(
      std::vector<std::string>* out_histograms);

 private:
  ServiceProcess* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceProcessAsyncWaiter);
};

class  ServiceProcessProxy
    : public ServiceProcess {
 public:
  explicit ServiceProcessProxy(mojo::MessageReceiverWithResponder* receiver);
  void Hello(HelloCallback callback) final;
  void GetHistograms(GetHistogramsCallback callback) final;
  void UpdateAvailable() final;
  void ShutDown() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ServiceProcessStubDispatch {
 public:
  static bool Accept(ServiceProcess* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceProcess* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceProcess>>
class ServiceProcessStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceProcessStub() {}
  ~ServiceProcessStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceProcessStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceProcessStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ServiceProcessRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ServiceProcessResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_SERVICE_PROCESS_MOJOM_H_