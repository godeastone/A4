// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/ui/public/interfaces/input_devices/input_device_server.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace ui {
namespace mojom {

namespace internal {


// static
bool InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data* object = static_cast<const InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devices, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devices, validation_context,
                                         &devices_validate_params)) {
    return false;
  }

  return true;
}

InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data* object = static_cast<const InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devices, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devices, validation_context,
                                         &devices_validate_params)) {
    return false;
  }

  return true;
}

InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data* object = static_cast<const InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devices, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devices, validation_context,
                                         &devices_validate_params)) {
    return false;
  }

  return true;
}

InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data* object = static_cast<const InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devices, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devices, validation_context,
                                         &devices_validate_params)) {
    return false;
  }

  return true;
}

InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data* object = static_cast<const InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->keyboard_devices, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keyboard_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keyboard_devices, validation_context,
                                         &keyboard_devices_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->touchscreen_devices, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams touchscreen_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->touchscreen_devices, validation_context,
                                         &touchscreen_devices_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mouse_devices, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mouse_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mouse_devices, validation_context,
                                         &mouse_devices_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->touchpad_devices, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams touchpad_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->touchpad_devices, validation_context,
                                         &touchpad_devices_validate_params)) {
    return false;
  }

  return true;
}

InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InputDeviceObserverMojo_OnStylusStateChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceObserverMojo_OnStylusStateChanged_Params_Data* object = static_cast<const InputDeviceObserverMojo_OnStylusStateChanged_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }


  if (!::ui::mojom::internal::StylusState_Data
        ::Validate(object->state, validation_context))
    return false;

  return true;
}

InputDeviceObserverMojo_OnStylusStateChanged_Params_Data::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InputDeviceServer_AddObserver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InputDeviceServer_AddObserver_Params_Data* object = static_cast<const InputDeviceServer_AddObserver_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

InputDeviceServer_AddObserver_Params_Data::InputDeviceServer_AddObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
