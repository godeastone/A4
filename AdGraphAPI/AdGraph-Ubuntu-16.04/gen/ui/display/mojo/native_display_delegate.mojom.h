// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_H_
#define UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_H_

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
#include "ui/display/mojo/native_display_delegate.mojom-shared.h"
#include "ui/display/mojo/display_constants.mojom.h"
#include "ui/display/mojo/display_mode.mojom.h"
#include "ui/display/mojo/display_snapshot.mojom.h"
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom.h"
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


namespace display {
namespace mojom {
class NativeDisplayObserver;
using NativeDisplayObserverPtr = mojo::InterfacePtr<NativeDisplayObserver>;
using NativeDisplayObserverPtrInfo = mojo::InterfacePtrInfo<NativeDisplayObserver>;
using ThreadSafeNativeDisplayObserverPtr =
    mojo::ThreadSafeInterfacePtr<NativeDisplayObserver>;
using NativeDisplayObserverRequest = mojo::InterfaceRequest<NativeDisplayObserver>;
using NativeDisplayObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<NativeDisplayObserver>;
using ThreadSafeNativeDisplayObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NativeDisplayObserver>;
using NativeDisplayObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NativeDisplayObserver>;
using NativeDisplayObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NativeDisplayObserver>;

class NativeDisplayDelegate;
using NativeDisplayDelegatePtr = mojo::InterfacePtr<NativeDisplayDelegate>;
using NativeDisplayDelegatePtrInfo = mojo::InterfacePtrInfo<NativeDisplayDelegate>;
using ThreadSafeNativeDisplayDelegatePtr =
    mojo::ThreadSafeInterfacePtr<NativeDisplayDelegate>;
using NativeDisplayDelegateRequest = mojo::InterfaceRequest<NativeDisplayDelegate>;
using NativeDisplayDelegateAssociatedPtr =
    mojo::AssociatedInterfacePtr<NativeDisplayDelegate>;
using ThreadSafeNativeDisplayDelegateAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NativeDisplayDelegate>;
using NativeDisplayDelegateAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NativeDisplayDelegate>;
using NativeDisplayDelegateAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NativeDisplayDelegate>;


class NativeDisplayObserverProxy;

template <typename ImplRefTraits>
class NativeDisplayObserverStub;

class NativeDisplayObserverRequestValidator;

class  NativeDisplayObserver
    : public NativeDisplayObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NativeDisplayObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = NativeDisplayObserverStub<ImplRefTraits>;

  using RequestValidator_ = NativeDisplayObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnConfigurationChangedMinVersion = 0,
  };
  virtual ~NativeDisplayObserver() {}

  virtual void OnConfigurationChanged() = 0;
};
class  NativeDisplayObserverInterceptorForTesting : public NativeDisplayObserver {
  virtual NativeDisplayObserver* GetForwardingInterface() = 0;
  void OnConfigurationChanged() override;
};
class  NativeDisplayObserverAsyncWaiter {
 public:
  explicit NativeDisplayObserverAsyncWaiter(NativeDisplayObserver* proxy);
  ~NativeDisplayObserverAsyncWaiter();

 private:
  NativeDisplayObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayObserverAsyncWaiter);
};

class NativeDisplayDelegateProxy;

template <typename ImplRefTraits>
class NativeDisplayDelegateStub;

class NativeDisplayDelegateRequestValidator;
class NativeDisplayDelegateResponseValidator;

class  NativeDisplayDelegate
    : public NativeDisplayDelegateInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = NativeDisplayDelegateProxy;

  template <typename ImplRefTraits>
  using Stub_ = NativeDisplayDelegateStub<ImplRefTraits>;

  using RequestValidator_ = NativeDisplayDelegateRequestValidator;
  using ResponseValidator_ = NativeDisplayDelegateResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kTakeDisplayControlMinVersion = 0,
    kRelinquishDisplayControlMinVersion = 0,
    kGetDisplaysMinVersion = 0,
    kConfigureMinVersion = 0,
    kGetHDCPStateMinVersion = 0,
    kSetHDCPStateMinVersion = 0,
    kSetColorCorrectionMinVersion = 0,
  };
  virtual ~NativeDisplayDelegate() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Initialize(NativeDisplayObserverPtr observer, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots);

  using InitializeCallback = base::OnceCallback<void(std::vector<std::unique_ptr<display::DisplaySnapshot>>)>;
  virtual void Initialize(NativeDisplayObserverPtr observer, InitializeCallback callback) = 0;


  using TakeDisplayControlCallback = base::OnceCallback<void(bool)>;
  virtual void TakeDisplayControl(TakeDisplayControlCallback callback) = 0;


  using RelinquishDisplayControlCallback = base::OnceCallback<void(bool)>;
  virtual void RelinquishDisplayControl(RelinquishDisplayControlCallback callback) = 0;


  using GetDisplaysCallback = base::OnceCallback<void(std::vector<std::unique_ptr<display::DisplaySnapshot>>)>;
  virtual void GetDisplays(GetDisplaysCallback callback) = 0;


  using ConfigureCallback = base::OnceCallback<void(bool)>;
  virtual void Configure(int64_t display_id, base::Optional<std::unique_ptr<display::DisplayMode>> mode, const gfx::Point& origin, ConfigureCallback callback) = 0;


  using GetHDCPStateCallback = base::OnceCallback<void(bool, display::HDCPState)>;
  virtual void GetHDCPState(int64_t display_id, GetHDCPStateCallback callback) = 0;


  using SetHDCPStateCallback = base::OnceCallback<void(bool)>;
  virtual void SetHDCPState(int64_t display_id, display::HDCPState state, SetHDCPStateCallback callback) = 0;

  virtual void SetColorCorrection(int64_t display_id, const std::vector<display::GammaRampRGBEntry>& degamma_lut, const std::vector<display::GammaRampRGBEntry>& gamma_lut, const std::vector<float>& correction_matrix) = 0;
};
class  NativeDisplayDelegateInterceptorForTesting : public NativeDisplayDelegate {
  virtual NativeDisplayDelegate* GetForwardingInterface() = 0;
  void Initialize(NativeDisplayObserverPtr observer, InitializeCallback callback) override;
  void TakeDisplayControl(TakeDisplayControlCallback callback) override;
  void RelinquishDisplayControl(RelinquishDisplayControlCallback callback) override;
  void GetDisplays(GetDisplaysCallback callback) override;
  void Configure(int64_t display_id, base::Optional<std::unique_ptr<display::DisplayMode>> mode, const gfx::Point& origin, ConfigureCallback callback) override;
  void GetHDCPState(int64_t display_id, GetHDCPStateCallback callback) override;
  void SetHDCPState(int64_t display_id, display::HDCPState state, SetHDCPStateCallback callback) override;
  void SetColorCorrection(int64_t display_id, const std::vector<display::GammaRampRGBEntry>& degamma_lut, const std::vector<display::GammaRampRGBEntry>& gamma_lut, const std::vector<float>& correction_matrix) override;
};
class  NativeDisplayDelegateAsyncWaiter {
 public:
  explicit NativeDisplayDelegateAsyncWaiter(NativeDisplayDelegate* proxy);
  ~NativeDisplayDelegateAsyncWaiter();
  void Initialize(
      NativeDisplayObserverPtr observer, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots);
  void TakeDisplayControl(
      bool* out_result);
  void RelinquishDisplayControl(
      bool* out_result);
  void GetDisplays(
      std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots);
  void Configure(
      int64_t display_id, base::Optional<std::unique_ptr<display::DisplayMode>> mode, const gfx::Point& origin, bool* out_status);
  void GetHDCPState(
      int64_t display_id, bool* out_status, display::HDCPState* out_state);
  void SetHDCPState(
      int64_t display_id, display::HDCPState state, bool* out_status);

 private:
  NativeDisplayDelegate* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeDisplayDelegateAsyncWaiter);
};

class  NativeDisplayObserverProxy
    : public NativeDisplayObserver {
 public:
  explicit NativeDisplayObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnConfigurationChanged() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NativeDisplayDelegateProxy
    : public NativeDisplayDelegate {
 public:
  explicit NativeDisplayDelegateProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Initialize(NativeDisplayObserverPtr observer, std::vector<std::unique_ptr<display::DisplaySnapshot>>* out_snapshots) final;
  void Initialize(NativeDisplayObserverPtr observer, InitializeCallback callback) final;
  void TakeDisplayControl(TakeDisplayControlCallback callback) final;
  void RelinquishDisplayControl(RelinquishDisplayControlCallback callback) final;
  void GetDisplays(GetDisplaysCallback callback) final;
  void Configure(int64_t display_id, base::Optional<std::unique_ptr<display::DisplayMode>> mode, const gfx::Point& origin, ConfigureCallback callback) final;
  void GetHDCPState(int64_t display_id, GetHDCPStateCallback callback) final;
  void SetHDCPState(int64_t display_id, display::HDCPState state, SetHDCPStateCallback callback) final;
  void SetColorCorrection(int64_t display_id, const std::vector<display::GammaRampRGBEntry>& degamma_lut, const std::vector<display::GammaRampRGBEntry>& gamma_lut, const std::vector<float>& correction_matrix) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NativeDisplayObserverStubDispatch {
 public:
  static bool Accept(NativeDisplayObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NativeDisplayObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NativeDisplayObserver>>
class NativeDisplayObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NativeDisplayObserverStub() {}
  ~NativeDisplayObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeDisplayObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeDisplayObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NativeDisplayDelegateStubDispatch {
 public:
  static bool Accept(NativeDisplayDelegate* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NativeDisplayDelegate* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NativeDisplayDelegate>>
class NativeDisplayDelegateStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NativeDisplayDelegateStub() {}
  ~NativeDisplayDelegateStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeDisplayDelegateStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeDisplayDelegateStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NativeDisplayObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NativeDisplayDelegateRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NativeDisplayDelegateResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace display

namespace mojo {

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_H_