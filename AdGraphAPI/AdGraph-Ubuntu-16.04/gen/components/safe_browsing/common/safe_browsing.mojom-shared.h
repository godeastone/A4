// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_H_
#define COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_H_

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
#include "components/safe_browsing/common/safe_browsing.mojom-shared-internal.h"
#include "content/public/common/resource_type.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace safe_browsing {
namespace mojom {
class AttributeNameValueDataView;

class ThreatDOMDetailsNodeDataView;



}  // namespace mojom
}  // namespace safe_browsing

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::safe_browsing::mojom::AttributeNameValueDataView> {
  using Data = ::safe_browsing::mojom::internal::AttributeNameValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::safe_browsing::mojom::ThreatDOMDetailsNodeDataView> {
  using Data = ::safe_browsing::mojom::internal::ThreatDOMDetailsNode_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace safe_browsing {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SafeBrowsingInterfaceBase {};

using SafeBrowsingPtrDataView =
    mojo::InterfacePtrDataView<SafeBrowsingInterfaceBase>;
using SafeBrowsingRequestDataView =
    mojo::InterfaceRequestDataView<SafeBrowsingInterfaceBase>;
using SafeBrowsingAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SafeBrowsingInterfaceBase>;
using SafeBrowsingAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SafeBrowsingInterfaceBase>;
class SafeBrowsingUrlCheckerInterfaceBase {};

using SafeBrowsingUrlCheckerPtrDataView =
    mojo::InterfacePtrDataView<SafeBrowsingUrlCheckerInterfaceBase>;
using SafeBrowsingUrlCheckerRequestDataView =
    mojo::InterfaceRequestDataView<SafeBrowsingUrlCheckerInterfaceBase>;
using SafeBrowsingUrlCheckerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SafeBrowsingUrlCheckerInterfaceBase>;
using SafeBrowsingUrlCheckerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SafeBrowsingUrlCheckerInterfaceBase>;
class UrlCheckNotifierInterfaceBase {};

using UrlCheckNotifierPtrDataView =
    mojo::InterfacePtrDataView<UrlCheckNotifierInterfaceBase>;
using UrlCheckNotifierRequestDataView =
    mojo::InterfaceRequestDataView<UrlCheckNotifierInterfaceBase>;
using UrlCheckNotifierAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UrlCheckNotifierInterfaceBase>;
using UrlCheckNotifierAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UrlCheckNotifierInterfaceBase>;
class ThreatReporterInterfaceBase {};

using ThreatReporterPtrDataView =
    mojo::InterfacePtrDataView<ThreatReporterInterfaceBase>;
using ThreatReporterRequestDataView =
    mojo::InterfaceRequestDataView<ThreatReporterInterfaceBase>;
using ThreatReporterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ThreatReporterInterfaceBase>;
using ThreatReporterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ThreatReporterInterfaceBase>;
class PhishingDetectorInterfaceBase {};

using PhishingDetectorPtrDataView =
    mojo::InterfacePtrDataView<PhishingDetectorInterfaceBase>;
using PhishingDetectorRequestDataView =
    mojo::InterfaceRequestDataView<PhishingDetectorInterfaceBase>;
using PhishingDetectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PhishingDetectorInterfaceBase>;
using PhishingDetectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PhishingDetectorInterfaceBase>;
class PhishingDetectorClientInterfaceBase {};

using PhishingDetectorClientPtrDataView =
    mojo::InterfacePtrDataView<PhishingDetectorClientInterfaceBase>;
using PhishingDetectorClientRequestDataView =
    mojo::InterfaceRequestDataView<PhishingDetectorClientInterfaceBase>;
using PhishingDetectorClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PhishingDetectorClientInterfaceBase>;
using PhishingDetectorClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PhishingDetectorClientInterfaceBase>;
class PhishingModelSetterInterfaceBase {};

using PhishingModelSetterPtrDataView =
    mojo::InterfacePtrDataView<PhishingModelSetterInterfaceBase>;
using PhishingModelSetterRequestDataView =
    mojo::InterfaceRequestDataView<PhishingModelSetterInterfaceBase>;
using PhishingModelSetterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PhishingModelSetterInterfaceBase>;
using PhishingModelSetterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PhishingModelSetterInterfaceBase>;
class AttributeNameValueDataView {
 public:
  AttributeNameValueDataView() {}

  AttributeNameValueDataView(
      internal::AttributeNameValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AttributeNameValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ThreatDOMDetailsNodeDataView {
 public:
  ThreatDOMDetailsNodeDataView() {}

  ThreatDOMDetailsNodeDataView(
      internal::ThreatDOMDetailsNode_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t node_id() const {
    return data_->node_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTagNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTagName(UserType* output) {
    auto* pointer = data_->tag_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetParentDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParent(UserType* output) {
    auto* pointer = data_->parent.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t parent_node_id() const {
    return data_->parent_node_id;
  }
  inline void GetChildrenDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildren(UserType* output) {
    auto* pointer = data_->children.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
  inline void GetChildNodeIdsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildNodeIds(UserType* output) {
    auto* pointer = data_->child_node_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetAttributesDataView(
      mojo::ArrayDataView<AttributeNameValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttributes(UserType* output) {
    auto* pointer = data_->attributes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::safe_browsing::mojom::AttributeNameValueDataView>>(
        pointer, output, context_);
  }
  int32_t child_frame_routing_id() const {
    return data_->child_frame_routing_id;
  }
 private:
  internal::ThreatDOMDetailsNode_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeBrowsing_CreateCheckerAndCheck_ParamsDataView {
 public:
  SafeBrowsing_CreateCheckerAndCheck_ParamsDataView() {}

  SafeBrowsing_CreateCheckerAndCheck_ParamsDataView(
      internal::SafeBrowsing_CreateCheckerAndCheck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::safe_browsing::mojom::SafeBrowsingUrlCheckerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  int32_t load_flags() const {
    return data_->load_flags;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResourceType(UserType* output) const {
    auto data_value = data_->resource_type;
    return mojo::internal::Deserialize<::content::mojom::ResourceType>(
        data_value, output);
  }

  ::content::mojom::ResourceType resource_type() const {
    return static_cast<::content::mojom::ResourceType>(data_->resource_type);
  }
  bool has_user_gesture() const {
    return data_->has_user_gesture;
  }
  bool originated_from_service_worker() const {
    return data_->originated_from_service_worker;
  }
 private:
  internal::SafeBrowsing_CreateCheckerAndCheck_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeBrowsing_CreateCheckerAndCheck_ResponseParamsDataView {
 public:
  SafeBrowsing_CreateCheckerAndCheck_ResponseParamsDataView() {}

  SafeBrowsing_CreateCheckerAndCheck_ResponseParamsDataView(
      internal::SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSlowCheckNotifier() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::safe_browsing::mojom::UrlCheckNotifierRequestDataView>(
            &data_->slow_check_notifier, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool proceed() const {
    return data_->proceed;
  }
  bool showed_interstitial() const {
    return data_->showed_interstitial;
  }
 private:
  internal::SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeBrowsing_Clone_ParamsDataView {
 public:
  SafeBrowsing_Clone_ParamsDataView() {}

  SafeBrowsing_Clone_ParamsDataView(
      internal::SafeBrowsing_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::safe_browsing::mojom::SafeBrowsingRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SafeBrowsing_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeBrowsingUrlChecker_CheckUrl_ParamsDataView {
 public:
  SafeBrowsingUrlChecker_CheckUrl_ParamsDataView() {}

  SafeBrowsingUrlChecker_CheckUrl_ParamsDataView(
      internal::SafeBrowsingUrlChecker_CheckUrl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SafeBrowsingUrlChecker_CheckUrl_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SafeBrowsingUrlChecker_CheckUrl_ResponseParamsDataView {
 public:
  SafeBrowsingUrlChecker_CheckUrl_ResponseParamsDataView() {}

  SafeBrowsingUrlChecker_CheckUrl_ResponseParamsDataView(
      internal::SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSlowCheckNotifier() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::safe_browsing::mojom::UrlCheckNotifierRequestDataView>(
            &data_->slow_check_notifier, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool proceed() const {
    return data_->proceed;
  }
  bool showed_interstitial() const {
    return data_->showed_interstitial;
  }
 private:
  internal::SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UrlCheckNotifier_OnCompleteCheck_ParamsDataView {
 public:
  UrlCheckNotifier_OnCompleteCheck_ParamsDataView() {}

  UrlCheckNotifier_OnCompleteCheck_ParamsDataView(
      internal::UrlCheckNotifier_OnCompleteCheck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool proceed() const {
    return data_->proceed;
  }
  bool showed_interstitial() const {
    return data_->showed_interstitial;
  }
 private:
  internal::UrlCheckNotifier_OnCompleteCheck_Params_Data* data_ = nullptr;
};

class ThreatReporter_GetThreatDOMDetails_ParamsDataView {
 public:
  ThreatReporter_GetThreatDOMDetails_ParamsDataView() {}

  ThreatReporter_GetThreatDOMDetails_ParamsDataView(
      internal::ThreatReporter_GetThreatDOMDetails_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ThreatReporter_GetThreatDOMDetails_Params_Data* data_ = nullptr;
};

class ThreatReporter_GetThreatDOMDetails_ResponseParamsDataView {
 public:
  ThreatReporter_GetThreatDOMDetails_ResponseParamsDataView() {}

  ThreatReporter_GetThreatDOMDetails_ResponseParamsDataView(
      internal::ThreatReporter_GetThreatDOMDetails_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNodesDataView(
      mojo::ArrayDataView<ThreatDOMDetailsNodeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNodes(UserType* output) {
    auto* pointer = data_->nodes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::safe_browsing::mojom::ThreatDOMDetailsNodeDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ThreatReporter_GetThreatDOMDetails_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PhishingDetector_StartPhishingDetection_ParamsDataView {
 public:
  PhishingDetector_StartPhishingDetection_ParamsDataView() {}

  PhishingDetector_StartPhishingDetection_ParamsDataView(
      internal::PhishingDetector_StartPhishingDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PhishingDetector_StartPhishingDetection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PhishingDetectorClient_PhishingDetectionDone_ParamsDataView {
 public:
  PhishingDetectorClient_PhishingDetectionDone_ParamsDataView() {}

  PhishingDetectorClient_PhishingDetectionDone_ParamsDataView(
      internal::PhishingDetectorClient_PhishingDetectionDone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestProtoDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestProto(UserType* output) {
    auto* pointer = data_->request_proto.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PhishingDetectorClient_PhishingDetectionDone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PhishingModelSetter_SetPhishingModel_ParamsDataView {
 public:
  PhishingModelSetter_SetPhishingModel_ParamsDataView() {}

  PhishingModelSetter_SetPhishingModel_ParamsDataView(
      internal::PhishingModelSetter_SetPhishingModel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetModelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModel(UserType* output) {
    auto* pointer = data_->model.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PhishingModelSetter_SetPhishingModel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace safe_browsing

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::safe_browsing::mojom::AttributeNameValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::safe_browsing::mojom::AttributeNameValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::safe_browsing::mojom::internal::AttributeNameValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in AttributeNameValue struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in AttributeNameValue struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::safe_browsing::mojom::internal::AttributeNameValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::safe_browsing::mojom::AttributeNameValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::safe_browsing::mojom::ThreatDOMDetailsNodeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::safe_browsing::mojom::ThreatDOMDetailsNodeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::safe_browsing::mojom::internal::ThreatDOMDetailsNode_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->node_id = CallWithContext(Traits::node_id, input, custom_context);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in ThreatDOMDetailsNode struct");
    decltype(CallWithContext(Traits::tag_name, input, custom_context)) in_tag_name = CallWithContext(Traits::tag_name, input, custom_context);
    typename decltype((*output)->tag_name)::BaseType::BufferWriter
        tag_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_tag_name, buffer, &tag_name_writer, context);
    (*output)->tag_name.Set(
        tag_name_writer.is_null() ? nullptr : tag_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tag_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tag_name in ThreatDOMDetailsNode struct");
    decltype(CallWithContext(Traits::parent, input, custom_context)) in_parent = CallWithContext(Traits::parent, input, custom_context);
    typename decltype((*output)->parent)::BaseType::BufferWriter
        parent_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_parent, buffer, &parent_writer, context);
    (*output)->parent.Set(
        parent_writer.is_null() ? nullptr : parent_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->parent.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null parent in ThreatDOMDetailsNode struct");
    (*output)->parent_node_id = CallWithContext(Traits::parent_node_id, input, custom_context);
    decltype(CallWithContext(Traits::children, input, custom_context)) in_children = CallWithContext(Traits::children, input, custom_context);
    typename decltype((*output)->children)::BaseType::BufferWriter
        children_writer;
    const mojo::internal::ContainerValidateParams children_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        in_children, buffer, &children_writer, &children_validate_params,
        context);
    (*output)->children.Set(
        children_writer.is_null() ? nullptr : children_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->children.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null children in ThreatDOMDetailsNode struct");
    decltype(CallWithContext(Traits::child_node_ids, input, custom_context)) in_child_node_ids = CallWithContext(Traits::child_node_ids, input, custom_context);
    typename decltype((*output)->child_node_ids)::BaseType::BufferWriter
        child_node_ids_writer;
    const mojo::internal::ContainerValidateParams child_node_ids_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_child_node_ids, buffer, &child_node_ids_writer, &child_node_ids_validate_params,
        context);
    (*output)->child_node_ids.Set(
        child_node_ids_writer.is_null() ? nullptr : child_node_ids_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->child_node_ids.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null child_node_ids in ThreatDOMDetailsNode struct");
    decltype(CallWithContext(Traits::attributes, input, custom_context)) in_attributes = CallWithContext(Traits::attributes, input, custom_context);
    typename decltype((*output)->attributes)::BaseType::BufferWriter
        attributes_writer;
    const mojo::internal::ContainerValidateParams attributes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::safe_browsing::mojom::AttributeNameValueDataView>>(
        in_attributes, buffer, &attributes_writer, &attributes_validate_params,
        context);
    (*output)->attributes.Set(
        attributes_writer.is_null() ? nullptr : attributes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->attributes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null attributes in ThreatDOMDetailsNode struct");
    (*output)->child_frame_routing_id = CallWithContext(Traits::child_frame_routing_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::safe_browsing::mojom::internal::ThreatDOMDetailsNode_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::safe_browsing::mojom::ThreatDOMDetailsNodeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace safe_browsing {
namespace mojom {

inline void AttributeNameValueDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AttributeNameValueDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ThreatDOMDetailsNodeDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ThreatDOMDetailsNodeDataView::GetTagNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ThreatDOMDetailsNodeDataView::GetParentDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->parent.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ThreatDOMDetailsNodeDataView::GetChildrenDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->children.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}
inline void ThreatDOMDetailsNodeDataView::GetChildNodeIdsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->child_node_ids.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void ThreatDOMDetailsNodeDataView::GetAttributesDataView(
    mojo::ArrayDataView<AttributeNameValueDataView>* output) {
  auto pointer = data_->attributes.Get();
  *output = mojo::ArrayDataView<AttributeNameValueDataView>(pointer, context_);
}


inline void SafeBrowsing_CreateCheckerAndCheck_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void SafeBrowsing_CreateCheckerAndCheck_ParamsDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SafeBrowsing_CreateCheckerAndCheck_ParamsDataView::GetHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}






inline void SafeBrowsingUrlChecker_CheckUrl_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void SafeBrowsingUrlChecker_CheckUrl_ParamsDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void ThreatReporter_GetThreatDOMDetails_ResponseParamsDataView::GetNodesDataView(
    mojo::ArrayDataView<ThreatDOMDetailsNodeDataView>* output) {
  auto pointer = data_->nodes.Get();
  *output = mojo::ArrayDataView<ThreatDOMDetailsNodeDataView>(pointer, context_);
}


inline void PhishingDetector_StartPhishingDetection_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PhishingDetectorClient_PhishingDetectionDone_ParamsDataView::GetRequestProtoDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->request_proto.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PhishingModelSetter_SetPhishingModel_ParamsDataView::GetModelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->model.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace safe_browsing

#endif  // COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_H_
