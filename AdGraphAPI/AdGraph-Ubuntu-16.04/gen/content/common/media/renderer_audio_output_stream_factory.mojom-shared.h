// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_SHARED_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_SHARED_H_

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
#include "content/common/media/renderer_audio_output_stream_factory.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_output_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"

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
class RendererAudioOutputStreamFactoryInterfaceBase {};

using RendererAudioOutputStreamFactoryPtrDataView =
    mojo::InterfacePtrDataView<RendererAudioOutputStreamFactoryInterfaceBase>;
using RendererAudioOutputStreamFactoryRequestDataView =
    mojo::InterfaceRequestDataView<RendererAudioOutputStreamFactoryInterfaceBase>;
using RendererAudioOutputStreamFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RendererAudioOutputStreamFactoryInterfaceBase>;
using RendererAudioOutputStreamFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RendererAudioOutputStreamFactoryInterfaceBase>;
class RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ParamsDataView {
 public:
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ParamsDataView() {}

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ParamsDataView(
      internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStreamProviderRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamProviderRequestDataView>(
            &data_->stream_provider_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t session_id() const {
    return data_->session_id;
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
  internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParamsDataView {
 public:
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParamsDataView() {}

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParamsDataView(
      internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::media::mojom::OutputDeviceStatus>(
        data_value, output);
  }

  ::media::mojom::OutputDeviceStatus state() const {
    return static_cast<::media::mojom::OutputDeviceStatus>(data_->state);
  }
  inline void GetOutputParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputParams(UserType* output) {
    auto* pointer = data_->output_params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  inline void GetMatchedDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchedDeviceId(UserType* output) {
    auto* pointer = data_->matched_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams_Data* data_ = nullptr;
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

inline void RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParamsDataView::GetOutputParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->output_params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParamsDataView::GetMatchedDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->matched_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_OUTPUT_STREAM_FACTORY_MOJOM_SHARED_H_
