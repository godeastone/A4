// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom-shared.h"
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
struct media_mojom_internal_DecodeError_DataHashFn {
  static unsigned GetHash(const ::media::mojom::DecodeError& value) {
    using utype = std::underlying_type<::media::mojom::DecodeError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::DecodeError& left, const ::media::mojom::DecodeError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::media::mojom::DecodeError> {
  using Hash = media_mojom_internal_DecodeError_DataHashFn;
};

template <>
struct HashTraits<::media::mojom::DecodeError>
    : public GenericHashTraits<::media::mojom::DecodeError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::DecodeError& value) {
    return value == static_cast<::media::mojom::DecodeError>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::DecodeError& slot, bool) {
    slot = static_cast<::media::mojom::DecodeError>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::DecodeError& value) {
    return value == static_cast<::media::mojom::DecodeError>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using DecodeError = DecodeError;  // Alias for definition in the parent namespace.
class JpegDecodeAccelerator;
using JpegDecodeAcceleratorPtr = mojo::InterfacePtr<JpegDecodeAccelerator>;
using RevocableJpegDecodeAcceleratorPtr = ::blink::RevocableInterfacePtr<JpegDecodeAccelerator>;
using JpegDecodeAcceleratorPtrInfo = mojo::InterfacePtrInfo<JpegDecodeAccelerator>;
using ThreadSafeJpegDecodeAcceleratorPtr =
    mojo::ThreadSafeInterfacePtr<JpegDecodeAccelerator>;
using JpegDecodeAcceleratorRequest = mojo::InterfaceRequest<JpegDecodeAccelerator>;
using JpegDecodeAcceleratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<JpegDecodeAccelerator>;
using ThreadSafeJpegDecodeAcceleratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<JpegDecodeAccelerator>;
using JpegDecodeAcceleratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<JpegDecodeAccelerator>;
using JpegDecodeAcceleratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<JpegDecodeAccelerator>;

class BitstreamBuffer;
using BitstreamBufferPtr = mojo::StructPtr<BitstreamBuffer>;


class JpegDecodeAcceleratorProxy;

template <typename ImplRefTraits>
class JpegDecodeAcceleratorStub;

class JpegDecodeAcceleratorRequestValidator;
class JpegDecodeAcceleratorResponseValidator;

class  JpegDecodeAccelerator
    : public JpegDecodeAcceleratorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = JpegDecodeAcceleratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = JpegDecodeAcceleratorStub<ImplRefTraits>;

  using RequestValidator_ = JpegDecodeAcceleratorRequestValidator;
  using ResponseValidator_ = JpegDecodeAcceleratorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kDecodeMinVersion = 0,
    kDecodeWithFDMinVersion = 0,
    kUninitializeMinVersion = 0,
  };
  virtual ~JpegDecodeAccelerator() {}


  using InitializeCallback = base::OnceCallback<void(bool)>;
  virtual void Initialize(InitializeCallback callback) = 0;


  using DecodeCallback = base::OnceCallback<void(int32_t, DecodeError)>;
  virtual void Decode(BitstreamBufferPtr input_buffer, const ::blink::WebSize& coded_size, mojo::ScopedSharedBufferHandle output_handle, uint32_t output_buffer_size, DecodeCallback callback) = 0;


  using DecodeWithFDCallback = base::OnceCallback<void(int32_t, DecodeError)>;
  virtual void DecodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, DecodeWithFDCallback callback) = 0;

  virtual void Uninitialize() = 0;
};
class  JpegDecodeAcceleratorInterceptorForTesting : public JpegDecodeAccelerator {
  virtual JpegDecodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void Decode(BitstreamBufferPtr input_buffer, const ::blink::WebSize& coded_size, mojo::ScopedSharedBufferHandle output_handle, uint32_t output_buffer_size, DecodeCallback callback) override;
  void DecodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, DecodeWithFDCallback callback) override;
  void Uninitialize() override;
};
class  JpegDecodeAcceleratorAsyncWaiter {
 public:
  explicit JpegDecodeAcceleratorAsyncWaiter(JpegDecodeAccelerator* proxy);
  ~JpegDecodeAcceleratorAsyncWaiter();
  void Initialize(
      bool* out_success);
  void Decode(
      BitstreamBufferPtr input_buffer, const ::blink::WebSize& coded_size, mojo::ScopedSharedBufferHandle output_handle, uint32_t output_buffer_size, int32_t* out_bitstream_buffer_id, DecodeError* out_error);
  void DecodeWithFD(
      int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, int32_t* out_buffer_id, DecodeError* out_error);

 private:
  JpegDecodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAcceleratorAsyncWaiter);
};

class  JpegDecodeAcceleratorProxy
    : public JpegDecodeAccelerator {
 public:
  explicit JpegDecodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(InitializeCallback callback) final;
  void Decode(BitstreamBufferPtr input_buffer, const ::blink::WebSize& coded_size, mojo::ScopedSharedBufferHandle output_handle, uint32_t output_buffer_size, DecodeCallback callback) final;
  void DecodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, DecodeWithFDCallback callback) final;
  void Uninitialize() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  JpegDecodeAcceleratorStubDispatch {
 public:
  static bool Accept(JpegDecodeAccelerator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      JpegDecodeAccelerator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<JpegDecodeAccelerator>>
class JpegDecodeAcceleratorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  JpegDecodeAcceleratorStub() {}
  ~JpegDecodeAcceleratorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return JpegDecodeAcceleratorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return JpegDecodeAcceleratorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  JpegDecodeAcceleratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  JpegDecodeAcceleratorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
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
      int32_t id,
      mojo::ScopedSharedBufferHandle memory_handle,
      uint32_t size,
      int64_t offset,
      WTF::TimeDelta timestamp,
      const WTF::String& key_id,
      const WTF::String& iv,
      WTF::Vector<::media::mojom::blink::SubsampleEntryPtr> subsamples);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BitstreamBuffer::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  int32_t id;
  mojo::ScopedSharedBufferHandle memory_handle;
  uint32_t size;
  int64_t offset;
  WTF::TimeDelta timestamp;
  WTF::String key_id;
  WTF::String iv;
  WTF::Vector<::media::mojom::blink::SubsampleEntryPtr> subsamples;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BitstreamBuffer);
};

template <typename StructPtrType>
BitstreamBufferPtr BitstreamBuffer::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(memory_handle),
      mojo::Clone(size),
      mojo::Clone(offset),
      mojo::Clone(timestamp),
      mojo::Clone(key_id),
      mojo::Clone(iv),
      mojo::Clone(subsamples)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BitstreamBuffer>::value>::type*>
bool BitstreamBuffer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->memory_handle, other_struct.memory_handle))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->key_id, other_struct.key_id))
    return false;
  if (!mojo::Equals(this->iv, other_struct.iv))
    return false;
  if (!mojo::Equals(this->subsamples, other_struct.subsamples))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::blink::BitstreamBuffer::DataView,
                                         ::media::mojom::blink::BitstreamBufferPtr> {
  static bool IsNull(const ::media::mojom::blink::BitstreamBufferPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::BitstreamBufferPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::BitstreamBuffer::id) id(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->id;
  }

  static  decltype(::media::mojom::blink::BitstreamBuffer::memory_handle)& memory_handle(
       ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->memory_handle;
  }

  static decltype(::media::mojom::blink::BitstreamBuffer::size) size(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->size;
  }

  static decltype(::media::mojom::blink::BitstreamBuffer::offset) offset(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->offset;
  }

  static const decltype(::media::mojom::blink::BitstreamBuffer::timestamp)& timestamp(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->timestamp;
  }

  static const decltype(::media::mojom::blink::BitstreamBuffer::key_id)& key_id(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->key_id;
  }

  static const decltype(::media::mojom::blink::BitstreamBuffer::iv)& iv(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->iv;
  }

  static const decltype(::media::mojom::blink::BitstreamBuffer::subsamples)& subsamples(
      const ::media::mojom::blink::BitstreamBufferPtr& input) {
    return input->subsamples;
  }

  static bool Read(::media::mojom::blink::BitstreamBuffer::DataView input, ::media::mojom::blink::BitstreamBufferPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_BLINK_H_