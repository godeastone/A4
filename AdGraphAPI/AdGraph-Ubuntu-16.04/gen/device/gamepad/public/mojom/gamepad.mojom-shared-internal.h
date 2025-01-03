// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace device {
namespace mojom {
namespace internal {
class GamepadQuaternion_Data;
class GamepadVector_Data;
class GamepadButton_Data;
class GamepadPose_Data;
class GamepadHapticActuator_Data;
class Gamepad_Data;
class GamepadEffectParameters_Data;

struct GamepadHand_Data {
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

struct GamepadHapticActuatorType_Data {
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

struct GamepadHapticEffectType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
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

struct GamepadHapticsResult_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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
class  GamepadQuaternion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadQuaternion_Data));
      new (data()) GamepadQuaternion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadQuaternion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadQuaternion_Data>(index_);
    }
    GamepadQuaternion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  float z;
  float w;

 private:
  GamepadQuaternion_Data();
  ~GamepadQuaternion_Data() = delete;
};
static_assert(sizeof(GamepadQuaternion_Data) == 24,
              "Bad sizeof(GamepadQuaternion_Data)");
// Used by GamepadQuaternion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GamepadQuaternion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GamepadQuaternion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GamepadQuaternion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GamepadQuaternion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GamepadQuaternion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GamepadVector_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadVector_Data));
      new (data()) GamepadVector_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadVector_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadVector_Data>(index_);
    }
    GamepadVector_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  float z;
  uint8_t padfinal_[4];

 private:
  GamepadVector_Data();
  ~GamepadVector_Data() = delete;
};
static_assert(sizeof(GamepadVector_Data) == 24,
              "Bad sizeof(GamepadVector_Data)");
// Used by GamepadVector::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GamepadVector_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GamepadVector_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GamepadVector_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GamepadVector_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GamepadVector_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GamepadButton_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadButton_Data));
      new (data()) GamepadButton_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadButton_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadButton_Data>(index_);
    }
    GamepadButton_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t pressed : 1;
  uint8_t touched : 1;
  uint8_t pad1_[7];
  double value;

 private:
  GamepadButton_Data();
  ~GamepadButton_Data() = delete;
};
static_assert(sizeof(GamepadButton_Data) == 24,
              "Bad sizeof(GamepadButton_Data)");
// Used by GamepadButton::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GamepadButton_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GamepadButton_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GamepadButton_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GamepadButton_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GamepadButton_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GamepadPose_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadPose_Data));
      new (data()) GamepadPose_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadPose_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadPose_Data>(index_);
    }
    GamepadPose_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::GamepadQuaternion_Data> orientation;
  mojo::internal::Pointer<internal::GamepadVector_Data> position;
  mojo::internal::Pointer<internal::GamepadVector_Data> angular_velocity;
  mojo::internal::Pointer<internal::GamepadVector_Data> linear_velocity;
  mojo::internal::Pointer<internal::GamepadVector_Data> angular_acceleration;
  mojo::internal::Pointer<internal::GamepadVector_Data> linear_acceleration;

 private:
  GamepadPose_Data();
  ~GamepadPose_Data() = delete;
};
static_assert(sizeof(GamepadPose_Data) == 56,
              "Bad sizeof(GamepadPose_Data)");
// Used by GamepadPose::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GamepadPose_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GamepadPose_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GamepadPose_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GamepadPose_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GamepadPose_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GamepadHapticActuator_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticActuator_Data));
      new (data()) GamepadHapticActuator_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticActuator_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticActuator_Data>(index_);
    }
    GamepadHapticActuator_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  GamepadHapticActuator_Data();
  ~GamepadHapticActuator_Data() = delete;
};
static_assert(sizeof(GamepadHapticActuator_Data) == 16,
              "Bad sizeof(GamepadHapticActuator_Data)");
// Used by GamepadHapticActuator::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GamepadHapticActuator_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GamepadHapticActuator_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GamepadHapticActuator_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GamepadHapticActuator_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GamepadHapticActuator_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Gamepad_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gamepad_Data));
      new (data()) Gamepad_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gamepad_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gamepad_Data>(index_);
    }
    Gamepad_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t connected : 1;
  uint8_t pad0_[3];
  int32_t hand;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> id;
  uint64_t timestamp;
  mojo::internal::Pointer<mojo::internal::Array_Data<double>> axes;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::GamepadButton_Data>>> buttons;
  mojo::internal::Pointer<internal::GamepadHapticActuator_Data> vibration_actuator;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> mapping;
  mojo::internal::Pointer<internal::GamepadPose_Data> pose;
  uint32_t display_id;
  uint8_t padfinal_[4];

 private:
  Gamepad_Data();
  ~Gamepad_Data() = delete;
};
static_assert(sizeof(Gamepad_Data) == 80,
              "Bad sizeof(Gamepad_Data)");
// Used by Gamepad::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Gamepad_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Gamepad_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Gamepad_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Gamepad_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Gamepad_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GamepadEffectParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadEffectParameters_Data));
      new (data()) GamepadEffectParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadEffectParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadEffectParameters_Data>(index_);
    }
    GamepadEffectParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double duration;
  double start_delay;
  double strong_magnitude;
  double weak_magnitude;

 private:
  GamepadEffectParameters_Data();
  ~GamepadEffectParameters_Data() = delete;
};
static_assert(sizeof(GamepadEffectParameters_Data) == 40,
              "Bad sizeof(GamepadEffectParameters_Data)");
// Used by GamepadEffectParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GamepadEffectParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GamepadEffectParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GamepadEffectParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GamepadEffectParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GamepadEffectParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GamepadObserver_GamepadConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadObserver_GamepadConnected_Params_Data));
      new (data()) GamepadObserver_GamepadConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadObserver_GamepadConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadObserver_GamepadConnected_Params_Data>(index_);
    }
    GamepadObserver_GamepadConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t index;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Gamepad_Data> gamepad;

 private:
  GamepadObserver_GamepadConnected_Params_Data();
  ~GamepadObserver_GamepadConnected_Params_Data() = delete;
};
static_assert(sizeof(GamepadObserver_GamepadConnected_Params_Data) == 24,
              "Bad sizeof(GamepadObserver_GamepadConnected_Params_Data)");
class  GamepadObserver_GamepadDisconnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadObserver_GamepadDisconnected_Params_Data));
      new (data()) GamepadObserver_GamepadDisconnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadObserver_GamepadDisconnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadObserver_GamepadDisconnected_Params_Data>(index_);
    }
    GamepadObserver_GamepadDisconnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t index;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Gamepad_Data> gamepad;

 private:
  GamepadObserver_GamepadDisconnected_Params_Data();
  ~GamepadObserver_GamepadDisconnected_Params_Data() = delete;
};
static_assert(sizeof(GamepadObserver_GamepadDisconnected_Params_Data) == 24,
              "Bad sizeof(GamepadObserver_GamepadDisconnected_Params_Data)");
class  GamepadMonitor_GamepadStartPolling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStartPolling_Params_Data));
      new (data()) GamepadMonitor_GamepadStartPolling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStartPolling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStartPolling_Params_Data>(index_);
    }
    GamepadMonitor_GamepadStartPolling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GamepadMonitor_GamepadStartPolling_Params_Data();
  ~GamepadMonitor_GamepadStartPolling_Params_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStartPolling_Params_Data) == 8,
              "Bad sizeof(GamepadMonitor_GamepadStartPolling_Params_Data)");
class  GamepadMonitor_GamepadStartPolling_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStartPolling_ResponseParams_Data));
      new (data()) GamepadMonitor_GamepadStartPolling_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStartPolling_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStartPolling_ResponseParams_Data>(index_);
    }
    GamepadMonitor_GamepadStartPolling_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data memory_handle;
  uint8_t padfinal_[4];

 private:
  GamepadMonitor_GamepadStartPolling_ResponseParams_Data();
  ~GamepadMonitor_GamepadStartPolling_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStartPolling_ResponseParams_Data) == 16,
              "Bad sizeof(GamepadMonitor_GamepadStartPolling_ResponseParams_Data)");
class  GamepadMonitor_GamepadStopPolling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStopPolling_Params_Data));
      new (data()) GamepadMonitor_GamepadStopPolling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStopPolling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStopPolling_Params_Data>(index_);
    }
    GamepadMonitor_GamepadStopPolling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GamepadMonitor_GamepadStopPolling_Params_Data();
  ~GamepadMonitor_GamepadStopPolling_Params_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStopPolling_Params_Data) == 8,
              "Bad sizeof(GamepadMonitor_GamepadStopPolling_Params_Data)");
class  GamepadMonitor_GamepadStopPolling_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStopPolling_ResponseParams_Data));
      new (data()) GamepadMonitor_GamepadStopPolling_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStopPolling_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStopPolling_ResponseParams_Data>(index_);
    }
    GamepadMonitor_GamepadStopPolling_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GamepadMonitor_GamepadStopPolling_ResponseParams_Data();
  ~GamepadMonitor_GamepadStopPolling_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStopPolling_ResponseParams_Data) == 8,
              "Bad sizeof(GamepadMonitor_GamepadStopPolling_ResponseParams_Data)");
class  GamepadMonitor_SetObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_SetObserver_Params_Data));
      new (data()) GamepadMonitor_SetObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_SetObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_SetObserver_Params_Data>(index_);
    }
    GamepadMonitor_SetObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data gamepad_observer;

 private:
  GamepadMonitor_SetObserver_Params_Data();
  ~GamepadMonitor_SetObserver_Params_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_SetObserver_Params_Data) == 16,
              "Bad sizeof(GamepadMonitor_SetObserver_Params_Data)");
class  GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data));
      new (data()) GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data>(index_);
    }
    GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pad_index;
  int32_t type;
  mojo::internal::Pointer<internal::GamepadEffectParameters_Data> params;

 private:
  GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data();
  ~GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data) == 24,
              "Bad sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data)");
class  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data));
      new (data()) GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data>(index_);
    }
    GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data();
  ~GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data) == 16,
              "Bad sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data)");
class  GamepadHapticsManager_ResetVibrationActuator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_ResetVibrationActuator_Params_Data));
      new (data()) GamepadHapticsManager_ResetVibrationActuator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_ResetVibrationActuator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_ResetVibrationActuator_Params_Data>(index_);
    }
    GamepadHapticsManager_ResetVibrationActuator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pad_index;
  uint8_t padfinal_[4];

 private:
  GamepadHapticsManager_ResetVibrationActuator_Params_Data();
  ~GamepadHapticsManager_ResetVibrationActuator_Params_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_ResetVibrationActuator_Params_Data) == 16,
              "Bad sizeof(GamepadHapticsManager_ResetVibrationActuator_Params_Data)");
class  GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data));
      new (data()) GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data>(index_);
    }
    GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data();
  ~GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data) == 16,
              "Bad sizeof(GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_INTERNAL_H_