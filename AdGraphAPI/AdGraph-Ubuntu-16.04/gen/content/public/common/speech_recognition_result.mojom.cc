// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/public/common/speech_recognition_result.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/public/common/speech_recognition_result.mojom-shared-message-ids.h"
#include "content/public/common/speech_recognition_result_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
namespace content {
namespace mojom {
SpeechRecognitionHypothesis::SpeechRecognitionHypothesis()
    : utterance(),
      confidence() {}

SpeechRecognitionHypothesis::SpeechRecognitionHypothesis(
    const base::string16& utterance_in,
    double confidence_in)
    : utterance(std::move(utterance_in)),
      confidence(std::move(confidence_in)) {}

SpeechRecognitionHypothesis::~SpeechRecognitionHypothesis() = default;

bool SpeechRecognitionHypothesis::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SpeechRecognitionResult::SpeechRecognitionResult()
    : hypotheses(),
      is_provisional() {}

SpeechRecognitionResult::SpeechRecognitionResult(
    const std::vector<content::SpeechRecognitionHypothesis>& hypotheses_in,
    bool is_provisional_in)
    : hypotheses(std::move(hypotheses_in)),
      is_provisional(std::move(is_provisional_in)) {}

SpeechRecognitionResult::~SpeechRecognitionResult() = default;

bool SpeechRecognitionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::SpeechRecognitionHypothesis::DataView, ::content::mojom::SpeechRecognitionHypothesisPtr>::Read(
    ::content::mojom::SpeechRecognitionHypothesis::DataView input,
    ::content::mojom::SpeechRecognitionHypothesisPtr* output) {
  bool success = true;
  ::content::mojom::SpeechRecognitionHypothesisPtr result(::content::mojom::SpeechRecognitionHypothesis::New());
  
      if (!input.ReadUtterance(&result->utterance))
        success = false;
      result->confidence = input.confidence();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::SpeechRecognitionResult::DataView, ::content::mojom::SpeechRecognitionResultPtr>::Read(
    ::content::mojom::SpeechRecognitionResult::DataView input,
    ::content::mojom::SpeechRecognitionResultPtr* output) {
  bool success = true;
  ::content::mojom::SpeechRecognitionResultPtr result(::content::mojom::SpeechRecognitionResult::New());
  
      if (!input.ReadHypotheses(&result->hypotheses))
        success = false;
      result->is_provisional = input.is_provisional();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif