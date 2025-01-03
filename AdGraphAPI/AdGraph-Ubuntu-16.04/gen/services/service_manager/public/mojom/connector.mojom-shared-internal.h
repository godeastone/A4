// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/service_manager/public/mojom/constants.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace service_manager {
namespace mojom {
namespace internal {
class Identity_Data;

struct ConnectResult_Data {
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Identity_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Identity_Data));
      new (data()) Identity_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Identity_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Identity_Data>(index_);
    }
    Identity_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> user_id;
  mojo::internal::Pointer<mojo::internal::String_Data> instance;

 private:
  Identity_Data();
  ~Identity_Data() = delete;
};
static_assert(sizeof(Identity_Data) == 32,
              "Bad sizeof(Identity_Data)");
// Used by Identity::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Identity_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Identity_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Identity_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Identity_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Identity_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) PIDReceiver_SetPID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PIDReceiver_SetPID_Params_Data));
      new (data()) PIDReceiver_SetPID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PIDReceiver_SetPID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PIDReceiver_SetPID_Params_Data>(index_);
    }
    PIDReceiver_SetPID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t pid;
  uint8_t padfinal_[4];

 private:
  PIDReceiver_SetPID_Params_Data();
  ~PIDReceiver_SetPID_Params_Data() = delete;
};
static_assert(sizeof(PIDReceiver_SetPID_Params_Data) == 16,
              "Bad sizeof(PIDReceiver_SetPID_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_BindInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_BindInterface_Params_Data));
      new (data()) Connector_BindInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_BindInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_BindInterface_Params_Data>(index_);
    }
    Connector_BindInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Identity_Data> target;
  mojo::internal::Pointer<mojo::internal::String_Data> interface_name;
  mojo::internal::Handle_Data interface_pipe;
  uint8_t padfinal_[4];

 private:
  Connector_BindInterface_Params_Data();
  ~Connector_BindInterface_Params_Data() = delete;
};
static_assert(sizeof(Connector_BindInterface_Params_Data) == 32,
              "Bad sizeof(Connector_BindInterface_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_BindInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_BindInterface_ResponseParams_Data));
      new (data()) Connector_BindInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_BindInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_BindInterface_ResponseParams_Data>(index_);
    }
    Connector_BindInterface_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Identity_Data> user_id;

 private:
  Connector_BindInterface_ResponseParams_Data();
  ~Connector_BindInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_BindInterface_ResponseParams_Data) == 24,
              "Bad sizeof(Connector_BindInterface_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_QueryService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_QueryService_Params_Data));
      new (data()) Connector_QueryService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_QueryService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_QueryService_Params_Data>(index_);
    }
    Connector_QueryService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Identity_Data> target;

 private:
  Connector_QueryService_Params_Data();
  ~Connector_QueryService_Params_Data() = delete;
};
static_assert(sizeof(Connector_QueryService_Params_Data) == 16,
              "Bad sizeof(Connector_QueryService_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_QueryService_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_QueryService_ResponseParams_Data));
      new (data()) Connector_QueryService_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_QueryService_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_QueryService_ResponseParams_Data>(index_);
    }
    Connector_QueryService_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> sandbox_type;

 private:
  Connector_QueryService_ResponseParams_Data();
  ~Connector_QueryService_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_QueryService_ResponseParams_Data) == 24,
              "Bad sizeof(Connector_QueryService_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_StartService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_StartService_Params_Data));
      new (data()) Connector_StartService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_StartService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_StartService_Params_Data>(index_);
    }
    Connector_StartService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Identity_Data> target;

 private:
  Connector_StartService_Params_Data();
  ~Connector_StartService_Params_Data() = delete;
};
static_assert(sizeof(Connector_StartService_Params_Data) == 16,
              "Bad sizeof(Connector_StartService_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_StartService_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_StartService_ResponseParams_Data));
      new (data()) Connector_StartService_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_StartService_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_StartService_ResponseParams_Data>(index_);
    }
    Connector_StartService_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Identity_Data> identity;

 private:
  Connector_StartService_ResponseParams_Data();
  ~Connector_StartService_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_StartService_ResponseParams_Data) == 24,
              "Bad sizeof(Connector_StartService_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_StartServiceWithProcess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_StartServiceWithProcess_Params_Data));
      new (data()) Connector_StartServiceWithProcess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_StartServiceWithProcess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_StartServiceWithProcess_Params_Data>(index_);
    }
    Connector_StartServiceWithProcess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Identity_Data> target;
  mojo::internal::Handle_Data service;
  mojo::internal::Handle_Data pid_receiver_request;

 private:
  Connector_StartServiceWithProcess_Params_Data();
  ~Connector_StartServiceWithProcess_Params_Data() = delete;
};
static_assert(sizeof(Connector_StartServiceWithProcess_Params_Data) == 24,
              "Bad sizeof(Connector_StartServiceWithProcess_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_StartServiceWithProcess_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_StartServiceWithProcess_ResponseParams_Data));
      new (data()) Connector_StartServiceWithProcess_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_StartServiceWithProcess_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_StartServiceWithProcess_ResponseParams_Data>(index_);
    }
    Connector_StartServiceWithProcess_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Identity_Data> identity;

 private:
  Connector_StartServiceWithProcess_ResponseParams_Data();
  ~Connector_StartServiceWithProcess_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_StartServiceWithProcess_ResponseParams_Data) == 24,
              "Bad sizeof(Connector_StartServiceWithProcess_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_Clone_Params_Data));
      new (data()) Connector_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_Clone_Params_Data>(index_);
    }
    Connector_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  Connector_Clone_Params_Data();
  ~Connector_Clone_Params_Data() = delete;
};
static_assert(sizeof(Connector_Clone_Params_Data) == 16,
              "Bad sizeof(Connector_Clone_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_FilterInterfaces_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_FilterInterfaces_Params_Data));
      new (data()) Connector_FilterInterfaces_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_FilterInterfaces_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_FilterInterfaces_Params_Data>(index_);
    }
    Connector_FilterInterfaces_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> spec;
  mojo::internal::Pointer<internal::Identity_Data> source;
  mojo::internal::Handle_Data source_request;
  mojo::internal::Interface_Data target;
  uint8_t padfinal_[4];

 private:
  Connector_FilterInterfaces_Params_Data();
  ~Connector_FilterInterfaces_Params_Data() = delete;
};
static_assert(sizeof(Connector_FilterInterfaces_Params_Data) == 40,
              "Bad sizeof(Connector_FilterInterfaces_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_INTERNAL_H_