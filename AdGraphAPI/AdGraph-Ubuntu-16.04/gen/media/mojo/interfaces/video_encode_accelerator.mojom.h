// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_H_

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
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "media/video/video_encode_accelerator.h"


namespace media {
namespace mojom {
class VideoEncodeAcceleratorProvider;
using VideoEncodeAcceleratorProviderPtr = mojo::InterfacePtr<VideoEncodeAcceleratorProvider>;
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
  virtual bool Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result);

  using InitializeCallback = base::OnceCallback<void(bool)>;
  virtual void Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) = 0;


  using EncodeCallback = base::OnceCallback<void()>;
  virtual void Encode(const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) = 0;

  virtual void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) = 0;

  virtual void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) = 0;
};
class  VideoEncodeAcceleratorInterceptorForTesting : public VideoEncodeAccelerator {
  virtual VideoEncodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) override;
  void Encode(const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) override;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) override;
  void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) override;
};
class  VideoEncodeAcceleratorAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorAsyncWaiter(VideoEncodeAccelerator* proxy);
  ~VideoEncodeAcceleratorAsyncWaiter();
  void Initialize(
      media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result);
  void Encode(
      const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe);

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

  virtual void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) = 0;

  virtual void BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, base::TimeDelta timestamp) = 0;

  virtual void NotifyError(media::VideoEncodeAccelerator::Error error) = 0;
};
class  VideoEncodeAcceleratorClientInterceptorForTesting : public VideoEncodeAcceleratorClient {
  virtual VideoEncodeAcceleratorClient* GetForwardingInterface() = 0;
  void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) override;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, base::TimeDelta timestamp) override;
  void NotifyError(media::VideoEncodeAccelerator::Error error) override;
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
  bool Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result) final;
  void Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) final;
  void Encode(const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) final;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) final;
  void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoEncodeAcceleratorClientProxy
    : public VideoEncodeAcceleratorClient {
 public:
  explicit VideoEncodeAcceleratorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) final;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, base::TimeDelta timestamp) final;
  void NotifyError(media::VideoEncodeAccelerator::Error error) final;

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





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_H_