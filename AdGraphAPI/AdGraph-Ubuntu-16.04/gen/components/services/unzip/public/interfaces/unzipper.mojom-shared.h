// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_H_

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
#include "components/services/unzip/public/interfaces/unzipper.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace unzip {
namespace mojom {


}  // namespace mojom
}  // namespace unzip

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace unzip {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UnzipFilterInterfaceBase {};

using UnzipFilterPtrDataView =
    mojo::InterfacePtrDataView<UnzipFilterInterfaceBase>;
using UnzipFilterRequestDataView =
    mojo::InterfaceRequestDataView<UnzipFilterInterfaceBase>;
using UnzipFilterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UnzipFilterInterfaceBase>;
using UnzipFilterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UnzipFilterInterfaceBase>;
class UnzipperInterfaceBase {};

using UnzipperPtrDataView =
    mojo::InterfacePtrDataView<UnzipperInterfaceBase>;
using UnzipperRequestDataView =
    mojo::InterfaceRequestDataView<UnzipperInterfaceBase>;
using UnzipperAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UnzipperInterfaceBase>;
using UnzipperAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UnzipperInterfaceBase>;
class UnzipFilter_ShouldUnzipFile_ParamsDataView {
 public:
  UnzipFilter_ShouldUnzipFile_ParamsDataView() {}

  UnzipFilter_ShouldUnzipFile_ParamsDataView(
      internal::UnzipFilter_ShouldUnzipFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::UnzipFilter_ShouldUnzipFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UnzipFilter_ShouldUnzipFile_ResponseParamsDataView {
 public:
  UnzipFilter_ShouldUnzipFile_ResponseParamsDataView() {}

  UnzipFilter_ShouldUnzipFile_ResponseParamsDataView(
      internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::UnzipFilter_ShouldUnzipFile_ResponseParams_Data* data_ = nullptr;
};

class Unzipper_Unzip_ParamsDataView {
 public:
  Unzipper_Unzip_ParamsDataView() {}

  Unzipper_Unzip_ParamsDataView(
      internal::Unzipper_Unzip_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetZipFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadZipFile(UserType* output) {
    auto* pointer = data_->zip_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeOutputDir() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryPtrDataView>(
            &data_->output_dir, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Unzipper_Unzip_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Unzipper_Unzip_ResponseParamsDataView {
 public:
  Unzipper_Unzip_ResponseParamsDataView() {}

  Unzipper_Unzip_ResponseParamsDataView(
      internal::Unzipper_Unzip_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::Unzipper_Unzip_ResponseParams_Data* data_ = nullptr;
};

class Unzipper_UnzipWithFilter_ParamsDataView {
 public:
  Unzipper_UnzipWithFilter_ParamsDataView() {}

  Unzipper_UnzipWithFilter_ParamsDataView(
      internal::Unzipper_UnzipWithFilter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetZipFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadZipFile(UserType* output) {
    auto* pointer = data_->zip_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeOutputDir() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::filesystem::mojom::DirectoryPtrDataView>(
            &data_->output_dir, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeFilter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::unzip::mojom::UnzipFilterPtrDataView>(
            &data_->filter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Unzipper_UnzipWithFilter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Unzipper_UnzipWithFilter_ResponseParamsDataView {
 public:
  Unzipper_UnzipWithFilter_ResponseParamsDataView() {}

  Unzipper_UnzipWithFilter_ResponseParamsDataView(
      internal::Unzipper_UnzipWithFilter_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::Unzipper_UnzipWithFilter_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace unzip

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace unzip {
namespace mojom {

inline void UnzipFilter_ShouldUnzipFile_ParamsDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}




inline void Unzipper_Unzip_ParamsDataView::GetZipFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->zip_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}




inline void Unzipper_UnzipWithFilter_ParamsDataView::GetZipFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->zip_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace unzip

#endif  // COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_H_
