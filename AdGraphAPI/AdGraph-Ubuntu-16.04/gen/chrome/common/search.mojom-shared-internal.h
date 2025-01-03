// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SEARCH_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_SEARCH_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace chrome {
namespace mojom {
namespace internal {
using NTPTileImpression_Data = mojo::native::internal::NativeStruct_Data;
using InstantMostVisitedItem_Data = mojo::native::internal::NativeStruct_Data;
using ThemeBackgroundInfo_Data = mojo::native::internal::NativeStruct_Data;
using NTPLoggingEventType_Data =
    mojo::internal::NativeEnum_Data;
using OmniboxFocusState_Data =
    mojo::internal::NativeEnum_Data;
using OmniboxFocusChangeReason_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  EmbeddedSearchConnector_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearchConnector_Connect_Params_Data));
      new (data()) EmbeddedSearchConnector_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearchConnector_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearchConnector_Connect_Params_Data>(index_);
    }
    EmbeddedSearchConnector_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data embedded_search;
  mojo::internal::AssociatedInterface_Data client;
  uint8_t padfinal_[4];

 private:
  EmbeddedSearchConnector_Connect_Params_Data();
  ~EmbeddedSearchConnector_Connect_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearchConnector_Connect_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearchConnector_Connect_Params_Data)");
class  EmbeddedSearch_FocusOmnibox_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_FocusOmnibox_Params_Data));
      new (data()) EmbeddedSearch_FocusOmnibox_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_FocusOmnibox_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_FocusOmnibox_Params_Data>(index_);
    }
    EmbeddedSearch_FocusOmnibox_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  int32_t state;

 private:
  EmbeddedSearch_FocusOmnibox_Params_Data();
  ~EmbeddedSearch_FocusOmnibox_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_FocusOmnibox_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearch_FocusOmnibox_Params_Data)");
class  EmbeddedSearch_DeleteMostVisitedItem_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_DeleteMostVisitedItem_Params_Data));
      new (data()) EmbeddedSearch_DeleteMostVisitedItem_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_DeleteMostVisitedItem_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_DeleteMostVisitedItem_Params_Data>(index_);
    }
    EmbeddedSearch_DeleteMostVisitedItem_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  EmbeddedSearch_DeleteMostVisitedItem_Params_Data();
  ~EmbeddedSearch_DeleteMostVisitedItem_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_DeleteMostVisitedItem_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_DeleteMostVisitedItem_Params_Data)");
class  EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data));
      new (data()) EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data>(index_);
    }
    EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t padfinal_[4];

 private:
  EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data();
  ~EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data)");
class  EmbeddedSearch_UndoMostVisitedDeletion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_UndoMostVisitedDeletion_Params_Data));
      new (data()) EmbeddedSearch_UndoMostVisitedDeletion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_UndoMostVisitedDeletion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_UndoMostVisitedDeletion_Params_Data>(index_);
    }
    EmbeddedSearch_UndoMostVisitedDeletion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  EmbeddedSearch_UndoMostVisitedDeletion_Params_Data();
  ~EmbeddedSearch_UndoMostVisitedDeletion_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_UndoMostVisitedDeletion_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_UndoMostVisitedDeletion_Params_Data)");
class  EmbeddedSearch_LogEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_LogEvent_Params_Data));
      new (data()) EmbeddedSearch_LogEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_LogEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_LogEvent_Params_Data>(index_);
    }
    EmbeddedSearch_LogEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  int32_t event;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;

 private:
  EmbeddedSearch_LogEvent_Params_Data();
  ~EmbeddedSearch_LogEvent_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_LogEvent_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_LogEvent_Params_Data)");
class  EmbeddedSearch_LogMostVisitedImpression_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_LogMostVisitedImpression_Params_Data));
      new (data()) EmbeddedSearch_LogMostVisitedImpression_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_LogMostVisitedImpression_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_LogMostVisitedImpression_Params_Data>(index_);
    }
    EmbeddedSearch_LogMostVisitedImpression_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::NTPTileImpression_Data> impression;

 private:
  EmbeddedSearch_LogMostVisitedImpression_Params_Data();
  ~EmbeddedSearch_LogMostVisitedImpression_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_LogMostVisitedImpression_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_LogMostVisitedImpression_Params_Data)");
class  EmbeddedSearch_LogMostVisitedNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_LogMostVisitedNavigation_Params_Data));
      new (data()) EmbeddedSearch_LogMostVisitedNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_LogMostVisitedNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_LogMostVisitedNavigation_Params_Data>(index_);
    }
    EmbeddedSearch_LogMostVisitedNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::NTPTileImpression_Data> impression;

 private:
  EmbeddedSearch_LogMostVisitedNavigation_Params_Data();
  ~EmbeddedSearch_LogMostVisitedNavigation_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_LogMostVisitedNavigation_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_LogMostVisitedNavigation_Params_Data)");
class  EmbeddedSearch_PasteAndOpenDropdown_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_PasteAndOpenDropdown_Params_Data));
      new (data()) EmbeddedSearch_PasteAndOpenDropdown_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_PasteAndOpenDropdown_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_PasteAndOpenDropdown_Params_Data>(index_);
    }
    EmbeddedSearch_PasteAndOpenDropdown_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text_to_be_pasted;

 private:
  EmbeddedSearch_PasteAndOpenDropdown_Params_Data();
  ~EmbeddedSearch_PasteAndOpenDropdown_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_PasteAndOpenDropdown_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_PasteAndOpenDropdown_Params_Data)");
class  EmbeddedSearch_HistorySyncCheck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_HistorySyncCheck_Params_Data));
      new (data()) EmbeddedSearch_HistorySyncCheck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_HistorySyncCheck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_HistorySyncCheck_Params_Data>(index_);
    }
    EmbeddedSearch_HistorySyncCheck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t padfinal_[4];

 private:
  EmbeddedSearch_HistorySyncCheck_Params_Data();
  ~EmbeddedSearch_HistorySyncCheck_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_HistorySyncCheck_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearch_HistorySyncCheck_Params_Data)");
class  EmbeddedSearch_HistorySyncCheck_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_HistorySyncCheck_ResponseParams_Data));
      new (data()) EmbeddedSearch_HistorySyncCheck_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_HistorySyncCheck_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_HistorySyncCheck_ResponseParams_Data>(index_);
    }
    EmbeddedSearch_HistorySyncCheck_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t sync_history : 1;
  uint8_t padfinal_[7];

 private:
  EmbeddedSearch_HistorySyncCheck_ResponseParams_Data();
  ~EmbeddedSearch_HistorySyncCheck_ResponseParams_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_HistorySyncCheck_ResponseParams_Data) == 16,
              "Bad sizeof(EmbeddedSearch_HistorySyncCheck_ResponseParams_Data)");
class  EmbeddedSearch_ChromeIdentityCheck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_ChromeIdentityCheck_Params_Data));
      new (data()) EmbeddedSearch_ChromeIdentityCheck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_ChromeIdentityCheck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_ChromeIdentityCheck_Params_Data>(index_);
    }
    EmbeddedSearch_ChromeIdentityCheck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> identity;

 private:
  EmbeddedSearch_ChromeIdentityCheck_Params_Data();
  ~EmbeddedSearch_ChromeIdentityCheck_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_ChromeIdentityCheck_Params_Data) == 24,
              "Bad sizeof(EmbeddedSearch_ChromeIdentityCheck_Params_Data)");
class  EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data));
      new (data()) EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data>(index_);
    }
    EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t identity_match : 1;
  uint8_t padfinal_[7];

 private:
  EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data();
  ~EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data() = delete;
};
static_assert(sizeof(EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data) == 16,
              "Bad sizeof(EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data)");
class  EmbeddedSearchClient_SetPageSequenceNumber_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearchClient_SetPageSequenceNumber_Params_Data));
      new (data()) EmbeddedSearchClient_SetPageSequenceNumber_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearchClient_SetPageSequenceNumber_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearchClient_SetPageSequenceNumber_Params_Data>(index_);
    }
    EmbeddedSearchClient_SetPageSequenceNumber_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_seq_no;
  uint8_t padfinal_[4];

 private:
  EmbeddedSearchClient_SetPageSequenceNumber_Params_Data();
  ~EmbeddedSearchClient_SetPageSequenceNumber_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearchClient_SetPageSequenceNumber_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearchClient_SetPageSequenceNumber_Params_Data)");
class  EmbeddedSearchClient_FocusChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearchClient_FocusChanged_Params_Data));
      new (data()) EmbeddedSearchClient_FocusChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearchClient_FocusChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearchClient_FocusChanged_Params_Data>(index_);
    }
    EmbeddedSearchClient_FocusChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t new_focus_state;
  int32_t reason;

 private:
  EmbeddedSearchClient_FocusChanged_Params_Data();
  ~EmbeddedSearchClient_FocusChanged_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearchClient_FocusChanged_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearchClient_FocusChanged_Params_Data)");
class  EmbeddedSearchClient_MostVisitedChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearchClient_MostVisitedChanged_Params_Data));
      new (data()) EmbeddedSearchClient_MostVisitedChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearchClient_MostVisitedChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearchClient_MostVisitedChanged_Params_Data>(index_);
    }
    EmbeddedSearchClient_MostVisitedChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::InstantMostVisitedItem_Data>>> items;

 private:
  EmbeddedSearchClient_MostVisitedChanged_Params_Data();
  ~EmbeddedSearchClient_MostVisitedChanged_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearchClient_MostVisitedChanged_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearchClient_MostVisitedChanged_Params_Data)");
class  EmbeddedSearchClient_SetInputInProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearchClient_SetInputInProgress_Params_Data));
      new (data()) EmbeddedSearchClient_SetInputInProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearchClient_SetInputInProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearchClient_SetInputInProgress_Params_Data>(index_);
    }
    EmbeddedSearchClient_SetInputInProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t input_in_progress : 1;
  uint8_t padfinal_[7];

 private:
  EmbeddedSearchClient_SetInputInProgress_Params_Data();
  ~EmbeddedSearchClient_SetInputInProgress_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearchClient_SetInputInProgress_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearchClient_SetInputInProgress_Params_Data)");
class  EmbeddedSearchClient_ThemeChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedSearchClient_ThemeChanged_Params_Data));
      new (data()) EmbeddedSearchClient_ThemeChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedSearchClient_ThemeChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedSearchClient_ThemeChanged_Params_Data>(index_);
    }
    EmbeddedSearchClient_ThemeChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ThemeBackgroundInfo_Data> value;

 private:
  EmbeddedSearchClient_ThemeChanged_Params_Data();
  ~EmbeddedSearchClient_ThemeChanged_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedSearchClient_ThemeChanged_Params_Data) == 16,
              "Bad sizeof(EmbeddedSearchClient_ThemeChanged_Params_Data)");
class  SearchBouncer_SetNewTabPageURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SearchBouncer_SetNewTabPageURL_Params_Data));
      new (data()) SearchBouncer_SetNewTabPageURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SearchBouncer_SetNewTabPageURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SearchBouncer_SetNewTabPageURL_Params_Data>(index_);
    }
    SearchBouncer_SetNewTabPageURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> new_tab_page_url;

 private:
  SearchBouncer_SetNewTabPageURL_Params_Data();
  ~SearchBouncer_SetNewTabPageURL_Params_Data() = delete;
};
static_assert(sizeof(SearchBouncer_SetNewTabPageURL_Params_Data) == 16,
              "Bad sizeof(SearchBouncer_SetNewTabPageURL_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_SEARCH_MOJOM_SHARED_INTERNAL_H_