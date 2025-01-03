// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class PresentationInfo_Data;
class PresentationError_Data;
class PresentationConnectionMessage_Data;

struct ScreenAvailability_Data {
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

struct PresentationConnectionState_Data {
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

struct PresentationConnectionCloseReason_Data {
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

struct PresentationErrorType_Data {
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


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationConnectionMessage_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  PresentationConnectionMessage_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~PresentationConnectionMessage_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnectionMessage_Data));
      new (data()) PresentationConnectionMessage_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) PresentationConnectionMessage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnectionMessage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnectionMessage_Data>(index_);
    }
    PresentationConnectionMessage_Data* operator->() { return data(); }

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
    tag = static_cast<PresentationConnectionMessage_Tag>(0);
    data.unknown = 0U;
  }

  enum class PresentationConnectionMessage_Tag : uint32_t {

    MESSAGE,
    DATA,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::String_Data> f_message;
    mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> f_data;
    uint64_t unknown;
  };

  uint32_t size;
  PresentationConnectionMessage_Tag tag;
  Union_ data;
};
static_assert(sizeof(PresentationConnectionMessage_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(PresentationConnectionMessage_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationInfo_Data));
      new (data()) PresentationInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationInfo_Data>(index_);
    }
    PresentationInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  PresentationInfo_Data();
  ~PresentationInfo_Data() = delete;
};
static_assert(sizeof(PresentationInfo_Data) == 24,
              "Bad sizeof(PresentationInfo_Data)");
// Used by PresentationInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PresentationInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PresentationInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PresentationInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PresentationInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PresentationInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationError_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationError_Data));
      new (data()) PresentationError_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationError_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationError_Data>(index_);
    }
    PresentationError_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  PresentationError_Data();
  ~PresentationError_Data() = delete;
};
static_assert(sizeof(PresentationError_Data) == 24,
              "Bad sizeof(PresentationError_Data)");
// Used by PresentationError::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PresentationError_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PresentationError_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PresentationError_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PresentationError_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PresentationError_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationConnection_OnMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_OnMessage_Params_Data));
      new (data()) PresentationConnection_OnMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_OnMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_OnMessage_Params_Data>(index_);
    }
    PresentationConnection_OnMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::PresentationConnectionMessage_Data message;

 private:
  PresentationConnection_OnMessage_Params_Data();
  ~PresentationConnection_OnMessage_Params_Data() = delete;
};
static_assert(sizeof(PresentationConnection_OnMessage_Params_Data) == 24,
              "Bad sizeof(PresentationConnection_OnMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationConnection_OnMessage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_OnMessage_ResponseParams_Data));
      new (data()) PresentationConnection_OnMessage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_OnMessage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_OnMessage_ResponseParams_Data>(index_);
    }
    PresentationConnection_OnMessage_ResponseParams_Data* operator->() { return data(); }

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
  PresentationConnection_OnMessage_ResponseParams_Data();
  ~PresentationConnection_OnMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationConnection_OnMessage_ResponseParams_Data) == 16,
              "Bad sizeof(PresentationConnection_OnMessage_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationConnection_DidChangeState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_DidChangeState_Params_Data));
      new (data()) PresentationConnection_DidChangeState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_DidChangeState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_DidChangeState_Params_Data>(index_);
    }
    PresentationConnection_DidChangeState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  PresentationConnection_DidChangeState_Params_Data();
  ~PresentationConnection_DidChangeState_Params_Data() = delete;
};
static_assert(sizeof(PresentationConnection_DidChangeState_Params_Data) == 16,
              "Bad sizeof(PresentationConnection_DidChangeState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationConnection_RequestClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationConnection_RequestClose_Params_Data));
      new (data()) PresentationConnection_RequestClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationConnection_RequestClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationConnection_RequestClose_Params_Data>(index_);
    }
    PresentationConnection_RequestClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PresentationConnection_RequestClose_Params_Data();
  ~PresentationConnection_RequestClose_Params_Data() = delete;
};
static_assert(sizeof(PresentationConnection_RequestClose_Params_Data) == 8,
              "Bad sizeof(PresentationConnection_RequestClose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_SetController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetController_Params_Data));
      new (data()) PresentationService_SetController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetController_Params_Data>(index_);
    }
    PresentationService_SetController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data controller;

 private:
  PresentationService_SetController_Params_Data();
  ~PresentationService_SetController_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetController_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetController_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_SetReceiver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetReceiver_Params_Data));
      new (data()) PresentationService_SetReceiver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetReceiver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetReceiver_Params_Data>(index_);
    }
    PresentationService_SetReceiver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data receiver;

 private:
  PresentationService_SetReceiver_Params_Data();
  ~PresentationService_SetReceiver_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetReceiver_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetReceiver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_SetDefaultPresentationUrls_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetDefaultPresentationUrls_Params_Data));
      new (data()) PresentationService_SetDefaultPresentationUrls_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetDefaultPresentationUrls_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetDefaultPresentationUrls_Params_Data>(index_);
    }
    PresentationService_SetDefaultPresentationUrls_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> presentation_urls;

 private:
  PresentationService_SetDefaultPresentationUrls_Params_Data();
  ~PresentationService_SetDefaultPresentationUrls_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetDefaultPresentationUrls_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetDefaultPresentationUrls_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_ListenForScreenAvailability_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_ListenForScreenAvailability_Params_Data));
      new (data()) PresentationService_ListenForScreenAvailability_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_ListenForScreenAvailability_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_ListenForScreenAvailability_Params_Data>(index_);
    }
    PresentationService_ListenForScreenAvailability_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> availability_url;

 private:
  PresentationService_ListenForScreenAvailability_Params_Data();
  ~PresentationService_ListenForScreenAvailability_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_ListenForScreenAvailability_Params_Data) == 16,
              "Bad sizeof(PresentationService_ListenForScreenAvailability_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_StopListeningForScreenAvailability_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data));
      new (data()) PresentationService_StopListeningForScreenAvailability_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_StopListeningForScreenAvailability_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_StopListeningForScreenAvailability_Params_Data>(index_);
    }
    PresentationService_StopListeningForScreenAvailability_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> availability_url;

 private:
  PresentationService_StopListeningForScreenAvailability_Params_Data();
  ~PresentationService_StopListeningForScreenAvailability_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data) == 16,
              "Bad sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_StartPresentation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_StartPresentation_Params_Data));
      new (data()) PresentationService_StartPresentation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_StartPresentation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_StartPresentation_Params_Data>(index_);
    }
    PresentationService_StartPresentation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> presentation_urls;

 private:
  PresentationService_StartPresentation_Params_Data();
  ~PresentationService_StartPresentation_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_StartPresentation_Params_Data) == 16,
              "Bad sizeof(PresentationService_StartPresentation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_StartPresentation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_StartPresentation_ResponseParams_Data));
      new (data()) PresentationService_StartPresentation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_StartPresentation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_StartPresentation_ResponseParams_Data>(index_);
    }
    PresentationService_StartPresentation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  mojo::internal::Pointer<internal::PresentationError_Data> error;

 private:
  PresentationService_StartPresentation_ResponseParams_Data();
  ~PresentationService_StartPresentation_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_StartPresentation_ResponseParams_Data) == 24,
              "Bad sizeof(PresentationService_StartPresentation_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_ReconnectPresentation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_ReconnectPresentation_Params_Data));
      new (data()) PresentationService_ReconnectPresentation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_ReconnectPresentation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_ReconnectPresentation_Params_Data>(index_);
    }
    PresentationService_ReconnectPresentation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> presentation_urls;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;

 private:
  PresentationService_ReconnectPresentation_Params_Data();
  ~PresentationService_ReconnectPresentation_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_ReconnectPresentation_Params_Data) == 24,
              "Bad sizeof(PresentationService_ReconnectPresentation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_ReconnectPresentation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_ReconnectPresentation_ResponseParams_Data));
      new (data()) PresentationService_ReconnectPresentation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_ReconnectPresentation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_ReconnectPresentation_ResponseParams_Data>(index_);
    }
    PresentationService_ReconnectPresentation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  mojo::internal::Pointer<internal::PresentationError_Data> error;

 private:
  PresentationService_ReconnectPresentation_ResponseParams_Data();
  ~PresentationService_ReconnectPresentation_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_ReconnectPresentation_ResponseParams_Data) == 24,
              "Bad sizeof(PresentationService_ReconnectPresentation_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_SetPresentationConnection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_SetPresentationConnection_Params_Data));
      new (data()) PresentationService_SetPresentationConnection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_SetPresentationConnection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_SetPresentationConnection_Params_Data>(index_);
    }
    PresentationService_SetPresentationConnection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  mojo::internal::Interface_Data controller_connection_ptr;
  mojo::internal::Handle_Data receiver_connection_request;
  uint8_t padfinal_[4];

 private:
  PresentationService_SetPresentationConnection_Params_Data();
  ~PresentationService_SetPresentationConnection_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetPresentationConnection_Params_Data) == 32,
              "Bad sizeof(PresentationService_SetPresentationConnection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_CloseConnection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_CloseConnection_Params_Data));
      new (data()) PresentationService_CloseConnection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_CloseConnection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_CloseConnection_Params_Data>(index_);
    }
    PresentationService_CloseConnection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> presentation_url;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;

 private:
  PresentationService_CloseConnection_Params_Data();
  ~PresentationService_CloseConnection_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_CloseConnection_Params_Data) == 24,
              "Bad sizeof(PresentationService_CloseConnection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationService_Terminate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationService_Terminate_Params_Data));
      new (data()) PresentationService_Terminate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationService_Terminate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationService_Terminate_Params_Data>(index_);
    }
    PresentationService_Terminate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> presentation_url;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;

 private:
  PresentationService_Terminate_Params_Data();
  ~PresentationService_Terminate_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_Terminate_Params_Data) == 24,
              "Bad sizeof(PresentationService_Terminate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationController_OnScreenAvailabilityUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnScreenAvailabilityUpdated_Params_Data));
      new (data()) PresentationController_OnScreenAvailabilityUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnScreenAvailabilityUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnScreenAvailabilityUpdated_Params_Data>(index_);
    }
    PresentationController_OnScreenAvailabilityUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t availability;
  uint8_t padfinal_[4];

 private:
  PresentationController_OnScreenAvailabilityUpdated_Params_Data();
  ~PresentationController_OnScreenAvailabilityUpdated_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnScreenAvailabilityUpdated_Params_Data) == 24,
              "Bad sizeof(PresentationController_OnScreenAvailabilityUpdated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationController_OnDefaultPresentationStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnDefaultPresentationStarted_Params_Data));
      new (data()) PresentationController_OnDefaultPresentationStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnDefaultPresentationStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnDefaultPresentationStarted_Params_Data>(index_);
    }
    PresentationController_OnDefaultPresentationStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;

 private:
  PresentationController_OnDefaultPresentationStarted_Params_Data();
  ~PresentationController_OnDefaultPresentationStarted_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnDefaultPresentationStarted_Params_Data) == 16,
              "Bad sizeof(PresentationController_OnDefaultPresentationStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationController_OnConnectionStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnConnectionStateChanged_Params_Data));
      new (data()) PresentationController_OnConnectionStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnConnectionStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnConnectionStateChanged_Params_Data>(index_);
    }
    PresentationController_OnConnectionStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  int32_t newState;
  uint8_t padfinal_[4];

 private:
  PresentationController_OnConnectionStateChanged_Params_Data();
  ~PresentationController_OnConnectionStateChanged_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnConnectionStateChanged_Params_Data) == 24,
              "Bad sizeof(PresentationController_OnConnectionStateChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationController_OnConnectionClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationController_OnConnectionClosed_Params_Data));
      new (data()) PresentationController_OnConnectionClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationController_OnConnectionClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationController_OnConnectionClosed_Params_Data>(index_);
    }
    PresentationController_OnConnectionClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> presentation_info;
  int32_t reason;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  PresentationController_OnConnectionClosed_Params_Data();
  ~PresentationController_OnConnectionClosed_Params_Data() = delete;
};
static_assert(sizeof(PresentationController_OnConnectionClosed_Params_Data) == 32,
              "Bad sizeof(PresentationController_OnConnectionClosed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PresentationReceiver_OnReceiverConnectionAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PresentationReceiver_OnReceiverConnectionAvailable_Params_Data));
      new (data()) PresentationReceiver_OnReceiverConnectionAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PresentationReceiver_OnReceiverConnectionAvailable_Params_Data>(index_);
    }
    PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PresentationInfo_Data> info;
  mojo::internal::Interface_Data controller_connection;
  mojo::internal::Handle_Data receiver_connection_request;
  uint8_t padfinal_[4];

 private:
  PresentationReceiver_OnReceiverConnectionAvailable_Params_Data();
  ~PresentationReceiver_OnReceiverConnectionAvailable_Params_Data() = delete;
};
static_assert(sizeof(PresentationReceiver_OnReceiverConnectionAvailable_Params_Data) == 32,
              "Bad sizeof(PresentationReceiver_OnReceiverConnectionAvailable_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_INTERNAL_H_