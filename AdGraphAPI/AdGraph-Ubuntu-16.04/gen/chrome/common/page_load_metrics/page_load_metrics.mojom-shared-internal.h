// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace page_load_metrics {
namespace mojom {
namespace internal {
class DocumentTiming_Data;
class PaintTiming_Data;
class ParseTiming_Data;
class StyleSheetTiming_Data;
class InteractiveTiming_Data;
class PageLoadTiming_Data;
class PageLoadMetadata_Data;
class PageLoadFeatures_Data;

#pragma pack(push, 1)
class  DocumentTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentTiming_Data));
      new (data()) DocumentTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentTiming_Data>(index_);
    }
    DocumentTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> dom_content_loaded_event_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> load_event_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_layout;

 private:
  DocumentTiming_Data();
  ~DocumentTiming_Data() = delete;
};
static_assert(sizeof(DocumentTiming_Data) == 32,
              "Bad sizeof(DocumentTiming_Data)");
// Used by DocumentTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DocumentTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DocumentTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DocumentTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DocumentTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DocumentTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PaintTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaintTiming_Data));
      new (data()) PaintTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaintTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaintTiming_Data>(index_);
    }
    PaintTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_paint;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_text_paint;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_image_paint;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_contentful_paint;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_meaningful_paint;

 private:
  PaintTiming_Data();
  ~PaintTiming_Data() = delete;
};
static_assert(sizeof(PaintTiming_Data) == 48,
              "Bad sizeof(PaintTiming_Data)");
// Used by PaintTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaintTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaintTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaintTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaintTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaintTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ParseTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ParseTiming_Data));
      new (data()) ParseTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ParseTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ParseTiming_Data>(index_);
    }
    ParseTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> parse_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> parse_stop;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> parse_blocked_on_script_load_duration;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> parse_blocked_on_script_load_from_document_write_duration;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> parse_blocked_on_script_execution_duration;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> parse_blocked_on_script_execution_from_document_write_duration;

 private:
  ParseTiming_Data();
  ~ParseTiming_Data() = delete;
};
static_assert(sizeof(ParseTiming_Data) == 56,
              "Bad sizeof(ParseTiming_Data)");
// Used by ParseTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ParseTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ParseTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ParseTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ParseTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ParseTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StyleSheetTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StyleSheetTiming_Data));
      new (data()) StyleSheetTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StyleSheetTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StyleSheetTiming_Data>(index_);
    }
    StyleSheetTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> author_style_sheet_parse_duration_before_fcp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> update_style_duration_before_fcp;

 private:
  StyleSheetTiming_Data();
  ~StyleSheetTiming_Data() = delete;
};
static_assert(sizeof(StyleSheetTiming_Data) == 24,
              "Bad sizeof(StyleSheetTiming_Data)");
// Used by StyleSheetTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StyleSheetTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StyleSheetTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StyleSheetTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StyleSheetTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StyleSheetTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  InteractiveTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InteractiveTiming_Data));
      new (data()) InteractiveTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InteractiveTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InteractiveTiming_Data>(index_);
    }
    InteractiveTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> interactive;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> interactive_detection;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_invalidating_input;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_input_delay;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> first_input_timestamp;

 private:
  InteractiveTiming_Data();
  ~InteractiveTiming_Data() = delete;
};
static_assert(sizeof(InteractiveTiming_Data) == 48,
              "Bad sizeof(InteractiveTiming_Data)");
// Used by InteractiveTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct InteractiveTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  InteractiveTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~InteractiveTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    InteractiveTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    InteractiveTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PageLoadTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageLoadTiming_Data));
      new (data()) PageLoadTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageLoadTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageLoadTiming_Data>(index_);
    }
    PageLoadTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> navigation_start;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> response_start;
  mojo::internal::Pointer<internal::DocumentTiming_Data> document_timing;
  mojo::internal::Pointer<internal::InteractiveTiming_Data> interactive_timing;
  mojo::internal::Pointer<internal::PaintTiming_Data> paint_timing;
  mojo::internal::Pointer<internal::ParseTiming_Data> parse_timing;
  mojo::internal::Pointer<internal::StyleSheetTiming_Data> style_sheet_timing;

 private:
  PageLoadTiming_Data();
  ~PageLoadTiming_Data() = delete;
};
static_assert(sizeof(PageLoadTiming_Data) == 64,
              "Bad sizeof(PageLoadTiming_Data)");
// Used by PageLoadTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PageLoadTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PageLoadTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PageLoadTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PageLoadTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PageLoadTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PageLoadMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageLoadMetadata_Data));
      new (data()) PageLoadMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageLoadMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageLoadMetadata_Data>(index_);
    }
    PageLoadMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t behavior_flags;
  uint8_t padfinal_[4];

 private:
  PageLoadMetadata_Data();
  ~PageLoadMetadata_Data() = delete;
};
static_assert(sizeof(PageLoadMetadata_Data) == 16,
              "Bad sizeof(PageLoadMetadata_Data)");
// Used by PageLoadMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PageLoadMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PageLoadMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PageLoadMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PageLoadMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PageLoadMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PageLoadFeatures_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageLoadFeatures_Data));
      new (data()) PageLoadFeatures_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageLoadFeatures_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageLoadFeatures_Data>(index_);
    }
    PageLoadFeatures_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> features;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> css_properties;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> animated_css_properties;

 private:
  PageLoadFeatures_Data();
  ~PageLoadFeatures_Data() = delete;
};
static_assert(sizeof(PageLoadFeatures_Data) == 32,
              "Bad sizeof(PageLoadFeatures_Data)");
// Used by PageLoadFeatures::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PageLoadFeatures_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PageLoadFeatures_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PageLoadFeatures_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PageLoadFeatures_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PageLoadFeatures_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PageLoadMetrics_UpdateTiming_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageLoadMetrics_UpdateTiming_Params_Data));
      new (data()) PageLoadMetrics_UpdateTiming_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageLoadMetrics_UpdateTiming_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageLoadMetrics_UpdateTiming_Params_Data>(index_);
    }
    PageLoadMetrics_UpdateTiming_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PageLoadTiming_Data> page_load_timing;
  mojo::internal::Pointer<internal::PageLoadMetadata_Data> page_load_metadata;
  mojo::internal::Pointer<internal::PageLoadFeatures_Data> new_features;

 private:
  PageLoadMetrics_UpdateTiming_Params_Data();
  ~PageLoadMetrics_UpdateTiming_Params_Data() = delete;
};
static_assert(sizeof(PageLoadMetrics_UpdateTiming_Params_Data) == 32,
              "Bad sizeof(PageLoadMetrics_UpdateTiming_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace page_load_metrics

#endif  // CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_INTERNAL_H_