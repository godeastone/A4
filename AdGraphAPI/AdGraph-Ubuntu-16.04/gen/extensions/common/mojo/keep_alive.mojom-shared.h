// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_SHARED_H_
#define EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_SHARED_H_

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
#include "extensions/common/mojo/keep_alive.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace extensions {


}  // namespace extensions

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace extensions {
// Interface base classes. They are used for type safety check.
class KeepAliveInterfaceBase {};

using KeepAlivePtrDataView =
    mojo::InterfacePtrDataView<KeepAliveInterfaceBase>;
using KeepAliveRequestDataView =
    mojo::InterfaceRequestDataView<KeepAliveInterfaceBase>;
using KeepAliveAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<KeepAliveInterfaceBase>;
using KeepAliveAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<KeepAliveInterfaceBase>;


}  // namespace extensions

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace extensions {


}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_SHARED_H_
