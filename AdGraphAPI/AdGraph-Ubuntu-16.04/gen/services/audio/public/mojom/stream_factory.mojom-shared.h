// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_H_

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
#include "services/audio/public/mojom/stream_factory.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared.h"
#include "media/mojo/interfaces/audio_input_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_logging.mojom-shared.h"
#include "media/mojo/interfaces/audio_output_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace audio {
namespace mojom {


}  // namespace mojom
}  // namespace audio

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace audio {
namespace mojom {
// Interface base classes. They are used for type safety check.
class LocalMuterInterfaceBase {};

using LocalMuterPtrDataView =
    mojo::InterfacePtrDataView<LocalMuterInterfaceBase>;
using LocalMuterRequestDataView =
    mojo::InterfaceRequestDataView<LocalMuterInterfaceBase>;
using LocalMuterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LocalMuterInterfaceBase>;
using LocalMuterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LocalMuterInterfaceBase>;
class StreamFactoryInterfaceBase {};

using StreamFactoryPtrDataView =
    mojo::InterfacePtrDataView<StreamFactoryInterfaceBase>;
using StreamFactoryRequestDataView =
    mojo::InterfaceRequestDataView<StreamFactoryInterfaceBase>;
using StreamFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StreamFactoryInterfaceBase>;
using StreamFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StreamFactoryInterfaceBase>;
class StreamFactory_CreateInputStream_ParamsDataView {
 public:
  StreamFactory_CreateInputStream_ParamsDataView() {}

  StreamFactory_CreateInputStream_ParamsDataView(
      internal::StreamFactory_CreateInputStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStream() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamRequestDataView>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeLog() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioLogPtrDataView>(
            &data_->log, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  uint32_t shared_memory_count() const {
    return data_->shared_memory_count;
  }
  bool enable_agc() const {
    return data_->enable_agc;
  }
  mojo::ScopedSharedBufferHandle TakeKeyPressCountBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->key_press_count_buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StreamFactory_CreateInputStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_CreateInputStream_ResponseParamsDataView {
 public:
  StreamFactory_CreateInputStream_ResponseParamsDataView() {}

  StreamFactory_CreateInputStream_ResponseParamsDataView(
      internal::StreamFactory_CreateInputStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
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
  internal::StreamFactory_CreateInputStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_AssociateInputAndOutputForAec_ParamsDataView {
 public:
  StreamFactory_AssociateInputAndOutputForAec_ParamsDataView() {}

  StreamFactory_AssociateInputAndOutputForAec_ParamsDataView(
      internal::StreamFactory_AssociateInputAndOutputForAec_Params_Data* data,
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
  internal::StreamFactory_AssociateInputAndOutputForAec_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_CreateOutputStream_ParamsDataView {
 public:
  StreamFactory_CreateOutputStream_ParamsDataView() {}

  StreamFactory_CreateOutputStream_ParamsDataView(
      internal::StreamFactory_CreateOutputStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStream() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamRequestDataView>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamObserverAssociatedPtrInfoDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeLog() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioLogPtrDataView>(
            &data_->log, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::StreamFactory_CreateOutputStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_CreateOutputStream_ResponseParamsDataView {
 public:
  StreamFactory_CreateOutputStream_ResponseParamsDataView() {}

  StreamFactory_CreateOutputStream_ResponseParamsDataView(
      internal::StreamFactory_CreateOutputStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataPipeDataView(
      ::media::mojom::AudioDataPipeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataPipe(UserType* output) {
    auto* pointer = data_->data_pipe.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDataPipeDataView>(
        pointer, output, context_);
  }
 private:
  internal::StreamFactory_CreateOutputStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_BindMuter_ParamsDataView {
 public:
  StreamFactory_BindMuter_ParamsDataView() {}

  StreamFactory_BindMuter_ParamsDataView(
      internal::StreamFactory_BindMuter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::audio::mojom::LocalMuterAssociatedRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetGroupIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::StreamFactory_BindMuter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_CreateLoopbackStream_ParamsDataView {
 public:
  StreamFactory_CreateLoopbackStream_ParamsDataView() {}

  StreamFactory_CreateLoopbackStream_ParamsDataView(
      internal::StreamFactory_CreateLoopbackStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStream() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamRequestDataView>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioInputStreamObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  uint32_t shared_memory_count() const {
    return data_->shared_memory_count;
  }
  inline void GetGroupIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::StreamFactory_CreateLoopbackStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamFactory_CreateLoopbackStream_ResponseParamsDataView {
 public:
  StreamFactory_CreateLoopbackStream_ResponseParamsDataView() {}

  StreamFactory_CreateLoopbackStream_ResponseParamsDataView(
      internal::StreamFactory_CreateLoopbackStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataPipeDataView(
      ::media::mojom::AudioDataPipeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataPipe(UserType* output) {
    auto* pointer = data_->data_pipe.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDataPipeDataView>(
        pointer, output, context_);
  }
 private:
  internal::StreamFactory_CreateLoopbackStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace audio

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace audio {
namespace mojom {

inline void StreamFactory_CreateInputStream_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StreamFactory_CreateInputStream_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}


inline void StreamFactory_CreateInputStream_ResponseParamsDataView::GetDataPipeDataView(
    ::media::mojom::AudioDataPipeDataView* output) {
  auto pointer = data_->data_pipe.Get();
  *output = ::media::mojom::AudioDataPipeDataView(pointer, context_);
}
inline void StreamFactory_CreateInputStream_ResponseParamsDataView::GetStreamIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->stream_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void StreamFactory_AssociateInputAndOutputForAec_ParamsDataView::GetInputStreamIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->input_stream_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void StreamFactory_AssociateInputAndOutputForAec_ParamsDataView::GetOutputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->output_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StreamFactory_CreateOutputStream_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StreamFactory_CreateOutputStream_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void StreamFactory_CreateOutputStream_ParamsDataView::GetGroupIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void StreamFactory_CreateOutputStream_ResponseParamsDataView::GetDataPipeDataView(
    ::media::mojom::AudioDataPipeDataView* output) {
  auto pointer = data_->data_pipe.Get();
  *output = ::media::mojom::AudioDataPipeDataView(pointer, context_);
}


inline void StreamFactory_BindMuter_ParamsDataView::GetGroupIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void StreamFactory_CreateLoopbackStream_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void StreamFactory_CreateLoopbackStream_ParamsDataView::GetGroupIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void StreamFactory_CreateLoopbackStream_ResponseParamsDataView::GetDataPipeDataView(
    ::media::mojom::AudioDataPipeDataView* output) {
  auto pointer = data_->data_pipe.Get();
  *output = ::media::mojom::AudioDataPipeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_STREAM_FACTORY_MOJOM_SHARED_H_
