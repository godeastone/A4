// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/file/file_utilities.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_info.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

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
// Interface base classes. They are used for type safety check.
class FileUtilitiesHostInterfaceBase {};

using FileUtilitiesHostPtrDataView =
    mojo::InterfacePtrDataView<FileUtilitiesHostInterfaceBase>;
using FileUtilitiesHostRequestDataView =
    mojo::InterfaceRequestDataView<FileUtilitiesHostInterfaceBase>;
using FileUtilitiesHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FileUtilitiesHostInterfaceBase>;
using FileUtilitiesHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FileUtilitiesHostInterfaceBase>;
class FileUtilitiesHost_GetFileInfo_ParamsDataView {
 public:
  FileUtilitiesHost_GetFileInfo_ParamsDataView() {}

  FileUtilitiesHost_GetFileInfo_ParamsDataView(
      internal::FileUtilitiesHost_GetFileInfo_Params_Data* data,
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
  internal::FileUtilitiesHost_GetFileInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileUtilitiesHost_GetFileInfo_ResponseParamsDataView {
 public:
  FileUtilitiesHost_GetFileInfo_ResponseParamsDataView() {}

  FileUtilitiesHost_GetFileInfo_ResponseParamsDataView(
      internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::FileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FileUtilitiesHost_GetFileInfo_ParamsDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void FileUtilitiesHost_GetFileInfo_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::FileInfoDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::FileInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_SHARED_H_
