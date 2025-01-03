// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_H_

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
#include "components/services/font/public/interfaces/font_service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace font_service {
namespace mojom {
class TypefaceStyleDataView;

class FontIdentityDataView;



}  // namespace mojom
}  // namespace font_service

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::font_service::mojom::TypefaceStyleDataView> {
  using Data = ::font_service::mojom::internal::TypefaceStyle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::font_service::mojom::FontIdentityDataView> {
  using Data = ::font_service::mojom::internal::FontIdentity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace font_service {
namespace mojom {

enum class TypefaceSlant : int32_t {
  ROMAN = 0,
  ITALIC = 1,
  OBLIQUE = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, TypefaceSlant value) {
  switch(value) {
    case TypefaceSlant::ROMAN:
      return os << "TypefaceSlant::ROMAN";
    case TypefaceSlant::ITALIC:
      return os << "TypefaceSlant::ITALIC";
    case TypefaceSlant::OBLIQUE:
      return os << "TypefaceSlant::OBLIQUE";
    default:
      return os << "Unknown TypefaceSlant value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TypefaceSlant value) {
  return internal::TypefaceSlant_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FontServiceInterfaceBase {};

using FontServicePtrDataView =
    mojo::InterfacePtrDataView<FontServiceInterfaceBase>;
using FontServiceRequestDataView =
    mojo::InterfaceRequestDataView<FontServiceInterfaceBase>;
using FontServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FontServiceInterfaceBase>;
using FontServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FontServiceInterfaceBase>;
class TypefaceStyleDataView {
 public:
  TypefaceStyleDataView() {}

  TypefaceStyleDataView(
      internal::TypefaceStyle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint16_t weight() const {
    return data_->weight;
  }
  uint8_t width() const {
    return data_->width;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSlant(UserType* output) const {
    auto data_value = data_->slant;
    return mojo::internal::Deserialize<::font_service::mojom::TypefaceSlant>(
        data_value, output);
  }

  TypefaceSlant slant() const {
    return static_cast<TypefaceSlant>(data_->slant);
  }
 private:
  internal::TypefaceStyle_Data* data_ = nullptr;
};

class FontIdentityDataView {
 public:
  FontIdentityDataView() {}

  FontIdentityDataView(
      internal::FontIdentity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  int32_t ttc_index() const {
    return data_->ttc_index;
  }
  inline void GetStrRepresentationDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrRepresentation(UserType* output) {
    auto* pointer = data_->str_representation.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontIdentity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFamilyName_ParamsDataView {
 public:
  FontService_MatchFamilyName_ParamsDataView() {}

  FontService_MatchFamilyName_ParamsDataView(
      internal::FontService_MatchFamilyName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFamilyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamilyName(UserType* output) {
    auto* pointer = data_->family_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStyleDataView(
      TypefaceStyleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStyle(UserType* output) {
    auto* pointer = data_->style.Get();
    return mojo::internal::Deserialize<::font_service::mojom::TypefaceStyleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFamilyName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_MatchFamilyName_ResponseParamsDataView {
 public:
  FontService_MatchFamilyName_ResponseParamsDataView() {}

  FontService_MatchFamilyName_ResponseParamsDataView(
      internal::FontService_MatchFamilyName_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      FontIdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::font_service::mojom::FontIdentityDataView>(
        pointer, output, context_);
  }
  inline void GetFamilyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFamilyName(UserType* output) {
    auto* pointer = data_->family_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStyleDataView(
      TypefaceStyleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStyle(UserType* output) {
    auto* pointer = data_->style.Get();
    return mojo::internal::Deserialize<::font_service::mojom::TypefaceStyleDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_MatchFamilyName_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FontService_OpenStream_ParamsDataView {
 public:
  FontService_OpenStream_ParamsDataView() {}

  FontService_OpenStream_ParamsDataView(
      internal::FontService_OpenStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id_number() const {
    return data_->id_number;
  }
 private:
  internal::FontService_OpenStream_Params_Data* data_ = nullptr;
};

class FontService_OpenStream_ResponseParamsDataView {
 public:
  FontService_OpenStream_ResponseParamsDataView() {}

  FontService_OpenStream_ResponseParamsDataView(
      internal::FontService_OpenStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFontHandleDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFontHandle(UserType* output) {
    auto* pointer = data_->font_handle.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::FontService_OpenStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace font_service

namespace std {

template <>
struct hash<::font_service::mojom::TypefaceSlant>
    : public mojo::internal::EnumHashImpl<::font_service::mojom::TypefaceSlant> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::font_service::mojom::TypefaceSlant, ::font_service::mojom::TypefaceSlant> {
  static ::font_service::mojom::TypefaceSlant ToMojom(::font_service::mojom::TypefaceSlant input) { return input; }
  static bool FromMojom(::font_service::mojom::TypefaceSlant input, ::font_service::mojom::TypefaceSlant* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::TypefaceSlant, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::font_service::mojom::TypefaceSlant, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::font_service::mojom::TypefaceSlant>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::TypefaceStyleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::font_service::mojom::TypefaceStyleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::font_service::mojom::internal::TypefaceStyle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->weight = CallWithContext(Traits::weight, input, custom_context);
    (*output)->width = CallWithContext(Traits::width, input, custom_context);
    mojo::internal::Serialize<::font_service::mojom::TypefaceSlant>(
        CallWithContext(Traits::slant, input, custom_context), &(*output)->slant);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::font_service::mojom::internal::TypefaceStyle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::font_service::mojom::TypefaceStyleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::font_service::mojom::FontIdentityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::font_service::mojom::FontIdentityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::font_service::mojom::internal::FontIdentity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    (*output)->ttc_index = CallWithContext(Traits::ttc_index, input, custom_context);
    decltype(CallWithContext(Traits::str_representation, input, custom_context)) in_str_representation = CallWithContext(Traits::str_representation, input, custom_context);
    typename decltype((*output)->str_representation)::BaseType::BufferWriter
        str_representation_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_str_representation, buffer, &str_representation_writer, context);
    (*output)->str_representation.Set(
        str_representation_writer.is_null() ? nullptr : str_representation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->str_representation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null str_representation in FontIdentity struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::font_service::mojom::internal::FontIdentity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::font_service::mojom::FontIdentityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace font_service {
namespace mojom {



inline void FontIdentityDataView::GetStrRepresentationDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->str_representation.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FontService_MatchFamilyName_ParamsDataView::GetFamilyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FontService_MatchFamilyName_ParamsDataView::GetStyleDataView(
    TypefaceStyleDataView* output) {
  auto pointer = data_->style.Get();
  *output = TypefaceStyleDataView(pointer, context_);
}


inline void FontService_MatchFamilyName_ResponseParamsDataView::GetIdentityDataView(
    FontIdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = FontIdentityDataView(pointer, context_);
}
inline void FontService_MatchFamilyName_ResponseParamsDataView::GetFamilyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->family_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FontService_MatchFamilyName_ResponseParamsDataView::GetStyleDataView(
    TypefaceStyleDataView* output) {
  auto pointer = data_->style.Get();
  *output = TypefaceStyleDataView(pointer, context_);
}




inline void FontService_OpenStream_ResponseParamsDataView::GetFontHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->font_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_H_
