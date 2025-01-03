// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace prefs {
namespace mojom {
namespace internal {
class PrefStoreConnection_Data;
class PersistentPrefStoreConnection_Data;
class IncognitoPersistentPrefStoreConnection_Data;
class SubPrefUpdate_Data;
class PrefUpdate_Data;
class PrefRegistry_Data;
class PrefRegistration_Data;
class TrackedPersistentPrefStoreConfiguration_Data;
class TrackedPreferenceMetadata_Data;
class PrefUpdateValue_Data;

struct PrefStoreType_Data {
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

struct PersistentPrefStoreConnection_ReadError_Data {
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
      case 9:
      case 10:
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

struct TrackedPreferenceMetadata_EnforcementLevel_Data {
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

struct TrackedPreferenceMetadata_PrefTrackingStrategy_Data {
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

struct TrackedPreferenceMetadata_ValueType_Data {
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


class  PrefUpdateValue_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  PrefUpdateValue_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~PrefUpdateValue_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefUpdateValue_Data));
      new (data()) PrefUpdateValue_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) PrefUpdateValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefUpdateValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefUpdateValue_Data>(index_);
    }
    PrefUpdateValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<PrefUpdateValue_Tag>(0);
    data.unknown = 0U;
  }

  enum class PrefUpdateValue_Tag : uint32_t {

    SPLIT_UPDATES,
    ATOMIC_UPDATE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SubPrefUpdate_Data>>> f_split_updates;
    mojo::internal::Pointer<::mojo_base::mojom::internal::Value_Data> f_atomic_update;
    uint64_t unknown;
  };

  uint32_t size;
  PrefUpdateValue_Tag tag;
  Union_ data;
};
static_assert(sizeof(PrefUpdateValue_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(PrefUpdateValue_Data)");
class  PrefStoreConnection_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefStoreConnection_Data));
      new (data()) PrefStoreConnection_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefStoreConnection_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefStoreConnection_Data>(index_);
    }
    PrefStoreConnection_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data observer;
  uint8_t is_initialized : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> initial_prefs;

 private:
  PrefStoreConnection_Data();
  ~PrefStoreConnection_Data() = delete;
};
static_assert(sizeof(PrefStoreConnection_Data) == 24,
              "Bad sizeof(PrefStoreConnection_Data)");
// Used by PrefStoreConnection::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrefStoreConnection_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrefStoreConnection_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrefStoreConnection_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PrefStoreConnection_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrefStoreConnection_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PersistentPrefStoreConnection_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStoreConnection_Data));
      new (data()) PersistentPrefStoreConnection_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStoreConnection_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStoreConnection_Data>(index_);
    }
    PersistentPrefStoreConnection_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PrefStoreConnection_Data> pref_store_connection;
  mojo::internal::Interface_Data pref_store;
  int32_t read_error;
  uint8_t read_only : 1;
  uint8_t padfinal_[3];

 private:
  PersistentPrefStoreConnection_Data();
  ~PersistentPrefStoreConnection_Data() = delete;
};
static_assert(sizeof(PersistentPrefStoreConnection_Data) == 32,
              "Bad sizeof(PersistentPrefStoreConnection_Data)");
// Used by PersistentPrefStoreConnection::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PersistentPrefStoreConnection_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PersistentPrefStoreConnection_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PersistentPrefStoreConnection_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PersistentPrefStoreConnection_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PersistentPrefStoreConnection_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  IncognitoPersistentPrefStoreConnection_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IncognitoPersistentPrefStoreConnection_Data));
      new (data()) IncognitoPersistentPrefStoreConnection_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IncognitoPersistentPrefStoreConnection_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IncognitoPersistentPrefStoreConnection_Data>(index_);
    }
    IncognitoPersistentPrefStoreConnection_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PersistentPrefStoreConnection_Data> pref_store_connection;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> overlay_pref_names;

 private:
  IncognitoPersistentPrefStoreConnection_Data();
  ~IncognitoPersistentPrefStoreConnection_Data() = delete;
};
static_assert(sizeof(IncognitoPersistentPrefStoreConnection_Data) == 24,
              "Bad sizeof(IncognitoPersistentPrefStoreConnection_Data)");
// Used by IncognitoPersistentPrefStoreConnection::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IncognitoPersistentPrefStoreConnection_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IncognitoPersistentPrefStoreConnection_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IncognitoPersistentPrefStoreConnection_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IncognitoPersistentPrefStoreConnection_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IncognitoPersistentPrefStoreConnection_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SubPrefUpdate_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SubPrefUpdate_Data));
      new (data()) SubPrefUpdate_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SubPrefUpdate_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SubPrefUpdate_Data>(index_);
    }
    SubPrefUpdate_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> path;
  ::mojo_base::mojom::internal::Value_Data value;

 private:
  SubPrefUpdate_Data();
  ~SubPrefUpdate_Data() = delete;
};
static_assert(sizeof(SubPrefUpdate_Data) == 32,
              "Bad sizeof(SubPrefUpdate_Data)");
// Used by SubPrefUpdate::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SubPrefUpdate_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SubPrefUpdate_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SubPrefUpdate_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SubPrefUpdate_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SubPrefUpdate_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PrefUpdate_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefUpdate_Data));
      new (data()) PrefUpdate_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefUpdate_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefUpdate_Data>(index_);
    }
    PrefUpdate_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  internal::PrefUpdateValue_Data value;
  uint32_t flags;
  uint8_t padfinal_[4];

 private:
  PrefUpdate_Data();
  ~PrefUpdate_Data() = delete;
};
static_assert(sizeof(PrefUpdate_Data) == 40,
              "Bad sizeof(PrefUpdate_Data)");
// Used by PrefUpdate::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrefUpdate_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrefUpdate_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrefUpdate_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PrefUpdate_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrefUpdate_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PrefRegistry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefRegistry_Data));
      new (data()) PrefRegistry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefRegistry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefRegistry_Data>(index_);
    }
    PrefRegistry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> private_registrations;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> foreign_registrations;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PrefRegistration_Data>>> public_registrations;

 private:
  PrefRegistry_Data();
  ~PrefRegistry_Data() = delete;
};
static_assert(sizeof(PrefRegistry_Data) == 32,
              "Bad sizeof(PrefRegistry_Data)");
// Used by PrefRegistry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrefRegistry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrefRegistry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrefRegistry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PrefRegistry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrefRegistry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PrefRegistration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefRegistration_Data));
      new (data()) PrefRegistration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefRegistration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefRegistration_Data>(index_);
    }
    PrefRegistration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  ::mojo_base::mojom::internal::Value_Data default_value;
  uint32_t flags;
  uint8_t padfinal_[4];

 private:
  PrefRegistration_Data();
  ~PrefRegistration_Data() = delete;
};
static_assert(sizeof(PrefRegistration_Data) == 40,
              "Bad sizeof(PrefRegistration_Data)");
// Used by PrefRegistration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrefRegistration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrefRegistration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrefRegistration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PrefRegistration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrefRegistration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TrackedPersistentPrefStoreConfiguration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrackedPersistentPrefStoreConfiguration_Data));
      new (data()) TrackedPersistentPrefStoreConfiguration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrackedPersistentPrefStoreConfiguration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrackedPersistentPrefStoreConfiguration_Data>(index_);
    }
    TrackedPersistentPrefStoreConfiguration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> unprotected_pref_filename;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> protected_pref_filename;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TrackedPreferenceMetadata_Data>>> tracking_configuration;
  uint64_t reporting_ids_count;
  mojo::internal::Pointer<mojo::internal::String_Data> seed;
  mojo::internal::Pointer<mojo::internal::String_Data> legacy_device_id;
  mojo::internal::Pointer<mojo::internal::String_Data> registry_seed;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> registry_path;
  mojo::internal::Interface_Data validation_delegate;
  mojo::internal::Interface_Data reset_on_load_observer;

 private:
  TrackedPersistentPrefStoreConfiguration_Data();
  ~TrackedPersistentPrefStoreConfiguration_Data() = delete;
};
static_assert(sizeof(TrackedPersistentPrefStoreConfiguration_Data) == 88,
              "Bad sizeof(TrackedPersistentPrefStoreConfiguration_Data)");
// Used by TrackedPersistentPrefStoreConfiguration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TrackedPersistentPrefStoreConfiguration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TrackedPersistentPrefStoreConfiguration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TrackedPersistentPrefStoreConfiguration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TrackedPersistentPrefStoreConfiguration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TrackedPersistentPrefStoreConfiguration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TrackedPreferenceMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrackedPreferenceMetadata_Data));
      new (data()) TrackedPreferenceMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrackedPreferenceMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrackedPreferenceMetadata_Data>(index_);
    }
    TrackedPreferenceMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t reporting_id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  int32_t enforcement_level;
  int32_t strategy;
  int32_t value_type;
  uint8_t padfinal_[4];

 private:
  TrackedPreferenceMetadata_Data();
  ~TrackedPreferenceMetadata_Data() = delete;
};
static_assert(sizeof(TrackedPreferenceMetadata_Data) == 40,
              "Bad sizeof(TrackedPreferenceMetadata_Data)");
// Used by TrackedPreferenceMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TrackedPreferenceMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TrackedPreferenceMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TrackedPreferenceMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TrackedPreferenceMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TrackedPreferenceMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PrefStoreObserver_OnPrefsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefStoreObserver_OnPrefsChanged_Params_Data));
      new (data()) PrefStoreObserver_OnPrefsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefStoreObserver_OnPrefsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefStoreObserver_OnPrefsChanged_Params_Data>(index_);
    }
    PrefStoreObserver_OnPrefsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PrefUpdate_Data>>> updates;

 private:
  PrefStoreObserver_OnPrefsChanged_Params_Data();
  ~PrefStoreObserver_OnPrefsChanged_Params_Data() = delete;
};
static_assert(sizeof(PrefStoreObserver_OnPrefsChanged_Params_Data) == 16,
              "Bad sizeof(PrefStoreObserver_OnPrefsChanged_Params_Data)");
class  PrefStoreObserver_OnInitializationCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefStoreObserver_OnInitializationCompleted_Params_Data));
      new (data()) PrefStoreObserver_OnInitializationCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefStoreObserver_OnInitializationCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefStoreObserver_OnInitializationCompleted_Params_Data>(index_);
    }
    PrefStoreObserver_OnInitializationCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t succeeded : 1;
  uint8_t padfinal_[7];

 private:
  PrefStoreObserver_OnInitializationCompleted_Params_Data();
  ~PrefStoreObserver_OnInitializationCompleted_Params_Data() = delete;
};
static_assert(sizeof(PrefStoreObserver_OnInitializationCompleted_Params_Data) == 16,
              "Bad sizeof(PrefStoreObserver_OnInitializationCompleted_Params_Data)");
class  PrefStoreObserver_OnPrefChangeAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefStoreObserver_OnPrefChangeAck_Params_Data));
      new (data()) PrefStoreObserver_OnPrefChangeAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefStoreObserver_OnPrefChangeAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefStoreObserver_OnPrefChangeAck_Params_Data>(index_);
    }
    PrefStoreObserver_OnPrefChangeAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PrefStoreObserver_OnPrefChangeAck_Params_Data();
  ~PrefStoreObserver_OnPrefChangeAck_Params_Data() = delete;
};
static_assert(sizeof(PrefStoreObserver_OnPrefChangeAck_Params_Data) == 8,
              "Bad sizeof(PrefStoreObserver_OnPrefChangeAck_Params_Data)");
class  PrefStoreConnector_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefStoreConnector_Connect_Params_Data));
      new (data()) PrefStoreConnector_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefStoreConnector_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefStoreConnector_Connect_Params_Data>(index_);
    }
    PrefStoreConnector_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PrefRegistry_Data> pref_registry;

 private:
  PrefStoreConnector_Connect_Params_Data();
  ~PrefStoreConnector_Connect_Params_Data() = delete;
};
static_assert(sizeof(PrefStoreConnector_Connect_Params_Data) == 16,
              "Bad sizeof(PrefStoreConnector_Connect_Params_Data)");
class  PrefStoreConnector_Connect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrefStoreConnector_Connect_ResponseParams_Data));
      new (data()) PrefStoreConnector_Connect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrefStoreConnector_Connect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrefStoreConnector_Connect_ResponseParams_Data>(index_);
    }
    PrefStoreConnector_Connect_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PersistentPrefStoreConnection_Data> connection;
  mojo::internal::Pointer<internal::IncognitoPersistentPrefStoreConnection_Data> underlay;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PrefRegistration_Data>>> remote_defaults;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<internal::PrefStoreConnection_Data>>> connections;

 private:
  PrefStoreConnector_Connect_ResponseParams_Data();
  ~PrefStoreConnector_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(PrefStoreConnector_Connect_ResponseParams_Data) == 40,
              "Bad sizeof(PrefStoreConnector_Connect_ResponseParams_Data)");
class  PersistentPrefStore_SetValues_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_SetValues_Params_Data));
      new (data()) PersistentPrefStore_SetValues_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_SetValues_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_SetValues_Params_Data>(index_);
    }
    PersistentPrefStore_SetValues_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PrefUpdate_Data>>> updates;

 private:
  PersistentPrefStore_SetValues_Params_Data();
  ~PersistentPrefStore_SetValues_Params_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_SetValues_Params_Data) == 16,
              "Bad sizeof(PersistentPrefStore_SetValues_Params_Data)");
class  PersistentPrefStore_RequestValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_RequestValue_Params_Data));
      new (data()) PersistentPrefStore_RequestValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_RequestValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_RequestValue_Params_Data>(index_);
    }
    PersistentPrefStore_RequestValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> sub_pref_path;

 private:
  PersistentPrefStore_RequestValue_Params_Data();
  ~PersistentPrefStore_RequestValue_Params_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_RequestValue_Params_Data) == 24,
              "Bad sizeof(PersistentPrefStore_RequestValue_Params_Data)");
class  PersistentPrefStore_CommitPendingWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_CommitPendingWrite_Params_Data));
      new (data()) PersistentPrefStore_CommitPendingWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_CommitPendingWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_CommitPendingWrite_Params_Data>(index_);
    }
    PersistentPrefStore_CommitPendingWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PersistentPrefStore_CommitPendingWrite_Params_Data();
  ~PersistentPrefStore_CommitPendingWrite_Params_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_CommitPendingWrite_Params_Data) == 8,
              "Bad sizeof(PersistentPrefStore_CommitPendingWrite_Params_Data)");
class  PersistentPrefStore_CommitPendingWrite_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_CommitPendingWrite_ResponseParams_Data));
      new (data()) PersistentPrefStore_CommitPendingWrite_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_CommitPendingWrite_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_CommitPendingWrite_ResponseParams_Data>(index_);
    }
    PersistentPrefStore_CommitPendingWrite_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PersistentPrefStore_CommitPendingWrite_ResponseParams_Data();
  ~PersistentPrefStore_CommitPendingWrite_ResponseParams_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_CommitPendingWrite_ResponseParams_Data) == 8,
              "Bad sizeof(PersistentPrefStore_CommitPendingWrite_ResponseParams_Data)");
class  PersistentPrefStore_SchedulePendingLossyWrites_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_SchedulePendingLossyWrites_Params_Data));
      new (data()) PersistentPrefStore_SchedulePendingLossyWrites_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_SchedulePendingLossyWrites_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_SchedulePendingLossyWrites_Params_Data>(index_);
    }
    PersistentPrefStore_SchedulePendingLossyWrites_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PersistentPrefStore_SchedulePendingLossyWrites_Params_Data();
  ~PersistentPrefStore_SchedulePendingLossyWrites_Params_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_SchedulePendingLossyWrites_Params_Data) == 8,
              "Bad sizeof(PersistentPrefStore_SchedulePendingLossyWrites_Params_Data)");
class  PersistentPrefStore_ClearMutableValues_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_ClearMutableValues_Params_Data));
      new (data()) PersistentPrefStore_ClearMutableValues_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_ClearMutableValues_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_ClearMutableValues_Params_Data>(index_);
    }
    PersistentPrefStore_ClearMutableValues_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PersistentPrefStore_ClearMutableValues_Params_Data();
  ~PersistentPrefStore_ClearMutableValues_Params_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_ClearMutableValues_Params_Data) == 8,
              "Bad sizeof(PersistentPrefStore_ClearMutableValues_Params_Data)");
class  PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data));
      new (data()) PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data>(index_);
    }
    PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data();
  ~PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data() = delete;
};
static_assert(sizeof(PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data) == 8,
              "Bad sizeof(PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data)");
class  ResetOnLoadObserver_OnResetOnLoad_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResetOnLoadObserver_OnResetOnLoad_Params_Data));
      new (data()) ResetOnLoadObserver_OnResetOnLoad_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResetOnLoadObserver_OnResetOnLoad_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResetOnLoadObserver_OnResetOnLoad_Params_Data>(index_);
    }
    ResetOnLoadObserver_OnResetOnLoad_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ResetOnLoadObserver_OnResetOnLoad_Params_Data();
  ~ResetOnLoadObserver_OnResetOnLoad_Params_Data() = delete;
};
static_assert(sizeof(ResetOnLoadObserver_OnResetOnLoad_Params_Data) == 8,
              "Bad sizeof(ResetOnLoadObserver_OnResetOnLoad_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_INTERNAL_H_