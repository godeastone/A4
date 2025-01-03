// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_H_

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
#include "services/data_decoder/public/mojom/json_parser.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace data_decoder {
namespace mojom {


}  // namespace mojom
}  // namespace data_decoder

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace data_decoder {
namespace mojom {
// Interface base classes. They are used for type safety check.
class JsonParserInterfaceBase {};

using JsonParserPtrDataView =
    mojo::InterfacePtrDataView<JsonParserInterfaceBase>;
using JsonParserRequestDataView =
    mojo::InterfaceRequestDataView<JsonParserInterfaceBase>;
using JsonParserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<JsonParserInterfaceBase>;
using JsonParserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<JsonParserInterfaceBase>;
class JsonParser_Parse_ParamsDataView {
 public:
  JsonParser_Parse_ParamsDataView() {}

  JsonParser_Parse_ParamsDataView(
      internal::JsonParser_Parse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetJsonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadJson(UserType* output) {
    auto* pointer = data_->json.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::JsonParser_Parse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class JsonParser_Parse_ResponseParamsDataView {
 public:
  JsonParser_Parse_ResponseParamsDataView() {}

  JsonParser_Parse_ResponseParamsDataView(
      internal::JsonParser_Parse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::ValueDataView>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::JsonParser_Parse_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace data_decoder

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace data_decoder {
namespace mojom {

inline void JsonParser_Parse_ParamsDataView::GetJsonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->json.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void JsonParser_Parse_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  auto pointer = &data_->result;
  *output = ::mojo_base::mojom::ValueDataView(pointer, context_);
}
inline void JsonParser_Parse_ResponseParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace data_decoder

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_H_
