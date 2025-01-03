// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_H_
#define CONTENT_COMMON_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_H_

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
#include "content/common/url_loader_factory_bundle.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class URLLoaderFactoryBundleDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::URLLoaderFactoryBundleDataView> {
  using Data = ::content::mojom::internal::URLLoaderFactoryBundle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
class URLLoaderFactoryBundleDataView {
 public:
  URLLoaderFactoryBundleDataView() {}

  URLLoaderFactoryBundleDataView(
      internal::URLLoaderFactoryBundle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDefaultFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->default_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetFactoriesDataView(
      mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFactories(UserType* output) {
    auto* pointer = data_->factories.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderFactoryBundle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::URLLoaderFactoryBundleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::URLLoaderFactoryBundleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::URLLoaderFactoryBundle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::default_factory, input, custom_context)) in_default_factory = CallWithContext(Traits::default_factory, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
        in_default_factory, &(*output)->default_factory, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->default_factory),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid default_factory in URLLoaderFactoryBundle struct");
    decltype(CallWithContext(Traits::factories, input, custom_context)) in_factories = CallWithContext(Traits::factories, input, custom_context);
    typename decltype((*output)->factories)::BaseType::BufferWriter
        factories_writer;
    const mojo::internal::ContainerValidateParams factories_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>>(
        in_factories, buffer, &factories_writer, &factories_validate_params,
        context);
    (*output)->factories.Set(
        factories_writer.is_null() ? nullptr : factories_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->factories.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null factories in URLLoaderFactoryBundle struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::URLLoaderFactoryBundle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::URLLoaderFactoryBundleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void URLLoaderFactoryBundleDataView::GetFactoriesDataView(
    mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>* output) {
  auto pointer = data_->factories.Get();
  *output = mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_H_
