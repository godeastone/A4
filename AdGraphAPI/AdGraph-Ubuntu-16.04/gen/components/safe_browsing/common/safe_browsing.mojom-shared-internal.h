// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/resource_type.mojom-shared-internal.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace safe_browsing {
namespace mojom {
namespace internal {
class AttributeNameValue_Data;
class ThreatDOMDetailsNode_Data;

#pragma pack(push, 1)
class  AttributeNameValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AttributeNameValue_Data));
      new (data()) AttributeNameValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AttributeNameValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AttributeNameValue_Data>(index_);
    }
    AttributeNameValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  AttributeNameValue_Data();
  ~AttributeNameValue_Data() = delete;
};
static_assert(sizeof(AttributeNameValue_Data) == 24,
              "Bad sizeof(AttributeNameValue_Data)");
// Used by AttributeNameValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AttributeNameValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AttributeNameValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AttributeNameValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AttributeNameValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AttributeNameValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ThreatDOMDetailsNode_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ThreatDOMDetailsNode_Data));
      new (data()) ThreatDOMDetailsNode_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ThreatDOMDetailsNode_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ThreatDOMDetailsNode_Data>(index_);
    }
    ThreatDOMDetailsNode_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t node_id;
  int32_t parent_node_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> tag_name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> parent;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> children;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> child_node_ids;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AttributeNameValue_Data>>> attributes;
  int32_t child_frame_routing_id;
  uint8_t padfinal_[4];

 private:
  ThreatDOMDetailsNode_Data();
  ~ThreatDOMDetailsNode_Data() = delete;
};
static_assert(sizeof(ThreatDOMDetailsNode_Data) == 72,
              "Bad sizeof(ThreatDOMDetailsNode_Data)");
// Used by ThreatDOMDetailsNode::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ThreatDOMDetailsNode_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ThreatDOMDetailsNode_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ThreatDOMDetailsNode_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ThreatDOMDetailsNode_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ThreatDOMDetailsNode_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SafeBrowsing_CreateCheckerAndCheck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeBrowsing_CreateCheckerAndCheck_Params_Data));
      new (data()) SafeBrowsing_CreateCheckerAndCheck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeBrowsing_CreateCheckerAndCheck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeBrowsing_CreateCheckerAndCheck_Params_Data>(index_);
    }
    SafeBrowsing_CreateCheckerAndCheck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  mojo::internal::Handle_Data request;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> headers;
  int32_t load_flags;
  int32_t resource_type;
  uint8_t has_user_gesture : 1;
  uint8_t originated_from_service_worker : 1;
  uint8_t padfinal_[7];

 private:
  SafeBrowsing_CreateCheckerAndCheck_Params_Data();
  ~SafeBrowsing_CreateCheckerAndCheck_Params_Data() = delete;
};
static_assert(sizeof(SafeBrowsing_CreateCheckerAndCheck_Params_Data) == 56,
              "Bad sizeof(SafeBrowsing_CreateCheckerAndCheck_Params_Data)");
class  SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data));
      new (data()) SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data>(index_);
    }
    SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data slow_check_notifier;
  uint8_t proceed : 1;
  uint8_t showed_interstitial : 1;
  uint8_t padfinal_[3];

 private:
  SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data();
  ~SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data() = delete;
};
static_assert(sizeof(SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data) == 16,
              "Bad sizeof(SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data)");
class  SafeBrowsing_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeBrowsing_Clone_Params_Data));
      new (data()) SafeBrowsing_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeBrowsing_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeBrowsing_Clone_Params_Data>(index_);
    }
    SafeBrowsing_Clone_Params_Data* operator->() { return data(); }

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
  SafeBrowsing_Clone_Params_Data();
  ~SafeBrowsing_Clone_Params_Data() = delete;
};
static_assert(sizeof(SafeBrowsing_Clone_Params_Data) == 16,
              "Bad sizeof(SafeBrowsing_Clone_Params_Data)");
class  SafeBrowsingUrlChecker_CheckUrl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeBrowsingUrlChecker_CheckUrl_Params_Data));
      new (data()) SafeBrowsingUrlChecker_CheckUrl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeBrowsingUrlChecker_CheckUrl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeBrowsingUrlChecker_CheckUrl_Params_Data>(index_);
    }
    SafeBrowsingUrlChecker_CheckUrl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> method;

 private:
  SafeBrowsingUrlChecker_CheckUrl_Params_Data();
  ~SafeBrowsingUrlChecker_CheckUrl_Params_Data() = delete;
};
static_assert(sizeof(SafeBrowsingUrlChecker_CheckUrl_Params_Data) == 24,
              "Bad sizeof(SafeBrowsingUrlChecker_CheckUrl_Params_Data)");
class  SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data));
      new (data()) SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data>(index_);
    }
    SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data slow_check_notifier;
  uint8_t proceed : 1;
  uint8_t showed_interstitial : 1;
  uint8_t padfinal_[3];

 private:
  SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data();
  ~SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data() = delete;
};
static_assert(sizeof(SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data) == 16,
              "Bad sizeof(SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data)");
class  UrlCheckNotifier_OnCompleteCheck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UrlCheckNotifier_OnCompleteCheck_Params_Data));
      new (data()) UrlCheckNotifier_OnCompleteCheck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UrlCheckNotifier_OnCompleteCheck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UrlCheckNotifier_OnCompleteCheck_Params_Data>(index_);
    }
    UrlCheckNotifier_OnCompleteCheck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t proceed : 1;
  uint8_t showed_interstitial : 1;
  uint8_t padfinal_[7];

 private:
  UrlCheckNotifier_OnCompleteCheck_Params_Data();
  ~UrlCheckNotifier_OnCompleteCheck_Params_Data() = delete;
};
static_assert(sizeof(UrlCheckNotifier_OnCompleteCheck_Params_Data) == 16,
              "Bad sizeof(UrlCheckNotifier_OnCompleteCheck_Params_Data)");
class  ThreatReporter_GetThreatDOMDetails_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ThreatReporter_GetThreatDOMDetails_Params_Data));
      new (data()) ThreatReporter_GetThreatDOMDetails_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ThreatReporter_GetThreatDOMDetails_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ThreatReporter_GetThreatDOMDetails_Params_Data>(index_);
    }
    ThreatReporter_GetThreatDOMDetails_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ThreatReporter_GetThreatDOMDetails_Params_Data();
  ~ThreatReporter_GetThreatDOMDetails_Params_Data() = delete;
};
static_assert(sizeof(ThreatReporter_GetThreatDOMDetails_Params_Data) == 8,
              "Bad sizeof(ThreatReporter_GetThreatDOMDetails_Params_Data)");
class  ThreatReporter_GetThreatDOMDetails_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ThreatReporter_GetThreatDOMDetails_ResponseParams_Data));
      new (data()) ThreatReporter_GetThreatDOMDetails_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ThreatReporter_GetThreatDOMDetails_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ThreatReporter_GetThreatDOMDetails_ResponseParams_Data>(index_);
    }
    ThreatReporter_GetThreatDOMDetails_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ThreatDOMDetailsNode_Data>>> nodes;

 private:
  ThreatReporter_GetThreatDOMDetails_ResponseParams_Data();
  ~ThreatReporter_GetThreatDOMDetails_ResponseParams_Data() = delete;
};
static_assert(sizeof(ThreatReporter_GetThreatDOMDetails_ResponseParams_Data) == 16,
              "Bad sizeof(ThreatReporter_GetThreatDOMDetails_ResponseParams_Data)");
class  PhishingDetector_StartPhishingDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PhishingDetector_StartPhishingDetection_Params_Data));
      new (data()) PhishingDetector_StartPhishingDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PhishingDetector_StartPhishingDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PhishingDetector_StartPhishingDetection_Params_Data>(index_);
    }
    PhishingDetector_StartPhishingDetection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  PhishingDetector_StartPhishingDetection_Params_Data();
  ~PhishingDetector_StartPhishingDetection_Params_Data() = delete;
};
static_assert(sizeof(PhishingDetector_StartPhishingDetection_Params_Data) == 16,
              "Bad sizeof(PhishingDetector_StartPhishingDetection_Params_Data)");
class  PhishingDetectorClient_PhishingDetectionDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PhishingDetectorClient_PhishingDetectionDone_Params_Data));
      new (data()) PhishingDetectorClient_PhishingDetectionDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PhishingDetectorClient_PhishingDetectionDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PhishingDetectorClient_PhishingDetectionDone_Params_Data>(index_);
    }
    PhishingDetectorClient_PhishingDetectionDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> request_proto;

 private:
  PhishingDetectorClient_PhishingDetectionDone_Params_Data();
  ~PhishingDetectorClient_PhishingDetectionDone_Params_Data() = delete;
};
static_assert(sizeof(PhishingDetectorClient_PhishingDetectionDone_Params_Data) == 16,
              "Bad sizeof(PhishingDetectorClient_PhishingDetectionDone_Params_Data)");
class  PhishingModelSetter_SetPhishingModel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PhishingModelSetter_SetPhishingModel_Params_Data));
      new (data()) PhishingModelSetter_SetPhishingModel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PhishingModelSetter_SetPhishingModel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PhishingModelSetter_SetPhishingModel_Params_Data>(index_);
    }
    PhishingModelSetter_SetPhishingModel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> model;

 private:
  PhishingModelSetter_SetPhishingModel_Params_Data();
  ~PhishingModelSetter_SetPhishingModel_Params_Data() = delete;
};
static_assert(sizeof(PhishingModelSetter_SetPhishingModel_Params_Data) == 16,
              "Bad sizeof(PhishingModelSetter_SetPhishingModel_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace safe_browsing

#endif  // COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_INTERNAL_H_