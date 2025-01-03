// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_RESULT_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_RESULT_MOJOM_SHARED_H_

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
#include "content/public/common/speech_recognition_result.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class SpeechRecognitionHypothesisDataView;

class SpeechRecognitionResultDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::SpeechRecognitionHypothesisDataView> {
  using Data = ::content::mojom::internal::SpeechRecognitionHypothesis_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::SpeechRecognitionResultDataView> {
  using Data = ::content::mojom::internal::SpeechRecognitionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
class SpeechRecognitionHypothesisDataView {
 public:
  SpeechRecognitionHypothesisDataView() {}

  SpeechRecognitionHypothesisDataView(
      internal::SpeechRecognitionHypothesis_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUtteranceDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUtterance(UserType* output) {
    auto* pointer = data_->utterance.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  double confidence() const {
    return data_->confidence;
  }
 private:
  internal::SpeechRecognitionHypothesis_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionResultDataView {
 public:
  SpeechRecognitionResultDataView() {}

  SpeechRecognitionResultDataView(
      internal::SpeechRecognitionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHypothesesDataView(
      mojo::ArrayDataView<SpeechRecognitionHypothesisDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHypotheses(UserType* output) {
    auto* pointer = data_->hypotheses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::SpeechRecognitionHypothesisDataView>>(
        pointer, output, context_);
  }
  bool is_provisional() const {
    return data_->is_provisional;
  }
 private:
  internal::SpeechRecognitionResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::SpeechRecognitionHypothesisDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::SpeechRecognitionHypothesisDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::SpeechRecognitionHypothesis_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::utterance, input, custom_context)) in_utterance = CallWithContext(Traits::utterance, input, custom_context);
    typename decltype((*output)->utterance)::BaseType::BufferWriter
        utterance_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_utterance, buffer, &utterance_writer, context);
    (*output)->utterance.Set(
        utterance_writer.is_null() ? nullptr : utterance_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->utterance.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null utterance in SpeechRecognitionHypothesis struct");
    (*output)->confidence = CallWithContext(Traits::confidence, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::SpeechRecognitionHypothesis_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::SpeechRecognitionHypothesisDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::SpeechRecognitionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::SpeechRecognitionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::SpeechRecognitionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::hypotheses, input, custom_context)) in_hypotheses = CallWithContext(Traits::hypotheses, input, custom_context);
    typename decltype((*output)->hypotheses)::BaseType::BufferWriter
        hypotheses_writer;
    const mojo::internal::ContainerValidateParams hypotheses_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::SpeechRecognitionHypothesisDataView>>(
        in_hypotheses, buffer, &hypotheses_writer, &hypotheses_validate_params,
        context);
    (*output)->hypotheses.Set(
        hypotheses_writer.is_null() ? nullptr : hypotheses_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hypotheses.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hypotheses in SpeechRecognitionResult struct");
    (*output)->is_provisional = CallWithContext(Traits::is_provisional, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::SpeechRecognitionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::SpeechRecognitionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void SpeechRecognitionHypothesisDataView::GetUtteranceDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->utterance.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void SpeechRecognitionResultDataView::GetHypothesesDataView(
    mojo::ArrayDataView<SpeechRecognitionHypothesisDataView>* output) {
  auto pointer = data_->hypotheses.Get();
  *output = mojo::ArrayDataView<SpeechRecognitionHypothesisDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_RESULT_MOJOM_SHARED_H_
