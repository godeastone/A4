// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_H_
#define CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_H_

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
#include "content/common/media/peer_connection_tracker.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PeerConnectionTrackerHostInterfaceBase {};

using PeerConnectionTrackerHostPtrDataView =
    mojo::InterfacePtrDataView<PeerConnectionTrackerHostInterfaceBase>;
using PeerConnectionTrackerHostRequestDataView =
    mojo::InterfaceRequestDataView<PeerConnectionTrackerHostInterfaceBase>;
using PeerConnectionTrackerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PeerConnectionTrackerHostInterfaceBase>;
using PeerConnectionTrackerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PeerConnectionTrackerHostInterfaceBase>;
class PeerConnectionTrackerHost_RemovePeerConnection_ParamsDataView {
 public:
  PeerConnectionTrackerHost_RemovePeerConnection_ParamsDataView() {}

  PeerConnectionTrackerHost_RemovePeerConnection_ParamsDataView(
      internal::PeerConnectionTrackerHost_RemovePeerConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t lid() const {
    return data_->lid;
  }
 private:
  internal::PeerConnectionTrackerHost_RemovePeerConnection_Params_Data* data_ = nullptr;
};

class PeerConnectionTrackerHost_UpdatePeerConnection_ParamsDataView {
 public:
  PeerConnectionTrackerHost_UpdatePeerConnection_ParamsDataView() {}

  PeerConnectionTrackerHost_UpdatePeerConnection_ParamsDataView(
      internal::PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t lid() const {
    return data_->lid;
  }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PeerConnectionTrackerHost_GetUserMedia_ParamsDataView {
 public:
  PeerConnectionTrackerHost_GetUserMedia_ParamsDataView() {}

  PeerConnectionTrackerHost_GetUserMedia_ParamsDataView(
      internal::PeerConnectionTrackerHost_GetUserMedia_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool audio() const {
    return data_->audio;
  }
  bool video() const {
    return data_->video;
  }
  inline void GetAudioConstraintsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioConstraints(UserType* output) {
    auto* pointer = data_->audio_constraints.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetVideoConstraintsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoConstraints(UserType* output) {
    auto* pointer = data_->video_constraints.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PeerConnectionTrackerHost_GetUserMedia_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PeerConnectionTrackerHost_WebRtcEventLogWrite_ParamsDataView {
 public:
  PeerConnectionTrackerHost_WebRtcEventLogWrite_ParamsDataView() {}

  PeerConnectionTrackerHost_WebRtcEventLogWrite_ParamsDataView(
      internal::PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t lid() const {
    return data_->lid;
  }
  inline void GetOutputDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutput(UserType* output) {
    auto* pointer = data_->output.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {



inline void PeerConnectionTrackerHost_UpdatePeerConnection_ParamsDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PeerConnectionTrackerHost_UpdatePeerConnection_ParamsDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PeerConnectionTrackerHost_GetUserMedia_ParamsDataView::GetOriginDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->origin.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PeerConnectionTrackerHost_GetUserMedia_ParamsDataView::GetAudioConstraintsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->audio_constraints.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PeerConnectionTrackerHost_GetUserMedia_ParamsDataView::GetVideoConstraintsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->video_constraints.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PeerConnectionTrackerHost_WebRtcEventLogWrite_ParamsDataView::GetOutputDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->output.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_H_
