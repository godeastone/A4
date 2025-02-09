// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_H_

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
#include "services/audio/public/mojom/debug_recording.mojom-shared.h"
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
#include "media/audio/audio_debug_recording_helper.h"


namespace audio {
namespace mojom {
class DebugRecordingFileProvider;
using DebugRecordingFileProviderPtr = mojo::InterfacePtr<DebugRecordingFileProvider>;
using DebugRecordingFileProviderPtrInfo = mojo::InterfacePtrInfo<DebugRecordingFileProvider>;
using ThreadSafeDebugRecordingFileProviderPtr =
    mojo::ThreadSafeInterfacePtr<DebugRecordingFileProvider>;
using DebugRecordingFileProviderRequest = mojo::InterfaceRequest<DebugRecordingFileProvider>;
using DebugRecordingFileProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<DebugRecordingFileProvider>;
using ThreadSafeDebugRecordingFileProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DebugRecordingFileProvider>;
using DebugRecordingFileProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DebugRecordingFileProvider>;
using DebugRecordingFileProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DebugRecordingFileProvider>;

class DebugRecording;
using DebugRecordingPtr = mojo::InterfacePtr<DebugRecording>;
using DebugRecordingPtrInfo = mojo::InterfacePtrInfo<DebugRecording>;
using ThreadSafeDebugRecordingPtr =
    mojo::ThreadSafeInterfacePtr<DebugRecording>;
using DebugRecordingRequest = mojo::InterfaceRequest<DebugRecording>;
using DebugRecordingAssociatedPtr =
    mojo::AssociatedInterfacePtr<DebugRecording>;
using ThreadSafeDebugRecordingAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DebugRecording>;
using DebugRecordingAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DebugRecording>;
using DebugRecordingAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DebugRecording>;


class DebugRecordingFileProviderProxy;

template <typename ImplRefTraits>
class DebugRecordingFileProviderStub;

class DebugRecordingFileProviderRequestValidator;
class DebugRecordingFileProviderResponseValidator;

class  DebugRecordingFileProvider
    : public DebugRecordingFileProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DebugRecordingFileProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = DebugRecordingFileProviderStub<ImplRefTraits>;

  using RequestValidator_ = DebugRecordingFileProviderRequestValidator;
  using ResponseValidator_ = DebugRecordingFileProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateWavFileMinVersion = 0,
  };
  virtual ~DebugRecordingFileProvider() {}


  using CreateWavFileCallback = base::OnceCallback<void(base::File)>;
  virtual void CreateWavFile(media::AudioDebugRecordingStreamType stream_type, uint32_t id, CreateWavFileCallback callback) = 0;
};
class  DebugRecordingFileProviderInterceptorForTesting : public DebugRecordingFileProvider {
  virtual DebugRecordingFileProvider* GetForwardingInterface() = 0;
  void CreateWavFile(media::AudioDebugRecordingStreamType stream_type, uint32_t id, CreateWavFileCallback callback) override;
};
class  DebugRecordingFileProviderAsyncWaiter {
 public:
  explicit DebugRecordingFileProviderAsyncWaiter(DebugRecordingFileProvider* proxy);
  ~DebugRecordingFileProviderAsyncWaiter();
  void CreateWavFile(
      media::AudioDebugRecordingStreamType stream_type, uint32_t id, base::File* out_file);

 private:
  DebugRecordingFileProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DebugRecordingFileProviderAsyncWaiter);
};

class DebugRecordingProxy;

template <typename ImplRefTraits>
class DebugRecordingStub;

class DebugRecordingRequestValidator;

class  DebugRecording
    : public DebugRecordingInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DebugRecordingProxy;

  template <typename ImplRefTraits>
  using Stub_ = DebugRecordingStub<ImplRefTraits>;

  using RequestValidator_ = DebugRecordingRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kEnableMinVersion = 0,
  };
  virtual ~DebugRecording() {}

  virtual void Enable(DebugRecordingFileProviderPtr file_provider) = 0;
};
class  DebugRecordingInterceptorForTesting : public DebugRecording {
  virtual DebugRecording* GetForwardingInterface() = 0;
  void Enable(DebugRecordingFileProviderPtr file_provider) override;
};
class  DebugRecordingAsyncWaiter {
 public:
  explicit DebugRecordingAsyncWaiter(DebugRecording* proxy);
  ~DebugRecordingAsyncWaiter();

 private:
  DebugRecording* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DebugRecordingAsyncWaiter);
};

class  DebugRecordingFileProviderProxy
    : public DebugRecordingFileProvider {
 public:
  explicit DebugRecordingFileProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWavFile(media::AudioDebugRecordingStreamType stream_type, uint32_t id, CreateWavFileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  DebugRecordingProxy
    : public DebugRecording {
 public:
  explicit DebugRecordingProxy(mojo::MessageReceiverWithResponder* receiver);
  void Enable(DebugRecordingFileProviderPtr file_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DebugRecordingFileProviderStubDispatch {
 public:
  static bool Accept(DebugRecordingFileProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DebugRecordingFileProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DebugRecordingFileProvider>>
class DebugRecordingFileProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DebugRecordingFileProviderStub() {}
  ~DebugRecordingFileProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DebugRecordingFileProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DebugRecordingFileProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DebugRecordingStubDispatch {
 public:
  static bool Accept(DebugRecording* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DebugRecording* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DebugRecording>>
class DebugRecordingStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DebugRecordingStub() {}
  ~DebugRecordingStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DebugRecordingStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DebugRecordingStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DebugRecordingFileProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DebugRecordingRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DebugRecordingFileProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_H_