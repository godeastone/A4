// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_logging.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"

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
class AudioLogInterfaceBase {};

using AudioLogPtrDataView =
    mojo::InterfacePtrDataView<AudioLogInterfaceBase>;
using AudioLogRequestDataView =
    mojo::InterfaceRequestDataView<AudioLogInterfaceBase>;
using AudioLogAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioLogInterfaceBase>;
using AudioLogAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioLogInterfaceBase>;
class AudioLog_OnCreated_ParamsDataView {
 public:
  AudioLog_OnCreated_ParamsDataView() {}

  AudioLog_OnCreated_ParamsDataView(
      internal::AudioLog_OnCreated_Params_Data* data,
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
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioLog_OnCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioLog_OnStarted_ParamsDataView {
 public:
  AudioLog_OnStarted_ParamsDataView() {}

  AudioLog_OnStarted_ParamsDataView(
      internal::AudioLog_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnStarted_Params_Data* data_ = nullptr;
};

class AudioLog_OnStopped_ParamsDataView {
 public:
  AudioLog_OnStopped_ParamsDataView() {}

  AudioLog_OnStopped_ParamsDataView(
      internal::AudioLog_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnStopped_Params_Data* data_ = nullptr;
};

class AudioLog_OnClosed_ParamsDataView {
 public:
  AudioLog_OnClosed_ParamsDataView() {}

  AudioLog_OnClosed_ParamsDataView(
      internal::AudioLog_OnClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnClosed_Params_Data* data_ = nullptr;
};

class AudioLog_OnError_ParamsDataView {
 public:
  AudioLog_OnError_ParamsDataView() {}

  AudioLog_OnError_ParamsDataView(
      internal::AudioLog_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnError_Params_Data* data_ = nullptr;
};

class AudioLog_OnSetVolume_ParamsDataView {
 public:
  AudioLog_OnSetVolume_ParamsDataView() {}

  AudioLog_OnSetVolume_ParamsDataView(
      internal::AudioLog_OnSetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double volume() const {
    return data_->volume;
  }
 private:
  internal::AudioLog_OnSetVolume_Params_Data* data_ = nullptr;
};

class AudioLog_OnLogMessage_ParamsDataView {
 public:
  AudioLog_OnLogMessage_ParamsDataView() {}

  AudioLog_OnLogMessage_ParamsDataView(
      internal::AudioLog_OnLogMessage_Params_Data* data,
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
  internal::AudioLog_OnLogMessage_Params_Data* data_ = nullptr;
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

inline void AudioLog_OnCreated_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void AudioLog_OnCreated_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}












inline void AudioLog_OnLogMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_H_
