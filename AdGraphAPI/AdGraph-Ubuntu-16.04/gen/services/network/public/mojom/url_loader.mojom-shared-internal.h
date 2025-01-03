// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
using URLRequest_Data = mojo::native::internal::NativeStruct_Data;
using URLResponseHead_Data = mojo::native::internal::NativeStruct_Data;
using URLRequestRedirectInfo_Data = mojo::native::internal::NativeStruct_Data;
using CORSErrorStatus_Data = mojo::native::internal::NativeStruct_Data;
using URLLoaderCompletionStatus_Data = mojo::native::internal::NativeStruct_Data;
class URLLoaderClientEndpoints_Data;

struct RequestPriority_Data {
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
class  URLLoaderClientEndpoints_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClientEndpoints_Data));
      new (data()) URLLoaderClientEndpoints_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClientEndpoints_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClientEndpoints_Data>(index_);
    }
    URLLoaderClientEndpoints_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data url_loader;
  mojo::internal::Handle_Data url_loader_client;
  uint8_t padfinal_[4];

 private:
  URLLoaderClientEndpoints_Data();
  ~URLLoaderClientEndpoints_Data() = delete;
};
static_assert(sizeof(URLLoaderClientEndpoints_Data) == 24,
              "Bad sizeof(URLLoaderClientEndpoints_Data)");
// Used by URLLoaderClientEndpoints::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLLoaderClientEndpoints_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLLoaderClientEndpoints_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLLoaderClientEndpoints_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLLoaderClientEndpoints_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLLoaderClientEndpoints_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLLoader_FollowRedirect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_FollowRedirect_Params_Data));
      new (data()) URLLoader_FollowRedirect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_FollowRedirect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_FollowRedirect_Params_Data>(index_);
    }
    URLLoader_FollowRedirect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> modified_request_headers;

 private:
  URLLoader_FollowRedirect_Params_Data();
  ~URLLoader_FollowRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_FollowRedirect_Params_Data) == 16,
              "Bad sizeof(URLLoader_FollowRedirect_Params_Data)");
class  URLLoader_ProceedWithResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_ProceedWithResponse_Params_Data));
      new (data()) URLLoader_ProceedWithResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_ProceedWithResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_ProceedWithResponse_Params_Data>(index_);
    }
    URLLoader_ProceedWithResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_ProceedWithResponse_Params_Data();
  ~URLLoader_ProceedWithResponse_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_ProceedWithResponse_Params_Data) == 8,
              "Bad sizeof(URLLoader_ProceedWithResponse_Params_Data)");
class  URLLoader_SetPriority_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_SetPriority_Params_Data));
      new (data()) URLLoader_SetPriority_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_SetPriority_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_SetPriority_Params_Data>(index_);
    }
    URLLoader_SetPriority_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t priority;
  int32_t intra_priority_value;

 private:
  URLLoader_SetPriority_Params_Data();
  ~URLLoader_SetPriority_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_SetPriority_Params_Data) == 16,
              "Bad sizeof(URLLoader_SetPriority_Params_Data)");
class  URLLoader_PauseReadingBodyFromNet_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_PauseReadingBodyFromNet_Params_Data));
      new (data()) URLLoader_PauseReadingBodyFromNet_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_PauseReadingBodyFromNet_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_PauseReadingBodyFromNet_Params_Data>(index_);
    }
    URLLoader_PauseReadingBodyFromNet_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_PauseReadingBodyFromNet_Params_Data();
  ~URLLoader_PauseReadingBodyFromNet_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_PauseReadingBodyFromNet_Params_Data) == 8,
              "Bad sizeof(URLLoader_PauseReadingBodyFromNet_Params_Data)");
class  URLLoader_ResumeReadingBodyFromNet_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_ResumeReadingBodyFromNet_Params_Data));
      new (data()) URLLoader_ResumeReadingBodyFromNet_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_ResumeReadingBodyFromNet_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_ResumeReadingBodyFromNet_Params_Data>(index_);
    }
    URLLoader_ResumeReadingBodyFromNet_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_ResumeReadingBodyFromNet_Params_Data();
  ~URLLoader_ResumeReadingBodyFromNet_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_ResumeReadingBodyFromNet_Params_Data) == 8,
              "Bad sizeof(URLLoader_ResumeReadingBodyFromNet_Params_Data)");
class  URLLoaderClient_OnReceiveResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnReceiveResponse_Params_Data));
      new (data()) URLLoaderClient_OnReceiveResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnReceiveResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnReceiveResponse_Params_Data>(index_);
    }
    URLLoaderClient_OnReceiveResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::URLResponseHead_Data> head;
  mojo::internal::Interface_Data downloaded_file;

 private:
  URLLoaderClient_OnReceiveResponse_Params_Data();
  ~URLLoaderClient_OnReceiveResponse_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnReceiveResponse_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnReceiveResponse_Params_Data)");
class  URLLoaderClient_OnReceiveRedirect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnReceiveRedirect_Params_Data));
      new (data()) URLLoaderClient_OnReceiveRedirect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnReceiveRedirect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnReceiveRedirect_Params_Data>(index_);
    }
    URLLoaderClient_OnReceiveRedirect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::URLRequestRedirectInfo_Data> redirect_info;
  mojo::internal::Pointer<internal::URLResponseHead_Data> head;

 private:
  URLLoaderClient_OnReceiveRedirect_Params_Data();
  ~URLLoaderClient_OnReceiveRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnReceiveRedirect_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnReceiveRedirect_Params_Data)");
class  URLLoaderClient_OnDataDownloaded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnDataDownloaded_Params_Data));
      new (data()) URLLoaderClient_OnDataDownloaded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnDataDownloaded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnDataDownloaded_Params_Data>(index_);
    }
    URLLoaderClient_OnDataDownloaded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t data_length;
  int64_t encoded_length;

 private:
  URLLoaderClient_OnDataDownloaded_Params_Data();
  ~URLLoaderClient_OnDataDownloaded_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnDataDownloaded_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnDataDownloaded_Params_Data)");
class  URLLoaderClient_OnUploadProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnUploadProgress_Params_Data));
      new (data()) URLLoaderClient_OnUploadProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnUploadProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnUploadProgress_Params_Data>(index_);
    }
    URLLoaderClient_OnUploadProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t current_position;
  int64_t total_size;

 private:
  URLLoaderClient_OnUploadProgress_Params_Data();
  ~URLLoaderClient_OnUploadProgress_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnUploadProgress_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnUploadProgress_Params_Data)");
class  URLLoaderClient_OnUploadProgress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnUploadProgress_ResponseParams_Data));
      new (data()) URLLoaderClient_OnUploadProgress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnUploadProgress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnUploadProgress_ResponseParams_Data>(index_);
    }
    URLLoaderClient_OnUploadProgress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoaderClient_OnUploadProgress_ResponseParams_Data();
  ~URLLoaderClient_OnUploadProgress_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnUploadProgress_ResponseParams_Data) == 8,
              "Bad sizeof(URLLoaderClient_OnUploadProgress_ResponseParams_Data)");
class  URLLoaderClient_OnReceiveCachedMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnReceiveCachedMetadata_Params_Data));
      new (data()) URLLoaderClient_OnReceiveCachedMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnReceiveCachedMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnReceiveCachedMetadata_Params_Data>(index_);
    }
    URLLoaderClient_OnReceiveCachedMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  URLLoaderClient_OnReceiveCachedMetadata_Params_Data();
  ~URLLoaderClient_OnReceiveCachedMetadata_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnReceiveCachedMetadata_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnReceiveCachedMetadata_Params_Data)");
class  URLLoaderClient_OnTransferSizeUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnTransferSizeUpdated_Params_Data));
      new (data()) URLLoaderClient_OnTransferSizeUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnTransferSizeUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnTransferSizeUpdated_Params_Data>(index_);
    }
    URLLoaderClient_OnTransferSizeUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t transfer_size_diff;
  uint8_t padfinal_[4];

 private:
  URLLoaderClient_OnTransferSizeUpdated_Params_Data();
  ~URLLoaderClient_OnTransferSizeUpdated_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnTransferSizeUpdated_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnTransferSizeUpdated_Params_Data)");
class  URLLoaderClient_OnStartLoadingResponseBody_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnStartLoadingResponseBody_Params_Data));
      new (data()) URLLoaderClient_OnStartLoadingResponseBody_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnStartLoadingResponseBody_Params_Data>(index_);
    }
    URLLoaderClient_OnStartLoadingResponseBody_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data body;
  uint8_t padfinal_[4];

 private:
  URLLoaderClient_OnStartLoadingResponseBody_Params_Data();
  ~URLLoaderClient_OnStartLoadingResponseBody_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnStartLoadingResponseBody_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnStartLoadingResponseBody_Params_Data)");
class  URLLoaderClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnComplete_Params_Data));
      new (data()) URLLoaderClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnComplete_Params_Data>(index_);
    }
    URLLoaderClient_OnComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::URLLoaderCompletionStatus_Data> status;

 private:
  URLLoaderClient_OnComplete_Params_Data();
  ~URLLoaderClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnComplete_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnComplete_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_INTERNAL_H_