// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/preferences/public/mojom/preferences.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace prefs {
namespace mojom {

namespace internal {
// static
bool PrefUpdateValue_Data::Validate(
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

  const PrefUpdateValue_Data* object = static_cast<const PrefUpdateValue_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case PrefUpdateValue_Tag::SPLIT_UPDATES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_split_updates, 1, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams split_updates_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_split_updates, validation_context,
                                             &split_updates_validate_params)) {
        return false;
      }
      return true;
    }
    case PrefUpdateValue_Tag::ATOMIC_UPDATE: {

      if (!mojo::internal::ValidateNonInlinedUnion(object->data.f_atomic_update,
                                                   validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in PrefUpdateValue");
      return false;
    }
  }
}


// static
bool PrefStoreConnection_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefStoreConnection_Data* object = static_cast<const PrefStoreConnection_Data*>(data);

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
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->initial_prefs, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->initial_prefs, validation_context))
    return false;

  return true;
}

PrefStoreConnection_Data::PrefStoreConnection_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStoreConnection_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStoreConnection_Data* object = static_cast<const PersistentPrefStoreConnection_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->pref_store_connection, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->pref_store,
                                                 validation_context)) {
    return false;
  }


  if (!::prefs::mojom::internal::PersistentPrefStoreConnection_ReadError_Data
        ::Validate(object->read_error, validation_context))
    return false;

  return true;
}

PersistentPrefStoreConnection_Data::PersistentPrefStoreConnection_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IncognitoPersistentPrefStoreConnection_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IncognitoPersistentPrefStoreConnection_Data* object = static_cast<const IncognitoPersistentPrefStoreConnection_Data*>(data);

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
          object->pref_store_connection, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pref_store_connection, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->overlay_pref_names, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams overlay_pref_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->overlay_pref_names, validation_context,
                                         &overlay_pref_names_validate_params)) {
    return false;
  }

  return true;
}

IncognitoPersistentPrefStoreConnection_Data::IncognitoPersistentPrefStoreConnection_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SubPrefUpdate_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SubPrefUpdate_Data* object = static_cast<const SubPrefUpdate_Data*>(data);

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
          object->path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnion(object->value, validation_context))
    return false;

  return true;
}

SubPrefUpdate_Data::SubPrefUpdate_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefUpdate_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefUpdate_Data* object = static_cast<const PrefUpdate_Data*>(data);

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
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->value, validation_context))
    return false;

  return true;
}

PrefUpdate_Data::PrefUpdate_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefRegistry_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefRegistry_Data* object = static_cast<const PrefRegistry_Data*>(data);

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
          object->private_registrations, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams private_registrations_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->private_registrations, validation_context,
                                         &private_registrations_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->foreign_registrations, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams foreign_registrations_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->foreign_registrations, validation_context,
                                         &foreign_registrations_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->public_registrations, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams public_registrations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->public_registrations, validation_context,
                                         &public_registrations_validate_params)) {
    return false;
  }

  return true;
}

PrefRegistry_Data::PrefRegistry_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefRegistration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefRegistration_Data* object = static_cast<const PrefRegistration_Data*>(data);

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
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->default_value, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->default_value, validation_context))
    return false;

  return true;
}

PrefRegistration_Data::PrefRegistration_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrackedPersistentPrefStoreConfiguration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TrackedPersistentPrefStoreConfiguration_Data* object = static_cast<const TrackedPersistentPrefStoreConfiguration_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 88 }};

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
          object->unprotected_pref_filename, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->unprotected_pref_filename, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->protected_pref_filename, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->protected_pref_filename, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->tracking_configuration, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tracking_configuration_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tracking_configuration, validation_context,
                                         &tracking_configuration_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->seed, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams seed_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->seed, validation_context,
                                         &seed_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->legacy_device_id, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams legacy_device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->legacy_device_id, validation_context,
                                         &legacy_device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registry_seed, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams registry_seed_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->registry_seed, validation_context,
                                         &registry_seed_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registry_path, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->registry_path, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->validation_delegate,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->reset_on_load_observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

TrackedPersistentPrefStoreConfiguration_Data::TrackedPersistentPrefStoreConfiguration_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrackedPreferenceMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TrackedPreferenceMetadata_Data* object = static_cast<const TrackedPreferenceMetadata_Data*>(data);

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
          object->name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }


  if (!::prefs::mojom::internal::TrackedPreferenceMetadata_EnforcementLevel_Data
        ::Validate(object->enforcement_level, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceMetadata_PrefTrackingStrategy_Data
        ::Validate(object->strategy, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceMetadata_ValueType_Data
        ::Validate(object->value_type, validation_context))
    return false;

  return true;
}

TrackedPreferenceMetadata_Data::TrackedPreferenceMetadata_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefStoreObserver_OnPrefsChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefStoreObserver_OnPrefsChanged_Params_Data* object = static_cast<const PrefStoreObserver_OnPrefsChanged_Params_Data*>(data);

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
          object->updates, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams updates_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->updates, validation_context,
                                         &updates_validate_params)) {
    return false;
  }

  return true;
}

PrefStoreObserver_OnPrefsChanged_Params_Data::PrefStoreObserver_OnPrefsChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefStoreObserver_OnInitializationCompleted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefStoreObserver_OnInitializationCompleted_Params_Data* object = static_cast<const PrefStoreObserver_OnInitializationCompleted_Params_Data*>(data);

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

PrefStoreObserver_OnInitializationCompleted_Params_Data::PrefStoreObserver_OnInitializationCompleted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefStoreObserver_OnPrefChangeAck_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefStoreObserver_OnPrefChangeAck_Params_Data* object = static_cast<const PrefStoreObserver_OnPrefChangeAck_Params_Data*>(data);

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

PrefStoreObserver_OnPrefChangeAck_Params_Data::PrefStoreObserver_OnPrefChangeAck_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefStoreConnector_Connect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefStoreConnector_Connect_Params_Data* object = static_cast<const PrefStoreConnector_Connect_Params_Data*>(data);

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
          object->pref_registry, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pref_registry, validation_context))
    return false;

  return true;
}

PrefStoreConnector_Connect_Params_Data::PrefStoreConnector_Connect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PrefStoreConnector_Connect_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PrefStoreConnector_Connect_ResponseParams_Data* object = static_cast<const PrefStoreConnector_Connect_ResponseParams_Data*>(data);

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
          object->connection, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->connection, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->underlay, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->remote_defaults, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams remote_defaults_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->remote_defaults, validation_context,
                                         &remote_defaults_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->connections, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams connections_validate_params(
      new mojo::internal::ContainerValidateParams(0, ::prefs::mojom::internal::PrefStoreType_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->connections, validation_context,
                                         &connections_validate_params)) {
    return false;
  }

  return true;
}

PrefStoreConnector_Connect_ResponseParams_Data::PrefStoreConnector_Connect_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_SetValues_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_SetValues_Params_Data* object = static_cast<const PersistentPrefStore_SetValues_Params_Data*>(data);

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
          object->updates, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams updates_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->updates, validation_context,
                                         &updates_validate_params)) {
    return false;
  }

  return true;
}

PersistentPrefStore_SetValues_Params_Data::PersistentPrefStore_SetValues_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_RequestValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_RequestValue_Params_Data* object = static_cast<const PersistentPrefStore_RequestValue_Params_Data*>(data);

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
          object->key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key, validation_context,
                                         &key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sub_pref_path, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sub_pref_path_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->sub_pref_path, validation_context,
                                         &sub_pref_path_validate_params)) {
    return false;
  }

  return true;
}

PersistentPrefStore_RequestValue_Params_Data::PersistentPrefStore_RequestValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_CommitPendingWrite_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_CommitPendingWrite_Params_Data* object = static_cast<const PersistentPrefStore_CommitPendingWrite_Params_Data*>(data);

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

PersistentPrefStore_CommitPendingWrite_Params_Data::PersistentPrefStore_CommitPendingWrite_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_CommitPendingWrite_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_CommitPendingWrite_ResponseParams_Data* object = static_cast<const PersistentPrefStore_CommitPendingWrite_ResponseParams_Data*>(data);

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

PersistentPrefStore_CommitPendingWrite_ResponseParams_Data::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_SchedulePendingLossyWrites_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_SchedulePendingLossyWrites_Params_Data* object = static_cast<const PersistentPrefStore_SchedulePendingLossyWrites_Params_Data*>(data);

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

PersistentPrefStore_SchedulePendingLossyWrites_Params_Data::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_ClearMutableValues_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_ClearMutableValues_Params_Data* object = static_cast<const PersistentPrefStore_ClearMutableValues_Params_Data*>(data);

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

PersistentPrefStore_ClearMutableValues_Params_Data::PersistentPrefStore_ClearMutableValues_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data* object = static_cast<const PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data*>(data);

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

PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResetOnLoadObserver_OnResetOnLoad_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResetOnLoadObserver_OnResetOnLoad_Params_Data* object = static_cast<const ResetOnLoadObserver_OnResetOnLoad_Params_Data*>(data);

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

ResetOnLoadObserver_OnResetOnLoad_Params_Data::ResetOnLoadObserver_OnResetOnLoad_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
