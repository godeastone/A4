// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_RESULT_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_RESULT_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/public/common/speech_recognition_result.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/public/common/speech_recognition_result.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class SpeechRecognitionHypothesis;
using SpeechRecognitionHypothesisPtr = mojo::StructPtr<SpeechRecognitionHypothesis>;

class SpeechRecognitionResult;
using SpeechRecognitionResultPtr = mojo::StructPtr<SpeechRecognitionResult>;







class CONTENT_EXPORT SpeechRecognitionHypothesis {
 public:
  using DataView = SpeechRecognitionHypothesisDataView;
  using Data_ = internal::SpeechRecognitionHypothesis_Data;

  template <typename... Args>
  static SpeechRecognitionHypothesisPtr New(Args&&... args) {
    return SpeechRecognitionHypothesisPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpeechRecognitionHypothesisPtr From(const U& u) {
    return mojo::TypeConverter<SpeechRecognitionHypothesisPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpeechRecognitionHypothesis>::Convert(*this);
  }


  SpeechRecognitionHypothesis();

  SpeechRecognitionHypothesis(
      const base::string16& utterance,
      double confidence);

  ~SpeechRecognitionHypothesis();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpeechRecognitionHypothesisPtr>
  SpeechRecognitionHypothesisPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpeechRecognitionHypothesis>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpeechRecognitionHypothesis::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpeechRecognitionHypothesis::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpeechRecognitionHypothesis_UnserializedMessageContext<
            UserType, SpeechRecognitionHypothesis::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpeechRecognitionHypothesis::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SpeechRecognitionHypothesis::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpeechRecognitionHypothesis_UnserializedMessageContext<
            UserType, SpeechRecognitionHypothesis::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpeechRecognitionHypothesis::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 utterance;
  double confidence;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT SpeechRecognitionResult {
 public:
  using DataView = SpeechRecognitionResultDataView;
  using Data_ = internal::SpeechRecognitionResult_Data;

  template <typename... Args>
  static SpeechRecognitionResultPtr New(Args&&... args) {
    return SpeechRecognitionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpeechRecognitionResultPtr From(const U& u) {
    return mojo::TypeConverter<SpeechRecognitionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpeechRecognitionResult>::Convert(*this);
  }


  SpeechRecognitionResult();

  SpeechRecognitionResult(
      const std::vector<content::SpeechRecognitionHypothesis>& hypotheses,
      bool is_provisional);

  ~SpeechRecognitionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpeechRecognitionResultPtr>
  SpeechRecognitionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpeechRecognitionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpeechRecognitionResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpeechRecognitionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpeechRecognitionResult_UnserializedMessageContext<
            UserType, SpeechRecognitionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpeechRecognitionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SpeechRecognitionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpeechRecognitionResult_UnserializedMessageContext<
            UserType, SpeechRecognitionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpeechRecognitionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<content::SpeechRecognitionHypothesis> hypotheses;
  bool is_provisional;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SpeechRecognitionHypothesisPtr SpeechRecognitionHypothesis::Clone() const {
  return New(
      mojo::Clone(utterance),
      mojo::Clone(confidence)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpeechRecognitionHypothesis>::value>::type*>
bool SpeechRecognitionHypothesis::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->utterance, other_struct.utterance))
    return false;
  if (!mojo::Equals(this->confidence, other_struct.confidence))
    return false;
  return true;
}
template <typename StructPtrType>
SpeechRecognitionResultPtr SpeechRecognitionResult::Clone() const {
  return New(
      mojo::Clone(hypotheses),
      mojo::Clone(is_provisional)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpeechRecognitionResult>::value>::type*>
bool SpeechRecognitionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hypotheses, other_struct.hypotheses))
    return false;
  if (!mojo::Equals(this->is_provisional, other_struct.is_provisional))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::SpeechRecognitionHypothesis::DataView,
                                         ::content::mojom::SpeechRecognitionHypothesisPtr> {
  static bool IsNull(const ::content::mojom::SpeechRecognitionHypothesisPtr& input) { return !input; }
  static void SetToNull(::content::mojom::SpeechRecognitionHypothesisPtr* output) { output->reset(); }

  static const decltype(::content::mojom::SpeechRecognitionHypothesis::utterance)& utterance(
      const ::content::mojom::SpeechRecognitionHypothesisPtr& input) {
    return input->utterance;
  }

  static decltype(::content::mojom::SpeechRecognitionHypothesis::confidence) confidence(
      const ::content::mojom::SpeechRecognitionHypothesisPtr& input) {
    return input->confidence;
  }

  static bool Read(::content::mojom::SpeechRecognitionHypothesis::DataView input, ::content::mojom::SpeechRecognitionHypothesisPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::SpeechRecognitionResult::DataView,
                                         ::content::mojom::SpeechRecognitionResultPtr> {
  static bool IsNull(const ::content::mojom::SpeechRecognitionResultPtr& input) { return !input; }
  static void SetToNull(::content::mojom::SpeechRecognitionResultPtr* output) { output->reset(); }

  static const decltype(::content::mojom::SpeechRecognitionResult::hypotheses)& hypotheses(
      const ::content::mojom::SpeechRecognitionResultPtr& input) {
    return input->hypotheses;
  }

  static decltype(::content::mojom::SpeechRecognitionResult::is_provisional) is_provisional(
      const ::content::mojom::SpeechRecognitionResultPtr& input) {
    return input->is_provisional;
  }

  static bool Read(::content::mojom::SpeechRecognitionResult::DataView input, ::content::mojom::SpeechRecognitionResultPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_RESULT_MOJOM_H_