// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/audio_input_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
namespace blink {
class AudioInputStream;
using AudioInputStreamPtr = mojo::InterfacePtr<AudioInputStream>;
using RevocableAudioInputStreamPtr = ::blink::RevocableInterfacePtr<AudioInputStream>;
using AudioInputStreamPtrInfo = mojo::InterfacePtrInfo<AudioInputStream>;
using ThreadSafeAudioInputStreamPtr =
    mojo::ThreadSafeInterfacePtr<AudioInputStream>;
using AudioInputStreamRequest = mojo::InterfaceRequest<AudioInputStream>;
using AudioInputStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioInputStream>;
using ThreadSafeAudioInputStreamAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioInputStream>;
using AudioInputStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioInputStream>;
using AudioInputStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioInputStream>;

class AudioInputStreamClient;
using AudioInputStreamClientPtr = mojo::InterfacePtr<AudioInputStreamClient>;
using RevocableAudioInputStreamClientPtr = ::blink::RevocableInterfacePtr<AudioInputStreamClient>;
using AudioInputStreamClientPtrInfo = mojo::InterfacePtrInfo<AudioInputStreamClient>;
using ThreadSafeAudioInputStreamClientPtr =
    mojo::ThreadSafeInterfacePtr<AudioInputStreamClient>;
using AudioInputStreamClientRequest = mojo::InterfaceRequest<AudioInputStreamClient>;
using AudioInputStreamClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioInputStreamClient>;
using ThreadSafeAudioInputStreamClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioInputStreamClient>;
using AudioInputStreamClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioInputStreamClient>;
using AudioInputStreamClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioInputStreamClient>;

class AudioInputStreamObserver;
using AudioInputStreamObserverPtr = mojo::InterfacePtr<AudioInputStreamObserver>;
using RevocableAudioInputStreamObserverPtr = ::blink::RevocableInterfacePtr<AudioInputStreamObserver>;
using AudioInputStreamObserverPtrInfo = mojo::InterfacePtrInfo<AudioInputStreamObserver>;
using ThreadSafeAudioInputStreamObserverPtr =
    mojo::ThreadSafeInterfacePtr<AudioInputStreamObserver>;
using AudioInputStreamObserverRequest = mojo::InterfaceRequest<AudioInputStreamObserver>;
using AudioInputStreamObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioInputStreamObserver>;
using ThreadSafeAudioInputStreamObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioInputStreamObserver>;
using AudioInputStreamObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioInputStreamObserver>;
using AudioInputStreamObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioInputStreamObserver>;


class AudioInputStreamProxy;

template <typename ImplRefTraits>
class AudioInputStreamStub;

class AudioInputStreamRequestValidator;

class  AudioInputStream
    : public AudioInputStreamInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioInputStreamProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioInputStreamStub<ImplRefTraits>;

  using RequestValidator_ = AudioInputStreamRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordMinVersion = 0,
    kSetVolumeMinVersion = 0,
  };
  virtual ~AudioInputStream() {}

  virtual void Record() = 0;

  virtual void SetVolume(double volume) = 0;
};
class  AudioInputStreamInterceptorForTesting : public AudioInputStream {
  virtual AudioInputStream* GetForwardingInterface() = 0;
  void Record() override;
  void SetVolume(double volume) override;
};
class  AudioInputStreamAsyncWaiter {
 public:
  explicit AudioInputStreamAsyncWaiter(AudioInputStream* proxy);
  ~AudioInputStreamAsyncWaiter();

 private:
  AudioInputStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioInputStreamAsyncWaiter);
};

class AudioInputStreamClientProxy;

template <typename ImplRefTraits>
class AudioInputStreamClientStub;

class AudioInputStreamClientRequestValidator;

class  AudioInputStreamClient
    : public AudioInputStreamClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioInputStreamClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioInputStreamClientStub<ImplRefTraits>;

  using RequestValidator_ = AudioInputStreamClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnErrorMinVersion = 0,
    kOnMutedStateChangedMinVersion = 0,
  };
  virtual ~AudioInputStreamClient() {}

  virtual void OnError() = 0;

  virtual void OnMutedStateChanged(bool is_muted) = 0;
};
class  AudioInputStreamClientInterceptorForTesting : public AudioInputStreamClient {
  virtual AudioInputStreamClient* GetForwardingInterface() = 0;
  void OnError() override;
  void OnMutedStateChanged(bool is_muted) override;
};
class  AudioInputStreamClientAsyncWaiter {
 public:
  explicit AudioInputStreamClientAsyncWaiter(AudioInputStreamClient* proxy);
  ~AudioInputStreamClientAsyncWaiter();

 private:
  AudioInputStreamClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioInputStreamClientAsyncWaiter);
};

class AudioInputStreamObserverProxy;

template <typename ImplRefTraits>
class AudioInputStreamObserverStub;

class AudioInputStreamObserverRequestValidator;

class  AudioInputStreamObserver
    : public AudioInputStreamObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioInputStreamObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioInputStreamObserverStub<ImplRefTraits>;

  using RequestValidator_ = AudioInputStreamObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidStartRecordingMinVersion = 0,
  };
  virtual ~AudioInputStreamObserver() {}

  virtual void DidStartRecording() = 0;
};
class  AudioInputStreamObserverInterceptorForTesting : public AudioInputStreamObserver {
  virtual AudioInputStreamObserver* GetForwardingInterface() = 0;
  void DidStartRecording() override;
};
class  AudioInputStreamObserverAsyncWaiter {
 public:
  explicit AudioInputStreamObserverAsyncWaiter(AudioInputStreamObserver* proxy);
  ~AudioInputStreamObserverAsyncWaiter();

 private:
  AudioInputStreamObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioInputStreamObserverAsyncWaiter);
};

class  AudioInputStreamProxy
    : public AudioInputStream {
 public:
  explicit AudioInputStreamProxy(mojo::MessageReceiverWithResponder* receiver);
  void Record() final;
  void SetVolume(double volume) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioInputStreamClientProxy
    : public AudioInputStreamClient {
 public:
  explicit AudioInputStreamClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnError() final;
  void OnMutedStateChanged(bool is_muted) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioInputStreamObserverProxy
    : public AudioInputStreamObserver {
 public:
  explicit AudioInputStreamObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidStartRecording() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AudioInputStreamStubDispatch {
 public:
  static bool Accept(AudioInputStream* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioInputStream* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioInputStream>>
class AudioInputStreamStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioInputStreamStub() {}
  ~AudioInputStreamStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioInputStreamClientStubDispatch {
 public:
  static bool Accept(AudioInputStreamClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioInputStreamClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioInputStreamClient>>
class AudioInputStreamClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioInputStreamClientStub() {}
  ~AudioInputStreamClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioInputStreamObserverStubDispatch {
 public:
  static bool Accept(AudioInputStreamObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioInputStreamObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioInputStreamObserver>>
class AudioInputStreamObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioInputStreamObserverStub() {}
  ~AudioInputStreamObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioInputStreamRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioInputStreamClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioInputStreamObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_H_