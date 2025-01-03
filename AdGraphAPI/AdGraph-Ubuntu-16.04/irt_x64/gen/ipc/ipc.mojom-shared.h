// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_SHARED_H_
#define IPC_IPC_MOJOM_SHARED_H_

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
#include "ipc/ipc.mojom-shared-internal.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace IPC {
namespace mojom {


}  // namespace mojom
}  // namespace IPC

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace IPC {
namespace mojom {
// Interface base classes. They are used for type safety check.
class GenericInterfaceInterfaceBase {};

using GenericInterfacePtrDataView =
    mojo::InterfacePtrDataView<GenericInterfaceInterfaceBase>;
using GenericInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<GenericInterfaceInterfaceBase>;
using GenericInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GenericInterfaceInterfaceBase>;
using GenericInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GenericInterfaceInterfaceBase>;
class ChannelInterfaceBase {};

using ChannelPtrDataView =
    mojo::InterfacePtrDataView<ChannelInterfaceBase>;
using ChannelRequestDataView =
    mojo::InterfaceRequestDataView<ChannelInterfaceBase>;
using ChannelAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChannelInterfaceBase>;
using ChannelAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChannelInterfaceBase>;
class ChannelBootstrapInterfaceBase {};

using ChannelBootstrapPtrDataView =
    mojo::InterfacePtrDataView<ChannelBootstrapInterfaceBase>;
using ChannelBootstrapRequestDataView =
    mojo::InterfaceRequestDataView<ChannelBootstrapInterfaceBase>;
using ChannelBootstrapAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChannelBootstrapInterfaceBase>;
using ChannelBootstrapAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChannelBootstrapInterfaceBase>;
class Channel_SetPeerPid_ParamsDataView {
 public:
  Channel_SetPeerPid_ParamsDataView() {}

  Channel_SetPeerPid_ParamsDataView(
      internal::Channel_SetPeerPid_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t pid() const {
    return data_->pid;
  }
 private:
  internal::Channel_SetPeerPid_Params_Data* data_ = nullptr;
};

class Channel_Receive_ParamsDataView {
 public:
  Channel_Receive_ParamsDataView() {}

  Channel_Receive_ParamsDataView(
      internal::Channel_Receive_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
        pointer, output, context_);
  }
  inline void GetHandlesDataView(
      mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Channel_Receive_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Channel_GetAssociatedInterface_ParamsDataView {
 public:
  Channel_GetAssociatedInterface_ParamsDataView() {}

  Channel_GetAssociatedInterface_ParamsDataView(
      internal::Channel_GetAssociatedInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::IPC::mojom::GenericInterfaceAssociatedRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Channel_GetAssociatedInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace IPC

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace IPC {
namespace mojom {



inline void Channel_Receive_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}
inline void Channel_Receive_ParamsDataView::GetHandlesDataView(
    mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>* output) {
  auto pointer = data_->handles.Get();
  *output = mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>(pointer, context_);
}


inline void Channel_GetAssociatedInterface_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace IPC

#endif  // IPC_IPC_MOJOM_SHARED_H_
