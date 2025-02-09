// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace prefs {
namespace mojom {
namespace internal {

struct TrackedPreferenceValidationDelegate_ValueState_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data));
      new (data()) TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data>(index_);
    }
    TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> pref_path;
  ::mojo_base::mojom::internal::Value_Data value;
  int32_t value_state;
  int32_t external_validation_value_state;
  uint8_t is_personal : 1;
  uint8_t padfinal_[7];

 private:
  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data();
  ~TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data() = delete;
};
static_assert(sizeof(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data) == 48,
              "Bad sizeof(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data)");
class  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data));
      new (data()) TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data>(index_);
    }
    TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> pref_path;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> invalid_keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> external_validation_invalid_keys;
  int32_t value_state;
  int32_t external_validation_value_state;
  uint8_t is_personal : 1;
  uint8_t padfinal_[7];

 private:
  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data();
  ~TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data() = delete;
};
static_assert(sizeof(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data) == 48,
              "Bad sizeof(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_INTERNAL_H_