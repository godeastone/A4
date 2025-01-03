// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/speech_recognition_grammar.mojom-shared-internal.h"
#include "content/public/common/speech_recognition_result.mojom-shared-internal.h"
#include "content/public/common/speech_recognition_error.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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
class StartSpeechRecognitionRequestParams_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) StartSpeechRecognitionRequestParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StartSpeechRecognitionRequestParams_Data));
      new (data()) StartSpeechRecognitionRequestParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StartSpeechRecognitionRequestParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StartSpeechRecognitionRequestParams_Data>(index_);
    }
    StartSpeechRecognitionRequestParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data session_request;
  mojo::internal::Interface_Data client;
  uint32_t max_hypotheses;
  mojo::internal::Pointer<mojo::internal::String_Data> language;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::content::mojom::internal::SpeechRecognitionGrammar_Data>>> grammars;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  uint8_t continuous : 1;
  uint8_t interim_results : 1;
  uint8_t padfinal_[7];

 private:
  StartSpeechRecognitionRequestParams_Data();
  ~StartSpeechRecognitionRequestParams_Data() = delete;
};
static_assert(sizeof(StartSpeechRecognitionRequestParams_Data) == 56,
              "Bad sizeof(StartSpeechRecognitionRequestParams_Data)");
// Used by StartSpeechRecognitionRequestParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StartSpeechRecognitionRequestParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StartSpeechRecognitionRequestParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StartSpeechRecognitionRequestParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StartSpeechRecognitionRequestParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StartSpeechRecognitionRequestParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognizer_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognizer_Start_Params_Data));
      new (data()) SpeechRecognizer_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognizer_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognizer_Start_Params_Data>(index_);
    }
    SpeechRecognizer_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StartSpeechRecognitionRequestParams_Data> params;

 private:
  SpeechRecognizer_Start_Params_Data();
  ~SpeechRecognizer_Start_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognizer_Start_Params_Data) == 16,
              "Bad sizeof(SpeechRecognizer_Start_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSession_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSession_Abort_Params_Data));
      new (data()) SpeechRecognitionSession_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSession_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSession_Abort_Params_Data>(index_);
    }
    SpeechRecognitionSession_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSession_Abort_Params_Data();
  ~SpeechRecognitionSession_Abort_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSession_Abort_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSession_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSession_StopCapture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSession_StopCapture_Params_Data));
      new (data()) SpeechRecognitionSession_StopCapture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSession_StopCapture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSession_StopCapture_Params_Data>(index_);
    }
    SpeechRecognitionSession_StopCapture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSession_StopCapture_Params_Data();
  ~SpeechRecognitionSession_StopCapture_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSession_StopCapture_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSession_StopCapture_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_ResultRetrieved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_ResultRetrieved_Params_Data));
      new (data()) SpeechRecognitionSessionClient_ResultRetrieved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_ResultRetrieved_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::content::mojom::internal::SpeechRecognitionResult_Data>>> results;

 private:
  SpeechRecognitionSessionClient_ResultRetrieved_Params_Data();
  ~SpeechRecognitionSessionClient_ResultRetrieved_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_ResultRetrieved_Params_Data) == 16,
              "Bad sizeof(SpeechRecognitionSessionClient_ResultRetrieved_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_ErrorOccurred_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_ErrorOccurred_Params_Data));
      new (data()) SpeechRecognitionSessionClient_ErrorOccurred_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_ErrorOccurred_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::SpeechRecognitionError_Data> error;

 private:
  SpeechRecognitionSessionClient_ErrorOccurred_Params_Data();
  ~SpeechRecognitionSessionClient_ErrorOccurred_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_ErrorOccurred_Params_Data) == 16,
              "Bad sizeof(SpeechRecognitionSessionClient_ErrorOccurred_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_Started_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_Started_Params_Data));
      new (data()) SpeechRecognitionSessionClient_Started_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_Started_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_Started_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_Started_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_Started_Params_Data();
  ~SpeechRecognitionSessionClient_Started_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_Started_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_Started_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_AudioStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_AudioStarted_Params_Data));
      new (data()) SpeechRecognitionSessionClient_AudioStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_AudioStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_AudioStarted_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_AudioStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_AudioStarted_Params_Data();
  ~SpeechRecognitionSessionClient_AudioStarted_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_AudioStarted_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_AudioStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_SoundStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_SoundStarted_Params_Data));
      new (data()) SpeechRecognitionSessionClient_SoundStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_SoundStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_SoundStarted_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_SoundStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_SoundStarted_Params_Data();
  ~SpeechRecognitionSessionClient_SoundStarted_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_SoundStarted_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_SoundStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_SoundEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_SoundEnded_Params_Data));
      new (data()) SpeechRecognitionSessionClient_SoundEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_SoundEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_SoundEnded_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_SoundEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_SoundEnded_Params_Data();
  ~SpeechRecognitionSessionClient_SoundEnded_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_SoundEnded_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_SoundEnded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_AudioEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_AudioEnded_Params_Data));
      new (data()) SpeechRecognitionSessionClient_AudioEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_AudioEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_AudioEnded_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_AudioEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_AudioEnded_Params_Data();
  ~SpeechRecognitionSessionClient_AudioEnded_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_AudioEnded_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_AudioEnded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SpeechRecognitionSessionClient_Ended_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_Ended_Params_Data));
      new (data()) SpeechRecognitionSessionClient_Ended_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_Ended_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_Ended_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_Ended_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_Ended_Params_Data();
  ~SpeechRecognitionSessionClient_Ended_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_Ended_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_Ended_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_INTERNAL_H_