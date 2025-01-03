// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_H_
#define CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_H_

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
#include "chrome/services/file_util/public/mojom/safe_archive_analyzer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {
using SafeArchiveAnalyzerResultsDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SafeArchiveAnalyzerInterfaceBase {};

using SafeArchiveAnalyzerPtrDataView =
    mojo::InterfacePtrDataView<SafeArchiveAnalyzerInterfaceBase>;
using SafeArchiveAnalyzerRequestDataView =
    mojo::InterfaceRequestDataView<SafeArchiveAnalyzerInterfaceBase>;
using SafeArchiveAnalyzerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SafeArchiveAnalyzerInterfaceBase>;
using SafeArchiveAnalyzerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SafeArchiveAnalyzerInterfaceBase>;
class SafeArchiveAnalyzer_AnalyzeZipFile_ParamsDataView {
 public:
  SafeArchiveAnalyzer_AnalyzeZipFile_ParamsDataView() {}

  SafeArchiveAnalyzer_AnalyzeZipFile_ParamsDataView(
      internal::SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data* data,
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
  inline void GetTemporaryFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTemporaryFile(UserType* output) {
    auto* pointer = data_->temporary_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParamsDataView {
 public:
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParamsDataView() {}

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParamsDataView(
      internal::SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      SafeArchiveAnalyzerResultsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<::chrome::mojom::SafeArchiveAnalyzerResultsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeArchiveAnalyzer_AnalyzeDmgFile_ParamsDataView {
 public:
  SafeArchiveAnalyzer_AnalyzeDmgFile_ParamsDataView() {}

  SafeArchiveAnalyzer_AnalyzeDmgFile_ParamsDataView(
      internal::SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDmgFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDmgFile(UserType* output) {
    auto* pointer = data_->dmg_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParamsDataView {
 public:
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParamsDataView() {}

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParamsDataView(
      internal::SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      SafeArchiveAnalyzerResultsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<::chrome::mojom::SafeArchiveAnalyzerResultsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeArchiveAnalyzer_AnalyzeRarFile_ParamsDataView {
 public:
  SafeArchiveAnalyzer_AnalyzeRarFile_ParamsDataView() {}

  SafeArchiveAnalyzer_AnalyzeRarFile_ParamsDataView(
      internal::SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRarFileDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRarFile(UserType* output) {
    auto* pointer = data_->rar_file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParamsDataView {
 public:
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParamsDataView() {}

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParamsDataView(
      internal::SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      SafeArchiveAnalyzerResultsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<::chrome::mojom::SafeArchiveAnalyzerResultsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data* data_ = nullptr;
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

inline void SafeArchiveAnalyzer_AnalyzeZipFile_ParamsDataView::GetZipFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->zip_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void SafeArchiveAnalyzer_AnalyzeZipFile_ParamsDataView::GetTemporaryFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->temporary_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParamsDataView::GetResultsDataView(
    SafeArchiveAnalyzerResultsDataView* output) {
  auto pointer = data_->results.Get();
  *output = SafeArchiveAnalyzerResultsDataView(pointer, context_);
}


inline void SafeArchiveAnalyzer_AnalyzeDmgFile_ParamsDataView::GetDmgFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->dmg_file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParamsDataView::GetResultsDataView(
    SafeArchiveAnalyzerResultsDataView* output) {
  auto pointer = data_->results.Get();
  *output = SafeArchiveAnalyzerResultsDataView(pointer, context_);
}


inline void SafeArchiveAnalyzer_AnalyzeRarFile_ParamsDataView::GetRarFileDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->rar_file.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParamsDataView::GetResultsDataView(
    SafeArchiveAnalyzerResultsDataView* output) {
  auto pointer = data_->results.Get();
  *output = SafeArchiveAnalyzerResultsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_H_
