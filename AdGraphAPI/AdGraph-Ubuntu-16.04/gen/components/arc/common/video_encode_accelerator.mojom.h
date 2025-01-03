// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_H_
#define COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_H_

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
#include "components/arc/common/video_encode_accelerator.mojom-shared.h"
#include "components/arc/common/video_common.mojom.h"
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


namespace arc {
namespace mojom {
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

class VideoEncodeClient;
using VideoEncodeClientPtr = mojo::InterfacePtr<VideoEncodeClient>;
using VideoEncodeClientPtrInfo = mojo::InterfacePtrInfo<VideoEncodeClient>;
using ThreadSafeVideoEncodeClientPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeClient>;
using VideoEncodeClientRequest = mojo::InterfaceRequest<VideoEncodeClient>;
using VideoEncodeClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeClient>;
using ThreadSafeVideoEncodeClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeClient>;
using VideoEncodeClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeClient>;
using VideoEncodeClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeClient>;

class VideoEncodeProfile;
using VideoEncodeProfilePtr = mojo::StructPtr<VideoEncodeProfile>;


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
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoEncodeAcceleratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoEncodeAcceleratorStub<ImplRefTraits>;

  using RequestValidator_ = VideoEncodeAcceleratorRequestValidator;
  using ResponseValidator_ = VideoEncodeAcceleratorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSupportedProfilesMinVersion = 0,
    kInitializeMinVersion = 0,
    kEncodeMinVersion = 0,
    kUseBitstreamBufferMinVersion = 0,
    kRequestEncodingParametersChangeMinVersion = 0,
    kFlushMinVersion = 0,
  };
  using StorageType = VideoEncodeAccelerator_StorageType;
  using Error = VideoEncodeAccelerator_Error;
  virtual ~VideoEncodeAccelerator() {}


  using GetSupportedProfilesCallback = base::OnceCallback<void(const std::vector<media::VideoEncodeAccelerator::SupportedProfile>&)>;
  virtual void GetSupportedProfiles(GetSupportedProfilesCallback callback) = 0;


  using InitializeCallback = base::OnceCallback<void(bool)>;
  virtual void Initialize(media::VideoPixelFormat input_format, const gfx::Size& visible_size, VideoEncodeAccelerator::StorageType input_storage, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeClientPtr client, InitializeCallback callback) = 0;


  using EncodeCallback = base::OnceCallback<void()>;
  virtual void Encode(mojo::ScopedHandle frame_fd, std::vector<arc::VideoFramePlane> planes, int64_t timestamp, bool force_keyframe, EncodeCallback callback) = 0;


  using UseBitstreamBufferCallback = base::OnceCallback<void(uint32_t, bool, int64_t)>;
  virtual void UseBitstreamBuffer(mojo::ScopedHandle shmem_fd, uint32_t offset, uint32_t size, UseBitstreamBufferCallback callback) = 0;

  virtual void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) = 0;


  using FlushCallback = base::OnceCallback<void(bool)>;
  virtual void Flush(FlushCallback callback) = 0;
};
class  VideoEncodeAcceleratorInterceptorForTesting : public VideoEncodeAccelerator {
  virtual VideoEncodeAccelerator* GetForwardingInterface() = 0;
  void GetSupportedProfiles(GetSupportedProfilesCallback callback) override;
  void Initialize(media::VideoPixelFormat input_format, const gfx::Size& visible_size, VideoEncodeAccelerator::StorageType input_storage, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeClientPtr client, InitializeCallback callback) override;
  void Encode(mojo::ScopedHandle frame_fd, std::vector<arc::VideoFramePlane> planes, int64_t timestamp, bool force_keyframe, EncodeCallback callback) override;
  void UseBitstreamBuffer(mojo::ScopedHandle shmem_fd, uint32_t offset, uint32_t size, UseBitstreamBufferCallback callback) override;
  void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) override;
  void Flush(FlushCallback callback) override;
};
class  VideoEncodeAcceleratorAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorAsyncWaiter(VideoEncodeAccelerator* proxy);
  ~VideoEncodeAcceleratorAsyncWaiter();
  void GetSupportedProfiles(
      std::vector<media::VideoEncodeAccelerator::SupportedProfile>* out_profiles);
  void Initialize(
      media::VideoPixelFormat input_format, const gfx::Size& visible_size, VideoEncodeAccelerator::StorageType input_storage, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeClientPtr client, bool* out_success);
  void Encode(
      mojo::ScopedHandle frame_fd, std::vector<arc::VideoFramePlane> planes, int64_t timestamp, bool force_keyframe);
  void UseBitstreamBuffer(
      mojo::ScopedHandle shmem_fd, uint32_t offset, uint32_t size, uint32_t* out_payload_size, bool* out_key_frame, int64_t* out_timestamp);
  void Flush(
      bool* out_flush_done);

 private:
  VideoEncodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorAsyncWaiter);
};

class VideoEncodeClientProxy;

template <typename ImplRefTraits>
class VideoEncodeClientStub;

class VideoEncodeClientRequestValidator;

class  VideoEncodeClient
    : public VideoEncodeClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoEncodeClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoEncodeClientStub<ImplRefTraits>;

  using RequestValidator_ = VideoEncodeClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequireBitstreamBuffersMinVersion = 0,
    kNotifyErrorMinVersion = 0,
  };
  virtual ~VideoEncodeClient() {}

  virtual void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) = 0;

  virtual void NotifyError(media::VideoEncodeAccelerator::Error error) = 0;
};
class  VideoEncodeClientInterceptorForTesting : public VideoEncodeClient {
  virtual VideoEncodeClient* GetForwardingInterface() = 0;
  void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) override;
  void NotifyError(media::VideoEncodeAccelerator::Error error) override;
};
class  VideoEncodeClientAsyncWaiter {
 public:
  explicit VideoEncodeClientAsyncWaiter(VideoEncodeClient* proxy);
  ~VideoEncodeClientAsyncWaiter();

 private:
  VideoEncodeClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeClientAsyncWaiter);
};

class  VideoEncodeAcceleratorProxy
    : public VideoEncodeAccelerator {
 public:
  explicit VideoEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetSupportedProfiles(GetSupportedProfilesCallback callback) final;
  void Initialize(media::VideoPixelFormat input_format, const gfx::Size& visible_size, VideoEncodeAccelerator::StorageType input_storage, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeClientPtr client, InitializeCallback callback) final;
  void Encode(mojo::ScopedHandle frame_fd, std::vector<arc::VideoFramePlane> planes, int64_t timestamp, bool force_keyframe, EncodeCallback callback) final;
  void UseBitstreamBuffer(mojo::ScopedHandle shmem_fd, uint32_t offset, uint32_t size, UseBitstreamBufferCallback callback) final;
  void RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) final;
  void Flush(FlushCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoEncodeClientProxy
    : public VideoEncodeClient {
 public:
  explicit VideoEncodeClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) final;
  void NotifyError(media::VideoEncodeAccelerator::Error error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
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
class  VideoEncodeClientStubDispatch {
 public:
  static bool Accept(VideoEncodeClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoEncodeClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoEncodeClient>>
class VideoEncodeClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoEncodeClientStub() {}
  ~VideoEncodeClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoEncodeClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoEncodeAcceleratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoEncodeClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoEncodeAcceleratorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  VideoEncodeProfile {
 public:
  using DataView = VideoEncodeProfileDataView;
  using Data_ = internal::VideoEncodeProfile_Data;

  template <typename... Args>
  static VideoEncodeProfilePtr New(Args&&... args) {
    return VideoEncodeProfilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoEncodeProfilePtr From(const U& u) {
    return mojo::TypeConverter<VideoEncodeProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoEncodeProfile>::Convert(*this);
  }


  VideoEncodeProfile();

  VideoEncodeProfile(
      media::VideoCodecProfile profile,
      const gfx::Size& max_resolution,
      uint32_t max_framerate_numerator,
      uint32_t max_framerate_denominator);

  ~VideoEncodeProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoEncodeProfilePtr>
  VideoEncodeProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoEncodeProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoEncodeProfile::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoEncodeProfile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoEncodeProfile_UnserializedMessageContext<
            UserType, VideoEncodeProfile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoEncodeProfile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoEncodeProfile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoEncodeProfile_UnserializedMessageContext<
            UserType, VideoEncodeProfile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoEncodeProfile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  media::VideoCodecProfile profile;
  gfx::Size max_resolution;
  uint32_t max_framerate_numerator;
  uint32_t max_framerate_denominator;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
VideoEncodeProfilePtr VideoEncodeProfile::Clone() const {
  return New(
      mojo::Clone(profile),
      mojo::Clone(max_resolution),
      mojo::Clone(max_framerate_numerator),
      mojo::Clone(max_framerate_denominator)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoEncodeProfile>::value>::type*>
bool VideoEncodeProfile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->profile, other_struct.profile))
    return false;
  if (!mojo::Equals(this->max_resolution, other_struct.max_resolution))
    return false;
  if (!mojo::Equals(this->max_framerate_numerator, other_struct.max_framerate_numerator))
    return false;
  if (!mojo::Equals(this->max_framerate_denominator, other_struct.max_framerate_denominator))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace arc

namespace mojo {


template <>
struct  StructTraits<::arc::mojom::VideoEncodeProfile::DataView,
                                         ::arc::mojom::VideoEncodeProfilePtr> {
  static bool IsNull(const ::arc::mojom::VideoEncodeProfilePtr& input) { return !input; }
  static void SetToNull(::arc::mojom::VideoEncodeProfilePtr* output) { output->reset(); }

  static decltype(::arc::mojom::VideoEncodeProfile::profile) profile(
      const ::arc::mojom::VideoEncodeProfilePtr& input) {
    return input->profile;
  }

  static const decltype(::arc::mojom::VideoEncodeProfile::max_resolution)& max_resolution(
      const ::arc::mojom::VideoEncodeProfilePtr& input) {
    return input->max_resolution;
  }

  static decltype(::arc::mojom::VideoEncodeProfile::max_framerate_numerator) max_framerate_numerator(
      const ::arc::mojom::VideoEncodeProfilePtr& input) {
    return input->max_framerate_numerator;
  }

  static decltype(::arc::mojom::VideoEncodeProfile::max_framerate_denominator) max_framerate_denominator(
      const ::arc::mojom::VideoEncodeProfilePtr& input) {
    return input->max_framerate_denominator;
  }

  static bool Read(::arc::mojom::VideoEncodeProfile::DataView input, ::arc::mojom::VideoEncodeProfilePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_H_