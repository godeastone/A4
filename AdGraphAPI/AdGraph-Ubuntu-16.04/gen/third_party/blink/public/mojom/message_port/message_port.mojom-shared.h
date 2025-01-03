// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGE_PORT_MESSAGE_PORT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGE_PORT_MESSAGE_PORT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class CloneableMessageDataView;

class TransferableMessageDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::CloneableMessageDataView> {
  using Data = ::blink::mojom::internal::CloneableMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::TransferableMessageDataView> {
  using Data = ::blink::mojom::internal::TransferableMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class CloneableMessageDataView {
 public:
  CloneableMessageDataView() {}

  CloneableMessageDataView(
      internal::CloneableMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncodedMessageDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncodedMessage(UserType* output) {
    auto* pointer = !data_->encoded_message.is_null() ? &data_->encoded_message : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
  inline void GetBlobsDataView(
      mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobs(UserType* output) {
    auto* pointer = data_->blobs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>>(
        pointer, output, context_);
  }
  uint64_t stack_trace_id() const {
    return data_->stack_trace_id;
  }
  int64_t stack_trace_debugger_id_first() const {
    return data_->stack_trace_debugger_id_first;
  }
  int64_t stack_trace_debugger_id_second() const {
    return data_->stack_trace_debugger_id_second;
  }
 private:
  internal::CloneableMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TransferableMessageDataView {
 public:
  TransferableMessageDataView() {}

  TransferableMessageDataView(
      internal::TransferableMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      CloneableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::CloneableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetPortsDataView(
      mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPorts(UserType* output) {
    auto* pointer = data_->ports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
  inline void GetArrayBufferContentsArrayDataView(
      mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayBufferContentsArray(UserType* output) {
    auto* pointer = data_->array_buffer_contents_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>>(
        pointer, output, context_);
  }
  inline void GetImageBitmapContentsArrayDataView(
      mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageBitmapContentsArray(UserType* output) {
    auto* pointer = data_->image_bitmap_contents_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        pointer, output, context_);
  }
  bool has_user_gesture() const {
    return data_->has_user_gesture;
  }
 private:
  internal::TransferableMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CloneableMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CloneableMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CloneableMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::encoded_message, input, custom_context)) in_encoded_message = CallWithContext(Traits::encoded_message, input, custom_context);
    typename decltype((*output)->encoded_message)::BufferWriter encoded_message_writer;
    encoded_message_writer.AllocateInline(buffer, &(*output)->encoded_message);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_encoded_message, buffer, &encoded_message_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->encoded_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null encoded_message in CloneableMessage struct");
    decltype(CallWithContext(Traits::blobs, input, custom_context)) in_blobs = CallWithContext(Traits::blobs, input, custom_context);
    typename decltype((*output)->blobs)::BaseType::BufferWriter
        blobs_writer;
    const mojo::internal::ContainerValidateParams blobs_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>>(
        in_blobs, buffer, &blobs_writer, &blobs_validate_params,
        context);
    (*output)->blobs.Set(
        blobs_writer.is_null() ? nullptr : blobs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->blobs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null blobs in CloneableMessage struct");
    (*output)->stack_trace_id = CallWithContext(Traits::stack_trace_id, input, custom_context);
    (*output)->stack_trace_debugger_id_first = CallWithContext(Traits::stack_trace_debugger_id_first, input, custom_context);
    (*output)->stack_trace_debugger_id_second = CallWithContext(Traits::stack_trace_debugger_id_second, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::CloneableMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CloneableMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::TransferableMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::TransferableMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::TransferableMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<::blink::mojom::CloneableMessageDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in TransferableMessage struct");
    decltype(CallWithContext(Traits::ports, input, custom_context)) in_ports = CallWithContext(Traits::ports, input, custom_context);
    typename decltype((*output)->ports)::BaseType::BufferWriter
        ports_writer;
    const mojo::internal::ContainerValidateParams ports_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        in_ports, buffer, &ports_writer, &ports_validate_params,
        context);
    (*output)->ports.Set(
        ports_writer.is_null() ? nullptr : ports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ports in TransferableMessage struct");
    decltype(CallWithContext(Traits::array_buffer_contents_array, input, custom_context)) in_array_buffer_contents_array = CallWithContext(Traits::array_buffer_contents_array, input, custom_context);
    typename decltype((*output)->array_buffer_contents_array)::BaseType::BufferWriter
        array_buffer_contents_array_writer;
    const mojo::internal::ContainerValidateParams array_buffer_contents_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>>(
        in_array_buffer_contents_array, buffer, &array_buffer_contents_array_writer, &array_buffer_contents_array_validate_params,
        context);
    (*output)->array_buffer_contents_array.Set(
        array_buffer_contents_array_writer.is_null() ? nullptr : array_buffer_contents_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->array_buffer_contents_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null array_buffer_contents_array in TransferableMessage struct");
    decltype(CallWithContext(Traits::image_bitmap_contents_array, input, custom_context)) in_image_bitmap_contents_array = CallWithContext(Traits::image_bitmap_contents_array, input, custom_context);
    typename decltype((*output)->image_bitmap_contents_array)::BaseType::BufferWriter
        image_bitmap_contents_array_writer;
    const mojo::internal::ContainerValidateParams image_bitmap_contents_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        in_image_bitmap_contents_array, buffer, &image_bitmap_contents_array_writer, &image_bitmap_contents_array_validate_params,
        context);
    (*output)->image_bitmap_contents_array.Set(
        image_bitmap_contents_array_writer.is_null() ? nullptr : image_bitmap_contents_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_bitmap_contents_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_bitmap_contents_array in TransferableMessage struct");
    (*output)->has_user_gesture = CallWithContext(Traits::has_user_gesture, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::TransferableMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::TransferableMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void CloneableMessageDataView::GetEncodedMessageDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->encoded_message;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}
inline void CloneableMessageDataView::GetBlobsDataView(
    mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>* output) {
  auto pointer = data_->blobs.Get();
  *output = mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>(pointer, context_);
}


inline void TransferableMessageDataView::GetMessageDataView(
    CloneableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = CloneableMessageDataView(pointer, context_);
}
inline void TransferableMessageDataView::GetPortsDataView(
    mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->ports.Get();
  *output = mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>(pointer, context_);
}
inline void TransferableMessageDataView::GetArrayBufferContentsArrayDataView(
    mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>* output) {
  auto pointer = data_->array_buffer_contents_array.Get();
  *output = mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>(pointer, context_);
}
inline void TransferableMessageDataView::GetImageBitmapContentsArrayDataView(
    mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output) {
  auto pointer = data_->image_bitmap_contents_array.Get();
  *output = mojo::ArrayDataView<::skia::mojom::BitmapDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGE_PORT_MESSAGE_PORT_MOJOM_SHARED_H_
