// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/frame/find_in_page.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class StopFindAction : int32_t {
  kStopFindActionClearSelection,
  kStopFindActionKeepSelection,
  kStopFindActionActivateSelection,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, StopFindAction value) {
  switch(value) {
    case StopFindAction::kStopFindActionClearSelection:
      return os << "StopFindAction::kStopFindActionClearSelection";
    case StopFindAction::kStopFindActionKeepSelection:
      return os << "StopFindAction::kStopFindActionKeepSelection";
    case StopFindAction::kStopFindActionActivateSelection:
      return os << "StopFindAction::kStopFindActionActivateSelection";
    default:
      return os << "Unknown StopFindAction value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(StopFindAction value) {
  return internal::StopFindAction_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FindInPageInterfaceBase {};

using FindInPagePtrDataView =
    mojo::InterfacePtrDataView<FindInPageInterfaceBase>;
using FindInPageRequestDataView =
    mojo::InterfaceRequestDataView<FindInPageInterfaceBase>;
using FindInPageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FindInPageInterfaceBase>;
using FindInPageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FindInPageInterfaceBase>;
class FindInPage_StopFinding_ParamsDataView {
 public:
  FindInPage_StopFinding_ParamsDataView() {}

  FindInPage_StopFinding_ParamsDataView(
      internal::FindInPage_StopFinding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::blink::mojom::StopFindAction>(
        data_value, output);
  }

  StopFindAction action() const {
    return static_cast<StopFindAction>(data_->action);
  }
 private:
  internal::FindInPage_StopFinding_Params_Data* data_ = nullptr;
};

class FindInPage_ClearActiveFindMatch_ParamsDataView {
 public:
  FindInPage_ClearActiveFindMatch_ParamsDataView() {}

  FindInPage_ClearActiveFindMatch_ParamsDataView(
      internal::FindInPage_ClearActiveFindMatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FindInPage_ClearActiveFindMatch_Params_Data* data_ = nullptr;
};

class FindInPage_GetNearestFindResult_ParamsDataView {
 public:
  FindInPage_GetNearestFindResult_ParamsDataView() {}

  FindInPage_GetNearestFindResult_ParamsDataView(
      internal::FindInPage_GetNearestFindResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_GetNearestFindResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_GetNearestFindResult_ResponseParamsDataView {
 public:
  FindInPage_GetNearestFindResult_ResponseParamsDataView() {}

  FindInPage_GetNearestFindResult_ResponseParamsDataView(
      internal::FindInPage_GetNearestFindResult_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float distance() const {
    return data_->distance;
  }
 private:
  internal::FindInPage_GetNearestFindResult_ResponseParams_Data* data_ = nullptr;
};

class FindInPage_ActivateNearestFindResult_ParamsDataView {
 public:
  FindInPage_ActivateNearestFindResult_ParamsDataView() {}

  FindInPage_ActivateNearestFindResult_ParamsDataView(
      internal::FindInPage_ActivateNearestFindResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_ActivateNearestFindResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_ActivateNearestFindResult_ResponseParamsDataView {
 public:
  FindInPage_ActivateNearestFindResult_ResponseParamsDataView() {}

  FindInPage_ActivateNearestFindResult_ResponseParamsDataView(
      internal::FindInPage_ActivateNearestFindResult_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetActiveMatchRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActiveMatchRect(UserType* output) {
    auto* pointer = data_->active_match_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  int32_t number_of_matches() const {
    return data_->number_of_matches;
  }
  int32_t active_match_ordinal() const {
    return data_->active_match_ordinal;
  }
  bool final_update() const {
    return data_->final_update;
  }
 private:
  internal::FindInPage_ActivateNearestFindResult_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FindInPage_FindMatchRects_ParamsDataView {
 public:
  FindInPage_FindMatchRects_ParamsDataView() {}

  FindInPage_FindMatchRects_ParamsDataView(
      internal::FindInPage_FindMatchRects_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t current_version() const {
    return data_->current_version;
  }
 private:
  internal::FindInPage_FindMatchRects_Params_Data* data_ = nullptr;
};

class FindInPage_FindMatchRects_ResponseParamsDataView {
 public:
  FindInPage_FindMatchRects_ResponseParamsDataView() {}

  FindInPage_FindMatchRects_ResponseParamsDataView(
      internal::FindInPage_FindMatchRects_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t version() const {
    return data_->version;
  }
  inline void GetRectsDataView(
      mojo::ArrayDataView<::gfx::mojom::RectFDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRects(UserType* output) {
    auto* pointer = data_->rects.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectFDataView>>(
        pointer, output, context_);
  }
  inline void GetActiveMatchRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActiveMatchRect(UserType* output) {
    auto* pointer = data_->active_match_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
 private:
  internal::FindInPage_FindMatchRects_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::StopFindAction>
    : public mojo::internal::EnumHashImpl<::blink::mojom::StopFindAction> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::StopFindAction, ::blink::mojom::StopFindAction> {
  static ::blink::mojom::StopFindAction ToMojom(::blink::mojom::StopFindAction input) { return input; }
  static bool FromMojom(::blink::mojom::StopFindAction input, ::blink::mojom::StopFindAction* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::StopFindAction, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::StopFindAction, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::StopFindAction>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {





inline void FindInPage_GetNearestFindResult_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}




inline void FindInPage_ActivateNearestFindResult_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void FindInPage_ActivateNearestFindResult_ResponseParamsDataView::GetActiveMatchRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->active_match_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}




inline void FindInPage_FindMatchRects_ResponseParamsDataView::GetRectsDataView(
    mojo::ArrayDataView<::gfx::mojom::RectFDataView>* output) {
  auto pointer = data_->rects.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectFDataView>(pointer, context_);
}
inline void FindInPage_FindMatchRects_ResponseParamsDataView::GetActiveMatchRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->active_match_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_H_
