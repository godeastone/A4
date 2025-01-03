// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_H_
#define CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_H_

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
#include "chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RemovableStorageWriterInterfaceBase {};

using RemovableStorageWriterPtrDataView =
    mojo::InterfacePtrDataView<RemovableStorageWriterInterfaceBase>;
using RemovableStorageWriterRequestDataView =
    mojo::InterfaceRequestDataView<RemovableStorageWriterInterfaceBase>;
using RemovableStorageWriterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemovableStorageWriterInterfaceBase>;
using RemovableStorageWriterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemovableStorageWriterInterfaceBase>;
class RemovableStorageWriterClientInterfaceBase {};

using RemovableStorageWriterClientPtrDataView =
    mojo::InterfacePtrDataView<RemovableStorageWriterClientInterfaceBase>;
using RemovableStorageWriterClientRequestDataView =
    mojo::InterfaceRequestDataView<RemovableStorageWriterClientInterfaceBase>;
using RemovableStorageWriterClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemovableStorageWriterClientInterfaceBase>;
using RemovableStorageWriterClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemovableStorageWriterClientInterfaceBase>;
class RemovableStorageWriter_Write_ParamsDataView {
 public:
  RemovableStorageWriter_Write_ParamsDataView() {}

  RemovableStorageWriter_Write_ParamsDataView(
      internal::RemovableStorageWriter_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetTargetDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::RemovableStorageWriterClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RemovableStorageWriter_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemovableStorageWriter_Verify_ParamsDataView {
 public:
  RemovableStorageWriter_Verify_ParamsDataView() {}

  RemovableStorageWriter_Verify_ParamsDataView(
      internal::RemovableStorageWriter_Verify_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetTargetDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::RemovableStorageWriterClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RemovableStorageWriter_Verify_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemovableStorageWriterClient_Progress_ParamsDataView {
 public:
  RemovableStorageWriterClient_Progress_ParamsDataView() {}

  RemovableStorageWriterClient_Progress_ParamsDataView(
      internal::RemovableStorageWriterClient_Progress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t progress() const {
    return data_->progress;
  }
 private:
  internal::RemovableStorageWriterClient_Progress_Params_Data* data_ = nullptr;
};

class RemovableStorageWriterClient_Complete_ParamsDataView {
 public:
  RemovableStorageWriterClient_Complete_ParamsDataView() {}

  RemovableStorageWriterClient_Complete_ParamsDataView(
      internal::RemovableStorageWriterClient_Complete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemovableStorageWriterClient_Complete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void RemovableStorageWriter_Write_ParamsDataView::GetSourceDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->source.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void RemovableStorageWriter_Write_ParamsDataView::GetTargetDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->target.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void RemovableStorageWriter_Verify_ParamsDataView::GetSourceDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->source.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void RemovableStorageWriter_Verify_ParamsDataView::GetTargetDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->target.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}




inline void RemovableStorageWriterClient_Complete_ParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_H_
