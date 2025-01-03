// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_H_
#define CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_H_

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
#include "chrome/common/page_load_metrics/page_load_metrics.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/platform/web_feature.mojom.h"
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


namespace page_load_metrics {
namespace mojom {
class PageLoadMetrics;
using PageLoadMetricsPtr = mojo::InterfacePtr<PageLoadMetrics>;
using PageLoadMetricsPtrInfo = mojo::InterfacePtrInfo<PageLoadMetrics>;
using ThreadSafePageLoadMetricsPtr =
    mojo::ThreadSafeInterfacePtr<PageLoadMetrics>;
using PageLoadMetricsRequest = mojo::InterfaceRequest<PageLoadMetrics>;
using PageLoadMetricsAssociatedPtr =
    mojo::AssociatedInterfacePtr<PageLoadMetrics>;
using ThreadSafePageLoadMetricsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PageLoadMetrics>;
using PageLoadMetricsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PageLoadMetrics>;
using PageLoadMetricsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PageLoadMetrics>;

class DocumentTiming;
using DocumentTimingPtr = mojo::StructPtr<DocumentTiming>;

class PaintTiming;
using PaintTimingPtr = mojo::StructPtr<PaintTiming>;

class ParseTiming;
using ParseTimingPtr = mojo::StructPtr<ParseTiming>;

class StyleSheetTiming;
using StyleSheetTimingPtr = mojo::StructPtr<StyleSheetTiming>;

class InteractiveTiming;
using InteractiveTimingPtr = mojo::StructPtr<InteractiveTiming>;

class PageLoadTiming;
using PageLoadTimingPtr = mojo::StructPtr<PageLoadTiming>;

class PageLoadMetadata;
using PageLoadMetadataPtr = mojo::InlinedStructPtr<PageLoadMetadata>;

class PageLoadFeatures;
using PageLoadFeaturesPtr = mojo::StructPtr<PageLoadFeatures>;


class PageLoadMetricsProxy;

template <typename ImplRefTraits>
class PageLoadMetricsStub;

class PageLoadMetricsRequestValidator;

class  PageLoadMetrics
    : public PageLoadMetricsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PageLoadMetricsProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageLoadMetricsStub<ImplRefTraits>;

  using RequestValidator_ = PageLoadMetricsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateTimingMinVersion = 0,
  };
  virtual ~PageLoadMetrics() {}

  virtual void UpdateTiming(PageLoadTimingPtr page_load_timing, PageLoadMetadataPtr page_load_metadata, PageLoadFeaturesPtr new_features) = 0;
};
class  PageLoadMetricsInterceptorForTesting : public PageLoadMetrics {
  virtual PageLoadMetrics* GetForwardingInterface() = 0;
  void UpdateTiming(PageLoadTimingPtr page_load_timing, PageLoadMetadataPtr page_load_metadata, PageLoadFeaturesPtr new_features) override;
};
class  PageLoadMetricsAsyncWaiter {
 public:
  explicit PageLoadMetricsAsyncWaiter(PageLoadMetrics* proxy);
  ~PageLoadMetricsAsyncWaiter();

 private:
  PageLoadMetrics* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PageLoadMetricsAsyncWaiter);
};

class  PageLoadMetricsProxy
    : public PageLoadMetrics {
 public:
  explicit PageLoadMetricsProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpdateTiming(PageLoadTimingPtr page_load_timing, PageLoadMetadataPtr page_load_metadata, PageLoadFeaturesPtr new_features) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PageLoadMetricsStubDispatch {
 public:
  static bool Accept(PageLoadMetrics* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PageLoadMetrics* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PageLoadMetrics>>
class PageLoadMetricsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageLoadMetricsStub() {}
  ~PageLoadMetricsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageLoadMetricsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageLoadMetricsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PageLoadMetricsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  PageLoadMetadata {
 public:
  using DataView = PageLoadMetadataDataView;
  using Data_ = internal::PageLoadMetadata_Data;

  template <typename... Args>
  static PageLoadMetadataPtr New(Args&&... args) {
    return PageLoadMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PageLoadMetadataPtr From(const U& u) {
    return mojo::TypeConverter<PageLoadMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PageLoadMetadata>::Convert(*this);
  }


  PageLoadMetadata();

  explicit PageLoadMetadata(
      int32_t behavior_flags);

  ~PageLoadMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PageLoadMetadataPtr>
  PageLoadMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PageLoadMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PageLoadMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PageLoadMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PageLoadMetadata_UnserializedMessageContext<
            UserType, PageLoadMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PageLoadMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PageLoadMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PageLoadMetadata_UnserializedMessageContext<
            UserType, PageLoadMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PageLoadMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t behavior_flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  DocumentTiming {
 public:
  using DataView = DocumentTimingDataView;
  using Data_ = internal::DocumentTiming_Data;

  template <typename... Args>
  static DocumentTimingPtr New(Args&&... args) {
    return DocumentTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DocumentTimingPtr From(const U& u) {
    return mojo::TypeConverter<DocumentTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DocumentTiming>::Convert(*this);
  }


  DocumentTiming();

  DocumentTiming(
      base::Optional<base::TimeDelta> dom_content_loaded_event_start,
      base::Optional<base::TimeDelta> load_event_start,
      base::Optional<base::TimeDelta> first_layout);

  ~DocumentTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DocumentTimingPtr>
  DocumentTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DocumentTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DocumentTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DocumentTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DocumentTiming_UnserializedMessageContext<
            UserType, DocumentTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DocumentTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DocumentTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DocumentTiming_UnserializedMessageContext<
            UserType, DocumentTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DocumentTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::TimeDelta> dom_content_loaded_event_start;
  base::Optional<base::TimeDelta> load_event_start;
  base::Optional<base::TimeDelta> first_layout;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PaintTiming {
 public:
  using DataView = PaintTimingDataView;
  using Data_ = internal::PaintTiming_Data;

  template <typename... Args>
  static PaintTimingPtr New(Args&&... args) {
    return PaintTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaintTimingPtr From(const U& u) {
    return mojo::TypeConverter<PaintTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaintTiming>::Convert(*this);
  }


  PaintTiming();

  PaintTiming(
      base::Optional<base::TimeDelta> first_paint,
      base::Optional<base::TimeDelta> first_text_paint,
      base::Optional<base::TimeDelta> first_image_paint,
      base::Optional<base::TimeDelta> first_contentful_paint,
      base::Optional<base::TimeDelta> first_meaningful_paint);

  ~PaintTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaintTimingPtr>
  PaintTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaintTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaintTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaintTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaintTiming_UnserializedMessageContext<
            UserType, PaintTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaintTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaintTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaintTiming_UnserializedMessageContext<
            UserType, PaintTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaintTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::TimeDelta> first_paint;
  base::Optional<base::TimeDelta> first_text_paint;
  base::Optional<base::TimeDelta> first_image_paint;
  base::Optional<base::TimeDelta> first_contentful_paint;
  base::Optional<base::TimeDelta> first_meaningful_paint;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  ParseTiming {
 public:
  using DataView = ParseTimingDataView;
  using Data_ = internal::ParseTiming_Data;

  template <typename... Args>
  static ParseTimingPtr New(Args&&... args) {
    return ParseTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ParseTimingPtr From(const U& u) {
    return mojo::TypeConverter<ParseTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ParseTiming>::Convert(*this);
  }


  ParseTiming();

  ParseTiming(
      base::Optional<base::TimeDelta> parse_start,
      base::Optional<base::TimeDelta> parse_stop,
      base::Optional<base::TimeDelta> parse_blocked_on_script_load_duration,
      base::Optional<base::TimeDelta> parse_blocked_on_script_load_from_document_write_duration,
      base::Optional<base::TimeDelta> parse_blocked_on_script_execution_duration,
      base::Optional<base::TimeDelta> parse_blocked_on_script_execution_from_document_write_duration);

  ~ParseTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ParseTimingPtr>
  ParseTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ParseTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ParseTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ParseTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ParseTiming_UnserializedMessageContext<
            UserType, ParseTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ParseTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ParseTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ParseTiming_UnserializedMessageContext<
            UserType, ParseTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ParseTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::TimeDelta> parse_start;
  base::Optional<base::TimeDelta> parse_stop;
  base::Optional<base::TimeDelta> parse_blocked_on_script_load_duration;
  base::Optional<base::TimeDelta> parse_blocked_on_script_load_from_document_write_duration;
  base::Optional<base::TimeDelta> parse_blocked_on_script_execution_duration;
  base::Optional<base::TimeDelta> parse_blocked_on_script_execution_from_document_write_duration;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  StyleSheetTiming {
 public:
  using DataView = StyleSheetTimingDataView;
  using Data_ = internal::StyleSheetTiming_Data;

  template <typename... Args>
  static StyleSheetTimingPtr New(Args&&... args) {
    return StyleSheetTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StyleSheetTimingPtr From(const U& u) {
    return mojo::TypeConverter<StyleSheetTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StyleSheetTiming>::Convert(*this);
  }


  StyleSheetTiming();

  StyleSheetTiming(
      base::Optional<base::TimeDelta> author_style_sheet_parse_duration_before_fcp,
      base::Optional<base::TimeDelta> update_style_duration_before_fcp);

  ~StyleSheetTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StyleSheetTimingPtr>
  StyleSheetTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StyleSheetTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StyleSheetTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StyleSheetTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StyleSheetTiming_UnserializedMessageContext<
            UserType, StyleSheetTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StyleSheetTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StyleSheetTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StyleSheetTiming_UnserializedMessageContext<
            UserType, StyleSheetTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StyleSheetTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::TimeDelta> author_style_sheet_parse_duration_before_fcp;
  base::Optional<base::TimeDelta> update_style_duration_before_fcp;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  InteractiveTiming {
 public:
  using DataView = InteractiveTimingDataView;
  using Data_ = internal::InteractiveTiming_Data;

  template <typename... Args>
  static InteractiveTimingPtr New(Args&&... args) {
    return InteractiveTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InteractiveTimingPtr From(const U& u) {
    return mojo::TypeConverter<InteractiveTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InteractiveTiming>::Convert(*this);
  }


  InteractiveTiming();

  InteractiveTiming(
      base::Optional<base::TimeDelta> interactive,
      base::Optional<base::TimeDelta> interactive_detection,
      base::Optional<base::TimeDelta> first_invalidating_input,
      base::Optional<base::TimeDelta> first_input_delay,
      base::Optional<base::TimeDelta> first_input_timestamp);

  ~InteractiveTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InteractiveTimingPtr>
  InteractiveTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InteractiveTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InteractiveTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InteractiveTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InteractiveTiming_UnserializedMessageContext<
            UserType, InteractiveTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InteractiveTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return InteractiveTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InteractiveTiming_UnserializedMessageContext<
            UserType, InteractiveTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InteractiveTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::TimeDelta> interactive;
  base::Optional<base::TimeDelta> interactive_detection;
  base::Optional<base::TimeDelta> first_invalidating_input;
  base::Optional<base::TimeDelta> first_input_delay;
  base::Optional<base::TimeDelta> first_input_timestamp;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PageLoadTiming {
 public:
  using DataView = PageLoadTimingDataView;
  using Data_ = internal::PageLoadTiming_Data;

  template <typename... Args>
  static PageLoadTimingPtr New(Args&&... args) {
    return PageLoadTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PageLoadTimingPtr From(const U& u) {
    return mojo::TypeConverter<PageLoadTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PageLoadTiming>::Convert(*this);
  }


  PageLoadTiming();

  PageLoadTiming(
      base::Time navigation_start,
      base::Optional<base::TimeDelta> response_start,
      DocumentTimingPtr document_timing,
      InteractiveTimingPtr interactive_timing,
      PaintTimingPtr paint_timing,
      ParseTimingPtr parse_timing,
      StyleSheetTimingPtr style_sheet_timing);

  ~PageLoadTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PageLoadTimingPtr>
  PageLoadTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PageLoadTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PageLoadTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PageLoadTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PageLoadTiming_UnserializedMessageContext<
            UserType, PageLoadTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PageLoadTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PageLoadTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PageLoadTiming_UnserializedMessageContext<
            UserType, PageLoadTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PageLoadTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Time navigation_start;
  base::Optional<base::TimeDelta> response_start;
  DocumentTimingPtr document_timing;
  InteractiveTimingPtr interactive_timing;
  PaintTimingPtr paint_timing;
  ParseTimingPtr parse_timing;
  StyleSheetTimingPtr style_sheet_timing;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PageLoadTiming);
};



class  PageLoadFeatures {
 public:
  using DataView = PageLoadFeaturesDataView;
  using Data_ = internal::PageLoadFeatures_Data;

  template <typename... Args>
  static PageLoadFeaturesPtr New(Args&&... args) {
    return PageLoadFeaturesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PageLoadFeaturesPtr From(const U& u) {
    return mojo::TypeConverter<PageLoadFeaturesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PageLoadFeatures>::Convert(*this);
  }


  PageLoadFeatures();

  PageLoadFeatures(
      const std::vector<::blink::mojom::WebFeature>& features,
      const std::vector<int32_t>& css_properties,
      const std::vector<int32_t>& animated_css_properties);

  ~PageLoadFeatures();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PageLoadFeaturesPtr>
  PageLoadFeaturesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PageLoadFeatures>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PageLoadFeatures::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PageLoadFeatures::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PageLoadFeatures_UnserializedMessageContext<
            UserType, PageLoadFeatures::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PageLoadFeatures::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PageLoadFeatures::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PageLoadFeatures_UnserializedMessageContext<
            UserType, PageLoadFeatures::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PageLoadFeatures::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<::blink::mojom::WebFeature> features;
  std::vector<int32_t> css_properties;
  std::vector<int32_t> animated_css_properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
DocumentTimingPtr DocumentTiming::Clone() const {
  return New(
      mojo::Clone(dom_content_loaded_event_start),
      mojo::Clone(load_event_start),
      mojo::Clone(first_layout)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DocumentTiming>::value>::type*>
bool DocumentTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dom_content_loaded_event_start, other_struct.dom_content_loaded_event_start))
    return false;
  if (!mojo::Equals(this->load_event_start, other_struct.load_event_start))
    return false;
  if (!mojo::Equals(this->first_layout, other_struct.first_layout))
    return false;
  return true;
}
template <typename StructPtrType>
PaintTimingPtr PaintTiming::Clone() const {
  return New(
      mojo::Clone(first_paint),
      mojo::Clone(first_text_paint),
      mojo::Clone(first_image_paint),
      mojo::Clone(first_contentful_paint),
      mojo::Clone(first_meaningful_paint)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaintTiming>::value>::type*>
bool PaintTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->first_paint, other_struct.first_paint))
    return false;
  if (!mojo::Equals(this->first_text_paint, other_struct.first_text_paint))
    return false;
  if (!mojo::Equals(this->first_image_paint, other_struct.first_image_paint))
    return false;
  if (!mojo::Equals(this->first_contentful_paint, other_struct.first_contentful_paint))
    return false;
  if (!mojo::Equals(this->first_meaningful_paint, other_struct.first_meaningful_paint))
    return false;
  return true;
}
template <typename StructPtrType>
ParseTimingPtr ParseTiming::Clone() const {
  return New(
      mojo::Clone(parse_start),
      mojo::Clone(parse_stop),
      mojo::Clone(parse_blocked_on_script_load_duration),
      mojo::Clone(parse_blocked_on_script_load_from_document_write_duration),
      mojo::Clone(parse_blocked_on_script_execution_duration),
      mojo::Clone(parse_blocked_on_script_execution_from_document_write_duration)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ParseTiming>::value>::type*>
bool ParseTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->parse_start, other_struct.parse_start))
    return false;
  if (!mojo::Equals(this->parse_stop, other_struct.parse_stop))
    return false;
  if (!mojo::Equals(this->parse_blocked_on_script_load_duration, other_struct.parse_blocked_on_script_load_duration))
    return false;
  if (!mojo::Equals(this->parse_blocked_on_script_load_from_document_write_duration, other_struct.parse_blocked_on_script_load_from_document_write_duration))
    return false;
  if (!mojo::Equals(this->parse_blocked_on_script_execution_duration, other_struct.parse_blocked_on_script_execution_duration))
    return false;
  if (!mojo::Equals(this->parse_blocked_on_script_execution_from_document_write_duration, other_struct.parse_blocked_on_script_execution_from_document_write_duration))
    return false;
  return true;
}
template <typename StructPtrType>
StyleSheetTimingPtr StyleSheetTiming::Clone() const {
  return New(
      mojo::Clone(author_style_sheet_parse_duration_before_fcp),
      mojo::Clone(update_style_duration_before_fcp)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StyleSheetTiming>::value>::type*>
bool StyleSheetTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->author_style_sheet_parse_duration_before_fcp, other_struct.author_style_sheet_parse_duration_before_fcp))
    return false;
  if (!mojo::Equals(this->update_style_duration_before_fcp, other_struct.update_style_duration_before_fcp))
    return false;
  return true;
}
template <typename StructPtrType>
InteractiveTimingPtr InteractiveTiming::Clone() const {
  return New(
      mojo::Clone(interactive),
      mojo::Clone(interactive_detection),
      mojo::Clone(first_invalidating_input),
      mojo::Clone(first_input_delay),
      mojo::Clone(first_input_timestamp)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InteractiveTiming>::value>::type*>
bool InteractiveTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->interactive, other_struct.interactive))
    return false;
  if (!mojo::Equals(this->interactive_detection, other_struct.interactive_detection))
    return false;
  if (!mojo::Equals(this->first_invalidating_input, other_struct.first_invalidating_input))
    return false;
  if (!mojo::Equals(this->first_input_delay, other_struct.first_input_delay))
    return false;
  if (!mojo::Equals(this->first_input_timestamp, other_struct.first_input_timestamp))
    return false;
  return true;
}
template <typename StructPtrType>
PageLoadTimingPtr PageLoadTiming::Clone() const {
  return New(
      mojo::Clone(navigation_start),
      mojo::Clone(response_start),
      mojo::Clone(document_timing),
      mojo::Clone(interactive_timing),
      mojo::Clone(paint_timing),
      mojo::Clone(parse_timing),
      mojo::Clone(style_sheet_timing)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PageLoadTiming>::value>::type*>
bool PageLoadTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->navigation_start, other_struct.navigation_start))
    return false;
  if (!mojo::Equals(this->response_start, other_struct.response_start))
    return false;
  if (!mojo::Equals(this->document_timing, other_struct.document_timing))
    return false;
  if (!mojo::Equals(this->interactive_timing, other_struct.interactive_timing))
    return false;
  if (!mojo::Equals(this->paint_timing, other_struct.paint_timing))
    return false;
  if (!mojo::Equals(this->parse_timing, other_struct.parse_timing))
    return false;
  if (!mojo::Equals(this->style_sheet_timing, other_struct.style_sheet_timing))
    return false;
  return true;
}
template <typename StructPtrType>
PageLoadMetadataPtr PageLoadMetadata::Clone() const {
  return New(
      mojo::Clone(behavior_flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PageLoadMetadata>::value>::type*>
bool PageLoadMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->behavior_flags, other_struct.behavior_flags))
    return false;
  return true;
}
template <typename StructPtrType>
PageLoadFeaturesPtr PageLoadFeatures::Clone() const {
  return New(
      mojo::Clone(features),
      mojo::Clone(css_properties),
      mojo::Clone(animated_css_properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PageLoadFeatures>::value>::type*>
bool PageLoadFeatures::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->features, other_struct.features))
    return false;
  if (!mojo::Equals(this->css_properties, other_struct.css_properties))
    return false;
  if (!mojo::Equals(this->animated_css_properties, other_struct.animated_css_properties))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace page_load_metrics

namespace mojo {


template <>
struct  StructTraits<::page_load_metrics::mojom::DocumentTiming::DataView,
                                         ::page_load_metrics::mojom::DocumentTimingPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::DocumentTimingPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::DocumentTimingPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::DocumentTiming::dom_content_loaded_event_start)& dom_content_loaded_event_start(
      const ::page_load_metrics::mojom::DocumentTimingPtr& input) {
    return input->dom_content_loaded_event_start;
  }

  static const decltype(::page_load_metrics::mojom::DocumentTiming::load_event_start)& load_event_start(
      const ::page_load_metrics::mojom::DocumentTimingPtr& input) {
    return input->load_event_start;
  }

  static const decltype(::page_load_metrics::mojom::DocumentTiming::first_layout)& first_layout(
      const ::page_load_metrics::mojom::DocumentTimingPtr& input) {
    return input->first_layout;
  }

  static bool Read(::page_load_metrics::mojom::DocumentTiming::DataView input, ::page_load_metrics::mojom::DocumentTimingPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::PaintTiming::DataView,
                                         ::page_load_metrics::mojom::PaintTimingPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::PaintTimingPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::PaintTimingPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::PaintTiming::first_paint)& first_paint(
      const ::page_load_metrics::mojom::PaintTimingPtr& input) {
    return input->first_paint;
  }

  static const decltype(::page_load_metrics::mojom::PaintTiming::first_text_paint)& first_text_paint(
      const ::page_load_metrics::mojom::PaintTimingPtr& input) {
    return input->first_text_paint;
  }

  static const decltype(::page_load_metrics::mojom::PaintTiming::first_image_paint)& first_image_paint(
      const ::page_load_metrics::mojom::PaintTimingPtr& input) {
    return input->first_image_paint;
  }

  static const decltype(::page_load_metrics::mojom::PaintTiming::first_contentful_paint)& first_contentful_paint(
      const ::page_load_metrics::mojom::PaintTimingPtr& input) {
    return input->first_contentful_paint;
  }

  static const decltype(::page_load_metrics::mojom::PaintTiming::first_meaningful_paint)& first_meaningful_paint(
      const ::page_load_metrics::mojom::PaintTimingPtr& input) {
    return input->first_meaningful_paint;
  }

  static bool Read(::page_load_metrics::mojom::PaintTiming::DataView input, ::page_load_metrics::mojom::PaintTimingPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::ParseTiming::DataView,
                                         ::page_load_metrics::mojom::ParseTimingPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::ParseTimingPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::ParseTimingPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::ParseTiming::parse_start)& parse_start(
      const ::page_load_metrics::mojom::ParseTimingPtr& input) {
    return input->parse_start;
  }

  static const decltype(::page_load_metrics::mojom::ParseTiming::parse_stop)& parse_stop(
      const ::page_load_metrics::mojom::ParseTimingPtr& input) {
    return input->parse_stop;
  }

  static const decltype(::page_load_metrics::mojom::ParseTiming::parse_blocked_on_script_load_duration)& parse_blocked_on_script_load_duration(
      const ::page_load_metrics::mojom::ParseTimingPtr& input) {
    return input->parse_blocked_on_script_load_duration;
  }

  static const decltype(::page_load_metrics::mojom::ParseTiming::parse_blocked_on_script_load_from_document_write_duration)& parse_blocked_on_script_load_from_document_write_duration(
      const ::page_load_metrics::mojom::ParseTimingPtr& input) {
    return input->parse_blocked_on_script_load_from_document_write_duration;
  }

  static const decltype(::page_load_metrics::mojom::ParseTiming::parse_blocked_on_script_execution_duration)& parse_blocked_on_script_execution_duration(
      const ::page_load_metrics::mojom::ParseTimingPtr& input) {
    return input->parse_blocked_on_script_execution_duration;
  }

  static const decltype(::page_load_metrics::mojom::ParseTiming::parse_blocked_on_script_execution_from_document_write_duration)& parse_blocked_on_script_execution_from_document_write_duration(
      const ::page_load_metrics::mojom::ParseTimingPtr& input) {
    return input->parse_blocked_on_script_execution_from_document_write_duration;
  }

  static bool Read(::page_load_metrics::mojom::ParseTiming::DataView input, ::page_load_metrics::mojom::ParseTimingPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::StyleSheetTiming::DataView,
                                         ::page_load_metrics::mojom::StyleSheetTimingPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::StyleSheetTimingPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::StyleSheetTimingPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::StyleSheetTiming::author_style_sheet_parse_duration_before_fcp)& author_style_sheet_parse_duration_before_fcp(
      const ::page_load_metrics::mojom::StyleSheetTimingPtr& input) {
    return input->author_style_sheet_parse_duration_before_fcp;
  }

  static const decltype(::page_load_metrics::mojom::StyleSheetTiming::update_style_duration_before_fcp)& update_style_duration_before_fcp(
      const ::page_load_metrics::mojom::StyleSheetTimingPtr& input) {
    return input->update_style_duration_before_fcp;
  }

  static bool Read(::page_load_metrics::mojom::StyleSheetTiming::DataView input, ::page_load_metrics::mojom::StyleSheetTimingPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::InteractiveTiming::DataView,
                                         ::page_load_metrics::mojom::InteractiveTimingPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::InteractiveTimingPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::InteractiveTimingPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::InteractiveTiming::interactive)& interactive(
      const ::page_load_metrics::mojom::InteractiveTimingPtr& input) {
    return input->interactive;
  }

  static const decltype(::page_load_metrics::mojom::InteractiveTiming::interactive_detection)& interactive_detection(
      const ::page_load_metrics::mojom::InteractiveTimingPtr& input) {
    return input->interactive_detection;
  }

  static const decltype(::page_load_metrics::mojom::InteractiveTiming::first_invalidating_input)& first_invalidating_input(
      const ::page_load_metrics::mojom::InteractiveTimingPtr& input) {
    return input->first_invalidating_input;
  }

  static const decltype(::page_load_metrics::mojom::InteractiveTiming::first_input_delay)& first_input_delay(
      const ::page_load_metrics::mojom::InteractiveTimingPtr& input) {
    return input->first_input_delay;
  }

  static const decltype(::page_load_metrics::mojom::InteractiveTiming::first_input_timestamp)& first_input_timestamp(
      const ::page_load_metrics::mojom::InteractiveTimingPtr& input) {
    return input->first_input_timestamp;
  }

  static bool Read(::page_load_metrics::mojom::InteractiveTiming::DataView input, ::page_load_metrics::mojom::InteractiveTimingPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::PageLoadTiming::DataView,
                                         ::page_load_metrics::mojom::PageLoadTimingPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::PageLoadTimingPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::PageLoadTimingPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::navigation_start)& navigation_start(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->navigation_start;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::response_start)& response_start(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->response_start;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::document_timing)& document_timing(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->document_timing;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::interactive_timing)& interactive_timing(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->interactive_timing;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::paint_timing)& paint_timing(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->paint_timing;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::parse_timing)& parse_timing(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->parse_timing;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadTiming::style_sheet_timing)& style_sheet_timing(
      const ::page_load_metrics::mojom::PageLoadTimingPtr& input) {
    return input->style_sheet_timing;
  }

  static bool Read(::page_load_metrics::mojom::PageLoadTiming::DataView input, ::page_load_metrics::mojom::PageLoadTimingPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::PageLoadMetadata::DataView,
                                         ::page_load_metrics::mojom::PageLoadMetadataPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::PageLoadMetadataPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::PageLoadMetadataPtr* output) { output->reset(); }

  static decltype(::page_load_metrics::mojom::PageLoadMetadata::behavior_flags) behavior_flags(
      const ::page_load_metrics::mojom::PageLoadMetadataPtr& input) {
    return input->behavior_flags;
  }

  static bool Read(::page_load_metrics::mojom::PageLoadMetadata::DataView input, ::page_load_metrics::mojom::PageLoadMetadataPtr* output);
};


template <>
struct  StructTraits<::page_load_metrics::mojom::PageLoadFeatures::DataView,
                                         ::page_load_metrics::mojom::PageLoadFeaturesPtr> {
  static bool IsNull(const ::page_load_metrics::mojom::PageLoadFeaturesPtr& input) { return !input; }
  static void SetToNull(::page_load_metrics::mojom::PageLoadFeaturesPtr* output) { output->reset(); }

  static const decltype(::page_load_metrics::mojom::PageLoadFeatures::features)& features(
      const ::page_load_metrics::mojom::PageLoadFeaturesPtr& input) {
    return input->features;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadFeatures::css_properties)& css_properties(
      const ::page_load_metrics::mojom::PageLoadFeaturesPtr& input) {
    return input->css_properties;
  }

  static const decltype(::page_load_metrics::mojom::PageLoadFeatures::animated_css_properties)& animated_css_properties(
      const ::page_load_metrics::mojom::PageLoadFeaturesPtr& input) {
    return input->animated_css_properties;
  }

  static bool Read(::page_load_metrics::mojom::PageLoadFeatures::DataView input, ::page_load_metrics::mojom::PageLoadFeaturesPtr* output);
};

}  // namespace mojo

#endif  // CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_H_