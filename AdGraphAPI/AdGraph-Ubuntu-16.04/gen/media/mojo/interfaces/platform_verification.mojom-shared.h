// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/platform_verification.mojom-shared-internal.h"

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
class PlatformVerificationInterfaceBase {};

using PlatformVerificationPtrDataView =
    mojo::InterfacePtrDataView<PlatformVerificationInterfaceBase>;
using PlatformVerificationRequestDataView =
    mojo::InterfaceRequestDataView<PlatformVerificationInterfaceBase>;
using PlatformVerificationAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PlatformVerificationInterfaceBase>;
using PlatformVerificationAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PlatformVerificationInterfaceBase>;
class PlatformVerification_ChallengePlatform_ParamsDataView {
 public:
  PlatformVerification_ChallengePlatform_ParamsDataView() {}

  PlatformVerification_ChallengePlatform_ParamsDataView(
      internal::PlatformVerification_ChallengePlatform_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetChallengeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChallenge(UserType* output) {
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PlatformVerification_ChallengePlatform_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlatformVerification_ChallengePlatform_ResponseParamsDataView {
 public:
  PlatformVerification_ChallengePlatform_ResponseParamsDataView() {}

  PlatformVerification_ChallengePlatform_ResponseParamsDataView(
      internal::PlatformVerification_ChallengePlatform_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetSignedDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignedData(UserType* output) {
    auto* pointer = data_->signed_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSignedDataSignatureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignedDataSignature(UserType* output) {
    auto* pointer = data_->signed_data_signature.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPlatformKeyCertificateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformKeyCertificate(UserType* output) {
    auto* pointer = data_->platform_key_certificate.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PlatformVerification_ChallengePlatform_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlatformVerification_GetStorageId_ParamsDataView {
 public:
  PlatformVerification_GetStorageId_ParamsDataView() {}

  PlatformVerification_GetStorageId_ParamsDataView(
      internal::PlatformVerification_GetStorageId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t version() const {
    return data_->version;
  }
 private:
  internal::PlatformVerification_GetStorageId_Params_Data* data_ = nullptr;
};

class PlatformVerification_GetStorageId_ResponseParamsDataView {
 public:
  PlatformVerification_GetStorageId_ResponseParamsDataView() {}

  PlatformVerification_GetStorageId_ResponseParamsDataView(
      internal::PlatformVerification_GetStorageId_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t version() const {
    return data_->version;
  }
  inline void GetStorageIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorageId(UserType* output) {
    auto* pointer = data_->storage_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::PlatformVerification_GetStorageId_ResponseParams_Data* data_ = nullptr;
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

inline void PlatformVerification_ChallengePlatform_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PlatformVerification_ChallengePlatform_ParamsDataView::GetChallengeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PlatformVerification_ChallengePlatform_ResponseParamsDataView::GetSignedDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signed_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PlatformVerification_ChallengePlatform_ResponseParamsDataView::GetSignedDataSignatureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signed_data_signature.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PlatformVerification_ChallengePlatform_ResponseParamsDataView::GetPlatformKeyCertificateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->platform_key_certificate.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PlatformVerification_GetStorageId_ResponseParamsDataView::GetStorageIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->storage_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_H_
