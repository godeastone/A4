// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "chrome/common/page_load_metrics/page_load_metrics.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace page_load_metrics {
namespace mojom {

namespace internal {


// static
bool DocumentTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentTiming_Data* object = static_cast<const DocumentTiming_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->dom_content_loaded_event_start, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->load_event_start, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_layout, validation_context))
    return false;

  return true;
}

DocumentTiming_Data::DocumentTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaintTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaintTiming_Data* object = static_cast<const PaintTiming_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->first_paint, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_text_paint, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_image_paint, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_contentful_paint, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_meaningful_paint, validation_context))
    return false;

  return true;
}

PaintTiming_Data::PaintTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ParseTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ParseTiming_Data* object = static_cast<const ParseTiming_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->parse_start, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->parse_stop, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->parse_blocked_on_script_load_duration, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->parse_blocked_on_script_load_from_document_write_duration, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->parse_blocked_on_script_execution_duration, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->parse_blocked_on_script_execution_from_document_write_duration, validation_context))
    return false;

  return true;
}

ParseTiming_Data::ParseTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StyleSheetTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StyleSheetTiming_Data* object = static_cast<const StyleSheetTiming_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->author_style_sheet_parse_duration_before_fcp, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->update_style_duration_before_fcp, validation_context))
    return false;

  return true;
}

StyleSheetTiming_Data::StyleSheetTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool InteractiveTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InteractiveTiming_Data* object = static_cast<const InteractiveTiming_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->interactive, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->interactive_detection, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_invalidating_input, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_input_delay, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->first_input_timestamp, validation_context))
    return false;

  return true;
}

InteractiveTiming_Data::InteractiveTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageLoadTiming_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PageLoadTiming_Data* object = static_cast<const PageLoadTiming_Data*>(data);

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
          object->navigation_start, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->navigation_start, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->response_start, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->document_timing, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->document_timing, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->interactive_timing, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->interactive_timing, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->paint_timing, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->paint_timing, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->parse_timing, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parse_timing, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->style_sheet_timing, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->style_sheet_timing, validation_context))
    return false;

  return true;
}

PageLoadTiming_Data::PageLoadTiming_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageLoadMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PageLoadMetadata_Data* object = static_cast<const PageLoadMetadata_Data*>(data);

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

  return true;
}

PageLoadMetadata_Data::PageLoadMetadata_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageLoadFeatures_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PageLoadFeatures_Data* object = static_cast<const PageLoadFeatures_Data*>(data);

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
          object->features, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams features_validate_params(
      0, ::blink::mojom::internal::WebFeature_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->features, validation_context,
                                         &features_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->css_properties, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams css_properties_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->css_properties, validation_context,
                                         &css_properties_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->animated_css_properties, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams animated_css_properties_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->animated_css_properties, validation_context,
                                         &animated_css_properties_validate_params)) {
    return false;
  }

  return true;
}

PageLoadFeatures_Data::PageLoadFeatures_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PageLoadMetrics_UpdateTiming_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PageLoadMetrics_UpdateTiming_Params_Data* object = static_cast<const PageLoadMetrics_UpdateTiming_Params_Data*>(data);

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
          object->page_load_timing, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->page_load_timing, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->page_load_metadata, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->page_load_metadata, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_features, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->new_features, validation_context))
    return false;

  return true;
}

PageLoadMetrics_UpdateTiming_Params_Data::PageLoadMetrics_UpdateTiming_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace page_load_metrics

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
