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

#include "services/video_capture/public/mojom/scoped_access_permission.mojom.h"

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

#include "services/video_capture/public/mojom/scoped_access_permission.mojom-shared-message-ids.h"
namespace video_capture {
namespace mojom {
const char ScopedAccessPermission::Name_[] = "video_capture.mojom.ScopedAccessPermission";

ScopedAccessPermissionProxy::ScopedAccessPermissionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool ScopedAccessPermissionStubDispatch::Accept(
    ScopedAccessPermission* impl,
    mojo::Message* message) {
  return false;
}

// static
bool ScopedAccessPermissionStubDispatch::AcceptWithResponder(
    ScopedAccessPermission* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool ScopedAccessPermissionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScopedAccessPermission RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

ScopedAccessPermissionAsyncWaiter::ScopedAccessPermissionAsyncWaiter(
    ScopedAccessPermission* proxy) : proxy_(proxy) {}

ScopedAccessPermissionAsyncWaiter::~ScopedAccessPermissionAsyncWaiter() = default;


}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif