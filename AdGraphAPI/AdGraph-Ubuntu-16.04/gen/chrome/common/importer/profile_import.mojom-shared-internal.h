// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/autofill/content/common/autofill_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
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
using ImportedBookmarkEntry_Data = mojo::native::internal::NativeStruct_Data;
using ImporterAutofillFormDataEntry_Data = mojo::native::internal::NativeStruct_Data;
using SearchEngineInfo_Data = mojo::native::internal::NativeStruct_Data;
using ImporterURLRow_Data = mojo::native::internal::NativeStruct_Data;
using SourceProfile_Data = mojo::native::internal::NativeStruct_Data;
using FaviconUsageDataList_Data = mojo::native::internal::NativeStruct_Data;
using ImporterIE7PasswordInfo_Data = mojo::native::internal::NativeStruct_Data;
using ImportItem_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  ProfileImportObserver_OnImportStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnImportStart_Params_Data));
      new (data()) ProfileImportObserver_OnImportStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnImportStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnImportStart_Params_Data>(index_);
    }
    ProfileImportObserver_OnImportStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProfileImportObserver_OnImportStart_Params_Data();
  ~ProfileImportObserver_OnImportStart_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnImportStart_Params_Data) == 8,
              "Bad sizeof(ProfileImportObserver_OnImportStart_Params_Data)");
class  ProfileImportObserver_OnImportFinished_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnImportFinished_Params_Data));
      new (data()) ProfileImportObserver_OnImportFinished_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnImportFinished_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnImportFinished_Params_Data>(index_);
    }
    ProfileImportObserver_OnImportFinished_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t succeeded : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ProfileImportObserver_OnImportFinished_Params_Data();
  ~ProfileImportObserver_OnImportFinished_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnImportFinished_Params_Data) == 24,
              "Bad sizeof(ProfileImportObserver_OnImportFinished_Params_Data)");
class  ProfileImportObserver_OnImportItemStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnImportItemStart_Params_Data));
      new (data()) ProfileImportObserver_OnImportItemStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnImportItemStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnImportItemStart_Params_Data>(index_);
    }
    ProfileImportObserver_OnImportItemStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t item;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnImportItemStart_Params_Data();
  ~ProfileImportObserver_OnImportItemStart_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnImportItemStart_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnImportItemStart_Params_Data)");
class  ProfileImportObserver_OnImportItemFinished_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnImportItemFinished_Params_Data));
      new (data()) ProfileImportObserver_OnImportItemFinished_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnImportItemFinished_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnImportItemFinished_Params_Data>(index_);
    }
    ProfileImportObserver_OnImportItemFinished_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t item;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnImportItemFinished_Params_Data();
  ~ProfileImportObserver_OnImportItemFinished_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnImportItemFinished_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnImportItemFinished_Params_Data)");
class  ProfileImportObserver_OnHistoryImportStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnHistoryImportStart_Params_Data));
      new (data()) ProfileImportObserver_OnHistoryImportStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnHistoryImportStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnHistoryImportStart_Params_Data>(index_);
    }
    ProfileImportObserver_OnHistoryImportStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t total_history_rows_count;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnHistoryImportStart_Params_Data();
  ~ProfileImportObserver_OnHistoryImportStart_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnHistoryImportStart_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnHistoryImportStart_Params_Data)");
class  ProfileImportObserver_OnHistoryImportGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnHistoryImportGroup_Params_Data));
      new (data()) ProfileImportObserver_OnHistoryImportGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnHistoryImportGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnHistoryImportGroup_Params_Data>(index_);
    }
    ProfileImportObserver_OnHistoryImportGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ImporterURLRow_Data>>> history_rows_group;
  int32_t visit_source;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnHistoryImportGroup_Params_Data();
  ~ProfileImportObserver_OnHistoryImportGroup_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnHistoryImportGroup_Params_Data) == 24,
              "Bad sizeof(ProfileImportObserver_OnHistoryImportGroup_Params_Data)");
class  ProfileImportObserver_OnHomePageImportReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnHomePageImportReady_Params_Data));
      new (data()) ProfileImportObserver_OnHomePageImportReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnHomePageImportReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnHomePageImportReady_Params_Data>(index_);
    }
    ProfileImportObserver_OnHomePageImportReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> home_page;

 private:
  ProfileImportObserver_OnHomePageImportReady_Params_Data();
  ~ProfileImportObserver_OnHomePageImportReady_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnHomePageImportReady_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnHomePageImportReady_Params_Data)");
class  ProfileImportObserver_OnBookmarksImportStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnBookmarksImportStart_Params_Data));
      new (data()) ProfileImportObserver_OnBookmarksImportStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnBookmarksImportStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnBookmarksImportStart_Params_Data>(index_);
    }
    ProfileImportObserver_OnBookmarksImportStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> first_folder_name;
  uint32_t total_bookmarks_count;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnBookmarksImportStart_Params_Data();
  ~ProfileImportObserver_OnBookmarksImportStart_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnBookmarksImportStart_Params_Data) == 24,
              "Bad sizeof(ProfileImportObserver_OnBookmarksImportStart_Params_Data)");
class  ProfileImportObserver_OnBookmarksImportGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnBookmarksImportGroup_Params_Data));
      new (data()) ProfileImportObserver_OnBookmarksImportGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnBookmarksImportGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnBookmarksImportGroup_Params_Data>(index_);
    }
    ProfileImportObserver_OnBookmarksImportGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ImportedBookmarkEntry_Data>>> bookmarks_group;

 private:
  ProfileImportObserver_OnBookmarksImportGroup_Params_Data();
  ~ProfileImportObserver_OnBookmarksImportGroup_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnBookmarksImportGroup_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnBookmarksImportGroup_Params_Data)");
class  ProfileImportObserver_OnFaviconsImportStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnFaviconsImportStart_Params_Data));
      new (data()) ProfileImportObserver_OnFaviconsImportStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnFaviconsImportStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnFaviconsImportStart_Params_Data>(index_);
    }
    ProfileImportObserver_OnFaviconsImportStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t total_favicons_count;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnFaviconsImportStart_Params_Data();
  ~ProfileImportObserver_OnFaviconsImportStart_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnFaviconsImportStart_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnFaviconsImportStart_Params_Data)");
class  ProfileImportObserver_OnFaviconsImportGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnFaviconsImportGroup_Params_Data));
      new (data()) ProfileImportObserver_OnFaviconsImportGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnFaviconsImportGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnFaviconsImportGroup_Params_Data>(index_);
    }
    ProfileImportObserver_OnFaviconsImportGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FaviconUsageDataList_Data> favicons_group;

 private:
  ProfileImportObserver_OnFaviconsImportGroup_Params_Data();
  ~ProfileImportObserver_OnFaviconsImportGroup_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnFaviconsImportGroup_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnFaviconsImportGroup_Params_Data)");
class  ProfileImportObserver_OnPasswordFormImportReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnPasswordFormImportReady_Params_Data));
      new (data()) ProfileImportObserver_OnPasswordFormImportReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnPasswordFormImportReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnPasswordFormImportReady_Params_Data>(index_);
    }
    ProfileImportObserver_OnPasswordFormImportReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::autofill::mojom::internal::PasswordForm_Data> form;

 private:
  ProfileImportObserver_OnPasswordFormImportReady_Params_Data();
  ~ProfileImportObserver_OnPasswordFormImportReady_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnPasswordFormImportReady_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnPasswordFormImportReady_Params_Data)");
class  ProfileImportObserver_OnKeywordsImportReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnKeywordsImportReady_Params_Data));
      new (data()) ProfileImportObserver_OnKeywordsImportReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnKeywordsImportReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnKeywordsImportReady_Params_Data>(index_);
    }
    ProfileImportObserver_OnKeywordsImportReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SearchEngineInfo_Data>>> search_engines;
  uint8_t unique_on_host_and_path : 1;
  uint8_t padfinal_[7];

 private:
  ProfileImportObserver_OnKeywordsImportReady_Params_Data();
  ~ProfileImportObserver_OnKeywordsImportReady_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnKeywordsImportReady_Params_Data) == 24,
              "Bad sizeof(ProfileImportObserver_OnKeywordsImportReady_Params_Data)");
class  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data));
      new (data()) ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data>(index_);
    }
    ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> search_engine_data;

 private:
  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data();
  ~ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data)");
class  ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data));
      new (data()) ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data>(index_);
    }
    ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t total_autofill_form_data_entry_count;
  uint8_t padfinal_[4];

 private:
  ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data();
  ~ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data)");
class  ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data));
      new (data()) ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data>(index_);
    }
    ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ImporterAutofillFormDataEntry_Data>>> autofill_form_data_entry_group;

 private:
  ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data();
  ~ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data)");
class  ProfileImportObserver_OnIE7PasswordReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImportObserver_OnIE7PasswordReceived_Params_Data));
      new (data()) ProfileImportObserver_OnIE7PasswordReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImportObserver_OnIE7PasswordReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImportObserver_OnIE7PasswordReceived_Params_Data>(index_);
    }
    ProfileImportObserver_OnIE7PasswordReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ImporterIE7PasswordInfo_Data> importer_password_info;

 private:
  ProfileImportObserver_OnIE7PasswordReceived_Params_Data();
  ~ProfileImportObserver_OnIE7PasswordReceived_Params_Data() = delete;
};
static_assert(sizeof(ProfileImportObserver_OnIE7PasswordReceived_Params_Data) == 16,
              "Bad sizeof(ProfileImportObserver_OnIE7PasswordReceived_Params_Data)");
class  ProfileImport_StartImport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImport_StartImport_Params_Data));
      new (data()) ProfileImport_StartImport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImport_StartImport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImport_StartImport_Params_Data>(index_);
    }
    ProfileImport_StartImport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SourceProfile_Data> source_profile;
  uint16_t items;
  uint8_t pad1_[6];
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, mojo::internal::Pointer<mojo::internal::String_Data>>> localized_strings;
  mojo::internal::Interface_Data observer;

 private:
  ProfileImport_StartImport_Params_Data();
  ~ProfileImport_StartImport_Params_Data() = delete;
};
static_assert(sizeof(ProfileImport_StartImport_Params_Data) == 40,
              "Bad sizeof(ProfileImport_StartImport_Params_Data)");
class  ProfileImport_CancelImport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImport_CancelImport_Params_Data));
      new (data()) ProfileImport_CancelImport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImport_CancelImport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImport_CancelImport_Params_Data>(index_);
    }
    ProfileImport_CancelImport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProfileImport_CancelImport_Params_Data();
  ~ProfileImport_CancelImport_Params_Data() = delete;
};
static_assert(sizeof(ProfileImport_CancelImport_Params_Data) == 8,
              "Bad sizeof(ProfileImport_CancelImport_Params_Data)");
class  ProfileImport_ReportImportItemFinished_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfileImport_ReportImportItemFinished_Params_Data));
      new (data()) ProfileImport_ReportImportItemFinished_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfileImport_ReportImportItemFinished_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfileImport_ReportImportItemFinished_Params_Data>(index_);
    }
    ProfileImport_ReportImportItemFinished_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t item;
  uint8_t padfinal_[4];

 private:
  ProfileImport_ReportImportItemFinished_Params_Data();
  ~ProfileImport_ReportImportItemFinished_Params_Data() = delete;
};
static_assert(sizeof(ProfileImport_ReportImportItemFinished_Params_Data) == 16,
              "Bad sizeof(ProfileImport_ReportImportItemFinished_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_INTERNAL_H_