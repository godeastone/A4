// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_H_
#define SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_H_

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
#include "services/catalog/public/mojom/catalog.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace catalog {
namespace mojom {
class EntryDataView;



}  // namespace mojom
}  // namespace catalog

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::catalog::mojom::EntryDataView> {
  using Data = ::catalog::mojom::internal::Entry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace catalog {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CatalogInterfaceBase {};

using CatalogPtrDataView =
    mojo::InterfacePtrDataView<CatalogInterfaceBase>;
using CatalogRequestDataView =
    mojo::InterfaceRequestDataView<CatalogInterfaceBase>;
using CatalogAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CatalogInterfaceBase>;
using CatalogAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CatalogInterfaceBase>;
class EntryDataView {
 public:
  EntryDataView() {}

  EntryDataView(
      internal::Entry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Entry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Catalog_GetEntries_ParamsDataView {
 public:
  Catalog_GetEntries_ParamsDataView() {}

  Catalog_GetEntries_ParamsDataView(
      internal::Catalog_GetEntries_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNames(UserType* output) {
    auto* pointer = data_->names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntries_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Catalog_GetEntries_ResponseParamsDataView {
 public:
  Catalog_GetEntries_ResponseParamsDataView() {}

  Catalog_GetEntries_ResponseParamsDataView(
      internal::Catalog_GetEntries_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<EntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::catalog::mojom::EntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntries_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Catalog_GetEntriesProvidingCapability_ParamsDataView {
 public:
  Catalog_GetEntriesProvidingCapability_ParamsDataView() {}

  Catalog_GetEntriesProvidingCapability_ParamsDataView(
      internal::Catalog_GetEntriesProvidingCapability_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCapabilityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCapability(UserType* output) {
    auto* pointer = data_->capability.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesProvidingCapability_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Catalog_GetEntriesProvidingCapability_ResponseParamsDataView {
 public:
  Catalog_GetEntriesProvidingCapability_ResponseParamsDataView() {}

  Catalog_GetEntriesProvidingCapability_ResponseParamsDataView(
      internal::Catalog_GetEntriesProvidingCapability_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<EntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::catalog::mojom::EntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesProvidingCapability_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace catalog

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::catalog::mojom::EntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::catalog::mojom::EntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::catalog::mojom::internal::Entry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
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
        "null name in Entry struct");
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in Entry struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::catalog::mojom::internal::Entry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::catalog::mojom::EntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace catalog {
namespace mojom {

inline void EntryDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void EntryDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Catalog_GetEntries_ParamsDataView::GetNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void Catalog_GetEntries_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<EntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<EntryDataView>(pointer, context_);
}


inline void Catalog_GetEntriesProvidingCapability_ParamsDataView::GetCapabilityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->capability.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Catalog_GetEntriesProvidingCapability_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<EntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<EntryDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace catalog

#endif  // SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_H_
