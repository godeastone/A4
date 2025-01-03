// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace content {
namespace mojom {

namespace internal {


// static
bool BackgroundFetchSettledFetch_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchSettledFetch_Data* object = static_cast<const BackgroundFetchSettledFetch_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  return true;
}

BackgroundFetchSettledFetch_Data::BackgroundFetchSettledFetch_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ExtendableMessageEvent_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ExtendableMessageEvent_Data* object = static_cast<const ExtendableMessageEvent_Data*>(data);

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
          object->message, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->message, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->source_origin, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->source_info_for_client, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->source_info_for_service_worker, validation_context))
    return false;

  return true;
}

ExtendableMessageEvent_Data::ExtendableMessageEvent_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data*>(data);

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
          object->service_worker_host, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->service_worker_host,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registration_info, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->registration_info, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data*>(data);

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

ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data*>(data);

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

ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data*>(data);

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
          object->developer_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->unique_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams unique_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->unique_id, validation_context,
                                         &unique_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fetches, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fetches, validation_context,
                                         &fetches_validate_params)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data*>(data);

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
          object->developer_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }


  if (!::content::mojom::internal::BackgroundFetchState_Data
        ::Validate(object->state, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data*>(data);

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
          object->developer_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->unique_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams unique_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->unique_id, validation_context,
                                         &unique_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fetches, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fetches, validation_context,
                                         &fetches_validate_params)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data*>(data);

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
          object->developer_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->unique_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams unique_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->unique_id, validation_context,
                                         &unique_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fetches, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fetches, validation_context,
                                         &fetches_validate_params)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data*>(data);

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
          object->cookie, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie, validation_context))
    return false;


  if (!::network::mojom::internal::CookieChangeCause_Data
        ::Validate(object->cause, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data*>(data);

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
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->response_callback, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->response_callback,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data*>(data);

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
          object->notification_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams notification_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->notification_id, validation_context,
                                         &notification_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->notification_data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->notification_data, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->reply, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data*>(data);

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
          object->notification_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams notification_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->notification_id, validation_context,
                                         &notification_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->notification_data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->notification_data, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data*>(data);

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
          object->payload, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->payload, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timeout, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timeout, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data*>(data);

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
          object->result_of_abort_payment, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->result_of_abort_payment,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data*>(data);

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
          object->event_data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->event_data, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->result_of_can_make_payment, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->result_of_can_make_payment,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data*>(data);

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
          object->request_data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request_data, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->response_callback, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->response_callback,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data*>(data);

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
          object->event, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->event, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ServiceWorkerEventStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dispatch_event_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dispatch_event_time, validation_context))
    return false;

  return true;
}

ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_Ping_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_Ping_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_Ping_Params_Data*>(data);

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

ServiceWorkerEventDispatcher_Ping_Params_Data::ServiceWorkerEventDispatcher_Ping_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_Ping_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_Ping_ResponseParams_Data* object = static_cast<const ServiceWorkerEventDispatcher_Ping_ResponseParams_Data*>(data);

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

ServiceWorkerEventDispatcher_Ping_ResponseParams_Data::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data* object = static_cast<const ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data*>(data);

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

ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
