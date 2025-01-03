// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/interface_factory.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_decoder.mojom-shared.h"
#include "media/mojo/interfaces/cdm_proxy.mojom-shared.h"
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"
#include "media/mojo/interfaces/renderer.mojom-shared.h"
#include "media/mojo/interfaces/video_decoder.mojom-shared.h"

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

enum class HostedRendererType : int32_t {
  kDefault,
  kMinValue = 0,
  kMaxValue = 0,
};

inline std::ostream& operator<<(std::ostream& os, HostedRendererType value) {
  switch(value) {
    case HostedRendererType::kDefault:
      return os << "HostedRendererType::kDefault";
    default:
      return os << "Unknown HostedRendererType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(HostedRendererType value) {
  return internal::HostedRendererType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class InterfaceFactoryInterfaceBase {};

using InterfaceFactoryPtrDataView =
    mojo::InterfacePtrDataView<InterfaceFactoryInterfaceBase>;
using InterfaceFactoryRequestDataView =
    mojo::InterfaceRequestDataView<InterfaceFactoryInterfaceBase>;
using InterfaceFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterfaceFactoryInterfaceBase>;
using InterfaceFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterfaceFactoryInterfaceBase>;
class InterfaceFactory_CreateAudioDecoder_ParamsDataView {
 public:
  InterfaceFactory_CreateAudioDecoder_ParamsDataView() {}

  InterfaceFactory_CreateAudioDecoder_ParamsDataView(
      internal::InterfaceFactory_CreateAudioDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAudioDecoder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioDecoderRequestDataView>(
            &data_->audio_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateAudioDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateVideoDecoder_ParamsDataView {
 public:
  InterfaceFactory_CreateVideoDecoder_ParamsDataView() {}

  InterfaceFactory_CreateVideoDecoder_ParamsDataView(
      internal::InterfaceFactory_CreateVideoDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVideoDecoder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecoderRequestDataView>(
            &data_->video_decoder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateVideoDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateRenderer_ParamsDataView {
 public:
  InterfaceFactory_CreateRenderer_ParamsDataView() {}

  InterfaceFactory_CreateRenderer_ParamsDataView(
      internal::InterfaceFactory_CreateRenderer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media::mojom::HostedRendererType>(
        data_value, output);
  }

  HostedRendererType type() const {
    return static_cast<HostedRendererType>(data_->type);
  }
  inline void GetTypeSpecificIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTypeSpecificId(UserType* output) {
    auto* pointer = data_->type_specific_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRenderer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RendererRequestDataView>(
            &data_->renderer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateRenderer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateCdm_ParamsDataView {
 public:
  InterfaceFactory_CreateCdm_ParamsDataView() {}

  InterfaceFactory_CreateCdm_ParamsDataView(
      internal::InterfaceFactory_CreateCdm_Params_Data* data,
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
  template <typename UserType>
  UserType TakeCdm() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleRequestDataView>(
            &data_->cdm, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateDecryptor_ParamsDataView {
 public:
  InterfaceFactory_CreateDecryptor_ParamsDataView() {}

  InterfaceFactory_CreateDecryptor_ParamsDataView(
      internal::InterfaceFactory_CreateDecryptor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
  template <typename UserType>
  UserType TakeDecryptor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::DecryptorRequestDataView>(
            &data_->decryptor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateDecryptor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceFactory_CreateCdmProxy_ParamsDataView {
 public:
  InterfaceFactory_CreateCdmProxy_ParamsDataView() {}

  InterfaceFactory_CreateCdmProxy_ParamsDataView(
      internal::InterfaceFactory_CreateCdmProxy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCdmGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCdmGuid(UserType* output) {
    auto* pointer = data_->cdm_guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCdmProxy() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmProxyRequestDataView>(
            &data_->cdm_proxy, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceFactory_CreateCdmProxy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::HostedRendererType>
    : public mojo::internal::EnumHashImpl<::media::mojom::HostedRendererType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::HostedRendererType, ::media::mojom::HostedRendererType> {
  static ::media::mojom::HostedRendererType ToMojom(::media::mojom::HostedRendererType input) { return input; }
  static bool FromMojom(::media::mojom::HostedRendererType input, ::media::mojom::HostedRendererType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::HostedRendererType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::HostedRendererType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::HostedRendererType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {





inline void InterfaceFactory_CreateRenderer_ParamsDataView::GetTypeSpecificIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type_specific_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void InterfaceFactory_CreateCdm_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void InterfaceFactory_CreateCdmProxy_ParamsDataView::GetCdmGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cdm_guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_H_
