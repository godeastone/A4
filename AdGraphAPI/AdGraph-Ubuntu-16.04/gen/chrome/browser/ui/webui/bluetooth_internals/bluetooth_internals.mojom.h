// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_H_

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
#include "chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-shared.h"
#include "device/bluetooth/public/mojom/adapter.mojom.h"
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


namespace mojom {
class BluetoothInternalsHandler;
using BluetoothInternalsHandlerPtr = mojo::InterfacePtr<BluetoothInternalsHandler>;
using BluetoothInternalsHandlerPtrInfo = mojo::InterfacePtrInfo<BluetoothInternalsHandler>;
using ThreadSafeBluetoothInternalsHandlerPtr =
    mojo::ThreadSafeInterfacePtr<BluetoothInternalsHandler>;
using BluetoothInternalsHandlerRequest = mojo::InterfaceRequest<BluetoothInternalsHandler>;
using BluetoothInternalsHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<BluetoothInternalsHandler>;
using ThreadSafeBluetoothInternalsHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BluetoothInternalsHandler>;
using BluetoothInternalsHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BluetoothInternalsHandler>;
using BluetoothInternalsHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BluetoothInternalsHandler>;


class BluetoothInternalsHandlerProxy;

template <typename ImplRefTraits>
class BluetoothInternalsHandlerStub;

class BluetoothInternalsHandlerRequestValidator;
class BluetoothInternalsHandlerResponseValidator;

class  BluetoothInternalsHandler
    : public BluetoothInternalsHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BluetoothInternalsHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = BluetoothInternalsHandlerStub<ImplRefTraits>;

  using RequestValidator_ = BluetoothInternalsHandlerRequestValidator;
  using ResponseValidator_ = BluetoothInternalsHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetAdapterMinVersion = 0,
  };
  virtual ~BluetoothInternalsHandler() {}


  using GetAdapterCallback = base::OnceCallback<void(::bluetooth::mojom::AdapterPtr)>;
  virtual void GetAdapter(GetAdapterCallback callback) = 0;
};
class  BluetoothInternalsHandlerInterceptorForTesting : public BluetoothInternalsHandler {
  virtual BluetoothInternalsHandler* GetForwardingInterface() = 0;
  void GetAdapter(GetAdapterCallback callback) override;
};
class  BluetoothInternalsHandlerAsyncWaiter {
 public:
  explicit BluetoothInternalsHandlerAsyncWaiter(BluetoothInternalsHandler* proxy);
  ~BluetoothInternalsHandlerAsyncWaiter();
  void GetAdapter(
      ::bluetooth::mojom::AdapterPtr* out_adapter);

 private:
  BluetoothInternalsHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothInternalsHandlerAsyncWaiter);
};

class  BluetoothInternalsHandlerProxy
    : public BluetoothInternalsHandler {
 public:
  explicit BluetoothInternalsHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAdapter(GetAdapterCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BluetoothInternalsHandlerStubDispatch {
 public:
  static bool Accept(BluetoothInternalsHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BluetoothInternalsHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BluetoothInternalsHandler>>
class BluetoothInternalsHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BluetoothInternalsHandlerStub() {}
  ~BluetoothInternalsHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothInternalsHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothInternalsHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BluetoothInternalsHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BluetoothInternalsHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom

namespace mojo {

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_H_