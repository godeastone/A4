// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_INTERNAL_H_

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
class SensorConfiguration_Data;

struct SensorType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
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

struct ReportingMode_Data {
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
class  SensorConfiguration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorConfiguration_Data));
      new (data()) SensorConfiguration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorConfiguration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorConfiguration_Data>(index_);
    }
    SensorConfiguration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double frequency;

 private:
  SensorConfiguration_Data();
  ~SensorConfiguration_Data() = delete;
};
static_assert(sizeof(SensorConfiguration_Data) == 16,
              "Bad sizeof(SensorConfiguration_Data)");
// Used by SensorConfiguration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SensorConfiguration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SensorConfiguration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SensorConfiguration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SensorConfiguration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SensorConfiguration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Sensor_GetDefaultConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_GetDefaultConfiguration_Params_Data));
      new (data()) Sensor_GetDefaultConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_GetDefaultConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_GetDefaultConfiguration_Params_Data>(index_);
    }
    Sensor_GetDefaultConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Sensor_GetDefaultConfiguration_Params_Data();
  ~Sensor_GetDefaultConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Sensor_GetDefaultConfiguration_Params_Data) == 8,
              "Bad sizeof(Sensor_GetDefaultConfiguration_Params_Data)");
class  Sensor_GetDefaultConfiguration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_GetDefaultConfiguration_ResponseParams_Data));
      new (data()) Sensor_GetDefaultConfiguration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_GetDefaultConfiguration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_GetDefaultConfiguration_ResponseParams_Data>(index_);
    }
    Sensor_GetDefaultConfiguration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SensorConfiguration_Data> configuration;

 private:
  Sensor_GetDefaultConfiguration_ResponseParams_Data();
  ~Sensor_GetDefaultConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(Sensor_GetDefaultConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(Sensor_GetDefaultConfiguration_ResponseParams_Data)");
class  Sensor_AddConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_AddConfiguration_Params_Data));
      new (data()) Sensor_AddConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_AddConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_AddConfiguration_Params_Data>(index_);
    }
    Sensor_AddConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SensorConfiguration_Data> configuration;

 private:
  Sensor_AddConfiguration_Params_Data();
  ~Sensor_AddConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Sensor_AddConfiguration_Params_Data) == 16,
              "Bad sizeof(Sensor_AddConfiguration_Params_Data)");
class  Sensor_AddConfiguration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_AddConfiguration_ResponseParams_Data));
      new (data()) Sensor_AddConfiguration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_AddConfiguration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_AddConfiguration_ResponseParams_Data>(index_);
    }
    Sensor_AddConfiguration_ResponseParams_Data* operator->() { return data(); }

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
  Sensor_AddConfiguration_ResponseParams_Data();
  ~Sensor_AddConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(Sensor_AddConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(Sensor_AddConfiguration_ResponseParams_Data)");
class  Sensor_RemoveConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_RemoveConfiguration_Params_Data));
      new (data()) Sensor_RemoveConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_RemoveConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_RemoveConfiguration_Params_Data>(index_);
    }
    Sensor_RemoveConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SensorConfiguration_Data> configuration;

 private:
  Sensor_RemoveConfiguration_Params_Data();
  ~Sensor_RemoveConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Sensor_RemoveConfiguration_Params_Data) == 16,
              "Bad sizeof(Sensor_RemoveConfiguration_Params_Data)");
class  Sensor_Suspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_Suspend_Params_Data));
      new (data()) Sensor_Suspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_Suspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_Suspend_Params_Data>(index_);
    }
    Sensor_Suspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Sensor_Suspend_Params_Data();
  ~Sensor_Suspend_Params_Data() = delete;
};
static_assert(sizeof(Sensor_Suspend_Params_Data) == 8,
              "Bad sizeof(Sensor_Suspend_Params_Data)");
class  Sensor_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_Resume_Params_Data));
      new (data()) Sensor_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_Resume_Params_Data>(index_);
    }
    Sensor_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Sensor_Resume_Params_Data();
  ~Sensor_Resume_Params_Data() = delete;
};
static_assert(sizeof(Sensor_Resume_Params_Data) == 8,
              "Bad sizeof(Sensor_Resume_Params_Data)");
class  Sensor_ConfigureReadingChangeNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Sensor_ConfigureReadingChangeNotifications_Params_Data));
      new (data()) Sensor_ConfigureReadingChangeNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Sensor_ConfigureReadingChangeNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Sensor_ConfigureReadingChangeNotifications_Params_Data>(index_);
    }
    Sensor_ConfigureReadingChangeNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  Sensor_ConfigureReadingChangeNotifications_Params_Data();
  ~Sensor_ConfigureReadingChangeNotifications_Params_Data() = delete;
};
static_assert(sizeof(Sensor_ConfigureReadingChangeNotifications_Params_Data) == 16,
              "Bad sizeof(Sensor_ConfigureReadingChangeNotifications_Params_Data)");
class  SensorClient_RaiseError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorClient_RaiseError_Params_Data));
      new (data()) SensorClient_RaiseError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorClient_RaiseError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorClient_RaiseError_Params_Data>(index_);
    }
    SensorClient_RaiseError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SensorClient_RaiseError_Params_Data();
  ~SensorClient_RaiseError_Params_Data() = delete;
};
static_assert(sizeof(SensorClient_RaiseError_Params_Data) == 8,
              "Bad sizeof(SensorClient_RaiseError_Params_Data)");
class  SensorClient_SensorReadingChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorClient_SensorReadingChanged_Params_Data));
      new (data()) SensorClient_SensorReadingChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorClient_SensorReadingChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorClient_SensorReadingChanged_Params_Data>(index_);
    }
    SensorClient_SensorReadingChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SensorClient_SensorReadingChanged_Params_Data();
  ~SensorClient_SensorReadingChanged_Params_Data() = delete;
};
static_assert(sizeof(SensorClient_SensorReadingChanged_Params_Data) == 8,
              "Bad sizeof(SensorClient_SensorReadingChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_INTERNAL_H_