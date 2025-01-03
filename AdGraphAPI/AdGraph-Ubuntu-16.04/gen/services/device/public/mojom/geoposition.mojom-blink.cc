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

#include "services/device/public/mojom/geoposition.mojom-blink.h"

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

#include "services/device/public/mojom/geoposition.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace device {
namespace mojom {
namespace blink {
Geoposition::Geoposition()
    : valid(),
      latitude(kBadLatitudeLongitude),
      longitude(kBadLatitudeLongitude),
      altitude(kBadAltitude),
      accuracy(kBadAccuracy),
      altitude_accuracy(kBadAccuracy),
      heading(kBadHeading),
      speed(kBadSpeed),
      timestamp(),
      error_code(Geoposition_ErrorCode::NONE),
      error_message() {}

Geoposition::Geoposition(
    bool valid_in,
    double latitude_in,
    double longitude_in,
    double altitude_in,
    double accuracy_in,
    double altitude_accuracy_in,
    double heading_in,
    double speed_in,
    WTF::Time timestamp_in,
    Geoposition::ErrorCode error_code_in,
    const WTF::String& error_message_in)
    : valid(std::move(valid_in)),
      latitude(std::move(latitude_in)),
      longitude(std::move(longitude_in)),
      altitude(std::move(altitude_in)),
      accuracy(std::move(accuracy_in)),
      altitude_accuracy(std::move(altitude_accuracy_in)),
      heading(std::move(heading_in)),
      speed(std::move(speed_in)),
      timestamp(std::move(timestamp_in)),
      error_code(std::move(error_code_in)),
      error_message(std::move(error_message_in)) {}

Geoposition::~Geoposition() = default;

bool Geoposition::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::Geoposition::DataView, ::device::mojom::blink::GeopositionPtr>::Read(
    ::device::mojom::blink::Geoposition::DataView input,
    ::device::mojom::blink::GeopositionPtr* output) {
  bool success = true;
  ::device::mojom::blink::GeopositionPtr result(::device::mojom::blink::Geoposition::New());
  
      result->valid = input.valid();
      result->latitude = input.latitude();
      result->longitude = input.longitude();
      result->altitude = input.altitude();
      result->accuracy = input.accuracy();
      result->altitude_accuracy = input.altitude_accuracy();
      result->heading = input.heading();
      result->speed = input.speed();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadErrorCode(&result->error_code))
        success = false;
      if (!input.ReadErrorMessage(&result->error_message))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif