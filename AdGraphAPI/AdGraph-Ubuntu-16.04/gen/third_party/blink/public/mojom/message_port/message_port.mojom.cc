// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/message_port/message_port.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/common/message_port/cloneable_message_struct_traits.h"
namespace blink {
namespace mojom {
CloneableMessage::CloneableMessage()
    : encoded_message(),
      blobs(),
      stack_trace_id(),
      stack_trace_debugger_id_first(),
      stack_trace_debugger_id_second() {}

CloneableMessage::CloneableMessage(
    mojo_base::BigBuffer encoded_message_in,
    std::vector<::blink::mojom::SerializedBlobPtr> blobs_in,
    uint64_t stack_trace_id_in,
    int64_t stack_trace_debugger_id_first_in,
    int64_t stack_trace_debugger_id_second_in)
    : encoded_message(std::move(encoded_message_in)),
      blobs(std::move(blobs_in)),
      stack_trace_id(std::move(stack_trace_id_in)),
      stack_trace_debugger_id_first(std::move(stack_trace_debugger_id_first_in)),
      stack_trace_debugger_id_second(std::move(stack_trace_debugger_id_second_in)) {}

CloneableMessage::~CloneableMessage() = default;

bool CloneableMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TransferableMessage::TransferableMessage()
    : message(),
      ports(),
      array_buffer_contents_array(),
      image_bitmap_contents_array(),
      has_user_gesture() {}

TransferableMessage::TransferableMessage(
    ::blink::CloneableMessage message_in,
    std::vector<mojo::ScopedMessagePipeHandle> ports_in,
    std::vector<::blink::mojom::SerializedArrayBufferContentsPtr> array_buffer_contents_array_in,
    const std::vector<SkBitmap>& image_bitmap_contents_array_in,
    bool has_user_gesture_in)
    : message(std::move(message_in)),
      ports(std::move(ports_in)),
      array_buffer_contents_array(std::move(array_buffer_contents_array_in)),
      image_bitmap_contents_array(std::move(image_bitmap_contents_array_in)),
      has_user_gesture(std::move(has_user_gesture_in)) {}

TransferableMessage::~TransferableMessage() = default;

bool TransferableMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::CloneableMessage::DataView, ::blink::mojom::CloneableMessagePtr>::Read(
    ::blink::mojom::CloneableMessage::DataView input,
    ::blink::mojom::CloneableMessagePtr* output) {
  bool success = true;
  ::blink::mojom::CloneableMessagePtr result(::blink::mojom::CloneableMessage::New());
  
      if (!input.ReadEncodedMessage(&result->encoded_message))
        success = false;
      if (!input.ReadBlobs(&result->blobs))
        success = false;
      result->stack_trace_id = input.stack_trace_id();
      result->stack_trace_debugger_id_first = input.stack_trace_debugger_id_first();
      result->stack_trace_debugger_id_second = input.stack_trace_debugger_id_second();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::TransferableMessage::DataView, ::blink::mojom::TransferableMessagePtr>::Read(
    ::blink::mojom::TransferableMessage::DataView input,
    ::blink::mojom::TransferableMessagePtr* output) {
  bool success = true;
  ::blink::mojom::TransferableMessagePtr result(::blink::mojom::TransferableMessage::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadPorts(&result->ports))
        success = false;
      if (!input.ReadArrayBufferContentsArray(&result->array_buffer_contents_array))
        success = false;
      if (!input.ReadImageBitmapContentsArray(&result->image_bitmap_contents_array))
        success = false;
      result->has_user_gesture = input.has_user_gesture();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif