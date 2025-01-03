// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_H_

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
#include "content/common/media/renderer_audio_input_stream_factory.mojom-shared.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom.h"
#include "media/mojo/interfaces/audio_input_stream.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "media/mojo/interfaces/media_types.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class RendererAudioInputStreamFactory;
using RendererAudioInputStreamFactoryPtr = mojo::InterfacePtr<RendererAudioInputStreamFactory>;
using RendererAudioInputStreamFactoryPtrInfo = mojo::InterfacePtrInfo<RendererAudioInputStreamFactory>;
using ThreadSafeRendererAudioInputStreamFactoryPtr =
    mojo::ThreadSafeInterfacePtr<RendererAudioInputStreamFactory>;
using RendererAudioInputStreamFactoryRequest = mojo::InterfaceRequest<RendererAudioInputStreamFactory>;
using RendererAudioInputStreamFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererAudioInputStreamFactory>;
using ThreadSafeRendererAudioInputStreamFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RendererAudioInputStreamFactory>;
using RendererAudioInputStreamFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererAudioInputStreamFactory>;
using RendererAudioInputStreamFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererAudioInputStreamFactory>;

class RendererAudioInputStreamFactoryClient;
using RendererAudioInputStreamFactoryClientPtr = mojo::InterfacePtr<RendererAudioInputStreamFactoryClient>;
using RendererAudioInputStreamFactoryClientPtrInfo = mojo::InterfacePtrInfo<RendererAudioInputStreamFactoryClient>;
using ThreadSafeRendererAudioInputStreamFactoryClientPtr =
    mojo::ThreadSafeInterfacePtr<RendererAudioInputStreamFactoryClient>;
using RendererAudioInputStreamFactoryClientRequest = mojo::InterfaceRequest<RendererAudioInputStreamFactoryClient>;
using RendererAudioInputStreamFactoryClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererAudioInputStreamFactoryClient>;
using ThreadSafeRendererAudioInputStreamFactoryClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RendererAudioInputStreamFactoryClient>;
using RendererAudioInputStreamFactoryClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererAudioInputStreamFactoryClient>;
using RendererAudioInputStreamFactoryClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererAudioInputStreamFactoryClient>;


class RendererAudioInputStreamFactoryProxy;

template <typename ImplRefTraits>
class RendererAudioInputStreamFactoryStub;

class RendererAudioInputStreamFactoryRequestValidator;

class CONTENT_EXPORT RendererAudioInputStreamFactory
    : public RendererAudioInputStreamFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RendererAudioInputStreamFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererAudioInputStreamFactoryStub<ImplRefTraits>;

  using RequestValidator_ = RendererAudioInputStreamFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateStreamMinVersion = 0,
    kAssociateInputAndOutputForAecMinVersion = 0,
  };
  virtual ~RendererAudioInputStreamFactory() {}

  virtual void CreateStream(RendererAudioInputStreamFactoryClientPtr client, int32_t session_id, const media::AudioParameters& params, bool automatic_gain_control, uint32_t shared_memory_count) = 0;

  virtual void AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) = 0;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryInterceptorForTesting : public RendererAudioInputStreamFactory {
  virtual RendererAudioInputStreamFactory* GetForwardingInterface() = 0;
  void CreateStream(RendererAudioInputStreamFactoryClientPtr client, int32_t session_id, const media::AudioParameters& params, bool automatic_gain_control, uint32_t shared_memory_count) override;
  void AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) override;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryAsyncWaiter {
 public:
  explicit RendererAudioInputStreamFactoryAsyncWaiter(RendererAudioInputStreamFactory* proxy);
  ~RendererAudioInputStreamFactoryAsyncWaiter();

 private:
  RendererAudioInputStreamFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererAudioInputStreamFactoryAsyncWaiter);
};

class RendererAudioInputStreamFactoryClientProxy;

template <typename ImplRefTraits>
class RendererAudioInputStreamFactoryClientStub;

class RendererAudioInputStreamFactoryClientRequestValidator;

class CONTENT_EXPORT RendererAudioInputStreamFactoryClient
    : public RendererAudioInputStreamFactoryClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RendererAudioInputStreamFactoryClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererAudioInputStreamFactoryClientStub<ImplRefTraits>;

  using RequestValidator_ = RendererAudioInputStreamFactoryClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStreamCreatedMinVersion = 0,
  };
  virtual ~RendererAudioInputStreamFactoryClient() {}

  virtual void StreamCreated(::media::mojom::AudioInputStreamPtr stream, ::media::mojom::AudioInputStreamClientRequest client_request, ::media::mojom::AudioDataPipePtr data_pipe, bool initially_muted, const base::Optional<base::UnguessableToken>& stream_id) = 0;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryClientInterceptorForTesting : public RendererAudioInputStreamFactoryClient {
  virtual RendererAudioInputStreamFactoryClient* GetForwardingInterface() = 0;
  void StreamCreated(::media::mojom::AudioInputStreamPtr stream, ::media::mojom::AudioInputStreamClientRequest client_request, ::media::mojom::AudioDataPipePtr data_pipe, bool initially_muted, const base::Optional<base::UnguessableToken>& stream_id) override;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryClientAsyncWaiter {
 public:
  explicit RendererAudioInputStreamFactoryClientAsyncWaiter(RendererAudioInputStreamFactoryClient* proxy);
  ~RendererAudioInputStreamFactoryClientAsyncWaiter();

 private:
  RendererAudioInputStreamFactoryClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererAudioInputStreamFactoryClientAsyncWaiter);
};

class CONTENT_EXPORT RendererAudioInputStreamFactoryProxy
    : public RendererAudioInputStreamFactory {
 public:
  explicit RendererAudioInputStreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateStream(RendererAudioInputStreamFactoryClientPtr client, int32_t session_id, const media::AudioParameters& params, bool automatic_gain_control, uint32_t shared_memory_count) final;
  void AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT RendererAudioInputStreamFactoryClientProxy
    : public RendererAudioInputStreamFactoryClient {
 public:
  explicit RendererAudioInputStreamFactoryClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void StreamCreated(::media::mojom::AudioInputStreamPtr stream, ::media::mojom::AudioInputStreamClientRequest client_request, ::media::mojom::AudioDataPipePtr data_pipe, bool initially_muted, const base::Optional<base::UnguessableToken>& stream_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryStubDispatch {
 public:
  static bool Accept(RendererAudioInputStreamFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererAudioInputStreamFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererAudioInputStreamFactory>>
class RendererAudioInputStreamFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererAudioInputStreamFactoryStub() {}
  ~RendererAudioInputStreamFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioInputStreamFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioInputStreamFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryClientStubDispatch {
 public:
  static bool Accept(RendererAudioInputStreamFactoryClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererAudioInputStreamFactoryClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererAudioInputStreamFactoryClient>>
class RendererAudioInputStreamFactoryClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererAudioInputStreamFactoryClientStub() {}
  ~RendererAudioInputStreamFactoryClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioInputStreamFactoryClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioInputStreamFactoryClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RendererAudioInputStreamFactoryClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_H_