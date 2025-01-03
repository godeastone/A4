// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_H_

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
#include "content/public/common/load_timing_info.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#include "net/base/load_timing_info.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class LoadTimingInfoConnectTiming;
using LoadTimingInfoConnectTimingPtr = mojo::StructPtr<LoadTimingInfoConnectTiming>;

class LoadTimingInfo;
using LoadTimingInfoPtr = mojo::StructPtr<LoadTimingInfo>;







class CONTENT_EXPORT LoadTimingInfoConnectTiming {
 public:
  using DataView = LoadTimingInfoConnectTimingDataView;
  using Data_ = internal::LoadTimingInfoConnectTiming_Data;

  template <typename... Args>
  static LoadTimingInfoConnectTimingPtr New(Args&&... args) {
    return LoadTimingInfoConnectTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LoadTimingInfoConnectTimingPtr From(const U& u) {
    return mojo::TypeConverter<LoadTimingInfoConnectTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LoadTimingInfoConnectTiming>::Convert(*this);
  }


  LoadTimingInfoConnectTiming();

  LoadTimingInfoConnectTiming(
      base::TimeTicks dns_start,
      base::TimeTicks dns_end,
      base::TimeTicks connect_start,
      base::TimeTicks connect_end,
      base::TimeTicks ssl_start,
      base::TimeTicks ssl_end);

  ~LoadTimingInfoConnectTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LoadTimingInfoConnectTimingPtr>
  LoadTimingInfoConnectTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LoadTimingInfoConnectTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LoadTimingInfoConnectTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LoadTimingInfoConnectTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LoadTimingInfoConnectTiming_UnserializedMessageContext<
            UserType, LoadTimingInfoConnectTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LoadTimingInfoConnectTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LoadTimingInfoConnectTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LoadTimingInfoConnectTiming_UnserializedMessageContext<
            UserType, LoadTimingInfoConnectTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LoadTimingInfoConnectTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::TimeTicks dns_start;
  base::TimeTicks dns_end;
  base::TimeTicks connect_start;
  base::TimeTicks connect_end;
  base::TimeTicks ssl_start;
  base::TimeTicks ssl_end;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT LoadTimingInfo {
 public:
  using DataView = LoadTimingInfoDataView;
  using Data_ = internal::LoadTimingInfo_Data;

  template <typename... Args>
  static LoadTimingInfoPtr New(Args&&... args) {
    return LoadTimingInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LoadTimingInfoPtr From(const U& u) {
    return mojo::TypeConverter<LoadTimingInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LoadTimingInfo>::Convert(*this);
  }


  LoadTimingInfo();

  LoadTimingInfo(
      bool socket_reused,
      uint32_t socket_log_id,
      base::Time request_start_time,
      base::TimeTicks request_start,
      base::TimeTicks proxy_resolve_start,
      base::TimeTicks proxy_resolve_end,
      const net::LoadTimingInfo::ConnectTiming& connect_timing,
      base::TimeTicks send_start,
      base::TimeTicks send_end,
      base::TimeTicks receive_headers_end,
      base::TimeTicks push_start,
      base::TimeTicks push_end);

  ~LoadTimingInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LoadTimingInfoPtr>
  LoadTimingInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LoadTimingInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LoadTimingInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LoadTimingInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LoadTimingInfo_UnserializedMessageContext<
            UserType, LoadTimingInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LoadTimingInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LoadTimingInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LoadTimingInfo_UnserializedMessageContext<
            UserType, LoadTimingInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LoadTimingInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool socket_reused;
  uint32_t socket_log_id;
  base::Time request_start_time;
  base::TimeTicks request_start;
  base::TimeTicks proxy_resolve_start;
  base::TimeTicks proxy_resolve_end;
  net::LoadTimingInfo::ConnectTiming connect_timing;
  base::TimeTicks send_start;
  base::TimeTicks send_end;
  base::TimeTicks receive_headers_end;
  base::TimeTicks push_start;
  base::TimeTicks push_end;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
LoadTimingInfoConnectTimingPtr LoadTimingInfoConnectTiming::Clone() const {
  return New(
      mojo::Clone(dns_start),
      mojo::Clone(dns_end),
      mojo::Clone(connect_start),
      mojo::Clone(connect_end),
      mojo::Clone(ssl_start),
      mojo::Clone(ssl_end)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LoadTimingInfoConnectTiming>::value>::type*>
bool LoadTimingInfoConnectTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dns_start, other_struct.dns_start))
    return false;
  if (!mojo::Equals(this->dns_end, other_struct.dns_end))
    return false;
  if (!mojo::Equals(this->connect_start, other_struct.connect_start))
    return false;
  if (!mojo::Equals(this->connect_end, other_struct.connect_end))
    return false;
  if (!mojo::Equals(this->ssl_start, other_struct.ssl_start))
    return false;
  if (!mojo::Equals(this->ssl_end, other_struct.ssl_end))
    return false;
  return true;
}
template <typename StructPtrType>
LoadTimingInfoPtr LoadTimingInfo::Clone() const {
  return New(
      mojo::Clone(socket_reused),
      mojo::Clone(socket_log_id),
      mojo::Clone(request_start_time),
      mojo::Clone(request_start),
      mojo::Clone(proxy_resolve_start),
      mojo::Clone(proxy_resolve_end),
      mojo::Clone(connect_timing),
      mojo::Clone(send_start),
      mojo::Clone(send_end),
      mojo::Clone(receive_headers_end),
      mojo::Clone(push_start),
      mojo::Clone(push_end)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LoadTimingInfo>::value>::type*>
bool LoadTimingInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->socket_reused, other_struct.socket_reused))
    return false;
  if (!mojo::Equals(this->socket_log_id, other_struct.socket_log_id))
    return false;
  if (!mojo::Equals(this->request_start_time, other_struct.request_start_time))
    return false;
  if (!mojo::Equals(this->request_start, other_struct.request_start))
    return false;
  if (!mojo::Equals(this->proxy_resolve_start, other_struct.proxy_resolve_start))
    return false;
  if (!mojo::Equals(this->proxy_resolve_end, other_struct.proxy_resolve_end))
    return false;
  if (!mojo::Equals(this->connect_timing, other_struct.connect_timing))
    return false;
  if (!mojo::Equals(this->send_start, other_struct.send_start))
    return false;
  if (!mojo::Equals(this->send_end, other_struct.send_end))
    return false;
  if (!mojo::Equals(this->receive_headers_end, other_struct.receive_headers_end))
    return false;
  if (!mojo::Equals(this->push_start, other_struct.push_start))
    return false;
  if (!mojo::Equals(this->push_end, other_struct.push_end))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::LoadTimingInfoConnectTiming::DataView,
                                         ::content::mojom::LoadTimingInfoConnectTimingPtr> {
  static bool IsNull(const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) { return !input; }
  static void SetToNull(::content::mojom::LoadTimingInfoConnectTimingPtr* output) { output->reset(); }

  static const decltype(::content::mojom::LoadTimingInfoConnectTiming::dns_start)& dns_start(
      const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) {
    return input->dns_start;
  }

  static const decltype(::content::mojom::LoadTimingInfoConnectTiming::dns_end)& dns_end(
      const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) {
    return input->dns_end;
  }

  static const decltype(::content::mojom::LoadTimingInfoConnectTiming::connect_start)& connect_start(
      const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) {
    return input->connect_start;
  }

  static const decltype(::content::mojom::LoadTimingInfoConnectTiming::connect_end)& connect_end(
      const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) {
    return input->connect_end;
  }

  static const decltype(::content::mojom::LoadTimingInfoConnectTiming::ssl_start)& ssl_start(
      const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) {
    return input->ssl_start;
  }

  static const decltype(::content::mojom::LoadTimingInfoConnectTiming::ssl_end)& ssl_end(
      const ::content::mojom::LoadTimingInfoConnectTimingPtr& input) {
    return input->ssl_end;
  }

  static bool Read(::content::mojom::LoadTimingInfoConnectTiming::DataView input, ::content::mojom::LoadTimingInfoConnectTimingPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::LoadTimingInfo::DataView,
                                         ::content::mojom::LoadTimingInfoPtr> {
  static bool IsNull(const ::content::mojom::LoadTimingInfoPtr& input) { return !input; }
  static void SetToNull(::content::mojom::LoadTimingInfoPtr* output) { output->reset(); }

  static decltype(::content::mojom::LoadTimingInfo::socket_reused) socket_reused(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->socket_reused;
  }

  static decltype(::content::mojom::LoadTimingInfo::socket_log_id) socket_log_id(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->socket_log_id;
  }

  static const decltype(::content::mojom::LoadTimingInfo::request_start_time)& request_start_time(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->request_start_time;
  }

  static const decltype(::content::mojom::LoadTimingInfo::request_start)& request_start(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->request_start;
  }

  static const decltype(::content::mojom::LoadTimingInfo::proxy_resolve_start)& proxy_resolve_start(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->proxy_resolve_start;
  }

  static const decltype(::content::mojom::LoadTimingInfo::proxy_resolve_end)& proxy_resolve_end(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->proxy_resolve_end;
  }

  static const decltype(::content::mojom::LoadTimingInfo::connect_timing)& connect_timing(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->connect_timing;
  }

  static const decltype(::content::mojom::LoadTimingInfo::send_start)& send_start(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->send_start;
  }

  static const decltype(::content::mojom::LoadTimingInfo::send_end)& send_end(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->send_end;
  }

  static const decltype(::content::mojom::LoadTimingInfo::receive_headers_end)& receive_headers_end(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->receive_headers_end;
  }

  static const decltype(::content::mojom::LoadTimingInfo::push_start)& push_start(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->push_start;
  }

  static const decltype(::content::mojom::LoadTimingInfo::push_end)& push_end(
      const ::content::mojom::LoadTimingInfoPtr& input) {
    return input->push_end;
  }

  static bool Read(::content::mojom::LoadTimingInfo::DataView input, ::content::mojom::LoadTimingInfoPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_LOAD_TIMING_INFO_MOJOM_H_