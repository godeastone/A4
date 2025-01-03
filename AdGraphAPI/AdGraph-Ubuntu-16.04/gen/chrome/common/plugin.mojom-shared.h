// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PLUGIN_MOJOM_SHARED_H_
#define CHROME_COMMON_PLUGIN_MOJOM_SHARED_H_

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
#include "chrome/common/plugin.mojom-shared-internal.h"
#include "content/public/common/webplugininfo.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {
class PluginInfoDataView;

class PluginParamDataView;



}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::chrome::mojom::PluginInfoDataView> {
  using Data = ::chrome::mojom::internal::PluginInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::chrome::mojom::PluginParamDataView> {
  using Data = ::chrome::mojom::internal::PluginParam_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {

enum class PluginStatus : int32_t {
  kAllowed,
  kBlocked,
  kBlockedByPolicy,
  kBlockedNoLoading,
  kComponentUpdateRequired,
  kDisabled,
  kFlashHiddenPreferHtml,
  kNotFound,
  kOutdatedBlocked,
  kOutdatedDisallowed,
  kPlayImportantContent,
  kRestartRequired,
  kUnauthorized,
  kMinValue = 0,
  kMaxValue = 12,
};

inline std::ostream& operator<<(std::ostream& os, PluginStatus value) {
  switch(value) {
    case PluginStatus::kAllowed:
      return os << "PluginStatus::kAllowed";
    case PluginStatus::kBlocked:
      return os << "PluginStatus::kBlocked";
    case PluginStatus::kBlockedByPolicy:
      return os << "PluginStatus::kBlockedByPolicy";
    case PluginStatus::kBlockedNoLoading:
      return os << "PluginStatus::kBlockedNoLoading";
    case PluginStatus::kComponentUpdateRequired:
      return os << "PluginStatus::kComponentUpdateRequired";
    case PluginStatus::kDisabled:
      return os << "PluginStatus::kDisabled";
    case PluginStatus::kFlashHiddenPreferHtml:
      return os << "PluginStatus::kFlashHiddenPreferHtml";
    case PluginStatus::kNotFound:
      return os << "PluginStatus::kNotFound";
    case PluginStatus::kOutdatedBlocked:
      return os << "PluginStatus::kOutdatedBlocked";
    case PluginStatus::kOutdatedDisallowed:
      return os << "PluginStatus::kOutdatedDisallowed";
    case PluginStatus::kPlayImportantContent:
      return os << "PluginStatus::kPlayImportantContent";
    case PluginStatus::kRestartRequired:
      return os << "PluginStatus::kRestartRequired";
    case PluginStatus::kUnauthorized:
      return os << "PluginStatus::kUnauthorized";
    default:
      return os << "Unknown PluginStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PluginStatus value) {
  return internal::PluginStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PluginHostInterfaceBase {};

using PluginHostPtrDataView =
    mojo::InterfacePtrDataView<PluginHostInterfaceBase>;
using PluginHostRequestDataView =
    mojo::InterfaceRequestDataView<PluginHostInterfaceBase>;
using PluginHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PluginHostInterfaceBase>;
using PluginHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PluginHostInterfaceBase>;
class PluginAuthHostInterfaceBase {};

using PluginAuthHostPtrDataView =
    mojo::InterfacePtrDataView<PluginAuthHostInterfaceBase>;
using PluginAuthHostRequestDataView =
    mojo::InterfaceRequestDataView<PluginAuthHostInterfaceBase>;
using PluginAuthHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PluginAuthHostInterfaceBase>;
using PluginAuthHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PluginAuthHostInterfaceBase>;
class PluginInfoHostInterfaceBase {};

using PluginInfoHostPtrDataView =
    mojo::InterfacePtrDataView<PluginInfoHostInterfaceBase>;
using PluginInfoHostRequestDataView =
    mojo::InterfaceRequestDataView<PluginInfoHostInterfaceBase>;
using PluginInfoHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PluginInfoHostInterfaceBase>;
using PluginInfoHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PluginInfoHostInterfaceBase>;
class PluginRendererInterfaceBase {};

using PluginRendererPtrDataView =
    mojo::InterfacePtrDataView<PluginRendererInterfaceBase>;
using PluginRendererRequestDataView =
    mojo::InterfaceRequestDataView<PluginRendererInterfaceBase>;
using PluginRendererAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PluginRendererInterfaceBase>;
using PluginRendererAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PluginRendererInterfaceBase>;
class PluginInfoDataView {
 public:
  PluginInfoDataView() {}

  PluginInfoDataView(
      internal::PluginInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::chrome::mojom::PluginStatus>(
        data_value, output);
  }

  PluginStatus status() const {
    return static_cast<PluginStatus>(data_->status);
  }
  inline void GetPluginDataView(
      ::content::mojom::WebPluginInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlugin(UserType* output) {
    auto* pointer = data_->plugin.Get();
    return mojo::internal::Deserialize<::content::mojom::WebPluginInfoDataView>(
        pointer, output, context_);
  }
  inline void GetActualMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActualMimeType(UserType* output) {
    auto* pointer = data_->actual_mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdentifierDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupIdentifier(UserType* output) {
    auto* pointer = data_->group_identifier.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupName(UserType* output) {
    auto* pointer = data_->group_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginParamDataView {
 public:
  PluginParamDataView() {}

  PluginParamDataView(
      internal::PluginParam_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginParam_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginHost_ShowFlashPermissionBubble_ParamsDataView {
 public:
  PluginHost_ShowFlashPermissionBubble_ParamsDataView() {}

  PluginHost_ShowFlashPermissionBubble_ParamsDataView(
      internal::PluginHost_ShowFlashPermissionBubble_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginHost_ShowFlashPermissionBubble_Params_Data* data_ = nullptr;
};

class PluginHost_CouldNotLoadPlugin_ParamsDataView {
 public:
  PluginHost_CouldNotLoadPlugin_ParamsDataView() {}

  PluginHost_CouldNotLoadPlugin_ParamsDataView(
      internal::PluginHost_CouldNotLoadPlugin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginHost_CouldNotLoadPlugin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginHost_BlockedOutdatedPlugin_ParamsDataView {
 public:
  PluginHost_BlockedOutdatedPlugin_ParamsDataView() {}

  PluginHost_BlockedOutdatedPlugin_ParamsDataView(
      internal::PluginHost_BlockedOutdatedPlugin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePluginRenderer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::PluginRendererPtrDataView>(
            &data_->plugin_renderer, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginHost_BlockedOutdatedPlugin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginHost_BlockedComponentUpdatedPlugin_ParamsDataView {
 public:
  PluginHost_BlockedComponentUpdatedPlugin_ParamsDataView() {}

  PluginHost_BlockedComponentUpdatedPlugin_ParamsDataView(
      internal::PluginHost_BlockedComponentUpdatedPlugin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePluginRenderer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::PluginRendererPtrDataView>(
            &data_->plugin_renderer, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginHost_BlockedComponentUpdatedPlugin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginAuthHost_BlockedUnauthorizedPlugin_ParamsDataView {
 public:
  PluginAuthHost_BlockedUnauthorizedPlugin_ParamsDataView() {}

  PluginAuthHost_BlockedUnauthorizedPlugin_ParamsDataView(
      internal::PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginInfoHost_GetPluginInfo_ParamsDataView {
 public:
  PluginInfoHost_GetPluginInfo_ParamsDataView() {}

  PluginInfoHost_GetPluginInfo_ParamsDataView(
      internal::PluginInfoHost_GetPluginInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginInfoHost_GetPluginInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginInfoHost_GetPluginInfo_ResponseParamsDataView {
 public:
  PluginInfoHost_GetPluginInfo_ResponseParamsDataView() {}

  PluginInfoHost_GetPluginInfo_ResponseParamsDataView(
      internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPluginInfoDataView(
      PluginInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPluginInfo(UserType* output) {
    auto* pointer = data_->plugin_info.Get();
    return mojo::internal::Deserialize<::chrome::mojom::PluginInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginRenderer_FinishedDownloading_ParamsDataView {
 public:
  PluginRenderer_FinishedDownloading_ParamsDataView() {}

  PluginRenderer_FinishedDownloading_ParamsDataView(
      internal::PluginRenderer_FinishedDownloading_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginRenderer_FinishedDownloading_Params_Data* data_ = nullptr;
};

class PluginRenderer_UpdateSuccess_ParamsDataView {
 public:
  PluginRenderer_UpdateSuccess_ParamsDataView() {}

  PluginRenderer_UpdateSuccess_ParamsDataView(
      internal::PluginRenderer_UpdateSuccess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginRenderer_UpdateSuccess_Params_Data* data_ = nullptr;
};

class PluginRenderer_UpdateFailure_ParamsDataView {
 public:
  PluginRenderer_UpdateFailure_ParamsDataView() {}

  PluginRenderer_UpdateFailure_ParamsDataView(
      internal::PluginRenderer_UpdateFailure_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginRenderer_UpdateFailure_Params_Data* data_ = nullptr;
};

class PluginRenderer_UpdateDownloading_ParamsDataView {
 public:
  PluginRenderer_UpdateDownloading_ParamsDataView() {}

  PluginRenderer_UpdateDownloading_ParamsDataView(
      internal::PluginRenderer_UpdateDownloading_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PluginRenderer_UpdateDownloading_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

template <>
struct hash<::chrome::mojom::PluginStatus>
    : public mojo::internal::EnumHashImpl<::chrome::mojom::PluginStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::chrome::mojom::PluginStatus, ::chrome::mojom::PluginStatus> {
  static ::chrome::mojom::PluginStatus ToMojom(::chrome::mojom::PluginStatus input) { return input; }
  static bool FromMojom(::chrome::mojom::PluginStatus input, ::chrome::mojom::PluginStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::PluginStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::chrome::mojom::PluginStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::chrome::mojom::PluginStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::PluginInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::PluginInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome::mojom::internal::PluginInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::chrome::mojom::PluginStatus>(
        CallWithContext(Traits::status, input, custom_context), &(*output)->status);
    decltype(CallWithContext(Traits::plugin, input, custom_context)) in_plugin = CallWithContext(Traits::plugin, input, custom_context);
    typename decltype((*output)->plugin)::BaseType::BufferWriter
        plugin_writer;
    mojo::internal::Serialize<::content::mojom::WebPluginInfoDataView>(
        in_plugin, buffer, &plugin_writer, context);
    (*output)->plugin.Set(
        plugin_writer.is_null() ? nullptr : plugin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->plugin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null plugin in PluginInfo struct");
    decltype(CallWithContext(Traits::actual_mime_type, input, custom_context)) in_actual_mime_type = CallWithContext(Traits::actual_mime_type, input, custom_context);
    typename decltype((*output)->actual_mime_type)::BaseType::BufferWriter
        actual_mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_actual_mime_type, buffer, &actual_mime_type_writer, context);
    (*output)->actual_mime_type.Set(
        actual_mime_type_writer.is_null() ? nullptr : actual_mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->actual_mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null actual_mime_type in PluginInfo struct");
    decltype(CallWithContext(Traits::group_identifier, input, custom_context)) in_group_identifier = CallWithContext(Traits::group_identifier, input, custom_context);
    typename decltype((*output)->group_identifier)::BaseType::BufferWriter
        group_identifier_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_identifier, buffer, &group_identifier_writer, context);
    (*output)->group_identifier.Set(
        group_identifier_writer.is_null() ? nullptr : group_identifier_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_identifier.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_identifier in PluginInfo struct");
    decltype(CallWithContext(Traits::group_name, input, custom_context)) in_group_name = CallWithContext(Traits::group_name, input, custom_context);
    typename decltype((*output)->group_name)::BaseType::BufferWriter
        group_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_group_name, buffer, &group_name_writer, context);
    (*output)->group_name.Set(
        group_name_writer.is_null() ? nullptr : group_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_name in PluginInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome::mojom::internal::PluginInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::PluginInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::PluginParamDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::PluginParamDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome::mojom::internal::PluginParam_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PluginParam struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in PluginParam struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome::mojom::internal::PluginParam_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::PluginParamDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void PluginInfoDataView::GetPluginDataView(
    ::content::mojom::WebPluginInfoDataView* output) {
  auto pointer = data_->plugin.Get();
  *output = ::content::mojom::WebPluginInfoDataView(pointer, context_);
}
inline void PluginInfoDataView::GetActualMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->actual_mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginInfoDataView::GetGroupIdentifierDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_identifier.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginInfoDataView::GetGroupNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->group_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void PluginParamDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PluginParamDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void PluginHost_CouldNotLoadPlugin_ParamsDataView::GetFilePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void PluginHost_BlockedOutdatedPlugin_ParamsDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PluginHost_BlockedComponentUpdatedPlugin_ParamsDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PluginAuthHost_BlockedUnauthorizedPlugin_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PluginAuthHost_BlockedUnauthorizedPlugin_ParamsDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PluginInfoHost_GetPluginInfo_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PluginInfoHost_GetPluginInfo_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void PluginInfoHost_GetPluginInfo_ParamsDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PluginInfoHost_GetPluginInfo_ResponseParamsDataView::GetPluginInfoDataView(
    PluginInfoDataView* output) {
  auto pointer = data_->plugin_info.Get();
  *output = PluginInfoDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_PLUGIN_MOJOM_SHARED_H_
