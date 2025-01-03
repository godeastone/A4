// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_INTERNAL_H_

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
namespace supervised_user {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  SupervisedUserCommands_GoBack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SupervisedUserCommands_GoBack_Params_Data));
      new (data()) SupervisedUserCommands_GoBack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SupervisedUserCommands_GoBack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SupervisedUserCommands_GoBack_Params_Data>(index_);
    }
    SupervisedUserCommands_GoBack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SupervisedUserCommands_GoBack_Params_Data();
  ~SupervisedUserCommands_GoBack_Params_Data() = delete;
};
static_assert(sizeof(SupervisedUserCommands_GoBack_Params_Data) == 8,
              "Bad sizeof(SupervisedUserCommands_GoBack_Params_Data)");
class  SupervisedUserCommands_RequestPermission_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SupervisedUserCommands_RequestPermission_Params_Data));
      new (data()) SupervisedUserCommands_RequestPermission_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SupervisedUserCommands_RequestPermission_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SupervisedUserCommands_RequestPermission_Params_Data>(index_);
    }
    SupervisedUserCommands_RequestPermission_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SupervisedUserCommands_RequestPermission_Params_Data();
  ~SupervisedUserCommands_RequestPermission_Params_Data() = delete;
};
static_assert(sizeof(SupervisedUserCommands_RequestPermission_Params_Data) == 8,
              "Bad sizeof(SupervisedUserCommands_RequestPermission_Params_Data)");
class  SupervisedUserCommands_RequestPermission_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SupervisedUserCommands_RequestPermission_ResponseParams_Data));
      new (data()) SupervisedUserCommands_RequestPermission_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SupervisedUserCommands_RequestPermission_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SupervisedUserCommands_RequestPermission_ResponseParams_Data>(index_);
    }
    SupervisedUserCommands_RequestPermission_ResponseParams_Data* operator->() { return data(); }

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
  SupervisedUserCommands_RequestPermission_ResponseParams_Data();
  ~SupervisedUserCommands_RequestPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(SupervisedUserCommands_RequestPermission_ResponseParams_Data) == 16,
              "Bad sizeof(SupervisedUserCommands_RequestPermission_ResponseParams_Data)");
class  SupervisedUserCommands_Feedback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SupervisedUserCommands_Feedback_Params_Data));
      new (data()) SupervisedUserCommands_Feedback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SupervisedUserCommands_Feedback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SupervisedUserCommands_Feedback_Params_Data>(index_);
    }
    SupervisedUserCommands_Feedback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SupervisedUserCommands_Feedback_Params_Data();
  ~SupervisedUserCommands_Feedback_Params_Data() = delete;
};
static_assert(sizeof(SupervisedUserCommands_Feedback_Params_Data) == 8,
              "Bad sizeof(SupervisedUserCommands_Feedback_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace supervised_user

#endif  // CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_INTERNAL_H_