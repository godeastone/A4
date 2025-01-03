// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_TRANSFERRABLE_URL_LOADER_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_TRANSFERRABLE_URL_LOADER_MOJOM_H_

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
#include "content/public/common/transferrable_url_loader.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class TransferrableURLLoader;
using TransferrableURLLoaderPtr = mojo::StructPtr<TransferrableURLLoader>;






class CONTENT_EXPORT TransferrableURLLoader {
 public:
  using DataView = TransferrableURLLoaderDataView;
  using Data_ = internal::TransferrableURLLoader_Data;

  template <typename... Args>
  static TransferrableURLLoaderPtr New(Args&&... args) {
    return TransferrableURLLoaderPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TransferrableURLLoaderPtr From(const U& u) {
    return mojo::TypeConverter<TransferrableURLLoaderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TransferrableURLLoader>::Convert(*this);
  }


  TransferrableURLLoader();

  TransferrableURLLoader(
      const GURL& url,
      ::network::mojom::URLLoaderPtrInfo url_loader,
      ::network::mojom::URLLoaderClientRequest url_loader_client,
      const network::ResourceResponseHead& head);

  ~TransferrableURLLoader();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TransferrableURLLoaderPtr>
  TransferrableURLLoaderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TransferrableURLLoader>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TransferrableURLLoader::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TransferrableURLLoader::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TransferrableURLLoader_UnserializedMessageContext<
            UserType, TransferrableURLLoader::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TransferrableURLLoader::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TransferrableURLLoader::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TransferrableURLLoader_UnserializedMessageContext<
            UserType, TransferrableURLLoader::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TransferrableURLLoader::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL url;
  ::network::mojom::URLLoaderPtrInfo url_loader;
  ::network::mojom::URLLoaderClientRequest url_loader_client;
  network::ResourceResponseHead head;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TransferrableURLLoader);
};

template <typename StructPtrType>
TransferrableURLLoaderPtr TransferrableURLLoader::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(url_loader),
      mojo::Clone(url_loader_client),
      mojo::Clone(head)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TransferrableURLLoader>::value>::type*>
bool TransferrableURLLoader::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->url_loader, other_struct.url_loader))
    return false;
  if (!mojo::Equals(this->url_loader_client, other_struct.url_loader_client))
    return false;
  if (!mojo::Equals(this->head, other_struct.head))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::TransferrableURLLoader::DataView,
                                         ::content::mojom::TransferrableURLLoaderPtr> {
  static bool IsNull(const ::content::mojom::TransferrableURLLoaderPtr& input) { return !input; }
  static void SetToNull(::content::mojom::TransferrableURLLoaderPtr* output) { output->reset(); }

  static const decltype(::content::mojom::TransferrableURLLoader::url)& url(
      const ::content::mojom::TransferrableURLLoaderPtr& input) {
    return input->url;
  }

  static  decltype(::content::mojom::TransferrableURLLoader::url_loader)& url_loader(
       ::content::mojom::TransferrableURLLoaderPtr& input) {
    return input->url_loader;
  }

  static  decltype(::content::mojom::TransferrableURLLoader::url_loader_client)& url_loader_client(
       ::content::mojom::TransferrableURLLoaderPtr& input) {
    return input->url_loader_client;
  }

  static const decltype(::content::mojom::TransferrableURLLoader::head)& head(
      const ::content::mojom::TransferrableURLLoaderPtr& input) {
    return input->head;
  }

  static bool Read(::content::mojom::TransferrableURLLoader::DataView input, ::content::mojom::TransferrableURLLoaderPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_TRANSFERRABLE_URL_LOADER_MOJOM_H_