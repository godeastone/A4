// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ReportingServiceProxy_QueueInterventionReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueInterventionReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueInterventionReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueInterventionReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueInterventionReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueInterventionReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  int32_t line_number;
  int32_t column_number;

 private:
  ReportingServiceProxy_QueueInterventionReport_Params_Data();
  ~ReportingServiceProxy_QueueInterventionReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueInterventionReport_Params_Data) == 40,
              "Bad sizeof(ReportingServiceProxy_QueueInterventionReport_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ReportingServiceProxy_QueueDeprecationReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueDeprecationReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueDeprecationReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueDeprecationReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueDeprecationReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueDeprecationReport_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> anticipatedRemoval;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  int32_t line_number;
  int32_t column_number;

 private:
  ReportingServiceProxy_QueueDeprecationReport_Params_Data();
  ~ReportingServiceProxy_QueueDeprecationReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueDeprecationReport_Params_Data) == 56,
              "Bad sizeof(ReportingServiceProxy_QueueDeprecationReport_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ReportingServiceProxy_QueueCspViolationReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReportingServiceProxy_QueueCspViolationReport_Params_Data));
      new (data()) ReportingServiceProxy_QueueCspViolationReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReportingServiceProxy_QueueCspViolationReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReportingServiceProxy_QueueCspViolationReport_Params_Data>(index_);
    }
    ReportingServiceProxy_QueueCspViolationReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> group;
  mojo::internal::Pointer<mojo::internal::String_Data> document_uri;
  mojo::internal::Pointer<mojo::internal::String_Data> referrer;
  mojo::internal::Pointer<mojo::internal::String_Data> violated_directive;
  mojo::internal::Pointer<mojo::internal::String_Data> effective_directive;
  mojo::internal::Pointer<mojo::internal::String_Data> original_policy;
  mojo::internal::Pointer<mojo::internal::String_Data> disposition;
  mojo::internal::Pointer<mojo::internal::String_Data> blocked_uri;
  int32_t line_number;
  int32_t column_number;
  mojo::internal::Pointer<mojo::internal::String_Data> source_file;
  int32_t status_code;
  uint8_t pad12_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> script_sample;

 private:
  ReportingServiceProxy_QueueCspViolationReport_Params_Data();
  ~ReportingServiceProxy_QueueCspViolationReport_Params_Data() = delete;
};
static_assert(sizeof(ReportingServiceProxy_QueueCspViolationReport_Params_Data) == 112,
              "Bad sizeof(ReportingServiceProxy_QueueCspViolationReport_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_SHARED_INTERNAL_H_