// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_SCOPE_SET_MOJOM_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_SCOPE_SET_MOJOM_H_

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
#include "services/identity/public/mojom/scope_set.mojom-shared.h"
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
#include "services/identity/public/cpp/scope_set.h"


namespace identity {
namespace mojom {
class ScopeSet;
using ScopeSetPtr = mojo::StructPtr<ScopeSet>;






class  ScopeSet {
 public:
  using DataView = ScopeSetDataView;
  using Data_ = internal::ScopeSet_Data;

  template <typename... Args>
  static ScopeSetPtr New(Args&&... args) {
    return ScopeSetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScopeSetPtr From(const U& u) {
    return mojo::TypeConverter<ScopeSetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScopeSet>::Convert(*this);
  }


  ScopeSet();

  explicit ScopeSet(
      const std::vector<std::string>& scopes);

  ~ScopeSet();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScopeSetPtr>
  ScopeSetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScopeSet>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScopeSet::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScopeSet::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScopeSet_UnserializedMessageContext<
            UserType, ScopeSet::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScopeSet::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ScopeSet::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScopeSet_UnserializedMessageContext<
            UserType, ScopeSet::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScopeSet::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<std::string> scopes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ScopeSetPtr ScopeSet::Clone() const {
  return New(
      mojo::Clone(scopes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScopeSet>::value>::type*>
bool ScopeSet::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scopes, other_struct.scopes))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace identity

namespace mojo {


template <>
struct  StructTraits<::identity::mojom::ScopeSet::DataView,
                                         ::identity::mojom::ScopeSetPtr> {
  static bool IsNull(const ::identity::mojom::ScopeSetPtr& input) { return !input; }
  static void SetToNull(::identity::mojom::ScopeSetPtr* output) { output->reset(); }

  static const decltype(::identity::mojom::ScopeSet::scopes)& scopes(
      const ::identity::mojom::ScopeSetPtr& input) {
    return input->scopes;
  }

  static bool Read(::identity::mojom::ScopeSet::DataView input, ::identity::mojom::ScopeSetPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_SCOPE_SET_MOJOM_H_