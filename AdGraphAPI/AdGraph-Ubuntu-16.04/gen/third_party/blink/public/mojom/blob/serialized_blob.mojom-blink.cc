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

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"

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

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace blink {
namespace mojom {
namespace blink {
SerializedBlob::SerializedBlob()
    : uuid(),
      content_type(),
      size(),
      blob() {}

SerializedBlob::SerializedBlob(
    const WTF::String& uuid_in,
    const WTF::String& content_type_in,
    uint64_t size_in,
    ::blink::mojom::blink::BlobPtrInfo blob_in)
    : uuid(std::move(uuid_in)),
      content_type(std::move(content_type_in)),
      size(std::move(size_in)),
      blob(std::move(blob_in)) {}

SerializedBlob::~SerializedBlob() = default;

bool SerializedBlob::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SerializedBlob::DataView, ::blink::mojom::blink::SerializedBlobPtr>::Read(
    ::blink::mojom::blink::SerializedBlob::DataView input,
    ::blink::mojom::blink::SerializedBlobPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SerializedBlobPtr result(::blink::mojom::blink::SerializedBlob::New());
  
      if (!input.ReadUuid(&result->uuid))
        success = false;
      if (!input.ReadContentType(&result->content_type))
        success = false;
      result->size = input.size();
      result->blob =
          input.TakeBlob<decltype(result->blob)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif