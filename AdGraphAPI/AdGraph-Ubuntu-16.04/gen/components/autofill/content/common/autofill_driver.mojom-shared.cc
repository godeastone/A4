// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/autofill/content/common/autofill_driver.mojom-shared.h"

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
bool AutofillDriver_FormsSeen_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_FormsSeen_Params_Data* object = static_cast<const AutofillDriver_FormsSeen_Params_Data*>(data);

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
          object->forms, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->forms, validation_context,
                                         &forms_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  return true;
}

AutofillDriver_FormsSeen_Params_Data::AutofillDriver_FormsSeen_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_FormSubmitted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_FormSubmitted_Params_Data* object = static_cast<const AutofillDriver_FormSubmitted_Params_Data*>(data);

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;


  if (!::autofill::mojom::internal::SubmissionSource_Data
        ::Validate(object->source, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  return true;
}

AutofillDriver_FormSubmitted_Params_Data::AutofillDriver_FormSubmitted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_TextFieldDidChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_TextFieldDidChange_Params_Data* object = static_cast<const AutofillDriver_TextFieldDidChange_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->field, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  return true;
}

AutofillDriver_TextFieldDidChange_Params_Data::AutofillDriver_TextFieldDidChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_TextFieldDidScroll_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_TextFieldDidScroll_Params_Data* object = static_cast<const AutofillDriver_TextFieldDidScroll_Params_Data*>(data);

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->field, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box, validation_context))
    return false;

  return true;
}

AutofillDriver_TextFieldDidScroll_Params_Data::AutofillDriver_TextFieldDidScroll_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_SelectControlDidChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_SelectControlDidChange_Params_Data* object = static_cast<const AutofillDriver_SelectControlDidChange_Params_Data*>(data);

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->field, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box, validation_context))
    return false;

  return true;
}

AutofillDriver_SelectControlDidChange_Params_Data::AutofillDriver_SelectControlDidChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_SelectFieldOptionsDidChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_SelectFieldOptionsDidChange_Params_Data* object = static_cast<const AutofillDriver_SelectFieldOptionsDidChange_Params_Data*>(data);

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  return true;
}

AutofillDriver_SelectFieldOptionsDidChange_Params_Data::AutofillDriver_SelectFieldOptionsDidChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_QueryFormFieldAutofill_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_QueryFormFieldAutofill_Params_Data* object = static_cast<const AutofillDriver_QueryFormFieldAutofill_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->form, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->field, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box, validation_context))
    return false;

  return true;
}

AutofillDriver_QueryFormFieldAutofill_Params_Data::AutofillDriver_QueryFormFieldAutofill_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_HidePopup_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_HidePopup_Params_Data* object = static_cast<const AutofillDriver_HidePopup_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

AutofillDriver_HidePopup_Params_Data::AutofillDriver_HidePopup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_FocusNoLongerOnForm_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_FocusNoLongerOnForm_Params_Data* object = static_cast<const AutofillDriver_FocusNoLongerOnForm_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

AutofillDriver_FocusNoLongerOnForm_Params_Data::AutofillDriver_FocusNoLongerOnForm_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_FocusOnFormField_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_FocusOnFormField_Params_Data* object = static_cast<const AutofillDriver_FocusOnFormField_Params_Data*>(data);

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->field, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->field, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box, validation_context))
    return false;

  return true;
}

AutofillDriver_FocusOnFormField_Params_Data::AutofillDriver_FocusOnFormField_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_DidFillAutofillFormData_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_DidFillAutofillFormData_Params_Data* object = static_cast<const AutofillDriver_DidFillAutofillFormData_Params_Data*>(data);

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
          object->form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  return true;
}

AutofillDriver_DidFillAutofillFormData_Params_Data::AutofillDriver_DidFillAutofillFormData_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_DidPreviewAutofillFormData_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_DidPreviewAutofillFormData_Params_Data* object = static_cast<const AutofillDriver_DidPreviewAutofillFormData_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

AutofillDriver_DidPreviewAutofillFormData_Params_Data::AutofillDriver_DidPreviewAutofillFormData_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_DidEndTextFieldEditing_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_DidEndTextFieldEditing_Params_Data* object = static_cast<const AutofillDriver_DidEndTextFieldEditing_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

AutofillDriver_DidEndTextFieldEditing_Params_Data::AutofillDriver_DidEndTextFieldEditing_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AutofillDriver_SetDataList_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AutofillDriver_SetDataList_Params_Data* object = static_cast<const AutofillDriver_SetDataList_Params_Data*>(data);

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
          object->values, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->values, validation_context,
                                         &values_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->labels, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams labels_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->labels, validation_context,
                                         &labels_validate_params)) {
    return false;
  }

  return true;
}

AutofillDriver_SetDataList_Params_Data::AutofillDriver_SetDataList_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_PasswordFormsParsed_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_PasswordFormsParsed_Params_Data* object = static_cast<const PasswordManagerDriver_PasswordFormsParsed_Params_Data*>(data);

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
          object->forms, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->forms, validation_context,
                                         &forms_validate_params)) {
    return false;
  }

  return true;
}

PasswordManagerDriver_PasswordFormsParsed_Params_Data::PasswordManagerDriver_PasswordFormsParsed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_PasswordFormsRendered_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_PasswordFormsRendered_Params_Data* object = static_cast<const PasswordManagerDriver_PasswordFormsRendered_Params_Data*>(data);

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
          object->visible_forms, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams visible_forms_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->visible_forms, validation_context,
                                         &visible_forms_validate_params)) {
    return false;
  }

  return true;
}

PasswordManagerDriver_PasswordFormsRendered_Params_Data::PasswordManagerDriver_PasswordFormsRendered_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_PasswordFormSubmitted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_PasswordFormSubmitted_Params_Data* object = static_cast<const PasswordManagerDriver_PasswordFormSubmitted_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_PasswordFormSubmitted_Params_Data::PasswordManagerDriver_PasswordFormSubmitted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data* object = static_cast<const PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data::PasswordManagerDriver_ShowManualFallbackForSaving_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_HideManualFallbackForSaving_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_HideManualFallbackForSaving_Params_Data* object = static_cast<const PasswordManagerDriver_HideManualFallbackForSaving_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

PasswordManagerDriver_HideManualFallbackForSaving_Params_Data::PasswordManagerDriver_HideManualFallbackForSaving_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_SameDocumentNavigation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_SameDocumentNavigation_Params_Data* object = static_cast<const PasswordManagerDriver_SameDocumentNavigation_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_SameDocumentNavigation_Params_Data::PasswordManagerDriver_SameDocumentNavigation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_RecordSavePasswordProgress_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* object = static_cast<const PasswordManagerDriver_RecordSavePasswordProgress_Params_Data*>(data);

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
          object->log, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams log_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->log, validation_context,
                                         &log_validate_params)) {
    return false;
  }

  return true;
}

PasswordManagerDriver_RecordSavePasswordProgress_Params_Data::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_UserModifiedPasswordField_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_UserModifiedPasswordField_Params_Data* object = static_cast<const PasswordManagerDriver_UserModifiedPasswordField_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

PasswordManagerDriver_UserModifiedPasswordField_Params_Data::PasswordManagerDriver_UserModifiedPasswordField_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_ShowPasswordSuggestions_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* object = static_cast<const PasswordManagerDriver_ShowPasswordSuggestions_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->text_direction, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->typed_username, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->typed_username, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounds, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_ShowPasswordSuggestions_Params_Data::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data* object = static_cast<const PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data*>(data);

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


  if (!::mojo_base::mojom::internal::TextDirection_Data
        ::Validate(object->text_direction, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounds, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data::PasswordManagerDriver_ShowManualFallbackSuggestion_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_PresaveGeneratedPassword_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* object = static_cast<const PasswordManagerDriver_PresaveGeneratedPassword_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_PresaveGeneratedPassword_Params_Data::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* object = static_cast<const PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* object = static_cast<const PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->generation_field, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->generation_field, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data* object = static_cast<const PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data*>(data);

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
          object->form_action, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->form_action, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_url, validation_context))
    return false;

  return true;
}

PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data::PasswordManagerDriver_CheckSafeBrowsingReputation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerClient_GenerationAvailableForForm_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerClient_GenerationAvailableForForm_Params_Data* object = static_cast<const PasswordManagerClient_GenerationAvailableForForm_Params_Data*>(data);

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
          object->password_form, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerClient_GenerationAvailableForForm_Params_Data::PasswordManagerClient_GenerationAvailableForForm_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data* object = static_cast<const PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->bounds, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->generation_element, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->generation_element, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->password_form, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data::PasswordManagerClient_ShowPasswordGenerationPopup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerClient_ShowPasswordEditingPopup_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerClient_ShowPasswordEditingPopup_Params_Data* object = static_cast<const PasswordManagerClient_ShowPasswordEditingPopup_Params_Data*>(data);

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
          object->bounds, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->password_form, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->password_form, validation_context))
    return false;

  return true;
}

PasswordManagerClient_ShowPasswordEditingPopup_Params_Data::PasswordManagerClient_ShowPasswordEditingPopup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PasswordManagerClient_HidePasswordGenerationPopup_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PasswordManagerClient_HidePasswordGenerationPopup_Params_Data* object = static_cast<const PasswordManagerClient_HidePasswordGenerationPopup_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

PasswordManagerClient_HidePasswordGenerationPopup_Params_Data::PasswordManagerClient_HidePasswordGenerationPopup_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
