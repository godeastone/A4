// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_SHARED_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_SHARED_H_

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
#include "components/download/public/common/download_stream.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace download {
namespace mojom {
class DownloadStreamHandleDataView;



}  // namespace mojom
}  // namespace download

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::download::mojom::DownloadStreamHandleDataView> {
  using Data = ::download::mojom::internal::DownloadStreamHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace download {
namespace mojom {

enum class NetworkRequestStatus : int32_t {
  OK,
  NETWORK_TIMEOUT,
  NETWORK_DISCONNECTED,
  NETWORK_SERVER_DOWN,
  SERVER_NO_RANGE,
  SERVER_CONTENT_LENGTH_MISMATCH,
  SERVER_UNREACHABLE,
  SERVER_CERT_PROBLEM,
  USER_CANCELED,
  NETWORK_FAILED,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, NetworkRequestStatus value) {
  switch(value) {
    case NetworkRequestStatus::OK:
      return os << "NetworkRequestStatus::OK";
    case NetworkRequestStatus::NETWORK_TIMEOUT:
      return os << "NetworkRequestStatus::NETWORK_TIMEOUT";
    case NetworkRequestStatus::NETWORK_DISCONNECTED:
      return os << "NetworkRequestStatus::NETWORK_DISCONNECTED";
    case NetworkRequestStatus::NETWORK_SERVER_DOWN:
      return os << "NetworkRequestStatus::NETWORK_SERVER_DOWN";
    case NetworkRequestStatus::SERVER_NO_RANGE:
      return os << "NetworkRequestStatus::SERVER_NO_RANGE";
    case NetworkRequestStatus::SERVER_CONTENT_LENGTH_MISMATCH:
      return os << "NetworkRequestStatus::SERVER_CONTENT_LENGTH_MISMATCH";
    case NetworkRequestStatus::SERVER_UNREACHABLE:
      return os << "NetworkRequestStatus::SERVER_UNREACHABLE";
    case NetworkRequestStatus::SERVER_CERT_PROBLEM:
      return os << "NetworkRequestStatus::SERVER_CERT_PROBLEM";
    case NetworkRequestStatus::USER_CANCELED:
      return os << "NetworkRequestStatus::USER_CANCELED";
    case NetworkRequestStatus::NETWORK_FAILED:
      return os << "NetworkRequestStatus::NETWORK_FAILED";
    default:
      return os << "Unknown NetworkRequestStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NetworkRequestStatus value) {
  return internal::NetworkRequestStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DownloadStreamClientInterfaceBase {};

using DownloadStreamClientPtrDataView =
    mojo::InterfacePtrDataView<DownloadStreamClientInterfaceBase>;
using DownloadStreamClientRequestDataView =
    mojo::InterfaceRequestDataView<DownloadStreamClientInterfaceBase>;
using DownloadStreamClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DownloadStreamClientInterfaceBase>;
using DownloadStreamClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DownloadStreamClientInterfaceBase>;
class DownloadStreamHandleDataView {
 public:
  DownloadStreamHandleDataView() {}

  DownloadStreamHandleDataView(
      internal::DownloadStreamHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::download::mojom::DownloadStreamClientRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DownloadStreamHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DownloadStreamClient_OnStreamCompleted_ParamsDataView {
 public:
  DownloadStreamClient_OnStreamCompleted_ParamsDataView() {}

  DownloadStreamClient_OnStreamCompleted_ParamsDataView(
      internal::DownloadStreamClient_OnStreamCompleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::download::mojom::NetworkRequestStatus>(
        data_value, output);
  }

  NetworkRequestStatus status() const {
    return static_cast<NetworkRequestStatus>(data_->status);
  }
 private:
  internal::DownloadStreamClient_OnStreamCompleted_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace download

namespace std {

template <>
struct hash<::download::mojom::NetworkRequestStatus>
    : public mojo::internal::EnumHashImpl<::download::mojom::NetworkRequestStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::download::mojom::NetworkRequestStatus, ::download::mojom::NetworkRequestStatus> {
  static ::download::mojom::NetworkRequestStatus ToMojom(::download::mojom::NetworkRequestStatus input) { return input; }
  static bool FromMojom(::download::mojom::NetworkRequestStatus input, ::download::mojom::NetworkRequestStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::download::mojom::NetworkRequestStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::download::mojom::NetworkRequestStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::download::mojom::NetworkRequestStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::download::mojom::DownloadStreamHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::download::mojom::DownloadStreamHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::download::mojom::internal::DownloadStreamHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::stream, input, custom_context)) in_stream = CallWithContext(Traits::stream, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
        in_stream, &(*output)->stream, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->stream),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid stream in DownloadStreamHandle struct");
    decltype(CallWithContext(Traits::client_request, input, custom_context)) in_client_request = CallWithContext(Traits::client_request, input, custom_context);
    mojo::internal::Serialize<::download::mojom::DownloadStreamClientRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client_request in DownloadStreamHandle struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::download::mojom::internal::DownloadStreamHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::download::mojom::DownloadStreamHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace download {
namespace mojom {






}  // namespace mojom
}  // namespace download

#endif  // COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_SHARED_H_
