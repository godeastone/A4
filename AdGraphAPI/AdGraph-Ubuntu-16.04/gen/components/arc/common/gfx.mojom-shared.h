// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_GFX_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_GFX_MOJOM_SHARED_H_

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
#include "components/arc/common/gfx.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace arc {
namespace mojom {
class RectDataView;

class RangeDataView;



}  // namespace mojom
}  // namespace arc

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::arc::mojom::RectDataView> {
  using Data = ::arc::mojom::internal::Rect_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::arc::mojom::RangeDataView> {
  using Data = ::arc::mojom::internal::Range_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace arc {
namespace mojom {
class RectDataView {
 public:
  RectDataView() {}

  RectDataView(
      internal::Rect_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t left() const {
    return data_->left;
  }
  int32_t top() const {
    return data_->top;
  }
  int32_t right() const {
    return data_->right;
  }
  int32_t bottom() const {
    return data_->bottom;
  }
 private:
  internal::Rect_Data* data_ = nullptr;
};

class RangeDataView {
 public:
  RangeDataView() {}

  RangeDataView(
      internal::Range_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t start() const {
    return data_->start;
  }
  uint32_t end() const {
    return data_->end;
  }
 private:
  internal::Range_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace arc

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::RectDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::RectDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::Rect_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->left = CallWithContext(Traits::left, input, custom_context);
    (*output)->top = CallWithContext(Traits::top, input, custom_context);
    (*output)->right = CallWithContext(Traits::right, input, custom_context);
    (*output)->bottom = CallWithContext(Traits::bottom, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::Rect_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::RectDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::RangeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::RangeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::Range_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->start = CallWithContext(Traits::start, input, custom_context);
    (*output)->end = CallWithContext(Traits::end, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::Range_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::RangeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace arc {
namespace mojom {






}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_GFX_MOJOM_SHARED_H_
