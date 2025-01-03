// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_H_
#define EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_H_

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
#include "extensions/common/api/mime_handler.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace extensions {
namespace mime_handler {
class StreamInfoDataView;



}  // namespace mime_handler
}  // namespace extensions

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::extensions::mime_handler::StreamInfoDataView> {
  using Data = ::extensions::mime_handler::internal::StreamInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace extensions {
namespace mime_handler {
// Interface base classes. They are used for type safety check.
class MimeHandlerServiceInterfaceBase {};

using MimeHandlerServicePtrDataView =
    mojo::InterfacePtrDataView<MimeHandlerServiceInterfaceBase>;
using MimeHandlerServiceRequestDataView =
    mojo::InterfaceRequestDataView<MimeHandlerServiceInterfaceBase>;
using MimeHandlerServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MimeHandlerServiceInterfaceBase>;
using MimeHandlerServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MimeHandlerServiceInterfaceBase>;
class StreamInfoDataView {
 public:
  StreamInfoDataView() {}

  StreamInfoDataView(
      internal::StreamInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginalUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalUrl(UserType* output) {
    auto* pointer = data_->original_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStreamUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamUrl(UserType* output) {
    auto* pointer = data_->stream_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  inline void GetResponseHeadersDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseHeaders(UserType* output) {
    auto* pointer = data_->response_headers.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
  bool embedded() const {
    return data_->embedded;
  }
 private:
  internal::StreamInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MimeHandlerService_GetStreamInfo_ParamsDataView {
 public:
  MimeHandlerService_GetStreamInfo_ParamsDataView() {}

  MimeHandlerService_GetStreamInfo_ParamsDataView(
      internal::MimeHandlerService_GetStreamInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MimeHandlerService_GetStreamInfo_Params_Data* data_ = nullptr;
};

class MimeHandlerService_GetStreamInfo_ResponseParamsDataView {
 public:
  MimeHandlerService_GetStreamInfo_ResponseParamsDataView() {}

  MimeHandlerService_GetStreamInfo_ResponseParamsDataView(
      internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStreamInfoDataView(
      StreamInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamInfo(UserType* output) {
    auto* pointer = data_->stream_info.Get();
    return mojo::internal::Deserialize<::extensions::mime_handler::StreamInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MimeHandlerService_AbortStream_ParamsDataView {
 public:
  MimeHandlerService_AbortStream_ParamsDataView() {}

  MimeHandlerService_AbortStream_ParamsDataView(
      internal::MimeHandlerService_AbortStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MimeHandlerService_AbortStream_Params_Data* data_ = nullptr;
};

class MimeHandlerService_AbortStream_ResponseParamsDataView {
 public:
  MimeHandlerService_AbortStream_ResponseParamsDataView() {}

  MimeHandlerService_AbortStream_ResponseParamsDataView(
      internal::MimeHandlerService_AbortStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MimeHandlerService_AbortStream_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mime_handler
}  // namespace extensions

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::extensions::mime_handler::StreamInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::extensions::mime_handler::StreamInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::extensions::mime_handler::internal::StreamInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in StreamInfo struct");
    decltype(CallWithContext(Traits::original_url, input, custom_context)) in_original_url = CallWithContext(Traits::original_url, input, custom_context);
    typename decltype((*output)->original_url)::BaseType::BufferWriter
        original_url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_original_url, buffer, &original_url_writer, context);
    (*output)->original_url.Set(
        original_url_writer.is_null() ? nullptr : original_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->original_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null original_url in StreamInfo struct");
    decltype(CallWithContext(Traits::stream_url, input, custom_context)) in_stream_url = CallWithContext(Traits::stream_url, input, custom_context);
    typename decltype((*output)->stream_url)::BaseType::BufferWriter
        stream_url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stream_url, buffer, &stream_url_writer, context);
    (*output)->stream_url.Set(
        stream_url_writer.is_null() ? nullptr : stream_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stream_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stream_url in StreamInfo struct");
    (*output)->tab_id = CallWithContext(Traits::tab_id, input, custom_context);
    decltype(CallWithContext(Traits::response_headers, input, custom_context)) in_response_headers = CallWithContext(Traits::response_headers, input, custom_context);
    typename decltype((*output)->response_headers)::BaseType::BufferWriter
        response_headers_writer;
    const mojo::internal::ContainerValidateParams response_headers_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_response_headers, buffer, &response_headers_writer, &response_headers_validate_params,
        context);
    (*output)->response_headers.Set(
        response_headers_writer.is_null() ? nullptr : response_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->response_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null response_headers in StreamInfo struct");
    (*output)->embedded = CallWithContext(Traits::embedded, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::extensions::mime_handler::internal::StreamInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::extensions::mime_handler::StreamInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace extensions {
namespace mime_handler {

inline void StreamInfoDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StreamInfoDataView::GetOriginalUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->original_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StreamInfoDataView::GetStreamUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stream_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StreamInfoDataView::GetResponseHeadersDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->response_headers.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}




inline void MimeHandlerService_GetStreamInfo_ResponseParamsDataView::GetStreamInfoDataView(
    StreamInfoDataView* output) {
  auto pointer = data_->stream_info.Get();
  *output = StreamInfoDataView(pointer, context_);
}







}  // namespace mime_handler
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_API_MIME_HANDLER_MOJOM_SHARED_H_
