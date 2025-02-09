// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_H_

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
#include "services/data_decoder/public/mojom/image_decoder.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
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


namespace data_decoder {
namespace mojom {
class ImageDecoder;
using ImageDecoderPtr = mojo::InterfacePtr<ImageDecoder>;
using ImageDecoderPtrInfo = mojo::InterfacePtrInfo<ImageDecoder>;
using ThreadSafeImageDecoderPtr =
    mojo::ThreadSafeInterfacePtr<ImageDecoder>;
using ImageDecoderRequest = mojo::InterfaceRequest<ImageDecoder>;
using ImageDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageDecoder>;
using ThreadSafeImageDecoderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImageDecoder>;
using ImageDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageDecoder>;
using ImageDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageDecoder>;

class AnimationFrame;
using AnimationFramePtr = mojo::StructPtr<AnimationFrame>;


class ImageDecoderProxy;

template <typename ImplRefTraits>
class ImageDecoderStub;

class ImageDecoderRequestValidator;
class ImageDecoderResponseValidator;

class  ImageDecoder
    : public ImageDecoderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ImageDecoderProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImageDecoderStub<ImplRefTraits>;

  using RequestValidator_ = ImageDecoderRequestValidator;
  using ResponseValidator_ = ImageDecoderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDecodeImageMinVersion = 0,
    kDecodeAnimationMinVersion = 0,
  };
  virtual ~ImageDecoder() {}


  using DecodeImageCallback = base::OnceCallback<void(const SkBitmap&)>;
  virtual void DecodeImage(const std::vector<uint8_t>& encoded_data, ImageCodec codec, bool shrink_to_fit, int64_t max_size_in_bytes, const gfx::Size& desired_image_frame_size, DecodeImageCallback callback) = 0;


  using DecodeAnimationCallback = base::OnceCallback<void(std::vector<AnimationFramePtr>)>;
  virtual void DecodeAnimation(const std::vector<uint8_t>& encoded_data, bool shrink_to_fit, int64_t max_size_in_bytes, DecodeAnimationCallback callback) = 0;
};
class  ImageDecoderInterceptorForTesting : public ImageDecoder {
  virtual ImageDecoder* GetForwardingInterface() = 0;
  void DecodeImage(const std::vector<uint8_t>& encoded_data, ImageCodec codec, bool shrink_to_fit, int64_t max_size_in_bytes, const gfx::Size& desired_image_frame_size, DecodeImageCallback callback) override;
  void DecodeAnimation(const std::vector<uint8_t>& encoded_data, bool shrink_to_fit, int64_t max_size_in_bytes, DecodeAnimationCallback callback) override;
};
class  ImageDecoderAsyncWaiter {
 public:
  explicit ImageDecoderAsyncWaiter(ImageDecoder* proxy);
  ~ImageDecoderAsyncWaiter();
  void DecodeImage(
      const std::vector<uint8_t>& encoded_data, ImageCodec codec, bool shrink_to_fit, int64_t max_size_in_bytes, const gfx::Size& desired_image_frame_size, SkBitmap* out_decoded_image);
  void DecodeAnimation(
      const std::vector<uint8_t>& encoded_data, bool shrink_to_fit, int64_t max_size_in_bytes, std::vector<AnimationFramePtr>* out_decoded_image);

 private:
  ImageDecoder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImageDecoderAsyncWaiter);
};

class  ImageDecoderProxy
    : public ImageDecoder {
 public:
  explicit ImageDecoderProxy(mojo::MessageReceiverWithResponder* receiver);
  void DecodeImage(const std::vector<uint8_t>& encoded_data, ImageCodec codec, bool shrink_to_fit, int64_t max_size_in_bytes, const gfx::Size& desired_image_frame_size, DecodeImageCallback callback) final;
  void DecodeAnimation(const std::vector<uint8_t>& encoded_data, bool shrink_to_fit, int64_t max_size_in_bytes, DecodeAnimationCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ImageDecoderStubDispatch {
 public:
  static bool Accept(ImageDecoder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImageDecoder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImageDecoder>>
class ImageDecoderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImageDecoderStub() {}
  ~ImageDecoderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageDecoderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageDecoderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImageDecoderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImageDecoderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  AnimationFrame {
 public:
  using DataView = AnimationFrameDataView;
  using Data_ = internal::AnimationFrame_Data;

  template <typename... Args>
  static AnimationFramePtr New(Args&&... args) {
    return AnimationFramePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AnimationFramePtr From(const U& u) {
    return mojo::TypeConverter<AnimationFramePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnimationFrame>::Convert(*this);
  }


  AnimationFrame();

  AnimationFrame(
      const SkBitmap& bitmap,
      base::TimeDelta duration);

  ~AnimationFrame();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnimationFramePtr>
  AnimationFramePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnimationFrame>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AnimationFrame::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AnimationFrame::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AnimationFrame_UnserializedMessageContext<
            UserType, AnimationFrame::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AnimationFrame::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AnimationFrame::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AnimationFrame_UnserializedMessageContext<
            UserType, AnimationFrame::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AnimationFrame::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  SkBitmap bitmap;
  base::TimeDelta duration;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AnimationFramePtr AnimationFrame::Clone() const {
  return New(
      mojo::Clone(bitmap),
      mojo::Clone(duration)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnimationFrame>::value>::type*>
bool AnimationFrame::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitmap, other_struct.bitmap))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace data_decoder

namespace mojo {


template <>
struct  StructTraits<::data_decoder::mojom::AnimationFrame::DataView,
                                         ::data_decoder::mojom::AnimationFramePtr> {
  static bool IsNull(const ::data_decoder::mojom::AnimationFramePtr& input) { return !input; }
  static void SetToNull(::data_decoder::mojom::AnimationFramePtr* output) { output->reset(); }

  static const decltype(::data_decoder::mojom::AnimationFrame::bitmap)& bitmap(
      const ::data_decoder::mojom::AnimationFramePtr& input) {
    return input->bitmap;
  }

  static const decltype(::data_decoder::mojom::AnimationFrame::duration)& duration(
      const ::data_decoder::mojom::AnimationFramePtr& input) {
    return input->duration;
  }

  static bool Read(::data_decoder::mojom::AnimationFrame::DataView input, ::data_decoder::mojom::AnimationFramePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_H_