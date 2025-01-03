// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/audio_output_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-blink.h"
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
class AudioOutputStream;
using AudioOutputStreamPtr = mojo::InterfacePtr<AudioOutputStream>;
using RevocableAudioOutputStreamPtr = ::blink::RevocableInterfacePtr<AudioOutputStream>;
using AudioOutputStreamPtrInfo = mojo::InterfacePtrInfo<AudioOutputStream>;
using ThreadSafeAudioOutputStreamPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStream>;
using AudioOutputStreamRequest = mojo::InterfaceRequest<AudioOutputStream>;
using AudioOutputStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStream>;
using ThreadSafeAudioOutputStreamAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStream>;
using AudioOutputStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStream>;
using AudioOutputStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStream>;

class AudioOutputStreamObserver;
using AudioOutputStreamObserverPtr = mojo::InterfacePtr<AudioOutputStreamObserver>;
using RevocableAudioOutputStreamObserverPtr = ::blink::RevocableInterfacePtr<AudioOutputStreamObserver>;
using AudioOutputStreamObserverPtrInfo = mojo::InterfacePtrInfo<AudioOutputStreamObserver>;
using ThreadSafeAudioOutputStreamObserverPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStreamObserver>;
using AudioOutputStreamObserverRequest = mojo::InterfaceRequest<AudioOutputStreamObserver>;
using AudioOutputStreamObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStreamObserver>;
using ThreadSafeAudioOutputStreamObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStreamObserver>;
using AudioOutputStreamObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStreamObserver>;
using AudioOutputStreamObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStreamObserver>;

class AudioOutputStreamProvider;
using AudioOutputStreamProviderPtr = mojo::InterfacePtr<AudioOutputStreamProvider>;
using RevocableAudioOutputStreamProviderPtr = ::blink::RevocableInterfacePtr<AudioOutputStreamProvider>;
using AudioOutputStreamProviderPtrInfo = mojo::InterfacePtrInfo<AudioOutputStreamProvider>;
using ThreadSafeAudioOutputStreamProviderPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStreamProvider>;
using AudioOutputStreamProviderRequest = mojo::InterfaceRequest<AudioOutputStreamProvider>;
using AudioOutputStreamProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStreamProvider>;
using ThreadSafeAudioOutputStreamProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStreamProvider>;
using AudioOutputStreamProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStreamProvider>;
using AudioOutputStreamProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStreamProvider>;

class AudioOutputStreamProviderClient;
using AudioOutputStreamProviderClientPtr = mojo::InterfacePtr<AudioOutputStreamProviderClient>;
using RevocableAudioOutputStreamProviderClientPtr = ::blink::RevocableInterfacePtr<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientPtrInfo = mojo::InterfacePtrInfo<AudioOutputStreamProviderClient>;
using ThreadSafeAudioOutputStreamProviderClientPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientRequest = mojo::InterfaceRequest<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStreamProviderClient>;
using ThreadSafeAudioOutputStreamProviderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStreamProviderClient>;


class AudioOutputStreamProxy;

template <typename ImplRefTraits>
class AudioOutputStreamStub;

class AudioOutputStreamRequestValidator;

class  AudioOutputStream
    : public AudioOutputStreamInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioOutputStreamProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioOutputStreamStub<ImplRefTraits>;

  using RequestValidator_ = AudioOutputStreamRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPlayMinVersion = 0,
    kPauseMinVersion = 0,
    kSetVolumeMinVersion = 0,
  };
  virtual ~AudioOutputStream() {}

  virtual void Play() = 0;

  virtual void Pause() = 0;

  virtual void SetVolume(double volume) = 0;
};
class  AudioOutputStreamInterceptorForTesting : public AudioOutputStream {
  virtual AudioOutputStream* GetForwardingInterface() = 0;
  void Play() override;
  void Pause() override;
  void SetVolume(double volume) override;
};
class  AudioOutputStreamAsyncWaiter {
 public:
  explicit AudioOutputStreamAsyncWaiter(AudioOutputStream* proxy);
  ~AudioOutputStreamAsyncWaiter();

 private:
  AudioOutputStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamAsyncWaiter);
};

class AudioOutputStreamObserverProxy;

template <typename ImplRefTraits>
class AudioOutputStreamObserverStub;

class AudioOutputStreamObserverRequestValidator;

class  AudioOutputStreamObserver
    : public AudioOutputStreamObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioOutputStreamObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioOutputStreamObserverStub<ImplRefTraits>;

  using RequestValidator_ = AudioOutputStreamObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidStartPlayingMinVersion = 0,
    kDidStopPlayingMinVersion = 0,
    kDidChangeAudibleStateMinVersion = 0,
  };
  static constexpr uint32_t kPlatformErrorDisconnectReason = 1U;
  virtual ~AudioOutputStreamObserver() {}

  virtual void DidStartPlaying() = 0;

  virtual void DidStopPlaying() = 0;

  virtual void DidChangeAudibleState(bool is_audible) = 0;
};
class  AudioOutputStreamObserverInterceptorForTesting : public AudioOutputStreamObserver {
  virtual AudioOutputStreamObserver* GetForwardingInterface() = 0;
  void DidStartPlaying() override;
  void DidStopPlaying() override;
  void DidChangeAudibleState(bool is_audible) override;
};
class  AudioOutputStreamObserverAsyncWaiter {
 public:
  explicit AudioOutputStreamObserverAsyncWaiter(AudioOutputStreamObserver* proxy);
  ~AudioOutputStreamObserverAsyncWaiter();

 private:
  AudioOutputStreamObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamObserverAsyncWaiter);
};

class AudioOutputStreamProviderProxy;

template <typename ImplRefTraits>
class AudioOutputStreamProviderStub;

class AudioOutputStreamProviderRequestValidator;

class  AudioOutputStreamProvider
    : public AudioOutputStreamProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioOutputStreamProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioOutputStreamProviderStub<ImplRefTraits>;

  using RequestValidator_ = AudioOutputStreamProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAcquireMinVersion = 0,
  };
  virtual ~AudioOutputStreamProvider() {}

  virtual void Acquire(::media::mojom::blink::AudioParametersPtr params, AudioOutputStreamProviderClientPtr client) = 0;
};
class  AudioOutputStreamProviderInterceptorForTesting : public AudioOutputStreamProvider {
  virtual AudioOutputStreamProvider* GetForwardingInterface() = 0;
  void Acquire(::media::mojom::blink::AudioParametersPtr params, AudioOutputStreamProviderClientPtr client) override;
};
class  AudioOutputStreamProviderAsyncWaiter {
 public:
  explicit AudioOutputStreamProviderAsyncWaiter(AudioOutputStreamProvider* proxy);
  ~AudioOutputStreamProviderAsyncWaiter();

 private:
  AudioOutputStreamProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamProviderAsyncWaiter);
};

class AudioOutputStreamProviderClientProxy;

template <typename ImplRefTraits>
class AudioOutputStreamProviderClientStub;

class AudioOutputStreamProviderClientRequestValidator;

class  AudioOutputStreamProviderClient
    : public AudioOutputStreamProviderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AudioOutputStreamProviderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioOutputStreamProviderClientStub<ImplRefTraits>;

  using RequestValidator_ = AudioOutputStreamProviderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreatedMinVersion = 0,
  };
  static constexpr uint32_t kPlatformErrorDisconnectReason = 1U;
  virtual ~AudioOutputStreamProviderClient() {}

  virtual void Created(AudioOutputStreamPtr stream, ::media::mojom::blink::AudioDataPipePtr data_pipe) = 0;
};
class  AudioOutputStreamProviderClientInterceptorForTesting : public AudioOutputStreamProviderClient {
  virtual AudioOutputStreamProviderClient* GetForwardingInterface() = 0;
  void Created(AudioOutputStreamPtr stream, ::media::mojom::blink::AudioDataPipePtr data_pipe) override;
};
class  AudioOutputStreamProviderClientAsyncWaiter {
 public:
  explicit AudioOutputStreamProviderClientAsyncWaiter(AudioOutputStreamProviderClient* proxy);
  ~AudioOutputStreamProviderClientAsyncWaiter();

 private:
  AudioOutputStreamProviderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamProviderClientAsyncWaiter);
};

class  AudioOutputStreamProxy
    : public AudioOutputStream {
 public:
  explicit AudioOutputStreamProxy(mojo::MessageReceiverWithResponder* receiver);
  void Play() final;
  void Pause() final;
  void SetVolume(double volume) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioOutputStreamObserverProxy
    : public AudioOutputStreamObserver {
 public:
  explicit AudioOutputStreamObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidStartPlaying() final;
  void DidStopPlaying() final;
  void DidChangeAudibleState(bool is_audible) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioOutputStreamProviderProxy
    : public AudioOutputStreamProvider {
 public:
  explicit AudioOutputStreamProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Acquire(::media::mojom::blink::AudioParametersPtr params, AudioOutputStreamProviderClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioOutputStreamProviderClientProxy
    : public AudioOutputStreamProviderClient {
 public:
  explicit AudioOutputStreamProviderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void Created(AudioOutputStreamPtr stream, ::media::mojom::blink::AudioDataPipePtr data_pipe) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AudioOutputStreamStubDispatch {
 public:
  static bool Accept(AudioOutputStream* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioOutputStream* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioOutputStream>>
class AudioOutputStreamStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioOutputStreamStub() {}
  ~AudioOutputStreamStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioOutputStreamObserverStubDispatch {
 public:
  static bool Accept(AudioOutputStreamObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioOutputStreamObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioOutputStreamObserver>>
class AudioOutputStreamObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioOutputStreamObserverStub() {}
  ~AudioOutputStreamObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioOutputStreamProviderStubDispatch {
 public:
  static bool Accept(AudioOutputStreamProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioOutputStreamProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioOutputStreamProvider>>
class AudioOutputStreamProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioOutputStreamProviderStub() {}
  ~AudioOutputStreamProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioOutputStreamProviderClientStubDispatch {
 public:
  static bool Accept(AudioOutputStreamProviderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioOutputStreamProviderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioOutputStreamProviderClient>>
class AudioOutputStreamProviderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioOutputStreamProviderClientStub() {}
  ~AudioOutputStreamProviderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamProviderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioOutputStreamProviderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioOutputStreamRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioOutputStreamObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioOutputStreamProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioOutputStreamProviderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_H_