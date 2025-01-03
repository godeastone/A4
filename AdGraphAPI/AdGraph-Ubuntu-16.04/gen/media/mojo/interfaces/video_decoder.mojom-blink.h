// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/video_decoder.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-blink.h"
#include "media/mojo/interfaces/media_log.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/mojo/color_space.mojom-blink.h"

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
class VideoFrameHandleReleaser;
using VideoFrameHandleReleaserPtr = mojo::InterfacePtr<VideoFrameHandleReleaser>;
using RevocableVideoFrameHandleReleaserPtr = ::blink::RevocableInterfacePtr<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserPtrInfo = mojo::InterfacePtrInfo<VideoFrameHandleReleaser>;
using ThreadSafeVideoFrameHandleReleaserPtr =
    mojo::ThreadSafeInterfacePtr<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserRequest = mojo::InterfaceRequest<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoFrameHandleReleaser>;
using ThreadSafeVideoFrameHandleReleaserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoFrameHandleReleaser>;

class VideoDecoder;
using VideoDecoderPtr = mojo::InterfacePtr<VideoDecoder>;
using RevocableVideoDecoderPtr = ::blink::RevocableInterfacePtr<VideoDecoder>;
using VideoDecoderPtrInfo = mojo::InterfacePtrInfo<VideoDecoder>;
using ThreadSafeVideoDecoderPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecoder>;
using VideoDecoderRequest = mojo::InterfaceRequest<VideoDecoder>;
using VideoDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecoder>;
using ThreadSafeVideoDecoderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecoder>;
using VideoDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecoder>;
using VideoDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecoder>;

class VideoDecoderClient;
using VideoDecoderClientPtr = mojo::InterfacePtr<VideoDecoderClient>;
using RevocableVideoDecoderClientPtr = ::blink::RevocableInterfacePtr<VideoDecoderClient>;
using VideoDecoderClientPtrInfo = mojo::InterfacePtrInfo<VideoDecoderClient>;
using ThreadSafeVideoDecoderClientPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecoderClient>;
using VideoDecoderClientRequest = mojo::InterfaceRequest<VideoDecoderClient>;
using VideoDecoderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecoderClient>;
using ThreadSafeVideoDecoderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecoderClient>;
using VideoDecoderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecoderClient>;
using VideoDecoderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecoderClient>;

class CommandBufferId;
using CommandBufferIdPtr = mojo::StructPtr<CommandBufferId>;

using OverlayInfo = mojo::native::NativeStruct;
using OverlayInfoPtr = mojo::native::NativeStructPtr;


class VideoFrameHandleReleaserProxy;

template <typename ImplRefTraits>
class VideoFrameHandleReleaserStub;

class VideoFrameHandleReleaserRequestValidator;

class  VideoFrameHandleReleaser
    : public VideoFrameHandleReleaserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoFrameHandleReleaserProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoFrameHandleReleaserStub<ImplRefTraits>;

  using RequestValidator_ = VideoFrameHandleReleaserRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReleaseVideoFrameMinVersion = 0,
  };
  virtual ~VideoFrameHandleReleaser() {}

  virtual void ReleaseVideoFrame(::mojo_base::mojom::blink::UnguessableTokenPtr release_token, const ::gpu::SyncToken& release_sync_token) = 0;
};
class  VideoFrameHandleReleaserInterceptorForTesting : public VideoFrameHandleReleaser {
  virtual VideoFrameHandleReleaser* GetForwardingInterface() = 0;
  void ReleaseVideoFrame(::mojo_base::mojom::blink::UnguessableTokenPtr release_token, const ::gpu::SyncToken& release_sync_token) override;
};
class  VideoFrameHandleReleaserAsyncWaiter {
 public:
  explicit VideoFrameHandleReleaserAsyncWaiter(VideoFrameHandleReleaser* proxy);
  ~VideoFrameHandleReleaserAsyncWaiter();

 private:
  VideoFrameHandleReleaser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoFrameHandleReleaserAsyncWaiter);
};

class VideoDecoderProxy;

template <typename ImplRefTraits>
class VideoDecoderStub;

class VideoDecoderRequestValidator;
class VideoDecoderResponseValidator;

class  VideoDecoder
    : public VideoDecoderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecoderProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecoderStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecoderRequestValidator;
  using ResponseValidator_ = VideoDecoderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kConstructMinVersion = 0,
    kInitializeMinVersion = 0,
    kDecodeMinVersion = 0,
    kResetMinVersion = 0,
    kOnOverlayInfoChangedMinVersion = 0,
  };
  virtual ~VideoDecoder() {}

  virtual void Construct(VideoDecoderClientAssociatedPtrInfo client, ::media::mojom::blink::MediaLogAssociatedPtrInfo media_log, VideoFrameHandleReleaserRequest video_frame_handle_releaser, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe, CommandBufferIdPtr command_buffer_id, ::gfx::mojom::blink::ColorSpacePtr target_color_space) = 0;


  using InitializeCallback = base::OnceCallback<void(bool, bool, int32_t)>;
  virtual void Initialize(::media::mojom::blink::VideoDecoderConfigPtr config, bool low_delay, int32_t cdm_id, InitializeCallback callback) = 0;


  using DecodeCallback = base::OnceCallback<void(::media::mojom::blink::DecodeStatus)>;
  virtual void Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) = 0;


  using ResetCallback = base::OnceCallback<void()>;
  virtual void Reset(ResetCallback callback) = 0;

  virtual void OnOverlayInfoChanged(OverlayInfoPtr overlay_info) = 0;
};
class  VideoDecoderInterceptorForTesting : public VideoDecoder {
  virtual VideoDecoder* GetForwardingInterface() = 0;
  void Construct(VideoDecoderClientAssociatedPtrInfo client, ::media::mojom::blink::MediaLogAssociatedPtrInfo media_log, VideoFrameHandleReleaserRequest video_frame_handle_releaser, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe, CommandBufferIdPtr command_buffer_id, ::gfx::mojom::blink::ColorSpacePtr target_color_space) override;
  void Initialize(::media::mojom::blink::VideoDecoderConfigPtr config, bool low_delay, int32_t cdm_id, InitializeCallback callback) override;
  void Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) override;
  void Reset(ResetCallback callback) override;
  void OnOverlayInfoChanged(OverlayInfoPtr overlay_info) override;
};
class  VideoDecoderAsyncWaiter {
 public:
  explicit VideoDecoderAsyncWaiter(VideoDecoder* proxy);
  ~VideoDecoderAsyncWaiter();
  void Initialize(
      ::media::mojom::blink::VideoDecoderConfigPtr config, bool low_delay, int32_t cdm_id, bool* out_success, bool* out_needs_bitstream_conversion, int32_t* out_max_decode_requests);
  void Decode(
      ::media::mojom::blink::DecoderBufferPtr buffer, ::media::mojom::blink::DecodeStatus* out_status);
  void Reset(
      );

 private:
  VideoDecoder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoderAsyncWaiter);
};

class VideoDecoderClientProxy;

template <typename ImplRefTraits>
class VideoDecoderClientStub;

class VideoDecoderClientRequestValidator;

class  VideoDecoderClient
    : public VideoDecoderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecoderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecoderClientStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecoderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnVideoFrameDecodedMinVersion = 0,
    kRequestOverlayInfoMinVersion = 0,
  };
  virtual ~VideoDecoderClient() {}

  virtual void OnVideoFrameDecoded(::media::mojom::blink::VideoFramePtr frame, bool can_read_without_stalling, ::mojo_base::mojom::blink::UnguessableTokenPtr release_token) = 0;

  virtual void RequestOverlayInfo(bool restart_for_transitions) = 0;
};
class  VideoDecoderClientInterceptorForTesting : public VideoDecoderClient {
  virtual VideoDecoderClient* GetForwardingInterface() = 0;
  void OnVideoFrameDecoded(::media::mojom::blink::VideoFramePtr frame, bool can_read_without_stalling, ::mojo_base::mojom::blink::UnguessableTokenPtr release_token) override;
  void RequestOverlayInfo(bool restart_for_transitions) override;
};
class  VideoDecoderClientAsyncWaiter {
 public:
  explicit VideoDecoderClientAsyncWaiter(VideoDecoderClient* proxy);
  ~VideoDecoderClientAsyncWaiter();

 private:
  VideoDecoderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoderClientAsyncWaiter);
};

class  VideoFrameHandleReleaserProxy
    : public VideoFrameHandleReleaser {
 public:
  explicit VideoFrameHandleReleaserProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReleaseVideoFrame(::mojo_base::mojom::blink::UnguessableTokenPtr release_token, const ::gpu::SyncToken& release_sync_token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoDecoderProxy
    : public VideoDecoder {
 public:
  explicit VideoDecoderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Construct(VideoDecoderClientAssociatedPtrInfo client, ::media::mojom::blink::MediaLogAssociatedPtrInfo media_log, VideoFrameHandleReleaserRequest video_frame_handle_releaser, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe, CommandBufferIdPtr command_buffer_id, ::gfx::mojom::blink::ColorSpacePtr target_color_space) final;
  void Initialize(::media::mojom::blink::VideoDecoderConfigPtr config, bool low_delay, int32_t cdm_id, InitializeCallback callback) final;
  void Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) final;
  void Reset(ResetCallback callback) final;
  void OnOverlayInfoChanged(OverlayInfoPtr overlay_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoDecoderClientProxy
    : public VideoDecoderClient {
 public:
  explicit VideoDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnVideoFrameDecoded(::media::mojom::blink::VideoFramePtr frame, bool can_read_without_stalling, ::mojo_base::mojom::blink::UnguessableTokenPtr release_token) final;
  void RequestOverlayInfo(bool restart_for_transitions) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoFrameHandleReleaserStubDispatch {
 public:
  static bool Accept(VideoFrameHandleReleaser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoFrameHandleReleaser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoFrameHandleReleaser>>
class VideoFrameHandleReleaserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoFrameHandleReleaserStub() {}
  ~VideoFrameHandleReleaserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoFrameHandleReleaserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoFrameHandleReleaserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecoderStubDispatch {
 public:
  static bool Accept(VideoDecoder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecoder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecoder>>
class VideoDecoderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecoderStub() {}
  ~VideoDecoderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecoderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecoderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecoderClientStubDispatch {
 public:
  static bool Accept(VideoDecoderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecoderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecoderClient>>
class VideoDecoderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecoderClientStub() {}
  ~VideoDecoderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecoderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecoderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoFrameHandleReleaserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecoderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecoderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecoderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  CommandBufferId {
 public:
  using DataView = CommandBufferIdDataView;
  using Data_ = internal::CommandBufferId_Data;

  template <typename... Args>
  static CommandBufferIdPtr New(Args&&... args) {
    return CommandBufferIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommandBufferIdPtr From(const U& u) {
    return mojo::TypeConverter<CommandBufferIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommandBufferId>::Convert(*this);
  }


  CommandBufferId();

  CommandBufferId(
      ::mojo_base::mojom::blink::UnguessableTokenPtr channel_token,
      int32_t route_id);

  ~CommandBufferId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommandBufferIdPtr>
  CommandBufferIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CommandBufferId>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommandBufferId::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommandBufferId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommandBufferId_UnserializedMessageContext<
            UserType, CommandBufferId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CommandBufferId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CommandBufferId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommandBufferId_UnserializedMessageContext<
            UserType, CommandBufferId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommandBufferId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::mojo_base::mojom::blink::UnguessableTokenPtr channel_token;
  int32_t route_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CommandBufferId);
};


template <typename StructPtrType>
CommandBufferIdPtr CommandBufferId::Clone() const {
  return New(
      mojo::Clone(channel_token),
      mojo::Clone(route_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CommandBufferId>::value>::type*>
bool CommandBufferId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->channel_token, other_struct.channel_token))
    return false;
  if (!mojo::Equals(this->route_id, other_struct.route_id))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::blink::CommandBufferId::DataView,
                                         ::media::mojom::blink::CommandBufferIdPtr> {
  static bool IsNull(const ::media::mojom::blink::CommandBufferIdPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::CommandBufferIdPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::CommandBufferId::channel_token)& channel_token(
      const ::media::mojom::blink::CommandBufferIdPtr& input) {
    return input->channel_token;
  }

  static decltype(::media::mojom::blink::CommandBufferId::route_id) route_id(
      const ::media::mojom::blink::CommandBufferIdPtr& input) {
    return input->route_id;
  }

  static bool Read(::media::mojom::blink::CommandBufferId::DataView input, ::media::mojom::blink::CommandBufferIdPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_BLINK_H_