// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_H_

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
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace WTF {
struct blink_mojom_internal_WebSandboxFlags_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::WebSandboxFlags& value) {
    using utype = std::underlying_type<::blink::mojom::WebSandboxFlags>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::WebSandboxFlags& left, const ::blink::mojom::WebSandboxFlags& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::WebSandboxFlags> {
  using Hash = blink_mojom_internal_WebSandboxFlags_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::WebSandboxFlags>
    : public GenericHashTraits<::blink::mojom::WebSandboxFlags> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::WebSandboxFlags& value) {
    return value == static_cast<::blink::mojom::WebSandboxFlags>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::WebSandboxFlags& slot, bool) {
    slot = static_cast<::blink::mojom::WebSandboxFlags>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::WebSandboxFlags& value) {
    return value == static_cast<::blink::mojom::WebSandboxFlags>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_FeaturePolicyFeature_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FeaturePolicyFeature& value) {
    using utype = std::underlying_type<::blink::mojom::FeaturePolicyFeature>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FeaturePolicyFeature& left, const ::blink::mojom::FeaturePolicyFeature& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::FeaturePolicyFeature> {
  using Hash = blink_mojom_internal_FeaturePolicyFeature_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::FeaturePolicyFeature>
    : public GenericHashTraits<::blink::mojom::FeaturePolicyFeature> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FeaturePolicyFeature& value) {
    return value == static_cast<::blink::mojom::FeaturePolicyFeature>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FeaturePolicyFeature& slot, bool) {
    slot = static_cast<::blink::mojom::FeaturePolicyFeature>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FeaturePolicyFeature& value) {
    return value == static_cast<::blink::mojom::FeaturePolicyFeature>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using WebSandboxFlags = WebSandboxFlags;  // Alias for definition in the parent namespace.
using FeaturePolicyFeature = FeaturePolicyFeature;  // Alias for definition in the parent namespace.
class ParsedFeaturePolicyDeclaration;
using ParsedFeaturePolicyDeclarationPtr = mojo::StructPtr<ParsedFeaturePolicyDeclaration>;






class PLATFORM_EXPORT ParsedFeaturePolicyDeclaration {
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
      const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& origins);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ParsedFeaturePolicyDeclaration::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>> origins;

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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ParsedFeaturePolicyDeclaration::DataView,
                                         ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr> {
  static bool IsNull(const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::feature) feature(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->feature;
  }

  static decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::matches_all_origins) matches_all_origins(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->matches_all_origins;
  }

  static const decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::origins)& origins(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->origins;
  }

  static bool Read(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::DataView input, ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_H_