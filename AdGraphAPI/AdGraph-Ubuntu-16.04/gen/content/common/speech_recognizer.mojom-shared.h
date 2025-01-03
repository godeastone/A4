// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "content/common/speech_recognizer.mojom-shared-internal.h"
#include "content/public/common/speech_recognition_grammar.mojom-shared.h"
#include "content/public/common/speech_recognition_result.mojom-shared.h"
#include "content/public/common/speech_recognition_error.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class StartSpeechRecognitionRequestParamsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::StartSpeechRecognitionRequestParamsDataView> {
  using Data = ::content::mojom::internal::StartSpeechRecognitionRequestParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SpeechRecognizerInterfaceBase {};

using SpeechRecognizerPtrDataView =
    mojo::InterfacePtrDataView<SpeechRecognizerInterfaceBase>;
using SpeechRecognizerRequestDataView =
    mojo::InterfaceRequestDataView<SpeechRecognizerInterfaceBase>;
using SpeechRecognizerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpeechRecognizerInterfaceBase>;
using SpeechRecognizerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpeechRecognizerInterfaceBase>;
class SpeechRecognitionSessionInterfaceBase {};

using SpeechRecognitionSessionPtrDataView =
    mojo::InterfacePtrDataView<SpeechRecognitionSessionInterfaceBase>;
using SpeechRecognitionSessionRequestDataView =
    mojo::InterfaceRequestDataView<SpeechRecognitionSessionInterfaceBase>;
using SpeechRecognitionSessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpeechRecognitionSessionInterfaceBase>;
using SpeechRecognitionSessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpeechRecognitionSessionInterfaceBase>;
class SpeechRecognitionSessionClientInterfaceBase {};

using SpeechRecognitionSessionClientPtrDataView =
    mojo::InterfacePtrDataView<SpeechRecognitionSessionClientInterfaceBase>;
using SpeechRecognitionSessionClientRequestDataView =
    mojo::InterfaceRequestDataView<SpeechRecognitionSessionClientInterfaceBase>;
using SpeechRecognitionSessionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpeechRecognitionSessionClientInterfaceBase>;
using SpeechRecognitionSessionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpeechRecognitionSessionClientInterfaceBase>;
class StartSpeechRecognitionRequestParamsDataView {
 public:
  StartSpeechRecognitionRequestParamsDataView() {}

  StartSpeechRecognitionRequestParamsDataView(
      internal::StartSpeechRecognitionRequestParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSessionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SpeechRecognitionSessionRequestDataView>(
            &data_->session_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SpeechRecognitionSessionClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLanguage(UserType* output) {
    auto* pointer = data_->language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGrammarsDataView(
      mojo::ArrayDataView<::content::mojom::SpeechRecognitionGrammarDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGrammars(UserType* output) {
    auto* pointer = data_->grammars.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::SpeechRecognitionGrammarDataView>>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  uint32_t max_hypotheses() const {
    return data_->max_hypotheses;
  }
  bool continuous() const {
    return data_->continuous;
  }
  bool interim_results() const {
    return data_->interim_results;
  }
 private:
  internal::StartSpeechRecognitionRequestParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognizer_Start_ParamsDataView {
 public:
  SpeechRecognizer_Start_ParamsDataView() {}

  SpeechRecognizer_Start_ParamsDataView(
      internal::SpeechRecognizer_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      StartSpeechRecognitionRequestParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::StartSpeechRecognitionRequestParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SpeechRecognizer_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionSession_Abort_ParamsDataView {
 public:
  SpeechRecognitionSession_Abort_ParamsDataView() {}

  SpeechRecognitionSession_Abort_ParamsDataView(
      internal::SpeechRecognitionSession_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSession_Abort_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSession_StopCapture_ParamsDataView {
 public:
  SpeechRecognitionSession_StopCapture_ParamsDataView() {}

  SpeechRecognitionSession_StopCapture_ParamsDataView(
      internal::SpeechRecognitionSession_StopCapture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSession_StopCapture_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView() {}

  SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView(
      internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<::content::mojom::SpeechRecognitionResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::SpeechRecognitionResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView() {}

  SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView(
      internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      ::content::mojom::SpeechRecognitionErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::content::mojom::SpeechRecognitionErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionSessionClient_Started_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_Started_ParamsDataView() {}

  SpeechRecognitionSessionClient_Started_ParamsDataView(
      internal::SpeechRecognitionSessionClient_Started_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_Started_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_AudioStarted_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_AudioStarted_ParamsDataView() {}

  SpeechRecognitionSessionClient_AudioStarted_ParamsDataView(
      internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_SoundStarted_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_SoundStarted_ParamsDataView() {}

  SpeechRecognitionSessionClient_SoundStarted_ParamsDataView(
      internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_SoundEnded_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_SoundEnded_ParamsDataView() {}

  SpeechRecognitionSessionClient_SoundEnded_ParamsDataView(
      internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_AudioEnded_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_AudioEnded_ParamsDataView() {}

  SpeechRecognitionSessionClient_AudioEnded_ParamsDataView(
      internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_Ended_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_Ended_ParamsDataView() {}

  SpeechRecognitionSessionClient_Ended_ParamsDataView(
      internal::SpeechRecognitionSessionClient_Ended_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_Ended_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::StartSpeechRecognitionRequestParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::StartSpeechRecognitionRequestParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::StartSpeechRecognitionRequestParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::session_request, input, custom_context)) in_session_request = CallWithContext(Traits::session_request, input, custom_context);
    mojo::internal::Serialize<::content::mojom::SpeechRecognitionSessionRequestDataView>(
        in_session_request, &(*output)->session_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->session_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid session_request in StartSpeechRecognitionRequestParams struct");
    decltype(CallWithContext(Traits::client, input, custom_context)) in_client = CallWithContext(Traits::client, input, custom_context);
    mojo::internal::Serialize<::content::mojom::SpeechRecognitionSessionClientPtrDataView>(
        in_client, &(*output)->client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client in StartSpeechRecognitionRequestParams struct");
    decltype(CallWithContext(Traits::language, input, custom_context)) in_language = CallWithContext(Traits::language, input, custom_context);
    typename decltype((*output)->language)::BaseType::BufferWriter
        language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_language, buffer, &language_writer, context);
    (*output)->language.Set(
        language_writer.is_null() ? nullptr : language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null language in StartSpeechRecognitionRequestParams struct");
    decltype(CallWithContext(Traits::grammars, input, custom_context)) in_grammars = CallWithContext(Traits::grammars, input, custom_context);
    typename decltype((*output)->grammars)::BaseType::BufferWriter
        grammars_writer;
    const mojo::internal::ContainerValidateParams grammars_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::SpeechRecognitionGrammarDataView>>(
        in_grammars, buffer, &grammars_writer, &grammars_validate_params,
        context);
    (*output)->grammars.Set(
        grammars_writer.is_null() ? nullptr : grammars_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->grammars.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null grammars in StartSpeechRecognitionRequestParams struct");
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in StartSpeechRecognitionRequestParams struct");
    (*output)->max_hypotheses = CallWithContext(Traits::max_hypotheses, input, custom_context);
    (*output)->continuous = CallWithContext(Traits::continuous, input, custom_context);
    (*output)->interim_results = CallWithContext(Traits::interim_results, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::StartSpeechRecognitionRequestParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::StartSpeechRecognitionRequestParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void StartSpeechRecognitionRequestParamsDataView::GetLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StartSpeechRecognitionRequestParamsDataView::GetGrammarsDataView(
    mojo::ArrayDataView<::content::mojom::SpeechRecognitionGrammarDataView>* output) {
  auto pointer = data_->grammars.Get();
  *output = mojo::ArrayDataView<::content::mojom::SpeechRecognitionGrammarDataView>(pointer, context_);
}
inline void StartSpeechRecognitionRequestParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void SpeechRecognizer_Start_ParamsDataView::GetParamsDataView(
    StartSpeechRecognitionRequestParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = StartSpeechRecognitionRequestParamsDataView(pointer, context_);
}






inline void SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::content::mojom::SpeechRecognitionResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::content::mojom::SpeechRecognitionResultDataView>(pointer, context_);
}


inline void SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView::GetErrorDataView(
    ::content::mojom::SpeechRecognitionErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = ::content::mojom::SpeechRecognitionErrorDataView(pointer, context_);
}















}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_H_
