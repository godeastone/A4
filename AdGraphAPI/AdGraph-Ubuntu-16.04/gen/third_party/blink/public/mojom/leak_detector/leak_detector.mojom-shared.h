// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class LeakDetectionResultDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::LeakDetectionResultDataView> {
  using Data = ::blink::mojom::internal::LeakDetectionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class LeakDetectorInterfaceBase {};

using LeakDetectorPtrDataView =
    mojo::InterfacePtrDataView<LeakDetectorInterfaceBase>;
using LeakDetectorRequestDataView =
    mojo::InterfaceRequestDataView<LeakDetectorInterfaceBase>;
using LeakDetectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LeakDetectorInterfaceBase>;
using LeakDetectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LeakDetectorInterfaceBase>;
class LeakDetectionResultDataView {
 public:
  LeakDetectionResultDataView() {}

  LeakDetectionResultDataView(
      internal::LeakDetectionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t number_of_live_audio_nodes() const {
    return data_->number_of_live_audio_nodes;
  }
  uint32_t number_of_live_documents() const {
    return data_->number_of_live_documents;
  }
  uint32_t number_of_live_nodes() const {
    return data_->number_of_live_nodes;
  }
  uint32_t number_of_live_layout_objects() const {
    return data_->number_of_live_layout_objects;
  }
  uint32_t number_of_live_resources() const {
    return data_->number_of_live_resources;
  }
  uint32_t number_of_live_pausable_objects() const {
    return data_->number_of_live_pausable_objects;
  }
  uint32_t number_of_live_script_promises() const {
    return data_->number_of_live_script_promises;
  }
  uint32_t number_of_live_frames() const {
    return data_->number_of_live_frames;
  }
  uint32_t number_of_live_v8_per_context_data() const {
    return data_->number_of_live_v8_per_context_data;
  }
  uint32_t number_of_worker_global_scopes() const {
    return data_->number_of_worker_global_scopes;
  }
  uint32_t number_of_live_ua_css_resources() const {
    return data_->number_of_live_ua_css_resources;
  }
  uint32_t number_of_live_resource_fetchers() const {
    return data_->number_of_live_resource_fetchers;
  }
 private:
  internal::LeakDetectionResult_Data* data_ = nullptr;
};

class LeakDetector_PerformLeakDetection_ParamsDataView {
 public:
  LeakDetector_PerformLeakDetection_ParamsDataView() {}

  LeakDetector_PerformLeakDetection_ParamsDataView(
      internal::LeakDetector_PerformLeakDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LeakDetector_PerformLeakDetection_Params_Data* data_ = nullptr;
};

class LeakDetector_PerformLeakDetection_ResponseParamsDataView {
 public:
  LeakDetector_PerformLeakDetection_ResponseParamsDataView() {}

  LeakDetector_PerformLeakDetection_ResponseParamsDataView(
      internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      LeakDetectionResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::LeakDetectionResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LeakDetectionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::LeakDetectionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::LeakDetectionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->number_of_live_audio_nodes = CallWithContext(Traits::number_of_live_audio_nodes, input, custom_context);
    (*output)->number_of_live_documents = CallWithContext(Traits::number_of_live_documents, input, custom_context);
    (*output)->number_of_live_nodes = CallWithContext(Traits::number_of_live_nodes, input, custom_context);
    (*output)->number_of_live_layout_objects = CallWithContext(Traits::number_of_live_layout_objects, input, custom_context);
    (*output)->number_of_live_resources = CallWithContext(Traits::number_of_live_resources, input, custom_context);
    (*output)->number_of_live_pausable_objects = CallWithContext(Traits::number_of_live_pausable_objects, input, custom_context);
    (*output)->number_of_live_script_promises = CallWithContext(Traits::number_of_live_script_promises, input, custom_context);
    (*output)->number_of_live_frames = CallWithContext(Traits::number_of_live_frames, input, custom_context);
    (*output)->number_of_live_v8_per_context_data = CallWithContext(Traits::number_of_live_v8_per_context_data, input, custom_context);
    (*output)->number_of_worker_global_scopes = CallWithContext(Traits::number_of_worker_global_scopes, input, custom_context);
    (*output)->number_of_live_ua_css_resources = CallWithContext(Traits::number_of_live_ua_css_resources, input, custom_context);
    (*output)->number_of_live_resource_fetchers = CallWithContext(Traits::number_of_live_resource_fetchers, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::LeakDetectionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::LeakDetectionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {





inline void LeakDetector_PerformLeakDetection_ResponseParamsDataView::GetResultDataView(
    LeakDetectionResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = LeakDetectionResultDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_SHARED_H_
