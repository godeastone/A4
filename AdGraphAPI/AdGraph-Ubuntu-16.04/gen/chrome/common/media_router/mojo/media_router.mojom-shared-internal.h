// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "chrome/common/media_router/mojo/media_controller.mojom-shared-internal.h"
#include "chrome/common/media_router/mojo/media_status.mojom-shared-internal.h"
#include "media/mojo/interfaces/mirror_service_remoting.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "net/interfaces/ip_address.mojom-shared-internal.h"
#include "net/interfaces/ip_endpoint.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media_router {
namespace mojom {
namespace internal {
class MediaSink_Data;
class DialMediaSink_Data;
class CastMediaSink_Data;
class MediaRoute_Data;
class Issue_Data;
class RouteMessage_Data;
class SinkSearchCriteria_Data;
class MediaRouteProviderConfig_Data;
class MediaSinkExtraData_Data;

struct SinkIconType_Data {
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

struct RouteControllerType_Data {
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

struct RouteRequestResultCode_Data {
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
      case 9:
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

struct Issue_Severity_Data {
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

struct Issue_ActionType_Data {
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

struct RouteMessage_Type_Data {
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

struct MediaRouteProvider_Id_Data {
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

struct MediaRouter_SinkAvailability_Data {
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

struct MediaRouter_PresentationConnectionState_Data {
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

struct MediaRouter_PresentationConnectionCloseReason_Data {
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


class  MediaSinkExtraData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  MediaSinkExtraData_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~MediaSinkExtraData_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSinkExtraData_Data));
      new (data()) MediaSinkExtraData_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) MediaSinkExtraData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSinkExtraData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSinkExtraData_Data>(index_);
    }
    MediaSinkExtraData_Data* operator->() { return data(); }

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
    tag = static_cast<MediaSinkExtraData_Tag>(0);
    data.unknown = 0U;
  }

  enum class MediaSinkExtraData_Tag : uint32_t {

    DIAL_MEDIA_SINK,
    CAST_MEDIA_SINK,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::DialMediaSink_Data> f_dial_media_sink;
    mojo::internal::Pointer<internal::CastMediaSink_Data> f_cast_media_sink;
    uint64_t unknown;
  };

  uint32_t size;
  MediaSinkExtraData_Tag tag;
  Union_ data;
};
static_assert(sizeof(MediaSinkExtraData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(MediaSinkExtraData_Data)");
class  MediaSink_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSink_Data));
      new (data()) MediaSink_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSink_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSink_Data>(index_);
    }
    MediaSink_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;
  int32_t icon_type;
  int32_t provider_id;
  internal::MediaSinkExtraData_Data extra_data;

 private:
  MediaSink_Data();
  ~MediaSink_Data() = delete;
};
static_assert(sizeof(MediaSink_Data) == 64,
              "Bad sizeof(MediaSink_Data)");
// Used by MediaSink::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaSink_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaSink_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaSink_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaSink_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaSink_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DialMediaSink_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DialMediaSink_Data));
      new (data()) DialMediaSink_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DialMediaSink_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DialMediaSink_Data>(index_);
    }
    DialMediaSink_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPAddress_Data> ip_address;
  mojo::internal::Pointer<mojo::internal::String_Data> model_name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> app_url;

 private:
  DialMediaSink_Data();
  ~DialMediaSink_Data() = delete;
};
static_assert(sizeof(DialMediaSink_Data) == 32,
              "Bad sizeof(DialMediaSink_Data)");
// Used by DialMediaSink::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DialMediaSink_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DialMediaSink_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DialMediaSink_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DialMediaSink_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DialMediaSink_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CastMediaSink_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CastMediaSink_Data));
      new (data()) CastMediaSink_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CastMediaSink_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CastMediaSink_Data>(index_);
    }
    CastMediaSink_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::net::interfaces::internal::IPEndPoint_Data> ip_endpoint;
  mojo::internal::Pointer<mojo::internal::String_Data> model_name;
  uint8_t capabilities;
  uint8_t pad2_[3];
  int32_t cast_channel_id;

 private:
  CastMediaSink_Data();
  ~CastMediaSink_Data() = delete;
};
static_assert(sizeof(CastMediaSink_Data) == 32,
              "Bad sizeof(CastMediaSink_Data)");
// Used by CastMediaSink::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CastMediaSink_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CastMediaSink_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CastMediaSink_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CastMediaSink_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CastMediaSink_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaRoute_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRoute_Data));
      new (data()) MediaRoute_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRoute_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRoute_Data>(index_);
    }
    MediaRoute_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_route_id;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> media_sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  uint8_t is_local : 1;
  uint8_t for_display : 1;
  uint8_t is_incognito : 1;
  uint8_t is_local_presentation : 1;
  uint8_t pad8_[3];
  int32_t controller_type;

 private:
  MediaRoute_Data();
  ~MediaRoute_Data() = delete;
};
static_assert(sizeof(MediaRoute_Data) == 56,
              "Bad sizeof(MediaRoute_Data)");
// Used by MediaRoute::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaRoute_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaRoute_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaRoute_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaRoute_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaRoute_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Issue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Issue_Data));
      new (data()) Issue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Issue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Issue_Data>(index_);
    }
    Issue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;
  int32_t severity;
  uint8_t is_blocking : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  int32_t default_action;
  int32_t help_page_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> secondary_actions;

 private:
  Issue_Data();
  ~Issue_Data() = delete;
};
static_assert(sizeof(Issue_Data) == 56,
              "Bad sizeof(Issue_Data)");
// Used by Issue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Issue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Issue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Issue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Issue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Issue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RouteMessage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RouteMessage_Data));
      new (data()) RouteMessage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RouteMessage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RouteMessage_Data>(index_);
    }
    RouteMessage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  RouteMessage_Data();
  ~RouteMessage_Data() = delete;
};
static_assert(sizeof(RouteMessage_Data) == 32,
              "Bad sizeof(RouteMessage_Data)");
// Used by RouteMessage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RouteMessage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RouteMessage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RouteMessage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RouteMessage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RouteMessage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SinkSearchCriteria_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SinkSearchCriteria_Data));
      new (data()) SinkSearchCriteria_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SinkSearchCriteria_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SinkSearchCriteria_Data>(index_);
    }
    SinkSearchCriteria_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> input;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;

 private:
  SinkSearchCriteria_Data();
  ~SinkSearchCriteria_Data() = delete;
};
static_assert(sizeof(SinkSearchCriteria_Data) == 24,
              "Bad sizeof(SinkSearchCriteria_Data)");
// Used by SinkSearchCriteria::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SinkSearchCriteria_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SinkSearchCriteria_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SinkSearchCriteria_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SinkSearchCriteria_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SinkSearchCriteria_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaRouteProviderConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProviderConfig_Data));
      new (data()) MediaRouteProviderConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProviderConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProviderConfig_Data>(index_);
    }
    MediaRouteProviderConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable_dial_discovery : 1;
  uint8_t enable_cast_discovery : 1;
  uint8_t enable_dial_sink_query : 1;
  uint8_t enable_cast_sink_query : 1;
  uint8_t padfinal_[7];

 private:
  MediaRouteProviderConfig_Data();
  ~MediaRouteProviderConfig_Data() = delete;
};
static_assert(sizeof(MediaRouteProviderConfig_Data) == 16,
              "Bad sizeof(MediaRouteProviderConfig_Data)");
// Used by MediaRouteProviderConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaRouteProviderConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaRouteProviderConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaRouteProviderConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaRouteProviderConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaRouteProviderConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaRouteProvider_CreateRoute_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_CreateRoute_Params_Data));
      new (data()) MediaRouteProvider_CreateRoute_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_CreateRoute_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_CreateRoute_Params_Data>(index_);
    }
    MediaRouteProvider_CreateRoute_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> original_presentation_id;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t tab_id;
  uint8_t incognito : 1;
  uint8_t pad5_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  MediaRouteProvider_CreateRoute_Params_Data();
  ~MediaRouteProvider_CreateRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_CreateRoute_Params_Data) == 56,
              "Bad sizeof(MediaRouteProvider_CreateRoute_Params_Data)");
class  MediaRouteProvider_CreateRoute_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_CreateRoute_ResponseParams_Data));
      new (data()) MediaRouteProvider_CreateRoute_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_CreateRoute_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_CreateRoute_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_CreateRoute_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaRoute_Data> route;
  mojo::internal::Pointer<mojo::internal::String_Data> error_text;
  int32_t result_code;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_CreateRoute_ResponseParams_Data();
  ~MediaRouteProvider_CreateRoute_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_CreateRoute_ResponseParams_Data) == 32,
              "Bad sizeof(MediaRouteProvider_CreateRoute_ResponseParams_Data)");
class  MediaRouteProvider_JoinRoute_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_JoinRoute_Params_Data));
      new (data()) MediaRouteProvider_JoinRoute_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_JoinRoute_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_JoinRoute_Params_Data>(index_);
    }
    MediaRouteProvider_JoinRoute_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t tab_id;
  uint8_t incognito : 1;
  uint8_t pad4_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  MediaRouteProvider_JoinRoute_Params_Data();
  ~MediaRouteProvider_JoinRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_JoinRoute_Params_Data) == 48,
              "Bad sizeof(MediaRouteProvider_JoinRoute_Params_Data)");
class  MediaRouteProvider_JoinRoute_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_JoinRoute_ResponseParams_Data));
      new (data()) MediaRouteProvider_JoinRoute_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_JoinRoute_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_JoinRoute_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_JoinRoute_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaRoute_Data> route;
  mojo::internal::Pointer<mojo::internal::String_Data> error_text;
  int32_t result_code;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_JoinRoute_ResponseParams_Data();
  ~MediaRouteProvider_JoinRoute_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_JoinRoute_ResponseParams_Data) == 32,
              "Bad sizeof(MediaRouteProvider_JoinRoute_ResponseParams_Data)");
class  MediaRouteProvider_ConnectRouteByRouteId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_ConnectRouteByRouteId_Params_Data));
      new (data()) MediaRouteProvider_ConnectRouteByRouteId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_ConnectRouteByRouteId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_ConnectRouteByRouteId_Params_Data>(index_);
    }
    MediaRouteProvider_ConnectRouteByRouteId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;
  mojo::internal::Pointer<mojo::internal::String_Data> presentation_id;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t tab_id;
  uint8_t incognito : 1;
  uint8_t pad5_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  MediaRouteProvider_ConnectRouteByRouteId_Params_Data();
  ~MediaRouteProvider_ConnectRouteByRouteId_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ConnectRouteByRouteId_Params_Data) == 56,
              "Bad sizeof(MediaRouteProvider_ConnectRouteByRouteId_Params_Data)");
class  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data));
      new (data()) MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaRoute_Data> route;
  mojo::internal::Pointer<mojo::internal::String_Data> error_text;
  int32_t result_code;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data();
  ~MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data) == 32,
              "Bad sizeof(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data)");
class  MediaRouteProvider_TerminateRoute_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_TerminateRoute_Params_Data));
      new (data()) MediaRouteProvider_TerminateRoute_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_TerminateRoute_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_TerminateRoute_Params_Data>(index_);
    }
    MediaRouteProvider_TerminateRoute_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;

 private:
  MediaRouteProvider_TerminateRoute_Params_Data();
  ~MediaRouteProvider_TerminateRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_TerminateRoute_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_TerminateRoute_Params_Data)");
class  MediaRouteProvider_TerminateRoute_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_TerminateRoute_ResponseParams_Data));
      new (data()) MediaRouteProvider_TerminateRoute_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_TerminateRoute_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_TerminateRoute_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_TerminateRoute_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error_text;
  int32_t result_code;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_TerminateRoute_ResponseParams_Data();
  ~MediaRouteProvider_TerminateRoute_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_TerminateRoute_ResponseParams_Data) == 24,
              "Bad sizeof(MediaRouteProvider_TerminateRoute_ResponseParams_Data)");
class  MediaRouteProvider_SendRouteMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_SendRouteMessage_Params_Data));
      new (data()) MediaRouteProvider_SendRouteMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_SendRouteMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_SendRouteMessage_Params_Data>(index_);
    }
    MediaRouteProvider_SendRouteMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_route_id;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  MediaRouteProvider_SendRouteMessage_Params_Data();
  ~MediaRouteProvider_SendRouteMessage_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteMessage_Params_Data) == 24,
              "Bad sizeof(MediaRouteProvider_SendRouteMessage_Params_Data)");
class  MediaRouteProvider_SendRouteMessage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_SendRouteMessage_ResponseParams_Data));
      new (data()) MediaRouteProvider_SendRouteMessage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_SendRouteMessage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_SendRouteMessage_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_SendRouteMessage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t sent : 1;
  uint8_t padfinal_[7];

 private:
  MediaRouteProvider_SendRouteMessage_ResponseParams_Data();
  ~MediaRouteProvider_SendRouteMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteMessage_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouteProvider_SendRouteMessage_ResponseParams_Data)");
class  MediaRouteProvider_SendRouteBinaryMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_SendRouteBinaryMessage_Params_Data));
      new (data()) MediaRouteProvider_SendRouteBinaryMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_SendRouteBinaryMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_SendRouteBinaryMessage_Params_Data>(index_);
    }
    MediaRouteProvider_SendRouteBinaryMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_route_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  MediaRouteProvider_SendRouteBinaryMessage_Params_Data();
  ~MediaRouteProvider_SendRouteBinaryMessage_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteBinaryMessage_Params_Data) == 24,
              "Bad sizeof(MediaRouteProvider_SendRouteBinaryMessage_Params_Data)");
class  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data));
      new (data()) MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t sent : 1;
  uint8_t padfinal_[7];

 private:
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data();
  ~MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data)");
class  MediaRouteProvider_StartObservingMediaSinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_StartObservingMediaSinks_Params_Data));
      new (data()) MediaRouteProvider_StartObservingMediaSinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_StartObservingMediaSinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_StartObservingMediaSinks_Params_Data>(index_);
    }
    MediaRouteProvider_StartObservingMediaSinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;

 private:
  MediaRouteProvider_StartObservingMediaSinks_Params_Data();
  ~MediaRouteProvider_StartObservingMediaSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StartObservingMediaSinks_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StartObservingMediaSinks_Params_Data)");
class  MediaRouteProvider_StopObservingMediaSinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_StopObservingMediaSinks_Params_Data));
      new (data()) MediaRouteProvider_StopObservingMediaSinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_StopObservingMediaSinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_StopObservingMediaSinks_Params_Data>(index_);
    }
    MediaRouteProvider_StopObservingMediaSinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;

 private:
  MediaRouteProvider_StopObservingMediaSinks_Params_Data();
  ~MediaRouteProvider_StopObservingMediaSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StopObservingMediaSinks_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StopObservingMediaSinks_Params_Data)");
class  MediaRouteProvider_StartObservingMediaRoutes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_StartObservingMediaRoutes_Params_Data));
      new (data()) MediaRouteProvider_StartObservingMediaRoutes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_StartObservingMediaRoutes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_StartObservingMediaRoutes_Params_Data>(index_);
    }
    MediaRouteProvider_StartObservingMediaRoutes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;

 private:
  MediaRouteProvider_StartObservingMediaRoutes_Params_Data();
  ~MediaRouteProvider_StartObservingMediaRoutes_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StartObservingMediaRoutes_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StartObservingMediaRoutes_Params_Data)");
class  MediaRouteProvider_StopObservingMediaRoutes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_StopObservingMediaRoutes_Params_Data));
      new (data()) MediaRouteProvider_StopObservingMediaRoutes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_StopObservingMediaRoutes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_StopObservingMediaRoutes_Params_Data>(index_);
    }
    MediaRouteProvider_StopObservingMediaRoutes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;

 private:
  MediaRouteProvider_StopObservingMediaRoutes_Params_Data();
  ~MediaRouteProvider_StopObservingMediaRoutes_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StopObservingMediaRoutes_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StopObservingMediaRoutes_Params_Data)");
class  MediaRouteProvider_StartListeningForRouteMessages_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_StartListeningForRouteMessages_Params_Data));
      new (data()) MediaRouteProvider_StartListeningForRouteMessages_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_StartListeningForRouteMessages_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_StartListeningForRouteMessages_Params_Data>(index_);
    }
    MediaRouteProvider_StartListeningForRouteMessages_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;

 private:
  MediaRouteProvider_StartListeningForRouteMessages_Params_Data();
  ~MediaRouteProvider_StartListeningForRouteMessages_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StartListeningForRouteMessages_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StartListeningForRouteMessages_Params_Data)");
class  MediaRouteProvider_StopListeningForRouteMessages_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_StopListeningForRouteMessages_Params_Data));
      new (data()) MediaRouteProvider_StopListeningForRouteMessages_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_StopListeningForRouteMessages_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_StopListeningForRouteMessages_Params_Data>(index_);
    }
    MediaRouteProvider_StopListeningForRouteMessages_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;

 private:
  MediaRouteProvider_StopListeningForRouteMessages_Params_Data();
  ~MediaRouteProvider_StopListeningForRouteMessages_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StopListeningForRouteMessages_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StopListeningForRouteMessages_Params_Data)");
class  MediaRouteProvider_DetachRoute_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_DetachRoute_Params_Data));
      new (data()) MediaRouteProvider_DetachRoute_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_DetachRoute_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_DetachRoute_Params_Data>(index_);
    }
    MediaRouteProvider_DetachRoute_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;

 private:
  MediaRouteProvider_DetachRoute_Params_Data();
  ~MediaRouteProvider_DetachRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_DetachRoute_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_DetachRoute_Params_Data)");
class  MediaRouteProvider_EnableMdnsDiscovery_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_EnableMdnsDiscovery_Params_Data));
      new (data()) MediaRouteProvider_EnableMdnsDiscovery_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_EnableMdnsDiscovery_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_EnableMdnsDiscovery_Params_Data>(index_);
    }
    MediaRouteProvider_EnableMdnsDiscovery_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaRouteProvider_EnableMdnsDiscovery_Params_Data();
  ~MediaRouteProvider_EnableMdnsDiscovery_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_EnableMdnsDiscovery_Params_Data) == 8,
              "Bad sizeof(MediaRouteProvider_EnableMdnsDiscovery_Params_Data)");
class  MediaRouteProvider_UpdateMediaSinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_UpdateMediaSinks_Params_Data));
      new (data()) MediaRouteProvider_UpdateMediaSinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_UpdateMediaSinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_UpdateMediaSinks_Params_Data>(index_);
    }
    MediaRouteProvider_UpdateMediaSinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;

 private:
  MediaRouteProvider_UpdateMediaSinks_Params_Data();
  ~MediaRouteProvider_UpdateMediaSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_UpdateMediaSinks_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_UpdateMediaSinks_Params_Data)");
class  MediaRouteProvider_SearchSinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_SearchSinks_Params_Data));
      new (data()) MediaRouteProvider_SearchSinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_SearchSinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_SearchSinks_Params_Data>(index_);
    }
    MediaRouteProvider_SearchSinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<internal::SinkSearchCriteria_Data> search_criteria;

 private:
  MediaRouteProvider_SearchSinks_Params_Data();
  ~MediaRouteProvider_SearchSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SearchSinks_Params_Data) == 32,
              "Bad sizeof(MediaRouteProvider_SearchSinks_Params_Data)");
class  MediaRouteProvider_SearchSinks_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_SearchSinks_ResponseParams_Data));
      new (data()) MediaRouteProvider_SearchSinks_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_SearchSinks_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_SearchSinks_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_SearchSinks_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;

 private:
  MediaRouteProvider_SearchSinks_ResponseParams_Data();
  ~MediaRouteProvider_SearchSinks_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SearchSinks_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouteProvider_SearchSinks_ResponseParams_Data)");
class  MediaRouteProvider_ProvideSinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_ProvideSinks_Params_Data));
      new (data()) MediaRouteProvider_ProvideSinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_ProvideSinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_ProvideSinks_Params_Data>(index_);
    }
    MediaRouteProvider_ProvideSinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> provider_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaSink_Data>>> sinks;

 private:
  MediaRouteProvider_ProvideSinks_Params_Data();
  ~MediaRouteProvider_ProvideSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ProvideSinks_Params_Data) == 24,
              "Bad sizeof(MediaRouteProvider_ProvideSinks_Params_Data)");
class  MediaRouteProvider_CreateMediaRouteController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_CreateMediaRouteController_Params_Data));
      new (data()) MediaRouteProvider_CreateMediaRouteController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_CreateMediaRouteController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_CreateMediaRouteController_Params_Data>(index_);
    }
    MediaRouteProvider_CreateMediaRouteController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;
  mojo::internal::Handle_Data media_controller;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_CreateMediaRouteController_Params_Data();
  ~MediaRouteProvider_CreateMediaRouteController_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_CreateMediaRouteController_Params_Data) == 32,
              "Bad sizeof(MediaRouteProvider_CreateMediaRouteController_Params_Data)");
class  MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data));
      new (data()) MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data>(index_);
    }
    MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data* operator->() { return data(); }

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
  MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data();
  ~MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouteProvider_CreateMediaRouteController_ResponseParams_Data)");
class  MediaRouter_RegisterMediaRouteProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_RegisterMediaRouteProvider_Params_Data));
      new (data()) MediaRouter_RegisterMediaRouteProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_RegisterMediaRouteProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_RegisterMediaRouteProvider_Params_Data>(index_);
    }
    MediaRouter_RegisterMediaRouteProvider_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  mojo::internal::Interface_Data media_router_provider;
  uint8_t padfinal_[4];

 private:
  MediaRouter_RegisterMediaRouteProvider_Params_Data();
  ~MediaRouter_RegisterMediaRouteProvider_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_RegisterMediaRouteProvider_Params_Data) == 24,
              "Bad sizeof(MediaRouter_RegisterMediaRouteProvider_Params_Data)");
class  MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data));
      new (data()) MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data>(index_);
    }
    MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instance_id;
  mojo::internal::Pointer<internal::MediaRouteProviderConfig_Data> config;

 private:
  MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data();
  ~MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data) == 24,
              "Bad sizeof(MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data)");
class  MediaRouter_OnSinksReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnSinksReceived_Params_Data));
      new (data()) MediaRouter_OnSinksReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnSinksReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnSinksReceived_Params_Data>(index_);
    }
    MediaRouter_OnSinksReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaSink_Data>>> sinks;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>>> origins;

 private:
  MediaRouter_OnSinksReceived_Params_Data();
  ~MediaRouter_OnSinksReceived_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnSinksReceived_Params_Data) == 40,
              "Bad sizeof(MediaRouter_OnSinksReceived_Params_Data)");
class  MediaRouter_OnIssue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnIssue_Params_Data));
      new (data()) MediaRouter_OnIssue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnIssue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnIssue_Params_Data>(index_);
    }
    MediaRouter_OnIssue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Issue_Data> issue;

 private:
  MediaRouter_OnIssue_Params_Data();
  ~MediaRouter_OnIssue_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnIssue_Params_Data) == 16,
              "Bad sizeof(MediaRouter_OnIssue_Params_Data)");
class  MediaRouter_OnRoutesUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnRoutesUpdated_Params_Data));
      new (data()) MediaRouter_OnRoutesUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnRoutesUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnRoutesUpdated_Params_Data>(index_);
    }
    MediaRouter_OnRoutesUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaRoute_Data>>> routes;
  mojo::internal::Pointer<mojo::internal::String_Data> media_source;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> joinable_route_ids;

 private:
  MediaRouter_OnRoutesUpdated_Params_Data();
  ~MediaRouter_OnRoutesUpdated_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnRoutesUpdated_Params_Data) == 40,
              "Bad sizeof(MediaRouter_OnRoutesUpdated_Params_Data)");
class  MediaRouter_OnSinkAvailabilityUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnSinkAvailabilityUpdated_Params_Data));
      new (data()) MediaRouter_OnSinkAvailabilityUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnSinkAvailabilityUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnSinkAvailabilityUpdated_Params_Data>(index_);
    }
    MediaRouter_OnSinkAvailabilityUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  int32_t availability;

 private:
  MediaRouter_OnSinkAvailabilityUpdated_Params_Data();
  ~MediaRouter_OnSinkAvailabilityUpdated_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnSinkAvailabilityUpdated_Params_Data) == 16,
              "Bad sizeof(MediaRouter_OnSinkAvailabilityUpdated_Params_Data)");
class  MediaRouter_OnPresentationConnectionStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnPresentationConnectionStateChanged_Params_Data));
      new (data()) MediaRouter_OnPresentationConnectionStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnPresentationConnectionStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnPresentationConnectionStateChanged_Params_Data>(index_);
    }
    MediaRouter_OnPresentationConnectionStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  MediaRouter_OnPresentationConnectionStateChanged_Params_Data();
  ~MediaRouter_OnPresentationConnectionStateChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnPresentationConnectionStateChanged_Params_Data) == 24,
              "Bad sizeof(MediaRouter_OnPresentationConnectionStateChanged_Params_Data)");
class  MediaRouter_OnPresentationConnectionClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnPresentationConnectionClosed_Params_Data));
      new (data()) MediaRouter_OnPresentationConnectionClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnPresentationConnectionClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnPresentationConnectionClosed_Params_Data>(index_);
    }
    MediaRouter_OnPresentationConnectionClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;
  int32_t reason;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  MediaRouter_OnPresentationConnectionClosed_Params_Data();
  ~MediaRouter_OnPresentationConnectionClosed_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnPresentationConnectionClosed_Params_Data) == 32,
              "Bad sizeof(MediaRouter_OnPresentationConnectionClosed_Params_Data)");
class  MediaRouter_OnRouteMessagesReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnRouteMessagesReceived_Params_Data));
      new (data()) MediaRouter_OnRouteMessagesReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnRouteMessagesReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnRouteMessagesReceived_Params_Data>(index_);
    }
    MediaRouter_OnRouteMessagesReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> route_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RouteMessage_Data>>> messages;

 private:
  MediaRouter_OnRouteMessagesReceived_Params_Data();
  ~MediaRouter_OnRouteMessagesReceived_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnRouteMessagesReceived_Params_Data) == 24,
              "Bad sizeof(MediaRouter_OnRouteMessagesReceived_Params_Data)");
class  MediaRouter_OnMediaRemoterCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_OnMediaRemoterCreated_Params_Data));
      new (data()) MediaRouter_OnMediaRemoterCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_OnMediaRemoterCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_OnMediaRemoterCreated_Params_Data>(index_);
    }
    MediaRouter_OnMediaRemoterCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t tab_id;
  mojo::internal::Interface_Data remoter;
  mojo::internal::Handle_Data remoting_source;

 private:
  MediaRouter_OnMediaRemoterCreated_Params_Data();
  ~MediaRouter_OnMediaRemoterCreated_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnMediaRemoterCreated_Params_Data) == 24,
              "Bad sizeof(MediaRouter_OnMediaRemoterCreated_Params_Data)");
class  MediaRouter_GetMediaSinkServiceStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_GetMediaSinkServiceStatus_Params_Data));
      new (data()) MediaRouter_GetMediaSinkServiceStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_GetMediaSinkServiceStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_GetMediaSinkServiceStatus_Params_Data>(index_);
    }
    MediaRouter_GetMediaSinkServiceStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaRouter_GetMediaSinkServiceStatus_Params_Data();
  ~MediaRouter_GetMediaSinkServiceStatus_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_GetMediaSinkServiceStatus_Params_Data) == 8,
              "Bad sizeof(MediaRouter_GetMediaSinkServiceStatus_Params_Data)");
class  MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data));
      new (data()) MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data>(index_);
    }
    MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> status;

 private:
  MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data();
  ~MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouter_GetMediaSinkServiceStatus_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_INTERNAL_H_