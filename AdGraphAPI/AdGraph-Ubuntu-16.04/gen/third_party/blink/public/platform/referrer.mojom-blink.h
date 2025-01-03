// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REFERRER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REFERRER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/referrer.mojom-shared.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/weborigin/referrer.h"
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct blink_mojom_internal_ReferrerPolicy_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ReferrerPolicy& value) {
    using utype = std::underlying_type<::blink::mojom::ReferrerPolicy>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ReferrerPolicy& left, const ::blink::mojom::ReferrerPolicy& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::ReferrerPolicy> {
  using Hash = blink_mojom_internal_ReferrerPolicy_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::ReferrerPolicy>
    : public GenericHashTraits<::blink::mojom::ReferrerPolicy> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ReferrerPolicy& value) {
    return value == static_cast<::blink::mojom::ReferrerPolicy>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ReferrerPolicy& slot, bool) {
    slot = static_cast<::blink::mojom::ReferrerPolicy>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ReferrerPolicy& value) {
    return value == static_cast<::blink::mojom::ReferrerPolicy>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using ReferrerPolicy = ReferrerPolicy;  // Alias for definition in the parent namespace.
class Referrer;
using ReferrerPtr = mojo::StructPtr<Referrer>;






class BLINK_PLATFORM_EXPORT Referrer {
 public:
  using DataView = ReferrerDataView;
  using Data_ = internal::Referrer_Data;

  template <typename... Args>
  static ReferrerPtr New(Args&&... args) {
    return ReferrerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReferrerPtr From(const U& u) {
    return mojo::TypeConverter<ReferrerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Referrer>::Convert(*this);
  }


  Referrer();

  Referrer(
      const ::blink::KURL& url,
      ReferrerPolicy policy);

  ~Referrer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReferrerPtr>
  ReferrerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Referrer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Referrer::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Referrer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Referrer_UnserializedMessageContext<
            UserType, Referrer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Referrer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Referrer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Referrer_UnserializedMessageContext<
            UserType, Referrer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Referrer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::blink::KURL url;
  ReferrerPolicy policy;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ReferrerPtr Referrer::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(policy)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Referrer>::value>::type*>
bool Referrer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->policy, other_struct.policy))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::Referrer::DataView,
                                         ::blink::mojom::blink::ReferrerPtr> {
  static bool IsNull(const ::blink::mojom::blink::ReferrerPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ReferrerPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::Referrer::url)& url(
      const ::blink::mojom::blink::ReferrerPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::Referrer::policy) policy(
      const ::blink::mojom::blink::ReferrerPtr& input) {
    return input->policy;
  }

  static bool Read(::blink::mojom::blink::Referrer::DataView input, ::blink::mojom::blink::ReferrerPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REFERRER_MOJOM_BLINK_H_