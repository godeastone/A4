// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_H_

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
#include "media/mojo/interfaces/media_log.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom.h"
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
class MediaLog;
using MediaLogPtr = mojo::InterfacePtr<MediaLog>;
using MediaLogPtrInfo = mojo::InterfacePtrInfo<MediaLog>;
using ThreadSafeMediaLogPtr =
    mojo::ThreadSafeInterfacePtr<MediaLog>;
using MediaLogRequest = mojo::InterfaceRequest<MediaLog>;
using MediaLogAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaLog>;
using ThreadSafeMediaLogAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaLog>;
using MediaLogAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaLog>;
using MediaLogAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaLog>;


class MediaLogProxy;

template <typename ImplRefTraits>
class MediaLogStub;

class MediaLogRequestValidator;

class  MediaLog
    : public MediaLogInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaLogProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaLogStub<ImplRefTraits>;

  using RequestValidator_ = MediaLogRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddEventMinVersion = 0,
  };
  virtual ~MediaLog() {}

  virtual void AddEvent(const media::MediaLogEvent& event) = 0;
};
class  MediaLogInterceptorForTesting : public MediaLog {
  virtual MediaLog* GetForwardingInterface() = 0;
  void AddEvent(const media::MediaLogEvent& event) override;
};
class  MediaLogAsyncWaiter {
 public:
  explicit MediaLogAsyncWaiter(MediaLog* proxy);
  ~MediaLogAsyncWaiter();

 private:
  MediaLog* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaLogAsyncWaiter);
};

class  MediaLogProxy
    : public MediaLog {
 public:
  explicit MediaLogProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddEvent(const media::MediaLogEvent& event) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaLogStubDispatch {
 public:
  static bool Accept(MediaLog* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaLog* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaLog>>
class MediaLogStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaLogStub() {}
  ~MediaLogStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaLogStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaLogStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaLogRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_H_