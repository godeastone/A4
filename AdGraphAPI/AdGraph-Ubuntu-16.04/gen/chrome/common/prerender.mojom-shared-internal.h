// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PRERENDER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_PRERENDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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

#pragma pack(push, 1)
class  PrerenderCanceler_CancelPrerenderForPrinting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderCanceler_CancelPrerenderForPrinting_Params_Data));
      new (data()) PrerenderCanceler_CancelPrerenderForPrinting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderCanceler_CancelPrerenderForPrinting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderCanceler_CancelPrerenderForPrinting_Params_Data>(index_);
    }
    PrerenderCanceler_CancelPrerenderForPrinting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PrerenderCanceler_CancelPrerenderForPrinting_Params_Data();
  ~PrerenderCanceler_CancelPrerenderForPrinting_Params_Data() = delete;
};
static_assert(sizeof(PrerenderCanceler_CancelPrerenderForPrinting_Params_Data) == 8,
              "Bad sizeof(PrerenderCanceler_CancelPrerenderForPrinting_Params_Data)");
class  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data));
      new (data()) PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data>(index_);
    }
    PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data();
  ~PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data() = delete;
};
static_assert(sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data) == 8,
              "Bad sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data)");
class  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data));
      new (data()) PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data>(index_);
    }
    PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* operator->() { return data(); }

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
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data();
  ~PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data() = delete;
};
static_assert(sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data) == 16,
              "Bad sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data)");
class  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data));
      new (data()) PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data>(index_);
    }
    PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data();
  ~PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data() = delete;
};
static_assert(sizeof(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data) == 8,
              "Bad sizeof(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data)");
class  PrerenderDispatcher_PrerenderStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderDispatcher_PrerenderStart_Params_Data));
      new (data()) PrerenderDispatcher_PrerenderStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderDispatcher_PrerenderStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderDispatcher_PrerenderStart_Params_Data>(index_);
    }
    PrerenderDispatcher_PrerenderStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t prerender_id;
  uint8_t padfinal_[4];

 private:
  PrerenderDispatcher_PrerenderStart_Params_Data();
  ~PrerenderDispatcher_PrerenderStart_Params_Data() = delete;
};
static_assert(sizeof(PrerenderDispatcher_PrerenderStart_Params_Data) == 16,
              "Bad sizeof(PrerenderDispatcher_PrerenderStart_Params_Data)");
class  PrerenderDispatcher_PrerenderStopLoading_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderDispatcher_PrerenderStopLoading_Params_Data));
      new (data()) PrerenderDispatcher_PrerenderStopLoading_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderDispatcher_PrerenderStopLoading_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderDispatcher_PrerenderStopLoading_Params_Data>(index_);
    }
    PrerenderDispatcher_PrerenderStopLoading_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t prerender_id;
  uint8_t padfinal_[4];

 private:
  PrerenderDispatcher_PrerenderStopLoading_Params_Data();
  ~PrerenderDispatcher_PrerenderStopLoading_Params_Data() = delete;
};
static_assert(sizeof(PrerenderDispatcher_PrerenderStopLoading_Params_Data) == 16,
              "Bad sizeof(PrerenderDispatcher_PrerenderStopLoading_Params_Data)");
class  PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data));
      new (data()) PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data>(index_);
    }
    PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t prerender_id;
  uint8_t padfinal_[4];

 private:
  PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data();
  ~PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data() = delete;
};
static_assert(sizeof(PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data) == 16,
              "Bad sizeof(PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data)");
class  PrerenderDispatcher_PrerenderAddAlias_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderDispatcher_PrerenderAddAlias_Params_Data));
      new (data()) PrerenderDispatcher_PrerenderAddAlias_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderDispatcher_PrerenderAddAlias_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderDispatcher_PrerenderAddAlias_Params_Data>(index_);
    }
    PrerenderDispatcher_PrerenderAddAlias_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> alias;

 private:
  PrerenderDispatcher_PrerenderAddAlias_Params_Data();
  ~PrerenderDispatcher_PrerenderAddAlias_Params_Data() = delete;
};
static_assert(sizeof(PrerenderDispatcher_PrerenderAddAlias_Params_Data) == 16,
              "Bad sizeof(PrerenderDispatcher_PrerenderAddAlias_Params_Data)");
class  PrerenderDispatcher_PrerenderRemoveAliases_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderDispatcher_PrerenderRemoveAliases_Params_Data));
      new (data()) PrerenderDispatcher_PrerenderRemoveAliases_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderDispatcher_PrerenderRemoveAliases_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderDispatcher_PrerenderRemoveAliases_Params_Data>(index_);
    }
    PrerenderDispatcher_PrerenderRemoveAliases_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> aliases;

 private:
  PrerenderDispatcher_PrerenderRemoveAliases_Params_Data();
  ~PrerenderDispatcher_PrerenderRemoveAliases_Params_Data() = delete;
};
static_assert(sizeof(PrerenderDispatcher_PrerenderRemoveAliases_Params_Data) == 16,
              "Bad sizeof(PrerenderDispatcher_PrerenderRemoveAliases_Params_Data)");
class  PrerenderDispatcher_PrerenderStop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PrerenderDispatcher_PrerenderStop_Params_Data));
      new (data()) PrerenderDispatcher_PrerenderStop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PrerenderDispatcher_PrerenderStop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PrerenderDispatcher_PrerenderStop_Params_Data>(index_);
    }
    PrerenderDispatcher_PrerenderStop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t prerender_id;
  uint8_t padfinal_[4];

 private:
  PrerenderDispatcher_PrerenderStop_Params_Data();
  ~PrerenderDispatcher_PrerenderStop_Params_Data() = delete;
};
static_assert(sizeof(PrerenderDispatcher_PrerenderStop_Params_Data) == 16,
              "Bad sizeof(PrerenderDispatcher_PrerenderStop_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_PRERENDER_MOJOM_SHARED_INTERNAL_H_