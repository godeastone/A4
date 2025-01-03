// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_H_

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
#include "device/vr/public/mojom/vr_service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "ui/display/mojo/display.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace device {
namespace mojom {
class XRInputSourceDescriptionDataView;

class XRInputSourceStateDataView;

class VRFieldOfViewDataView;

class VRPoseDataView;

class VRDisplayCapabilitiesDataView;

class VREyeParametersDataView;

class VRStageParametersDataView;

class VRDisplayInfoDataView;

class VRRequestPresentOptionsDataView;

class VRDisplayFrameTransportOptionsDataView;

class VRMagicWindowFrameDataDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::XRInputSourceDescriptionDataView> {
  using Data = ::device::mojom::internal::XRInputSourceDescription_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRInputSourceStateDataView> {
  using Data = ::device::mojom::internal::XRInputSourceState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRFieldOfViewDataView> {
  using Data = ::device::mojom::internal::VRFieldOfView_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRPoseDataView> {
  using Data = ::device::mojom::internal::VRPose_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRDisplayCapabilitiesDataView> {
  using Data = ::device::mojom::internal::VRDisplayCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VREyeParametersDataView> {
  using Data = ::device::mojom::internal::VREyeParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRStageParametersDataView> {
  using Data = ::device::mojom::internal::VRStageParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRDisplayInfoDataView> {
  using Data = ::device::mojom::internal::VRDisplayInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRRequestPresentOptionsDataView> {
  using Data = ::device::mojom::internal::VRRequestPresentOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRDisplayFrameTransportOptionsDataView> {
  using Data = ::device::mojom::internal::VRDisplayFrameTransportOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRMagicWindowFrameDataDataView> {
  using Data = ::device::mojom::internal::VRMagicWindowFrameData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class XRHandedness : int32_t {
  NONE = 0,
  LEFT = 1,
  RIGHT = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, XRHandedness value) {
  switch(value) {
    case XRHandedness::NONE:
      return os << "XRHandedness::NONE";
    case XRHandedness::LEFT:
      return os << "XRHandedness::LEFT";
    case XRHandedness::RIGHT:
      return os << "XRHandedness::RIGHT";
    default:
      return os << "Unknown XRHandedness value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(XRHandedness value) {
  return internal::XRHandedness_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class XRPointerOrigin : int32_t {
  HEAD = 1,
  HAND = 2,
  SCREEN = 3,
  kMinValue = 1,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, XRPointerOrigin value) {
  switch(value) {
    case XRPointerOrigin::HEAD:
      return os << "XRPointerOrigin::HEAD";
    case XRPointerOrigin::HAND:
      return os << "XRPointerOrigin::HAND";
    case XRPointerOrigin::SCREEN:
      return os << "XRPointerOrigin::SCREEN";
    default:
      return os << "Unknown XRPointerOrigin value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(XRPointerOrigin value) {
  return internal::XRPointerOrigin_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VRDisplayFrameTransportMethod : int32_t {
  NONE = 0,
  SUBMIT_AS_TEXTURE_HANDLE = 1,
  SUBMIT_AS_MAILBOX_HOLDER = 2,
  DRAW_INTO_TEXTURE_MAILBOX = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, VRDisplayFrameTransportMethod value) {
  switch(value) {
    case VRDisplayFrameTransportMethod::NONE:
      return os << "VRDisplayFrameTransportMethod::NONE";
    case VRDisplayFrameTransportMethod::SUBMIT_AS_TEXTURE_HANDLE:
      return os << "VRDisplayFrameTransportMethod::SUBMIT_AS_TEXTURE_HANDLE";
    case VRDisplayFrameTransportMethod::SUBMIT_AS_MAILBOX_HOLDER:
      return os << "VRDisplayFrameTransportMethod::SUBMIT_AS_MAILBOX_HOLDER";
    case VRDisplayFrameTransportMethod::DRAW_INTO_TEXTURE_MAILBOX:
      return os << "VRDisplayFrameTransportMethod::DRAW_INTO_TEXTURE_MAILBOX";
    default:
      return os << "Unknown VRDisplayFrameTransportMethod value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VRDisplayFrameTransportMethod value) {
  return internal::VRDisplayFrameTransportMethod_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VRDisplayEventReason : int32_t {
  NONE = 0,
  NAVIGATION = 1,
  MOUNTED = 2,
  UNMOUNTED = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, VRDisplayEventReason value) {
  switch(value) {
    case VRDisplayEventReason::NONE:
      return os << "VRDisplayEventReason::NONE";
    case VRDisplayEventReason::NAVIGATION:
      return os << "VRDisplayEventReason::NAVIGATION";
    case VRDisplayEventReason::MOUNTED:
      return os << "VRDisplayEventReason::MOUNTED";
    case VRDisplayEventReason::UNMOUNTED:
      return os << "VRDisplayEventReason::UNMOUNTED";
    default:
      return os << "Unknown VRDisplayEventReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VRDisplayEventReason value) {
  return internal::VRDisplayEventReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VRPresentationProvider_VSyncStatus : int32_t {
  SUCCESS,
  CLOSING,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, VRPresentationProvider_VSyncStatus value) {
  switch(value) {
    case VRPresentationProvider_VSyncStatus::SUCCESS:
      return os << "VRPresentationProvider_VSyncStatus::SUCCESS";
    case VRPresentationProvider_VSyncStatus::CLOSING:
      return os << "VRPresentationProvider_VSyncStatus::CLOSING";
    default:
      return os << "Unknown VRPresentationProvider_VSyncStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VRPresentationProvider_VSyncStatus value) {
  return internal::VRPresentationProvider_VSyncStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VRServiceInterfaceBase {};

using VRServicePtrDataView =
    mojo::InterfacePtrDataView<VRServiceInterfaceBase>;
using VRServiceRequestDataView =
    mojo::InterfaceRequestDataView<VRServiceInterfaceBase>;
using VRServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRServiceInterfaceBase>;
using VRServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRServiceInterfaceBase>;
class VRServiceClientInterfaceBase {};

using VRServiceClientPtrDataView =
    mojo::InterfacePtrDataView<VRServiceClientInterfaceBase>;
using VRServiceClientRequestDataView =
    mojo::InterfaceRequestDataView<VRServiceClientInterfaceBase>;
using VRServiceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRServiceClientInterfaceBase>;
using VRServiceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRServiceClientInterfaceBase>;
class VRSubmitFrameClientInterfaceBase {};

using VRSubmitFrameClientPtrDataView =
    mojo::InterfacePtrDataView<VRSubmitFrameClientInterfaceBase>;
using VRSubmitFrameClientRequestDataView =
    mojo::InterfaceRequestDataView<VRSubmitFrameClientInterfaceBase>;
using VRSubmitFrameClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRSubmitFrameClientInterfaceBase>;
using VRSubmitFrameClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRSubmitFrameClientInterfaceBase>;
class VRDisplayHostInterfaceBase {};

using VRDisplayHostPtrDataView =
    mojo::InterfacePtrDataView<VRDisplayHostInterfaceBase>;
using VRDisplayHostRequestDataView =
    mojo::InterfaceRequestDataView<VRDisplayHostInterfaceBase>;
using VRDisplayHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRDisplayHostInterfaceBase>;
using VRDisplayHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRDisplayHostInterfaceBase>;
class VRMagicWindowProviderInterfaceBase {};

using VRMagicWindowProviderPtrDataView =
    mojo::InterfacePtrDataView<VRMagicWindowProviderInterfaceBase>;
using VRMagicWindowProviderRequestDataView =
    mojo::InterfaceRequestDataView<VRMagicWindowProviderInterfaceBase>;
using VRMagicWindowProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRMagicWindowProviderInterfaceBase>;
using VRMagicWindowProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRMagicWindowProviderInterfaceBase>;
class VRPresentationProviderInterfaceBase {};

using VRPresentationProviderPtrDataView =
    mojo::InterfacePtrDataView<VRPresentationProviderInterfaceBase>;
using VRPresentationProviderRequestDataView =
    mojo::InterfaceRequestDataView<VRPresentationProviderInterfaceBase>;
using VRPresentationProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRPresentationProviderInterfaceBase>;
using VRPresentationProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRPresentationProviderInterfaceBase>;
class VRDisplayClientInterfaceBase {};

using VRDisplayClientPtrDataView =
    mojo::InterfacePtrDataView<VRDisplayClientInterfaceBase>;
using VRDisplayClientRequestDataView =
    mojo::InterfaceRequestDataView<VRDisplayClientInterfaceBase>;
using VRDisplayClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRDisplayClientInterfaceBase>;
using VRDisplayClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRDisplayClientInterfaceBase>;
class XRInputSourceDescriptionDataView {
 public:
  XRInputSourceDescriptionDataView() {}

  XRInputSourceDescriptionDataView(
      internal::XRInputSourceDescription_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerOrigin(UserType* output) const {
    auto data_value = data_->pointer_origin;
    return mojo::internal::Deserialize<::device::mojom::XRPointerOrigin>(
        data_value, output);
  }

  XRPointerOrigin pointer_origin() const {
    return static_cast<XRPointerOrigin>(data_->pointer_origin);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandedness(UserType* output) const {
    auto data_value = data_->handedness;
    return mojo::internal::Deserialize<::device::mojom::XRHandedness>(
        data_value, output);
  }

  XRHandedness handedness() const {
    return static_cast<XRHandedness>(data_->handedness);
  }
  bool emulated_position() const {
    return data_->emulated_position;
  }
  inline void GetPointerOffsetDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerOffset(UserType* output) {
    auto* pointer = data_->pointer_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRInputSourceDescription_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRInputSourceStateDataView {
 public:
  XRInputSourceStateDataView() {}

  XRInputSourceStateDataView(
      internal::XRInputSourceState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t source_id() const {
    return data_->source_id;
  }
  inline void GetDescriptionDataView(
      XRInputSourceDescriptionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<::device::mojom::XRInputSourceDescriptionDataView>(
        pointer, output, context_);
  }
  inline void GetGripDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGrip(UserType* output) {
    auto* pointer = data_->grip.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
  bool primary_input_pressed() const {
    return data_->primary_input_pressed;
  }
  bool primary_input_clicked() const {
    return data_->primary_input_clicked;
  }
 private:
  internal::XRInputSourceState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRFieldOfViewDataView {
 public:
  VRFieldOfViewDataView() {}

  VRFieldOfViewDataView(
      internal::VRFieldOfView_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float upDegrees() const {
    return data_->upDegrees;
  }
  float downDegrees() const {
    return data_->downDegrees;
  }
  float leftDegrees() const {
    return data_->leftDegrees;
  }
  float rightDegrees() const {
    return data_->rightDegrees;
  }
 private:
  internal::VRFieldOfView_Data* data_ = nullptr;
};

class VRPoseDataView {
 public:
  VRPoseDataView() {}

  VRPoseDataView(
      internal::VRPose_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOrientationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) {
    auto* pointer = data_->orientation.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetPositionDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPosition(UserType* output) {
    auto* pointer = data_->position.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetAngularVelocityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularVelocity(UserType* output) {
    auto* pointer = data_->angularVelocity.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetLinearVelocityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearVelocity(UserType* output) {
    auto* pointer = data_->linearVelocity.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetAngularAccelerationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularAcceleration(UserType* output) {
    auto* pointer = data_->angularAcceleration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetLinearAccelerationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearAcceleration(UserType* output) {
    auto* pointer = data_->linearAcceleration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetInputStateDataView(
      mojo::ArrayDataView<XRInputSourceStateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputState(UserType* output) {
    auto* pointer = data_->input_state.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRInputSourceStateDataView>>(
        pointer, output, context_);
  }
  bool pose_reset() const {
    return data_->pose_reset;
  }
 private:
  internal::VRPose_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayCapabilitiesDataView {
 public:
  VRDisplayCapabilitiesDataView() {}

  VRDisplayCapabilitiesDataView(
      internal::VRDisplayCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool hasPosition() const {
    return data_->hasPosition;
  }
  bool hasExternalDisplay() const {
    return data_->hasExternalDisplay;
  }
  bool canPresent() const {
    return data_->canPresent;
  }
  bool can_provide_pass_through_images() const {
    return data_->can_provide_pass_through_images;
  }
 private:
  internal::VRDisplayCapabilities_Data* data_ = nullptr;
};

class VREyeParametersDataView {
 public:
  VREyeParametersDataView() {}

  VREyeParametersDataView(
      internal::VREyeParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFieldOfViewDataView(
      VRFieldOfViewDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFieldOfView(UserType* output) {
    auto* pointer = data_->fieldOfView.Get();
    return mojo::internal::Deserialize<::device::mojom::VRFieldOfViewDataView>(
        pointer, output, context_);
  }
  inline void GetOffsetDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOffset(UserType* output) {
    auto* pointer = data_->offset.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  uint32_t renderWidth() const {
    return data_->renderWidth;
  }
  uint32_t renderHeight() const {
    return data_->renderHeight;
  }
 private:
  internal::VREyeParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRStageParametersDataView {
 public:
  VRStageParametersDataView() {}

  VRStageParametersDataView(
      internal::VRStageParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStandingTransformDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStandingTransform(UserType* output) {
    auto* pointer = data_->standingTransform.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  float sizeX() const {
    return data_->sizeX;
  }
  float sizeZ() const {
    return data_->sizeZ;
  }
 private:
  internal::VRStageParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayInfoDataView {
 public:
  VRDisplayInfoDataView() {}

  VRDisplayInfoDataView(
      internal::VRDisplayInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->displayName.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCapabilitiesDataView(
      VRDisplayCapabilitiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCapabilities(UserType* output) {
    auto* pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayCapabilitiesDataView>(
        pointer, output, context_);
  }
  inline void GetStageParametersDataView(
      VRStageParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStageParameters(UserType* output) {
    auto* pointer = data_->stageParameters.Get();
    return mojo::internal::Deserialize<::device::mojom::VRStageParametersDataView>(
        pointer, output, context_);
  }
  inline void GetLeftEyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLeftEye(UserType* output) {
    auto* pointer = data_->leftEye.Get();
    return mojo::internal::Deserialize<::device::mojom::VREyeParametersDataView>(
        pointer, output, context_);
  }
  inline void GetRightEyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRightEye(UserType* output) {
    auto* pointer = data_->rightEye.Get();
    return mojo::internal::Deserialize<::device::mojom::VREyeParametersDataView>(
        pointer, output, context_);
  }
  float webvr_default_framebuffer_scale() const {
    return data_->webvr_default_framebuffer_scale;
  }
  float webxr_default_framebuffer_scale() const {
    return data_->webxr_default_framebuffer_scale;
  }
 private:
  internal::VRDisplayInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRRequestPresentOptionsDataView {
 public:
  VRRequestPresentOptionsDataView() {}

  VRRequestPresentOptionsDataView(
      internal::VRRequestPresentOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool preserve_drawing_buffer() const {
    return data_->preserve_drawing_buffer;
  }
  bool webxr_input() const {
    return data_->webxr_input;
  }
  bool shared_buffer_draw_supported() const {
    return data_->shared_buffer_draw_supported;
  }
 private:
  internal::VRRequestPresentOptions_Data* data_ = nullptr;
};

class VRDisplayFrameTransportOptionsDataView {
 public:
  VRDisplayFrameTransportOptionsDataView() {}

  VRDisplayFrameTransportOptionsDataView(
      internal::VRDisplayFrameTransportOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportMethod(UserType* output) const {
    auto data_value = data_->transport_method;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayFrameTransportMethod>(
        data_value, output);
  }

  VRDisplayFrameTransportMethod transport_method() const {
    return static_cast<VRDisplayFrameTransportMethod>(data_->transport_method);
  }
  bool wait_for_transfer_notification() const {
    return data_->wait_for_transfer_notification;
  }
  bool wait_for_render_notification() const {
    return data_->wait_for_render_notification;
  }
  bool wait_for_gpu_fence() const {
    return data_->wait_for_gpu_fence;
  }
 private:
  internal::VRDisplayFrameTransportOptions_Data* data_ = nullptr;
};

class VRMagicWindowFrameDataDataView {
 public:
  VRMagicWindowFrameDataDataView() {}

  VRMagicWindowFrameDataDataView(
      internal::VRMagicWindowFrameData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPoseDataView(
      VRPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::VRPoseDataView>(
        pointer, output, context_);
  }
  inline void GetBufferHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHolder(UserType* output) {
    auto* pointer = data_->buffer_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderDataView>(
        pointer, output, context_);
  }
  inline void GetBufferSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferSize(UserType* output) {
    auto* pointer = data_->buffer_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetTimeDeltaDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeDelta(UserType* output) {
    auto* pointer = data_->time_delta.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetProjectionMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProjectionMatrix(UserType* output) {
    auto* pointer = data_->projection_matrix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
 private:
  internal::VRMagicWindowFrameData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRService_SetClient_ParamsDataView {
 public:
  VRService_SetClient_ParamsDataView() {}

  VRService_SetClient_ParamsDataView(
      internal::VRService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRServiceClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VRService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRService_SetClient_ResponseParamsDataView {
 public:
  VRService_SetClient_ResponseParamsDataView() {}

  VRService_SetClient_ResponseParamsDataView(
      internal::VRService_SetClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRService_SetClient_ResponseParams_Data* data_ = nullptr;
};

class VRService_SetListeningForActivate_ParamsDataView {
 public:
  VRService_SetListeningForActivate_ParamsDataView() {}

  VRService_SetListeningForActivate_ParamsDataView(
      internal::VRService_SetListeningForActivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool listening() const {
    return data_->listening;
  }
 private:
  internal::VRService_SetListeningForActivate_Params_Data* data_ = nullptr;
};

class VRServiceClient_OnDisplayConnected_ParamsDataView {
 public:
  VRServiceClient_OnDisplayConnected_ParamsDataView() {}

  VRServiceClient_OnDisplayConnected_ParamsDataView(
      internal::VRServiceClient_OnDisplayConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeMagicWindowProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRMagicWindowProviderPtrDataView>(
            &data_->magic_window_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDisplay() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRDisplayHostPtrDataView>(
            &data_->display, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRDisplayClientRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDisplayInfoDataView(
      VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayInfo(UserType* output) {
    auto* pointer = data_->display_info.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRServiceClient_OnDisplayConnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRSubmitFrameClient_OnSubmitFrameTransferred_ParamsDataView {
 public:
  VRSubmitFrameClient_OnSubmitFrameTransferred_ParamsDataView() {}

  VRSubmitFrameClient_OnSubmitFrameTransferred_ParamsDataView(
      internal::VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data* data_ = nullptr;
};

class VRSubmitFrameClient_OnSubmitFrameRendered_ParamsDataView {
 public:
  VRSubmitFrameClient_OnSubmitFrameRendered_ParamsDataView() {}

  VRSubmitFrameClient_OnSubmitFrameRendered_ParamsDataView(
      internal::VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data* data_ = nullptr;
};

class VRSubmitFrameClient_OnSubmitFrameGpuFence_ParamsDataView {
 public:
  VRSubmitFrameClient_OnSubmitFrameGpuFence_ParamsDataView() {}

  VRSubmitFrameClient_OnSubmitFrameGpuFence_ParamsDataView(
      internal::VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGpuFenceHandleDataView(
      ::gfx::mojom::GpuFenceHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpuFenceHandle(UserType* output) {
    auto* pointer = data_->gpu_fence_handle.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuFenceHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayHost_RequestPresent_ParamsDataView {
 public:
  VRDisplayHost_RequestPresent_ParamsDataView() {}

  VRDisplayHost_RequestPresent_ParamsDataView(
      internal::VRDisplayHost_RequestPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRSubmitFrameClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRPresentationProviderRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOptionsDataView(
      VRRequestPresentOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::VRRequestPresentOptionsDataView>(
        pointer, output, context_);
  }
  bool triggered_by_displayactive() const {
    return data_->triggered_by_displayactive;
  }
 private:
  internal::VRDisplayHost_RequestPresent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayHost_RequestPresent_ResponseParamsDataView {
 public:
  VRDisplayHost_RequestPresent_ResponseParamsDataView() {}

  VRDisplayHost_RequestPresent_ResponseParamsDataView(
      internal::VRDisplayHost_RequestPresent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetTransportOptionsDataView(
      VRDisplayFrameTransportOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportOptions(UserType* output) {
    auto* pointer = data_->transport_options.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayFrameTransportOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRDisplayHost_RequestPresent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayHost_ExitPresent_ParamsDataView {
 public:
  VRDisplayHost_ExitPresent_ParamsDataView() {}

  VRDisplayHost_ExitPresent_ParamsDataView(
      internal::VRDisplayHost_ExitPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRDisplayHost_ExitPresent_Params_Data* data_ = nullptr;
};

class VRMagicWindowProvider_GetPose_ParamsDataView {
 public:
  VRMagicWindowProvider_GetPose_ParamsDataView() {}

  VRMagicWindowProvider_GetPose_ParamsDataView(
      internal::VRMagicWindowProvider_GetPose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRMagicWindowProvider_GetPose_Params_Data* data_ = nullptr;
};

class VRMagicWindowProvider_GetPose_ResponseParamsDataView {
 public:
  VRMagicWindowProvider_GetPose_ResponseParamsDataView() {}

  VRMagicWindowProvider_GetPose_ResponseParamsDataView(
      internal::VRMagicWindowProvider_GetPose_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPoseDataView(
      VRPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::VRPoseDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRMagicWindowProvider_GetPose_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRMagicWindowProvider_GetFrameData_ParamsDataView {
 public:
  VRMagicWindowProvider_GetFrameData_ParamsDataView() {}

  VRMagicWindowProvider_GetFrameData_ParamsDataView(
      internal::VRMagicWindowProvider_GetFrameData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSize(UserType* output) {
    auto* pointer = data_->frame_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayRotation(UserType* output) const {
    auto data_value = data_->display_rotation;
    return mojo::internal::Deserialize<::display::mojom::Rotation>(
        data_value, output);
  }

  ::display::mojom::Rotation display_rotation() const {
    return static_cast<::display::mojom::Rotation>(data_->display_rotation);
  }
 private:
  internal::VRMagicWindowProvider_GetFrameData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRMagicWindowProvider_GetFrameData_ResponseParamsDataView {
 public:
  VRMagicWindowProvider_GetFrameData_ResponseParamsDataView() {}

  VRMagicWindowProvider_GetFrameData_ResponseParamsDataView(
      internal::VRMagicWindowProvider_GetFrameData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataDataView(
      VRMagicWindowFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameData(UserType* output) {
    auto* pointer = data_->frame_data.Get();
    return mojo::internal::Deserialize<::device::mojom::VRMagicWindowFrameDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRMagicWindowProvider_GetFrameData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRPresentationProvider_GetVSync_ParamsDataView {
 public:
  VRPresentationProvider_GetVSync_ParamsDataView() {}

  VRPresentationProvider_GetVSync_ParamsDataView(
      internal::VRPresentationProvider_GetVSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRPresentationProvider_GetVSync_Params_Data* data_ = nullptr;
};

class VRPresentationProvider_GetVSync_ResponseParamsDataView {
 public:
  VRPresentationProvider_GetVSync_ResponseParamsDataView() {}

  VRPresentationProvider_GetVSync_ResponseParamsDataView(
      internal::VRPresentationProvider_GetVSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPoseDataView(
      VRPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::VRPoseDataView>(
        pointer, output, context_);
  }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::VRPresentationProvider_VSyncStatus>(
        data_value, output);
  }

  VRPresentationProvider_VSyncStatus status() const {
    return static_cast<VRPresentationProvider_VSyncStatus>(data_->status);
  }
  inline void GetBufferHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHolder(UserType* output) {
    auto* pointer = data_->buffer_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRPresentationProvider_GetVSync_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRPresentationProvider_UpdateLayerBounds_ParamsDataView {
 public:
  VRPresentationProvider_UpdateLayerBounds_ParamsDataView() {}

  VRPresentationProvider_UpdateLayerBounds_ParamsDataView(
      internal::VRPresentationProvider_UpdateLayerBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetLeftBoundsDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLeftBounds(UserType* output) {
    auto* pointer = data_->left_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetRightBoundsDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRightBounds(UserType* output) {
    auto* pointer = data_->right_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetSourceSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceSize(UserType* output) {
    auto* pointer = data_->source_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRPresentationProvider_UpdateLayerBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRPresentationProvider_SubmitFrameMissing_ParamsDataView {
 public:
  VRPresentationProvider_SubmitFrameMissing_ParamsDataView() {}

  VRPresentationProvider_SubmitFrameMissing_ParamsDataView(
      internal::VRPresentationProvider_SubmitFrameMissing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRPresentationProvider_SubmitFrameMissing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRPresentationProvider_SubmitFrame_ParamsDataView {
 public:
  VRPresentationProvider_SubmitFrame_ParamsDataView() {}

  VRPresentationProvider_SubmitFrame_ParamsDataView(
      internal::VRPresentationProvider_SubmitFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetMailboxHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHolder(UserType* output) {
    auto* pointer = data_->mailbox_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderDataView>(
        pointer, output, context_);
  }
  inline void GetTimeWaitedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeWaited(UserType* output) {
    auto* pointer = data_->time_waited.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRPresentationProvider_SubmitFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView {
 public:
  VRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView() {}

  VRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView(
      internal::VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frameId() const {
    return data_->frameId;
  }
  mojo::ScopedHandle TakeTexture() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->texture, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView {
 public:
  VRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView() {}

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView(
      internal::VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frameId() const {
    return data_->frameId;
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
  inline void GetTimeWaitedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeWaited(UserType* output) {
    auto* pointer = data_->time_waited.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayClient_OnChanged_ParamsDataView {
 public:
  VRDisplayClient_OnChanged_ParamsDataView() {}

  VRDisplayClient_OnChanged_ParamsDataView(
      internal::VRDisplayClient_OnChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::VRDisplayClient_OnChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayClient_OnExitPresent_ParamsDataView {
 public:
  VRDisplayClient_OnExitPresent_ParamsDataView() {}

  VRDisplayClient_OnExitPresent_ParamsDataView(
      internal::VRDisplayClient_OnExitPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRDisplayClient_OnExitPresent_Params_Data* data_ = nullptr;
};

class VRDisplayClient_OnBlur_ParamsDataView {
 public:
  VRDisplayClient_OnBlur_ParamsDataView() {}

  VRDisplayClient_OnBlur_ParamsDataView(
      internal::VRDisplayClient_OnBlur_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRDisplayClient_OnBlur_Params_Data* data_ = nullptr;
};

class VRDisplayClient_OnFocus_ParamsDataView {
 public:
  VRDisplayClient_OnFocus_ParamsDataView() {}

  VRDisplayClient_OnFocus_ParamsDataView(
      internal::VRDisplayClient_OnFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRDisplayClient_OnFocus_Params_Data* data_ = nullptr;
};

class VRDisplayClient_OnActivate_ParamsDataView {
 public:
  VRDisplayClient_OnActivate_ParamsDataView() {}

  VRDisplayClient_OnActivate_ParamsDataView(
      internal::VRDisplayClient_OnActivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayEventReason>(
        data_value, output);
  }

  VRDisplayEventReason reason() const {
    return static_cast<VRDisplayEventReason>(data_->reason);
  }
 private:
  internal::VRDisplayClient_OnActivate_Params_Data* data_ = nullptr;
};

class VRDisplayClient_OnActivate_ResponseParamsDataView {
 public:
  VRDisplayClient_OnActivate_ResponseParamsDataView() {}

  VRDisplayClient_OnActivate_ResponseParamsDataView(
      internal::VRDisplayClient_OnActivate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool will_not_present() const {
    return data_->will_not_present;
  }
 private:
  internal::VRDisplayClient_OnActivate_ResponseParams_Data* data_ = nullptr;
};

class VRDisplayClient_OnDeactivate_ParamsDataView {
 public:
  VRDisplayClient_OnDeactivate_ParamsDataView() {}

  VRDisplayClient_OnDeactivate_ParamsDataView(
      internal::VRDisplayClient_OnDeactivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayEventReason>(
        data_value, output);
  }

  VRDisplayEventReason reason() const {
    return static_cast<VRDisplayEventReason>(data_->reason);
  }
 private:
  internal::VRDisplayClient_OnDeactivate_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::XRHandedness>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRHandedness> {};

template <>
struct hash<::device::mojom::XRPointerOrigin>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRPointerOrigin> {};

template <>
struct hash<::device::mojom::VRDisplayFrameTransportMethod>
    : public mojo::internal::EnumHashImpl<::device::mojom::VRDisplayFrameTransportMethod> {};

template <>
struct hash<::device::mojom::VRDisplayEventReason>
    : public mojo::internal::EnumHashImpl<::device::mojom::VRDisplayEventReason> {};

template <>
struct hash<::device::mojom::VRPresentationProvider_VSyncStatus>
    : public mojo::internal::EnumHashImpl<::device::mojom::VRPresentationProvider_VSyncStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::XRHandedness, ::device::mojom::XRHandedness> {
  static ::device::mojom::XRHandedness ToMojom(::device::mojom::XRHandedness input) { return input; }
  static bool FromMojom(::device::mojom::XRHandedness input, ::device::mojom::XRHandedness* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRHandedness, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRHandedness, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRHandedness>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::XRPointerOrigin, ::device::mojom::XRPointerOrigin> {
  static ::device::mojom::XRPointerOrigin ToMojom(::device::mojom::XRPointerOrigin input) { return input; }
  static bool FromMojom(::device::mojom::XRPointerOrigin input, ::device::mojom::XRPointerOrigin* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPointerOrigin, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRPointerOrigin, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRPointerOrigin>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::VRDisplayFrameTransportMethod, ::device::mojom::VRDisplayFrameTransportMethod> {
  static ::device::mojom::VRDisplayFrameTransportMethod ToMojom(::device::mojom::VRDisplayFrameTransportMethod input) { return input; }
  static bool FromMojom(::device::mojom::VRDisplayFrameTransportMethod input, ::device::mojom::VRDisplayFrameTransportMethod* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayFrameTransportMethod, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::VRDisplayFrameTransportMethod, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::VRDisplayFrameTransportMethod>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::VRDisplayEventReason, ::device::mojom::VRDisplayEventReason> {
  static ::device::mojom::VRDisplayEventReason ToMojom(::device::mojom::VRDisplayEventReason input) { return input; }
  static bool FromMojom(::device::mojom::VRDisplayEventReason input, ::device::mojom::VRDisplayEventReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayEventReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::VRDisplayEventReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::VRDisplayEventReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::VRPresentationProvider_VSyncStatus, ::device::mojom::VRPresentationProvider_VSyncStatus> {
  static ::device::mojom::VRPresentationProvider_VSyncStatus ToMojom(::device::mojom::VRPresentationProvider_VSyncStatus input) { return input; }
  static bool FromMojom(::device::mojom::VRPresentationProvider_VSyncStatus input, ::device::mojom::VRPresentationProvider_VSyncStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRPresentationProvider_VSyncStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::VRPresentationProvider_VSyncStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::VRPresentationProvider_VSyncStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRInputSourceDescriptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRInputSourceDescriptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRInputSourceDescription_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::XRPointerOrigin>(
        CallWithContext(Traits::pointer_origin, input, custom_context), &(*output)->pointer_origin);
    mojo::internal::Serialize<::device::mojom::XRHandedness>(
        CallWithContext(Traits::handedness, input, custom_context), &(*output)->handedness);
    (*output)->emulated_position = CallWithContext(Traits::emulated_position, input, custom_context);
    decltype(CallWithContext(Traits::pointer_offset, input, custom_context)) in_pointer_offset = CallWithContext(Traits::pointer_offset, input, custom_context);
    typename decltype((*output)->pointer_offset)::BaseType::BufferWriter
        pointer_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_pointer_offset, buffer, &pointer_offset_writer, context);
    (*output)->pointer_offset.Set(
        pointer_offset_writer.is_null() ? nullptr : pointer_offset_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::XRInputSourceDescription_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRInputSourceDescriptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRInputSourceStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRInputSourceStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRInputSourceState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->source_id = CallWithContext(Traits::source_id, input, custom_context);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<::device::mojom::XRInputSourceDescriptionDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    decltype(CallWithContext(Traits::grip, input, custom_context)) in_grip = CallWithContext(Traits::grip, input, custom_context);
    typename decltype((*output)->grip)::BaseType::BufferWriter
        grip_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_grip, buffer, &grip_writer, context);
    (*output)->grip.Set(
        grip_writer.is_null() ? nullptr : grip_writer.data());
    (*output)->primary_input_pressed = CallWithContext(Traits::primary_input_pressed, input, custom_context);
    (*output)->primary_input_clicked = CallWithContext(Traits::primary_input_clicked, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::XRInputSourceState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRInputSourceStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRFieldOfViewDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRFieldOfViewDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRFieldOfView_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->upDegrees = CallWithContext(Traits::upDegrees, input, custom_context);
    (*output)->downDegrees = CallWithContext(Traits::downDegrees, input, custom_context);
    (*output)->leftDegrees = CallWithContext(Traits::leftDegrees, input, custom_context);
    (*output)->rightDegrees = CallWithContext(Traits::rightDegrees, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRFieldOfView_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRFieldOfViewDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRPoseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRPoseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRPose_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::orientation, input, custom_context)) in_orientation = CallWithContext(Traits::orientation, input, custom_context);
    typename decltype((*output)->orientation)::BaseType::BufferWriter
        orientation_writer;
    const mojo::internal::ContainerValidateParams orientation_validate_params(
        4, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_orientation, buffer, &orientation_writer, &orientation_validate_params,
        context);
    (*output)->orientation.Set(
        orientation_writer.is_null() ? nullptr : orientation_writer.data());
    decltype(CallWithContext(Traits::position, input, custom_context)) in_position = CallWithContext(Traits::position, input, custom_context);
    typename decltype((*output)->position)::BaseType::BufferWriter
        position_writer;
    const mojo::internal::ContainerValidateParams position_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_position, buffer, &position_writer, &position_validate_params,
        context);
    (*output)->position.Set(
        position_writer.is_null() ? nullptr : position_writer.data());
    decltype(CallWithContext(Traits::angularVelocity, input, custom_context)) in_angularVelocity = CallWithContext(Traits::angularVelocity, input, custom_context);
    typename decltype((*output)->angularVelocity)::BaseType::BufferWriter
        angularVelocity_writer;
    const mojo::internal::ContainerValidateParams angularVelocity_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_angularVelocity, buffer, &angularVelocity_writer, &angularVelocity_validate_params,
        context);
    (*output)->angularVelocity.Set(
        angularVelocity_writer.is_null() ? nullptr : angularVelocity_writer.data());
    decltype(CallWithContext(Traits::linearVelocity, input, custom_context)) in_linearVelocity = CallWithContext(Traits::linearVelocity, input, custom_context);
    typename decltype((*output)->linearVelocity)::BaseType::BufferWriter
        linearVelocity_writer;
    const mojo::internal::ContainerValidateParams linearVelocity_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_linearVelocity, buffer, &linearVelocity_writer, &linearVelocity_validate_params,
        context);
    (*output)->linearVelocity.Set(
        linearVelocity_writer.is_null() ? nullptr : linearVelocity_writer.data());
    decltype(CallWithContext(Traits::angularAcceleration, input, custom_context)) in_angularAcceleration = CallWithContext(Traits::angularAcceleration, input, custom_context);
    typename decltype((*output)->angularAcceleration)::BaseType::BufferWriter
        angularAcceleration_writer;
    const mojo::internal::ContainerValidateParams angularAcceleration_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_angularAcceleration, buffer, &angularAcceleration_writer, &angularAcceleration_validate_params,
        context);
    (*output)->angularAcceleration.Set(
        angularAcceleration_writer.is_null() ? nullptr : angularAcceleration_writer.data());
    decltype(CallWithContext(Traits::linearAcceleration, input, custom_context)) in_linearAcceleration = CallWithContext(Traits::linearAcceleration, input, custom_context);
    typename decltype((*output)->linearAcceleration)::BaseType::BufferWriter
        linearAcceleration_writer;
    const mojo::internal::ContainerValidateParams linearAcceleration_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_linearAcceleration, buffer, &linearAcceleration_writer, &linearAcceleration_validate_params,
        context);
    (*output)->linearAcceleration.Set(
        linearAcceleration_writer.is_null() ? nullptr : linearAcceleration_writer.data());
    decltype(CallWithContext(Traits::input_state, input, custom_context)) in_input_state = CallWithContext(Traits::input_state, input, custom_context);
    typename decltype((*output)->input_state)::BaseType::BufferWriter
        input_state_writer;
    const mojo::internal::ContainerValidateParams input_state_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRInputSourceStateDataView>>(
        in_input_state, buffer, &input_state_writer, &input_state_validate_params,
        context);
    (*output)->input_state.Set(
        input_state_writer.is_null() ? nullptr : input_state_writer.data());
    (*output)->pose_reset = CallWithContext(Traits::pose_reset, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRPose_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRPoseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRDisplayCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRDisplayCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->hasPosition = CallWithContext(Traits::hasPosition, input, custom_context);
    (*output)->hasExternalDisplay = CallWithContext(Traits::hasExternalDisplay, input, custom_context);
    (*output)->canPresent = CallWithContext(Traits::canPresent, input, custom_context);
    (*output)->can_provide_pass_through_images = CallWithContext(Traits::can_provide_pass_through_images, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRDisplayCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRDisplayCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VREyeParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VREyeParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VREyeParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::fieldOfView, input, custom_context)) in_fieldOfView = CallWithContext(Traits::fieldOfView, input, custom_context);
    typename decltype((*output)->fieldOfView)::BaseType::BufferWriter
        fieldOfView_writer;
    mojo::internal::Serialize<::device::mojom::VRFieldOfViewDataView>(
        in_fieldOfView, buffer, &fieldOfView_writer, context);
    (*output)->fieldOfView.Set(
        fieldOfView_writer.is_null() ? nullptr : fieldOfView_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fieldOfView.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fieldOfView in VREyeParameters struct");
    decltype(CallWithContext(Traits::offset, input, custom_context)) in_offset = CallWithContext(Traits::offset, input, custom_context);
    typename decltype((*output)->offset)::BaseType::BufferWriter
        offset_writer;
    const mojo::internal::ContainerValidateParams offset_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_offset, buffer, &offset_writer, &offset_validate_params,
        context);
    (*output)->offset.Set(
        offset_writer.is_null() ? nullptr : offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null offset in VREyeParameters struct");
    (*output)->renderWidth = CallWithContext(Traits::renderWidth, input, custom_context);
    (*output)->renderHeight = CallWithContext(Traits::renderHeight, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VREyeParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VREyeParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRStageParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRStageParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRStageParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::standingTransform, input, custom_context)) in_standingTransform = CallWithContext(Traits::standingTransform, input, custom_context);
    typename decltype((*output)->standingTransform)::BaseType::BufferWriter
        standingTransform_writer;
    const mojo::internal::ContainerValidateParams standingTransform_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_standingTransform, buffer, &standingTransform_writer, &standingTransform_validate_params,
        context);
    (*output)->standingTransform.Set(
        standingTransform_writer.is_null() ? nullptr : standingTransform_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->standingTransform.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null standingTransform in VRStageParameters struct");
    (*output)->sizeX = CallWithContext(Traits::sizeX, input, custom_context);
    (*output)->sizeZ = CallWithContext(Traits::sizeZ, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRStageParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRStageParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRDisplayInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRDisplayInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->index = CallWithContext(Traits::index, input, custom_context);
    decltype(CallWithContext(Traits::displayName, input, custom_context)) in_displayName = CallWithContext(Traits::displayName, input, custom_context);
    typename decltype((*output)->displayName)::BaseType::BufferWriter
        displayName_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_displayName, buffer, &displayName_writer, context);
    (*output)->displayName.Set(
        displayName_writer.is_null() ? nullptr : displayName_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->displayName.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null displayName in VRDisplayInfo struct");
    decltype(CallWithContext(Traits::capabilities, input, custom_context)) in_capabilities = CallWithContext(Traits::capabilities, input, custom_context);
    typename decltype((*output)->capabilities)::BaseType::BufferWriter
        capabilities_writer;
    mojo::internal::Serialize<::device::mojom::VRDisplayCapabilitiesDataView>(
        in_capabilities, buffer, &capabilities_writer, context);
    (*output)->capabilities.Set(
        capabilities_writer.is_null() ? nullptr : capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null capabilities in VRDisplayInfo struct");
    decltype(CallWithContext(Traits::stageParameters, input, custom_context)) in_stageParameters = CallWithContext(Traits::stageParameters, input, custom_context);
    typename decltype((*output)->stageParameters)::BaseType::BufferWriter
        stageParameters_writer;
    mojo::internal::Serialize<::device::mojom::VRStageParametersDataView>(
        in_stageParameters, buffer, &stageParameters_writer, context);
    (*output)->stageParameters.Set(
        stageParameters_writer.is_null() ? nullptr : stageParameters_writer.data());
    decltype(CallWithContext(Traits::leftEye, input, custom_context)) in_leftEye = CallWithContext(Traits::leftEye, input, custom_context);
    typename decltype((*output)->leftEye)::BaseType::BufferWriter
        leftEye_writer;
    mojo::internal::Serialize<::device::mojom::VREyeParametersDataView>(
        in_leftEye, buffer, &leftEye_writer, context);
    (*output)->leftEye.Set(
        leftEye_writer.is_null() ? nullptr : leftEye_writer.data());
    decltype(CallWithContext(Traits::rightEye, input, custom_context)) in_rightEye = CallWithContext(Traits::rightEye, input, custom_context);
    typename decltype((*output)->rightEye)::BaseType::BufferWriter
        rightEye_writer;
    mojo::internal::Serialize<::device::mojom::VREyeParametersDataView>(
        in_rightEye, buffer, &rightEye_writer, context);
    (*output)->rightEye.Set(
        rightEye_writer.is_null() ? nullptr : rightEye_writer.data());
    (*output)->webvr_default_framebuffer_scale = CallWithContext(Traits::webvr_default_framebuffer_scale, input, custom_context);
    (*output)->webxr_default_framebuffer_scale = CallWithContext(Traits::webxr_default_framebuffer_scale, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRDisplayInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRDisplayInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRRequestPresentOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRRequestPresentOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRRequestPresentOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->preserve_drawing_buffer = CallWithContext(Traits::preserve_drawing_buffer, input, custom_context);
    (*output)->webxr_input = CallWithContext(Traits::webxr_input, input, custom_context);
    (*output)->shared_buffer_draw_supported = CallWithContext(Traits::shared_buffer_draw_supported, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRRequestPresentOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRRequestPresentOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayFrameTransportOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRDisplayFrameTransportOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRDisplayFrameTransportOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::VRDisplayFrameTransportMethod>(
        CallWithContext(Traits::transport_method, input, custom_context), &(*output)->transport_method);
    (*output)->wait_for_transfer_notification = CallWithContext(Traits::wait_for_transfer_notification, input, custom_context);
    (*output)->wait_for_render_notification = CallWithContext(Traits::wait_for_render_notification, input, custom_context);
    (*output)->wait_for_gpu_fence = CallWithContext(Traits::wait_for_gpu_fence, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRDisplayFrameTransportOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRDisplayFrameTransportOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRMagicWindowFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRMagicWindowFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRMagicWindowFrameData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::pose, input, custom_context)) in_pose = CallWithContext(Traits::pose, input, custom_context);
    typename decltype((*output)->pose)::BaseType::BufferWriter
        pose_writer;
    mojo::internal::Serialize<::device::mojom::VRPoseDataView>(
        in_pose, buffer, &pose_writer, context);
    (*output)->pose.Set(
        pose_writer.is_null() ? nullptr : pose_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pose.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pose in VRMagicWindowFrameData struct");
    decltype(CallWithContext(Traits::buffer_holder, input, custom_context)) in_buffer_holder = CallWithContext(Traits::buffer_holder, input, custom_context);
    typename decltype((*output)->buffer_holder)::BaseType::BufferWriter
        buffer_holder_writer;
    mojo::internal::Serialize<::gpu::mojom::MailboxHolderDataView>(
        in_buffer_holder, buffer, &buffer_holder_writer, context);
    (*output)->buffer_holder.Set(
        buffer_holder_writer.is_null() ? nullptr : buffer_holder_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buffer_holder.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buffer_holder in VRMagicWindowFrameData struct");
    decltype(CallWithContext(Traits::buffer_size, input, custom_context)) in_buffer_size = CallWithContext(Traits::buffer_size, input, custom_context);
    typename decltype((*output)->buffer_size)::BaseType::BufferWriter
        buffer_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_buffer_size, buffer, &buffer_size_writer, context);
    (*output)->buffer_size.Set(
        buffer_size_writer.is_null() ? nullptr : buffer_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buffer_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buffer_size in VRMagicWindowFrameData struct");
    decltype(CallWithContext(Traits::time_delta, input, custom_context)) in_time_delta = CallWithContext(Traits::time_delta, input, custom_context);
    typename decltype((*output)->time_delta)::BaseType::BufferWriter
        time_delta_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_time_delta, buffer, &time_delta_writer, context);
    (*output)->time_delta.Set(
        time_delta_writer.is_null() ? nullptr : time_delta_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time_delta.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time_delta in VRMagicWindowFrameData struct");
    decltype(CallWithContext(Traits::projection_matrix, input, custom_context)) in_projection_matrix = CallWithContext(Traits::projection_matrix, input, custom_context);
    typename decltype((*output)->projection_matrix)::BaseType::BufferWriter
        projection_matrix_writer;
    const mojo::internal::ContainerValidateParams projection_matrix_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_projection_matrix, buffer, &projection_matrix_writer, &projection_matrix_validate_params,
        context);
    (*output)->projection_matrix.Set(
        projection_matrix_writer.is_null() ? nullptr : projection_matrix_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->projection_matrix.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null projection_matrix in VRMagicWindowFrameData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::VRMagicWindowFrameData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRMagicWindowFrameDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void XRInputSourceDescriptionDataView::GetPointerOffsetDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->pointer_offset.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}


inline void XRInputSourceStateDataView::GetDescriptionDataView(
    XRInputSourceDescriptionDataView* output) {
  auto pointer = data_->description.Get();
  *output = XRInputSourceDescriptionDataView(pointer, context_);
}
inline void XRInputSourceStateDataView::GetGripDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->grip.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}




inline void VRPoseDataView::GetOrientationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->orientation.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetPositionDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->position.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetAngularVelocityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->angularVelocity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetLinearVelocityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->linearVelocity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetAngularAccelerationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->angularAcceleration.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetLinearAccelerationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->linearAcceleration.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetInputStateDataView(
    mojo::ArrayDataView<XRInputSourceStateDataView>* output) {
  auto pointer = data_->input_state.Get();
  *output = mojo::ArrayDataView<XRInputSourceStateDataView>(pointer, context_);
}




inline void VREyeParametersDataView::GetFieldOfViewDataView(
    VRFieldOfViewDataView* output) {
  auto pointer = data_->fieldOfView.Get();
  *output = VRFieldOfViewDataView(pointer, context_);
}
inline void VREyeParametersDataView::GetOffsetDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->offset.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}


inline void VRStageParametersDataView::GetStandingTransformDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->standingTransform.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}


inline void VRDisplayInfoDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->displayName.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetCapabilitiesDataView(
    VRDisplayCapabilitiesDataView* output) {
  auto pointer = data_->capabilities.Get();
  *output = VRDisplayCapabilitiesDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetStageParametersDataView(
    VRStageParametersDataView* output) {
  auto pointer = data_->stageParameters.Get();
  *output = VRStageParametersDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetLeftEyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->leftEye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetRightEyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->rightEye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}






inline void VRMagicWindowFrameDataDataView::GetPoseDataView(
    VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = VRPoseDataView(pointer, context_);
}
inline void VRMagicWindowFrameDataDataView::GetBufferHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->buffer_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}
inline void VRMagicWindowFrameDataDataView::GetBufferSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->buffer_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VRMagicWindowFrameDataDataView::GetTimeDeltaDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_delta.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void VRMagicWindowFrameDataDataView::GetProjectionMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->projection_matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}








inline void VRServiceClient_OnDisplayConnected_ParamsDataView::GetDisplayInfoDataView(
    VRDisplayInfoDataView* output) {
  auto pointer = data_->display_info.Get();
  *output = VRDisplayInfoDataView(pointer, context_);
}






inline void VRSubmitFrameClient_OnSubmitFrameGpuFence_ParamsDataView::GetGpuFenceHandleDataView(
    ::gfx::mojom::GpuFenceHandleDataView* output) {
  auto pointer = data_->gpu_fence_handle.Get();
  *output = ::gfx::mojom::GpuFenceHandleDataView(pointer, context_);
}


inline void VRDisplayHost_RequestPresent_ParamsDataView::GetOptionsDataView(
    VRRequestPresentOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = VRRequestPresentOptionsDataView(pointer, context_);
}


inline void VRDisplayHost_RequestPresent_ResponseParamsDataView::GetTransportOptionsDataView(
    VRDisplayFrameTransportOptionsDataView* output) {
  auto pointer = data_->transport_options.Get();
  *output = VRDisplayFrameTransportOptionsDataView(pointer, context_);
}






inline void VRMagicWindowProvider_GetPose_ResponseParamsDataView::GetPoseDataView(
    VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = VRPoseDataView(pointer, context_);
}


inline void VRMagicWindowProvider_GetFrameData_ParamsDataView::GetFrameSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->frame_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VRMagicWindowProvider_GetFrameData_ResponseParamsDataView::GetFrameDataDataView(
    VRMagicWindowFrameDataDataView* output) {
  auto pointer = data_->frame_data.Get();
  *output = VRMagicWindowFrameDataDataView(pointer, context_);
}




inline void VRPresentationProvider_GetVSync_ResponseParamsDataView::GetPoseDataView(
    VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = VRPoseDataView(pointer, context_);
}
inline void VRPresentationProvider_GetVSync_ResponseParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void VRPresentationProvider_GetVSync_ResponseParamsDataView::GetBufferHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->buffer_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}


inline void VRPresentationProvider_UpdateLayerBounds_ParamsDataView::GetLeftBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->left_bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void VRPresentationProvider_UpdateLayerBounds_ParamsDataView::GetRightBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->right_bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void VRPresentationProvider_UpdateLayerBounds_ParamsDataView::GetSourceSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->source_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VRPresentationProvider_SubmitFrameMissing_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}


inline void VRPresentationProvider_SubmitFrame_ParamsDataView::GetMailboxHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}
inline void VRPresentationProvider_SubmitFrame_ParamsDataView::GetTimeWaitedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_waited.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void VRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}
inline void VRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView::GetTimeWaitedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_waited.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void VRDisplayClient_OnChanged_ParamsDataView::GetDisplayDataView(
    VRDisplayInfoDataView* output) {
  auto pointer = data_->display.Get();
  *output = VRDisplayInfoDataView(pointer, context_);
}















}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_H_
