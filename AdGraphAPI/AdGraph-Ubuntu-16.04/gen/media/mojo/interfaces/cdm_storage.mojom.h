// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_H_

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
#include "media/mojo/interfaces/cdm_storage.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom.h"
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


namespace media {
namespace mojom {
class CdmStorage;
using CdmStoragePtr = mojo::InterfacePtr<CdmStorage>;
using CdmStoragePtrInfo = mojo::InterfacePtrInfo<CdmStorage>;
using ThreadSafeCdmStoragePtr =
    mojo::ThreadSafeInterfacePtr<CdmStorage>;
using CdmStorageRequest = mojo::InterfaceRequest<CdmStorage>;
using CdmStorageAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmStorage>;
using ThreadSafeCdmStorageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmStorage>;
using CdmStorageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmStorage>;
using CdmStorageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmStorage>;

class CdmFile;
using CdmFilePtr = mojo::InterfacePtr<CdmFile>;
using CdmFilePtrInfo = mojo::InterfacePtrInfo<CdmFile>;
using ThreadSafeCdmFilePtr =
    mojo::ThreadSafeInterfacePtr<CdmFile>;
using CdmFileRequest = mojo::InterfaceRequest<CdmFile>;
using CdmFileAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmFile>;
using ThreadSafeCdmFileAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmFile>;
using CdmFileAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmFile>;
using CdmFileAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmFile>;


class CdmStorageProxy;

template <typename ImplRefTraits>
class CdmStorageStub;

class CdmStorageRequestValidator;
class CdmStorageResponseValidator;

class  CdmStorage
    : public CdmStorageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CdmStorageProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmStorageStub<ImplRefTraits>;

  using RequestValidator_ = CdmStorageRequestValidator;
  using ResponseValidator_ = CdmStorageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
  };
  using Status = CdmStorage_Status;
  virtual ~CdmStorage() {}


  using OpenCallback = base::OnceCallback<void(CdmStorage::Status, base::File, CdmFileAssociatedPtrInfo)>;
  virtual void Open(const std::string& file_name, OpenCallback callback) = 0;
};
class  CdmStorageInterceptorForTesting : public CdmStorage {
  virtual CdmStorage* GetForwardingInterface() = 0;
  void Open(const std::string& file_name, OpenCallback callback) override;
};
class  CdmStorageAsyncWaiter {
 public:
  explicit CdmStorageAsyncWaiter(CdmStorage* proxy);
  ~CdmStorageAsyncWaiter();
  void Open(
      const std::string& file_name, CdmStorage::Status* out_status, base::File* out_file_for_reading, CdmFileAssociatedPtrInfo* out_cdm_file);

 private:
  CdmStorage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmStorageAsyncWaiter);
};

class CdmFileProxy;

template <typename ImplRefTraits>
class CdmFileStub;

class CdmFileRequestValidator;
class CdmFileResponseValidator;

class  CdmFile
    : public CdmFileInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CdmFileProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmFileStub<ImplRefTraits>;

  using RequestValidator_ = CdmFileRequestValidator;
  using ResponseValidator_ = CdmFileResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenFileForWritingMinVersion = 0,
    kCommitWriteMinVersion = 0,
  };
  virtual ~CdmFile() {}


  using OpenFileForWritingCallback = base::OnceCallback<void(base::File)>;
  virtual void OpenFileForWriting(OpenFileForWritingCallback callback) = 0;


  using CommitWriteCallback = base::OnceCallback<void(base::File)>;
  virtual void CommitWrite(CommitWriteCallback callback) = 0;
};
class  CdmFileInterceptorForTesting : public CdmFile {
  virtual CdmFile* GetForwardingInterface() = 0;
  void OpenFileForWriting(OpenFileForWritingCallback callback) override;
  void CommitWrite(CommitWriteCallback callback) override;
};
class  CdmFileAsyncWaiter {
 public:
  explicit CdmFileAsyncWaiter(CdmFile* proxy);
  ~CdmFileAsyncWaiter();
  void OpenFileForWriting(
      base::File* out_file_for_writing);
  void CommitWrite(
      base::File* out_updated_file_for_reading);

 private:
  CdmFile* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmFileAsyncWaiter);
};

class  CdmStorageProxy
    : public CdmStorage {
 public:
  explicit CdmStorageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(const std::string& file_name, OpenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CdmFileProxy
    : public CdmFile {
 public:
  explicit CdmFileProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenFileForWriting(OpenFileForWritingCallback callback) final;
  void CommitWrite(CommitWriteCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CdmStorageStubDispatch {
 public:
  static bool Accept(CdmStorage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmStorage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmStorage>>
class CdmStorageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmStorageStub() {}
  ~CdmStorageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmStorageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmStorageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmFileStubDispatch {
 public:
  static bool Accept(CdmFile* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmFile* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmFile>>
class CdmFileStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmFileStub() {}
  ~CdmFileStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFileStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFileStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmStorageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmFileRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmStorageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmFileResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_H_