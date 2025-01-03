// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "chrome/common/media_router/mojo/media_router.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace media_router {
namespace mojom {

namespace internal {
// static
bool MediaSinkExtraData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const MediaSinkExtraData_Data* object = static_cast<const MediaSinkExtraData_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case MediaSinkExtraData_Tag::DIAL_MEDIA_SINK: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_dial_media_sink, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_dial_media_sink, validation_context))
        return false;
      return true;
    }
    case MediaSinkExtraData_Tag::CAST_MEDIA_SINK: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_cast_media_sink, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_cast_media_sink, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in MediaSinkExtraData");
      return false;
    }
  }
}


// static
bool MediaSink_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaSink_Data* object = static_cast<const MediaSink_Data*>(data);

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
          object->sink_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->description, validation_context,
                                         &description_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams domain_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->domain, validation_context,
                                         &domain_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::SinkIconType_Data
        ::Validate(object->icon_type, validation_context))
    return false;


  if (!::media_router::mojom::internal::MediaRouteProvider_Id_Data
        ::Validate(object->provider_id, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnion(object->extra_data, validation_context))
    return false;

  return true;
}

MediaSink_Data::MediaSink_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DialMediaSink_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DialMediaSink_Data* object = static_cast<const DialMediaSink_Data*>(data);

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
          object->ip_address, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ip_address, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->model_name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams model_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->model_name, validation_context,
                                         &model_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->app_url, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->app_url, validation_context))
    return false;

  return true;
}

DialMediaSink_Data::DialMediaSink_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CastMediaSink_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CastMediaSink_Data* object = static_cast<const CastMediaSink_Data*>(data);

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
          object->ip_endpoint, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ip_endpoint, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->model_name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams model_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->model_name, validation_context,
                                         &model_name_validate_params)) {
    return false;
  }

  return true;
}

CastMediaSink_Data::CastMediaSink_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRoute_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRoute_Data* object = static_cast<const MediaRoute_Data*>(data);

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
          object->media_route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_route_id, validation_context,
                                         &media_route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_id, validation_context,
                                         &presentation_id_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_sink_id, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_sink_id, validation_context,
                                         &media_sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->description, validation_context,
                                         &description_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::RouteControllerType_Data
        ::Validate(object->controller_type, validation_context))
    return false;

  return true;
}

MediaRoute_Data::MediaRoute_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Issue_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Issue_Data* object = static_cast<const Issue_Data*>(data);

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

  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::Issue_Severity_Data
        ::Validate(object->severity, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::Issue_ActionType_Data
        ::Validate(object->default_action, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->secondary_actions, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams secondary_actions_validate_params(
      0, ::media_router::mojom::internal::Issue_ActionType_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->secondary_actions, validation_context,
                                         &secondary_actions_validate_params)) {
    return false;
  }

  return true;
}

Issue_Data::Issue_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RouteMessage_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RouteMessage_Data* object = static_cast<const RouteMessage_Data*>(data);

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


  if (!::media_router::mojom::internal::RouteMessage_Type_Data
        ::Validate(object->type, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

RouteMessage_Data::RouteMessage_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SinkSearchCriteria_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SinkSearchCriteria_Data* object = static_cast<const SinkSearchCriteria_Data*>(data);

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
          object->input, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams input_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->input, validation_context,
                                         &input_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->domain, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams domain_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->domain, validation_context,
                                         &domain_validate_params)) {
    return false;
  }

  return true;
}

SinkSearchCriteria_Data::SinkSearchCriteria_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProviderConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProviderConfig_Data* object = static_cast<const MediaRouteProviderConfig_Data*>(data);

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

MediaRouteProviderConfig_Data::MediaRouteProviderConfig_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_CreateRoute_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_CreateRoute_Params_Data* object = static_cast<const MediaRouteProvider_CreateRoute_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sink_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_presentation_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams original_presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->original_presentation_id, validation_context,
                                         &original_presentation_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timeout, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timeout, validation_context))
    return false;

  return true;
}

MediaRouteProvider_CreateRoute_Params_Data::MediaRouteProvider_CreateRoute_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_CreateRoute_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_CreateRoute_ResponseParams_Data* object = static_cast<const MediaRouteProvider_CreateRoute_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->route, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_text, validation_context,
                                         &error_text_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::RouteRequestResultCode_Data
        ::Validate(object->result_code, validation_context))
    return false;

  return true;
}

MediaRouteProvider_CreateRoute_ResponseParams_Data::MediaRouteProvider_CreateRoute_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_JoinRoute_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_JoinRoute_Params_Data* object = static_cast<const MediaRouteProvider_JoinRoute_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_id, validation_context,
                                         &presentation_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timeout, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timeout, validation_context))
    return false;

  return true;
}

MediaRouteProvider_JoinRoute_Params_Data::MediaRouteProvider_JoinRoute_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_JoinRoute_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_JoinRoute_ResponseParams_Data* object = static_cast<const MediaRouteProvider_JoinRoute_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->route, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_text, validation_context,
                                         &error_text_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::RouteRequestResultCode_Data
        ::Validate(object->result_code, validation_context))
    return false;

  return true;
}

MediaRouteProvider_JoinRoute_ResponseParams_Data::MediaRouteProvider_JoinRoute_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_ConnectRouteByRouteId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ConnectRouteByRouteId_Params_Data* object = static_cast<const MediaRouteProvider_ConnectRouteByRouteId_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->route_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_id, validation_context,
                                         &presentation_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timeout, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timeout, validation_context))
    return false;

  return true;
}

MediaRouteProvider_ConnectRouteByRouteId_Params_Data::MediaRouteProvider_ConnectRouteByRouteId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* object = static_cast<const MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->route, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_text, validation_context,
                                         &error_text_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::RouteRequestResultCode_Data
        ::Validate(object->result_code, validation_context))
    return false;

  return true;
}

MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_TerminateRoute_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_TerminateRoute_Params_Data* object = static_cast<const MediaRouteProvider_TerminateRoute_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_TerminateRoute_Params_Data::MediaRouteProvider_TerminateRoute_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_TerminateRoute_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_TerminateRoute_ResponseParams_Data* object = static_cast<const MediaRouteProvider_TerminateRoute_ResponseParams_Data*>(data);

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

  const mojo::internal::ContainerValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_text, validation_context,
                                         &error_text_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::RouteRequestResultCode_Data
        ::Validate(object->result_code, validation_context))
    return false;

  return true;
}

MediaRouteProvider_TerminateRoute_ResponseParams_Data::MediaRouteProvider_TerminateRoute_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_SendRouteMessage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteMessage_Params_Data* object = static_cast<const MediaRouteProvider_SendRouteMessage_Params_Data*>(data);

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
          object->media_route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_route_id, validation_context,
                                         &media_route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_SendRouteMessage_Params_Data::MediaRouteProvider_SendRouteMessage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_SendRouteMessage_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteMessage_ResponseParams_Data* object = static_cast<const MediaRouteProvider_SendRouteMessage_ResponseParams_Data*>(data);

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

MediaRouteProvider_SendRouteMessage_ResponseParams_Data::MediaRouteProvider_SendRouteMessage_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_SendRouteBinaryMessage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteBinaryMessage_Params_Data* object = static_cast<const MediaRouteProvider_SendRouteBinaryMessage_Params_Data*>(data);

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
          object->media_route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_route_id, validation_context,
                                         &media_route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_SendRouteBinaryMessage_Params_Data::MediaRouteProvider_SendRouteBinaryMessage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* object = static_cast<const MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data*>(data);

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

MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_StartObservingMediaSinks_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StartObservingMediaSinks_Params_Data* object = static_cast<const MediaRouteProvider_StartObservingMediaSinks_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_StartObservingMediaSinks_Params_Data::MediaRouteProvider_StartObservingMediaSinks_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_StopObservingMediaSinks_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StopObservingMediaSinks_Params_Data* object = static_cast<const MediaRouteProvider_StopObservingMediaSinks_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_StopObservingMediaSinks_Params_Data::MediaRouteProvider_StopObservingMediaSinks_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_StartObservingMediaRoutes_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StartObservingMediaRoutes_Params_Data* object = static_cast<const MediaRouteProvider_StartObservingMediaRoutes_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_StartObservingMediaRoutes_Params_Data::MediaRouteProvider_StartObservingMediaRoutes_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_StopObservingMediaRoutes_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StopObservingMediaRoutes_Params_Data* object = static_cast<const MediaRouteProvider_StopObservingMediaRoutes_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_StopObservingMediaRoutes_Params_Data::MediaRouteProvider_StopObservingMediaRoutes_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_StartListeningForRouteMessages_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StartListeningForRouteMessages_Params_Data* object = static_cast<const MediaRouteProvider_StartListeningForRouteMessages_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_StartListeningForRouteMessages_Params_Data::MediaRouteProvider_StartListeningForRouteMessages_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_StopListeningForRouteMessages_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StopListeningForRouteMessages_Params_Data* object = static_cast<const MediaRouteProvider_StopListeningForRouteMessages_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_StopListeningForRouteMessages_Params_Data::MediaRouteProvider_StopListeningForRouteMessages_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_DetachRoute_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_DetachRoute_Params_Data* object = static_cast<const MediaRouteProvider_DetachRoute_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_DetachRoute_Params_Data::MediaRouteProvider_DetachRoute_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_EnableMdnsDiscovery_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_EnableMdnsDiscovery_Params_Data* object = static_cast<const MediaRouteProvider_EnableMdnsDiscovery_Params_Data*>(data);

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

MediaRouteProvider_EnableMdnsDiscovery_Params_Data::MediaRouteProvider_EnableMdnsDiscovery_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_UpdateMediaSinks_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_UpdateMediaSinks_Params_Data* object = static_cast<const MediaRouteProvider_UpdateMediaSinks_Params_Data*>(data);

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
          object->media_source, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_UpdateMediaSinks_Params_Data::MediaRouteProvider_UpdateMediaSinks_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_SearchSinks_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SearchSinks_Params_Data* object = static_cast<const MediaRouteProvider_SearchSinks_Params_Data*>(data);

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
          object->sink_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->search_criteria, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->search_criteria, validation_context))
    return false;

  return true;
}

MediaRouteProvider_SearchSinks_Params_Data::MediaRouteProvider_SearchSinks_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_SearchSinks_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SearchSinks_ResponseParams_Data* object = static_cast<const MediaRouteProvider_SearchSinks_ResponseParams_Data*>(data);

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
          object->sink_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sink_id, validation_context,
                                         &sink_id_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_SearchSinks_ResponseParams_Data::MediaRouteProvider_SearchSinks_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_ProvideSinks_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ProvideSinks_Params_Data* object = static_cast<const MediaRouteProvider_ProvideSinks_Params_Data*>(data);

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
          object->provider_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams provider_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->provider_name, validation_context,
                                         &provider_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sinks, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sinks_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sinks, validation_context,
                                         &sinks_validate_params)) {
    return false;
  }

  return true;
}

MediaRouteProvider_ProvideSinks_Params_Data::MediaRouteProvider_ProvideSinks_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_CreateMediaRouteController_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_CreateMediaRouteController_Params_Data* object = static_cast<const MediaRouteProvider_CreateMediaRouteController_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->media_controller, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->media_controller,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaRouteProvider_CreateMediaRouteController_Params_Data::MediaRouteProvider_CreateMediaRouteController_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data* object = static_cast<const MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data*>(data);

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

MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data::MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_RegisterMediaRouteProvider_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_RegisterMediaRouteProvider_Params_Data* object = static_cast<const MediaRouter_RegisterMediaRouteProvider_Params_Data*>(data);

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


  if (!::media_router::mojom::internal::MediaRouteProvider_Id_Data
        ::Validate(object->provider_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->media_router_provider, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->media_router_provider,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaRouter_RegisterMediaRouteProvider_Params_Data::MediaRouter_RegisterMediaRouteProvider_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* object = static_cast<const MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data*>(data);

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
          object->instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instance_id, validation_context,
                                         &instance_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->config, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->config, validation_context))
    return false;

  return true;
}

MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnSinksReceived_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnSinksReceived_Params_Data* object = static_cast<const MediaRouter_OnSinksReceived_Params_Data*>(data);

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


  if (!::media_router::mojom::internal::MediaRouteProvider_Id_Data
        ::Validate(object->provider_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sinks, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sinks_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sinks, validation_context,
                                         &sinks_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origins, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams origins_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->origins, validation_context,
                                         &origins_validate_params)) {
    return false;
  }

  return true;
}

MediaRouter_OnSinksReceived_Params_Data::MediaRouter_OnSinksReceived_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnIssue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnIssue_Params_Data* object = static_cast<const MediaRouter_OnIssue_Params_Data*>(data);

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
          object->issue, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->issue, validation_context))
    return false;

  return true;
}

MediaRouter_OnIssue_Params_Data::MediaRouter_OnIssue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnRoutesUpdated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnRoutesUpdated_Params_Data* object = static_cast<const MediaRouter_OnRoutesUpdated_Params_Data*>(data);

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


  if (!::media_router::mojom::internal::MediaRouteProvider_Id_Data
        ::Validate(object->provider_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->routes, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams routes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->routes, validation_context,
                                         &routes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->media_source, validation_context,
                                         &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->joinable_route_ids, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams joinable_route_ids_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->joinable_route_ids, validation_context,
                                         &joinable_route_ids_validate_params)) {
    return false;
  }

  return true;
}

MediaRouter_OnRoutesUpdated_Params_Data::MediaRouter_OnRoutesUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnSinkAvailabilityUpdated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnSinkAvailabilityUpdated_Params_Data* object = static_cast<const MediaRouter_OnSinkAvailabilityUpdated_Params_Data*>(data);

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


  if (!::media_router::mojom::internal::MediaRouteProvider_Id_Data
        ::Validate(object->provider_id, validation_context))
    return false;


  if (!::media_router::mojom::internal::MediaRouter_SinkAvailability_Data
        ::Validate(object->availability, validation_context))
    return false;

  return true;
}

MediaRouter_OnSinkAvailabilityUpdated_Params_Data::MediaRouter_OnSinkAvailabilityUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnPresentationConnectionStateChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnPresentationConnectionStateChanged_Params_Data* object = static_cast<const MediaRouter_OnPresentationConnectionStateChanged_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::MediaRouter_PresentationConnectionState_Data
        ::Validate(object->state, validation_context))
    return false;

  return true;
}

MediaRouter_OnPresentationConnectionStateChanged_Params_Data::MediaRouter_OnPresentationConnectionStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnPresentationConnectionClosed_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnPresentationConnectionClosed_Params_Data* object = static_cast<const MediaRouter_OnPresentationConnectionClosed_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }


  if (!::media_router::mojom::internal::MediaRouter_PresentationConnectionCloseReason_Data
        ::Validate(object->reason, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

MediaRouter_OnPresentationConnectionClosed_Params_Data::MediaRouter_OnPresentationConnectionClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnRouteMessagesReceived_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnRouteMessagesReceived_Params_Data* object = static_cast<const MediaRouter_OnRouteMessagesReceived_Params_Data*>(data);

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
          object->route_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->route_id, validation_context,
                                         &route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->messages, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams messages_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->messages, validation_context,
                                         &messages_validate_params)) {
    return false;
  }

  return true;
}

MediaRouter_OnRouteMessagesReceived_Params_Data::MediaRouter_OnRouteMessagesReceived_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_OnMediaRemoterCreated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnMediaRemoterCreated_Params_Data* object = static_cast<const MediaRouter_OnMediaRemoterCreated_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->remoter, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->remoter,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->remoting_source, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->remoting_source,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaRouter_OnMediaRemoterCreated_Params_Data::MediaRouter_OnMediaRemoterCreated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_GetMediaSinkServiceStatus_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_GetMediaSinkServiceStatus_Params_Data* object = static_cast<const MediaRouter_GetMediaSinkServiceStatus_Params_Data*>(data);

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

MediaRouter_GetMediaSinkServiceStatus_Params_Data::MediaRouter_GetMediaSinkServiceStatus_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data* object = static_cast<const MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data*>(data);

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
          object->status, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams status_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->status, validation_context,
                                         &status_validate_params)) {
    return false;
  }

  return true;
}

MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data::MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
