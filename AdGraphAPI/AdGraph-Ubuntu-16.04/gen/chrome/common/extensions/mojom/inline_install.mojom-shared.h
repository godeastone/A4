// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_H_
#define CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_H_

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
#include "chrome/common/extensions/mojom/inline_install.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace extensions {
namespace mojom {


}  // namespace mojom
}  // namespace extensions

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace extensions {
namespace mojom {
using WebstoreInstallResult = mojo::NativeEnum;
using WebstoreInstallStage = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class InlineInstallProgressListenerInterfaceBase {};

using InlineInstallProgressListenerPtrDataView =
    mojo::InterfacePtrDataView<InlineInstallProgressListenerInterfaceBase>;
using InlineInstallProgressListenerRequestDataView =
    mojo::InterfaceRequestDataView<InlineInstallProgressListenerInterfaceBase>;
using InlineInstallProgressListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InlineInstallProgressListenerInterfaceBase>;
using InlineInstallProgressListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InlineInstallProgressListenerInterfaceBase>;
class InlineInstallerInterfaceBase {};

using InlineInstallerPtrDataView =
    mojo::InterfacePtrDataView<InlineInstallerInterfaceBase>;
using InlineInstallerRequestDataView =
    mojo::InterfaceRequestDataView<InlineInstallerInterfaceBase>;
using InlineInstallerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InlineInstallerInterfaceBase>;
using InlineInstallerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InlineInstallerInterfaceBase>;
class InlineInstallProgressListener_InlineInstallStageChanged_ParamsDataView {
 public:
  InlineInstallProgressListener_InlineInstallStageChanged_ParamsDataView() {}

  InlineInstallProgressListener_InlineInstallStageChanged_ParamsDataView(
      internal::InlineInstallProgressListener_InlineInstallStageChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStage(UserType* output) const {
    auto data_value = data_->stage;
    return mojo::internal::Deserialize<::extensions::mojom::WebstoreInstallStage>(
        data_value, output);
  }

  WebstoreInstallStage stage() const {
    return static_cast<WebstoreInstallStage>(data_->stage);
  }
 private:
  internal::InlineInstallProgressListener_InlineInstallStageChanged_Params_Data* data_ = nullptr;
};

class InlineInstallProgressListener_InlineInstallDownloadProgress_ParamsDataView {
 public:
  InlineInstallProgressListener_InlineInstallDownloadProgress_ParamsDataView() {}

  InlineInstallProgressListener_InlineInstallDownloadProgress_ParamsDataView(
      internal::InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t percent_downloaded() const {
    return data_->percent_downloaded;
  }
 private:
  internal::InlineInstallProgressListener_InlineInstallDownloadProgress_Params_Data* data_ = nullptr;
};

class InlineInstaller_DoInlineInstall_ParamsDataView {
 public:
  InlineInstaller_DoInlineInstall_ParamsDataView() {}

  InlineInstaller_DoInlineInstall_ParamsDataView(
      internal::InlineInstaller_DoInlineInstall_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWebstoreItemIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebstoreItemId(UserType* output) {
    auto* pointer = data_->webstore_item_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t listeners_mask() const {
    return data_->listeners_mask;
  }
  template <typename UserType>
  UserType TakeInstallProgressListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::extensions::mojom::InlineInstallProgressListenerPtrDataView>(
            &data_->install_progress_listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InlineInstaller_DoInlineInstall_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InlineInstaller_DoInlineInstall_ResponseParamsDataView {
 public:
  InlineInstaller_DoInlineInstall_ResponseParamsDataView() {}

  InlineInstaller_DoInlineInstall_ResponseParamsDataView(
      internal::InlineInstaller_DoInlineInstall_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::extensions::mojom::WebstoreInstallResult>(
        data_value, output);
  }

  WebstoreInstallResult result() const {
    return static_cast<WebstoreInstallResult>(data_->result);
  }
 private:
  internal::InlineInstaller_DoInlineInstall_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace extensions

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace extensions {
namespace mojom {





inline void InlineInstaller_DoInlineInstall_ParamsDataView::GetWebstoreItemIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->webstore_item_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void InlineInstaller_DoInlineInstall_ResponseParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace extensions

#endif  // CHROME_COMMON_EXTENSIONS_MOJOM_INLINE_INSTALL_MOJOM_SHARED_H_
