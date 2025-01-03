// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ExternalBeginFrameControllerInterfaceBase {};

using ExternalBeginFrameControllerPtrDataView =
    mojo::InterfacePtrDataView<ExternalBeginFrameControllerInterfaceBase>;
using ExternalBeginFrameControllerRequestDataView =
    mojo::InterfaceRequestDataView<ExternalBeginFrameControllerInterfaceBase>;
using ExternalBeginFrameControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ExternalBeginFrameControllerInterfaceBase>;
using ExternalBeginFrameControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ExternalBeginFrameControllerInterfaceBase>;
class ExternalBeginFrameControllerClientInterfaceBase {};

using ExternalBeginFrameControllerClientPtrDataView =
    mojo::InterfacePtrDataView<ExternalBeginFrameControllerClientInterfaceBase>;
using ExternalBeginFrameControllerClientRequestDataView =
    mojo::InterfaceRequestDataView<ExternalBeginFrameControllerClientInterfaceBase>;
using ExternalBeginFrameControllerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ExternalBeginFrameControllerClientInterfaceBase>;
using ExternalBeginFrameControllerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ExternalBeginFrameControllerClientInterfaceBase>;
class ExternalBeginFrameController_IssueExternalBeginFrame_ParamsDataView {
 public:
  ExternalBeginFrameController_IssueExternalBeginFrame_ParamsDataView() {}

  ExternalBeginFrameController_IssueExternalBeginFrame_ParamsDataView(
      internal::ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArgsDataView(
      ::viz::mojom::BeginFrameArgsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArgs(UserType* output) {
    auto* pointer = data_->args.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameArgsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ExternalBeginFrameControllerClient_OnNeedsBeginFrames_ParamsDataView {
 public:
  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_ParamsDataView() {}

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_ParamsDataView(
      internal::ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool needs_begin_frames() const {
    return data_->needs_begin_frames;
  }
 private:
  internal::ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data* data_ = nullptr;
};

class ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_ParamsDataView {
 public:
  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_ParamsDataView() {}

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_ParamsDataView(
      internal::ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAckDataView(
      ::viz::mojom::BeginFrameAckDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAck(UserType* output) {
    auto* pointer = data_->ack.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameAckDataView>(
        pointer, output, context_);
  }
 private:
  internal::ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {

inline void ExternalBeginFrameController_IssueExternalBeginFrame_ParamsDataView::GetArgsDataView(
    ::viz::mojom::BeginFrameArgsDataView* output) {
  auto pointer = data_->args.Get();
  *output = ::viz::mojom::BeginFrameArgsDataView(pointer, context_);
}




inline void ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_ParamsDataView::GetAckDataView(
    ::viz::mojom::BeginFrameAckDataView* output) {
  auto pointer = data_->ack.Get();
  *output = ::viz::mojom::BeginFrameAckDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_H_
