// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_H_
#define CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_H_

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
#include "chrome/common/extensions/mojom/inline_install.mojom-shared.h"
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
#include "chrome/common/extensions/api/webstore/webstore_api_constants.h"
#include "chrome/common/extensions/webstore_install_result.h"


namespace extensions {
namespace mojom {
class InlineInstallProgressListener;
using InlineInstallProgressListenerPtr = mojo::InterfacePtr<InlineInstallProgressListener>;
using InlineInstallProgressListenerPtrInfo = mojo::InterfacePtrInfo<InlineInstallProgressListener>;
using ThreadSafeInlineInstallProgressListenerPtr =
    mojo::ThreadSafeInterfacePtr<InlineInstallProgressListener>;
using InlineInstallProgressListenerRequest = mojo::InterfaceRequest<InlineInstallProgressListener>;
using InlineInstallProgressListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<InlineInstallProgressListener>;
using ThreadSafeInlineInstallProgressListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InlineInstallProgressListener>;
using InlineInstallProgressListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InlineInstallProgressListener>;
using InlineInstallProgressListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InlineInstallProgressListener>;

class InlineInstaller;
using InlineInstallerPtr = mojo::InterfacePtr<InlineInstaller>;
using InlineInstallerPtrInfo = mojo::InterfacePtrInfo<InlineInstaller>;
using ThreadSafeInlineInstallerPtr =
    mojo::ThreadSafeInterfacePtr<InlineInstaller>;
using InlineInstallerRequest = mojo::InterfaceRequest<InlineInstaller>;
using InlineInstallerAssociatedPtr =
    mojo::AssociatedInterfacePtr<InlineInstaller>;
using ThreadSafeInlineInstallerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InlineInstaller>;
using InlineInstallerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InlineInstaller>;
using InlineInstallerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InlineInstaller>;


class InlineInstallProgressListenerProxy;

template <typename ImplRefTraits>
class InlineInstallProgressListenerStub;

class InlineInstallProgressListenerRequestValidator;

class  InlineInstallProgressListener
    : public InlineInstallProgressListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InlineInstallProgressListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = InlineInstallProgressListenerStub<ImplRefTraits>;

  using RequestValidator_ = InlineInstallProgressListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInlineInstallStageChangedMinVersion = 0,
    kInlineInstallDownloadProgressMinVersion = 0,
  };
  virtual ~InlineInstallProgressListener() {}

  virtual void InlineInstallStageChanged(::extensions::api::webstore::InstallStage stage) = 0;

  virtual void InlineInstallDownloadProgress(int32_t percent_downloaded) = 0;
};
class  InlineInstallProgressListenerInterceptorForTesting : public InlineInstallProgressListener {
  virtual InlineInstallProgressListener* GetForwardingInterface() = 0;
  void InlineInstallStageChanged(::extensions::api::webstore::InstallStage stage) override;
  void InlineInstallDownloadProgress(int32_t percent_downloaded) override;
};
class  InlineInstallProgressListenerAsyncWaiter {
 public:
  explicit InlineInstallProgressListenerAsyncWaiter(InlineInstallProgressListener* proxy);
  ~InlineInstallProgressListenerAsyncWaiter();

 private:
  InlineInstallProgressListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InlineInstallProgressListenerAsyncWaiter);
};

class InlineInstallerProxy;

template <typename ImplRefTraits>
class InlineInstallerStub;

class InlineInstallerRequestValidator;
class InlineInstallerResponseValidator;

class  InlineInstaller
    : public InlineInstallerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InlineInstallerProxy;

  template <typename ImplRefTraits>
  using Stub_ = InlineInstallerStub<ImplRefTraits>;

  using RequestValidator_ = InlineInstallerRequestValidator;
  using ResponseValidator_ = InlineInstallerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDoInlineInstallMinVersion = 0,
  };
  virtual ~InlineInstaller() {}


  using DoInlineInstallCallback = base::OnceCallback<void(bool, const std::string&, ::extensions::webstore_install::Result)>;
  virtual void DoInlineInstall(const std::string& webstore_item_id, int32_t listeners_mask, InlineInstallProgressListenerPtr install_progress_listener, DoInlineInstallCallback callback) = 0;
};
class  InlineInstallerInterceptorForTesting : public InlineInstaller {
  virtual InlineInstaller* GetForwardingInterface() = 0;
  void DoInlineInstall(const std::string& webstore_item_id, int32_t listeners_mask, InlineInstallProgressListenerPtr install_progress_listener, DoInlineInstallCallback callback) override;
};
class  InlineInstallerAsyncWaiter {
 public:
  explicit InlineInstallerAsyncWaiter(InlineInstaller* proxy);
  ~InlineInstallerAsyncWaiter();
  void DoInlineInstall(
      const std::string& webstore_item_id, int32_t listeners_mask, InlineInstallProgressListenerPtr install_progress_listener, bool* out_success, std::string* out_error, ::extensions::webstore_install::Result* out_result);

 private:
  InlineInstaller* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InlineInstallerAsyncWaiter);
};

class  InlineInstallProgressListenerProxy
    : public InlineInstallProgressListener {
 public:
  explicit InlineInstallProgressListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void InlineInstallStageChanged(::extensions::api::webstore::InstallStage stage) final;
  void InlineInstallDownloadProgress(int32_t percent_downloaded) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  InlineInstallerProxy
    : public InlineInstaller {
 public:
  explicit InlineInstallerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DoInlineInstall(const std::string& webstore_item_id, int32_t listeners_mask, InlineInstallProgressListenerPtr install_progress_listener, DoInlineInstallCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InlineInstallProgressListenerStubDispatch {
 public:
  static bool Accept(InlineInstallProgressListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InlineInstallProgressListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InlineInstallProgressListener>>
class InlineInstallProgressListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InlineInstallProgressListenerStub() {}
  ~InlineInstallProgressListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InlineInstallProgressListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InlineInstallProgressListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InlineInstallerStubDispatch {
 public:
  static bool Accept(InlineInstaller* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InlineInstaller* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InlineInstaller>>
class InlineInstallerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InlineInstallerStub() {}
  ~InlineInstallerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InlineInstallerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InlineInstallerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InlineInstallProgressListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InlineInstallerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InlineInstallerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace extensions

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_H_