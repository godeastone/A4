// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_H_
#define CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_H_

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
#include "chrome/services/file_util/public/mojom/safe_archive_analyzer.mojom-shared.h"
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
#include "chrome/common/safe_browsing/zip_analyzer.h"


namespace chrome {
namespace mojom {
class SafeArchiveAnalyzer;
using SafeArchiveAnalyzerPtr = mojo::InterfacePtr<SafeArchiveAnalyzer>;
using SafeArchiveAnalyzerPtrInfo = mojo::InterfacePtrInfo<SafeArchiveAnalyzer>;
using ThreadSafeSafeArchiveAnalyzerPtr =
    mojo::ThreadSafeInterfacePtr<SafeArchiveAnalyzer>;
using SafeArchiveAnalyzerRequest = mojo::InterfaceRequest<SafeArchiveAnalyzer>;
using SafeArchiveAnalyzerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SafeArchiveAnalyzer>;
using ThreadSafeSafeArchiveAnalyzerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SafeArchiveAnalyzer>;
using SafeArchiveAnalyzerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SafeArchiveAnalyzer>;
using SafeArchiveAnalyzerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SafeArchiveAnalyzer>;

using SafeArchiveAnalyzerResults = mojo::native::NativeStruct;
using SafeArchiveAnalyzerResultsPtr = mojo::native::NativeStructPtr;


class SafeArchiveAnalyzerProxy;

template <typename ImplRefTraits>
class SafeArchiveAnalyzerStub;

class SafeArchiveAnalyzerRequestValidator;
class SafeArchiveAnalyzerResponseValidator;

class  SafeArchiveAnalyzer
    : public SafeArchiveAnalyzerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SafeArchiveAnalyzerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SafeArchiveAnalyzerStub<ImplRefTraits>;

  using RequestValidator_ = SafeArchiveAnalyzerRequestValidator;
  using ResponseValidator_ = SafeArchiveAnalyzerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAnalyzeZipFileMinVersion = 0,
    kAnalyzeDmgFileMinVersion = 0,
    kAnalyzeRarFileMinVersion = 0,
  };
  virtual ~SafeArchiveAnalyzer() {}


  using AnalyzeZipFileCallback = base::OnceCallback<void(const safe_browsing::ArchiveAnalyzerResults&)>;
  virtual void AnalyzeZipFile(base::File zip_file, base::File temporary_file, AnalyzeZipFileCallback callback) = 0;


  using AnalyzeDmgFileCallback = base::OnceCallback<void(const safe_browsing::ArchiveAnalyzerResults&)>;
  virtual void AnalyzeDmgFile(base::File dmg_file, AnalyzeDmgFileCallback callback) = 0;


  using AnalyzeRarFileCallback = base::OnceCallback<void(const safe_browsing::ArchiveAnalyzerResults&)>;
  virtual void AnalyzeRarFile(const base::FilePath& rar_file, AnalyzeRarFileCallback callback) = 0;
};
class  SafeArchiveAnalyzerInterceptorForTesting : public SafeArchiveAnalyzer {
  virtual SafeArchiveAnalyzer* GetForwardingInterface() = 0;
  void AnalyzeZipFile(base::File zip_file, base::File temporary_file, AnalyzeZipFileCallback callback) override;
  void AnalyzeDmgFile(base::File dmg_file, AnalyzeDmgFileCallback callback) override;
  void AnalyzeRarFile(const base::FilePath& rar_file, AnalyzeRarFileCallback callback) override;
};
class  SafeArchiveAnalyzerAsyncWaiter {
 public:
  explicit SafeArchiveAnalyzerAsyncWaiter(SafeArchiveAnalyzer* proxy);
  ~SafeArchiveAnalyzerAsyncWaiter();
  void AnalyzeZipFile(
      base::File zip_file, base::File temporary_file, safe_browsing::ArchiveAnalyzerResults* out_results);
  void AnalyzeDmgFile(
      base::File dmg_file, safe_browsing::ArchiveAnalyzerResults* out_results);
  void AnalyzeRarFile(
      const base::FilePath& rar_file, safe_browsing::ArchiveAnalyzerResults* out_results);

 private:
  SafeArchiveAnalyzer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzerAsyncWaiter);
};

class  SafeArchiveAnalyzerProxy
    : public SafeArchiveAnalyzer {
 public:
  explicit SafeArchiveAnalyzerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AnalyzeZipFile(base::File zip_file, base::File temporary_file, AnalyzeZipFileCallback callback) final;
  void AnalyzeDmgFile(base::File dmg_file, AnalyzeDmgFileCallback callback) final;
  void AnalyzeRarFile(const base::FilePath& rar_file, AnalyzeRarFileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SafeArchiveAnalyzerStubDispatch {
 public:
  static bool Accept(SafeArchiveAnalyzer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SafeArchiveAnalyzer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SafeArchiveAnalyzer>>
class SafeArchiveAnalyzerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SafeArchiveAnalyzerStub() {}
  ~SafeArchiveAnalyzerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SafeArchiveAnalyzerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SafeArchiveAnalyzerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SafeArchiveAnalyzerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SafeArchiveAnalyzerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_H_