// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/cdm_storage.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {

enum class CdmStorage_Status : int32_t {
  kSuccess,
  kInUse,
  kFailure,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, CdmStorage_Status value) {
  switch(value) {
    case CdmStorage_Status::kSuccess:
      return os << "CdmStorage_Status::kSuccess";
    case CdmStorage_Status::kInUse:
      return os << "CdmStorage_Status::kInUse";
    case CdmStorage_Status::kFailure:
      return os << "CdmStorage_Status::kFailure";
    default:
      return os << "Unknown CdmStorage_Status value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CdmStorage_Status value) {
  return internal::CdmStorage_Status_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CdmStorageInterfaceBase {};

using CdmStoragePtrDataView =
    mojo::InterfacePtrDataView<CdmStorageInterfaceBase>;
using CdmStorageRequestDataView =
    mojo::InterfaceRequestDataView<CdmStorageInterfaceBase>;
using CdmStorageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmStorageInterfaceBase>;
using CdmStorageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmStorageInterfaceBase>;
class CdmFileInterfaceBase {};

using CdmFilePtrDataView =
    mojo::InterfacePtrDataView<CdmFileInterfaceBase>;
using CdmFileRequestDataView =
    mojo::InterfaceRequestDataView<CdmFileInterfaceBase>;
using CdmFileAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmFileInterfaceBase>;
using CdmFileAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmFileInterfaceBase>;
class CdmStorage_Open_ParamsDataView {
 public:
  CdmStorage_Open_ParamsDataView() {}

  CdmStorage_Open_ParamsDataView(
      internal::CdmStorage_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileName(UserType* output) {
    auto* pointer = data_->file_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmStorage_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmStorage_Open_ResponseParamsDataView {
 public:
  CdmStorage_Open_ResponseParamsDataView() {}

  CdmStorage_Open_ResponseParamsDataView(
      internal::CdmStorage_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmStorage_Status>(
        data_value, output);
  }

  CdmStorage_Status status() const {
    return static_cast<CdmStorage_Status>(data_->status);
  }
  inline void GetFileForReadingDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileForReading(UserType* output) {
    auto* pointer = data_->file_for_reading.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCdmFile() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmFileAssociatedPtrInfoDataView>(
            &data_->cdm_file, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmStorage_Open_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmFile_OpenFileForWriting_ParamsDataView {
 public:
  CdmFile_OpenFileForWriting_ParamsDataView() {}

  CdmFile_OpenFileForWriting_ParamsDataView(
      internal::CdmFile_OpenFileForWriting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CdmFile_OpenFileForWriting_Params_Data* data_ = nullptr;
};

class CdmFile_OpenFileForWriting_ResponseParamsDataView {
 public:
  CdmFile_OpenFileForWriting_ResponseParamsDataView() {}

  CdmFile_OpenFileForWriting_ResponseParamsDataView(
      internal::CdmFile_OpenFileForWriting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileForWritingDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileForWriting(UserType* output) {
    auto* pointer = data_->file_for_writing.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmFile_OpenFileForWriting_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmFile_CommitWrite_ParamsDataView {
 public:
  CdmFile_CommitWrite_ParamsDataView() {}

  CdmFile_CommitWrite_ParamsDataView(
      internal::CdmFile_CommitWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CdmFile_CommitWrite_Params_Data* data_ = nullptr;
};

class CdmFile_CommitWrite_ResponseParamsDataView {
 public:
  CdmFile_CommitWrite_ResponseParamsDataView() {}

  CdmFile_CommitWrite_ResponseParamsDataView(
      internal::CdmFile_CommitWrite_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUpdatedFileForReadingDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdatedFileForReading(UserType* output) {
    auto* pointer = data_->updated_file_for_reading.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmFile_CommitWrite_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::CdmStorage_Status>
    : public mojo::internal::EnumHashImpl<::media::mojom::CdmStorage_Status> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::CdmStorage_Status, ::media::mojom::CdmStorage_Status> {
  static ::media::mojom::CdmStorage_Status ToMojom(::media::mojom::CdmStorage_Status input) { return input; }
  static bool FromMojom(::media::mojom::CdmStorage_Status input, ::media::mojom::CdmStorage_Status* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmStorage_Status, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CdmStorage_Status, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CdmStorage_Status>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void CdmStorage_Open_ParamsDataView::GetFileNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->file_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CdmStorage_Open_ResponseParamsDataView::GetFileForReadingDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file_for_reading.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}




inline void CdmFile_OpenFileForWriting_ResponseParamsDataView::GetFileForWritingDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file_for_writing.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}




inline void CdmFile_CommitWrite_ResponseParamsDataView::GetUpdatedFileForReadingDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->updated_file_for_reading.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_H_
