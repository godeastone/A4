// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_H_

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
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "services/network/public/mojom/data_pipe_getter.mojom.h"
#include "services/network/public/mojom/http_request_headers.mojom.h"
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
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class BlobReaderClient;
using BlobReaderClientPtr = mojo::InterfacePtr<BlobReaderClient>;
using BlobReaderClientPtrInfo = mojo::InterfacePtrInfo<BlobReaderClient>;
using ThreadSafeBlobReaderClientPtr =
    mojo::ThreadSafeInterfacePtr<BlobReaderClient>;
using BlobReaderClientRequest = mojo::InterfaceRequest<BlobReaderClient>;
using BlobReaderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BlobReaderClient>;
using ThreadSafeBlobReaderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BlobReaderClient>;
using BlobReaderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BlobReaderClient>;
using BlobReaderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BlobReaderClient>;

class Blob;
using BlobPtr = mojo::InterfacePtr<Blob>;
using BlobPtrInfo = mojo::InterfacePtrInfo<Blob>;
using ThreadSafeBlobPtr =
    mojo::ThreadSafeInterfacePtr<Blob>;
using BlobRequest = mojo::InterfaceRequest<Blob>;
using BlobAssociatedPtr =
    mojo::AssociatedInterfacePtr<Blob>;
using ThreadSafeBlobAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Blob>;
using BlobAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Blob>;
using BlobAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Blob>;


class BlobReaderClientProxy;

template <typename ImplRefTraits>
class BlobReaderClientStub;

class BlobReaderClientRequestValidator;

class BLINK_COMMON_EXPORT BlobReaderClient
    : public BlobReaderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BlobReaderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobReaderClientStub<ImplRefTraits>;

  using RequestValidator_ = BlobReaderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCalculatedSizeMinVersion = 0,
    kOnCompleteMinVersion = 0,
  };
  virtual ~BlobReaderClient() {}

  virtual void OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) = 0;

  virtual void OnComplete(int32_t status, uint64_t data_length) = 0;
};
class BLINK_COMMON_EXPORT BlobReaderClientInterceptorForTesting : public BlobReaderClient {
  virtual BlobReaderClient* GetForwardingInterface() = 0;
  void OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) override;
  void OnComplete(int32_t status, uint64_t data_length) override;
};
class BLINK_COMMON_EXPORT BlobReaderClientAsyncWaiter {
 public:
  explicit BlobReaderClientAsyncWaiter(BlobReaderClient* proxy);
  ~BlobReaderClientAsyncWaiter();

 private:
  BlobReaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobReaderClientAsyncWaiter);
};

class BlobProxy;

template <typename ImplRefTraits>
class BlobStub;

class BlobRequestValidator;
class BlobResponseValidator;

class BLINK_COMMON_EXPORT Blob
    : public BlobInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BlobProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobStub<ImplRefTraits>;

  using RequestValidator_ = BlobRequestValidator;
  using ResponseValidator_ = BlobResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCloneMinVersion = 0,
    kAsDataPipeGetterMinVersion = 0,
    kReadAllMinVersion = 0,
    kReadRangeMinVersion = 0,
    kReadSideDataMinVersion = 0,
    kGetInternalUUIDMinVersion = 0,
  };
  virtual ~Blob() {}

  virtual void Clone(BlobRequest blob) = 0;

  virtual void AsDataPipeGetter(::network::mojom::DataPipeGetterRequest data_pipe_getter) = 0;

  virtual void ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) = 0;

  virtual void ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) = 0;


  using ReadSideDataCallback = base::OnceCallback<void(const base::Optional<std::vector<uint8_t>>&)>;
  virtual void ReadSideData(ReadSideDataCallback callback) = 0;


  using GetInternalUUIDCallback = base::OnceCallback<void(const std::string&)>;
  virtual void GetInternalUUID(GetInternalUUIDCallback callback) = 0;
};
class BLINK_COMMON_EXPORT BlobInterceptorForTesting : public Blob {
  virtual Blob* GetForwardingInterface() = 0;
  void Clone(BlobRequest blob) override;
  void AsDataPipeGetter(::network::mojom::DataPipeGetterRequest data_pipe_getter) override;
  void ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) override;
  void ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) override;
  void ReadSideData(ReadSideDataCallback callback) override;
  void GetInternalUUID(GetInternalUUIDCallback callback) override;
};
class BLINK_COMMON_EXPORT BlobAsyncWaiter {
 public:
  explicit BlobAsyncWaiter(Blob* proxy);
  ~BlobAsyncWaiter();
  void ReadSideData(
      base::Optional<std::vector<uint8_t>>* out_data);
  void GetInternalUUID(
      std::string* out_uuid);

 private:
  Blob* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobAsyncWaiter);
};

class BLINK_COMMON_EXPORT BlobReaderClientProxy
    : public BlobReaderClient {
 public:
  explicit BlobReaderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) final;
  void OnComplete(int32_t status, uint64_t data_length) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT BlobProxy
    : public Blob {
 public:
  explicit BlobProxy(mojo::MessageReceiverWithResponder* receiver);
  void Clone(BlobRequest blob) final;
  void AsDataPipeGetter(::network::mojom::DataPipeGetterRequest data_pipe_getter) final;
  void ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) final;
  void ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) final;
  void ReadSideData(ReadSideDataCallback callback) final;
  void GetInternalUUID(GetInternalUUIDCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT BlobReaderClientStubDispatch {
 public:
  static bool Accept(BlobReaderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BlobReaderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BlobReaderClient>>
class BlobReaderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobReaderClientStub() {}
  ~BlobReaderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobReaderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobReaderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT BlobStubDispatch {
 public:
  static bool Accept(Blob* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Blob* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Blob>>
class BlobStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobStub() {}
  ~BlobStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT BlobReaderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_H_