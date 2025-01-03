// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_H_

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
#include "third_party/blink/public/web/worker_content_settings_proxy.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
namespace blink {
class WorkerContentSettingsProxy;
using WorkerContentSettingsProxyPtr = mojo::InterfacePtr<WorkerContentSettingsProxy>;
using RevocableWorkerContentSettingsProxyPtr = ::blink::RevocableInterfacePtr<WorkerContentSettingsProxy>;
using WorkerContentSettingsProxyPtrInfo = mojo::InterfacePtrInfo<WorkerContentSettingsProxy>;
using ThreadSafeWorkerContentSettingsProxyPtr =
    mojo::ThreadSafeInterfacePtr<WorkerContentSettingsProxy>;
using WorkerContentSettingsProxyRequest = mojo::InterfaceRequest<WorkerContentSettingsProxy>;
using WorkerContentSettingsProxyAssociatedPtr =
    mojo::AssociatedInterfacePtr<WorkerContentSettingsProxy>;
using ThreadSafeWorkerContentSettingsProxyAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WorkerContentSettingsProxy>;
using WorkerContentSettingsProxyAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WorkerContentSettingsProxy>;
using WorkerContentSettingsProxyAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WorkerContentSettingsProxy>;


class WorkerContentSettingsProxyProxy;

template <typename ImplRefTraits>
class WorkerContentSettingsProxyStub;

class WorkerContentSettingsProxyRequestValidator;
class WorkerContentSettingsProxyResponseValidator;

class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxy
    : public WorkerContentSettingsProxyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = WorkerContentSettingsProxyProxy;

  template <typename ImplRefTraits>
  using Stub_ = WorkerContentSettingsProxyStub<ImplRefTraits>;

  using RequestValidator_ = WorkerContentSettingsProxyRequestValidator;
  using ResponseValidator_ = WorkerContentSettingsProxyResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAllowIndexedDBMinVersion = 0,
    kRequestFileSystemAccessSyncMinVersion = 0,
  };
  virtual ~WorkerContentSettingsProxy() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool AllowIndexedDB(const WTF::String& name, bool* out_result);

  using AllowIndexedDBCallback = base::OnceCallback<void(bool)>;
  virtual void AllowIndexedDB(const WTF::String& name, AllowIndexedDBCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool RequestFileSystemAccessSync(bool* out_result);

  using RequestFileSystemAccessSyncCallback = base::OnceCallback<void(bool)>;
  virtual void RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxyInterceptorForTesting : public WorkerContentSettingsProxy {
  virtual WorkerContentSettingsProxy* GetForwardingInterface() = 0;
  void AllowIndexedDB(const WTF::String& name, AllowIndexedDBCallback callback) override;
  void RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) override;
};
class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxyAsyncWaiter {
 public:
  explicit WorkerContentSettingsProxyAsyncWaiter(WorkerContentSettingsProxy* proxy);
  ~WorkerContentSettingsProxyAsyncWaiter();
  void AllowIndexedDB(
      const WTF::String& name, bool* out_result);
  void RequestFileSystemAccessSync(
      bool* out_result);

 private:
  WorkerContentSettingsProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxyAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxyProxy
    : public WorkerContentSettingsProxy {
 public:
  explicit WorkerContentSettingsProxyProxy(mojo::MessageReceiverWithResponder* receiver);
  bool AllowIndexedDB(const WTF::String& name, bool* out_result) final;
  void AllowIndexedDB(const WTF::String& name, AllowIndexedDBCallback callback) final;
  bool RequestFileSystemAccessSync(bool* out_result) final;
  void RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxyStubDispatch {
 public:
  static bool Accept(WorkerContentSettingsProxy* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WorkerContentSettingsProxy* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WorkerContentSettingsProxy>>
class WorkerContentSettingsProxyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WorkerContentSettingsProxyStub() {}
  ~WorkerContentSettingsProxyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WorkerContentSettingsProxyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WorkerContentSettingsProxyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WorkerContentSettingsProxyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_H_