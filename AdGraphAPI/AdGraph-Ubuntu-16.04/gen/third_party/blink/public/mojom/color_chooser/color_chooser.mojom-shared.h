// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COLOR_CHOOSER_COLOR_CHOOSER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COLOR_CHOOSER_COLOR_CHOOSER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/color_chooser/color_chooser.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class ColorSuggestionDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ColorSuggestionDataView> {
  using Data = ::blink::mojom::internal::ColorSuggestion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ColorChooserFactoryInterfaceBase {};

using ColorChooserFactoryPtrDataView =
    mojo::InterfacePtrDataView<ColorChooserFactoryInterfaceBase>;
using ColorChooserFactoryRequestDataView =
    mojo::InterfaceRequestDataView<ColorChooserFactoryInterfaceBase>;
using ColorChooserFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ColorChooserFactoryInterfaceBase>;
using ColorChooserFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ColorChooserFactoryInterfaceBase>;
class ColorChooserInterfaceBase {};

using ColorChooserPtrDataView =
    mojo::InterfacePtrDataView<ColorChooserInterfaceBase>;
using ColorChooserRequestDataView =
    mojo::InterfaceRequestDataView<ColorChooserInterfaceBase>;
using ColorChooserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ColorChooserInterfaceBase>;
using ColorChooserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ColorChooserInterfaceBase>;
class ColorChooserClientInterfaceBase {};

using ColorChooserClientPtrDataView =
    mojo::InterfacePtrDataView<ColorChooserClientInterfaceBase>;
using ColorChooserClientRequestDataView =
    mojo::InterfaceRequestDataView<ColorChooserClientInterfaceBase>;
using ColorChooserClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ColorChooserClientInterfaceBase>;
using ColorChooserClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ColorChooserClientInterfaceBase>;
class ColorSuggestionDataView {
 public:
  ColorSuggestionDataView() {}

  ColorSuggestionDataView(
      internal::ColorSuggestion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ColorSuggestion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ColorChooserFactory_OpenColorChooser_ParamsDataView {
 public:
  ColorChooserFactory_OpenColorChooser_ParamsDataView() {}

  ColorChooserFactory_OpenColorChooser_ParamsDataView(
      internal::ColorChooserFactory_OpenColorChooser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeChooser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ColorChooserRequestDataView>(
            &data_->chooser, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ColorChooserClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t color() const {
    return data_->color;
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<ColorSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ColorSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ColorChooserFactory_OpenColorChooser_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ColorChooser_SetSelectedColor_ParamsDataView {
 public:
  ColorChooser_SetSelectedColor_ParamsDataView() {}

  ColorChooser_SetSelectedColor_ParamsDataView(
      internal::ColorChooser_SetSelectedColor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::ColorChooser_SetSelectedColor_Params_Data* data_ = nullptr;
};

class ColorChooserClient_DidChooseColor_ParamsDataView {
 public:
  ColorChooserClient_DidChooseColor_ParamsDataView() {}

  ColorChooserClient_DidChooseColor_ParamsDataView(
      internal::ColorChooserClient_DidChooseColor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
 private:
  internal::ColorChooserClient_DidChooseColor_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ColorSuggestionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ColorSuggestionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ColorSuggestion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->color = CallWithContext(Traits::color, input, custom_context);
    decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in ColorSuggestion struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ColorSuggestion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ColorSuggestionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ColorSuggestionDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ColorChooserFactory_OpenColorChooser_ParamsDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<ColorSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<ColorSuggestionDataView>(pointer, context_);
}







}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COLOR_CHOOSER_COLOR_CHOOSER_MOJOM_SHARED_H_
