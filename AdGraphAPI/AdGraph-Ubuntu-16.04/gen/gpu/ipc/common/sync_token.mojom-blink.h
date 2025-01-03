// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/sync_token.mojom-shared.h"

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
#include "gpu/command_buffer/common/sync_token.h"


namespace WTF {
struct gpu_mojom_internal_CommandBufferNamespace_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::CommandBufferNamespace& value) {
    using utype = std::underlying_type<::gpu::mojom::CommandBufferNamespace>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::CommandBufferNamespace& left, const ::gpu::mojom::CommandBufferNamespace& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::gpu::mojom::CommandBufferNamespace> {
  using Hash = gpu_mojom_internal_CommandBufferNamespace_DataHashFn;
};

template <>
struct HashTraits<::gpu::mojom::CommandBufferNamespace>
    : public GenericHashTraits<::gpu::mojom::CommandBufferNamespace> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::CommandBufferNamespace& value) {
    return value == static_cast<::gpu::mojom::CommandBufferNamespace>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::CommandBufferNamespace& slot, bool) {
    slot = static_cast<::gpu::mojom::CommandBufferNamespace>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::CommandBufferNamespace& value) {
    return value == static_cast<::gpu::mojom::CommandBufferNamespace>(-1000001);
  }
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {
using CommandBufferNamespace = CommandBufferNamespace;  // Alias for definition in the parent namespace.
class SyncToken;
using SyncTokenPtr = mojo::InlinedStructPtr<SyncToken>;



class  SyncToken {
 public:
  using DataView = SyncTokenDataView;
  using Data_ = internal::SyncToken_Data;

  template <typename... Args>
  static SyncTokenPtr New(Args&&... args) {
    return SyncTokenPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SyncTokenPtr From(const U& u) {
    return mojo::TypeConverter<SyncTokenPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncToken>::Convert(*this);
  }


  SyncToken();

  SyncToken(
      bool verified_flush,
      CommandBufferNamespace namespace_id,
      uint64_t command_buffer_id,
      uint64_t release_count);

  ~SyncToken();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SyncTokenPtr>
  SyncTokenPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SyncToken>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SyncToken::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SyncToken::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SyncToken_UnserializedMessageContext<
            UserType, SyncToken::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SyncToken::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SyncToken::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SyncToken_UnserializedMessageContext<
            UserType, SyncToken::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SyncToken::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool verified_flush;
  CommandBufferNamespace namespace_id;
  uint64_t command_buffer_id;
  uint64_t release_count;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SyncTokenPtr SyncToken::Clone() const {
  return New(
      mojo::Clone(verified_flush),
      mojo::Clone(namespace_id),
      mojo::Clone(command_buffer_id),
      mojo::Clone(release_count)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SyncToken>::value>::type*>
bool SyncToken::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->verified_flush, other_struct.verified_flush))
    return false;
  if (!mojo::Equals(this->namespace_id, other_struct.namespace_id))
    return false;
  if (!mojo::Equals(this->command_buffer_id, other_struct.command_buffer_id))
    return false;
  if (!mojo::Equals(this->release_count, other_struct.release_count))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::SyncToken::DataView,
                                         ::gpu::mojom::blink::SyncTokenPtr> {
  static bool IsNull(const ::gpu::mojom::blink::SyncTokenPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::SyncTokenPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::SyncToken::verified_flush) verified_flush(
      const ::gpu::mojom::blink::SyncTokenPtr& input) {
    return input->verified_flush;
  }

  static decltype(::gpu::mojom::blink::SyncToken::namespace_id) namespace_id(
      const ::gpu::mojom::blink::SyncTokenPtr& input) {
    return input->namespace_id;
  }

  static decltype(::gpu::mojom::blink::SyncToken::command_buffer_id) command_buffer_id(
      const ::gpu::mojom::blink::SyncTokenPtr& input) {
    return input->command_buffer_id;
  }

  static decltype(::gpu::mojom::blink::SyncToken::release_count) release_count(
      const ::gpu::mojom::blink::SyncTokenPtr& input) {
    return input->release_count;
  }

  static bool Read(::gpu::mojom::blink::SyncToken::DataView input, ::gpu::mojom::blink::SyncTokenPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_BLINK_H_