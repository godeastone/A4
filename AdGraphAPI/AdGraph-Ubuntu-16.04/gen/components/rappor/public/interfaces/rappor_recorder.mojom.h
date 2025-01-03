// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_H_
#define COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_H_

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
#include "components/rappor/public/interfaces/rappor_recorder.mojom-shared.h"
#include "url/mojom/url.mojom.h"
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


namespace rappor {
namespace mojom {
class RapporRecorder;
using RapporRecorderPtr = mojo::InterfacePtr<RapporRecorder>;
using RapporRecorderPtrInfo = mojo::InterfacePtrInfo<RapporRecorder>;
using ThreadSafeRapporRecorderPtr =
    mojo::ThreadSafeInterfacePtr<RapporRecorder>;
using RapporRecorderRequest = mojo::InterfaceRequest<RapporRecorder>;
using RapporRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<RapporRecorder>;
using ThreadSafeRapporRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RapporRecorder>;
using RapporRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RapporRecorder>;
using RapporRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RapporRecorder>;


class RapporRecorderProxy;

template <typename ImplRefTraits>
class RapporRecorderStub;

class RapporRecorderRequestValidator;

class  RapporRecorder
    : public RapporRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RapporRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = RapporRecorderStub<ImplRefTraits>;

  using RequestValidator_ = RapporRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordRapporMinVersion = 0,
    kRecordRapporURLMinVersion = 0,
  };
  virtual ~RapporRecorder() {}

  virtual void RecordRappor(const std::string& metric, const std::string& sample) = 0;

  virtual void RecordRapporURL(const std::string& metric, const GURL& url) = 0;
};
class  RapporRecorderInterceptorForTesting : public RapporRecorder {
  virtual RapporRecorder* GetForwardingInterface() = 0;
  void RecordRappor(const std::string& metric, const std::string& sample) override;
  void RecordRapporURL(const std::string& metric, const GURL& url) override;
};
class  RapporRecorderAsyncWaiter {
 public:
  explicit RapporRecorderAsyncWaiter(RapporRecorder* proxy);
  ~RapporRecorderAsyncWaiter();

 private:
  RapporRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RapporRecorderAsyncWaiter);
};

class  RapporRecorderProxy
    : public RapporRecorder {
 public:
  explicit RapporRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RecordRappor(const std::string& metric, const std::string& sample) final;
  void RecordRapporURL(const std::string& metric, const GURL& url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RapporRecorderStubDispatch {
 public:
  static bool Accept(RapporRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RapporRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RapporRecorder>>
class RapporRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RapporRecorderStub() {}
  ~RapporRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RapporRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RapporRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RapporRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace rappor

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_H_