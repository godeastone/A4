// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
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
class QueryParams_Data;
class BatchOperation_Data;
class OpenResult_Data;
class MatchResult_Data;
class MatchAllResult_Data;
class CacheKeysResult_Data;

struct CacheStorageError_Data {
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

struct OperationType_Data {
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


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) OpenResult_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  OpenResult_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~OpenResult_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OpenResult_Data));
      new (data()) OpenResult_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) OpenResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OpenResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OpenResult_Data>(index_);
    }
    OpenResult_Data* operator->() { return data(); }

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
    tag = static_cast<OpenResult_Tag>(0);
    data.unknown = 0U;
  }

  enum class OpenResult_Tag : uint32_t {

    STATUS,
    CACHE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_status;
    mojo::internal::AssociatedInterface_Data f_cache;
    uint64_t unknown;
  };

  uint32_t size;
  OpenResult_Tag tag;
  Union_ data;
};
static_assert(sizeof(OpenResult_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(OpenResult_Data)");


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MatchResult_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  MatchResult_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~MatchResult_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MatchResult_Data));
      new (data()) MatchResult_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) MatchResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MatchResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MatchResult_Data>(index_);
    }
    MatchResult_Data* operator->() { return data(); }

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
    tag = static_cast<MatchResult_Tag>(0);
    data.unknown = 0U;
  }

  enum class MatchResult_Tag : uint32_t {

    STATUS,
    RESPONSE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_status;
    mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data> f_response;
    uint64_t unknown;
  };

  uint32_t size;
  MatchResult_Tag tag;
  Union_ data;
};
static_assert(sizeof(MatchResult_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(MatchResult_Data)");


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MatchAllResult_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  MatchAllResult_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~MatchAllResult_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MatchAllResult_Data));
      new (data()) MatchAllResult_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) MatchAllResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MatchAllResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MatchAllResult_Data>(index_);
    }
    MatchAllResult_Data* operator->() { return data(); }

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
    tag = static_cast<MatchAllResult_Tag>(0);
    data.unknown = 0U;
  }

  enum class MatchAllResult_Tag : uint32_t {

    STATUS,
    RESPONSES,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_status;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data>>> f_responses;
    uint64_t unknown;
  };

  uint32_t size;
  MatchAllResult_Tag tag;
  Union_ data;
};
static_assert(sizeof(MatchAllResult_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(MatchAllResult_Data)");


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheKeysResult_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  CacheKeysResult_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~CacheKeysResult_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheKeysResult_Data));
      new (data()) CacheKeysResult_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) CacheKeysResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheKeysResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheKeysResult_Data>(index_);
    }
    CacheKeysResult_Data* operator->() { return data(); }

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
    tag = static_cast<CacheKeysResult_Tag>(0);
    data.unknown = 0U;
  }

  enum class CacheKeysResult_Tag : uint32_t {

    STATUS,
    KEYS,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_status;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data>>> f_keys;
    uint64_t unknown;
  };

  uint32_t size;
  CacheKeysResult_Tag tag;
  Union_ data;
};
static_assert(sizeof(CacheKeysResult_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(CacheKeysResult_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) QueryParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QueryParams_Data));
      new (data()) QueryParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QueryParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QueryParams_Data>(index_);
    }
    QueryParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t ignore_search : 1;
  uint8_t ignore_method : 1;
  uint8_t ignore_vary : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;

 private:
  QueryParams_Data();
  ~QueryParams_Data() = delete;
};
static_assert(sizeof(QueryParams_Data) == 24,
              "Bad sizeof(QueryParams_Data)");
// Used by QueryParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct QueryParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  QueryParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~QueryParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    QueryParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    QueryParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BatchOperation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BatchOperation_Data));
      new (data()) BatchOperation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BatchOperation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BatchOperation_Data>(index_);
    }
    BatchOperation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t operation_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data> response;
  mojo::internal::Pointer<internal::QueryParams_Data> match_params;

 private:
  BatchOperation_Data();
  ~BatchOperation_Data() = delete;
};
static_assert(sizeof(BatchOperation_Data) == 40,
              "Bad sizeof(BatchOperation_Data)");
// Used by BatchOperation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BatchOperation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BatchOperation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BatchOperation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BatchOperation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BatchOperation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_Match_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Match_Params_Data));
      new (data()) CacheStorageCache_Match_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Match_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Match_Params_Data>(index_);
    }
    CacheStorageCache_Match_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::QueryParams_Data> query_params;

 private:
  CacheStorageCache_Match_Params_Data();
  ~CacheStorageCache_Match_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Match_Params_Data) == 24,
              "Bad sizeof(CacheStorageCache_Match_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_Match_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Match_ResponseParams_Data));
      new (data()) CacheStorageCache_Match_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Match_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Match_ResponseParams_Data>(index_);
    }
    CacheStorageCache_Match_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::MatchResult_Data result;

 private:
  CacheStorageCache_Match_ResponseParams_Data();
  ~CacheStorageCache_Match_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Match_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorageCache_Match_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_MatchAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_MatchAll_Params_Data));
      new (data()) CacheStorageCache_MatchAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_MatchAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_MatchAll_Params_Data>(index_);
    }
    CacheStorageCache_MatchAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::QueryParams_Data> query_params;

 private:
  CacheStorageCache_MatchAll_Params_Data();
  ~CacheStorageCache_MatchAll_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_MatchAll_Params_Data) == 24,
              "Bad sizeof(CacheStorageCache_MatchAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_MatchAll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_MatchAll_ResponseParams_Data));
      new (data()) CacheStorageCache_MatchAll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_MatchAll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_MatchAll_ResponseParams_Data>(index_);
    }
    CacheStorageCache_MatchAll_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::MatchAllResult_Data result;

 private:
  CacheStorageCache_MatchAll_ResponseParams_Data();
  ~CacheStorageCache_MatchAll_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_MatchAll_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorageCache_MatchAll_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_Keys_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Keys_Params_Data));
      new (data()) CacheStorageCache_Keys_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Keys_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Keys_Params_Data>(index_);
    }
    CacheStorageCache_Keys_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::QueryParams_Data> query_params;

 private:
  CacheStorageCache_Keys_Params_Data();
  ~CacheStorageCache_Keys_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Keys_Params_Data) == 24,
              "Bad sizeof(CacheStorageCache_Keys_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_Keys_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Keys_ResponseParams_Data));
      new (data()) CacheStorageCache_Keys_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Keys_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Keys_ResponseParams_Data>(index_);
    }
    CacheStorageCache_Keys_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::CacheKeysResult_Data result;

 private:
  CacheStorageCache_Keys_ResponseParams_Data();
  ~CacheStorageCache_Keys_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Keys_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorageCache_Keys_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_Batch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Batch_Params_Data));
      new (data()) CacheStorageCache_Batch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Batch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Batch_Params_Data>(index_);
    }
    CacheStorageCache_Batch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BatchOperation_Data>>> batch_operations;

 private:
  CacheStorageCache_Batch_Params_Data();
  ~CacheStorageCache_Batch_Params_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Batch_Params_Data) == 16,
              "Bad sizeof(CacheStorageCache_Batch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorageCache_Batch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorageCache_Batch_ResponseParams_Data));
      new (data()) CacheStorageCache_Batch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorageCache_Batch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorageCache_Batch_ResponseParams_Data>(index_);
    }
    CacheStorageCache_Batch_ResponseParams_Data* operator->() { return data(); }

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
  CacheStorageCache_Batch_ResponseParams_Data();
  ~CacheStorageCache_Batch_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorageCache_Batch_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorageCache_Batch_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Has_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Has_Params_Data));
      new (data()) CacheStorage_Has_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Has_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Has_Params_Data>(index_);
    }
    CacheStorage_Has_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;

 private:
  CacheStorage_Has_Params_Data();
  ~CacheStorage_Has_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Has_Params_Data) == 16,
              "Bad sizeof(CacheStorage_Has_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Has_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Has_ResponseParams_Data));
      new (data()) CacheStorage_Has_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Has_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Has_ResponseParams_Data>(index_);
    }
    CacheStorage_Has_ResponseParams_Data* operator->() { return data(); }

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
  CacheStorage_Has_ResponseParams_Data();
  ~CacheStorage_Has_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Has_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorage_Has_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Delete_Params_Data));
      new (data()) CacheStorage_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Delete_Params_Data>(index_);
    }
    CacheStorage_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;

 private:
  CacheStorage_Delete_Params_Data();
  ~CacheStorage_Delete_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Delete_Params_Data) == 16,
              "Bad sizeof(CacheStorage_Delete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Delete_ResponseParams_Data));
      new (data()) CacheStorage_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Delete_ResponseParams_Data>(index_);
    }
    CacheStorage_Delete_ResponseParams_Data* operator->() { return data(); }

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
  CacheStorage_Delete_ResponseParams_Data();
  ~CacheStorage_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorage_Delete_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Keys_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Keys_Params_Data));
      new (data()) CacheStorage_Keys_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Keys_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Keys_Params_Data>(index_);
    }
    CacheStorage_Keys_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CacheStorage_Keys_Params_Data();
  ~CacheStorage_Keys_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Keys_Params_Data) == 8,
              "Bad sizeof(CacheStorage_Keys_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Keys_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Keys_ResponseParams_Data));
      new (data()) CacheStorage_Keys_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Keys_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Keys_ResponseParams_Data>(index_);
    }
    CacheStorage_Keys_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> keys;

 private:
  CacheStorage_Keys_ResponseParams_Data();
  ~CacheStorage_Keys_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Keys_ResponseParams_Data) == 16,
              "Bad sizeof(CacheStorage_Keys_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Match_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Match_Params_Data));
      new (data()) CacheStorage_Match_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Match_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Match_Params_Data>(index_);
    }
    CacheStorage_Match_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::QueryParams_Data> match_params;

 private:
  CacheStorage_Match_Params_Data();
  ~CacheStorage_Match_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Match_Params_Data) == 24,
              "Bad sizeof(CacheStorage_Match_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Match_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Match_ResponseParams_Data));
      new (data()) CacheStorage_Match_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Match_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Match_ResponseParams_Data>(index_);
    }
    CacheStorage_Match_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::MatchResult_Data result;

 private:
  CacheStorage_Match_ResponseParams_Data();
  ~CacheStorage_Match_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Match_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorage_Match_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Open_Params_Data));
      new (data()) CacheStorage_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Open_Params_Data>(index_);
    }
    CacheStorage_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> cache_name;

 private:
  CacheStorage_Open_Params_Data();
  ~CacheStorage_Open_Params_Data() = delete;
};
static_assert(sizeof(CacheStorage_Open_Params_Data) == 16,
              "Bad sizeof(CacheStorage_Open_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) CacheStorage_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CacheStorage_Open_ResponseParams_Data));
      new (data()) CacheStorage_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CacheStorage_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CacheStorage_Open_ResponseParams_Data>(index_);
    }
    CacheStorage_Open_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::OpenResult_Data result;

 private:
  CacheStorage_Open_ResponseParams_Data();
  ~CacheStorage_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(CacheStorage_Open_ResponseParams_Data) == 24,
              "Bad sizeof(CacheStorage_Open_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_INTERNAL_H_