// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_H_
#define COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_H_

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
#include "components/services/unzip/public/interfaces/unzipper.mojom-shared.h"
#include "components/services/filesystem/public/interfaces/directory.mojom.h"
#include "mojo/public/mojom/base/file.mojom.h"
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


namespace unzip {
namespace mojom {
class UnzipFilter;
using UnzipFilterPtr = mojo::InterfacePtr<UnzipFilter>;
using UnzipFilterPtrInfo = mojo::InterfacePtrInfo<UnzipFilter>;
using ThreadSafeUnzipFilterPtr =
    mojo::ThreadSafeInterfacePtr<UnzipFilter>;
using UnzipFilterRequest = mojo::InterfaceRequest<UnzipFilter>;
using UnzipFilterAssociatedPtr =
    mojo::AssociatedInterfacePtr<UnzipFilter>;
using ThreadSafeUnzipFilterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UnzipFilter>;
using UnzipFilterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UnzipFilter>;
using UnzipFilterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UnzipFilter>;

class Unzipper;
using UnzipperPtr = mojo::InterfacePtr<Unzipper>;
using UnzipperPtrInfo = mojo::InterfacePtrInfo<Unzipper>;
using ThreadSafeUnzipperPtr =
    mojo::ThreadSafeInterfacePtr<Unzipper>;
using UnzipperRequest = mojo::InterfaceRequest<Unzipper>;
using UnzipperAssociatedPtr =
    mojo::AssociatedInterfacePtr<Unzipper>;
using ThreadSafeUnzipperAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Unzipper>;
using UnzipperAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Unzipper>;
using UnzipperAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Unzipper>;


class UnzipFilterProxy;

template <typename ImplRefTraits>
class UnzipFilterStub;

class UnzipFilterRequestValidator;
class UnzipFilterResponseValidator;

class  UnzipFilter
    : public UnzipFilterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = UnzipFilterProxy;

  template <typename ImplRefTraits>
  using Stub_ = UnzipFilterStub<ImplRefTraits>;

  using RequestValidator_ = UnzipFilterRequestValidator;
  using ResponseValidator_ = UnzipFilterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kShouldUnzipFileMinVersion = 0,
  };
  virtual ~UnzipFilter() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ShouldUnzipFile(const base::FilePath& path, bool* out_result);

  using ShouldUnzipFileCallback = base::OnceCallback<void(bool)>;
  virtual void ShouldUnzipFile(const base::FilePath& path, ShouldUnzipFileCallback callback) = 0;
};
class  UnzipFilterInterceptorForTesting : public UnzipFilter {
  virtual UnzipFilter* GetForwardingInterface() = 0;
  void ShouldUnzipFile(const base::FilePath& path, ShouldUnzipFileCallback callback) override;
};
class  UnzipFilterAsyncWaiter {
 public:
  explicit UnzipFilterAsyncWaiter(UnzipFilter* proxy);
  ~UnzipFilterAsyncWaiter();
  void ShouldUnzipFile(
      const base::FilePath& path, bool* out_result);

 private:
  UnzipFilter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UnzipFilterAsyncWaiter);
};

class UnzipperProxy;

template <typename ImplRefTraits>
class UnzipperStub;

class UnzipperRequestValidator;
class UnzipperResponseValidator;

class  Unzipper
    : public UnzipperInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UnzipperProxy;

  template <typename ImplRefTraits>
  using Stub_ = UnzipperStub<ImplRefTraits>;

  using RequestValidator_ = UnzipperRequestValidator;
  using ResponseValidator_ = UnzipperResponseValidator;
  enum MethodMinVersions : uint32_t {
    kUnzipMinVersion = 0,
    kUnzipWithFilterMinVersion = 0,
  };
  virtual ~Unzipper() {}


  using UnzipCallback = base::OnceCallback<void(bool)>;
  virtual void Unzip(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipCallback callback) = 0;


  using UnzipWithFilterCallback = base::OnceCallback<void(bool)>;
  virtual void UnzipWithFilter(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipFilterPtr filter, UnzipWithFilterCallback callback) = 0;
};
class  UnzipperInterceptorForTesting : public Unzipper {
  virtual Unzipper* GetForwardingInterface() = 0;
  void Unzip(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipCallback callback) override;
  void UnzipWithFilter(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipFilterPtr filter, UnzipWithFilterCallback callback) override;
};
class  UnzipperAsyncWaiter {
 public:
  explicit UnzipperAsyncWaiter(Unzipper* proxy);
  ~UnzipperAsyncWaiter();
  void Unzip(
      base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, bool* out_result);
  void UnzipWithFilter(
      base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipFilterPtr filter, bool* out_result);

 private:
  Unzipper* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UnzipperAsyncWaiter);
};

class  UnzipFilterProxy
    : public UnzipFilter {
 public:
  explicit UnzipFilterProxy(mojo::MessageReceiverWithResponder* receiver);
  bool ShouldUnzipFile(const base::FilePath& path, bool* out_result) final;
  void ShouldUnzipFile(const base::FilePath& path, ShouldUnzipFileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UnzipperProxy
    : public Unzipper {
 public:
  explicit UnzipperProxy(mojo::MessageReceiverWithResponder* receiver);
  void Unzip(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipCallback callback) final;
  void UnzipWithFilter(base::File zip_file, ::filesystem::mojom::DirectoryPtr output_dir, UnzipFilterPtr filter, UnzipWithFilterCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UnzipFilterStubDispatch {
 public:
  static bool Accept(UnzipFilter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UnzipFilter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UnzipFilter>>
class UnzipFilterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UnzipFilterStub() {}
  ~UnzipFilterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnzipFilterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnzipFilterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UnzipperStubDispatch {
 public:
  static bool Accept(Unzipper* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Unzipper* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Unzipper>>
class UnzipperStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UnzipperStub() {}
  ~UnzipperStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnzipperStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnzipperStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UnzipFilterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UnzipperRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UnzipFilterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UnzipperResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace unzip

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_H_