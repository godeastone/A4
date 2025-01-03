// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/key_system_support.mojom-shared-internal.h"
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
class KeySystemSupportInterfaceBase {};

using KeySystemSupportPtrDataView =
    mojo::InterfacePtrDataView<KeySystemSupportInterfaceBase>;
using KeySystemSupportRequestDataView =
    mojo::InterfaceRequestDataView<KeySystemSupportInterfaceBase>;
using KeySystemSupportAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<KeySystemSupportInterfaceBase>;
using KeySystemSupportAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<KeySystemSupportInterfaceBase>;
class KeySystemSupport_IsKeySystemSupported_ParamsDataView {
 public:
  KeySystemSupport_IsKeySystemSupported_ParamsDataView() {}

  KeySystemSupport_IsKeySystemSupported_ParamsDataView(
      internal::KeySystemSupport_IsKeySystemSupported_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::KeySystemSupport_IsKeySystemSupported_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView {
 public:
  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView() {}

  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView(
      internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool is_supported() const {
    return data_->is_supported;
  }
  inline void GetSupportedVideoCodecsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCodec>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedVideoCodecs(UserType* output) {
    auto* pointer = data_->supported_video_codecs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCodec>>(
        pointer, output, context_);
  }
  bool supports_persistent_license() const {
    return data_->supports_persistent_license;
  }
  inline void GetSupportedEncryptionSchemesDataView(
      mojo::ArrayDataView<::media::mojom::EncryptionMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedEncryptionSchemes(UserType* output) {
    auto* pointer = data_->supported_encryption_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::EncryptionMode>>(
        pointer, output, context_);
  }
 private:
  internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* data_ = nullptr;
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

inline void KeySystemSupport_IsKeySystemSupported_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView::GetSupportedVideoCodecsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCodec>* output) {
  auto pointer = data_->supported_video_codecs.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCodec>(pointer, context_);
}
inline void KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView::GetSupportedEncryptionSchemesDataView(
    mojo::ArrayDataView<::media::mojom::EncryptionMode>* output) {
  auto pointer = data_->supported_encryption_schemes.Get();
  *output = mojo::ArrayDataView<::media::mojom::EncryptionMode>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_H_
