// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_H_

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
#include "third_party/blink/public/web/devtools_frontend.mojom-shared-internal.h"

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
class DevToolsFrontendInterfaceBase {};

using DevToolsFrontendPtrDataView =
    mojo::InterfacePtrDataView<DevToolsFrontendInterfaceBase>;
using DevToolsFrontendRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsFrontendInterfaceBase>;
using DevToolsFrontendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsFrontendInterfaceBase>;
using DevToolsFrontendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsFrontendInterfaceBase>;
class DevToolsFrontendHostInterfaceBase {};

using DevToolsFrontendHostPtrDataView =
    mojo::InterfacePtrDataView<DevToolsFrontendHostInterfaceBase>;
using DevToolsFrontendHostRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsFrontendHostInterfaceBase>;
using DevToolsFrontendHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsFrontendHostInterfaceBase>;
using DevToolsFrontendHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsFrontendHostInterfaceBase>;
class DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView {
 public:
  DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView() {}

  DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView(
      internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetApiScriptDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadApiScript(UserType* output) {
    auto* pointer = data_->api_script.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsFrontendHostAssociatedPtrInfoDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView {
 public:
  DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView() {}

  DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView(
      internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetExtensionApiDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtensionApi(UserType* output) {
    auto* pointer = data_->extension_api.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView {
 public:
  DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView() {}

  DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView(
      internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* data_ = nullptr;
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

inline void DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView::GetApiScriptDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->api_script.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView::GetExtensionApiDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->extension_api.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_FRONTEND_MOJOM_SHARED_H_
