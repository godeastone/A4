// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace prefs {
namespace mojom {


}  // namespace mojom
}  // namespace prefs

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace prefs {
namespace mojom {

enum class TrackedPreferenceValidationDelegate_ValueState : int32_t {
  UNCHANGED,
  CLEARED,
  SECURE_LEGACY,
  CHANGED,
  UNTRUSTED_UNKNOWN_VALUE,
  TRUSTED_UNKNOWN_VALUE,
  TRUSTED_NULL_VALUE,
  UNSUPPORTED,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, TrackedPreferenceValidationDelegate_ValueState value) {
  switch(value) {
    case TrackedPreferenceValidationDelegate_ValueState::UNCHANGED:
      return os << "TrackedPreferenceValidationDelegate_ValueState::UNCHANGED";
    case TrackedPreferenceValidationDelegate_ValueState::CLEARED:
      return os << "TrackedPreferenceValidationDelegate_ValueState::CLEARED";
    case TrackedPreferenceValidationDelegate_ValueState::SECURE_LEGACY:
      return os << "TrackedPreferenceValidationDelegate_ValueState::SECURE_LEGACY";
    case TrackedPreferenceValidationDelegate_ValueState::CHANGED:
      return os << "TrackedPreferenceValidationDelegate_ValueState::CHANGED";
    case TrackedPreferenceValidationDelegate_ValueState::UNTRUSTED_UNKNOWN_VALUE:
      return os << "TrackedPreferenceValidationDelegate_ValueState::UNTRUSTED_UNKNOWN_VALUE";
    case TrackedPreferenceValidationDelegate_ValueState::TRUSTED_UNKNOWN_VALUE:
      return os << "TrackedPreferenceValidationDelegate_ValueState::TRUSTED_UNKNOWN_VALUE";
    case TrackedPreferenceValidationDelegate_ValueState::TRUSTED_NULL_VALUE:
      return os << "TrackedPreferenceValidationDelegate_ValueState::TRUSTED_NULL_VALUE";
    case TrackedPreferenceValidationDelegate_ValueState::UNSUPPORTED:
      return os << "TrackedPreferenceValidationDelegate_ValueState::UNSUPPORTED";
    default:
      return os << "Unknown TrackedPreferenceValidationDelegate_ValueState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TrackedPreferenceValidationDelegate_ValueState value) {
  return internal::TrackedPreferenceValidationDelegate_ValueState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class TrackedPreferenceValidationDelegateInterfaceBase {};

using TrackedPreferenceValidationDelegatePtrDataView =
    mojo::InterfacePtrDataView<TrackedPreferenceValidationDelegateInterfaceBase>;
using TrackedPreferenceValidationDelegateRequestDataView =
    mojo::InterfaceRequestDataView<TrackedPreferenceValidationDelegateInterfaceBase>;
using TrackedPreferenceValidationDelegateAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TrackedPreferenceValidationDelegateInterfaceBase>;
using TrackedPreferenceValidationDelegateAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TrackedPreferenceValidationDelegateInterfaceBase>;
class TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_ParamsDataView {
 public:
  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_ParamsDataView() {}

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_ParamsDataView(
      internal::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrefPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrefPath(UserType* output) {
    auto* pointer = data_->pref_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ::mojo_base::mojom::ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = !data_->value.is_null() ? &data_->value : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::ValueDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValueState(UserType* output) const {
    auto data_value = data_->value_state;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
        data_value, output);
  }

  TrackedPreferenceValidationDelegate_ValueState value_state() const {
    return static_cast<TrackedPreferenceValidationDelegate_ValueState>(data_->value_state);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExternalValidationValueState(UserType* output) const {
    auto data_value = data_->external_validation_value_state;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
        data_value, output);
  }

  TrackedPreferenceValidationDelegate_ValueState external_validation_value_state() const {
    return static_cast<TrackedPreferenceValidationDelegate_ValueState>(data_->external_validation_value_state);
  }
  bool is_personal() const {
    return data_->is_personal;
  }
 private:
  internal::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView {
 public:
  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView() {}

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView(
      internal::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrefPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrefPath(UserType* output) {
    auto* pointer = data_->pref_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInvalidKeysDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInvalidKeys(UserType* output) {
    auto* pointer = data_->invalid_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExternalValidationInvalidKeysDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExternalValidationInvalidKeys(UserType* output) {
    auto* pointer = data_->external_validation_invalid_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValueState(UserType* output) const {
    auto data_value = data_->value_state;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
        data_value, output);
  }

  TrackedPreferenceValidationDelegate_ValueState value_state() const {
    return static_cast<TrackedPreferenceValidationDelegate_ValueState>(data_->value_state);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExternalValidationValueState(UserType* output) const {
    auto data_value = data_->external_validation_value_state;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(
        data_value, output);
  }

  TrackedPreferenceValidationDelegate_ValueState external_validation_value_state() const {
    return static_cast<TrackedPreferenceValidationDelegate_ValueState>(data_->external_validation_value_state);
  }
  bool is_personal() const {
    return data_->is_personal;
  }
 private:
  internal::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace prefs

namespace std {

template <>
struct hash<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>
    : public mojo::internal::EnumHashImpl<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState, ::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState> {
  static ::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState ToMojom(::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState input) { return input; }
  static bool FromMojom(::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState input, ::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::prefs::mojom::TrackedPreferenceValidationDelegate_ValueState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace prefs {
namespace mojom {

inline void TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_ParamsDataView::GetPrefPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->pref_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_ParamsDataView::GetValueDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  auto pointer = &data_->value;
  *output = ::mojo_base::mojom::ValueDataView(pointer, context_);
}


inline void TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView::GetPrefPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->pref_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView::GetInvalidKeysDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->invalid_keys.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_ParamsDataView::GetExternalValidationInvalidKeysDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->external_validation_invalid_keys.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace prefs

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_SHARED_H_
