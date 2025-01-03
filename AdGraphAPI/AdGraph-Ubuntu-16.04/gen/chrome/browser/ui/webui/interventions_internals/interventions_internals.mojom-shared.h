// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_H_
#define CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_H_

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
#include "chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojom {
class PreviewsStatusDataView;

class PreviewsFlagDataView;

class MessageLogDataView;



}  // namespace mojom

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojom::PreviewsStatusDataView> {
  using Data = ::mojom::internal::PreviewsStatus_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojom::PreviewsFlagDataView> {
  using Data = ::mojom::internal::PreviewsFlag_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojom::MessageLogDataView> {
  using Data = ::mojom::internal::MessageLog_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojom {
// Interface base classes. They are used for type safety check.
class InterventionsInternalsPageHandlerInterfaceBase {};

using InterventionsInternalsPageHandlerPtrDataView =
    mojo::InterfacePtrDataView<InterventionsInternalsPageHandlerInterfaceBase>;
using InterventionsInternalsPageHandlerRequestDataView =
    mojo::InterfaceRequestDataView<InterventionsInternalsPageHandlerInterfaceBase>;
using InterventionsInternalsPageHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterventionsInternalsPageHandlerInterfaceBase>;
using InterventionsInternalsPageHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterventionsInternalsPageHandlerInterfaceBase>;
class InterventionsInternalsPageInterfaceBase {};

using InterventionsInternalsPagePtrDataView =
    mojo::InterfacePtrDataView<InterventionsInternalsPageInterfaceBase>;
using InterventionsInternalsPageRequestDataView =
    mojo::InterfaceRequestDataView<InterventionsInternalsPageInterfaceBase>;
using InterventionsInternalsPageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterventionsInternalsPageInterfaceBase>;
using InterventionsInternalsPageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterventionsInternalsPageInterfaceBase>;
class PreviewsStatusDataView {
 public:
  PreviewsStatusDataView() {}

  PreviewsStatusDataView(
      internal::PreviewsStatus_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enabled() const {
    return data_->enabled;
  }
  inline void GetHtmlIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHtmlId(UserType* output) {
    auto* pointer = data_->htmlId.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PreviewsStatus_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PreviewsFlagDataView {
 public:
  PreviewsFlagDataView() {}

  PreviewsFlagDataView(
      internal::PreviewsFlag_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLinkDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLink(UserType* output) {
    auto* pointer = data_->link.Get();
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
  inline void GetHtmlIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHtmlId(UserType* output) {
    auto* pointer = data_->htmlId.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PreviewsFlag_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MessageLogDataView {
 public:
  MessageLogDataView() {}

  MessageLogDataView(
      internal::MessageLog_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t time() const {
    return data_->time;
  }
  uint64_t page_id() const {
    return data_->page_id;
  }
 private:
  internal::MessageLog_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPageHandler_GetPreviewsEnabled_ParamsDataView {
 public:
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ParamsDataView() {}

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ParamsDataView(
      internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data* data_ = nullptr;
};

class InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParamsDataView {
 public:
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParamsDataView() {}

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParamsDataView(
      internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusesDataView(
      mojo::ArrayDataView<PreviewsStatusDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatuses(UserType* output) {
    auto* pointer = data_->statuses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::PreviewsStatusDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ParamsDataView {
 public:
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ParamsDataView() {}

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ParamsDataView(
      internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data* data_ = nullptr;
};

class InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParamsDataView {
 public:
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParamsDataView() {}

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParamsDataView(
      internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFlagsDataView(
      mojo::ArrayDataView<PreviewsFlagDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFlags(UserType* output) {
    auto* pointer = data_->flags.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::PreviewsFlagDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPageHandler_SetClientPage_ParamsDataView {
 public:
  InterventionsInternalsPageHandler_SetClientPage_ParamsDataView() {}

  InterventionsInternalsPageHandler_SetClientPage_ParamsDataView(
      internal::InterventionsInternalsPageHandler_SetClientPage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePage() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::mojom::InterventionsInternalsPagePtrDataView>(
            &data_->page, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterventionsInternalsPageHandler_SetClientPage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_ParamsDataView {
 public:
  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_ParamsDataView() {}

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_ParamsDataView(
      internal::InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool ignored() const {
    return data_->ignored;
  }
 private:
  internal::InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data* data_ = nullptr;
};

class InterventionsInternalsPage_LogNewMessage_ParamsDataView {
 public:
  InterventionsInternalsPage_LogNewMessage_ParamsDataView() {}

  InterventionsInternalsPage_LogNewMessage_ParamsDataView(
      internal::InterventionsInternalsPage_LogNewMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLogDataView(
      MessageLogDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLog(UserType* output) {
    auto* pointer = data_->log.Get();
    return mojo::internal::Deserialize<::mojom::MessageLogDataView>(
        pointer, output, context_);
  }
 private:
  internal::InterventionsInternalsPage_LogNewMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPage_OnBlacklistedHost_ParamsDataView {
 public:
  InterventionsInternalsPage_OnBlacklistedHost_ParamsDataView() {}

  InterventionsInternalsPage_OnBlacklistedHost_ParamsDataView(
      internal::InterventionsInternalsPage_OnBlacklistedHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int64_t time() const {
    return data_->time;
  }
 private:
  internal::InterventionsInternalsPage_OnBlacklistedHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPage_OnUserBlacklistedStatusChange_ParamsDataView {
 public:
  InterventionsInternalsPage_OnUserBlacklistedStatusChange_ParamsDataView() {}

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_ParamsDataView(
      internal::InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool blacklisted() const {
    return data_->blacklisted;
  }
 private:
  internal::InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data* data_ = nullptr;
};

class InterventionsInternalsPage_OnBlacklistCleared_ParamsDataView {
 public:
  InterventionsInternalsPage_OnBlacklistCleared_ParamsDataView() {}

  InterventionsInternalsPage_OnBlacklistCleared_ParamsDataView(
      internal::InterventionsInternalsPage_OnBlacklistCleared_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t time() const {
    return data_->time;
  }
 private:
  internal::InterventionsInternalsPage_OnBlacklistCleared_Params_Data* data_ = nullptr;
};

class InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_ParamsDataView {
 public:
  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_ParamsDataView() {}

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_ParamsDataView(
      internal::InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_ParamsDataView {
 public:
  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_ParamsDataView() {}

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_ParamsDataView(
      internal::InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool ignored() const {
    return data_->ignored;
  }
 private:
  internal::InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data* data_ = nullptr;
};



}  // namespace mojom

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::PreviewsStatusDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::PreviewsStatusDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::PreviewsStatus_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in PreviewsStatus struct");
    (*output)->enabled = CallWithContext(Traits::enabled, input, custom_context);
    decltype(CallWithContext(Traits::htmlId, input, custom_context)) in_htmlId = CallWithContext(Traits::htmlId, input, custom_context);
    typename decltype((*output)->htmlId)::BaseType::BufferWriter
        htmlId_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_htmlId, buffer, &htmlId_writer, context);
    (*output)->htmlId.Set(
        htmlId_writer.is_null() ? nullptr : htmlId_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->htmlId.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null htmlId in PreviewsStatus struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::PreviewsStatus_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::PreviewsStatusDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::PreviewsFlagDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::PreviewsFlagDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::PreviewsFlag_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in PreviewsFlag struct");
    decltype(CallWithContext(Traits::link, input, custom_context)) in_link = CallWithContext(Traits::link, input, custom_context);
    typename decltype((*output)->link)::BaseType::BufferWriter
        link_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_link, buffer, &link_writer, context);
    (*output)->link.Set(
        link_writer.is_null() ? nullptr : link_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->link.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null link in PreviewsFlag struct");
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
        "null value in PreviewsFlag struct");
    decltype(CallWithContext(Traits::htmlId, input, custom_context)) in_htmlId = CallWithContext(Traits::htmlId, input, custom_context);
    typename decltype((*output)->htmlId)::BaseType::BufferWriter
        htmlId_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_htmlId, buffer, &htmlId_writer, context);
    (*output)->htmlId.Set(
        htmlId_writer.is_null() ? nullptr : htmlId_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->htmlId.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null htmlId in PreviewsFlag struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::PreviewsFlag_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::PreviewsFlagDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::MessageLogDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::MessageLogDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::MessageLog_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in MessageLog struct");
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in MessageLog struct");
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
        "null url in MessageLog struct");
    (*output)->time = CallWithContext(Traits::time, input, custom_context);
    (*output)->page_id = CallWithContext(Traits::page_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::MessageLog_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::MessageLogDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojom {

inline void PreviewsStatusDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PreviewsStatusDataView::GetHtmlIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->htmlId.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PreviewsFlagDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PreviewsFlagDataView::GetLinkDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->link.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PreviewsFlagDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PreviewsFlagDataView::GetHtmlIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->htmlId.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MessageLogDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MessageLogDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MessageLogDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParamsDataView::GetStatusesDataView(
    mojo::ArrayDataView<PreviewsStatusDataView>* output) {
  auto pointer = data_->statuses.Get();
  *output = mojo::ArrayDataView<PreviewsStatusDataView>(pointer, context_);
}




inline void InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParamsDataView::GetFlagsDataView(
    mojo::ArrayDataView<PreviewsFlagDataView>* output) {
  auto pointer = data_->flags.Get();
  *output = mojo::ArrayDataView<PreviewsFlagDataView>(pointer, context_);
}






inline void InterventionsInternalsPage_LogNewMessage_ParamsDataView::GetLogDataView(
    MessageLogDataView* output) {
  auto pointer = data_->log.Get();
  *output = MessageLogDataView(pointer, context_);
}


inline void InterventionsInternalsPage_OnBlacklistedHost_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_ParamsDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_H_
