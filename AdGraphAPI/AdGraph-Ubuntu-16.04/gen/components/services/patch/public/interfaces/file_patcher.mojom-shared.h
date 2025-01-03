// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_H_

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
#include "components/services/patch/public/interfaces/file_patcher.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace patch {
namespace mojom {


}  // namespace mojom
}  // namespace patch

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace patch {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FilePatcherInterfaceBase {};

using FilePatcherPtrDataView =
    mojo::InterfacePtrDataView<FilePatcherInterfaceBase>;
using FilePatcherRequestDataView =
    mojo::InterfaceRequestDataView<FilePatcherInterfaceBase>;
using FilePatcherAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FilePatcherInterfaceBase>;
using FilePatcherAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FilePatcherInterfaceBase>;
class FilePatcher_PatchFileBsdiff_ParamsDataView {
 public:
  FilePatcher_PatchFileBsdiff_ParamsDataView() {}

  FilePatcher_PatchFileBsdiff_ParamsDataView(
      internal::FilePatcher_PatchFileBsdiff_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputFile(UserType* output) {
    auto* pointer = data_->input_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetPatchFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPatchFile(UserType* output) {
    auto* pointer = data_->patch_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetOutputFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputFile(UserType* output) {
    auto* pointer = data_->output_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::FilePatcher_PatchFileBsdiff_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FilePatcher_PatchFileBsdiff_ResponseParamsDataView {
 public:
  FilePatcher_PatchFileBsdiff_ResponseParamsDataView() {}

  FilePatcher_PatchFileBsdiff_ResponseParamsDataView(
      internal::FilePatcher_PatchFileBsdiff_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::FilePatcher_PatchFileBsdiff_ResponseParams_Data* data_ = nullptr;
};

class FilePatcher_PatchFileCourgette_ParamsDataView {
 public:
  FilePatcher_PatchFileCourgette_ParamsDataView() {}

  FilePatcher_PatchFileCourgette_ParamsDataView(
      internal::FilePatcher_PatchFileCourgette_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputFile(UserType* output) {
    auto* pointer = data_->input_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetPatchFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPatchFile(UserType* output) {
    auto* pointer = data_->patch_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetOutputFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputFile(UserType* output) {
    auto* pointer = data_->output_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::FilePatcher_PatchFileCourgette_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FilePatcher_PatchFileCourgette_ResponseParamsDataView {
 public:
  FilePatcher_PatchFileCourgette_ResponseParamsDataView() {}

  FilePatcher_PatchFileCourgette_ResponseParamsDataView(
      internal::FilePatcher_PatchFileCourgette_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::FilePatcher_PatchFileCourgette_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace patch

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace patch {
namespace mojom {

inline void FilePatcher_PatchFileBsdiff_ParamsDataView::GetInputFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->input_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void FilePatcher_PatchFileBsdiff_ParamsDataView::GetPatchFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->patch_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void FilePatcher_PatchFileBsdiff_ParamsDataView::GetOutputFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->output_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}




inline void FilePatcher_PatchFileCourgette_ParamsDataView::GetInputFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->input_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void FilePatcher_PatchFileCourgette_ParamsDataView::GetPatchFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->patch_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void FilePatcher_PatchFileCourgette_ParamsDataView::GetOutputFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->output_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace patch

#endif  // COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_H_
