// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "ui/display/mojo/display.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace device {
namespace mojom {
namespace internal {
class XRInputSourceDescription_Data;
class XRInputSourceState_Data;
class VRFieldOfView_Data;
class VRPose_Data;
class VRDisplayCapabilities_Data;
class VREyeParameters_Data;
class VRStageParameters_Data;
class VRDisplayInfo_Data;
class VRRequestPresentOptions_Data;
class VRDisplayFrameTransportOptions_Data;
class VRMagicWindowFrameData_Data;

struct XRHandedness_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct XRPointerOrigin_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VRDisplayFrameTransportMethod_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VRDisplayEventReason_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VRPresentationProvider_VSyncStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRInputSourceDescription_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRInputSourceDescription_Data));
      new (data()) XRInputSourceDescription_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRInputSourceDescription_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRInputSourceDescription_Data>(index_);
    }
    XRInputSourceDescription_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pointer_origin;
  int32_t handedness;
  uint8_t emulated_position : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> pointer_offset;

 private:
  XRInputSourceDescription_Data();
  ~XRInputSourceDescription_Data() = delete;
};
static_assert(sizeof(XRInputSourceDescription_Data) == 32,
              "Bad sizeof(XRInputSourceDescription_Data)");
// Used by XRInputSourceDescription::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRInputSourceDescription_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRInputSourceDescription_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRInputSourceDescription_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRInputSourceDescription_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRInputSourceDescription_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRInputSourceState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRInputSourceState_Data));
      new (data()) XRInputSourceState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRInputSourceState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRInputSourceState_Data>(index_);
    }
    XRInputSourceState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t source_id;
  uint8_t primary_input_pressed : 1;
  uint8_t primary_input_clicked : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<internal::XRInputSourceDescription_Data> description;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> grip;

 private:
  XRInputSourceState_Data();
  ~XRInputSourceState_Data() = delete;
};
static_assert(sizeof(XRInputSourceState_Data) == 32,
              "Bad sizeof(XRInputSourceState_Data)");
// Used by XRInputSourceState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRInputSourceState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRInputSourceState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRInputSourceState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRInputSourceState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRInputSourceState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRFieldOfView_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRFieldOfView_Data));
      new (data()) VRFieldOfView_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRFieldOfView_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRFieldOfView_Data>(index_);
    }
    VRFieldOfView_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;

 private:
  VRFieldOfView_Data();
  ~VRFieldOfView_Data() = delete;
};
static_assert(sizeof(VRFieldOfView_Data) == 24,
              "Bad sizeof(VRFieldOfView_Data)");
// Used by VRFieldOfView::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRFieldOfView_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRFieldOfView_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRFieldOfView_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRFieldOfView_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRFieldOfView_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPose_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPose_Data));
      new (data()) VRPose_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPose_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPose_Data>(index_);
    }
    VRPose_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> orientation;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> position;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> angularVelocity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> linearVelocity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> angularAcceleration;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> linearAcceleration;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRInputSourceState_Data>>> input_state;
  uint8_t pose_reset : 1;
  uint8_t padfinal_[7];

 private:
  VRPose_Data();
  ~VRPose_Data() = delete;
};
static_assert(sizeof(VRPose_Data) == 72,
              "Bad sizeof(VRPose_Data)");
// Used by VRPose::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRPose_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRPose_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRPose_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRPose_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRPose_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayCapabilities_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayCapabilities_Data));
      new (data()) VRDisplayCapabilities_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayCapabilities_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayCapabilities_Data>(index_);
    }
    VRDisplayCapabilities_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t hasPosition : 1;
  uint8_t hasExternalDisplay : 1;
  uint8_t canPresent : 1;
  uint8_t can_provide_pass_through_images : 1;
  uint8_t padfinal_[7];

 private:
  VRDisplayCapabilities_Data();
  ~VRDisplayCapabilities_Data() = delete;
};
static_assert(sizeof(VRDisplayCapabilities_Data) == 16,
              "Bad sizeof(VRDisplayCapabilities_Data)");
// Used by VRDisplayCapabilities::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRDisplayCapabilities_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRDisplayCapabilities_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRDisplayCapabilities_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRDisplayCapabilities_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRDisplayCapabilities_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VREyeParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VREyeParameters_Data));
      new (data()) VREyeParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VREyeParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VREyeParameters_Data>(index_);
    }
    VREyeParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRFieldOfView_Data> fieldOfView;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> offset;
  uint32_t renderWidth;
  uint32_t renderHeight;

 private:
  VREyeParameters_Data();
  ~VREyeParameters_Data() = delete;
};
static_assert(sizeof(VREyeParameters_Data) == 32,
              "Bad sizeof(VREyeParameters_Data)");
// Used by VREyeParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VREyeParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VREyeParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VREyeParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VREyeParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VREyeParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRStageParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRStageParameters_Data));
      new (data()) VRStageParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRStageParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRStageParameters_Data>(index_);
    }
    VRStageParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> standingTransform;
  float sizeX;
  float sizeZ;

 private:
  VRStageParameters_Data();
  ~VRStageParameters_Data() = delete;
};
static_assert(sizeof(VRStageParameters_Data) == 24,
              "Bad sizeof(VRStageParameters_Data)");
// Used by VRStageParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRStageParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRStageParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRStageParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRStageParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRStageParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayInfo_Data));
      new (data()) VRDisplayInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayInfo_Data>(index_);
    }
    VRDisplayInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  float webvr_default_framebuffer_scale;
  mojo::internal::Pointer<mojo::internal::String_Data> displayName;
  mojo::internal::Pointer<internal::VRDisplayCapabilities_Data> capabilities;
  mojo::internal::Pointer<internal::VRStageParameters_Data> stageParameters;
  mojo::internal::Pointer<internal::VREyeParameters_Data> leftEye;
  mojo::internal::Pointer<internal::VREyeParameters_Data> rightEye;
  float webxr_default_framebuffer_scale;
  uint8_t padfinal_[4];

 private:
  VRDisplayInfo_Data();
  ~VRDisplayInfo_Data() = delete;
};
static_assert(sizeof(VRDisplayInfo_Data) == 64,
              "Bad sizeof(VRDisplayInfo_Data)");
// Used by VRDisplayInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRDisplayInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRDisplayInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRDisplayInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRDisplayInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRDisplayInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRRequestPresentOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRRequestPresentOptions_Data));
      new (data()) VRRequestPresentOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRRequestPresentOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRRequestPresentOptions_Data>(index_);
    }
    VRRequestPresentOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t preserve_drawing_buffer : 1;
  uint8_t webxr_input : 1;
  uint8_t shared_buffer_draw_supported : 1;
  uint8_t padfinal_[7];

 private:
  VRRequestPresentOptions_Data();
  ~VRRequestPresentOptions_Data() = delete;
};
static_assert(sizeof(VRRequestPresentOptions_Data) == 16,
              "Bad sizeof(VRRequestPresentOptions_Data)");
// Used by VRRequestPresentOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRRequestPresentOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRRequestPresentOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRRequestPresentOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRRequestPresentOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRRequestPresentOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayFrameTransportOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayFrameTransportOptions_Data));
      new (data()) VRDisplayFrameTransportOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayFrameTransportOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayFrameTransportOptions_Data>(index_);
    }
    VRDisplayFrameTransportOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t transport_method;
  uint8_t wait_for_transfer_notification : 1;
  uint8_t wait_for_render_notification : 1;
  uint8_t wait_for_gpu_fence : 1;
  uint8_t padfinal_[3];

 private:
  VRDisplayFrameTransportOptions_Data();
  ~VRDisplayFrameTransportOptions_Data() = delete;
};
static_assert(sizeof(VRDisplayFrameTransportOptions_Data) == 16,
              "Bad sizeof(VRDisplayFrameTransportOptions_Data)");
// Used by VRDisplayFrameTransportOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRDisplayFrameTransportOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRDisplayFrameTransportOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRDisplayFrameTransportOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRDisplayFrameTransportOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRDisplayFrameTransportOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRMagicWindowFrameData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRMagicWindowFrameData_Data));
      new (data()) VRMagicWindowFrameData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRMagicWindowFrameData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRMagicWindowFrameData_Data>(index_);
    }
    VRMagicWindowFrameData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRPose_Data> pose;
  mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data> buffer_holder;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> buffer_size;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_delta;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> projection_matrix;

 private:
  VRMagicWindowFrameData_Data();
  ~VRMagicWindowFrameData_Data() = delete;
};
static_assert(sizeof(VRMagicWindowFrameData_Data) == 48,
              "Bad sizeof(VRMagicWindowFrameData_Data)");
// Used by VRMagicWindowFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRMagicWindowFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRMagicWindowFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRMagicWindowFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRMagicWindowFrameData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRMagicWindowFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_SetClient_Params_Data));
      new (data()) VRService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_SetClient_Params_Data>(index_);
    }
    VRService_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  VRService_SetClient_Params_Data();
  ~VRService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(VRService_SetClient_Params_Data) == 16,
              "Bad sizeof(VRService_SetClient_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_SetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_SetClient_ResponseParams_Data));
      new (data()) VRService_SetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_SetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_SetClient_ResponseParams_Data>(index_);
    }
    VRService_SetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRService_SetClient_ResponseParams_Data();
  ~VRService_SetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRService_SetClient_ResponseParams_Data) == 8,
              "Bad sizeof(VRService_SetClient_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_SetListeningForActivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_SetListeningForActivate_Params_Data));
      new (data()) VRService_SetListeningForActivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_SetListeningForActivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_SetListeningForActivate_Params_Data>(index_);
    }
    VRService_SetListeningForActivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t listening : 1;
  uint8_t padfinal_[7];

 private:
  VRService_SetListeningForActivate_Params_Data();
  ~VRService_SetListeningForActivate_Params_Data() = delete;
};
static_assert(sizeof(VRService_SetListeningForActivate_Params_Data) == 16,
              "Bad sizeof(VRService_SetListeningForActivate_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRServiceClient_OnDisplayConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRServiceClient_OnDisplayConnected_Params_Data));
      new (data()) VRServiceClient_OnDisplayConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRServiceClient_OnDisplayConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRServiceClient_OnDisplayConnected_Params_Data>(index_);
    }
    VRServiceClient_OnDisplayConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data magic_window_provider;
  mojo::internal::Interface_Data display;
  mojo::internal::Handle_Data request;
  uint8_t pad2_[4];
  mojo::internal::Pointer<internal::VRDisplayInfo_Data> display_info;

 private:
  VRServiceClient_OnDisplayConnected_Params_Data();
  ~VRServiceClient_OnDisplayConnected_Params_Data() = delete;
};
static_assert(sizeof(VRServiceClient_OnDisplayConnected_Params_Data) == 40,
              "Bad sizeof(VRServiceClient_OnDisplayConnected_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data));
      new (data()) VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data>(index_);
    }
    VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data();
  ~VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data() = delete;
};
static_assert(sizeof(VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data) == 16,
              "Bad sizeof(VRSubmitFrameClient_OnSubmitFrameTransferred_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data));
      new (data()) VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data>(index_);
    }
    VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data();
  ~VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data() = delete;
};
static_assert(sizeof(VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data) == 8,
              "Bad sizeof(VRSubmitFrameClient_OnSubmitFrameRendered_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data));
      new (data()) VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data>(index_);
    }
    VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuFenceHandle_Data> gpu_fence_handle;

 private:
  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data();
  ~VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data() = delete;
};
static_assert(sizeof(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data) == 16,
              "Bad sizeof(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayHost_RequestPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayHost_RequestPresent_Params_Data));
      new (data()) VRDisplayHost_RequestPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayHost_RequestPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayHost_RequestPresent_Params_Data>(index_);
    }
    VRDisplayHost_RequestPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data request;
  uint8_t triggered_by_displayactive : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<internal::VRRequestPresentOptions_Data> options;

 private:
  VRDisplayHost_RequestPresent_Params_Data();
  ~VRDisplayHost_RequestPresent_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayHost_RequestPresent_Params_Data) == 32,
              "Bad sizeof(VRDisplayHost_RequestPresent_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayHost_RequestPresent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayHost_RequestPresent_ResponseParams_Data));
      new (data()) VRDisplayHost_RequestPresent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayHost_RequestPresent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayHost_RequestPresent_ResponseParams_Data>(index_);
    }
    VRDisplayHost_RequestPresent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::VRDisplayFrameTransportOptions_Data> transport_options;

 private:
  VRDisplayHost_RequestPresent_ResponseParams_Data();
  ~VRDisplayHost_RequestPresent_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRDisplayHost_RequestPresent_ResponseParams_Data) == 24,
              "Bad sizeof(VRDisplayHost_RequestPresent_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayHost_ExitPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayHost_ExitPresent_Params_Data));
      new (data()) VRDisplayHost_ExitPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayHost_ExitPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayHost_ExitPresent_Params_Data>(index_);
    }
    VRDisplayHost_ExitPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRDisplayHost_ExitPresent_Params_Data();
  ~VRDisplayHost_ExitPresent_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayHost_ExitPresent_Params_Data) == 8,
              "Bad sizeof(VRDisplayHost_ExitPresent_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRMagicWindowProvider_GetPose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRMagicWindowProvider_GetPose_Params_Data));
      new (data()) VRMagicWindowProvider_GetPose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRMagicWindowProvider_GetPose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRMagicWindowProvider_GetPose_Params_Data>(index_);
    }
    VRMagicWindowProvider_GetPose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRMagicWindowProvider_GetPose_Params_Data();
  ~VRMagicWindowProvider_GetPose_Params_Data() = delete;
};
static_assert(sizeof(VRMagicWindowProvider_GetPose_Params_Data) == 8,
              "Bad sizeof(VRMagicWindowProvider_GetPose_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRMagicWindowProvider_GetPose_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRMagicWindowProvider_GetPose_ResponseParams_Data));
      new (data()) VRMagicWindowProvider_GetPose_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRMagicWindowProvider_GetPose_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRMagicWindowProvider_GetPose_ResponseParams_Data>(index_);
    }
    VRMagicWindowProvider_GetPose_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRPose_Data> pose;

 private:
  VRMagicWindowProvider_GetPose_ResponseParams_Data();
  ~VRMagicWindowProvider_GetPose_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRMagicWindowProvider_GetPose_ResponseParams_Data) == 16,
              "Bad sizeof(VRMagicWindowProvider_GetPose_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRMagicWindowProvider_GetFrameData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRMagicWindowProvider_GetFrameData_Params_Data));
      new (data()) VRMagicWindowProvider_GetFrameData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRMagicWindowProvider_GetFrameData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRMagicWindowProvider_GetFrameData_Params_Data>(index_);
    }
    VRMagicWindowProvider_GetFrameData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> frame_size;
  int32_t display_rotation;
  uint8_t padfinal_[4];

 private:
  VRMagicWindowProvider_GetFrameData_Params_Data();
  ~VRMagicWindowProvider_GetFrameData_Params_Data() = delete;
};
static_assert(sizeof(VRMagicWindowProvider_GetFrameData_Params_Data) == 24,
              "Bad sizeof(VRMagicWindowProvider_GetFrameData_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRMagicWindowProvider_GetFrameData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRMagicWindowProvider_GetFrameData_ResponseParams_Data));
      new (data()) VRMagicWindowProvider_GetFrameData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRMagicWindowProvider_GetFrameData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRMagicWindowProvider_GetFrameData_ResponseParams_Data>(index_);
    }
    VRMagicWindowProvider_GetFrameData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRMagicWindowFrameData_Data> frame_data;

 private:
  VRMagicWindowProvider_GetFrameData_ResponseParams_Data();
  ~VRMagicWindowProvider_GetFrameData_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRMagicWindowProvider_GetFrameData_ResponseParams_Data) == 16,
              "Bad sizeof(VRMagicWindowProvider_GetFrameData_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_GetVSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_GetVSync_Params_Data));
      new (data()) VRPresentationProvider_GetVSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_GetVSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_GetVSync_Params_Data>(index_);
    }
    VRPresentationProvider_GetVSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRPresentationProvider_GetVSync_Params_Data();
  ~VRPresentationProvider_GetVSync_Params_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_GetVSync_Params_Data) == 8,
              "Bad sizeof(VRPresentationProvider_GetVSync_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_GetVSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_GetVSync_ResponseParams_Data));
      new (data()) VRPresentationProvider_GetVSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_GetVSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_GetVSync_ResponseParams_Data>(index_);
    }
    VRPresentationProvider_GetVSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRPose_Data> pose;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;
  int16_t frame_id;
  uint8_t pad2_[2];
  int32_t status;
  mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data> buffer_holder;

 private:
  VRPresentationProvider_GetVSync_ResponseParams_Data();
  ~VRPresentationProvider_GetVSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_GetVSync_ResponseParams_Data) == 40,
              "Bad sizeof(VRPresentationProvider_GetVSync_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_UpdateLayerBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_UpdateLayerBounds_Params_Data));
      new (data()) VRPresentationProvider_UpdateLayerBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_UpdateLayerBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_UpdateLayerBounds_Params_Data>(index_);
    }
    VRPresentationProvider_UpdateLayerBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> left_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> right_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> source_size;

 private:
  VRPresentationProvider_UpdateLayerBounds_Params_Data();
  ~VRPresentationProvider_UpdateLayerBounds_Params_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_UpdateLayerBounds_Params_Data) == 40,
              "Bad sizeof(VRPresentationProvider_UpdateLayerBounds_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_SubmitFrameMissing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_SubmitFrameMissing_Params_Data));
      new (data()) VRPresentationProvider_SubmitFrameMissing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_SubmitFrameMissing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_SubmitFrameMissing_Params_Data>(index_);
    }
    VRPresentationProvider_SubmitFrameMissing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;

 private:
  VRPresentationProvider_SubmitFrameMissing_Params_Data();
  ~VRPresentationProvider_SubmitFrameMissing_Params_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_SubmitFrameMissing_Params_Data) == 24,
              "Bad sizeof(VRPresentationProvider_SubmitFrameMissing_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_SubmitFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_SubmitFrame_Params_Data));
      new (data()) VRPresentationProvider_SubmitFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_SubmitFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_SubmitFrame_Params_Data>(index_);
    }
    VRPresentationProvider_SubmitFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data> mailbox_holder;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_waited;

 private:
  VRPresentationProvider_SubmitFrame_Params_Data();
  ~VRPresentationProvider_SubmitFrame_Params_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_SubmitFrame_Params_Data) == 32,
              "Bad sizeof(VRPresentationProvider_SubmitFrame_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data));
      new (data()) VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data>(index_);
    }
    VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frameId;
  uint8_t pad0_[2];
  mojo::internal::Handle_Data texture;

 private:
  VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data();
  ~VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data) == 16,
              "Bad sizeof(VRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data));
      new (data()) VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data>(index_);
    }
    VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frameId;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_waited;

 private:
  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data();
  ~VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data() = delete;
};
static_assert(sizeof(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data) == 32,
              "Bad sizeof(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnChanged_Params_Data));
      new (data()) VRDisplayClient_OnChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnChanged_Params_Data>(index_);
    }
    VRDisplayClient_OnChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRDisplayInfo_Data> display;

 private:
  VRDisplayClient_OnChanged_Params_Data();
  ~VRDisplayClient_OnChanged_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnChanged_Params_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnChanged_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnExitPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnExitPresent_Params_Data));
      new (data()) VRDisplayClient_OnExitPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnExitPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnExitPresent_Params_Data>(index_);
    }
    VRDisplayClient_OnExitPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRDisplayClient_OnExitPresent_Params_Data();
  ~VRDisplayClient_OnExitPresent_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnExitPresent_Params_Data) == 8,
              "Bad sizeof(VRDisplayClient_OnExitPresent_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnBlur_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnBlur_Params_Data));
      new (data()) VRDisplayClient_OnBlur_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnBlur_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnBlur_Params_Data>(index_);
    }
    VRDisplayClient_OnBlur_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRDisplayClient_OnBlur_Params_Data();
  ~VRDisplayClient_OnBlur_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnBlur_Params_Data) == 8,
              "Bad sizeof(VRDisplayClient_OnBlur_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnFocus_Params_Data));
      new (data()) VRDisplayClient_OnFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnFocus_Params_Data>(index_);
    }
    VRDisplayClient_OnFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRDisplayClient_OnFocus_Params_Data();
  ~VRDisplayClient_OnFocus_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnFocus_Params_Data) == 8,
              "Bad sizeof(VRDisplayClient_OnFocus_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnActivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnActivate_Params_Data));
      new (data()) VRDisplayClient_OnActivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnActivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnActivate_Params_Data>(index_);
    }
    VRDisplayClient_OnActivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  VRDisplayClient_OnActivate_Params_Data();
  ~VRDisplayClient_OnActivate_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnActivate_Params_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnActivate_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnActivate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnActivate_ResponseParams_Data));
      new (data()) VRDisplayClient_OnActivate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnActivate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnActivate_ResponseParams_Data>(index_);
    }
    VRDisplayClient_OnActivate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t will_not_present : 1;
  uint8_t padfinal_[7];

 private:
  VRDisplayClient_OnActivate_ResponseParams_Data();
  ~VRDisplayClient_OnActivate_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnActivate_ResponseParams_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnActivate_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnDeactivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnDeactivate_Params_Data));
      new (data()) VRDisplayClient_OnDeactivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnDeactivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnDeactivate_Params_Data>(index_);
    }
    VRDisplayClient_OnDeactivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  VRDisplayClient_OnDeactivate_Params_Data();
  ~VRDisplayClient_OnDeactivate_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnDeactivate_Params_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnDeactivate_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_