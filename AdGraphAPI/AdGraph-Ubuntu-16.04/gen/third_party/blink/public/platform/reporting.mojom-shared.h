// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/reporting.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ReportingServiceProxyInterfaceBase {};

using ReportingServiceProxyPtrDataView =
    mojo::InterfacePtrDataView<ReportingServiceProxyInterfaceBase>;
using ReportingServiceProxyRequestDataView =
    mojo::InterfaceRequestDataView<ReportingServiceProxyInterfaceBase>;
using ReportingServiceProxyAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ReportingServiceProxyInterfaceBase>;
using ReportingServiceProxyAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ReportingServiceProxyInterfaceBase>;
class ReportingServiceProxy_QueueInterventionReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueInterventionReport_ParamsDataView() {}

  ReportingServiceProxy_QueueInterventionReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueInterventionReport_Params_Data* data,
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
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::ReportingServiceProxy_QueueInterventionReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReportingServiceProxy_QueueDeprecationReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueDeprecationReport_ParamsDataView() {}

  ReportingServiceProxy_QueueDeprecationReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data* data,
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
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAnticipatedRemovalDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnticipatedRemoval(UserType* output) {
    auto* pointer = data_->anticipatedRemoval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReportingServiceProxy_QueueCspViolationReport_ParamsDataView {
 public:
  ReportingServiceProxy_QueueCspViolationReport_ParamsDataView() {}

  ReportingServiceProxy_QueueCspViolationReport_ParamsDataView(
      internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data* data,
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
  inline void GetGroupDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroup(UserType* output) {
    auto* pointer = data_->group.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDocumentUriDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentUri(UserType* output) {
    auto* pointer = data_->document_uri.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetViolatedDirectiveDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadViolatedDirective(UserType* output) {
    auto* pointer = data_->violated_directive.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetEffectiveDirectiveDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEffectiveDirective(UserType* output) {
    auto* pointer = data_->effective_directive.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOriginalPolicyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalPolicy(UserType* output) {
    auto* pointer = data_->original_policy.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisposition(UserType* output) {
    auto* pointer = data_->disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBlockedUriDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlockedUri(UserType* output) {
    auto* pointer = data_->blocked_uri.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t line_number() const {
    return data_->line_number;
  }
  int32_t column_number() const {
    return data_->column_number;
  }
  inline void GetSourceFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceFile(UserType* output) {
    auto* pointer = data_->source_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t status_code() const {
    return data_->status_code;
  }
  inline void GetScriptSampleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptSample(UserType* output) {
    auto* pointer = data_->script_sample.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueInterventionReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetAnticipatedRemovalDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->anticipatedRemoval.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueDeprecationReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetGroupDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetDocumentUriDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->document_uri.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetReferrerDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetViolatedDirectiveDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->violated_directive.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetEffectiveDirectiveDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->effective_directive.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetOriginalPolicyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->original_policy.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetBlockedUriDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->blocked_uri.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetSourceFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ReportingServiceProxy_QueueCspViolationReport_ParamsDataView::GetScriptSampleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->script_sample.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_SHARED_H_
