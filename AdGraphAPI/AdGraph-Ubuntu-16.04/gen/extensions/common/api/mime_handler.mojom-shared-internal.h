// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_INTERNAL_H_
#define EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_INTERNAL_H_

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
namespace extensions {
namespace mime_handler {
namespace internal {
class StreamInfo_Data;

#pragma pack(push, 1)
class  StreamInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamInfo_Data));
      new (data()) StreamInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamInfo_Data>(index_);
    }
    StreamInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;
  mojo::internal::Pointer<mojo::internal::String_Data> original_url;
  mojo::internal::Pointer<mojo::internal::String_Data> stream_url;
  int32_t tab_id;
  uint8_t embedded : 1;
  uint8_t pad4_[3];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> response_headers;

 private:
  StreamInfo_Data();
  ~StreamInfo_Data() = delete;
};
static_assert(sizeof(StreamInfo_Data) == 48,
              "Bad sizeof(StreamInfo_Data)");
// Used by StreamInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StreamInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StreamInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StreamInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StreamInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StreamInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MimeHandlerService_GetStreamInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MimeHandlerService_GetStreamInfo_Params_Data));
      new (data()) MimeHandlerService_GetStreamInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MimeHandlerService_GetStreamInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MimeHandlerService_GetStreamInfo_Params_Data>(index_);
    }
    MimeHandlerService_GetStreamInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MimeHandlerService_GetStreamInfo_Params_Data();
  ~MimeHandlerService_GetStreamInfo_Params_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_GetStreamInfo_Params_Data) == 8,
              "Bad sizeof(MimeHandlerService_GetStreamInfo_Params_Data)");
class  MimeHandlerService_GetStreamInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MimeHandlerService_GetStreamInfo_ResponseParams_Data));
      new (data()) MimeHandlerService_GetStreamInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MimeHandlerService_GetStreamInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MimeHandlerService_GetStreamInfo_ResponseParams_Data>(index_);
    }
    MimeHandlerService_GetStreamInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StreamInfo_Data> stream_info;

 private:
  MimeHandlerService_GetStreamInfo_ResponseParams_Data();
  ~MimeHandlerService_GetStreamInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_GetStreamInfo_ResponseParams_Data) == 16,
              "Bad sizeof(MimeHandlerService_GetStreamInfo_ResponseParams_Data)");
class  MimeHandlerService_AbortStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MimeHandlerService_AbortStream_Params_Data));
      new (data()) MimeHandlerService_AbortStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MimeHandlerService_AbortStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MimeHandlerService_AbortStream_Params_Data>(index_);
    }
    MimeHandlerService_AbortStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MimeHandlerService_AbortStream_Params_Data();
  ~MimeHandlerService_AbortStream_Params_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_AbortStream_Params_Data) == 8,
              "Bad sizeof(MimeHandlerService_AbortStream_Params_Data)");
class  MimeHandlerService_AbortStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MimeHandlerService_AbortStream_ResponseParams_Data));
      new (data()) MimeHandlerService_AbortStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MimeHandlerService_AbortStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MimeHandlerService_AbortStream_ResponseParams_Data>(index_);
    }
    MimeHandlerService_AbortStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MimeHandlerService_AbortStream_ResponseParams_Data();
  ~MimeHandlerService_AbortStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_AbortStream_ResponseParams_Data) == 8,
              "Bad sizeof(MimeHandlerService_AbortStream_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mime_handler
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_INTERNAL_H_