// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class BudgetState_Data;

struct BudgetOperationType_Data {
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

struct BudgetServiceErrorType_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetState_Data));
      new (data()) BudgetState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetState_Data>(index_);
    }
    BudgetState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double budget_at;
  double time;

 private:
  BudgetState_Data();
  ~BudgetState_Data() = delete;
};
static_assert(sizeof(BudgetState_Data) == 24,
              "Bad sizeof(BudgetState_Data)");
// Used by BudgetState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BudgetState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BudgetState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BudgetState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BudgetState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BudgetState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetService_GetCost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetService_GetCost_Params_Data));
      new (data()) BudgetService_GetCost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetService_GetCost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetService_GetCost_Params_Data>(index_);
    }
    BudgetService_GetCost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t operation;
  uint8_t padfinal_[4];

 private:
  BudgetService_GetCost_Params_Data();
  ~BudgetService_GetCost_Params_Data() = delete;
};
static_assert(sizeof(BudgetService_GetCost_Params_Data) == 16,
              "Bad sizeof(BudgetService_GetCost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetService_GetCost_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetService_GetCost_ResponseParams_Data));
      new (data()) BudgetService_GetCost_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetService_GetCost_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetService_GetCost_ResponseParams_Data>(index_);
    }
    BudgetService_GetCost_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double cost;

 private:
  BudgetService_GetCost_ResponseParams_Data();
  ~BudgetService_GetCost_ResponseParams_Data() = delete;
};
static_assert(sizeof(BudgetService_GetCost_ResponseParams_Data) == 16,
              "Bad sizeof(BudgetService_GetCost_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetService_GetBudget_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetService_GetBudget_Params_Data));
      new (data()) BudgetService_GetBudget_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetService_GetBudget_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetService_GetBudget_Params_Data>(index_);
    }
    BudgetService_GetBudget_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BudgetService_GetBudget_Params_Data();
  ~BudgetService_GetBudget_Params_Data() = delete;
};
static_assert(sizeof(BudgetService_GetBudget_Params_Data) == 8,
              "Bad sizeof(BudgetService_GetBudget_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetService_GetBudget_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetService_GetBudget_ResponseParams_Data));
      new (data()) BudgetService_GetBudget_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetService_GetBudget_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetService_GetBudget_ResponseParams_Data>(index_);
    }
    BudgetService_GetBudget_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BudgetState_Data>>> budget;

 private:
  BudgetService_GetBudget_ResponseParams_Data();
  ~BudgetService_GetBudget_ResponseParams_Data() = delete;
};
static_assert(sizeof(BudgetService_GetBudget_ResponseParams_Data) == 24,
              "Bad sizeof(BudgetService_GetBudget_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetService_Reserve_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetService_Reserve_Params_Data));
      new (data()) BudgetService_Reserve_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetService_Reserve_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetService_Reserve_Params_Data>(index_);
    }
    BudgetService_Reserve_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t operation;
  uint8_t padfinal_[4];

 private:
  BudgetService_Reserve_Params_Data();
  ~BudgetService_Reserve_Params_Data() = delete;
};
static_assert(sizeof(BudgetService_Reserve_Params_Data) == 16,
              "Bad sizeof(BudgetService_Reserve_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BudgetService_Reserve_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BudgetService_Reserve_ResponseParams_Data));
      new (data()) BudgetService_Reserve_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BudgetService_Reserve_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BudgetService_Reserve_ResponseParams_Data>(index_);
    }
    BudgetService_Reserve_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_type;
  uint8_t success : 1;
  uint8_t padfinal_[3];

 private:
  BudgetService_Reserve_ResponseParams_Data();
  ~BudgetService_Reserve_ResponseParams_Data() = delete;
};
static_assert(sizeof(BudgetService_Reserve_ResponseParams_Data) == 16,
              "Bad sizeof(BudgetService_Reserve_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_SHARED_INTERNAL_H_