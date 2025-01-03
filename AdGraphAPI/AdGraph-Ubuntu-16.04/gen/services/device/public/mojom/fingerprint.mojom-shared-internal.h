// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_INTERNAL_H_

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
namespace device {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  FingerprintObserver_OnRestarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnRestarted_Params_Data));
      new (data()) FingerprintObserver_OnRestarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnRestarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnRestarted_Params_Data>(index_);
    }
    FingerprintObserver_OnRestarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FingerprintObserver_OnRestarted_Params_Data();
  ~FingerprintObserver_OnRestarted_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnRestarted_Params_Data) == 8,
              "Bad sizeof(FingerprintObserver_OnRestarted_Params_Data)");
class  FingerprintObserver_OnEnrollScanDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnEnrollScanDone_Params_Data));
      new (data()) FingerprintObserver_OnEnrollScanDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnEnrollScanDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnEnrollScanDone_Params_Data>(index_);
    }
    FingerprintObserver_OnEnrollScanDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t scan_result;
  uint8_t is_complete : 1;
  uint8_t pad1_[3];
  int32_t percent_complete;
  uint8_t padfinal_[4];

 private:
  FingerprintObserver_OnEnrollScanDone_Params_Data();
  ~FingerprintObserver_OnEnrollScanDone_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnEnrollScanDone_Params_Data) == 24,
              "Bad sizeof(FingerprintObserver_OnEnrollScanDone_Params_Data)");
class  FingerprintObserver_OnAuthScanDone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnAuthScanDone_Params_Data));
      new (data()) FingerprintObserver_OnAuthScanDone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnAuthScanDone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnAuthScanDone_Params_Data>(index_);
    }
    FingerprintObserver_OnAuthScanDone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t scan_result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> matches;

 private:
  FingerprintObserver_OnAuthScanDone_Params_Data();
  ~FingerprintObserver_OnAuthScanDone_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnAuthScanDone_Params_Data) == 24,
              "Bad sizeof(FingerprintObserver_OnAuthScanDone_Params_Data)");
class  FingerprintObserver_OnSessionFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FingerprintObserver_OnSessionFailed_Params_Data));
      new (data()) FingerprintObserver_OnSessionFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FingerprintObserver_OnSessionFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FingerprintObserver_OnSessionFailed_Params_Data>(index_);
    }
    FingerprintObserver_OnSessionFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FingerprintObserver_OnSessionFailed_Params_Data();
  ~FingerprintObserver_OnSessionFailed_Params_Data() = delete;
};
static_assert(sizeof(FingerprintObserver_OnSessionFailed_Params_Data) == 8,
              "Bad sizeof(FingerprintObserver_OnSessionFailed_Params_Data)");
class  Fingerprint_GetRecordsForUser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_GetRecordsForUser_Params_Data));
      new (data()) Fingerprint_GetRecordsForUser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_GetRecordsForUser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_GetRecordsForUser_Params_Data>(index_);
    }
    Fingerprint_GetRecordsForUser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_id;

 private:
  Fingerprint_GetRecordsForUser_Params_Data();
  ~Fingerprint_GetRecordsForUser_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_GetRecordsForUser_Params_Data) == 16,
              "Bad sizeof(Fingerprint_GetRecordsForUser_Params_Data)");
class  Fingerprint_GetRecordsForUser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_GetRecordsForUser_ResponseParams_Data));
      new (data()) Fingerprint_GetRecordsForUser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_GetRecordsForUser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_GetRecordsForUser_ResponseParams_Data>(index_);
    }
    Fingerprint_GetRecordsForUser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> records;

 private:
  Fingerprint_GetRecordsForUser_ResponseParams_Data();
  ~Fingerprint_GetRecordsForUser_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_GetRecordsForUser_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_GetRecordsForUser_ResponseParams_Data)");
class  Fingerprint_StartEnrollSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_StartEnrollSession_Params_Data));
      new (data()) Fingerprint_StartEnrollSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_StartEnrollSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_StartEnrollSession_Params_Data>(index_);
    }
    Fingerprint_StartEnrollSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_id;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  Fingerprint_StartEnrollSession_Params_Data();
  ~Fingerprint_StartEnrollSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_StartEnrollSession_Params_Data) == 24,
              "Bad sizeof(Fingerprint_StartEnrollSession_Params_Data)");
class  Fingerprint_CancelCurrentEnrollSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_CancelCurrentEnrollSession_Params_Data));
      new (data()) Fingerprint_CancelCurrentEnrollSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_CancelCurrentEnrollSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_CancelCurrentEnrollSession_Params_Data>(index_);
    }
    Fingerprint_CancelCurrentEnrollSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_CancelCurrentEnrollSession_Params_Data();
  ~Fingerprint_CancelCurrentEnrollSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_CancelCurrentEnrollSession_Params_Data) == 8,
              "Bad sizeof(Fingerprint_CancelCurrentEnrollSession_Params_Data)");
class  Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data));
      new (data()) Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data>(index_);
    }
    Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* operator->() { return data(); }

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
  Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data();
  ~Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data)");
class  Fingerprint_RequestRecordLabel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestRecordLabel_Params_Data));
      new (data()) Fingerprint_RequestRecordLabel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestRecordLabel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestRecordLabel_Params_Data>(index_);
    }
    Fingerprint_RequestRecordLabel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> record_path;

 private:
  Fingerprint_RequestRecordLabel_Params_Data();
  ~Fingerprint_RequestRecordLabel_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestRecordLabel_Params_Data) == 16,
              "Bad sizeof(Fingerprint_RequestRecordLabel_Params_Data)");
class  Fingerprint_RequestRecordLabel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestRecordLabel_ResponseParams_Data));
      new (data()) Fingerprint_RequestRecordLabel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestRecordLabel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestRecordLabel_ResponseParams_Data>(index_);
    }
    Fingerprint_RequestRecordLabel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  Fingerprint_RequestRecordLabel_ResponseParams_Data();
  ~Fingerprint_RequestRecordLabel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestRecordLabel_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_RequestRecordLabel_ResponseParams_Data)");
class  Fingerprint_SetRecordLabel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_SetRecordLabel_Params_Data));
      new (data()) Fingerprint_SetRecordLabel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_SetRecordLabel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_SetRecordLabel_Params_Data>(index_);
    }
    Fingerprint_SetRecordLabel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> record_path;
  mojo::internal::Pointer<mojo::internal::String_Data> new_label;

 private:
  Fingerprint_SetRecordLabel_Params_Data();
  ~Fingerprint_SetRecordLabel_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_SetRecordLabel_Params_Data) == 24,
              "Bad sizeof(Fingerprint_SetRecordLabel_Params_Data)");
class  Fingerprint_SetRecordLabel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_SetRecordLabel_ResponseParams_Data));
      new (data()) Fingerprint_SetRecordLabel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_SetRecordLabel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_SetRecordLabel_ResponseParams_Data>(index_);
    }
    Fingerprint_SetRecordLabel_ResponseParams_Data* operator->() { return data(); }

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
  Fingerprint_SetRecordLabel_ResponseParams_Data();
  ~Fingerprint_SetRecordLabel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_SetRecordLabel_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_SetRecordLabel_ResponseParams_Data)");
class  Fingerprint_RemoveRecord_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RemoveRecord_Params_Data));
      new (data()) Fingerprint_RemoveRecord_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RemoveRecord_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RemoveRecord_Params_Data>(index_);
    }
    Fingerprint_RemoveRecord_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> record_path;

 private:
  Fingerprint_RemoveRecord_Params_Data();
  ~Fingerprint_RemoveRecord_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_RemoveRecord_Params_Data) == 16,
              "Bad sizeof(Fingerprint_RemoveRecord_Params_Data)");
class  Fingerprint_RemoveRecord_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RemoveRecord_ResponseParams_Data));
      new (data()) Fingerprint_RemoveRecord_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RemoveRecord_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RemoveRecord_ResponseParams_Data>(index_);
    }
    Fingerprint_RemoveRecord_ResponseParams_Data* operator->() { return data(); }

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
  Fingerprint_RemoveRecord_ResponseParams_Data();
  ~Fingerprint_RemoveRecord_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_RemoveRecord_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_RemoveRecord_ResponseParams_Data)");
class  Fingerprint_StartAuthSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_StartAuthSession_Params_Data));
      new (data()) Fingerprint_StartAuthSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_StartAuthSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_StartAuthSession_Params_Data>(index_);
    }
    Fingerprint_StartAuthSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_StartAuthSession_Params_Data();
  ~Fingerprint_StartAuthSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_StartAuthSession_Params_Data) == 8,
              "Bad sizeof(Fingerprint_StartAuthSession_Params_Data)");
class  Fingerprint_EndCurrentAuthSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_EndCurrentAuthSession_Params_Data));
      new (data()) Fingerprint_EndCurrentAuthSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_EndCurrentAuthSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_EndCurrentAuthSession_Params_Data>(index_);
    }
    Fingerprint_EndCurrentAuthSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_EndCurrentAuthSession_Params_Data();
  ~Fingerprint_EndCurrentAuthSession_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_EndCurrentAuthSession_Params_Data) == 8,
              "Bad sizeof(Fingerprint_EndCurrentAuthSession_Params_Data)");
class  Fingerprint_EndCurrentAuthSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_EndCurrentAuthSession_ResponseParams_Data));
      new (data()) Fingerprint_EndCurrentAuthSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_EndCurrentAuthSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_EndCurrentAuthSession_ResponseParams_Data>(index_);
    }
    Fingerprint_EndCurrentAuthSession_ResponseParams_Data* operator->() { return data(); }

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
  Fingerprint_EndCurrentAuthSession_ResponseParams_Data();
  ~Fingerprint_EndCurrentAuthSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_EndCurrentAuthSession_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_EndCurrentAuthSession_ResponseParams_Data)");
class  Fingerprint_DestroyAllRecords_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_DestroyAllRecords_Params_Data));
      new (data()) Fingerprint_DestroyAllRecords_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_DestroyAllRecords_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_DestroyAllRecords_Params_Data>(index_);
    }
    Fingerprint_DestroyAllRecords_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_DestroyAllRecords_Params_Data();
  ~Fingerprint_DestroyAllRecords_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_DestroyAllRecords_Params_Data) == 8,
              "Bad sizeof(Fingerprint_DestroyAllRecords_Params_Data)");
class  Fingerprint_DestroyAllRecords_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_DestroyAllRecords_ResponseParams_Data));
      new (data()) Fingerprint_DestroyAllRecords_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_DestroyAllRecords_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_DestroyAllRecords_ResponseParams_Data>(index_);
    }
    Fingerprint_DestroyAllRecords_ResponseParams_Data* operator->() { return data(); }

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
  Fingerprint_DestroyAllRecords_ResponseParams_Data();
  ~Fingerprint_DestroyAllRecords_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_DestroyAllRecords_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_DestroyAllRecords_ResponseParams_Data)");
class  Fingerprint_AddFingerprintObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_AddFingerprintObserver_Params_Data));
      new (data()) Fingerprint_AddFingerprintObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_AddFingerprintObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_AddFingerprintObserver_Params_Data>(index_);
    }
    Fingerprint_AddFingerprintObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  Fingerprint_AddFingerprintObserver_Params_Data();
  ~Fingerprint_AddFingerprintObserver_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_AddFingerprintObserver_Params_Data) == 16,
              "Bad sizeof(Fingerprint_AddFingerprintObserver_Params_Data)");
class  Fingerprint_RequestType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestType_Params_Data));
      new (data()) Fingerprint_RequestType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestType_Params_Data>(index_);
    }
    Fingerprint_RequestType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Fingerprint_RequestType_Params_Data();
  ~Fingerprint_RequestType_Params_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestType_Params_Data) == 8,
              "Bad sizeof(Fingerprint_RequestType_Params_Data)");
class  Fingerprint_RequestType_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Fingerprint_RequestType_ResponseParams_Data));
      new (data()) Fingerprint_RequestType_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Fingerprint_RequestType_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Fingerprint_RequestType_ResponseParams_Data>(index_);
    }
    Fingerprint_RequestType_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t type;
  uint8_t padfinal_[4];

 private:
  Fingerprint_RequestType_ResponseParams_Data();
  ~Fingerprint_RequestType_ResponseParams_Data() = delete;
};
static_assert(sizeof(Fingerprint_RequestType_ResponseParams_Data) == 16,
              "Bad sizeof(Fingerprint_RequestType_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_INTERNAL_H_