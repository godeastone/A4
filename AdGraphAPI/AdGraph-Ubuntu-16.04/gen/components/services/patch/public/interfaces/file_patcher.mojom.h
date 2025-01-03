// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_H_
#define COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_H_

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
#include "components/services/patch/public/interfaces/file_patcher.mojom-shared.h"
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


namespace patch {
namespace mojom {
class FilePatcher;
using FilePatcherPtr = mojo::InterfacePtr<FilePatcher>;
using FilePatcherPtrInfo = mojo::InterfacePtrInfo<FilePatcher>;
using ThreadSafeFilePatcherPtr =
    mojo::ThreadSafeInterfacePtr<FilePatcher>;
using FilePatcherRequest = mojo::InterfaceRequest<FilePatcher>;
using FilePatcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<FilePatcher>;
using ThreadSafeFilePatcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FilePatcher>;
using FilePatcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FilePatcher>;
using FilePatcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FilePatcher>;


class FilePatcherProxy;

template <typename ImplRefTraits>
class FilePatcherStub;

class FilePatcherRequestValidator;
class FilePatcherResponseValidator;

class  FilePatcher
    : public FilePatcherInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FilePatcherProxy;

  template <typename ImplRefTraits>
  using Stub_ = FilePatcherStub<ImplRefTraits>;

  using RequestValidator_ = FilePatcherRequestValidator;
  using ResponseValidator_ = FilePatcherResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPatchFileBsdiffMinVersion = 0,
    kPatchFileCourgetteMinVersion = 0,
  };
  virtual ~FilePatcher() {}


  using PatchFileBsdiffCallback = base::OnceCallback<void(int32_t)>;
  virtual void PatchFileBsdiff(base::File input_file, base::File patch_file, base::File output_file, PatchFileBsdiffCallback callback) = 0;


  using PatchFileCourgetteCallback = base::OnceCallback<void(int32_t)>;
  virtual void PatchFileCourgette(base::File input_file, base::File patch_file, base::File output_file, PatchFileCourgetteCallback callback) = 0;
};
class  FilePatcherInterceptorForTesting : public FilePatcher {
  virtual FilePatcher* GetForwardingInterface() = 0;
  void PatchFileBsdiff(base::File input_file, base::File patch_file, base::File output_file, PatchFileBsdiffCallback callback) override;
  void PatchFileCourgette(base::File input_file, base::File patch_file, base::File output_file, PatchFileCourgetteCallback callback) override;
};
class  FilePatcherAsyncWaiter {
 public:
  explicit FilePatcherAsyncWaiter(FilePatcher* proxy);
  ~FilePatcherAsyncWaiter();
  void PatchFileBsdiff(
      base::File input_file, base::File patch_file, base::File output_file, int32_t* out_result);
  void PatchFileCourgette(
      base::File input_file, base::File patch_file, base::File output_file, int32_t* out_result);

 private:
  FilePatcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FilePatcherAsyncWaiter);
};

class  FilePatcherProxy
    : public FilePatcher {
 public:
  explicit FilePatcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void PatchFileBsdiff(base::File input_file, base::File patch_file, base::File output_file, PatchFileBsdiffCallback callback) final;
  void PatchFileCourgette(base::File input_file, base::File patch_file, base::File output_file, PatchFileCourgetteCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FilePatcherStubDispatch {
 public:
  static bool Accept(FilePatcher* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FilePatcher* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FilePatcher>>
class FilePatcherStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FilePatcherStub() {}
  ~FilePatcherStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FilePatcherStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FilePatcherStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FilePatcherRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FilePatcherResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace patch

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_H_