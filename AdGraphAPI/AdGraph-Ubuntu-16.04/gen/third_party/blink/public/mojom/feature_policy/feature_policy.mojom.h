// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_H_

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
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared.h"
#include "url/mojom/origin.mojom.h"
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
#include "third_party/blink/public/common/feature_policy/feature_policy.h"
#include "third_party/blink/public/common/frame/sandbox_flags.h"
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class ParsedFeaturePolicyDeclaration;
using ParsedFeaturePolicyDeclarationPtr = mojo::StructPtr<ParsedFeaturePolicyDeclaration>;






class BLINK_COMMON_EXPORT ParsedFeaturePolicyDeclaration {
 public:
  using DataView = ParsedFeaturePolicyDeclarationDataView;
  using Data_ = internal::ParsedFeaturePolicyDeclaration_Data;

  template <typename... Args>
  static ParsedFeaturePolicyDeclarationPtr New(Args&&... args) {
    return ParsedFeaturePolicyDeclarationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ParsedFeaturePolicyDeclarationPtr From(const U& u) {
    return mojo::TypeConverter<ParsedFeaturePolicyDeclarationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ParsedFeaturePolicyDeclaration>::Convert(*this);
  }


  ParsedFeaturePolicyDeclaration();

  ParsedFeaturePolicyDeclaration(
      FeaturePolicyFeature feature,
      bool matches_all_origins,
      const std::vector<url::Origin>& origins);

  ~ParsedFeaturePolicyDeclaration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ParsedFeaturePolicyDeclarationPtr>
  ParsedFeaturePolicyDeclarationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ParsedFeaturePolicyDeclaration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ParsedFeaturePolicyDeclaration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ParsedFeaturePolicyDeclaration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ParsedFeaturePolicyDeclaration_UnserializedMessageContext<
            UserType, ParsedFeaturePolicyDeclaration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ParsedFeaturePolicyDeclaration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ParsedFeaturePolicyDeclaration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ParsedFeaturePolicyDeclaration_UnserializedMessageContext<
            UserType, ParsedFeaturePolicyDeclaration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ParsedFeaturePolicyDeclaration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  FeaturePolicyFeature feature;
  bool matches_all_origins;
  std::vector<url::Origin> origins;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ParsedFeaturePolicyDeclarationPtr ParsedFeaturePolicyDeclaration::Clone() const {
  return New(
      mojo::Clone(feature),
      mojo::Clone(matches_all_origins),
      mojo::Clone(origins)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ParsedFeaturePolicyDeclaration>::value>::type*>
bool ParsedFeaturePolicyDeclaration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->feature, other_struct.feature))
    return false;
  if (!mojo::Equals(this->matches_all_origins, other_struct.matches_all_origins))
    return false;
  if (!mojo::Equals(this->origins, other_struct.origins))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ParsedFeaturePolicyDeclaration::DataView,
                                         ::blink::mojom::ParsedFeaturePolicyDeclarationPtr> {
  static bool IsNull(const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ParsedFeaturePolicyDeclarationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::feature) feature(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->feature;
  }

  static decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::matches_all_origins) matches_all_origins(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->matches_all_origins;
  }

  static const decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::origins)& origins(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->origins;
  }

  static bool Read(::blink::mojom::ParsedFeaturePolicyDeclaration::DataView input, ::blink::mojom::ParsedFeaturePolicyDeclarationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_H_