// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_H_

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
#include "services/audio/public/mojom/system_info.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
#include "services/audio/public/mojom/audio_device_description.mojom-shared.h"

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
class SystemInfoInterfaceBase {};

using SystemInfoPtrDataView =
    mojo::InterfacePtrDataView<SystemInfoInterfaceBase>;
using SystemInfoRequestDataView =
    mojo::InterfaceRequestDataView<SystemInfoInterfaceBase>;
using SystemInfoAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SystemInfoInterfaceBase>;
using SystemInfoAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SystemInfoInterfaceBase>;
class SystemInfo_GetInputStreamParameters_ParamsDataView {
 public:
  SystemInfo_GetInputStreamParameters_ParamsDataView() {}

  SystemInfo_GetInputStreamParameters_ParamsDataView(
      internal::SystemInfo_GetInputStreamParameters_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetInputStreamParameters_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetInputStreamParameters_ResponseParamsDataView {
 public:
  SystemInfo_GetInputStreamParameters_ResponseParamsDataView() {}

  SystemInfo_GetInputStreamParameters_ResponseParamsDataView(
      internal::SystemInfo_GetInputStreamParameters_ResponseParams_Data* data,
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
 private:
  internal::SystemInfo_GetInputStreamParameters_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetOutputStreamParameters_ParamsDataView {
 public:
  SystemInfo_GetOutputStreamParameters_ParamsDataView() {}

  SystemInfo_GetOutputStreamParameters_ParamsDataView(
      internal::SystemInfo_GetOutputStreamParameters_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetOutputStreamParameters_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetOutputStreamParameters_ResponseParamsDataView {
 public:
  SystemInfo_GetOutputStreamParameters_ResponseParamsDataView() {}

  SystemInfo_GetOutputStreamParameters_ResponseParamsDataView(
      internal::SystemInfo_GetOutputStreamParameters_ResponseParams_Data* data,
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
 private:
  internal::SystemInfo_GetOutputStreamParameters_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_HasInputDevices_ParamsDataView {
 public:
  SystemInfo_HasInputDevices_ParamsDataView() {}

  SystemInfo_HasInputDevices_ParamsDataView(
      internal::SystemInfo_HasInputDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SystemInfo_HasInputDevices_Params_Data* data_ = nullptr;
};

class SystemInfo_HasInputDevices_ResponseParamsDataView {
 public:
  SystemInfo_HasInputDevices_ResponseParamsDataView() {}

  SystemInfo_HasInputDevices_ResponseParamsDataView(
      internal::SystemInfo_HasInputDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_input_devices() const {
    return data_->has_input_devices;
  }
 private:
  internal::SystemInfo_HasInputDevices_ResponseParams_Data* data_ = nullptr;
};

class SystemInfo_HasOutputDevices_ParamsDataView {
 public:
  SystemInfo_HasOutputDevices_ParamsDataView() {}

  SystemInfo_HasOutputDevices_ParamsDataView(
      internal::SystemInfo_HasOutputDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SystemInfo_HasOutputDevices_Params_Data* data_ = nullptr;
};

class SystemInfo_HasOutputDevices_ResponseParamsDataView {
 public:
  SystemInfo_HasOutputDevices_ResponseParamsDataView() {}

  SystemInfo_HasOutputDevices_ResponseParamsDataView(
      internal::SystemInfo_HasOutputDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_output_devices() const {
    return data_->has_output_devices;
  }
 private:
  internal::SystemInfo_HasOutputDevices_ResponseParams_Data* data_ = nullptr;
};

class SystemInfo_GetInputDeviceDescriptions_ParamsDataView {
 public:
  SystemInfo_GetInputDeviceDescriptions_ParamsDataView() {}

  SystemInfo_GetInputDeviceDescriptions_ParamsDataView(
      internal::SystemInfo_GetInputDeviceDescriptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SystemInfo_GetInputDeviceDescriptions_Params_Data* data_ = nullptr;
};

class SystemInfo_GetInputDeviceDescriptions_ResponseParamsDataView {
 public:
  SystemInfo_GetInputDeviceDescriptions_ResponseParamsDataView() {}

  SystemInfo_GetInputDeviceDescriptions_ResponseParamsDataView(
      internal::SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceDescriptionsDataView(
      mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceDescriptions(UserType* output) {
    auto* pointer = data_->device_descriptions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetInputDeviceDescriptions_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetOutputDeviceDescriptions_ParamsDataView {
 public:
  SystemInfo_GetOutputDeviceDescriptions_ParamsDataView() {}

  SystemInfo_GetOutputDeviceDescriptions_ParamsDataView(
      internal::SystemInfo_GetOutputDeviceDescriptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SystemInfo_GetOutputDeviceDescriptions_Params_Data* data_ = nullptr;
};

class SystemInfo_GetOutputDeviceDescriptions_ResponseParamsDataView {
 public:
  SystemInfo_GetOutputDeviceDescriptions_ResponseParamsDataView() {}

  SystemInfo_GetOutputDeviceDescriptions_ResponseParamsDataView(
      internal::SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceDescriptionsDataView(
      mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceDescriptions(UserType* output) {
    auto* pointer = data_->device_descriptions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetOutputDeviceDescriptions_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetAssociatedOutputDeviceID_ParamsDataView {
 public:
  SystemInfo_GetAssociatedOutputDeviceID_ParamsDataView() {}

  SystemInfo_GetAssociatedOutputDeviceID_ParamsDataView(
      internal::SystemInfo_GetAssociatedOutputDeviceID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputDeviceId(UserType* output) {
    auto* pointer = data_->input_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetAssociatedOutputDeviceID_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetAssociatedOutputDeviceID_ResponseParamsDataView {
 public:
  SystemInfo_GetAssociatedOutputDeviceID_ResponseParamsDataView() {}

  SystemInfo_GetAssociatedOutputDeviceID_ResponseParamsDataView(
      internal::SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAssociatedOutputDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAssociatedOutputDeviceId(UserType* output) {
    auto* pointer = data_->associated_output_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetAssociatedOutputDeviceID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetInputDeviceInfo_ParamsDataView {
 public:
  SystemInfo_GetInputDeviceInfo_ParamsDataView() {}

  SystemInfo_GetInputDeviceInfo_ParamsDataView(
      internal::SystemInfo_GetInputDeviceInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputDeviceId(UserType* output) {
    auto* pointer = data_->input_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetInputDeviceInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemInfo_GetInputDeviceInfo_ResponseParamsDataView {
 public:
  SystemInfo_GetInputDeviceInfo_ResponseParamsDataView() {}

  SystemInfo_GetInputDeviceInfo_ResponseParamsDataView(
      internal::SystemInfo_GetInputDeviceInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputParams(UserType* output) {
    auto* pointer = data_->input_params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  inline void GetAssociatedOutputDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAssociatedOutputDeviceId(UserType* output) {
    auto* pointer = data_->associated_output_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemInfo_GetInputDeviceInfo_ResponseParams_Data* data_ = nullptr;
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

inline void SystemInfo_GetInputStreamParameters_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void SystemInfo_GetInputStreamParameters_ResponseParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}


inline void SystemInfo_GetOutputStreamParameters_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void SystemInfo_GetOutputStreamParameters_ResponseParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}












inline void SystemInfo_GetInputDeviceDescriptions_ResponseParamsDataView::GetDeviceDescriptionsDataView(
    mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>* output) {
  auto pointer = data_->device_descriptions.Get();
  *output = mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>(pointer, context_);
}




inline void SystemInfo_GetOutputDeviceDescriptions_ResponseParamsDataView::GetDeviceDescriptionsDataView(
    mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>* output) {
  auto pointer = data_->device_descriptions.Get();
  *output = mojo::ArrayDataView<::audio::mojom::AudioDeviceDescriptionDataView>(pointer, context_);
}


inline void SystemInfo_GetAssociatedOutputDeviceID_ParamsDataView::GetInputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->input_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void SystemInfo_GetAssociatedOutputDeviceID_ResponseParamsDataView::GetAssociatedOutputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->associated_output_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void SystemInfo_GetInputDeviceInfo_ParamsDataView::GetInputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->input_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void SystemInfo_GetInputDeviceInfo_ResponseParamsDataView::GetInputParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->input_params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void SystemInfo_GetInputDeviceInfo_ResponseParamsDataView::GetAssociatedOutputDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->associated_output_device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_H_
