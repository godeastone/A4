// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_ERROR_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_ERROR_MOJOM_SHARED_H_

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
#include "content/public/common/speech_recognition_error.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class SpeechRecognitionErrorDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::SpeechRecognitionErrorDataView> {
  using Data = ::content::mojom::internal::SpeechRecognitionError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class SpeechRecognitionErrorCode : int32_t {
  kNone,
  kNoSpeech,
  kAborted,
  kAudioCapture,
  kNetwork,
  kNotAllowed,
  kServiceNotAllowed,
  kBadGrammar,
  kLanguageNotSupported,
  kNoMatch,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, SpeechRecognitionErrorCode value) {
  switch(value) {
    case SpeechRecognitionErrorCode::kNone:
      return os << "SpeechRecognitionErrorCode::kNone";
    case SpeechRecognitionErrorCode::kNoSpeech:
      return os << "SpeechRecognitionErrorCode::kNoSpeech";
    case SpeechRecognitionErrorCode::kAborted:
      return os << "SpeechRecognitionErrorCode::kAborted";
    case SpeechRecognitionErrorCode::kAudioCapture:
      return os << "SpeechRecognitionErrorCode::kAudioCapture";
    case SpeechRecognitionErrorCode::kNetwork:
      return os << "SpeechRecognitionErrorCode::kNetwork";
    case SpeechRecognitionErrorCode::kNotAllowed:
      return os << "SpeechRecognitionErrorCode::kNotAllowed";
    case SpeechRecognitionErrorCode::kServiceNotAllowed:
      return os << "SpeechRecognitionErrorCode::kServiceNotAllowed";
    case SpeechRecognitionErrorCode::kBadGrammar:
      return os << "SpeechRecognitionErrorCode::kBadGrammar";
    case SpeechRecognitionErrorCode::kLanguageNotSupported:
      return os << "SpeechRecognitionErrorCode::kLanguageNotSupported";
    case SpeechRecognitionErrorCode::kNoMatch:
      return os << "SpeechRecognitionErrorCode::kNoMatch";
    default:
      return os << "Unknown SpeechRecognitionErrorCode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SpeechRecognitionErrorCode value) {
  return internal::SpeechRecognitionErrorCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SpeechAudioErrorDetails : int32_t {
  kNone,
  kNoMic,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, SpeechAudioErrorDetails value) {
  switch(value) {
    case SpeechAudioErrorDetails::kNone:
      return os << "SpeechAudioErrorDetails::kNone";
    case SpeechAudioErrorDetails::kNoMic:
      return os << "SpeechAudioErrorDetails::kNoMic";
    default:
      return os << "Unknown SpeechAudioErrorDetails value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SpeechAudioErrorDetails value) {
  return internal::SpeechAudioErrorDetails_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SpeechRecognitionErrorDataView {
 public:
  SpeechRecognitionErrorDataView() {}

  SpeechRecognitionErrorDataView(
      internal::SpeechRecognitionError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCode(UserType* output) const {
    auto data_value = data_->code;
    return mojo::internal::Deserialize<::content::mojom::SpeechRecognitionErrorCode>(
        data_value, output);
  }

  SpeechRecognitionErrorCode code() const {
    return static_cast<SpeechRecognitionErrorCode>(data_->code);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) const {
    auto data_value = data_->details;
    return mojo::internal::Deserialize<::content::mojom::SpeechAudioErrorDetails>(
        data_value, output);
  }

  SpeechAudioErrorDetails details() const {
    return static_cast<SpeechAudioErrorDetails>(data_->details);
  }
 private:
  internal::SpeechRecognitionError_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::SpeechRecognitionErrorCode>
    : public mojo::internal::EnumHashImpl<::content::mojom::SpeechRecognitionErrorCode> {};

template <>
struct hash<::content::mojom::SpeechAudioErrorDetails>
    : public mojo::internal::EnumHashImpl<::content::mojom::SpeechAudioErrorDetails> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::SpeechRecognitionErrorCode, ::content::mojom::SpeechRecognitionErrorCode> {
  static ::content::mojom::SpeechRecognitionErrorCode ToMojom(::content::mojom::SpeechRecognitionErrorCode input) { return input; }
  static bool FromMojom(::content::mojom::SpeechRecognitionErrorCode input, ::content::mojom::SpeechRecognitionErrorCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::SpeechRecognitionErrorCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::SpeechRecognitionErrorCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::SpeechRecognitionErrorCode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::SpeechAudioErrorDetails, ::content::mojom::SpeechAudioErrorDetails> {
  static ::content::mojom::SpeechAudioErrorDetails ToMojom(::content::mojom::SpeechAudioErrorDetails input) { return input; }
  static bool FromMojom(::content::mojom::SpeechAudioErrorDetails input, ::content::mojom::SpeechAudioErrorDetails* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::SpeechAudioErrorDetails, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::SpeechAudioErrorDetails, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::SpeechAudioErrorDetails>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::SpeechRecognitionErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::SpeechRecognitionErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::SpeechRecognitionError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::content::mojom::SpeechRecognitionErrorCode>(
        CallWithContext(Traits::code, input, custom_context), &(*output)->code);
    mojo::internal::Serialize<::content::mojom::SpeechAudioErrorDetails>(
        CallWithContext(Traits::details, input, custom_context), &(*output)->details);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::SpeechRecognitionError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::SpeechRecognitionErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {




}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_SPEECH_RECOGNITION_ERROR_MOJOM_SHARED_H_
