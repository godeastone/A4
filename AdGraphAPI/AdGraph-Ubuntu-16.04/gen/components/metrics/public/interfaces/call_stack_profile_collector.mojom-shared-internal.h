// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace metrics {
namespace mojom {
namespace internal {
class CallStackModule_Data;
class CallStackFrame_Data;
class CallStackSample_Data;
class CallStackProfile_Data;
class CallStackProfileParams_Data;

struct Process_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
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

struct Thread_Data {
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

struct Trigger_Data {
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

struct SampleOrderingSpec_Data {
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
class  CallStackModule_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CallStackModule_Data));
      new (data()) CallStackModule_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CallStackModule_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CallStackModule_Data>(index_);
    }
    CallStackModule_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t base_address;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> filename;

 private:
  CallStackModule_Data();
  ~CallStackModule_Data() = delete;
};
static_assert(sizeof(CallStackModule_Data) == 32,
              "Bad sizeof(CallStackModule_Data)");
// Used by CallStackModule::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CallStackModule_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CallStackModule_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CallStackModule_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CallStackModule_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CallStackModule_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CallStackFrame_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CallStackFrame_Data));
      new (data()) CallStackFrame_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CallStackFrame_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CallStackFrame_Data>(index_);
    }
    CallStackFrame_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t instruction_pointer;
  uint64_t module_index;

 private:
  CallStackFrame_Data();
  ~CallStackFrame_Data() = delete;
};
static_assert(sizeof(CallStackFrame_Data) == 24,
              "Bad sizeof(CallStackFrame_Data)");
// Used by CallStackFrame::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CallStackFrame_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CallStackFrame_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CallStackFrame_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CallStackFrame_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CallStackFrame_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CallStackSample_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CallStackSample_Data));
      new (data()) CallStackSample_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CallStackSample_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CallStackSample_Data>(index_);
    }
    CallStackSample_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CallStackFrame_Data>>> frames;
  uint32_t process_milestones;
  uint8_t padfinal_[4];

 private:
  CallStackSample_Data();
  ~CallStackSample_Data() = delete;
};
static_assert(sizeof(CallStackSample_Data) == 24,
              "Bad sizeof(CallStackSample_Data)");
// Used by CallStackSample::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CallStackSample_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CallStackSample_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CallStackSample_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CallStackSample_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CallStackSample_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CallStackProfile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CallStackProfile_Data));
      new (data()) CallStackProfile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CallStackProfile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CallStackProfile_Data>(index_);
    }
    CallStackProfile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CallStackModule_Data>>> modules;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CallStackSample_Data>>> samples;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> profile_duration;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> sampling_period;

 private:
  CallStackProfile_Data();
  ~CallStackProfile_Data() = delete;
};
static_assert(sizeof(CallStackProfile_Data) == 40,
              "Bad sizeof(CallStackProfile_Data)");
// Used by CallStackProfile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CallStackProfile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CallStackProfile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CallStackProfile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CallStackProfile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CallStackProfile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CallStackProfileParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CallStackProfileParams_Data));
      new (data()) CallStackProfileParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CallStackProfileParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CallStackProfileParams_Data>(index_);
    }
    CallStackProfileParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t process;
  int32_t thread;
  int32_t trigger;
  int32_t ordering_spec;

 private:
  CallStackProfileParams_Data();
  ~CallStackProfileParams_Data() = delete;
};
static_assert(sizeof(CallStackProfileParams_Data) == 24,
              "Bad sizeof(CallStackProfileParams_Data)");
// Used by CallStackProfileParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CallStackProfileParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CallStackProfileParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CallStackProfileParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CallStackProfileParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CallStackProfileParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CallStackProfileCollector_Collect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CallStackProfileCollector_Collect_Params_Data));
      new (data()) CallStackProfileCollector_Collect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CallStackProfileCollector_Collect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CallStackProfileCollector_Collect_Params_Data>(index_);
    }
    CallStackProfileCollector_Collect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CallStackProfileParams_Data> params;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> start_timestamp;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CallStackProfile_Data>>> profiles;

 private:
  CallStackProfileCollector_Collect_Params_Data();
  ~CallStackProfileCollector_Collect_Params_Data() = delete;
};
static_assert(sizeof(CallStackProfileCollector_Collect_Params_Data) == 32,
              "Bad sizeof(CallStackProfileCollector_Collect_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_INTERNAL_H_