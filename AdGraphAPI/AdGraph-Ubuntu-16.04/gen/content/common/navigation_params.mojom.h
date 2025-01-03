// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_H_
#define CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_H_

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
#include "content/common/navigation_params.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.h"
#include "url/mojom/origin.mojom.h"
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
#include "third_party/blink/public/platform/web_mixed_content_context_type.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class BeginNavigationParams;
using BeginNavigationParamsPtr = mojo::StructPtr<BeginNavigationParams>;






class CONTENT_EXPORT BeginNavigationParams {
 public:
  using DataView = BeginNavigationParamsDataView;
  using Data_ = internal::BeginNavigationParams_Data;

  template <typename... Args>
  static BeginNavigationParamsPtr New(Args&&... args) {
    return BeginNavigationParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BeginNavigationParamsPtr From(const U& u) {
    return mojo::TypeConverter<BeginNavigationParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BeginNavigationParams>::Convert(*this);
  }


  BeginNavigationParams();

  BeginNavigationParams(
      const std::string& headers,
      int32_t load_flags,
      bool skip_service_worker,
      ::content::RequestContextType request_context_type,
      ::blink::WebMixedContentContextType mixed_content_context_type,
      bool is_form_submission,
      const GURL& searchable_form_url,
      const std::string& searchable_form_encoding,
      const base::Optional<url::Origin>& initiator_origin,
      const GURL& client_side_redirect_url,
      base::Optional<base::Value> devtools_initiator);

  ~BeginNavigationParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BeginNavigationParamsPtr>
  BeginNavigationParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BeginNavigationParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BeginNavigationParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BeginNavigationParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BeginNavigationParams_UnserializedMessageContext<
            UserType, BeginNavigationParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BeginNavigationParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BeginNavigationParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BeginNavigationParams_UnserializedMessageContext<
            UserType, BeginNavigationParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BeginNavigationParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string headers;
  int32_t load_flags;
  bool skip_service_worker;
  ::content::RequestContextType request_context_type;
  ::blink::WebMixedContentContextType mixed_content_context_type;
  bool is_form_submission;
  GURL searchable_form_url;
  std::string searchable_form_encoding;
  base::Optional<url::Origin> initiator_origin;
  GURL client_side_redirect_url;
  base::Optional<base::Value> devtools_initiator;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BeginNavigationParams);
};

template <typename StructPtrType>
BeginNavigationParamsPtr BeginNavigationParams::Clone() const {
  return New(
      mojo::Clone(headers),
      mojo::Clone(load_flags),
      mojo::Clone(skip_service_worker),
      mojo::Clone(request_context_type),
      mojo::Clone(mixed_content_context_type),
      mojo::Clone(is_form_submission),
      mojo::Clone(searchable_form_url),
      mojo::Clone(searchable_form_encoding),
      mojo::Clone(initiator_origin),
      mojo::Clone(client_side_redirect_url),
      mojo::Clone(devtools_initiator)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BeginNavigationParams>::value>::type*>
bool BeginNavigationParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->load_flags, other_struct.load_flags))
    return false;
  if (!mojo::Equals(this->skip_service_worker, other_struct.skip_service_worker))
    return false;
  if (!mojo::Equals(this->request_context_type, other_struct.request_context_type))
    return false;
  if (!mojo::Equals(this->mixed_content_context_type, other_struct.mixed_content_context_type))
    return false;
  if (!mojo::Equals(this->is_form_submission, other_struct.is_form_submission))
    return false;
  if (!mojo::Equals(this->searchable_form_url, other_struct.searchable_form_url))
    return false;
  if (!mojo::Equals(this->searchable_form_encoding, other_struct.searchable_form_encoding))
    return false;
  if (!mojo::Equals(this->initiator_origin, other_struct.initiator_origin))
    return false;
  if (!mojo::Equals(this->client_side_redirect_url, other_struct.client_side_redirect_url))
    return false;
  if (!mojo::Equals(this->devtools_initiator, other_struct.devtools_initiator))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::BeginNavigationParams::DataView,
                                         ::content::mojom::BeginNavigationParamsPtr> {
  static bool IsNull(const ::content::mojom::BeginNavigationParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::BeginNavigationParamsPtr* output) { output->reset(); }

  static const decltype(::content::mojom::BeginNavigationParams::headers)& headers(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->headers;
  }

  static decltype(::content::mojom::BeginNavigationParams::load_flags) load_flags(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->load_flags;
  }

  static decltype(::content::mojom::BeginNavigationParams::skip_service_worker) skip_service_worker(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->skip_service_worker;
  }

  static decltype(::content::mojom::BeginNavigationParams::request_context_type) request_context_type(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->request_context_type;
  }

  static decltype(::content::mojom::BeginNavigationParams::mixed_content_context_type) mixed_content_context_type(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->mixed_content_context_type;
  }

  static decltype(::content::mojom::BeginNavigationParams::is_form_submission) is_form_submission(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->is_form_submission;
  }

  static const decltype(::content::mojom::BeginNavigationParams::searchable_form_url)& searchable_form_url(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->searchable_form_url;
  }

  static const decltype(::content::mojom::BeginNavigationParams::searchable_form_encoding)& searchable_form_encoding(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->searchable_form_encoding;
  }

  static const decltype(::content::mojom::BeginNavigationParams::initiator_origin)& initiator_origin(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->initiator_origin;
  }

  static const decltype(::content::mojom::BeginNavigationParams::client_side_redirect_url)& client_side_redirect_url(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->client_side_redirect_url;
  }

  static const decltype(::content::mojom::BeginNavigationParams::devtools_initiator)& devtools_initiator(
      const ::content::mojom::BeginNavigationParamsPtr& input) {
    return input->devtools_initiator;
  }

  static bool Read(::content::mojom::BeginNavigationParams::DataView input, ::content::mojom::BeginNavigationParamsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_NAVIGATION_PARAMS_MOJOM_H_