// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/webdatabase/web_database.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

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
class WebDatabaseInterfaceBase {};

using WebDatabasePtrDataView =
    mojo::InterfacePtrDataView<WebDatabaseInterfaceBase>;
using WebDatabaseRequestDataView =
    mojo::InterfaceRequestDataView<WebDatabaseInterfaceBase>;
using WebDatabaseAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebDatabaseInterfaceBase>;
using WebDatabaseAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebDatabaseInterfaceBase>;
class WebDatabaseHostInterfaceBase {};

using WebDatabaseHostPtrDataView =
    mojo::InterfacePtrDataView<WebDatabaseHostInterfaceBase>;
using WebDatabaseHostRequestDataView =
    mojo::InterfaceRequestDataView<WebDatabaseHostInterfaceBase>;
using WebDatabaseHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebDatabaseHostInterfaceBase>;
using WebDatabaseHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebDatabaseHostInterfaceBase>;
class WebDatabase_UpdateSize_ParamsDataView {
 public:
  WebDatabase_UpdateSize_ParamsDataView() {}

  WebDatabase_UpdateSize_ParamsDataView(
      internal::WebDatabase_UpdateSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t size() const {
    return data_->size;
  }
 private:
  internal::WebDatabase_UpdateSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabase_CloseImmediately_ParamsDataView {
 public:
  WebDatabase_CloseImmediately_ParamsDataView() {}

  WebDatabase_CloseImmediately_ParamsDataView(
      internal::WebDatabase_CloseImmediately_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabase_CloseImmediately_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_OpenFile_ParamsDataView {
 public:
  WebDatabaseHost_OpenFile_ParamsDataView() {}

  WebDatabaseHost_OpenFile_ParamsDataView(
      internal::WebDatabaseHost_OpenFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t desired_flags() const {
    return data_->desired_flags;
  }
 private:
  internal::WebDatabaseHost_OpenFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_OpenFile_ResponseParamsDataView {
 public:
  WebDatabaseHost_OpenFile_ResponseParamsDataView() {}

  WebDatabaseHost_OpenFile_ResponseParamsDataView(
      internal::WebDatabaseHost_OpenFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_OpenFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_DeleteFile_ParamsDataView {
 public:
  WebDatabaseHost_DeleteFile_ParamsDataView() {}

  WebDatabaseHost_DeleteFile_ParamsDataView(
      internal::WebDatabaseHost_DeleteFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool sync_dir() const {
    return data_->sync_dir;
  }
 private:
  internal::WebDatabaseHost_DeleteFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_DeleteFile_ResponseParamsDataView {
 public:
  WebDatabaseHost_DeleteFile_ResponseParamsDataView() {}

  WebDatabaseHost_DeleteFile_ResponseParamsDataView(
      internal::WebDatabaseHost_DeleteFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t sqlite_error_code() const {
    return data_->sqlite_error_code;
  }
 private:
  internal::WebDatabaseHost_DeleteFile_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_GetFileAttributes_ParamsDataView {
 public:
  WebDatabaseHost_GetFileAttributes_ParamsDataView() {}

  WebDatabaseHost_GetFileAttributes_ParamsDataView(
      internal::WebDatabaseHost_GetFileAttributes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_GetFileAttributes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_GetFileAttributes_ResponseParamsDataView {
 public:
  WebDatabaseHost_GetFileAttributes_ResponseParamsDataView() {}

  WebDatabaseHost_GetFileAttributes_ResponseParamsDataView(
      internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t attributes() const {
    return data_->attributes;
  }
 private:
  internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_GetFileSize_ParamsDataView {
 public:
  WebDatabaseHost_GetFileSize_ParamsDataView() {}

  WebDatabaseHost_GetFileSize_ParamsDataView(
      internal::WebDatabaseHost_GetFileSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_GetFileSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_GetFileSize_ResponseParamsDataView {
 public:
  WebDatabaseHost_GetFileSize_ResponseParamsDataView() {}

  WebDatabaseHost_GetFileSize_ResponseParamsDataView(
      internal::WebDatabaseHost_GetFileSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t size() const {
    return data_->size;
  }
 private:
  internal::WebDatabaseHost_GetFileSize_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_SetFileSize_ParamsDataView {
 public:
  WebDatabaseHost_SetFileSize_ParamsDataView() {}

  WebDatabaseHost_SetFileSize_ParamsDataView(
      internal::WebDatabaseHost_SetFileSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVfsFileNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVfsFileName(UserType* output) {
    auto* pointer = data_->vfs_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t expected_size() const {
    return data_->expected_size;
  }
 private:
  internal::WebDatabaseHost_SetFileSize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_SetFileSize_ResponseParamsDataView {
 public:
  WebDatabaseHost_SetFileSize_ResponseParamsDataView() {}

  WebDatabaseHost_SetFileSize_ResponseParamsDataView(
      internal::WebDatabaseHost_SetFileSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WebDatabaseHost_SetFileSize_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_GetSpaceAvailable_ParamsDataView {
 public:
  WebDatabaseHost_GetSpaceAvailable_ParamsDataView() {}

  WebDatabaseHost_GetSpaceAvailable_ParamsDataView(
      internal::WebDatabaseHost_GetSpaceAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_GetSpaceAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView {
 public:
  WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView() {}

  WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView(
      internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t space_available() const {
    return data_->space_available;
  }
 private:
  internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* data_ = nullptr;
};

class WebDatabaseHost_Opened_ParamsDataView {
 public:
  WebDatabaseHost_Opened_ParamsDataView() {}

  WebDatabaseHost_Opened_ParamsDataView(
      internal::WebDatabaseHost_Opened_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDatabaseDescriptionDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseDescription(UserType* output) {
    auto* pointer = data_->database_description.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t estimated_size() const {
    return data_->estimated_size;
  }
 private:
  internal::WebDatabaseHost_Opened_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_Modified_ParamsDataView {
 public:
  WebDatabaseHost_Modified_ParamsDataView() {}

  WebDatabaseHost_Modified_ParamsDataView(
      internal::WebDatabaseHost_Modified_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_Modified_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_Closed_ParamsDataView {
 public:
  WebDatabaseHost_Closed_ParamsDataView() {}

  WebDatabaseHost_Closed_ParamsDataView(
      internal::WebDatabaseHost_Closed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WebDatabaseHost_Closed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebDatabaseHost_HandleSqliteError_ParamsDataView {
 public:
  WebDatabaseHost_HandleSqliteError_ParamsDataView() {}

  WebDatabaseHost_HandleSqliteError_ParamsDataView(
      internal::WebDatabaseHost_HandleSqliteError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetDatabaseNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDatabaseName(UserType* output) {
    auto* pointer = data_->database_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int32_t error() const {
    return data_->error;
  }
 private:
  internal::WebDatabaseHost_HandleSqliteError_Params_Data* data_ = nullptr;
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

inline void WebDatabase_UpdateSize_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabase_UpdateSize_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabase_CloseImmediately_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabase_CloseImmediately_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_OpenFile_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_OpenFile_ResponseParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void WebDatabaseHost_DeleteFile_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_GetFileAttributes_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_GetFileSize_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_SetFileSize_ParamsDataView::GetVfsFileNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->vfs_file_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void WebDatabaseHost_GetSpaceAvailable_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void WebDatabaseHost_Opened_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_Opened_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void WebDatabaseHost_Opened_ParamsDataView::GetDatabaseDescriptionDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_description.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_Modified_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_Modified_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_Closed_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_Closed_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void WebDatabaseHost_HandleSqliteError_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void WebDatabaseHost_HandleSqliteError_ParamsDataView::GetDatabaseNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->database_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_H_
