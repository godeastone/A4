// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_H_

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
#include "content/common/media/renderer_audio_output_stream_factory.mojom-shared.h"
#include "media/mojo/interfaces/audio_output_stream.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class RendererAudioOutputStreamFactory;
using RendererAudioOutputStreamFactoryPtr = mojo::InterfacePtr<RendererAudioOutputStreamFactory>;
using RendererAudioOutputStreamFactoryPtrInfo = mojo::InterfacePtrInfo<RendererAudioOutputStreamFactory>;
using ThreadSafeRendererAudioOutputStreamFactoryPtr =
    mojo::ThreadSafeInterfacePtr<RendererAudioOutputStreamFactory>;
using RendererAudioOutputStreamFactoryRequest = mojo::InterfaceRequest<RendererAudioOutputStreamFactory>;
using RendererAudioOutputStreamFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererAudioOutputStreamFactory>;
using ThreadSafeRendererAudioOutputStreamFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RendererAudioOutputStreamFactory>;
using RendererAudioOutputStreamFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererAudioOutputStreamFactory>;
using RendererAudioOutputStreamFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererAudioOutputStreamFactory>;


class RendererAudioOutputStreamFactoryProxy;

template <typename ImplRefTraits>
class RendererAudioOutputStreamFactoryStub;

class RendererAudioOutputStreamFactoryRequestValidator;
class RendererAudioOutputStreamFactoryResponseValidator;

class CONTENT_EXPORT RendererAudioOutputStreamFactory
    : public RendererAudioOutputStreamFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RendererAudioOutputStreamFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererAudioOutputStreamFactoryStub<ImplRefTraits>;

  using RequestValidator_ = RendererAudioOutputStreamFactoryRequestValidator;
  using ResponseValidator_ = RendererAudioOutputStreamFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestDeviceAuthorizationMinVersion = 0,
  };
  virtual ~RendererAudioOutputStreamFactory() {}


  using RequestDeviceAuthorizationCallback = base::OnceCallback<void(media::OutputDeviceStatus, const media::AudioParameters&, const std::string&)>;
  virtual void RequestDeviceAuthorization(::media::mojom::AudioOutputStreamProviderRequest stream_provider_request, int32_t session_id, const std::string& device_id, RequestDeviceAuthorizationCallback callback) = 0;
};
class CONTENT_EXPORT RendererAudioOutputStreamFactoryInterceptorForTesting : public RendererAudioOutputStreamFactory {
  virtual RendererAudioOutputStreamFactory* GetForwardingInterface() = 0;
  void RequestDeviceAuthorization(::media::mojom::AudioOutputStreamProviderRequest stream_provider_request, int32_t session_id, const std::string& device_id, RequestDeviceAuthorizationCallback callback) override;
};
class CONTENT_EXPORT RendererAudioOutputStreamFactoryAsyncWaiter {
 public:
  explicit RendererAudioOutputStreamFactoryAsyncWaiter(RendererAudioOutputStreamFactory* proxy);
  ~RendererAudioOutputStreamFactoryAsyncWaiter();
  void RequestDeviceAuthorization(
      ::media::mojom::AudioOutputStreamProviderRequest stream_provider_request, int32_t session_id, const std::string& device_id, media::OutputDeviceStatus* out_state, media::AudioParameters* out_output_params, std::string* out_matched_device_id);

 private:
  RendererAudioOutputStreamFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererAudioOutputStreamFactoryAsyncWaiter);
};

class CONTENT_EXPORT RendererAudioOutputStreamFactoryProxy
    : public RendererAudioOutputStreamFactory {
 public:
  explicit RendererAudioOutputStreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDeviceAuthorization(::media::mojom::AudioOutputStreamProviderRequest stream_provider_request, int32_t session_id, const std::string& device_id, RequestDeviceAuthorizationCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RendererAudioOutputStreamFactoryStubDispatch {
 public:
  static bool Accept(RendererAudioOutputStreamFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererAudioOutputStreamFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererAudioOutputStreamFactory>>
class RendererAudioOutputStreamFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererAudioOutputStreamFactoryStub() {}
  ~RendererAudioOutputStreamFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioOutputStreamFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererAudioOutputStreamFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RendererAudioOutputStreamFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RendererAudioOutputStreamFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_H_