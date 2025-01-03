// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_INTERNAL_H_

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
class NFCError_Data;
class NFCRecord_Data;
class NFCMessage_Data;
class NFCPushOptions_Data;
class NFCRecordTypeFilter_Data;
class NFCWatchOptions_Data;

struct NFCErrorType_Data {
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

struct NFCRecordType_Data {
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

struct NFCPushTarget_Data {
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

struct NFCWatchMode_Data {
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
class  NFCError_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCError_Data));
      new (data()) NFCError_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCError_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCError_Data>(index_);
    }
    NFCError_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_type;
  uint8_t padfinal_[4];

 private:
  NFCError_Data();
  ~NFCError_Data() = delete;
};
static_assert(sizeof(NFCError_Data) == 16,
              "Bad sizeof(NFCError_Data)");
// Used by NFCError::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCError_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCError_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCError_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCError_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCError_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCRecord_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCRecord_Data));
      new (data()) NFCRecord_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCRecord_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCRecord_Data>(index_);
    }
    NFCRecord_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t record_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> media_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  NFCRecord_Data();
  ~NFCRecord_Data() = delete;
};
static_assert(sizeof(NFCRecord_Data) == 32,
              "Bad sizeof(NFCRecord_Data)");
// Used by NFCRecord::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCRecord_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCRecord_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCRecord_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCRecord_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCRecord_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCMessage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCMessage_Data));
      new (data()) NFCMessage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCMessage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCMessage_Data>(index_);
    }
    NFCMessage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NFCRecord_Data>>> data;
  mojo::internal::Pointer<mojo::internal::String_Data> url;

 private:
  NFCMessage_Data();
  ~NFCMessage_Data() = delete;
};
static_assert(sizeof(NFCMessage_Data) == 24,
              "Bad sizeof(NFCMessage_Data)");
// Used by NFCMessage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCMessage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCMessage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCMessage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCMessage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCMessage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCPushOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCPushOptions_Data));
      new (data()) NFCPushOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCPushOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCPushOptions_Data>(index_);
    }
    NFCPushOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t target;
  uint8_t ignore_read : 1;
  uint8_t pad1_[3];
  double timeout;

 private:
  NFCPushOptions_Data();
  ~NFCPushOptions_Data() = delete;
};
static_assert(sizeof(NFCPushOptions_Data) == 24,
              "Bad sizeof(NFCPushOptions_Data)");
// Used by NFCPushOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCPushOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCPushOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCPushOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCPushOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCPushOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCRecordTypeFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCRecordTypeFilter_Data));
      new (data()) NFCRecordTypeFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCRecordTypeFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCRecordTypeFilter_Data>(index_);
    }
    NFCRecordTypeFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t record_type;
  uint8_t padfinal_[4];

 private:
  NFCRecordTypeFilter_Data();
  ~NFCRecordTypeFilter_Data() = delete;
};
static_assert(sizeof(NFCRecordTypeFilter_Data) == 16,
              "Bad sizeof(NFCRecordTypeFilter_Data)");
// Used by NFCRecordTypeFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCRecordTypeFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCRecordTypeFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCRecordTypeFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCRecordTypeFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCRecordTypeFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCWatchOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCWatchOptions_Data));
      new (data()) NFCWatchOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCWatchOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCWatchOptions_Data>(index_);
    }
    NFCWatchOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> url;
  mojo::internal::Pointer<internal::NFCRecordTypeFilter_Data> record_filter;
  mojo::internal::Pointer<mojo::internal::String_Data> media_type;
  int32_t mode;
  uint8_t padfinal_[4];

 private:
  NFCWatchOptions_Data();
  ~NFCWatchOptions_Data() = delete;
};
static_assert(sizeof(NFCWatchOptions_Data) == 40,
              "Bad sizeof(NFCWatchOptions_Data)");
// Used by NFCWatchOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCWatchOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCWatchOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCWatchOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCWatchOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCWatchOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFC_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_SetClient_Params_Data));
      new (data()) NFC_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_SetClient_Params_Data>(index_);
    }
    NFC_SetClient_Params_Data* operator->() { return data(); }

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
  NFC_SetClient_Params_Data();
  ~NFC_SetClient_Params_Data() = delete;
};
static_assert(sizeof(NFC_SetClient_Params_Data) == 16,
              "Bad sizeof(NFC_SetClient_Params_Data)");
class  NFC_Push_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Push_Params_Data));
      new (data()) NFC_Push_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Push_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Push_Params_Data>(index_);
    }
    NFC_Push_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCMessage_Data> message;
  mojo::internal::Pointer<internal::NFCPushOptions_Data> options;

 private:
  NFC_Push_Params_Data();
  ~NFC_Push_Params_Data() = delete;
};
static_assert(sizeof(NFC_Push_Params_Data) == 24,
              "Bad sizeof(NFC_Push_Params_Data)");
class  NFC_Push_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Push_ResponseParams_Data));
      new (data()) NFC_Push_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Push_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Push_ResponseParams_Data>(index_);
    }
    NFC_Push_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_Push_ResponseParams_Data();
  ~NFC_Push_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_Push_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_Push_ResponseParams_Data)");
class  NFC_CancelPush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelPush_Params_Data));
      new (data()) NFC_CancelPush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelPush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelPush_Params_Data>(index_);
    }
    NFC_CancelPush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t target;
  uint8_t padfinal_[4];

 private:
  NFC_CancelPush_Params_Data();
  ~NFC_CancelPush_Params_Data() = delete;
};
static_assert(sizeof(NFC_CancelPush_Params_Data) == 16,
              "Bad sizeof(NFC_CancelPush_Params_Data)");
class  NFC_CancelPush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelPush_ResponseParams_Data));
      new (data()) NFC_CancelPush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelPush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelPush_ResponseParams_Data>(index_);
    }
    NFC_CancelPush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_CancelPush_ResponseParams_Data();
  ~NFC_CancelPush_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_CancelPush_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_CancelPush_ResponseParams_Data)");
class  NFC_Watch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Watch_Params_Data));
      new (data()) NFC_Watch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Watch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Watch_Params_Data>(index_);
    }
    NFC_Watch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCWatchOptions_Data> options;

 private:
  NFC_Watch_Params_Data();
  ~NFC_Watch_Params_Data() = delete;
};
static_assert(sizeof(NFC_Watch_Params_Data) == 16,
              "Bad sizeof(NFC_Watch_Params_Data)");
class  NFC_Watch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Watch_ResponseParams_Data));
      new (data()) NFC_Watch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Watch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Watch_ResponseParams_Data>(index_);
    }
    NFC_Watch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_Watch_ResponseParams_Data();
  ~NFC_Watch_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_Watch_ResponseParams_Data) == 24,
              "Bad sizeof(NFC_Watch_ResponseParams_Data)");
class  NFC_CancelWatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelWatch_Params_Data));
      new (data()) NFC_CancelWatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelWatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelWatch_Params_Data>(index_);
    }
    NFC_CancelWatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  NFC_CancelWatch_Params_Data();
  ~NFC_CancelWatch_Params_Data() = delete;
};
static_assert(sizeof(NFC_CancelWatch_Params_Data) == 16,
              "Bad sizeof(NFC_CancelWatch_Params_Data)");
class  NFC_CancelWatch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelWatch_ResponseParams_Data));
      new (data()) NFC_CancelWatch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelWatch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelWatch_ResponseParams_Data>(index_);
    }
    NFC_CancelWatch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_CancelWatch_ResponseParams_Data();
  ~NFC_CancelWatch_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_CancelWatch_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_CancelWatch_ResponseParams_Data)");
class  NFC_CancelAllWatches_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelAllWatches_Params_Data));
      new (data()) NFC_CancelAllWatches_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelAllWatches_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelAllWatches_Params_Data>(index_);
    }
    NFC_CancelAllWatches_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NFC_CancelAllWatches_Params_Data();
  ~NFC_CancelAllWatches_Params_Data() = delete;
};
static_assert(sizeof(NFC_CancelAllWatches_Params_Data) == 8,
              "Bad sizeof(NFC_CancelAllWatches_Params_Data)");
class  NFC_CancelAllWatches_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelAllWatches_ResponseParams_Data));
      new (data()) NFC_CancelAllWatches_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelAllWatches_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelAllWatches_ResponseParams_Data>(index_);
    }
    NFC_CancelAllWatches_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_CancelAllWatches_ResponseParams_Data();
  ~NFC_CancelAllWatches_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_CancelAllWatches_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_CancelAllWatches_ResponseParams_Data)");
class  NFC_SuspendNFCOperations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_SuspendNFCOperations_Params_Data));
      new (data()) NFC_SuspendNFCOperations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_SuspendNFCOperations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_SuspendNFCOperations_Params_Data>(index_);
    }
    NFC_SuspendNFCOperations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NFC_SuspendNFCOperations_Params_Data();
  ~NFC_SuspendNFCOperations_Params_Data() = delete;
};
static_assert(sizeof(NFC_SuspendNFCOperations_Params_Data) == 8,
              "Bad sizeof(NFC_SuspendNFCOperations_Params_Data)");
class  NFC_ResumeNFCOperations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_ResumeNFCOperations_Params_Data));
      new (data()) NFC_ResumeNFCOperations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_ResumeNFCOperations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_ResumeNFCOperations_Params_Data>(index_);
    }
    NFC_ResumeNFCOperations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NFC_ResumeNFCOperations_Params_Data();
  ~NFC_ResumeNFCOperations_Params_Data() = delete;
};
static_assert(sizeof(NFC_ResumeNFCOperations_Params_Data) == 8,
              "Bad sizeof(NFC_ResumeNFCOperations_Params_Data)");
class  NFCClient_OnWatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCClient_OnWatch_Params_Data));
      new (data()) NFCClient_OnWatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCClient_OnWatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCClient_OnWatch_Params_Data>(index_);
    }
    NFCClient_OnWatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> watch_ids;
  mojo::internal::Pointer<internal::NFCMessage_Data> message;

 private:
  NFCClient_OnWatch_Params_Data();
  ~NFCClient_OnWatch_Params_Data() = delete;
};
static_assert(sizeof(NFCClient_OnWatch_Params_Data) == 24,
              "Bad sizeof(NFCClient_OnWatch_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_INTERNAL_H_