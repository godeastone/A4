// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_H_

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
#include "services/preferences/public/mojom/preferences.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace prefs {
namespace mojom {
class PrefStoreConnectionDataView;

class PersistentPrefStoreConnectionDataView;

class IncognitoPersistentPrefStoreConnectionDataView;

class SubPrefUpdateDataView;

class PrefUpdateDataView;

class PrefRegistryDataView;

class PrefRegistrationDataView;

class TrackedPersistentPrefStoreConfigurationDataView;

class TrackedPreferenceMetadataDataView;

class PrefUpdateValueDataView;


}  // namespace mojom
}  // namespace prefs

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::prefs::mojom::PrefStoreConnectionDataView> {
  using Data = ::prefs::mojom::internal::PrefStoreConnection_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::PersistentPrefStoreConnectionDataView> {
  using Data = ::prefs::mojom::internal::PersistentPrefStoreConnection_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::IncognitoPersistentPrefStoreConnectionDataView> {
  using Data = ::prefs::mojom::internal::IncognitoPersistentPrefStoreConnection_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::SubPrefUpdateDataView> {
  using Data = ::prefs::mojom::internal::SubPrefUpdate_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::PrefUpdateDataView> {
  using Data = ::prefs::mojom::internal::PrefUpdate_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::PrefRegistryDataView> {
  using Data = ::prefs::mojom::internal::PrefRegistry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::PrefRegistrationDataView> {
  using Data = ::prefs::mojom::internal::PrefRegistration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::TrackedPersistentPrefStoreConfigurationDataView> {
  using Data = ::prefs::mojom::internal::TrackedPersistentPrefStoreConfiguration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::TrackedPreferenceMetadataDataView> {
  using Data = ::prefs::mojom::internal::TrackedPreferenceMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::prefs::mojom::PrefUpdateValueDataView> {
  using Data = ::prefs::mojom::internal::PrefUpdateValue_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace prefs {
namespace mojom {

enum class PrefStoreType : int32_t {
  MANAGED,
  SUPERVISED_USER,
  EXTENSION,
  COMMAND_LINE,
  USER,
  RECOMMENDED,
  DEFAULT,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, PrefStoreType value) {
  switch(value) {
    case PrefStoreType::MANAGED:
      return os << "PrefStoreType::MANAGED";
    case PrefStoreType::SUPERVISED_USER:
      return os << "PrefStoreType::SUPERVISED_USER";
    case PrefStoreType::EXTENSION:
      return os << "PrefStoreType::EXTENSION";
    case PrefStoreType::COMMAND_LINE:
      return os << "PrefStoreType::COMMAND_LINE";
    case PrefStoreType::USER:
      return os << "PrefStoreType::USER";
    case PrefStoreType::RECOMMENDED:
      return os << "PrefStoreType::RECOMMENDED";
    case PrefStoreType::DEFAULT:
      return os << "PrefStoreType::DEFAULT";
    default:
      return os << "Unknown PrefStoreType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PrefStoreType value) {
  return internal::PrefStoreType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PersistentPrefStoreConnection_ReadError : int32_t {
  NONE = 0,
  JSON_PARSE = 1,
  JSON_TYPE = 2,
  ACCESS_DENIED = 3,
  FILE_OTHER = 4,
  FILE_LOCKED = 5,
  NO_FILE = 6,
  JSON_REPEAT = 7,
  FILE_NOT_SPECIFIED = 9,
  ASYNCHRONOUS_TASK_INCOMPLETE = 10,
  kMinValue = 0,
  kMaxValue = 10,
};

inline std::ostream& operator<<(std::ostream& os, PersistentPrefStoreConnection_ReadError value) {
  switch(value) {
    case PersistentPrefStoreConnection_ReadError::NONE:
      return os << "PersistentPrefStoreConnection_ReadError::NONE";
    case PersistentPrefStoreConnection_ReadError::JSON_PARSE:
      return os << "PersistentPrefStoreConnection_ReadError::JSON_PARSE";
    case PersistentPrefStoreConnection_ReadError::JSON_TYPE:
      return os << "PersistentPrefStoreConnection_ReadError::JSON_TYPE";
    case PersistentPrefStoreConnection_ReadError::ACCESS_DENIED:
      return os << "PersistentPrefStoreConnection_ReadError::ACCESS_DENIED";
    case PersistentPrefStoreConnection_ReadError::FILE_OTHER:
      return os << "PersistentPrefStoreConnection_ReadError::FILE_OTHER";
    case PersistentPrefStoreConnection_ReadError::FILE_LOCKED:
      return os << "PersistentPrefStoreConnection_ReadError::FILE_LOCKED";
    case PersistentPrefStoreConnection_ReadError::NO_FILE:
      return os << "PersistentPrefStoreConnection_ReadError::NO_FILE";
    case PersistentPrefStoreConnection_ReadError::JSON_REPEAT:
      return os << "PersistentPrefStoreConnection_ReadError::JSON_REPEAT";
    case PersistentPrefStoreConnection_ReadError::FILE_NOT_SPECIFIED:
      return os << "PersistentPrefStoreConnection_ReadError::FILE_NOT_SPECIFIED";
    case PersistentPrefStoreConnection_ReadError::ASYNCHRONOUS_TASK_INCOMPLETE:
      return os << "PersistentPrefStoreConnection_ReadError::ASYNCHRONOUS_TASK_INCOMPLETE";
    default:
      return os << "Unknown PersistentPrefStoreConnection_ReadError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PersistentPrefStoreConnection_ReadError value) {
  return internal::PersistentPrefStoreConnection_ReadError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TrackedPreferenceMetadata_EnforcementLevel : int32_t {
  NO_ENFORCEMENT,
  ENFORCE_ON_LOAD,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, TrackedPreferenceMetadata_EnforcementLevel value) {
  switch(value) {
    case TrackedPreferenceMetadata_EnforcementLevel::NO_ENFORCEMENT:
      return os << "TrackedPreferenceMetadata_EnforcementLevel::NO_ENFORCEMENT";
    case TrackedPreferenceMetadata_EnforcementLevel::ENFORCE_ON_LOAD:
      return os << "TrackedPreferenceMetadata_EnforcementLevel::ENFORCE_ON_LOAD";
    default:
      return os << "Unknown TrackedPreferenceMetadata_EnforcementLevel value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TrackedPreferenceMetadata_EnforcementLevel value) {
  return internal::TrackedPreferenceMetadata_EnforcementLevel_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TrackedPreferenceMetadata_PrefTrackingStrategy : int32_t {
  ATOMIC,
  SPLIT,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, TrackedPreferenceMetadata_PrefTrackingStrategy value) {
  switch(value) {
    case TrackedPreferenceMetadata_PrefTrackingStrategy::ATOMIC:
      return os << "TrackedPreferenceMetadata_PrefTrackingStrategy::ATOMIC";
    case TrackedPreferenceMetadata_PrefTrackingStrategy::SPLIT:
      return os << "TrackedPreferenceMetadata_PrefTrackingStrategy::SPLIT";
    default:
      return os << "Unknown TrackedPreferenceMetadata_PrefTrackingStrategy value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TrackedPreferenceMetadata_PrefTrackingStrategy value) {
  return internal::TrackedPreferenceMetadata_PrefTrackingStrategy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TrackedPreferenceMetadata_ValueType : int32_t {
  IMPERSONAL,
  PERSONAL,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, TrackedPreferenceMetadata_ValueType value) {
  switch(value) {
    case TrackedPreferenceMetadata_ValueType::IMPERSONAL:
      return os << "TrackedPreferenceMetadata_ValueType::IMPERSONAL";
    case TrackedPreferenceMetadata_ValueType::PERSONAL:
      return os << "TrackedPreferenceMetadata_ValueType::PERSONAL";
    default:
      return os << "Unknown TrackedPreferenceMetadata_ValueType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TrackedPreferenceMetadata_ValueType value) {
  return internal::TrackedPreferenceMetadata_ValueType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PrefStoreObserverInterfaceBase {};

using PrefStoreObserverPtrDataView =
    mojo::InterfacePtrDataView<PrefStoreObserverInterfaceBase>;
using PrefStoreObserverRequestDataView =
    mojo::InterfaceRequestDataView<PrefStoreObserverInterfaceBase>;
using PrefStoreObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PrefStoreObserverInterfaceBase>;
using PrefStoreObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PrefStoreObserverInterfaceBase>;
class PrefStoreConnectorInterfaceBase {};

using PrefStoreConnectorPtrDataView =
    mojo::InterfacePtrDataView<PrefStoreConnectorInterfaceBase>;
using PrefStoreConnectorRequestDataView =
    mojo::InterfaceRequestDataView<PrefStoreConnectorInterfaceBase>;
using PrefStoreConnectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PrefStoreConnectorInterfaceBase>;
using PrefStoreConnectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PrefStoreConnectorInterfaceBase>;
class PersistentPrefStoreInterfaceBase {};

using PersistentPrefStorePtrDataView =
    mojo::InterfacePtrDataView<PersistentPrefStoreInterfaceBase>;
using PersistentPrefStoreRequestDataView =
    mojo::InterfaceRequestDataView<PersistentPrefStoreInterfaceBase>;
using PersistentPrefStoreAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PersistentPrefStoreInterfaceBase>;
using PersistentPrefStoreAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PersistentPrefStoreInterfaceBase>;
class ResetOnLoadObserverInterfaceBase {};

using ResetOnLoadObserverPtrDataView =
    mojo::InterfacePtrDataView<ResetOnLoadObserverInterfaceBase>;
using ResetOnLoadObserverRequestDataView =
    mojo::InterfaceRequestDataView<ResetOnLoadObserverInterfaceBase>;
using ResetOnLoadObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ResetOnLoadObserverInterfaceBase>;
using ResetOnLoadObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ResetOnLoadObserverInterfaceBase>;
class PrefStoreConnectionDataView {
 public:
  PrefStoreConnectionDataView() {}

  PrefStoreConnectionDataView(
      internal::PrefStoreConnection_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::prefs::mojom::PrefStoreObserverRequestDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInitialPrefsDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialPrefs(UserType* output) {
    auto* pointer = data_->initial_prefs.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
  bool is_initialized() const {
    return data_->is_initialized;
  }
 private:
  internal::PrefStoreConnection_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PersistentPrefStoreConnectionDataView {
 public:
  PersistentPrefStoreConnectionDataView() {}

  PersistentPrefStoreConnectionDataView(
      internal::PersistentPrefStoreConnection_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrefStoreConnectionDataView(
      PrefStoreConnectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrefStoreConnection(UserType* output) {
    auto* pointer = data_->pref_store_connection.Get();
    return mojo::internal::Deserialize<::prefs::mojom::PrefStoreConnectionDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakePrefStore() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::prefs::mojom::PersistentPrefStorePtrDataView>(
            &data_->pref_store, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReadError(UserType* output) const {
    auto data_value = data_->read_error;
    return mojo::internal::Deserialize<::prefs::mojom::PersistentPrefStoreConnection_ReadError>(
        data_value, output);
  }

  PersistentPrefStoreConnection_ReadError read_error() const {
    return static_cast<PersistentPrefStoreConnection_ReadError>(data_->read_error);
  }
  bool read_only() const {
    return data_->read_only;
  }
 private:
  internal::PersistentPrefStoreConnection_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IncognitoPersistentPrefStoreConnectionDataView {
 public:
  IncognitoPersistentPrefStoreConnectionDataView() {}

  IncognitoPersistentPrefStoreConnectionDataView(
      internal::IncognitoPersistentPrefStoreConnection_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrefStoreConnectionDataView(
      PersistentPrefStoreConnectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrefStoreConnection(UserType* output) {
    auto* pointer = data_->pref_store_connection.Get();
    return mojo::internal::Deserialize<::prefs::mojom::PersistentPrefStoreConnectionDataView>(
        pointer, output, context_);
  }
  inline void GetOverlayPrefNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOverlayPrefNames(UserType* output) {
    auto* pointer = data_->overlay_pref_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IncognitoPersistentPrefStoreConnection_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SubPrefUpdateDataView {
 public:
  SubPrefUpdateDataView() {}

  SubPrefUpdateDataView(
      internal::SubPrefUpdate_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
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
 private:
  internal::SubPrefUpdate_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrefUpdateDataView {
 public:
  PrefUpdateDataView() {}

  PrefUpdateDataView(
      internal::PrefUpdate_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      PrefUpdateValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = !data_->value.is_null() ? &data_->value : nullptr;
    return mojo::internal::Deserialize<::prefs::mojom::PrefUpdateValueDataView>(
        pointer, output, context_);
  }
  uint32_t flags() const {
    return data_->flags;
  }
 private:
  internal::PrefUpdate_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrefRegistryDataView {
 public:
  PrefRegistryDataView() {}

  PrefRegistryDataView(
      internal::PrefRegistry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrivateRegistrationsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrivateRegistrations(UserType* output) {
    auto* pointer = data_->private_registrations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetForeignRegistrationsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadForeignRegistrations(UserType* output) {
    auto* pointer = data_->foreign_registrations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetPublicRegistrationsDataView(
      mojo::ArrayDataView<PrefRegistrationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPublicRegistrations(UserType* output) {
    auto* pointer = data_->public_registrations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::prefs::mojom::PrefRegistrationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PrefRegistry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrefRegistrationDataView {
 public:
  PrefRegistrationDataView() {}

  PrefRegistrationDataView(
      internal::PrefRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDefaultValueDataView(
      ::mojo_base::mojom::ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultValue(UserType* output) {
    auto* pointer = !data_->default_value.is_null() ? &data_->default_value : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::ValueDataView>(
        pointer, output, context_);
  }
  uint32_t flags() const {
    return data_->flags;
  }
 private:
  internal::PrefRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrackedPersistentPrefStoreConfigurationDataView {
 public:
  TrackedPersistentPrefStoreConfigurationDataView() {}

  TrackedPersistentPrefStoreConfigurationDataView(
      internal::TrackedPersistentPrefStoreConfiguration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUnprotectedPrefFilenameDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnprotectedPrefFilename(UserType* output) {
    auto* pointer = data_->unprotected_pref_filename.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetProtectedPrefFilenameDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtectedPrefFilename(UserType* output) {
    auto* pointer = data_->protected_pref_filename.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetTrackingConfigurationDataView(
      mojo::ArrayDataView<TrackedPreferenceMetadataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrackingConfiguration(UserType* output) {
    auto* pointer = data_->tracking_configuration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::prefs::mojom::TrackedPreferenceMetadataDataView>>(
        pointer, output, context_);
  }
  uint64_t reporting_ids_count() const {
    return data_->reporting_ids_count;
  }
  inline void GetSeedDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSeed(UserType* output) {
    auto* pointer = data_->seed.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLegacyDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLegacyDeviceId(UserType* output) {
    auto* pointer = data_->legacy_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRegistrySeedDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrySeed(UserType* output) {
    auto* pointer = data_->registry_seed.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRegistryPathDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistryPath(UserType* output) {
    auto* pointer = data_->registry_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeValidationDelegate() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceValidationDelegatePtrDataView>(
            &data_->validation_delegate, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeResetOnLoadObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::prefs::mojom::ResetOnLoadObserverPtrDataView>(
            &data_->reset_on_load_observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TrackedPersistentPrefStoreConfiguration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TrackedPreferenceMetadataDataView {
 public:
  TrackedPreferenceMetadataDataView() {}

  TrackedPreferenceMetadataDataView(
      internal::TrackedPreferenceMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t reporting_id() const {
    return data_->reporting_id;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnforcementLevel(UserType* output) const {
    auto data_value = data_->enforcement_level;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel>(
        data_value, output);
  }

  TrackedPreferenceMetadata_EnforcementLevel enforcement_level() const {
    return static_cast<TrackedPreferenceMetadata_EnforcementLevel>(data_->enforcement_level);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrategy(UserType* output) const {
    auto data_value = data_->strategy;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy>(
        data_value, output);
  }

  TrackedPreferenceMetadata_PrefTrackingStrategy strategy() const {
    return static_cast<TrackedPreferenceMetadata_PrefTrackingStrategy>(data_->strategy);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValueType(UserType* output) const {
    auto data_value = data_->value_type;
    return mojo::internal::Deserialize<::prefs::mojom::TrackedPreferenceMetadata_ValueType>(
        data_value, output);
  }

  TrackedPreferenceMetadata_ValueType value_type() const {
    return static_cast<TrackedPreferenceMetadata_ValueType>(data_->value_type);
  }
 private:
  internal::TrackedPreferenceMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrefStoreObserver_OnPrefsChanged_ParamsDataView {
 public:
  PrefStoreObserver_OnPrefsChanged_ParamsDataView() {}

  PrefStoreObserver_OnPrefsChanged_ParamsDataView(
      internal::PrefStoreObserver_OnPrefsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUpdatesDataView(
      mojo::ArrayDataView<PrefUpdateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdates(UserType* output) {
    auto* pointer = data_->updates.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::prefs::mojom::PrefUpdateDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PrefStoreObserver_OnPrefsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrefStoreObserver_OnInitializationCompleted_ParamsDataView {
 public:
  PrefStoreObserver_OnInitializationCompleted_ParamsDataView() {}

  PrefStoreObserver_OnInitializationCompleted_ParamsDataView(
      internal::PrefStoreObserver_OnInitializationCompleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool succeeded() const {
    return data_->succeeded;
  }
 private:
  internal::PrefStoreObserver_OnInitializationCompleted_Params_Data* data_ = nullptr;
};

class PrefStoreObserver_OnPrefChangeAck_ParamsDataView {
 public:
  PrefStoreObserver_OnPrefChangeAck_ParamsDataView() {}

  PrefStoreObserver_OnPrefChangeAck_ParamsDataView(
      internal::PrefStoreObserver_OnPrefChangeAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PrefStoreObserver_OnPrefChangeAck_Params_Data* data_ = nullptr;
};

class PrefStoreConnector_Connect_ParamsDataView {
 public:
  PrefStoreConnector_Connect_ParamsDataView() {}

  PrefStoreConnector_Connect_ParamsDataView(
      internal::PrefStoreConnector_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrefRegistryDataView(
      PrefRegistryDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrefRegistry(UserType* output) {
    auto* pointer = data_->pref_registry.Get();
    return mojo::internal::Deserialize<::prefs::mojom::PrefRegistryDataView>(
        pointer, output, context_);
  }
 private:
  internal::PrefStoreConnector_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PrefStoreConnector_Connect_ResponseParamsDataView {
 public:
  PrefStoreConnector_Connect_ResponseParamsDataView() {}

  PrefStoreConnector_Connect_ResponseParamsDataView(
      internal::PrefStoreConnector_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConnectionDataView(
      PersistentPrefStoreConnectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnection(UserType* output) {
    auto* pointer = data_->connection.Get();
    return mojo::internal::Deserialize<::prefs::mojom::PersistentPrefStoreConnectionDataView>(
        pointer, output, context_);
  }
  inline void GetUnderlayDataView(
      IncognitoPersistentPrefStoreConnectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnderlay(UserType* output) {
    auto* pointer = data_->underlay.Get();
    return mojo::internal::Deserialize<::prefs::mojom::IncognitoPersistentPrefStoreConnectionDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteDefaultsDataView(
      mojo::ArrayDataView<PrefRegistrationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteDefaults(UserType* output) {
    auto* pointer = data_->remote_defaults.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::prefs::mojom::PrefRegistrationDataView>>(
        pointer, output, context_);
  }
  inline void GetConnectionsDataView(
      mojo::MapDataView<PrefStoreType, PrefStoreConnectionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnections(UserType* output) {
    auto* pointer = data_->connections.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::prefs::mojom::PrefStoreType, ::prefs::mojom::PrefStoreConnectionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PrefStoreConnector_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PersistentPrefStore_SetValues_ParamsDataView {
 public:
  PersistentPrefStore_SetValues_ParamsDataView() {}

  PersistentPrefStore_SetValues_ParamsDataView(
      internal::PersistentPrefStore_SetValues_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUpdatesDataView(
      mojo::ArrayDataView<PrefUpdateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdates(UserType* output) {
    auto* pointer = data_->updates.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::prefs::mojom::PrefUpdateDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PersistentPrefStore_SetValues_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PersistentPrefStore_RequestValue_ParamsDataView {
 public:
  PersistentPrefStore_RequestValue_ParamsDataView() {}

  PersistentPrefStore_RequestValue_ParamsDataView(
      internal::PersistentPrefStore_RequestValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSubPrefPathDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubPrefPath(UserType* output) {
    auto* pointer = data_->sub_pref_path.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PersistentPrefStore_RequestValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PersistentPrefStore_CommitPendingWrite_ParamsDataView {
 public:
  PersistentPrefStore_CommitPendingWrite_ParamsDataView() {}

  PersistentPrefStore_CommitPendingWrite_ParamsDataView(
      internal::PersistentPrefStore_CommitPendingWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PersistentPrefStore_CommitPendingWrite_Params_Data* data_ = nullptr;
};

class PersistentPrefStore_CommitPendingWrite_ResponseParamsDataView {
 public:
  PersistentPrefStore_CommitPendingWrite_ResponseParamsDataView() {}

  PersistentPrefStore_CommitPendingWrite_ResponseParamsDataView(
      internal::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data* data_ = nullptr;
};

class PersistentPrefStore_SchedulePendingLossyWrites_ParamsDataView {
 public:
  PersistentPrefStore_SchedulePendingLossyWrites_ParamsDataView() {}

  PersistentPrefStore_SchedulePendingLossyWrites_ParamsDataView(
      internal::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data* data_ = nullptr;
};

class PersistentPrefStore_ClearMutableValues_ParamsDataView {
 public:
  PersistentPrefStore_ClearMutableValues_ParamsDataView() {}

  PersistentPrefStore_ClearMutableValues_ParamsDataView(
      internal::PersistentPrefStore_ClearMutableValues_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PersistentPrefStore_ClearMutableValues_Params_Data* data_ = nullptr;
};

class PersistentPrefStore_OnStoreDeletionFromDisk_ParamsDataView {
 public:
  PersistentPrefStore_OnStoreDeletionFromDisk_ParamsDataView() {}

  PersistentPrefStore_OnStoreDeletionFromDisk_ParamsDataView(
      internal::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data* data_ = nullptr;
};

class ResetOnLoadObserver_OnResetOnLoad_ParamsDataView {
 public:
  ResetOnLoadObserver_OnResetOnLoad_ParamsDataView() {}

  ResetOnLoadObserver_OnResetOnLoad_ParamsDataView(
      internal::ResetOnLoadObserver_OnResetOnLoad_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ResetOnLoadObserver_OnResetOnLoad_Params_Data* data_ = nullptr;
};

class PrefUpdateValueDataView {
 public:
  using Tag = internal::PrefUpdateValue_Data::PrefUpdateValue_Tag;

  PrefUpdateValueDataView() {}

  PrefUpdateValueDataView(
      internal::PrefUpdateValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_split_updates() const { return data_->tag == Tag::SPLIT_UPDATES; }
  inline void GetSplitUpdatesDataView(
      mojo::ArrayDataView<SubPrefUpdateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSplitUpdates(UserType* output) {
    DCHECK(is_split_updates());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::prefs::mojom::SubPrefUpdateDataView>>(
        data_->data.f_split_updates.Get(), output, context_);
  }
  bool is_atomic_update() const { return data_->tag == Tag::ATOMIC_UPDATE; }
  inline void GetAtomicUpdateDataView(
      ::mojo_base::mojom::ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAtomicUpdate(UserType* output) {
    DCHECK(is_atomic_update());
    return mojo::internal::Deserialize<::mojo_base::mojom::ValueDataView>(
        data_->data.f_atomic_update.Get(), output, context_);
  }

 private:
  internal::PrefUpdateValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace prefs

namespace std {

template <>
struct hash<::prefs::mojom::PrefStoreType>
    : public mojo::internal::EnumHashImpl<::prefs::mojom::PrefStoreType> {};

template <>
struct hash<::prefs::mojom::PersistentPrefStoreConnection_ReadError>
    : public mojo::internal::EnumHashImpl<::prefs::mojom::PersistentPrefStoreConnection_ReadError> {};

template <>
struct hash<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel>
    : public mojo::internal::EnumHashImpl<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel> {};

template <>
struct hash<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy>
    : public mojo::internal::EnumHashImpl<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy> {};

template <>
struct hash<::prefs::mojom::TrackedPreferenceMetadata_ValueType>
    : public mojo::internal::EnumHashImpl<::prefs::mojom::TrackedPreferenceMetadata_ValueType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::prefs::mojom::PrefStoreType, ::prefs::mojom::PrefStoreType> {
  static ::prefs::mojom::PrefStoreType ToMojom(::prefs::mojom::PrefStoreType input) { return input; }
  static bool FromMojom(::prefs::mojom::PrefStoreType input, ::prefs::mojom::PrefStoreType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PrefStoreType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::prefs::mojom::PrefStoreType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::prefs::mojom::PrefStoreType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::prefs::mojom::PersistentPrefStoreConnection_ReadError, ::prefs::mojom::PersistentPrefStoreConnection_ReadError> {
  static ::prefs::mojom::PersistentPrefStoreConnection_ReadError ToMojom(::prefs::mojom::PersistentPrefStoreConnection_ReadError input) { return input; }
  static bool FromMojom(::prefs::mojom::PersistentPrefStoreConnection_ReadError input, ::prefs::mojom::PersistentPrefStoreConnection_ReadError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PersistentPrefStoreConnection_ReadError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::prefs::mojom::PersistentPrefStoreConnection_ReadError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::prefs::mojom::PersistentPrefStoreConnection_ReadError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel, ::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel> {
  static ::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel ToMojom(::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel input) { return input; }
  static bool FromMojom(::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel input, ::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy, ::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy> {
  static ::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy ToMojom(::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy input) { return input; }
  static bool FromMojom(::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy input, ::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::prefs::mojom::TrackedPreferenceMetadata_ValueType, ::prefs::mojom::TrackedPreferenceMetadata_ValueType> {
  static ::prefs::mojom::TrackedPreferenceMetadata_ValueType ToMojom(::prefs::mojom::TrackedPreferenceMetadata_ValueType input) { return input; }
  static bool FromMojom(::prefs::mojom::TrackedPreferenceMetadata_ValueType input, ::prefs::mojom::TrackedPreferenceMetadata_ValueType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::TrackedPreferenceMetadata_ValueType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::prefs::mojom::TrackedPreferenceMetadata_ValueType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::prefs::mojom::TrackedPreferenceMetadata_ValueType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PrefStoreConnectionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::PrefStoreConnectionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::PrefStoreConnection_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::observer, input, custom_context)) in_observer = CallWithContext(Traits::observer, input, custom_context);
    mojo::internal::Serialize<::prefs::mojom::PrefStoreObserverRequestDataView>(
        in_observer, &(*output)->observer, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->observer),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid observer in PrefStoreConnection struct");
    decltype(CallWithContext(Traits::initial_prefs, input, custom_context)) in_initial_prefs = CallWithContext(Traits::initial_prefs, input, custom_context);
    typename decltype((*output)->initial_prefs)::BaseType::BufferWriter
        initial_prefs_writer;
    mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
        in_initial_prefs, buffer, &initial_prefs_writer, context);
    (*output)->initial_prefs.Set(
        initial_prefs_writer.is_null() ? nullptr : initial_prefs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->initial_prefs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null initial_prefs in PrefStoreConnection struct");
    (*output)->is_initialized = CallWithContext(Traits::is_initialized, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::PrefStoreConnection_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::PrefStoreConnectionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PersistentPrefStoreConnectionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::PersistentPrefStoreConnectionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::PersistentPrefStoreConnection_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::pref_store_connection, input, custom_context)) in_pref_store_connection = CallWithContext(Traits::pref_store_connection, input, custom_context);
    typename decltype((*output)->pref_store_connection)::BaseType::BufferWriter
        pref_store_connection_writer;
    mojo::internal::Serialize<::prefs::mojom::PrefStoreConnectionDataView>(
        in_pref_store_connection, buffer, &pref_store_connection_writer, context);
    (*output)->pref_store_connection.Set(
        pref_store_connection_writer.is_null() ? nullptr : pref_store_connection_writer.data());
    decltype(CallWithContext(Traits::pref_store, input, custom_context)) in_pref_store = CallWithContext(Traits::pref_store, input, custom_context);
    mojo::internal::Serialize<::prefs::mojom::PersistentPrefStorePtrDataView>(
        in_pref_store, &(*output)->pref_store, context);
    mojo::internal::Serialize<::prefs::mojom::PersistentPrefStoreConnection_ReadError>(
        CallWithContext(Traits::read_error, input, custom_context), &(*output)->read_error);
    (*output)->read_only = CallWithContext(Traits::read_only, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::PersistentPrefStoreConnection_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::PersistentPrefStoreConnectionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::IncognitoPersistentPrefStoreConnectionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::IncognitoPersistentPrefStoreConnectionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::IncognitoPersistentPrefStoreConnection_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::pref_store_connection, input, custom_context)) in_pref_store_connection = CallWithContext(Traits::pref_store_connection, input, custom_context);
    typename decltype((*output)->pref_store_connection)::BaseType::BufferWriter
        pref_store_connection_writer;
    mojo::internal::Serialize<::prefs::mojom::PersistentPrefStoreConnectionDataView>(
        in_pref_store_connection, buffer, &pref_store_connection_writer, context);
    (*output)->pref_store_connection.Set(
        pref_store_connection_writer.is_null() ? nullptr : pref_store_connection_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pref_store_connection.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pref_store_connection in IncognitoPersistentPrefStoreConnection struct");
    decltype(CallWithContext(Traits::overlay_pref_names, input, custom_context)) in_overlay_pref_names = CallWithContext(Traits::overlay_pref_names, input, custom_context);
    typename decltype((*output)->overlay_pref_names)::BaseType::BufferWriter
        overlay_pref_names_writer;
    const mojo::internal::ContainerValidateParams overlay_pref_names_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_overlay_pref_names, buffer, &overlay_pref_names_writer, &overlay_pref_names_validate_params,
        context);
    (*output)->overlay_pref_names.Set(
        overlay_pref_names_writer.is_null() ? nullptr : overlay_pref_names_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->overlay_pref_names.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null overlay_pref_names in IncognitoPersistentPrefStoreConnection struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::IncognitoPersistentPrefStoreConnection_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::IncognitoPersistentPrefStoreConnectionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::SubPrefUpdateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::SubPrefUpdateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::SubPrefUpdate_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    const mojo::internal::ContainerValidateParams path_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_path, buffer, &path_writer, &path_validate_params,
        context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in SubPrefUpdate struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BufferWriter value_writer;
    value_writer.AllocateInline(buffer, &(*output)->value);
    mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
        in_value, buffer, &value_writer, true, context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::SubPrefUpdate_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::SubPrefUpdateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PrefUpdateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::PrefUpdateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::PrefUpdate_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key, buffer, &key_writer, context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in PrefUpdate struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BufferWriter value_writer;
    value_writer.AllocateInline(buffer, &(*output)->value);
    mojo::internal::Serialize<::prefs::mojom::PrefUpdateValueDataView>(
        in_value, buffer, &value_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in PrefUpdate struct");
    (*output)->flags = CallWithContext(Traits::flags, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::PrefUpdate_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::PrefUpdateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PrefRegistryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::PrefRegistryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::PrefRegistry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::private_registrations, input, custom_context)) in_private_registrations = CallWithContext(Traits::private_registrations, input, custom_context);
    typename decltype((*output)->private_registrations)::BaseType::BufferWriter
        private_registrations_writer;
    const mojo::internal::ContainerValidateParams private_registrations_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_private_registrations, buffer, &private_registrations_writer, &private_registrations_validate_params,
        context);
    (*output)->private_registrations.Set(
        private_registrations_writer.is_null() ? nullptr : private_registrations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->private_registrations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null private_registrations in PrefRegistry struct");
    decltype(CallWithContext(Traits::foreign_registrations, input, custom_context)) in_foreign_registrations = CallWithContext(Traits::foreign_registrations, input, custom_context);
    typename decltype((*output)->foreign_registrations)::BaseType::BufferWriter
        foreign_registrations_writer;
    const mojo::internal::ContainerValidateParams foreign_registrations_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_foreign_registrations, buffer, &foreign_registrations_writer, &foreign_registrations_validate_params,
        context);
    (*output)->foreign_registrations.Set(
        foreign_registrations_writer.is_null() ? nullptr : foreign_registrations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->foreign_registrations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null foreign_registrations in PrefRegistry struct");
    decltype(CallWithContext(Traits::public_registrations, input, custom_context)) in_public_registrations = CallWithContext(Traits::public_registrations, input, custom_context);
    typename decltype((*output)->public_registrations)::BaseType::BufferWriter
        public_registrations_writer;
    const mojo::internal::ContainerValidateParams public_registrations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::prefs::mojom::PrefRegistrationDataView>>(
        in_public_registrations, buffer, &public_registrations_writer, &public_registrations_validate_params,
        context);
    (*output)->public_registrations.Set(
        public_registrations_writer.is_null() ? nullptr : public_registrations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->public_registrations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null public_registrations in PrefRegistry struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::PrefRegistry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::PrefRegistryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PrefRegistrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::PrefRegistrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::PrefRegistration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key, buffer, &key_writer, context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in PrefRegistration struct");
    decltype(CallWithContext(Traits::default_value, input, custom_context)) in_default_value = CallWithContext(Traits::default_value, input, custom_context);
    typename decltype((*output)->default_value)::BufferWriter default_value_writer;
    default_value_writer.AllocateInline(buffer, &(*output)->default_value);
    mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
        in_default_value, buffer, &default_value_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->default_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null default_value in PrefRegistration struct");
    (*output)->flags = CallWithContext(Traits::flags, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::PrefRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::PrefRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::TrackedPersistentPrefStoreConfigurationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::TrackedPersistentPrefStoreConfigurationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::TrackedPersistentPrefStoreConfiguration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::unprotected_pref_filename, input, custom_context)) in_unprotected_pref_filename = CallWithContext(Traits::unprotected_pref_filename, input, custom_context);
    typename decltype((*output)->unprotected_pref_filename)::BaseType::BufferWriter
        unprotected_pref_filename_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_unprotected_pref_filename, buffer, &unprotected_pref_filename_writer, context);
    (*output)->unprotected_pref_filename.Set(
        unprotected_pref_filename_writer.is_null() ? nullptr : unprotected_pref_filename_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->unprotected_pref_filename.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null unprotected_pref_filename in TrackedPersistentPrefStoreConfiguration struct");
    decltype(CallWithContext(Traits::protected_pref_filename, input, custom_context)) in_protected_pref_filename = CallWithContext(Traits::protected_pref_filename, input, custom_context);
    typename decltype((*output)->protected_pref_filename)::BaseType::BufferWriter
        protected_pref_filename_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_protected_pref_filename, buffer, &protected_pref_filename_writer, context);
    (*output)->protected_pref_filename.Set(
        protected_pref_filename_writer.is_null() ? nullptr : protected_pref_filename_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->protected_pref_filename.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null protected_pref_filename in TrackedPersistentPrefStoreConfiguration struct");
    decltype(CallWithContext(Traits::tracking_configuration, input, custom_context)) in_tracking_configuration = CallWithContext(Traits::tracking_configuration, input, custom_context);
    typename decltype((*output)->tracking_configuration)::BaseType::BufferWriter
        tracking_configuration_writer;
    const mojo::internal::ContainerValidateParams tracking_configuration_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::prefs::mojom::TrackedPreferenceMetadataDataView>>(
        in_tracking_configuration, buffer, &tracking_configuration_writer, &tracking_configuration_validate_params,
        context);
    (*output)->tracking_configuration.Set(
        tracking_configuration_writer.is_null() ? nullptr : tracking_configuration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tracking_configuration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tracking_configuration in TrackedPersistentPrefStoreConfiguration struct");
    (*output)->reporting_ids_count = CallWithContext(Traits::reporting_ids_count, input, custom_context);
    decltype(CallWithContext(Traits::seed, input, custom_context)) in_seed = CallWithContext(Traits::seed, input, custom_context);
    typename decltype((*output)->seed)::BaseType::BufferWriter
        seed_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_seed, buffer, &seed_writer, context);
    (*output)->seed.Set(
        seed_writer.is_null() ? nullptr : seed_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->seed.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null seed in TrackedPersistentPrefStoreConfiguration struct");
    decltype(CallWithContext(Traits::legacy_device_id, input, custom_context)) in_legacy_device_id = CallWithContext(Traits::legacy_device_id, input, custom_context);
    typename decltype((*output)->legacy_device_id)::BaseType::BufferWriter
        legacy_device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_legacy_device_id, buffer, &legacy_device_id_writer, context);
    (*output)->legacy_device_id.Set(
        legacy_device_id_writer.is_null() ? nullptr : legacy_device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->legacy_device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null legacy_device_id in TrackedPersistentPrefStoreConfiguration struct");
    decltype(CallWithContext(Traits::registry_seed, input, custom_context)) in_registry_seed = CallWithContext(Traits::registry_seed, input, custom_context);
    typename decltype((*output)->registry_seed)::BaseType::BufferWriter
        registry_seed_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_registry_seed, buffer, &registry_seed_writer, context);
    (*output)->registry_seed.Set(
        registry_seed_writer.is_null() ? nullptr : registry_seed_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->registry_seed.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null registry_seed in TrackedPersistentPrefStoreConfiguration struct");
    decltype(CallWithContext(Traits::registry_path, input, custom_context)) in_registry_path = CallWithContext(Traits::registry_path, input, custom_context);
    typename decltype((*output)->registry_path)::BaseType::BufferWriter
        registry_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_registry_path, buffer, &registry_path_writer, context);
    (*output)->registry_path.Set(
        registry_path_writer.is_null() ? nullptr : registry_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->registry_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null registry_path in TrackedPersistentPrefStoreConfiguration struct");
    decltype(CallWithContext(Traits::validation_delegate, input, custom_context)) in_validation_delegate = CallWithContext(Traits::validation_delegate, input, custom_context);
    mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceValidationDelegatePtrDataView>(
        in_validation_delegate, &(*output)->validation_delegate, context);
    decltype(CallWithContext(Traits::reset_on_load_observer, input, custom_context)) in_reset_on_load_observer = CallWithContext(Traits::reset_on_load_observer, input, custom_context);
    mojo::internal::Serialize<::prefs::mojom::ResetOnLoadObserverPtrDataView>(
        in_reset_on_load_observer, &(*output)->reset_on_load_observer, context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::TrackedPersistentPrefStoreConfiguration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::TrackedPersistentPrefStoreConfigurationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::TrackedPreferenceMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::prefs::mojom::TrackedPreferenceMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::TrackedPreferenceMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->reporting_id = CallWithContext(Traits::reporting_id, input, custom_context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in TrackedPreferenceMetadata struct");
    mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceMetadata_EnforcementLevel>(
        CallWithContext(Traits::enforcement_level, input, custom_context), &(*output)->enforcement_level);
    mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceMetadata_PrefTrackingStrategy>(
        CallWithContext(Traits::strategy, input, custom_context), &(*output)->strategy);
    mojo::internal::Serialize<::prefs::mojom::TrackedPreferenceMetadata_ValueType>(
        CallWithContext(Traits::value_type, input, custom_context), &(*output)->value_type);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::TrackedPreferenceMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::TrackedPreferenceMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::prefs::mojom::PrefUpdateValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::prefs::mojom::PrefUpdateValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::prefs::mojom::internal::PrefUpdateValue_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::prefs::mojom::internal::PrefUpdateValue_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::prefs::mojom::PrefUpdateValueDataView::Tag::SPLIT_UPDATES: {
        decltype(CallWithContext(Traits::split_updates, input, custom_context))
            in_split_updates = CallWithContext(Traits::split_updates, input,
                                          custom_context);
        typename decltype(result->data.f_split_updates)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams split_updates_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::prefs::mojom::SubPrefUpdateDataView>>(
            in_split_updates, buffer, &value_writer, &split_updates_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null split_updates in PrefUpdateValue union");
        result->data.f_split_updates.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::prefs::mojom::PrefUpdateValueDataView::Tag::ATOMIC_UPDATE: {
        decltype(CallWithContext(Traits::atomic_update, input, custom_context))
            in_atomic_update = CallWithContext(Traits::atomic_update, input,
                                          custom_context);
        typename decltype(result->data.f_atomic_update)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
            in_atomic_update, buffer, &value_writer, false, context);
        result->data.f_atomic_update.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::prefs::mojom::internal::PrefUpdateValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::prefs::mojom::PrefUpdateValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace prefs {
namespace mojom {

inline void PrefStoreConnectionDataView::GetInitialPrefsDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->initial_prefs.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void PersistentPrefStoreConnectionDataView::GetPrefStoreConnectionDataView(
    PrefStoreConnectionDataView* output) {
  auto pointer = data_->pref_store_connection.Get();
  *output = PrefStoreConnectionDataView(pointer, context_);
}


inline void IncognitoPersistentPrefStoreConnectionDataView::GetPrefStoreConnectionDataView(
    PersistentPrefStoreConnectionDataView* output) {
  auto pointer = data_->pref_store_connection.Get();
  *output = PersistentPrefStoreConnectionDataView(pointer, context_);
}
inline void IncognitoPersistentPrefStoreConnectionDataView::GetOverlayPrefNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->overlay_pref_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void SubPrefUpdateDataView::GetPathDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->path.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void SubPrefUpdateDataView::GetValueDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  auto pointer = &data_->value;
  *output = ::mojo_base::mojom::ValueDataView(pointer, context_);
}


inline void PrefUpdateDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PrefUpdateDataView::GetValueDataView(
    PrefUpdateValueDataView* output) {
  auto pointer = &data_->value;
  *output = PrefUpdateValueDataView(pointer, context_);
}


inline void PrefRegistryDataView::GetPrivateRegistrationsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->private_registrations.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PrefRegistryDataView::GetForeignRegistrationsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->foreign_registrations.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PrefRegistryDataView::GetPublicRegistrationsDataView(
    mojo::ArrayDataView<PrefRegistrationDataView>* output) {
  auto pointer = data_->public_registrations.Get();
  *output = mojo::ArrayDataView<PrefRegistrationDataView>(pointer, context_);
}


inline void PrefRegistrationDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PrefRegistrationDataView::GetDefaultValueDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  auto pointer = &data_->default_value;
  *output = ::mojo_base::mojom::ValueDataView(pointer, context_);
}


inline void TrackedPersistentPrefStoreConfigurationDataView::GetUnprotectedPrefFilenameDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->unprotected_pref_filename.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void TrackedPersistentPrefStoreConfigurationDataView::GetProtectedPrefFilenameDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->protected_pref_filename.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void TrackedPersistentPrefStoreConfigurationDataView::GetTrackingConfigurationDataView(
    mojo::ArrayDataView<TrackedPreferenceMetadataDataView>* output) {
  auto pointer = data_->tracking_configuration.Get();
  *output = mojo::ArrayDataView<TrackedPreferenceMetadataDataView>(pointer, context_);
}
inline void TrackedPersistentPrefStoreConfigurationDataView::GetSeedDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->seed.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrackedPersistentPrefStoreConfigurationDataView::GetLegacyDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->legacy_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrackedPersistentPrefStoreConfigurationDataView::GetRegistrySeedDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->registry_seed.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrackedPersistentPrefStoreConfigurationDataView::GetRegistryPathDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->registry_path.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void TrackedPreferenceMetadataDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PrefStoreObserver_OnPrefsChanged_ParamsDataView::GetUpdatesDataView(
    mojo::ArrayDataView<PrefUpdateDataView>* output) {
  auto pointer = data_->updates.Get();
  *output = mojo::ArrayDataView<PrefUpdateDataView>(pointer, context_);
}






inline void PrefStoreConnector_Connect_ParamsDataView::GetPrefRegistryDataView(
    PrefRegistryDataView* output) {
  auto pointer = data_->pref_registry.Get();
  *output = PrefRegistryDataView(pointer, context_);
}


inline void PrefStoreConnector_Connect_ResponseParamsDataView::GetConnectionDataView(
    PersistentPrefStoreConnectionDataView* output) {
  auto pointer = data_->connection.Get();
  *output = PersistentPrefStoreConnectionDataView(pointer, context_);
}
inline void PrefStoreConnector_Connect_ResponseParamsDataView::GetUnderlayDataView(
    IncognitoPersistentPrefStoreConnectionDataView* output) {
  auto pointer = data_->underlay.Get();
  *output = IncognitoPersistentPrefStoreConnectionDataView(pointer, context_);
}
inline void PrefStoreConnector_Connect_ResponseParamsDataView::GetRemoteDefaultsDataView(
    mojo::ArrayDataView<PrefRegistrationDataView>* output) {
  auto pointer = data_->remote_defaults.Get();
  *output = mojo::ArrayDataView<PrefRegistrationDataView>(pointer, context_);
}
inline void PrefStoreConnector_Connect_ResponseParamsDataView::GetConnectionsDataView(
    mojo::MapDataView<PrefStoreType, PrefStoreConnectionDataView>* output) {
  auto pointer = data_->connections.Get();
  *output = mojo::MapDataView<PrefStoreType, PrefStoreConnectionDataView>(pointer, context_);
}


inline void PersistentPrefStore_SetValues_ParamsDataView::GetUpdatesDataView(
    mojo::ArrayDataView<PrefUpdateDataView>* output) {
  auto pointer = data_->updates.Get();
  *output = mojo::ArrayDataView<PrefUpdateDataView>(pointer, context_);
}


inline void PersistentPrefStore_RequestValue_ParamsDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PersistentPrefStore_RequestValue_ParamsDataView::GetSubPrefPathDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->sub_pref_path.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}














inline void PrefUpdateValueDataView::GetSplitUpdatesDataView(
    mojo::ArrayDataView<SubPrefUpdateDataView>* output) {
  DCHECK(is_split_updates());
  *output = mojo::ArrayDataView<SubPrefUpdateDataView>(data_->data.f_split_updates.Get(), context_);
}
inline void PrefUpdateValueDataView::GetAtomicUpdateDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  DCHECK(is_atomic_update());
  *output = ::mojo_base::mojom::ValueDataView(data_->data.f_atomic_update.Get(), context_);
}


}  // namespace mojom
}  // namespace prefs

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_H_
