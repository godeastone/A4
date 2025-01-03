// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/autofill/content/common/autofill_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace autofill {
namespace mojom {

namespace internal {


// static
bool FormFieldData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FormFieldData_Data* object = static_cast<const FormFieldData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 144 }};

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
          object->label, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->label, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->form_control_type, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams form_control_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->form_control_type, validation_context,
                                         &form_control_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->autocomplete_attribute, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams autocomplete_attribute_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->autocomplete_attribute, validation_context,
                                         &autocomplete_attribute_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->placeholder, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->placeholder, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->css_classes, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->css_classes, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->section, 13, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams section_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->section, validation_context,
                                         &section_validate_params)) {
    return false;
  }


  if (!::autofill::mojom::internal::CheckStatus_Data
        ::Validate(object->check_status, validation_context))
    return false;


  if (!::autofill::mojom::internal::RoleAttribute_Data
        ::Validate(object->role, validation_context))
    return false;


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->text_direction, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->typed_value, 22, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->typed_value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->option_values, 23, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams option_values_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->option_values, validation_context,
                                         &option_values_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->option_contents, 24, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams option_contents_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->option_contents, validation_context,
                                         &option_contents_validate_params)) {
    return false;
  }


  if (!::autofill::mojom::internal::LabelSource_Data
        ::Validate(object->label_source, validation_context))
    return false;

  return true;
}

FormFieldData_Data::FormFieldData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FormData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FormData_Data* object = static_cast<const FormData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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
          object->name, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->action, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->action, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->main_frame_origin, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->main_frame_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fields, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fields_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fields, validation_context,
                                         &fields_validate_params)) {
    return false;
  }

  return true;
}

FormData_Data::FormData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FormFieldDataPredictions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FormFieldDataPredictions_Data* object = static_cast<const FormFieldDataPredictions_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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
          object->field, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signature, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams signature_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->signature, validation_context,
                                         &signature_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->heuristic_type, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams heuristic_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->heuristic_type, validation_context,
                                         &heuristic_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->server_type, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams server_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->server_type, validation_context,
                                         &server_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->overall_type, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams overall_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->overall_type, validation_context,
                                         &overall_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->parseable_name, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams parseable_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->parseable_name, validation_context,
                                         &parseable_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->section, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams section_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->section, validation_context,
                                         &section_validate_params)) {
    return false;
  }

  return true;
}

FormFieldDataPredictions_Data::FormFieldDataPredictions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FormDataPredictions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FormDataPredictions_Data* object = static_cast<const FormDataPredictions_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signature, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams signature_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->signature, validation_context,
                                         &signature_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fields, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fields_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fields, validation_context,
                                         &fields_validate_params)) {
    return false;
  }

  return true;
}

FormDataPredictions_Data::FormDataPredictions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordAndRealm_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordAndRealm_Data* object = static_cast<const PasswordAndRealm_Data*>(data);

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
          object->password, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->realm, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams realm_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->realm, validation_context,
                                         &realm_validate_params)) {
    return false;
  }

  return true;
}

PasswordAndRealm_Data::PasswordAndRealm_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordFormFillData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordFormFillData_Data* object = static_cast<const PasswordFormFillData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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
          object->name, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->action, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->action, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->username_field, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->username_field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->password_field, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->preferred_realm, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams preferred_realm_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->preferred_realm, validation_context,
                                         &preferred_realm_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->additional_logins, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams additional_logins_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->additional_logins, validation_context,
                                         &additional_logins_validate_params)) {
    return false;
  }

  return true;
}

PasswordFormFillData_Data::PasswordFormFillData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordFormGenerationData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordFormGenerationData_Data* object = static_cast<const PasswordFormGenerationData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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

  return true;
}

PasswordFormGenerationData_Data::PasswordFormGenerationData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ValueElementPair_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ValueElementPair_Data* object = static_cast<const ValueElementPair_Data*>(data);

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
          object->value, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->field_name, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field_name, validation_context))
    return false;

  return true;
}

ValueElementPair_Data::ValueElementPair_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordForm_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordForm_Data* object = static_cast<const PasswordForm_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 200 }};

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


  if (!::autofill::mojom::internal::PasswordFormScheme_Data
        ::Validate(object->scheme, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signon_realm, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams signon_realm_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->signon_realm, validation_context,
                                         &signon_realm_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin_with_path, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin_with_path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->action, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->action, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->affiliated_web_realm, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams affiliated_web_realm_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->affiliated_web_realm, validation_context,
                                         &affiliated_web_realm_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->submit_element, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->submit_element, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->username_element, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->username_element, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->username_value, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->username_value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->other_possible_usernames, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams other_possible_usernames_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->other_possible_usernames, validation_context,
                                         &other_possible_usernames_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->all_possible_passwords, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams all_possible_passwords_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->all_possible_passwords, validation_context,
                                         &all_possible_passwords_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->password_element, 13, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_element, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->password_value, 14, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_password_element, 16, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->new_password_element, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_password_value, 17, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->new_password_value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->confirmation_password_element, 20, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->confirmation_password_element, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->date_created, 22, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->date_created, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->date_synced, 23, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->date_synced, validation_context))
    return false;


  if (!::autofill::mojom::internal::PasswordFormType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->form_data, 27, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form_data, validation_context))
    return false;


  if (!::autofill::mojom::internal::GenerationUploadStatus_Data
        ::Validate(object->generation_upload_status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->display_name, 29, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->display_name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon_url, 30, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->icon_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->federation_origin, 31, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->federation_origin, validation_context))
    return false;


  if (!::autofill::mojom::internal::PasswordFormLayout_Data
        ::Validate(object->layout, validation_context))
    return false;


  if (!::autofill::mojom::internal::PasswordFormSubmissionIndicatorEvent_Data
        ::Validate(object->submission_event, validation_context))
    return false;

  return true;
}

PasswordForm_Data::PasswordForm_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordFormFieldPredictionMap_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordFormFieldPredictionMap_Data* object = static_cast<const PasswordFormFieldPredictionMap_Data*>(data);

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
          object->keys, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keys, validation_context,
                                         &keys_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->values, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, ::autofill::mojom::internal::PasswordFormFieldPredictionType_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->values, validation_context,
                                         &values_validate_params)) {
    return false;
  }

  return true;
}

PasswordFormFieldPredictionMap_Data::PasswordFormFieldPredictionMap_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FormsPredictionsMap_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FormsPredictionsMap_Data* object = static_cast<const FormsPredictionsMap_Data*>(data);

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
          object->keys, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keys, validation_context,
                                         &keys_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->values, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->values, validation_context,
                                         &values_validate_params)) {
    return false;
  }

  return true;
}

FormsPredictionsMap_Data::FormsPredictionsMap_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
