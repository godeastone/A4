// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_SCOPE_SET_MOJOM_SHARED_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_SCOPE_SET_MOJOM_SHARED_H_

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
#include "services/identity/public/mojom/scope_set.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace identity {
namespace mojom {
class ScopeSetDataView;



}  // namespace mojom
}  // namespace identity

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::identity::mojom::ScopeSetDataView> {
  using Data = ::identity::mojom::internal::ScopeSet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace identity {
namespace mojom {
class ScopeSetDataView {
 public:
  ScopeSetDataView() {}

  ScopeSetDataView(
      internal::ScopeSet_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScopesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScopes(UserType* output) {
    auto* pointer = data_->scopes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ScopeSet_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace identity

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::identity::mojom::ScopeSetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::identity::mojom::ScopeSetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::identity::mojom::internal::ScopeSet_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::scopes, input, custom_context)) in_scopes = CallWithContext(Traits::scopes, input, custom_context);
    typename decltype((*output)->scopes)::BaseType::BufferWriter
        scopes_writer;
    const mojo::internal::ContainerValidateParams scopes_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_scopes, buffer, &scopes_writer, &scopes_validate_params,
        context);
    (*output)->scopes.Set(
        scopes_writer.is_null() ? nullptr : scopes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scopes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scopes in ScopeSet struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::identity::mojom::internal::ScopeSet_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::identity::mojom::ScopeSetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace identity {
namespace mojom {

inline void ScopeSetDataView::GetScopesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->scopes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_SCOPE_SET_MOJOM_SHARED_H_
