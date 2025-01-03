// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_APPCACHE_INFO_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_APPCACHE_INFO_MOJOM_H_

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
#include "content/public/common/appcache_info.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
constexpr int64_t kAppCacheNoCacheId = 0;
constexpr int64_t kAppCacheNoResponseId = 0;
constexpr int64_t kAppCacheUnknownCacheId = -1;
class AppCacheInfo;
using AppCacheInfoPtr = mojo::StructPtr<AppCacheInfo>;






class CONTENT_EXPORT AppCacheInfo {
 public:
  using DataView = AppCacheInfoDataView;
  using Data_ = internal::AppCacheInfo_Data;

  template <typename... Args>
  static AppCacheInfoPtr New(Args&&... args) {
    return AppCacheInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppCacheInfoPtr From(const U& u) {
    return mojo::TypeConverter<AppCacheInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppCacheInfo>::Convert(*this);
  }


  AppCacheInfo();

  AppCacheInfo(
      const GURL& manifest_url,
      base::Time creation_time,
      base::Time last_update_time,
      base::Time last_access_time,
      int64_t cache_id,
      int64_t group_id,
      AppCacheStatus status,
      int64_t size,
      bool is_complete);

  ~AppCacheInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppCacheInfoPtr>
  AppCacheInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AppCacheInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppCacheInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppCacheInfo_UnserializedMessageContext<
            UserType, AppCacheInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AppCacheInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AppCacheInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppCacheInfo_UnserializedMessageContext<
            UserType, AppCacheInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppCacheInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL manifest_url;
  base::Time creation_time;
  base::Time last_update_time;
  base::Time last_access_time;
  int64_t cache_id;
  int64_t group_id;
  AppCacheStatus status;
  int64_t size;
  bool is_complete;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AppCacheInfoPtr AppCacheInfo::Clone() const {
  return New(
      mojo::Clone(manifest_url),
      mojo::Clone(creation_time),
      mojo::Clone(last_update_time),
      mojo::Clone(last_access_time),
      mojo::Clone(cache_id),
      mojo::Clone(group_id),
      mojo::Clone(status),
      mojo::Clone(size),
      mojo::Clone(is_complete)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AppCacheInfo>::value>::type*>
bool AppCacheInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->manifest_url, other_struct.manifest_url))
    return false;
  if (!mojo::Equals(this->creation_time, other_struct.creation_time))
    return false;
  if (!mojo::Equals(this->last_update_time, other_struct.last_update_time))
    return false;
  if (!mojo::Equals(this->last_access_time, other_struct.last_access_time))
    return false;
  if (!mojo::Equals(this->cache_id, other_struct.cache_id))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->is_complete, other_struct.is_complete))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::AppCacheInfo::DataView,
                                         ::content::mojom::AppCacheInfoPtr> {
  static bool IsNull(const ::content::mojom::AppCacheInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::AppCacheInfoPtr* output) { output->reset(); }

  static const decltype(::content::mojom::AppCacheInfo::manifest_url)& manifest_url(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->manifest_url;
  }

  static const decltype(::content::mojom::AppCacheInfo::creation_time)& creation_time(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->creation_time;
  }

  static const decltype(::content::mojom::AppCacheInfo::last_update_time)& last_update_time(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->last_update_time;
  }

  static const decltype(::content::mojom::AppCacheInfo::last_access_time)& last_access_time(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->last_access_time;
  }

  static decltype(::content::mojom::AppCacheInfo::cache_id) cache_id(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->cache_id;
  }

  static decltype(::content::mojom::AppCacheInfo::group_id) group_id(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->group_id;
  }

  static decltype(::content::mojom::AppCacheInfo::status) status(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->status;
  }

  static decltype(::content::mojom::AppCacheInfo::size) size(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->size;
  }

  static decltype(::content::mojom::AppCacheInfo::is_complete) is_complete(
      const ::content::mojom::AppCacheInfoPtr& input) {
    return input->is_complete;
  }

  static bool Read(::content::mojom::AppCacheInfo::DataView input, ::content::mojom::AppCacheInfoPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_APPCACHE_INFO_MOJOM_H_