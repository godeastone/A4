// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_H_
#define CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_H_

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
#include "chrome/common/network_diagnostics.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

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
class NetworkDiagnosticsInterfaceBase {};

using NetworkDiagnosticsPtrDataView =
    mojo::InterfacePtrDataView<NetworkDiagnosticsInterfaceBase>;
using NetworkDiagnosticsRequestDataView =
    mojo::InterfaceRequestDataView<NetworkDiagnosticsInterfaceBase>;
using NetworkDiagnosticsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkDiagnosticsInterfaceBase>;
using NetworkDiagnosticsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkDiagnosticsInterfaceBase>;
class NetworkDiagnosticsClientInterfaceBase {};

using NetworkDiagnosticsClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkDiagnosticsClientInterfaceBase>;
using NetworkDiagnosticsClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkDiagnosticsClientInterfaceBase>;
using NetworkDiagnosticsClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkDiagnosticsClientInterfaceBase>;
using NetworkDiagnosticsClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkDiagnosticsClientInterfaceBase>;
class NetworkDiagnostics_RunNetworkDiagnostics_ParamsDataView {
 public:
  NetworkDiagnostics_RunNetworkDiagnostics_ParamsDataView() {}

  NetworkDiagnostics_RunNetworkDiagnostics_ParamsDataView(
      internal::NetworkDiagnostics_RunNetworkDiagnostics_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFailedUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFailedUrl(UserType* output) {
    auto* pointer = data_->failed_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NetworkDiagnostics_RunNetworkDiagnostics_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_ParamsDataView {
 public:
  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_ParamsDataView() {}

  NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_ParamsDataView(
      internal::NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool can_show() const {
    return data_->can_show;
  }
 private:
  internal::NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data* data_ = nullptr;
};

class NetworkDiagnosticsClient_DNSProbeStatus_ParamsDataView {
 public:
  NetworkDiagnosticsClient_DNSProbeStatus_ParamsDataView() {}

  NetworkDiagnosticsClient_DNSProbeStatus_ParamsDataView(
      internal::NetworkDiagnosticsClient_DNSProbeStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t status() const {
    return data_->status;
  }
 private:
  internal::NetworkDiagnosticsClient_DNSProbeStatus_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void NetworkDiagnostics_RunNetworkDiagnostics_ParamsDataView::GetFailedUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->failed_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_H_
