// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/demuxer_stream.mojom-shared.h"
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
class DemuxerStream;
using DemuxerStreamPtr = mojo::InterfacePtr<DemuxerStream>;
using RevocableDemuxerStreamPtr = ::blink::RevocableInterfacePtr<DemuxerStream>;
using DemuxerStreamPtrInfo = mojo::InterfacePtrInfo<DemuxerStream>;
using ThreadSafeDemuxerStreamPtr =
    mojo::ThreadSafeInterfacePtr<DemuxerStream>;
using DemuxerStreamRequest = mojo::InterfaceRequest<DemuxerStream>;
using DemuxerStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<DemuxerStream>;
using ThreadSafeDemuxerStreamAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DemuxerStream>;
using DemuxerStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DemuxerStream>;
using DemuxerStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DemuxerStream>;


class DemuxerStreamProxy;

template <typename ImplRefTraits>
class DemuxerStreamStub;

class DemuxerStreamRequestValidator;
class DemuxerStreamResponseValidator;

class  DemuxerStream
    : public DemuxerStreamInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DemuxerStreamProxy;

  template <typename ImplRefTraits>
  using Stub_ = DemuxerStreamStub<ImplRefTraits>;

  using RequestValidator_ = DemuxerStreamRequestValidator;
  using ResponseValidator_ = DemuxerStreamResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kReadMinVersion = 0,
    kEnableBitstreamConverterMinVersion = 0,
  };
  using Type = DemuxerStream_Type;
  using Status = DemuxerStream_Status;
  virtual ~DemuxerStream() {}


  using InitializeCallback = base::OnceCallback<void(DemuxerStream::Type, mojo::ScopedDataPipeConsumerHandle, ::media::mojom::blink::AudioDecoderConfigPtr, ::media::mojom::blink::VideoDecoderConfigPtr)>;
  virtual void Initialize(InitializeCallback callback) = 0;


  using ReadCallback = base::OnceCallback<void(DemuxerStream::Status, ::media::mojom::blink::DecoderBufferPtr, ::media::mojom::blink::AudioDecoderConfigPtr, ::media::mojom::blink::VideoDecoderConfigPtr)>;
  virtual void Read(ReadCallback callback) = 0;

  virtual void EnableBitstreamConverter() = 0;
};
class  DemuxerStreamInterceptorForTesting : public DemuxerStream {
  virtual DemuxerStream* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void Read(ReadCallback callback) override;
  void EnableBitstreamConverter() override;
};
class  DemuxerStreamAsyncWaiter {
 public:
  explicit DemuxerStreamAsyncWaiter(DemuxerStream* proxy);
  ~DemuxerStreamAsyncWaiter();
  void Initialize(
      DemuxerStream::Type* out_type, mojo::ScopedDataPipeConsumerHandle* out_pipe, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config);
  void Read(
      DemuxerStream::Status* out_status, ::media::mojom::blink::DecoderBufferPtr* out_buffer, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config);

 private:
  DemuxerStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStreamAsyncWaiter);
};

class  DemuxerStreamProxy
    : public DemuxerStream {
 public:
  explicit DemuxerStreamProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(InitializeCallback callback) final;
  void Read(ReadCallback callback) final;
  void EnableBitstreamConverter() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DemuxerStreamStubDispatch {
 public:
  static bool Accept(DemuxerStream* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DemuxerStream* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DemuxerStream>>
class DemuxerStreamStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DemuxerStreamStub() {}
  ~DemuxerStreamStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DemuxerStreamStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DemuxerStreamStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DemuxerStreamRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DemuxerStreamResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_H_