// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_output_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared.h"
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
class AudioOutputStreamInterfaceBase {};

using AudioOutputStreamPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamInterfaceBase>;
using AudioOutputStreamRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamInterfaceBase>;
using AudioOutputStreamAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamInterfaceBase>;
using AudioOutputStreamAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamInterfaceBase>;
class AudioOutputStreamObserverInterfaceBase {};

using AudioOutputStreamObserverPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamObserverInterfaceBase>;
using AudioOutputStreamObserverRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamObserverInterfaceBase>;
using AudioOutputStreamObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamObserverInterfaceBase>;
using AudioOutputStreamObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamObserverInterfaceBase>;
class AudioOutputStreamProviderInterfaceBase {};

using AudioOutputStreamProviderPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamProviderInterfaceBase>;
using AudioOutputStreamProviderRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamProviderInterfaceBase>;
using AudioOutputStreamProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamProviderInterfaceBase>;
using AudioOutputStreamProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamProviderInterfaceBase>;
class AudioOutputStreamProviderClientInterfaceBase {};

using AudioOutputStreamProviderClientPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamProviderClientInterfaceBase>;
using AudioOutputStreamProviderClientRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamProviderClientInterfaceBase>;
using AudioOutputStreamProviderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamProviderClientInterfaceBase>;
using AudioOutputStreamProviderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamProviderClientInterfaceBase>;
class AudioOutputStream_Play_ParamsDataView {
 public:
  AudioOutputStream_Play_ParamsDataView() {}

  AudioOutputStream_Play_ParamsDataView(
      internal::AudioOutputStream_Play_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStream_Play_Params_Data* data_ = nullptr;
};

class AudioOutputStream_Pause_ParamsDataView {
 public:
  AudioOutputStream_Pause_ParamsDataView() {}

  AudioOutputStream_Pause_ParamsDataView(
      internal::AudioOutputStream_Pause_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStream_Pause_Params_Data* data_ = nullptr;
};

class AudioOutputStream_SetVolume_ParamsDataView {
 public:
  AudioOutputStream_SetVolume_ParamsDataView() {}

  AudioOutputStream_SetVolume_ParamsDataView(
      internal::AudioOutputStream_SetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double volume() const {
    return data_->volume;
  }
 private:
  internal::AudioOutputStream_SetVolume_Params_Data* data_ = nullptr;
};

class AudioOutputStreamObserver_DidStartPlaying_ParamsDataView {
 public:
  AudioOutputStreamObserver_DidStartPlaying_ParamsDataView() {}

  AudioOutputStreamObserver_DidStartPlaying_ParamsDataView(
      internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data* data_ = nullptr;
};

class AudioOutputStreamObserver_DidStopPlaying_ParamsDataView {
 public:
  AudioOutputStreamObserver_DidStopPlaying_ParamsDataView() {}

  AudioOutputStreamObserver_DidStopPlaying_ParamsDataView(
      internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data* data_ = nullptr;
};

class AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView {
 public:
  AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView() {}

  AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView(
      internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_audible() const {
    return data_->is_audible;
  }
 private:
  internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* data_ = nullptr;
};

class AudioOutputStreamProvider_Acquire_ParamsDataView {
 public:
  AudioOutputStreamProvider_Acquire_ParamsDataView() {}

  AudioOutputStreamProvider_Acquire_ParamsDataView(
      internal::AudioOutputStreamProvider_Acquire_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamProviderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioOutputStreamProvider_Acquire_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioOutputStreamProviderClient_Created_ParamsDataView {
 public:
  AudioOutputStreamProviderClient_Created_ParamsDataView() {}

  AudioOutputStreamProviderClient_Created_ParamsDataView(
      internal::AudioOutputStreamProviderClient_Created_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStream() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamPtrDataView>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDataPipeDataView(
      ::media::mojom::AudioDataPipeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataPipe(UserType* output) {
    auto* pointer = data_->data_pipe.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDataPipeDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioOutputStreamProviderClient_Created_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {













inline void AudioOutputStreamProvider_Acquire_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}


inline void AudioOutputStreamProviderClient_Created_ParamsDataView::GetDataPipeDataView(
    ::media::mojom::AudioDataPipeDataView* output) {
  auto pointer = data_->data_pipe.Get();
  *output = ::media::mojom::AudioDataPipeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_H_
