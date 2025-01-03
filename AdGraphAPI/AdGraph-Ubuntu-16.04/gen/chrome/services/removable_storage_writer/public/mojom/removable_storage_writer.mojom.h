// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_H_
#define CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_H_

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
#include "chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
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
class RemovableStorageWriter;
using RemovableStorageWriterPtr = mojo::InterfacePtr<RemovableStorageWriter>;
using RemovableStorageWriterPtrInfo = mojo::InterfacePtrInfo<RemovableStorageWriter>;
using ThreadSafeRemovableStorageWriterPtr =
    mojo::ThreadSafeInterfacePtr<RemovableStorageWriter>;
using RemovableStorageWriterRequest = mojo::InterfaceRequest<RemovableStorageWriter>;
using RemovableStorageWriterAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemovableStorageWriter>;
using ThreadSafeRemovableStorageWriterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemovableStorageWriter>;
using RemovableStorageWriterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemovableStorageWriter>;
using RemovableStorageWriterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemovableStorageWriter>;

class RemovableStorageWriterClient;
using RemovableStorageWriterClientPtr = mojo::InterfacePtr<RemovableStorageWriterClient>;
using RemovableStorageWriterClientPtrInfo = mojo::InterfacePtrInfo<RemovableStorageWriterClient>;
using ThreadSafeRemovableStorageWriterClientPtr =
    mojo::ThreadSafeInterfacePtr<RemovableStorageWriterClient>;
using RemovableStorageWriterClientRequest = mojo::InterfaceRequest<RemovableStorageWriterClient>;
using RemovableStorageWriterClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemovableStorageWriterClient>;
using ThreadSafeRemovableStorageWriterClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemovableStorageWriterClient>;
using RemovableStorageWriterClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemovableStorageWriterClient>;
using RemovableStorageWriterClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemovableStorageWriterClient>;


class RemovableStorageWriterProxy;

template <typename ImplRefTraits>
class RemovableStorageWriterStub;

class RemovableStorageWriterRequestValidator;

class  RemovableStorageWriter
    : public RemovableStorageWriterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RemovableStorageWriterProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemovableStorageWriterStub<ImplRefTraits>;

  using RequestValidator_ = RemovableStorageWriterRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kWriteMinVersion = 0,
    kVerifyMinVersion = 0,
  };
  static const char kTestDevice[];
  virtual ~RemovableStorageWriter() {}

  virtual void Write(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) = 0;

  virtual void Verify(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) = 0;
};
class  RemovableStorageWriterInterceptorForTesting : public RemovableStorageWriter {
  virtual RemovableStorageWriter* GetForwardingInterface() = 0;
  void Write(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) override;
  void Verify(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) override;
};
class  RemovableStorageWriterAsyncWaiter {
 public:
  explicit RemovableStorageWriterAsyncWaiter(RemovableStorageWriter* proxy);
  ~RemovableStorageWriterAsyncWaiter();

 private:
  RemovableStorageWriter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemovableStorageWriterAsyncWaiter);
};

class RemovableStorageWriterClientProxy;

template <typename ImplRefTraits>
class RemovableStorageWriterClientStub;

class RemovableStorageWriterClientRequestValidator;

class  RemovableStorageWriterClient
    : public RemovableStorageWriterClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RemovableStorageWriterClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemovableStorageWriterClientStub<ImplRefTraits>;

  using RequestValidator_ = RemovableStorageWriterClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kProgressMinVersion = 0,
    kCompleteMinVersion = 0,
  };
  virtual ~RemovableStorageWriterClient() {}

  virtual void Progress(int64_t progress) = 0;

  virtual void Complete(const base::Optional<std::string>& error) = 0;
};
class  RemovableStorageWriterClientInterceptorForTesting : public RemovableStorageWriterClient {
  virtual RemovableStorageWriterClient* GetForwardingInterface() = 0;
  void Progress(int64_t progress) override;
  void Complete(const base::Optional<std::string>& error) override;
};
class  RemovableStorageWriterClientAsyncWaiter {
 public:
  explicit RemovableStorageWriterClientAsyncWaiter(RemovableStorageWriterClient* proxy);
  ~RemovableStorageWriterClientAsyncWaiter();

 private:
  RemovableStorageWriterClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemovableStorageWriterClientAsyncWaiter);
};

class  RemovableStorageWriterProxy
    : public RemovableStorageWriter {
 public:
  explicit RemovableStorageWriterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Write(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) final;
  void Verify(const base::FilePath& source, const base::FilePath& target, RemovableStorageWriterClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  RemovableStorageWriterClientProxy
    : public RemovableStorageWriterClient {
 public:
  explicit RemovableStorageWriterClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void Progress(int64_t progress) final;
  void Complete(const base::Optional<std::string>& error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RemovableStorageWriterStubDispatch {
 public:
  static bool Accept(RemovableStorageWriter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemovableStorageWriter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemovableStorageWriter>>
class RemovableStorageWriterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemovableStorageWriterStub() {}
  ~RemovableStorageWriterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemovableStorageWriterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemovableStorageWriterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemovableStorageWriterClientStubDispatch {
 public:
  static bool Accept(RemovableStorageWriterClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemovableStorageWriterClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemovableStorageWriterClient>>
class RemovableStorageWriterClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemovableStorageWriterClientStub() {}
  ~RemovableStorageWriterClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemovableStorageWriterClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemovableStorageWriterClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemovableStorageWriterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemovableStorageWriterClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_H_