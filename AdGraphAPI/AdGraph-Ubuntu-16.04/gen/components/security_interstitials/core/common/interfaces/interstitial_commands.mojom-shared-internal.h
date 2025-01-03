// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_INTERNAL_H_

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
namespace security_interstitials {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  InterstitialCommands_DontProceed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_DontProceed_Params_Data));
      new (data()) InterstitialCommands_DontProceed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_DontProceed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_DontProceed_Params_Data>(index_);
    }
    InterstitialCommands_DontProceed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_DontProceed_Params_Data();
  ~InterstitialCommands_DontProceed_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_DontProceed_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_DontProceed_Params_Data)");
class  InterstitialCommands_Proceed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_Proceed_Params_Data));
      new (data()) InterstitialCommands_Proceed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_Proceed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_Proceed_Params_Data>(index_);
    }
    InterstitialCommands_Proceed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_Proceed_Params_Data();
  ~InterstitialCommands_Proceed_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_Proceed_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_Proceed_Params_Data)");
class  InterstitialCommands_ShowMoreSection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_ShowMoreSection_Params_Data));
      new (data()) InterstitialCommands_ShowMoreSection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_ShowMoreSection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_ShowMoreSection_Params_Data>(index_);
    }
    InterstitialCommands_ShowMoreSection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_ShowMoreSection_Params_Data();
  ~InterstitialCommands_ShowMoreSection_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_ShowMoreSection_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_ShowMoreSection_Params_Data)");
class  InterstitialCommands_OpenHelpCenter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_OpenHelpCenter_Params_Data));
      new (data()) InterstitialCommands_OpenHelpCenter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_OpenHelpCenter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_OpenHelpCenter_Params_Data>(index_);
    }
    InterstitialCommands_OpenHelpCenter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_OpenHelpCenter_Params_Data();
  ~InterstitialCommands_OpenHelpCenter_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_OpenHelpCenter_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_OpenHelpCenter_Params_Data)");
class  InterstitialCommands_OpenDiagnostic_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_OpenDiagnostic_Params_Data));
      new (data()) InterstitialCommands_OpenDiagnostic_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_OpenDiagnostic_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_OpenDiagnostic_Params_Data>(index_);
    }
    InterstitialCommands_OpenDiagnostic_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_OpenDiagnostic_Params_Data();
  ~InterstitialCommands_OpenDiagnostic_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_OpenDiagnostic_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_OpenDiagnostic_Params_Data)");
class  InterstitialCommands_Reload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_Reload_Params_Data));
      new (data()) InterstitialCommands_Reload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_Reload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_Reload_Params_Data>(index_);
    }
    InterstitialCommands_Reload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_Reload_Params_Data();
  ~InterstitialCommands_Reload_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_Reload_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_Reload_Params_Data)");
class  InterstitialCommands_OpenDateSettings_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_OpenDateSettings_Params_Data));
      new (data()) InterstitialCommands_OpenDateSettings_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_OpenDateSettings_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_OpenDateSettings_Params_Data>(index_);
    }
    InterstitialCommands_OpenDateSettings_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_OpenDateSettings_Params_Data();
  ~InterstitialCommands_OpenDateSettings_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_OpenDateSettings_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_OpenDateSettings_Params_Data)");
class  InterstitialCommands_OpenLogin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_OpenLogin_Params_Data));
      new (data()) InterstitialCommands_OpenLogin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_OpenLogin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_OpenLogin_Params_Data>(index_);
    }
    InterstitialCommands_OpenLogin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_OpenLogin_Params_Data();
  ~InterstitialCommands_OpenLogin_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_OpenLogin_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_OpenLogin_Params_Data)");
class  InterstitialCommands_DoReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_DoReport_Params_Data));
      new (data()) InterstitialCommands_DoReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_DoReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_DoReport_Params_Data>(index_);
    }
    InterstitialCommands_DoReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_DoReport_Params_Data();
  ~InterstitialCommands_DoReport_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_DoReport_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_DoReport_Params_Data)");
class  InterstitialCommands_DontReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_DontReport_Params_Data));
      new (data()) InterstitialCommands_DontReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_DontReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_DontReport_Params_Data>(index_);
    }
    InterstitialCommands_DontReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_DontReport_Params_Data();
  ~InterstitialCommands_DontReport_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_DontReport_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_DontReport_Params_Data)");
class  InterstitialCommands_OpenReportingPrivacy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_OpenReportingPrivacy_Params_Data));
      new (data()) InterstitialCommands_OpenReportingPrivacy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_OpenReportingPrivacy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_OpenReportingPrivacy_Params_Data>(index_);
    }
    InterstitialCommands_OpenReportingPrivacy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_OpenReportingPrivacy_Params_Data();
  ~InterstitialCommands_OpenReportingPrivacy_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_OpenReportingPrivacy_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_OpenReportingPrivacy_Params_Data)");
class  InterstitialCommands_OpenWhitepaper_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_OpenWhitepaper_Params_Data));
      new (data()) InterstitialCommands_OpenWhitepaper_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_OpenWhitepaper_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_OpenWhitepaper_Params_Data>(index_);
    }
    InterstitialCommands_OpenWhitepaper_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_OpenWhitepaper_Params_Data();
  ~InterstitialCommands_OpenWhitepaper_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_OpenWhitepaper_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_OpenWhitepaper_Params_Data)");
class  InterstitialCommands_ReportPhishingError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterstitialCommands_ReportPhishingError_Params_Data));
      new (data()) InterstitialCommands_ReportPhishingError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterstitialCommands_ReportPhishingError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterstitialCommands_ReportPhishingError_Params_Data>(index_);
    }
    InterstitialCommands_ReportPhishingError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterstitialCommands_ReportPhishingError_Params_Data();
  ~InterstitialCommands_ReportPhishingError_Params_Data() = delete;
};
static_assert(sizeof(InterstitialCommands_ReportPhishingError_Params_Data) == 8,
              "Bad sizeof(InterstitialCommands_ReportPhishingError_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace security_interstitials

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_INTERNAL_H_