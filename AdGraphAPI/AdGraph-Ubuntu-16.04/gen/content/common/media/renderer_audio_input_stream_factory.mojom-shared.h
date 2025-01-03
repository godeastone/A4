// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_H_

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
#include "content/common/media/renderer_audio_input_stream_factory.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared.h"
#include "media/mojo/interfaces/audio_input_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

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
class RendererAudioInputStreamFactoryInterfaceBase {};

using RendererAudioInputStreamFactoryPtrDataView =
    mojo::InterfacePtrDataView<RendererAudioInputStreamFactoryInterfaceBase>;
using RendererAudioInputStreamFactoryRequestDataView =
    mojo::InterfaceRequestDataView<RendererAudioInputStreamFactoryInterfaceBase>;
using RendererAudioInputStreamFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RendererAudioInputStreamFactoryInterfaceBase>;
using RendererAudioInputStreamFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RendererAudioInputStreamFactoryInterfaceBase>;
class RendererAudioInputStreamFactoryClientInterfaceBase {};

using RendererAudioInputStreamFactoryClientPtrDataView =
    mojo::InterfacePtrDataView<RendererAudioInputStreamFactoryClientInterfaceBase>;
using RendererAudioInputStreamFactoryClientRequestDataView =
    mojo::InterfaceRequestDataView<RendererAudioInputStreamFactoryClientInterfaceBase>;
using RendererAudioInputStreamFactoryClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RendererAudioInputStreamFactoryClientInterfaceBase>;
using RendererAudioInputStreamFactoryClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RendererAudioInputStreamFactoryClientInterfaceBase>;
class RendererAudioInputStreamFactory_CreateStream_ParamsDataView {
 public:
  RendererAudioInputStreamFactory_CreateStream_ParamsDataView() {}

  RendererAudioInputStreamFactory_CreateStream_ParamsDataView(
      internal::RendererAudioInputStreamFactory_CreateStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::RendererAudioInputStreamFactoryClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t session_id() const {
    return data_->session_id;
  }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  bool automatic_gain_control() const {
    return data_->automatic_gain_control;
  }
  uint32_t shared_memory_count() const {
    return data_->shared_memory_count;
  }
 private:
  internal::RendererAudioInputStreamFactory_CreateStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_ParamsDataView {
 public:
  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_ParamsDataView() {}

  RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_ParamsDataView(
      internal::RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputStreamIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputStreamId(UserType* output) {
    auto* pointer = data_->input_stream_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetOutputDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputDeviceId(UserType* output) {
    auto* pointer = data_->output_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererAudioInputStreamFactoryClient_StreamCreated_ParamsDataView {
 public:
  RendererAudioInputStreamFactoryClient_StreamCreated_ParamsDataView() {}

  RendererAudioInputStreamFactoryClient_StreamCreated_ParamsDataView(
      internal::RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStream() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamPtrDataView>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamClientRequestDataView>(
            &data_->client_request, &result, context_);
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
  bool initially_muted() const {
    return data_->initially_muted;
  }
  inline void GetStreamIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamId(UserType* output) {
    auto* pointer = data_->stream_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererAudioInputStreamFactoryClient_StreamCreated_Params_Data* data_ = nullptr;
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

inline void RendererAudioInputStreamFactory_CreateStream_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}


inline void RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_ParamsDataView::GetInputStreamIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->input_stream_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void RendererAudioInputStreamFactory_AssociateInputAndOutputForAec_ParamsDataView::GetOutputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->output_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void RendererAudioInputStreamFactoryClient_StreamCreated_ParamsDataView::GetDataPipeDataView(
    ::media::mojom::AudioDataPipeDataView* output) {
  auto pointer = data_->data_pipe.Get();
  *output = ::media::mojom::AudioDataPipeDataView(pointer, context_);
}
inline void RendererAudioInputStreamFactoryClient_StreamCreated_ParamsDataView::GetStreamIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->stream_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_H_
