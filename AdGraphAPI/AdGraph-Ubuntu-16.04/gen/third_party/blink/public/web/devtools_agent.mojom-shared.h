// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_H_

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
#include "third_party/blink/public/web/devtools_agent.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_string.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

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
class DevToolsAgentInterfaceBase {};

using DevToolsAgentPtrDataView =
    mojo::InterfacePtrDataView<DevToolsAgentInterfaceBase>;
using DevToolsAgentRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsAgentInterfaceBase>;
using DevToolsAgentAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsAgentInterfaceBase>;
using DevToolsAgentAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsAgentInterfaceBase>;
class DevToolsSessionInterfaceBase {};

using DevToolsSessionPtrDataView =
    mojo::InterfacePtrDataView<DevToolsSessionInterfaceBase>;
using DevToolsSessionRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsSessionInterfaceBase>;
using DevToolsSessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsSessionInterfaceBase>;
using DevToolsSessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsSessionInterfaceBase>;
class DevToolsSessionHostInterfaceBase {};

using DevToolsSessionHostPtrDataView =
    mojo::InterfacePtrDataView<DevToolsSessionHostInterfaceBase>;
using DevToolsSessionHostRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsSessionHostInterfaceBase>;
using DevToolsSessionHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsSessionHostInterfaceBase>;
using DevToolsSessionHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsSessionHostInterfaceBase>;
class DevToolsAgent_AttachDevToolsSession_ParamsDataView {
 public:
  DevToolsAgent_AttachDevToolsSession_ParamsDataView() {}

  DevToolsAgent_AttachDevToolsSession_ParamsDataView(
      internal::DevToolsAgent_AttachDevToolsSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsSessionHostAssociatedPtrInfoDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsSessionAssociatedRequestDataView>(
            &data_->session, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeIoSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsSessionRequestDataView>(
            &data_->io_session, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetReattachStateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReattachState(UserType* output) {
    auto* pointer = data_->reattach_state.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsAgent_AttachDevToolsSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsAgent_InspectElement_ParamsDataView {
 public:
  DevToolsAgent_InspectElement_ParamsDataView() {}

  DevToolsAgent_InspectElement_ParamsDataView(
      internal::DevToolsAgent_InspectElement_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsAgent_InspectElement_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSession_DispatchProtocolCommand_ParamsDataView {
 public:
  DevToolsSession_DispatchProtocolCommand_ParamsDataView() {}

  DevToolsSession_DispatchProtocolCommand_ParamsDataView(
      internal::DevToolsSession_DispatchProtocolCommand_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t call_id() const {
    return data_->call_id;
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSession_DispatchProtocolCommand_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView {
 public:
  DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView() {}

  DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView(
      internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::mojo_base::mojom::BigStringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigStringDataView>(
        pointer, output, context_);
  }
  int32_t call_id() const {
    return data_->call_id;
  }
  inline void GetStateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSessionHost_DispatchProtocolResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView {
 public:
  DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView() {}

  DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView(
      internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::mojo_base::mojom::BigStringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigStringDataView>(
        pointer, output, context_);
  }
  inline void GetStateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsSessionHost_DispatchProtocolNotification_Params_Data* data_ = nullptr;
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

inline void DevToolsAgent_AttachDevToolsSession_ParamsDataView::GetReattachStateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reattach_state.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsAgent_InspectElement_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


inline void DevToolsSession_DispatchProtocolCommand_ParamsDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DevToolsSession_DispatchProtocolCommand_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::BigStringDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::BigStringDataView(pointer, context_);
}
inline void DevToolsSessionHost_DispatchProtocolResponse_ParamsDataView::GetStateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->state.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::BigStringDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::BigStringDataView(pointer, context_);
}
inline void DevToolsSessionHost_DispatchProtocolNotification_ParamsDataView::GetStateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->state.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_DEVTOOLS_AGENT_MOJOM_SHARED_H_
