// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_H_
#define CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_H_

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
#include "chrome/browser/ui/webui/discards/discards.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojom {
class TabDiscardsInfoDataView;



}  // namespace mojom

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojom::TabDiscardsInfoDataView> {
  using Data = ::mojom::internal::TabDiscardsInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojom {

enum class LifecycleUnitVisibility : int32_t {
  HIDDEN = 0,
  OCCLUDED = 1,
  VISIBLE = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, LifecycleUnitVisibility value) {
  switch(value) {
    case LifecycleUnitVisibility::HIDDEN:
      return os << "LifecycleUnitVisibility::HIDDEN";
    case LifecycleUnitVisibility::OCCLUDED:
      return os << "LifecycleUnitVisibility::OCCLUDED";
    case LifecycleUnitVisibility::VISIBLE:
      return os << "LifecycleUnitVisibility::VISIBLE";
    default:
      return os << "Unknown LifecycleUnitVisibility value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LifecycleUnitVisibility value) {
  return internal::LifecycleUnitVisibility_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DiscardsDetailsProviderInterfaceBase {};

using DiscardsDetailsProviderPtrDataView =
    mojo::InterfacePtrDataView<DiscardsDetailsProviderInterfaceBase>;
using DiscardsDetailsProviderRequestDataView =
    mojo::InterfaceRequestDataView<DiscardsDetailsProviderInterfaceBase>;
using DiscardsDetailsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DiscardsDetailsProviderInterfaceBase>;
using DiscardsDetailsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DiscardsDetailsProviderInterfaceBase>;
class TabDiscardsInfoDataView {
 public:
  TabDiscardsInfoDataView() {}

  TabDiscardsInfoDataView(
      internal::TabDiscardsInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTabUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTabUrl(UserType* output) {
    auto* pointer = data_->tab_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibility(UserType* output) const {
    auto data_value = data_->visibility;
    return mojo::internal::Deserialize<::mojom::LifecycleUnitVisibility>(
        data_value, output);
  }

  LifecycleUnitVisibility visibility() const {
    return static_cast<LifecycleUnitVisibility>(data_->visibility);
  }
  bool is_media() const {
    return data_->is_media;
  }
  bool is_discarded() const {
    return data_->is_discarded;
  }
  bool is_frozen() const {
    return data_->is_frozen;
  }
  int32_t discard_count() const {
    return data_->discard_count;
  }
  int32_t utility_rank() const {
    return data_->utility_rank;
  }
  int32_t last_active_seconds() const {
    return data_->last_active_seconds;
  }
  int32_t id() const {
    return data_->id;
  }
  bool is_auto_discardable() const {
    return data_->is_auto_discardable;
  }
  bool has_reactivation_score() const {
    return data_->has_reactivation_score;
  }
  double reactivation_score() const {
    return data_->reactivation_score;
  }
 private:
  internal::TabDiscardsInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DiscardsDetailsProvider_GetTabDiscardsInfo_ParamsDataView {
 public:
  DiscardsDetailsProvider_GetTabDiscardsInfo_ParamsDataView() {}

  DiscardsDetailsProvider_GetTabDiscardsInfo_ParamsDataView(
      internal::DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParamsDataView {
 public:
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParamsDataView() {}

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParamsDataView(
      internal::DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfosDataView(
      mojo::ArrayDataView<TabDiscardsInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfos(UserType* output) {
    auto* pointer = data_->infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::TabDiscardsInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DiscardsDetailsProvider_SetAutoDiscardable_ParamsDataView {
 public:
  DiscardsDetailsProvider_SetAutoDiscardable_ParamsDataView() {}

  DiscardsDetailsProvider_SetAutoDiscardable_ParamsDataView(
      internal::DiscardsDetailsProvider_SetAutoDiscardable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  bool is_auto_discardable() const {
    return data_->is_auto_discardable;
  }
 private:
  internal::DiscardsDetailsProvider_SetAutoDiscardable_Params_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_SetAutoDiscardable_ResponseParamsDataView {
 public:
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParamsDataView() {}

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParamsDataView(
      internal::DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_DiscardById_ParamsDataView {
 public:
  DiscardsDetailsProvider_DiscardById_ParamsDataView() {}

  DiscardsDetailsProvider_DiscardById_ParamsDataView(
      internal::DiscardsDetailsProvider_DiscardById_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  bool urgent() const {
    return data_->urgent;
  }
 private:
  internal::DiscardsDetailsProvider_DiscardById_Params_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_DiscardById_ResponseParamsDataView {
 public:
  DiscardsDetailsProvider_DiscardById_ResponseParamsDataView() {}

  DiscardsDetailsProvider_DiscardById_ResponseParamsDataView(
      internal::DiscardsDetailsProvider_DiscardById_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DiscardsDetailsProvider_DiscardById_ResponseParams_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_FreezeById_ParamsDataView {
 public:
  DiscardsDetailsProvider_FreezeById_ParamsDataView() {}

  DiscardsDetailsProvider_FreezeById_ParamsDataView(
      internal::DiscardsDetailsProvider_FreezeById_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t tab_id() const {
    return data_->tab_id;
  }
 private:
  internal::DiscardsDetailsProvider_FreezeById_Params_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_Discard_ParamsDataView {
 public:
  DiscardsDetailsProvider_Discard_ParamsDataView() {}

  DiscardsDetailsProvider_Discard_ParamsDataView(
      internal::DiscardsDetailsProvider_Discard_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool urgent() const {
    return data_->urgent;
  }
 private:
  internal::DiscardsDetailsProvider_Discard_Params_Data* data_ = nullptr;
};

class DiscardsDetailsProvider_Discard_ResponseParamsDataView {
 public:
  DiscardsDetailsProvider_Discard_ResponseParamsDataView() {}

  DiscardsDetailsProvider_Discard_ResponseParamsDataView(
      internal::DiscardsDetailsProvider_Discard_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DiscardsDetailsProvider_Discard_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom

namespace std {

template <>
struct hash<::mojom::LifecycleUnitVisibility>
    : public mojo::internal::EnumHashImpl<::mojom::LifecycleUnitVisibility> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojom::LifecycleUnitVisibility, ::mojom::LifecycleUnitVisibility> {
  static ::mojom::LifecycleUnitVisibility ToMojom(::mojom::LifecycleUnitVisibility input) { return input; }
  static bool FromMojom(::mojom::LifecycleUnitVisibility input, ::mojom::LifecycleUnitVisibility* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::LifecycleUnitVisibility, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojom::LifecycleUnitVisibility, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojom::LifecycleUnitVisibility>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::TabDiscardsInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::TabDiscardsInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::TabDiscardsInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::tab_url, input, custom_context)) in_tab_url = CallWithContext(Traits::tab_url, input, custom_context);
    typename decltype((*output)->tab_url)::BaseType::BufferWriter
        tab_url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_tab_url, buffer, &tab_url_writer, context);
    (*output)->tab_url.Set(
        tab_url_writer.is_null() ? nullptr : tab_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tab_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tab_url in TabDiscardsInfo struct");
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in TabDiscardsInfo struct");
    mojo::internal::Serialize<::mojom::LifecycleUnitVisibility>(
        CallWithContext(Traits::visibility, input, custom_context), &(*output)->visibility);
    (*output)->is_media = CallWithContext(Traits::is_media, input, custom_context);
    (*output)->is_discarded = CallWithContext(Traits::is_discarded, input, custom_context);
    (*output)->is_frozen = CallWithContext(Traits::is_frozen, input, custom_context);
    (*output)->discard_count = CallWithContext(Traits::discard_count, input, custom_context);
    (*output)->utility_rank = CallWithContext(Traits::utility_rank, input, custom_context);
    (*output)->last_active_seconds = CallWithContext(Traits::last_active_seconds, input, custom_context);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    (*output)->is_auto_discardable = CallWithContext(Traits::is_auto_discardable, input, custom_context);
    (*output)->has_reactivation_score = CallWithContext(Traits::has_reactivation_score, input, custom_context);
    (*output)->reactivation_score = CallWithContext(Traits::reactivation_score, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::TabDiscardsInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::TabDiscardsInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojom {

inline void TabDiscardsInfoDataView::GetTabUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tab_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TabDiscardsInfoDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParamsDataView::GetInfosDataView(
    mojo::ArrayDataView<TabDiscardsInfoDataView>* output) {
  auto pointer = data_->infos.Get();
  *output = mojo::ArrayDataView<TabDiscardsInfoDataView>(pointer, context_);
}

















}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_H_
