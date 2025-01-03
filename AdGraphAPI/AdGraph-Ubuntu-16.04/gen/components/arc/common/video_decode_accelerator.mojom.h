// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_H_
#define COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_H_

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
#include "components/arc/common/video_decode_accelerator.mojom-shared.h"
#include "components/arc/common/gfx.mojom.h"
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


namespace arc {
namespace mojom {
class VideoDecodeAccelerator;
using VideoDecodeAcceleratorPtr = mojo::InterfacePtr<VideoDecodeAccelerator>;
using VideoDecodeAcceleratorPtrInfo = mojo::InterfacePtrInfo<VideoDecodeAccelerator>;
using ThreadSafeVideoDecodeAcceleratorPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecodeAccelerator>;
using VideoDecodeAcceleratorRequest = mojo::InterfaceRequest<VideoDecodeAccelerator>;
using VideoDecodeAcceleratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecodeAccelerator>;
using ThreadSafeVideoDecodeAcceleratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecodeAccelerator>;
using VideoDecodeAcceleratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecodeAccelerator>;
using VideoDecodeAcceleratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecodeAccelerator>;

class VideoDecodeClient;
using VideoDecodeClientPtr = mojo::InterfacePtr<VideoDecodeClient>;
using VideoDecodeClientPtrInfo = mojo::InterfacePtrInfo<VideoDecodeClient>;
using ThreadSafeVideoDecodeClientPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecodeClient>;
using VideoDecodeClientRequest = mojo::InterfaceRequest<VideoDecodeClient>;
using VideoDecodeClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecodeClient>;
using ThreadSafeVideoDecodeClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecodeClient>;
using VideoDecodeClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecodeClient>;
using VideoDecodeClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecodeClient>;

class BitstreamBuffer;
using BitstreamBufferPtr = mojo::StructPtr<BitstreamBuffer>;

class Picture;
using PicturePtr = mojo::StructPtr<Picture>;

class PictureBufferFormat;
using PictureBufferFormatPtr = mojo::StructPtr<PictureBufferFormat>;

class VideoDecodeAcceleratorConfig;
using VideoDecodeAcceleratorConfigPtr = mojo::InlinedStructPtr<VideoDecodeAcceleratorConfig>;


class VideoDecodeAcceleratorProxy;

template <typename ImplRefTraits>
class VideoDecodeAcceleratorStub;

class VideoDecodeAcceleratorRequestValidator;
class VideoDecodeAcceleratorResponseValidator;

class  VideoDecodeAccelerator
    : public VideoDecodeAcceleratorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 2;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecodeAcceleratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecodeAcceleratorStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecodeAcceleratorRequestValidator;
  using ResponseValidator_ = VideoDecodeAcceleratorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kDecodeMinVersion = 0,
    kAssignPictureBuffersMinVersion = 0,
    kImportBufferForPictureMinVersion = 2,
    kReusePictureBufferMinVersion = 0,
    kResetMinVersion = 0,
    kFlushMinVersion = 0,
  };
  using Result = VideoDecodeAccelerator_Result;
  virtual ~VideoDecodeAccelerator() {}


  using InitializeCallback = base::OnceCallback<void(VideoDecodeAccelerator::Result)>;
  virtual void Initialize(VideoDecodeAcceleratorConfigPtr config, VideoDecodeClientPtr client, InitializeCallback callback) = 0;

  virtual void Decode(BitstreamBufferPtr bitstream_buffer) = 0;

  virtual void AssignPictureBuffers(uint32_t count) = 0;

  virtual void ImportBufferForPicture(int32_t picture_buffer_id, ::arc::mojom::HalPixelFormat format, mojo::ScopedHandle handle_fd, std::vector<arc::VideoFramePlane> planes) = 0;

  virtual void ReusePictureBuffer(int32_t picture_buffer_id) = 0;


  using ResetCallback = base::OnceCallback<void(VideoDecodeAccelerator::Result)>;
  virtual void Reset(ResetCallback callback) = 0;


  using FlushCallback = base::OnceCallback<void(VideoDecodeAccelerator::Result)>;
  virtual void Flush(FlushCallback callback) = 0;
};
class  VideoDecodeAcceleratorInterceptorForTesting : public VideoDecodeAccelerator {
  virtual VideoDecodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(VideoDecodeAcceleratorConfigPtr config, VideoDecodeClientPtr client, InitializeCallback callback) override;
  void Decode(BitstreamBufferPtr bitstream_buffer) override;
  void AssignPictureBuffers(uint32_t count) override;
  void ImportBufferForPicture(int32_t picture_buffer_id, ::arc::mojom::HalPixelFormat format, mojo::ScopedHandle handle_fd, std::vector<arc::VideoFramePlane> planes) override;
  void ReusePictureBuffer(int32_t picture_buffer_id) override;
  void Reset(ResetCallback callback) override;
  void Flush(FlushCallback callback) override;
};
class  VideoDecodeAcceleratorAsyncWaiter {
 public:
  explicit VideoDecodeAcceleratorAsyncWaiter(VideoDecodeAccelerator* proxy);
  ~VideoDecodeAcceleratorAsyncWaiter();
  void Initialize(
      VideoDecodeAcceleratorConfigPtr config, VideoDecodeClientPtr client, VideoDecodeAccelerator::Result* out_result);
  void Reset(
      VideoDecodeAccelerator::Result* out_result);
  void Flush(
      VideoDecodeAccelerator::Result* out_result);

 private:
  VideoDecodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAcceleratorAsyncWaiter);
};

class VideoDecodeClientProxy;

template <typename ImplRefTraits>
class VideoDecodeClientStub;

class VideoDecodeClientRequestValidator;

class  VideoDecodeClient
    : public VideoDecodeClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 1;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecodeClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecodeClientStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecodeClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kProvidePictureBuffersMinVersion = 1,
    kPictureReadyMinVersion = 0,
    kNotifyEndOfBitstreamBufferMinVersion = 0,
    kNotifyErrorMinVersion = 0,
  };
  virtual ~VideoDecodeClient() {}

  virtual void ProvidePictureBuffers(PictureBufferFormatPtr format) = 0;

  virtual void PictureReady(PicturePtr picture) = 0;

  virtual void NotifyEndOfBitstreamBuffer(int32_t bitstream_id) = 0;

  virtual void NotifyError(VideoDecodeAccelerator::Result error) = 0;
};
class  VideoDecodeClientInterceptorForTesting : public VideoDecodeClient {
  virtual VideoDecodeClient* GetForwardingInterface() = 0;
  void ProvidePictureBuffers(PictureBufferFormatPtr format) override;
  void PictureReady(PicturePtr picture) override;
  void NotifyEndOfBitstreamBuffer(int32_t bitstream_id) override;
  void NotifyError(VideoDecodeAccelerator::Result error) override;
};
class  VideoDecodeClientAsyncWaiter {
 public:
  explicit VideoDecodeClientAsyncWaiter(VideoDecodeClient* proxy);
  ~VideoDecodeClientAsyncWaiter();

 private:
  VideoDecodeClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeClientAsyncWaiter);
};

class  VideoDecodeAcceleratorProxy
    : public VideoDecodeAccelerator {
 public:
  explicit VideoDecodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(VideoDecodeAcceleratorConfigPtr config, VideoDecodeClientPtr client, InitializeCallback callback) final;
  void Decode(BitstreamBufferPtr bitstream_buffer) final;
  void AssignPictureBuffers(uint32_t count) final;
  void ImportBufferForPicture(int32_t picture_buffer_id, ::arc::mojom::HalPixelFormat format, mojo::ScopedHandle handle_fd, std::vector<arc::VideoFramePlane> planes) final;
  void ReusePictureBuffer(int32_t picture_buffer_id) final;
  void Reset(ResetCallback callback) final;
  void Flush(FlushCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoDecodeClientProxy
    : public VideoDecodeClient {
 public:
  explicit VideoDecodeClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ProvidePictureBuffers(PictureBufferFormatPtr format) final;
  void PictureReady(PicturePtr picture) final;
  void NotifyEndOfBitstreamBuffer(int32_t bitstream_id) final;
  void NotifyError(VideoDecodeAccelerator::Result error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDecodeAcceleratorStubDispatch {
 public:
  static bool Accept(VideoDecodeAccelerator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecodeAccelerator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecodeAccelerator>>
class VideoDecodeAcceleratorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecodeAcceleratorStub() {}
  ~VideoDecodeAcceleratorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeAcceleratorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeAcceleratorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecodeClientStubDispatch {
 public:
  static bool Accept(VideoDecodeClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecodeClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecodeClient>>
class VideoDecodeClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecodeClientStub() {}
  ~VideoDecodeClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecodeAcceleratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecodeClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecodeAcceleratorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  VideoDecodeAcceleratorConfig {
 public:
  using DataView = VideoDecodeAcceleratorConfigDataView;
  using Data_ = internal::VideoDecodeAcceleratorConfig_Data;

  template <typename... Args>
  static VideoDecodeAcceleratorConfigPtr New(Args&&... args) {
    return VideoDecodeAcceleratorConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoDecodeAcceleratorConfigPtr From(const U& u) {
    return mojo::TypeConverter<VideoDecodeAcceleratorConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecodeAcceleratorConfig>::Convert(*this);
  }


  VideoDecodeAcceleratorConfig();

  VideoDecodeAcceleratorConfig(
      media::VideoCodecProfile profile,
      bool secure_mode);

  ~VideoDecodeAcceleratorConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecodeAcceleratorConfigPtr>
  VideoDecodeAcceleratorConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecodeAcceleratorConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoDecodeAcceleratorConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoDecodeAcceleratorConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoDecodeAcceleratorConfig_UnserializedMessageContext<
            UserType, VideoDecodeAcceleratorConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoDecodeAcceleratorConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoDecodeAcceleratorConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoDecodeAcceleratorConfig_UnserializedMessageContext<
            UserType, VideoDecodeAcceleratorConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoDecodeAcceleratorConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  media::VideoCodecProfile profile;
  bool secure_mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  BitstreamBuffer {
 public:
  using DataView = BitstreamBufferDataView;
  using Data_ = internal::BitstreamBuffer_Data;

  template <typename... Args>
  static BitstreamBufferPtr New(Args&&... args) {
    return BitstreamBufferPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BitstreamBufferPtr From(const U& u) {
    return mojo::TypeConverter<BitstreamBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BitstreamBuffer>::Convert(*this);
  }


  BitstreamBuffer();

  BitstreamBuffer(
      int32_t bitstream_id,
      mojo::ScopedHandle handle_fd,
      uint32_t offset,
      uint32_t bytes_used);

  ~BitstreamBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BitstreamBufferPtr>
  BitstreamBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BitstreamBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BitstreamBuffer::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BitstreamBuffer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BitstreamBuffer_UnserializedMessageContext<
            UserType, BitstreamBuffer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BitstreamBuffer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BitstreamBuffer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BitstreamBuffer_UnserializedMessageContext<
            UserType, BitstreamBuffer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BitstreamBuffer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t bitstream_id;
  mojo::ScopedHandle handle_fd;
  uint32_t offset;
  uint32_t bytes_used;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BitstreamBuffer);
};


class  Picture {
 public:
  using DataView = PictureDataView;
  using Data_ = internal::Picture_Data;

  template <typename... Args>
  static PicturePtr New(Args&&... args) {
    return PicturePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PicturePtr From(const U& u) {
    return mojo::TypeConverter<PicturePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Picture>::Convert(*this);
  }


  Picture();

  Picture(
      int32_t picture_buffer_id,
      int32_t bitstream_id,
      const ::gfx::Rect& crop_rect);

  ~Picture();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PicturePtr>
  PicturePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Picture>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Picture::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Picture::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Picture_UnserializedMessageContext<
            UserType, Picture::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Picture::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Picture::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Picture_UnserializedMessageContext<
            UserType, Picture::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Picture::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t picture_buffer_id;
  int32_t bitstream_id;
  ::gfx::Rect crop_rect;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PictureBufferFormat {
 public:
  using DataView = PictureBufferFormatDataView;
  using Data_ = internal::PictureBufferFormat_Data;

  template <typename... Args>
  static PictureBufferFormatPtr New(Args&&... args) {
    return PictureBufferFormatPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PictureBufferFormatPtr From(const U& u) {
    return mojo::TypeConverter<PictureBufferFormatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PictureBufferFormat>::Convert(*this);
  }


  PictureBufferFormat();

  PictureBufferFormat(
      uint32_t min_num_buffers,
      const gfx::Size& coded_size);

  ~PictureBufferFormat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PictureBufferFormatPtr>
  PictureBufferFormatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PictureBufferFormat>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PictureBufferFormat::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PictureBufferFormat::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PictureBufferFormat_UnserializedMessageContext<
            UserType, PictureBufferFormat::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PictureBufferFormat::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PictureBufferFormat::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PictureBufferFormat_UnserializedMessageContext<
            UserType, PictureBufferFormat::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PictureBufferFormat::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t min_num_buffers;
  gfx::Size coded_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
BitstreamBufferPtr BitstreamBuffer::Clone() const {
  return New(
      mojo::Clone(bitstream_id),
      mojo::Clone(handle_fd),
      mojo::Clone(offset),
      mojo::Clone(bytes_used)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BitstreamBuffer>::value>::type*>
bool BitstreamBuffer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitstream_id, other_struct.bitstream_id))
    return false;
  if (!mojo::Equals(this->handle_fd, other_struct.handle_fd))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->bytes_used, other_struct.bytes_used))
    return false;
  return true;
}
template <typename StructPtrType>
PicturePtr Picture::Clone() const {
  return New(
      mojo::Clone(picture_buffer_id),
      mojo::Clone(bitstream_id),
      mojo::Clone(crop_rect)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Picture>::value>::type*>
bool Picture::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->picture_buffer_id, other_struct.picture_buffer_id))
    return false;
  if (!mojo::Equals(this->bitstream_id, other_struct.bitstream_id))
    return false;
  if (!mojo::Equals(this->crop_rect, other_struct.crop_rect))
    return false;
  return true;
}
template <typename StructPtrType>
PictureBufferFormatPtr PictureBufferFormat::Clone() const {
  return New(
      mojo::Clone(min_num_buffers),
      mojo::Clone(coded_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PictureBufferFormat>::value>::type*>
bool PictureBufferFormat::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->min_num_buffers, other_struct.min_num_buffers))
    return false;
  if (!mojo::Equals(this->coded_size, other_struct.coded_size))
    return false;
  return true;
}
template <typename StructPtrType>
VideoDecodeAcceleratorConfigPtr VideoDecodeAcceleratorConfig::Clone() const {
  return New(
      mojo::Clone(profile),
      mojo::Clone(secure_mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecodeAcceleratorConfig>::value>::type*>
bool VideoDecodeAcceleratorConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->profile, other_struct.profile))
    return false;
  if (!mojo::Equals(this->secure_mode, other_struct.secure_mode))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace arc

namespace mojo {


template <>
struct  StructTraits<::arc::mojom::BitstreamBuffer::DataView,
                                         ::arc::mojom::BitstreamBufferPtr> {
  static bool IsNull(const ::arc::mojom::BitstreamBufferPtr& input) { return !input; }
  static void SetToNull(::arc::mojom::BitstreamBufferPtr* output) { output->reset(); }

  static decltype(::arc::mojom::BitstreamBuffer::bitstream_id) bitstream_id(
      const ::arc::mojom::BitstreamBufferPtr& input) {
    return input->bitstream_id;
  }

  static  decltype(::arc::mojom::BitstreamBuffer::handle_fd)& handle_fd(
       ::arc::mojom::BitstreamBufferPtr& input) {
    return input->handle_fd;
  }

  static decltype(::arc::mojom::BitstreamBuffer::offset) offset(
      const ::arc::mojom::BitstreamBufferPtr& input) {
    return input->offset;
  }

  static decltype(::arc::mojom::BitstreamBuffer::bytes_used) bytes_used(
      const ::arc::mojom::BitstreamBufferPtr& input) {
    return input->bytes_used;
  }

  static bool Read(::arc::mojom::BitstreamBuffer::DataView input, ::arc::mojom::BitstreamBufferPtr* output);
};


template <>
struct  StructTraits<::arc::mojom::Picture::DataView,
                                         ::arc::mojom::PicturePtr> {
  static bool IsNull(const ::arc::mojom::PicturePtr& input) { return !input; }
  static void SetToNull(::arc::mojom::PicturePtr* output) { output->reset(); }

  static decltype(::arc::mojom::Picture::picture_buffer_id) picture_buffer_id(
      const ::arc::mojom::PicturePtr& input) {
    return input->picture_buffer_id;
  }

  static decltype(::arc::mojom::Picture::bitstream_id) bitstream_id(
      const ::arc::mojom::PicturePtr& input) {
    return input->bitstream_id;
  }

  static const decltype(::arc::mojom::Picture::crop_rect)& crop_rect(
      const ::arc::mojom::PicturePtr& input) {
    return input->crop_rect;
  }

  static bool Read(::arc::mojom::Picture::DataView input, ::arc::mojom::PicturePtr* output);
};


template <>
struct  StructTraits<::arc::mojom::PictureBufferFormat::DataView,
                                         ::arc::mojom::PictureBufferFormatPtr> {
  static bool IsNull(const ::arc::mojom::PictureBufferFormatPtr& input) { return !input; }
  static void SetToNull(::arc::mojom::PictureBufferFormatPtr* output) { output->reset(); }

  static decltype(::arc::mojom::PictureBufferFormat::min_num_buffers) min_num_buffers(
      const ::arc::mojom::PictureBufferFormatPtr& input) {
    return input->min_num_buffers;
  }

  static const decltype(::arc::mojom::PictureBufferFormat::coded_size)& coded_size(
      const ::arc::mojom::PictureBufferFormatPtr& input) {
    return input->coded_size;
  }

  static bool Read(::arc::mojom::PictureBufferFormat::DataView input, ::arc::mojom::PictureBufferFormatPtr* output);
};


template <>
struct  StructTraits<::arc::mojom::VideoDecodeAcceleratorConfig::DataView,
                                         ::arc::mojom::VideoDecodeAcceleratorConfigPtr> {
  static bool IsNull(const ::arc::mojom::VideoDecodeAcceleratorConfigPtr& input) { return !input; }
  static void SetToNull(::arc::mojom::VideoDecodeAcceleratorConfigPtr* output) { output->reset(); }

  static decltype(::arc::mojom::VideoDecodeAcceleratorConfig::profile) profile(
      const ::arc::mojom::VideoDecodeAcceleratorConfigPtr& input) {
    return input->profile;
  }

  static decltype(::arc::mojom::VideoDecodeAcceleratorConfig::secure_mode) secure_mode(
      const ::arc::mojom::VideoDecodeAcceleratorConfigPtr& input) {
    return input->secure_mode;
  }

  static bool Read(::arc::mojom::VideoDecodeAcceleratorConfig::DataView input, ::arc::mojom::VideoDecodeAcceleratorConfigPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_H_