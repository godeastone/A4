// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_input_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class AudioInputStreamInterfaceBase {};

using AudioInputStreamPtrDataView =
    mojo::InterfacePtrDataView<AudioInputStreamInterfaceBase>;
using AudioInputStreamRequestDataView =
    mojo::InterfaceRequestDataView<AudioInputStreamInterfaceBase>;
using AudioInputStreamAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioInputStreamInterfaceBase>;
using AudioInputStreamAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioInputStreamInterfaceBase>;
class AudioInputStreamClientInterfaceBase {};

using AudioInputStreamClientPtrDataView =
    mojo::InterfacePtrDataView<AudioInputStreamClientInterfaceBase>;
using AudioInputStreamClientRequestDataView =
    mojo::InterfaceRequestDataView<AudioInputStreamClientInterfaceBase>;
using AudioInputStreamClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioInputStreamClientInterfaceBase>;
using AudioInputStreamClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioInputStreamClientInterfaceBase>;
class AudioInputStreamObserverInterfaceBase {};

using AudioInputStreamObserverPtrDataView =
    mojo::InterfacePtrDataView<AudioInputStreamObserverInterfaceBase>;
using AudioInputStreamObserverRequestDataView =
    mojo::InterfaceRequestDataView<AudioInputStreamObserverInterfaceBase>;
using AudioInputStreamObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioInputStreamObserverInterfaceBase>;
using AudioInputStreamObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioInputStreamObserverInterfaceBase>;
class AudioInputStream_Record_ParamsDataView {
 public:
  AudioInputStream_Record_ParamsDataView() {}

  AudioInputStream_Record_ParamsDataView(
      internal::AudioInputStream_Record_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioInputStream_Record_Params_Data* data_ = nullptr;
};

class AudioInputStream_SetVolume_ParamsDataView {
 public:
  AudioInputStream_SetVolume_ParamsDataView() {}

  AudioInputStream_SetVolume_ParamsDataView(
      internal::AudioInputStream_SetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double volume() const {
    return data_->volume;
  }
 private:
  internal::AudioInputStream_SetVolume_Params_Data* data_ = nullptr;
};

class AudioInputStreamClient_OnError_ParamsDataView {
 public:
  AudioInputStreamClient_OnError_ParamsDataView() {}

  AudioInputStreamClient_OnError_ParamsDataView(
      internal::AudioInputStreamClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioInputStreamClient_OnError_Params_Data* data_ = nullptr;
};

class AudioInputStreamClient_OnMutedStateChanged_ParamsDataView {
 public:
  AudioInputStreamClient_OnMutedStateChanged_ParamsDataView() {}

  AudioInputStreamClient_OnMutedStateChanged_ParamsDataView(
      internal::AudioInputStreamClient_OnMutedStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_muted() const {
    return data_->is_muted;
  }
 private:
  internal::AudioInputStreamClient_OnMutedStateChanged_Params_Data* data_ = nullptr;
};

class AudioInputStreamObserver_DidStartRecording_ParamsDataView {
 public:
  AudioInputStreamObserver_DidStartRecording_ParamsDataView() {}

  AudioInputStreamObserver_DidStartRecording_ParamsDataView(
      internal::AudioInputStreamObserver_DidStartRecording_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioInputStreamObserver_DidStartRecording_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {












}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_H_
