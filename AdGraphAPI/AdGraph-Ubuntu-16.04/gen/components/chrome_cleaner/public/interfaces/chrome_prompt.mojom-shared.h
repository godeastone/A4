// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_SHARED_H_
#define COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_SHARED_H_

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
#include "components/chrome_cleaner/public/interfaces/chrome_prompt.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome_cleaner {
namespace mojom {
class FilePathDataView;

class RegistryKeyDataView;



}  // namespace mojom
}  // namespace chrome_cleaner

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::chrome_cleaner::mojom::FilePathDataView> {
  using Data = ::chrome_cleaner::mojom::internal::FilePath_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::chrome_cleaner::mojom::RegistryKeyDataView> {
  using Data = ::chrome_cleaner::mojom::internal::RegistryKey_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace chrome_cleaner {
namespace mojom {

enum class PromptAcceptance : int32_t {
  UNSPECIFIED = 0,
  ACCEPTED_WITH_LOGS = 1,
  ACCEPTED_WITHOUT_LOGS = 2,
  DENIED = 3,
  NUM_VALUES,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, PromptAcceptance value) {
  switch(value) {
    case PromptAcceptance::UNSPECIFIED:
      return os << "PromptAcceptance::UNSPECIFIED";
    case PromptAcceptance::ACCEPTED_WITH_LOGS:
      return os << "PromptAcceptance::ACCEPTED_WITH_LOGS";
    case PromptAcceptance::ACCEPTED_WITHOUT_LOGS:
      return os << "PromptAcceptance::ACCEPTED_WITHOUT_LOGS";
    case PromptAcceptance::DENIED:
      return os << "PromptAcceptance::DENIED";
    case PromptAcceptance::NUM_VALUES:
      return os << "PromptAcceptance::NUM_VALUES";
    default:
      return os << "Unknown PromptAcceptance value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PromptAcceptance value) {
  return internal::PromptAcceptance_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ChromePromptInterfaceBase {};

using ChromePromptPtrDataView =
    mojo::InterfacePtrDataView<ChromePromptInterfaceBase>;
using ChromePromptRequestDataView =
    mojo::InterfaceRequestDataView<ChromePromptInterfaceBase>;
using ChromePromptAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChromePromptInterfaceBase>;
using ChromePromptAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChromePromptInterfaceBase>;
class FilePathDataView {
 public:
  FilePathDataView() {}

  FilePathDataView(
      internal::FilePath_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
 private:
  internal::FilePath_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RegistryKeyDataView {
 public:
  RegistryKeyDataView() {}

  RegistryKeyDataView(
      internal::RegistryKey_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
 private:
  internal::RegistryKey_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromePrompt_PromptUser_ParamsDataView {
 public:
  ChromePrompt_PromptUser_ParamsDataView() {}

  ChromePrompt_PromptUser_ParamsDataView(
      internal::ChromePrompt_PromptUser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilesToDeleteDataView(
      mojo::ArrayDataView<FilePathDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilesToDelete(UserType* output) {
    auto* pointer = data_->files_to_delete.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome_cleaner::mojom::FilePathDataView>>(
        pointer, output, context_);
  }
  inline void GetRegistryKeysDataView(
      mojo::ArrayDataView<RegistryKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistryKeys(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->registry_keys.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome_cleaner::mojom::RegistryKeyDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ChromePrompt_PromptUser_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromePrompt_PromptUser_ResponseParamsDataView {
 public:
  ChromePrompt_PromptUser_ResponseParamsDataView() {}

  ChromePrompt_PromptUser_ResponseParamsDataView(
      internal::ChromePrompt_PromptUser_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPromptAcceptance(UserType* output) const {
    auto data_value = data_->prompt_acceptance;
    return mojo::internal::Deserialize<::chrome_cleaner::mojom::PromptAcceptance>(
        data_value, output);
  }

  PromptAcceptance prompt_acceptance() const {
    return static_cast<PromptAcceptance>(data_->prompt_acceptance);
  }
 private:
  internal::ChromePrompt_PromptUser_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome_cleaner

namespace std {

template <>
struct hash<::chrome_cleaner::mojom::PromptAcceptance>
    : public mojo::internal::EnumHashImpl<::chrome_cleaner::mojom::PromptAcceptance> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::chrome_cleaner::mojom::PromptAcceptance, ::chrome_cleaner::mojom::PromptAcceptance> {
  static ::chrome_cleaner::mojom::PromptAcceptance ToMojom(::chrome_cleaner::mojom::PromptAcceptance input) { return input; }
  static bool FromMojom(::chrome_cleaner::mojom::PromptAcceptance input, ::chrome_cleaner::mojom::PromptAcceptance* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome_cleaner::mojom::PromptAcceptance, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::chrome_cleaner::mojom::PromptAcceptance, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::chrome_cleaner::mojom::PromptAcceptance>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome_cleaner::mojom::FilePathDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome_cleaner::mojom::FilePathDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome_cleaner::mojom::internal::FilePath_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    const mojo::internal::ContainerValidateParams value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_value, buffer, &value_writer, &value_validate_params,
        context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in FilePath struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome_cleaner::mojom::internal::FilePath_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome_cleaner::mojom::FilePathDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome_cleaner::mojom::RegistryKeyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome_cleaner::mojom::RegistryKeyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome_cleaner::mojom::internal::RegistryKey_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    const mojo::internal::ContainerValidateParams value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_value, buffer, &value_writer, &value_validate_params,
        context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in RegistryKey struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome_cleaner::mojom::internal::RegistryKey_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome_cleaner::mojom::RegistryKeyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace chrome_cleaner {
namespace mojom {

inline void FilePathDataView::GetValueDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}


inline void RegistryKeyDataView::GetValueDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}


inline void ChromePrompt_PromptUser_ParamsDataView::GetFilesToDeleteDataView(
    mojo::ArrayDataView<FilePathDataView>* output) {
  auto pointer = data_->files_to_delete.Get();
  *output = mojo::ArrayDataView<FilePathDataView>(pointer, context_);
}
inline void ChromePrompt_PromptUser_ParamsDataView::GetRegistryKeysDataView(
    mojo::ArrayDataView<RegistryKeyDataView>* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->registry_keys.Get() : nullptr;
  *output = mojo::ArrayDataView<RegistryKeyDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace chrome_cleaner

#endif  // COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_SHARED_H_
