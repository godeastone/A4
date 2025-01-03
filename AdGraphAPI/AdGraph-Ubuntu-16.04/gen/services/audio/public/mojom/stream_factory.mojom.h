// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_H_

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
#include "services/audio/public/mojom/stream_factory.mojom-shared.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom.h"
#include "media/mojo/interfaces/audio_input_stream.mojom.h"
#include "media/mojo/interfaces/audio_logging.mojom.h"
#include "media/mojo/interfaces/audio_output_stream.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
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


namespace audio {
namespace mojom {
class LocalMuter;
using LocalMuterPtr = mojo::InterfacePtr<LocalMuter>;
using LocalMuterPtrInfo = mojo::InterfacePtrInfo<LocalMuter>;
using ThreadSafeLocalMuterPtr =
    mojo::ThreadSafeInterfacePtr<LocalMuter>;
using LocalMuterRequest = mojo::InterfaceRequest<LocalMuter>;
using LocalMuterAssociatedPtr =
    mojo::AssociatedInterfacePtr<LocalMuter>;
using ThreadSafeLocalMuterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LocalMuter>;
using LocalMuterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LocalMuter>;
using LocalMuterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LocalMuter>;

class StreamFactory;
using StreamFactoryPtr = mojo::InterfacePtr<StreamFactory>;
using StreamFactoryPtrInfo = mojo::InterfacePtrInfo<StreamFactory>;
using ThreadSafeStreamFactoryPtr =
    mojo::ThreadSafeInterfacePtr<StreamFactory>;
using StreamFactoryRequest = mojo::InterfaceRequest<StreamFactory>;
using StreamFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<StreamFactory>;
using ThreadSafeStreamFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<StreamFactory>;
using StreamFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StreamFactory>;
using StreamFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StreamFactory>;


class LocalMuterProxy;

template <typename ImplRefTraits>
class LocalMuterStub;

class LocalMuterRequestValidator;

class  LocalMuter
    : public LocalMuterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = LocalMuterProxy;

  template <typename ImplRefTraits>
  using Stub_ = LocalMuterStub<ImplRefTraits>;

  using RequestValidator_ = LocalMuterRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~LocalMuter() {}
};
class  LocalMuterInterceptorForTesting : public LocalMuter {
  virtual LocalMuter* GetForwardingInterface() = 0;
};
class  LocalMuterAsyncWaiter {
 public:
  explicit LocalMuterAsyncWaiter(LocalMuter* proxy);
  ~LocalMuterAsyncWaiter();

 private:
  LocalMuter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LocalMuterAsyncWaiter);
};

class StreamFactoryProxy;

template <typename ImplRefTraits>
class StreamFactoryStub;

class StreamFactoryRequestValidator;
class StreamFactoryResponseValidator;

class  StreamFactory
    : public StreamFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = StreamFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = StreamFactoryStub<ImplRefTraits>;

  using RequestValidator_ = StreamFactoryRequestValidator;
  using ResponseValidator_ = StreamFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateInputStreamMinVersion = 0,
    kAssociateInputAndOutputForAecMinVersion = 0,
    kCreateOutputStreamMinVersion = 0,
    kBindMuterMinVersion = 0,
    kCreateLoopbackStreamMinVersion = 0,
  };
  virtual ~StreamFactory() {}


  using CreateInputStreamCallback = base::OnceCallback<void(::media::mojom::AudioDataPipePtr, bool, const base::Optional<base::UnguessableToken>&)>;
  virtual void CreateInputStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, uint32_t shared_memory_count, bool enable_agc, mojo::ScopedSharedBufferHandle key_press_count_buffer, CreateInputStreamCallback callback) = 0;

  virtual void AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) = 0;


  using CreateOutputStreamCallback = base::OnceCallback<void(::media::mojom::AudioDataPipePtr)>;
  virtual void CreateOutputStream(::media::mojom::AudioOutputStreamRequest stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, const base::UnguessableToken& group_id, CreateOutputStreamCallback callback) = 0;

  virtual void BindMuter(LocalMuterAssociatedRequest request, const base::UnguessableToken& group_id) = 0;


  using CreateLoopbackStreamCallback = base::OnceCallback<void(::media::mojom::AudioDataPipePtr)>;
  virtual void CreateLoopbackStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, const media::AudioParameters& params, uint32_t shared_memory_count, const base::UnguessableToken& group_id, CreateLoopbackStreamCallback callback) = 0;
};
class  StreamFactoryInterceptorForTesting : public StreamFactory {
  virtual StreamFactory* GetForwardingInterface() = 0;
  void CreateInputStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, uint32_t shared_memory_count, bool enable_agc, mojo::ScopedSharedBufferHandle key_press_count_buffer, CreateInputStreamCallback callback) override;
  void AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) override;
  void CreateOutputStream(::media::mojom::AudioOutputStreamRequest stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, const base::UnguessableToken& group_id, CreateOutputStreamCallback callback) override;
  void BindMuter(LocalMuterAssociatedRequest request, const base::UnguessableToken& group_id) override;
  void CreateLoopbackStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, const media::AudioParameters& params, uint32_t shared_memory_count, const base::UnguessableToken& group_id, CreateLoopbackStreamCallback callback) override;
};
class  StreamFactoryAsyncWaiter {
 public:
  explicit StreamFactoryAsyncWaiter(StreamFactory* proxy);
  ~StreamFactoryAsyncWaiter();
  void CreateInputStream(
      ::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, uint32_t shared_memory_count, bool enable_agc, mojo::ScopedSharedBufferHandle key_press_count_buffer, ::media::mojom::AudioDataPipePtr* out_data_pipe, bool* out_initially_muted, base::Optional<base::UnguessableToken>* out_stream_id);
  void CreateOutputStream(
      ::media::mojom::AudioOutputStreamRequest stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, const base::UnguessableToken& group_id, ::media::mojom::AudioDataPipePtr* out_data_pipe);
  void CreateLoopbackStream(
      ::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, const media::AudioParameters& params, uint32_t shared_memory_count, const base::UnguessableToken& group_id, ::media::mojom::AudioDataPipePtr* out_data_pipe);

 private:
  StreamFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StreamFactoryAsyncWaiter);
};

class  LocalMuterProxy
    : public LocalMuter {
 public:
  explicit LocalMuterProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  StreamFactoryProxy
    : public StreamFactory {
 public:
  explicit StreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateInputStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, uint32_t shared_memory_count, bool enable_agc, mojo::ScopedSharedBufferHandle key_press_count_buffer, CreateInputStreamCallback callback) final;
  void AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) final;
  void CreateOutputStream(::media::mojom::AudioOutputStreamRequest stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, const base::UnguessableToken& group_id, CreateOutputStreamCallback callback) final;
  void BindMuter(LocalMuterAssociatedRequest request, const base::UnguessableToken& group_id) final;
  void CreateLoopbackStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, const media::AudioParameters& params, uint32_t shared_memory_count, const base::UnguessableToken& group_id, CreateLoopbackStreamCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  LocalMuterStubDispatch {
 public:
  static bool Accept(LocalMuter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LocalMuter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LocalMuter>>
class LocalMuterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LocalMuterStub() {}
  ~LocalMuterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LocalMuterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LocalMuterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  StreamFactoryStubDispatch {
 public:
  static bool Accept(StreamFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StreamFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StreamFactory>>
class StreamFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StreamFactoryStub() {}
  ~StreamFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StreamFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StreamFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  LocalMuterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  StreamFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  StreamFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_H_