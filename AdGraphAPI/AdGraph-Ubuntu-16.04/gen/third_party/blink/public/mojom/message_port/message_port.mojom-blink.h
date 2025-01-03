// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGE_PORT_MESSAGE_PORT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGE_PORT_MESSAGE_PORT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"
#include "skia/public/interfaces/bitmap.mojom-blink.h"

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
#include "third_party/blink/renderer/core/messaging/blink_cloneable_message.h"
#include "third_party/blink/renderer/core/messaging/blink_transferable_message.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {
class CloneableMessage;
using CloneableMessagePtr = mojo::StructPtr<CloneableMessage>;

class TransferableMessage;
using TransferableMessagePtr = mojo::StructPtr<TransferableMessage>;







class CORE_EXPORT CloneableMessage {
 public:
  using DataView = CloneableMessageDataView;
  using Data_ = internal::CloneableMessage_Data;

  template <typename... Args>
  static CloneableMessagePtr New(Args&&... args) {
    return CloneableMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CloneableMessagePtr From(const U& u) {
    return mojo::TypeConverter<CloneableMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CloneableMessage>::Convert(*this);
  }


  CloneableMessage();

  CloneableMessage(
      mojo_base::BigBuffer encoded_message,
      const WTF::Vector<scoped_refptr<::blink::BlobDataHandle>>& blobs,
      uint64_t stack_trace_id,
      int64_t stack_trace_debugger_id_first,
      int64_t stack_trace_debugger_id_second);

  ~CloneableMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CloneableMessagePtr>
  CloneableMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CloneableMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CloneableMessage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CloneableMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CloneableMessage_UnserializedMessageContext<
            UserType, CloneableMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CloneableMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CloneableMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CloneableMessage_UnserializedMessageContext<
            UserType, CloneableMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CloneableMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  mojo_base::BigBuffer encoded_message;
  WTF::Vector<scoped_refptr<::blink::BlobDataHandle>> blobs;
  uint64_t stack_trace_id;
  int64_t stack_trace_debugger_id_first;
  int64_t stack_trace_debugger_id_second;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CloneableMessage);
};


class CORE_EXPORT TransferableMessage {
 public:
  using DataView = TransferableMessageDataView;
  using Data_ = internal::TransferableMessage_Data;

  template <typename... Args>
  static TransferableMessagePtr New(Args&&... args) {
    return TransferableMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TransferableMessagePtr From(const U& u) {
    return mojo::TypeConverter<TransferableMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TransferableMessage>::Convert(*this);
  }


  TransferableMessage();

  TransferableMessage(
      ::blink::BlinkCloneableMessage message,
      WTF::Vector<mojo::ScopedMessagePipeHandle> ports,
      WTF::Vector<WTF::ArrayBufferContents> array_buffer_contents_array,
      const WTF::Vector<SkBitmap>& image_bitmap_contents_array,
      bool has_user_gesture);

  ~TransferableMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TransferableMessagePtr>
  TransferableMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TransferableMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TransferableMessage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TransferableMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TransferableMessage_UnserializedMessageContext<
            UserType, TransferableMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TransferableMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TransferableMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TransferableMessage_UnserializedMessageContext<
            UserType, TransferableMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TransferableMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::blink::BlinkCloneableMessage message;
  WTF::Vector<mojo::ScopedMessagePipeHandle> ports;
  WTF::Vector<WTF::ArrayBufferContents> array_buffer_contents_array;
  WTF::Vector<SkBitmap> image_bitmap_contents_array;
  bool has_user_gesture;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TransferableMessage);
};

template <typename StructPtrType>
CloneableMessagePtr CloneableMessage::Clone() const {
  return New(
      mojo::Clone(encoded_message),
      mojo::Clone(blobs),
      mojo::Clone(stack_trace_id),
      mojo::Clone(stack_trace_debugger_id_first),
      mojo::Clone(stack_trace_debugger_id_second)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CloneableMessage>::value>::type*>
bool CloneableMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->encoded_message, other_struct.encoded_message))
    return false;
  if (!mojo::Equals(this->blobs, other_struct.blobs))
    return false;
  if (!mojo::Equals(this->stack_trace_id, other_struct.stack_trace_id))
    return false;
  if (!mojo::Equals(this->stack_trace_debugger_id_first, other_struct.stack_trace_debugger_id_first))
    return false;
  if (!mojo::Equals(this->stack_trace_debugger_id_second, other_struct.stack_trace_debugger_id_second))
    return false;
  return true;
}
template <typename StructPtrType>
TransferableMessagePtr TransferableMessage::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(ports),
      mojo::Clone(array_buffer_contents_array),
      mojo::Clone(image_bitmap_contents_array),
      mojo::Clone(has_user_gesture)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TransferableMessage>::value>::type*>
bool TransferableMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->ports, other_struct.ports))
    return false;
  if (!mojo::Equals(this->array_buffer_contents_array, other_struct.array_buffer_contents_array))
    return false;
  if (!mojo::Equals(this->image_bitmap_contents_array, other_struct.image_bitmap_contents_array))
    return false;
  if (!mojo::Equals(this->has_user_gesture, other_struct.has_user_gesture))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::CloneableMessage::DataView,
                                         ::blink::mojom::blink::CloneableMessagePtr> {
  static bool IsNull(const ::blink::mojom::blink::CloneableMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CloneableMessagePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::CloneableMessage::encoded_message)& encoded_message(
       ::blink::mojom::blink::CloneableMessagePtr& input) {
    return input->encoded_message;
  }

  static  decltype(::blink::mojom::blink::CloneableMessage::blobs)& blobs(
       ::blink::mojom::blink::CloneableMessagePtr& input) {
    return input->blobs;
  }

  static decltype(::blink::mojom::blink::CloneableMessage::stack_trace_id) stack_trace_id(
      const ::blink::mojom::blink::CloneableMessagePtr& input) {
    return input->stack_trace_id;
  }

  static decltype(::blink::mojom::blink::CloneableMessage::stack_trace_debugger_id_first) stack_trace_debugger_id_first(
      const ::blink::mojom::blink::CloneableMessagePtr& input) {
    return input->stack_trace_debugger_id_first;
  }

  static decltype(::blink::mojom::blink::CloneableMessage::stack_trace_debugger_id_second) stack_trace_debugger_id_second(
      const ::blink::mojom::blink::CloneableMessagePtr& input) {
    return input->stack_trace_debugger_id_second;
  }

  static bool Read(::blink::mojom::blink::CloneableMessage::DataView input, ::blink::mojom::blink::CloneableMessagePtr* output);
};


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::TransferableMessage::DataView,
                                         ::blink::mojom::blink::TransferableMessagePtr> {
  static bool IsNull(const ::blink::mojom::blink::TransferableMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::TransferableMessagePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::TransferableMessage::message)& message(
       ::blink::mojom::blink::TransferableMessagePtr& input) {
    return input->message;
  }

  static  decltype(::blink::mojom::blink::TransferableMessage::ports)& ports(
       ::blink::mojom::blink::TransferableMessagePtr& input) {
    return input->ports;
  }

  static  decltype(::blink::mojom::blink::TransferableMessage::array_buffer_contents_array)& array_buffer_contents_array(
       ::blink::mojom::blink::TransferableMessagePtr& input) {
    return input->array_buffer_contents_array;
  }

  static  decltype(::blink::mojom::blink::TransferableMessage::image_bitmap_contents_array)& image_bitmap_contents_array(
       ::blink::mojom::blink::TransferableMessagePtr& input) {
    return input->image_bitmap_contents_array;
  }

  static decltype(::blink::mojom::blink::TransferableMessage::has_user_gesture) has_user_gesture(
      const ::blink::mojom::blink::TransferableMessagePtr& input) {
    return input->has_user_gesture;
  }

  static bool Read(::blink::mojom::blink::TransferableMessage::DataView input, ::blink::mojom::blink::TransferableMessagePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGE_PORT_MESSAGE_PORT_MOJOM_BLINK_H_