// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/identity/public/mojom/identity_manager.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace identity {
namespace mojom {

namespace internal {


// static
bool IdentityManager_GetPrimaryAccountInfo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetPrimaryAccountInfo_Params_Data* object = static_cast<const IdentityManager_GetPrimaryAccountInfo_Params_Data*>(data);

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

IdentityManager_GetPrimaryAccountInfo_Params_Data::IdentityManager_GetPrimaryAccountInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data* object = static_cast<const IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->account_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->account_state, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->account_state, validation_context))
    return false;

  return true;
}

IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data::IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data* object = static_cast<const IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data*>(data);

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

IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data::IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data* object = static_cast<const IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data*>(data);

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
          object->account_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->account_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->account_state, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->account_state, validation_context))
    return false;

  return true;
}

IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data::IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetAccountInfoFromGaiaId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetAccountInfoFromGaiaId_Params_Data* object = static_cast<const IdentityManager_GetAccountInfoFromGaiaId_Params_Data*>(data);

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
          object->gaia_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gaia_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gaia_id, validation_context,
                                         &gaia_id_validate_params)) {
    return false;
  }

  return true;
}

IdentityManager_GetAccountInfoFromGaiaId_Params_Data::IdentityManager_GetAccountInfoFromGaiaId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data* object = static_cast<const IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->account_info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->account_state, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->account_state, validation_context))
    return false;

  return true;
}

IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data::IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetAccounts_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetAccounts_Params_Data* object = static_cast<const IdentityManager_GetAccounts_Params_Data*>(data);

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

IdentityManager_GetAccounts_Params_Data::IdentityManager_GetAccounts_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetAccounts_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetAccounts_ResponseParams_Data* object = static_cast<const IdentityManager_GetAccounts_ResponseParams_Data*>(data);

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
          object->accounts, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accounts_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->accounts, validation_context,
                                         &accounts_validate_params)) {
    return false;
  }

  return true;
}

IdentityManager_GetAccounts_ResponseParams_Data::IdentityManager_GetAccounts_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetAccessToken_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetAccessToken_Params_Data* object = static_cast<const IdentityManager_GetAccessToken_Params_Data*>(data);

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
          object->account_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams account_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->account_id, validation_context,
                                         &account_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->scopes, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->scopes, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->consumer_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams consumer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->consumer_id, validation_context,
                                         &consumer_id_validate_params)) {
    return false;
  }

  return true;
}

IdentityManager_GetAccessToken_Params_Data::IdentityManager_GetAccessToken_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool IdentityManager_GetAccessToken_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IdentityManager_GetAccessToken_ResponseParams_Data* object = static_cast<const IdentityManager_GetAccessToken_ResponseParams_Data*>(data);

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

  const mojo::internal::ContainerValidateParams token_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->token, validation_context,
                                         &token_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expiration_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expiration_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->error, validation_context))
    return false;

  return true;
}

IdentityManager_GetAccessToken_ResponseParams_Data::IdentityManager_GetAccessToken_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace identity

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
