// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/native_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticSmoothDrag_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticSmoothDrag_Params_Data));
      new (data()) InputInjector_QueueSyntheticSmoothDrag_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticSmoothDrag_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticSmoothDrag_Params_Data>(index_);
    }
    InputInjector_QueueSyntheticSmoothDrag_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::SyntheticSmoothDrag_Data> drag;

 private:
  InputInjector_QueueSyntheticSmoothDrag_Params_Data();
  ~InputInjector_QueueSyntheticSmoothDrag_Params_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticSmoothDrag_Params_Data) == 16,
              "Bad sizeof(InputInjector_QueueSyntheticSmoothDrag_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data));
      new (data()) InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data>(index_);
    }
    InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data();
  ~InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data) == 8,
              "Bad sizeof(InputInjector_QueueSyntheticSmoothDrag_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticSmoothScroll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticSmoothScroll_Params_Data));
      new (data()) InputInjector_QueueSyntheticSmoothScroll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticSmoothScroll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticSmoothScroll_Params_Data>(index_);
    }
    InputInjector_QueueSyntheticSmoothScroll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::SyntheticSmoothScroll_Data> scroll;

 private:
  InputInjector_QueueSyntheticSmoothScroll_Params_Data();
  ~InputInjector_QueueSyntheticSmoothScroll_Params_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticSmoothScroll_Params_Data) == 16,
              "Bad sizeof(InputInjector_QueueSyntheticSmoothScroll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data));
      new (data()) InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data>(index_);
    }
    InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data();
  ~InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data) == 8,
              "Bad sizeof(InputInjector_QueueSyntheticSmoothScroll_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticPinch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticPinch_Params_Data));
      new (data()) InputInjector_QueueSyntheticPinch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticPinch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticPinch_Params_Data>(index_);
    }
    InputInjector_QueueSyntheticPinch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::SyntheticPinch_Data> pinch;

 private:
  InputInjector_QueueSyntheticPinch_Params_Data();
  ~InputInjector_QueueSyntheticPinch_Params_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticPinch_Params_Data) == 16,
              "Bad sizeof(InputInjector_QueueSyntheticPinch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticPinch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticPinch_ResponseParams_Data));
      new (data()) InputInjector_QueueSyntheticPinch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticPinch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticPinch_ResponseParams_Data>(index_);
    }
    InputInjector_QueueSyntheticPinch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputInjector_QueueSyntheticPinch_ResponseParams_Data();
  ~InputInjector_QueueSyntheticPinch_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticPinch_ResponseParams_Data) == 8,
              "Bad sizeof(InputInjector_QueueSyntheticPinch_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticTap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticTap_Params_Data));
      new (data()) InputInjector_QueueSyntheticTap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticTap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticTap_Params_Data>(index_);
    }
    InputInjector_QueueSyntheticTap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::SyntheticTap_Data> tap;

 private:
  InputInjector_QueueSyntheticTap_Params_Data();
  ~InputInjector_QueueSyntheticTap_Params_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticTap_Params_Data) == 16,
              "Bad sizeof(InputInjector_QueueSyntheticTap_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticTap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticTap_ResponseParams_Data));
      new (data()) InputInjector_QueueSyntheticTap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticTap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticTap_ResponseParams_Data>(index_);
    }
    InputInjector_QueueSyntheticTap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputInjector_QueueSyntheticTap_ResponseParams_Data();
  ~InputInjector_QueueSyntheticTap_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticTap_ResponseParams_Data) == 8,
              "Bad sizeof(InputInjector_QueueSyntheticTap_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticPointerAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticPointerAction_Params_Data));
      new (data()) InputInjector_QueueSyntheticPointerAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticPointerAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticPointerAction_Params_Data>(index_);
    }
    InputInjector_QueueSyntheticPointerAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::SyntheticPointerAction_Data> pointer_action;

 private:
  InputInjector_QueueSyntheticPointerAction_Params_Data();
  ~InputInjector_QueueSyntheticPointerAction_Params_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticPointerAction_Params_Data) == 16,
              "Bad sizeof(InputInjector_QueueSyntheticPointerAction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) InputInjector_QueueSyntheticPointerAction_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputInjector_QueueSyntheticPointerAction_ResponseParams_Data));
      new (data()) InputInjector_QueueSyntheticPointerAction_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputInjector_QueueSyntheticPointerAction_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputInjector_QueueSyntheticPointerAction_ResponseParams_Data>(index_);
    }
    InputInjector_QueueSyntheticPointerAction_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputInjector_QueueSyntheticPointerAction_ResponseParams_Data();
  ~InputInjector_QueueSyntheticPointerAction_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputInjector_QueueSyntheticPointerAction_ResponseParams_Data) == 8,
              "Bad sizeof(InputInjector_QueueSyntheticPointerAction_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_INJECTOR_MOJOM_SHARED_INTERNAL_H_