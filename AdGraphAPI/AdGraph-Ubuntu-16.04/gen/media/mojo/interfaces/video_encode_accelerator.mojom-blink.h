// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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


namespace WTF {
struct media_mojom_internal_VideoEncodeAccelerator_Error_DataHashFn {
  static unsigned GetHash(const ::media::mojom::VideoEncodeAccelerator_Error& value) {
    using utype = std::underlying_type<::media::mojom::VideoEncodeAccelerator_Error>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::VideoEncodeAccelerator_Error& left, const ::media::mojom::VideoEncodeAccelerator_Error& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::media::mojom::VideoEncodeAccelerator_Error> {
  using Hash = media_mojom_internal_VideoEncodeAccelerator_Error_DataHashFn;
};

template <>
struct HashTraits<::media::mojom::VideoEncodeAccelerator_Error>
    : public GenericHashTraits<::media::mojom::VideoEncodeAccelerator_Error> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::VideoEncodeAccelerator_Error& value) {
    return value == static_cast<::media::mojom::VideoEncodeAccelerator_Error>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::VideoEncodeAccelerator_Error& slot, bool) {
    slot = static_cast<::media::mojom::VideoEncodeAccelerator_Error>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::VideoEncodeAccelerator_Error& value) {
    return value == static_cast<::media::mojom::VideoEncodeAccelerator_Error>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
class VideoEncodeAcceleratorProvider;
using VideoEncodeAcceleratorProviderPtr = mojo::InterfacePtr<VideoEncodeAcceleratorProvider>;
using RevocableVideoEncodeAcceleratorProviderPtr = ::blink::RevocableInterfacePtr<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderPtrInfo = mojo::InterfacePtrInfo<VideoEncodeAcceleratorProvider>;
using ThreadSafeVideoEncodeAcceleratorProviderPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderRequest = mojo::InterfaceRequest<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeAcceleratorProvider>;
using ThreadSafeVideoEncodeAcceleratorProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeAcceleratorProvider>;

class VideoEncodeAccelerator;
using VideoEncodeAcceleratorPtr = mojo::InterfacePtr<VideoEncodeAccelerator>;
using RevocableVideoEncodeAcceleratorPtr = ::blink::RevocableInterfacePtr<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorPtrInfo = mojo::InterfacePtrInfo<VideoEncodeAccelerator>;
using ThreadSafeVideoEncodeAcceleratorPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorRequest = mojo::InterfaceRequest<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeAccelerator>;
using ThreadSafeVideoEncodeAcceleratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeAccelerator>;

class VideoEncodeAcceleratorClient;
using VideoEncodeAcceleratorClientPtr = mojo::InterfacePtr<VideoEncodeAcceleratorClient>;
using RevocableVideoEncodeAcceleratorClientPtr = ::blink::RevocableInterfacePtr<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientPtrInfo = mojo::InterfacePtrInfo<VideoEncodeAcceleratorClient>;
using ThreadSafeVideoEncodeAcceleratorClientPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientRequest = mojo::InterfaceRequest<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeAcceleratorClient>;
using ThreadSafeVideoEncodeAcceleratorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeAcceleratorClient>;


class VideoEncodeAcceleratorProviderProxy;

template <typename ImplRefTraits>
class VideoEncodeAcceleratorProviderStub;

class VideoEncodeAcceleratorProviderRequestValidator;

class  VideoEncodeAcceleratorProvider
    : public VideoEncodeAcceleratorProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoEncodeAcceleratorProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoEncodeAcceleratorProviderStub<ImplRefTraits>;

  using RequestValidator_ = VideoEncodeAcceleratorProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateVideoEncodeAcceleratorMinVersion = 0,
  };
  virtual ~VideoEncodeAcceleratorProvider() {}

  virtual void CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) = 0;
};
class  VideoEncodeAcceleratorProviderInterceptorForTesting : public VideoEncodeAcceleratorProvider {
  virtual VideoEncodeAcceleratorProvider* GetForwardingInterface() = 0;
  void CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) override;
};
class  VideoEncodeAcceleratorProviderAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorProviderAsyncWaiter(VideoEncodeAcceleratorProvider* proxy);
  ~VideoEncodeAcceleratorProviderAsyncWaiter();

 private:
  VideoEncodeAcceleratorProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorProviderAsyncWaiter);
};

class VideoEncodeAcceleratorProxy;

template <typename ImplRefTraits>
class VideoEncodeAcceleratorStub;

class VideoEncodeAcceleratorRequestValidator;
class VideoEncodeAcceleratorResponseValidator;

class  VideoEncodeAccelerator
    : public VideoEncodeAcceleratorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = VideoEncodeAcceleratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoEncodeAcceleratorStub<ImplRefTraits>;

  using RequestValidator_ = VideoEncodeAcceleratorRequestValidator;
  using ResponseValidator_ = VideoEncodeAcceleratorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kEncodeMinVersion = 0,
    kUseOutputBitstreamBufferMinVersion = 0,
    kRequestEncodingParametersChangeMinVersion = 0,
  };
  using Error = VideoEncodeAccelerator_Error;
  virtual ~VideoEncodeAccelerator() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool Initialize(::media::mojom::blink::VideoPixelFormat input_format, const ::blink::WebSize& input_visible_size, ::media::mojom::blink::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result);

  using InitializeCallback = base::OnceCallback<void(bool)>;
  virtual void Initialize(::media::mojom::blink::VideoPixelFormat input_format, const ::blink::WebSize& input_visible_size, ::media::mojom::blink::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) = 0;


  using EncodeCallback = base::OnceCallback<void()>;
  virtual void Encode(::media::mojom::blink::VideoFramePtr frame, bool force_keyframe, EncodeCallback callback) = 0;

  virtual void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) = 0;

  virtual void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) = 0;
};
class  VideoEncodeAcceleratorInterceptorForTesting : public VideoEncodeAccelerator {
  virtual VideoEncodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(::media::mojom::blink::VideoPixelFormat input_format, const ::blink::WebSize& input_visible_size, ::media::mojom::blink::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) override;
  void Encode(::media::mojom::blink::VideoFramePtr frame, bool force_keyframe, EncodeCallback callback) override;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) override;
  void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) override;
};
class  VideoEncodeAcceleratorAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorAsyncWaiter(VideoEncodeAccelerator* proxy);
  ~VideoEncodeAcceleratorAsyncWaiter();
  void Initialize(
      ::media::mojom::blink::VideoPixelFormat input_format, const ::blink::WebSize& input_visible_size, ::media::mojom::blink::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result);
  void Encode(
      ::media::mojom::blink::VideoFramePtr frame, bool force_keyframe);

 private:
  VideoEncodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorAsyncWaiter);
};

class VideoEncodeAcceleratorClientProxy;

template <typename ImplRefTraits>
class VideoEncodeAcceleratorClientStub;

class VideoEncodeAcceleratorClientRequestValidator;

class  VideoEncodeAcceleratorClient
    : public VideoEncodeAcceleratorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoEncodeAcceleratorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoEncodeAcceleratorClientStub<ImplRefTraits>;

  using RequestValidator_ = VideoEncodeAcceleratorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequireBitstreamBuffersMinVersion = 0,
    kBitstreamBufferReadyMinVersion = 0,
    kNotifyErrorMinVersion = 0,
  };
  virtual ~VideoEncodeAcceleratorClient() {}

  virtual void RequireBitstreamBuffers(uint32_t input_count, const ::blink::WebSize& input_coded_size, uint32_t output_buffer_size) = 0;

  virtual void BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, WTF::TimeDelta timestamp) = 0;

  virtual void NotifyError(VideoEncodeAccelerator::Error error) = 0;
};
class  VideoEncodeAcceleratorClientInterceptorForTesting : public VideoEncodeAcceleratorClient {
  virtual VideoEncodeAcceleratorClient* GetForwardingInterface() = 0;
  void RequireBitstreamBuffers(uint32_t input_count, const ::blink::WebSize& input_coded_size, uint32_t output_buffer_size) override;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, WTF::TimeDelta timestamp) override;
  void NotifyError(VideoEncodeAccelerator::Error error) override;
};
class  VideoEncodeAcceleratorClientAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorClientAsyncWaiter(VideoEncodeAcceleratorClient* proxy);
  ~VideoEncodeAcceleratorClientAsyncWaiter();

 private:
  VideoEncodeAcceleratorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorClientAsyncWaiter);
};

class  VideoEncodeAcceleratorProviderProxy
    : public VideoEncodeAcceleratorProvider {
 public:
  explicit VideoEncodeAcceleratorProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoEncodeAcceleratorProxy
    : public VideoEncodeAccelerator {
 public:
  explicit VideoEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Initialize(::media::mojom::blink::VideoPixelFormat input_format, const ::blink::WebSize& input_visible_size, ::media::mojom::blink::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result) final;
  void Initialize(::media::mojom::blink::VideoPixelFormat input_format, const ::blink::WebSize& input_visible_size, ::media::mojom::blink::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) final;
  void Encode(::media::mojom::blink::VideoFramePtr frame, bool force_keyframe, EncodeCallback callback) final;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) final;
  void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoEncodeAcceleratorClientProxy
    : public VideoEncodeAcceleratorClient {
 public:
  explicit VideoEncodeAcceleratorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequireBitstreamBuffers(uint32_t input_count, const ::blink::WebSize& input_coded_size, uint32_t output_buffer_size) final;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, WTF::TimeDelta timestamp) final;
  void NotifyError(VideoEncodeAccelerator::Error error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoEncodeAcceleratorProviderStubDispatch {
 public:
  static bool Accept(VideoEncodeAcceleratorProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoEncodeAcceleratorProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoEncodeAcceleratorProvider>>
class VideoEncodeAcceleratorProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoEncodeAcceleratorProviderStub() {}
  ~VideoEncodeAcceleratorProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeAcceleratorProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeAcceleratorProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoEncodeAcceleratorStubDispatch {
 public:
  static bool Accept(VideoEncodeAccelerator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoEncodeAccelerator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoEncodeAccelerator>>
class VideoEncodeAcceleratorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoEncodeAcceleratorStub() {}
  ~VideoEncodeAcceleratorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeAcceleratorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeAcceleratorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoEncodeAcceleratorClientStubDispatch {
 public:
  static bool Accept(VideoEncodeAcceleratorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoEncodeAcceleratorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoEncodeAcceleratorClient>>
class VideoEncodeAcceleratorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoEncodeAcceleratorClientStub() {}
  ~VideoEncodeAcceleratorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeAcceleratorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeAcceleratorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoEncodeAcceleratorProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoEncodeAcceleratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoEncodeAcceleratorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoEncodeAcceleratorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_H_