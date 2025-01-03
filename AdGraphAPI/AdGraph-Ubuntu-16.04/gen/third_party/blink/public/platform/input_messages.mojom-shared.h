// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/input_messages.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TextSuggestionBackendInterfaceBase {};

using TextSuggestionBackendPtrDataView =
    mojo::InterfacePtrDataView<TextSuggestionBackendInterfaceBase>;
using TextSuggestionBackendRequestDataView =
    mojo::InterfaceRequestDataView<TextSuggestionBackendInterfaceBase>;
using TextSuggestionBackendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextSuggestionBackendInterfaceBase>;
using TextSuggestionBackendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextSuggestionBackendInterfaceBase>;
class TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView {
 public:
  TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView() {}

  TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView(
      internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSuggestionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestion(UserType* output) {
    auto* pointer = data_->suggestion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView {
 public:
  TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView() {}

  TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView(
      internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t marker_tag() const {
    return data_->marker_tag;
  }
  int32_t suggestion_index() const {
    return data_->suggestion_index;
  }
 private:
  internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data* data_ = nullptr;
};

class TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView {
 public:
  TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView() {}

  TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView(
      internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* data_ = nullptr;
};

class TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView {
 public:
  TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView() {}

  TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView(
      internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSuggestionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestion(UserType* output) {
    auto* pointer = data_->suggestion.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView {
 public:
  TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView() {}

  TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView(
      internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* data_ = nullptr;
};

class TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView {
 public:
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView() {}

  TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView(
      internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t max_number_of_suggestions() const {
    return data_->max_number_of_suggestions;
  }
 private:
  internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView::GetSuggestionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suggestion.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView::GetSuggestionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->suggestion.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_H_
