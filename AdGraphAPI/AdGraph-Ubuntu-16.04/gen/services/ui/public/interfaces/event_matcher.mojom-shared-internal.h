// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/events/mojo/keyboard_codes.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {
class KeyEventMatcher_Data;
class PointerKindMatcher_Data;
class PointerLocationMatcher_Data;
class EventTypeMatcher_Data;
class EventFlagsMatcher_Data;
class EventMatcher_Data;

#pragma pack(push, 1)
class  KeyEventMatcher_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyEventMatcher_Data));
      new (data()) KeyEventMatcher_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyEventMatcher_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyEventMatcher_Data>(index_);
    }
    KeyEventMatcher_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t keyboard_code;
  uint8_t padfinal_[4];

 private:
  KeyEventMatcher_Data();
  ~KeyEventMatcher_Data() = delete;
};
static_assert(sizeof(KeyEventMatcher_Data) == 16,
              "Bad sizeof(KeyEventMatcher_Data)");
// Used by KeyEventMatcher::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeyEventMatcher_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeyEventMatcher_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeyEventMatcher_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeyEventMatcher_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeyEventMatcher_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PointerKindMatcher_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PointerKindMatcher_Data));
      new (data()) PointerKindMatcher_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PointerKindMatcher_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PointerKindMatcher_Data>(index_);
    }
    PointerKindMatcher_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pointer_kind;
  uint8_t padfinal_[4];

 private:
  PointerKindMatcher_Data();
  ~PointerKindMatcher_Data() = delete;
};
static_assert(sizeof(PointerKindMatcher_Data) == 16,
              "Bad sizeof(PointerKindMatcher_Data)");
// Used by PointerKindMatcher::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PointerKindMatcher_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PointerKindMatcher_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PointerKindMatcher_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PointerKindMatcher_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PointerKindMatcher_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PointerLocationMatcher_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PointerLocationMatcher_Data));
      new (data()) PointerLocationMatcher_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PointerLocationMatcher_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PointerLocationMatcher_Data>(index_);
    }
    PointerLocationMatcher_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> region;

 private:
  PointerLocationMatcher_Data();
  ~PointerLocationMatcher_Data() = delete;
};
static_assert(sizeof(PointerLocationMatcher_Data) == 16,
              "Bad sizeof(PointerLocationMatcher_Data)");
// Used by PointerLocationMatcher::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PointerLocationMatcher_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PointerLocationMatcher_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PointerLocationMatcher_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PointerLocationMatcher_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PointerLocationMatcher_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EventTypeMatcher_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventTypeMatcher_Data));
      new (data()) EventTypeMatcher_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventTypeMatcher_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventTypeMatcher_Data>(index_);
    }
    EventTypeMatcher_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  EventTypeMatcher_Data();
  ~EventTypeMatcher_Data() = delete;
};
static_assert(sizeof(EventTypeMatcher_Data) == 16,
              "Bad sizeof(EventTypeMatcher_Data)");
// Used by EventTypeMatcher::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EventTypeMatcher_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EventTypeMatcher_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EventTypeMatcher_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EventTypeMatcher_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EventTypeMatcher_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EventFlagsMatcher_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventFlagsMatcher_Data));
      new (data()) EventFlagsMatcher_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventFlagsMatcher_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventFlagsMatcher_Data>(index_);
    }
    EventFlagsMatcher_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t flags;
  uint8_t padfinal_[4];

 private:
  EventFlagsMatcher_Data();
  ~EventFlagsMatcher_Data() = delete;
};
static_assert(sizeof(EventFlagsMatcher_Data) == 16,
              "Bad sizeof(EventFlagsMatcher_Data)");
// Used by EventFlagsMatcher::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EventFlagsMatcher_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EventFlagsMatcher_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EventFlagsMatcher_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EventFlagsMatcher_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EventFlagsMatcher_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EventMatcher_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EventMatcher_Data));
      new (data()) EventMatcher_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EventMatcher_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EventMatcher_Data>(index_);
    }
    EventMatcher_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t accelerator_phase;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::EventTypeMatcher_Data> type_matcher;
  mojo::internal::Pointer<internal::EventFlagsMatcher_Data> flags_matcher;
  mojo::internal::Pointer<internal::EventFlagsMatcher_Data> ignore_flags_matcher;
  mojo::internal::Pointer<internal::KeyEventMatcher_Data> key_matcher;
  mojo::internal::Pointer<internal::PointerKindMatcher_Data> pointer_kind_matcher;
  mojo::internal::Pointer<internal::PointerLocationMatcher_Data> pointer_location_matcher;

 private:
  EventMatcher_Data();
  ~EventMatcher_Data() = delete;
};
static_assert(sizeof(EventMatcher_Data) == 64,
              "Bad sizeof(EventMatcher_Data)");
// Used by EventMatcher::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EventMatcher_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EventMatcher_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EventMatcher_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EventMatcher_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EventMatcher_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_SHARED_INTERNAL_H_