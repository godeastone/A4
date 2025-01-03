// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_H_
#define CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_H_

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
#include "content/common/storage_partition_service.mojom-shared.h"
#include "content/common/leveldb_wrapper.mojom.h"
#include "url/mojom/origin.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class SessionStorageNamespace;
using SessionStorageNamespacePtr = mojo::InterfacePtr<SessionStorageNamespace>;
using SessionStorageNamespacePtrInfo = mojo::InterfacePtrInfo<SessionStorageNamespace>;
using ThreadSafeSessionStorageNamespacePtr =
    mojo::ThreadSafeInterfacePtr<SessionStorageNamespace>;
using SessionStorageNamespaceRequest = mojo::InterfaceRequest<SessionStorageNamespace>;
using SessionStorageNamespaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<SessionStorageNamespace>;
using ThreadSafeSessionStorageNamespaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SessionStorageNamespace>;
using SessionStorageNamespaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SessionStorageNamespace>;
using SessionStorageNamespaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SessionStorageNamespace>;

class StoragePartitionService;
using StoragePartitionServicePtr = mojo::InterfacePtr<StoragePartitionService>;
using StoragePartitionServicePtrInfo = mojo::InterfacePtrInfo<StoragePartitionService>;
using ThreadSafeStoragePartitionServicePtr =
    mojo::ThreadSafeInterfacePtr<StoragePartitionService>;
using StoragePartitionServiceRequest = mojo::InterfaceRequest<StoragePartitionService>;
using StoragePartitionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<StoragePartitionService>;
using ThreadSafeStoragePartitionServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<StoragePartitionService>;
using StoragePartitionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StoragePartitionService>;
using StoragePartitionServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StoragePartitionService>;


class SessionStorageNamespaceProxy;

template <typename ImplRefTraits>
class SessionStorageNamespaceStub;

class SessionStorageNamespaceRequestValidator;

class CONTENT_EXPORT SessionStorageNamespace
    : public SessionStorageNamespaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SessionStorageNamespaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = SessionStorageNamespaceStub<ImplRefTraits>;

  using RequestValidator_ = SessionStorageNamespaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOpenAreaMinVersion = 0,
    kCloneMinVersion = 0,
  };
  virtual ~SessionStorageNamespace() {}

  virtual void OpenArea(const url::Origin& origin, ::content::mojom::LevelDBWrapperAssociatedRequest database) = 0;

  virtual void Clone(const std::string& clone_to_namespace) = 0;
};
class CONTENT_EXPORT SessionStorageNamespaceInterceptorForTesting : public SessionStorageNamespace {
  virtual SessionStorageNamespace* GetForwardingInterface() = 0;
  void OpenArea(const url::Origin& origin, ::content::mojom::LevelDBWrapperAssociatedRequest database) override;
  void Clone(const std::string& clone_to_namespace) override;
};
class CONTENT_EXPORT SessionStorageNamespaceAsyncWaiter {
 public:
  explicit SessionStorageNamespaceAsyncWaiter(SessionStorageNamespace* proxy);
  ~SessionStorageNamespaceAsyncWaiter();

 private:
  SessionStorageNamespace* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SessionStorageNamespaceAsyncWaiter);
};

class StoragePartitionServiceProxy;

template <typename ImplRefTraits>
class StoragePartitionServiceStub;

class StoragePartitionServiceRequestValidator;

class CONTENT_EXPORT StoragePartitionService
    : public StoragePartitionServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = StoragePartitionServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = StoragePartitionServiceStub<ImplRefTraits>;

  using RequestValidator_ = StoragePartitionServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOpenLocalStorageMinVersion = 0,
    kOpenSessionStorageMinVersion = 0,
  };
  virtual ~StoragePartitionService() {}

  virtual void OpenLocalStorage(const url::Origin& origin, ::content::mojom::LevelDBWrapperRequest database) = 0;

  virtual void OpenSessionStorage(const std::string& namespace_id, SessionStorageNamespaceRequest session_namespace) = 0;
};
class CONTENT_EXPORT StoragePartitionServiceInterceptorForTesting : public StoragePartitionService {
  virtual StoragePartitionService* GetForwardingInterface() = 0;
  void OpenLocalStorage(const url::Origin& origin, ::content::mojom::LevelDBWrapperRequest database) override;
  void OpenSessionStorage(const std::string& namespace_id, SessionStorageNamespaceRequest session_namespace) override;
};
class CONTENT_EXPORT StoragePartitionServiceAsyncWaiter {
 public:
  explicit StoragePartitionServiceAsyncWaiter(StoragePartitionService* proxy);
  ~StoragePartitionServiceAsyncWaiter();

 private:
  StoragePartitionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StoragePartitionServiceAsyncWaiter);
};

class CONTENT_EXPORT SessionStorageNamespaceProxy
    : public SessionStorageNamespace {
 public:
  explicit SessionStorageNamespaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenArea(const url::Origin& origin, ::content::mojom::LevelDBWrapperAssociatedRequest database) final;
  void Clone(const std::string& clone_to_namespace) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT StoragePartitionServiceProxy
    : public StoragePartitionService {
 public:
  explicit StoragePartitionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenLocalStorage(const url::Origin& origin, ::content::mojom::LevelDBWrapperRequest database) final;
  void OpenSessionStorage(const std::string& namespace_id, SessionStorageNamespaceRequest session_namespace) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SessionStorageNamespaceStubDispatch {
 public:
  static bool Accept(SessionStorageNamespace* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SessionStorageNamespace* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SessionStorageNamespace>>
class SessionStorageNamespaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SessionStorageNamespaceStub() {}
  ~SessionStorageNamespaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SessionStorageNamespaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SessionStorageNamespaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT StoragePartitionServiceStubDispatch {
 public:
  static bool Accept(StoragePartitionService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StoragePartitionService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StoragePartitionService>>
class StoragePartitionServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StoragePartitionServiceStub() {}
  ~StoragePartitionServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StoragePartitionServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StoragePartitionServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SessionStorageNamespaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT StoragePartitionServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_H_