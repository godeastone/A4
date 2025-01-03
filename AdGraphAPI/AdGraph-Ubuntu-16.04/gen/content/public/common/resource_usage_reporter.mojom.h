// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_

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
#include "content/public/common/resource_usage_reporter.mojom-shared.h"
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
class ResourceUsageReporter;
using ResourceUsageReporterPtr = mojo::InterfacePtr<ResourceUsageReporter>;
using ResourceUsageReporterPtrInfo = mojo::InterfacePtrInfo<ResourceUsageReporter>;
using ThreadSafeResourceUsageReporterPtr =
    mojo::ThreadSafeInterfacePtr<ResourceUsageReporter>;
using ResourceUsageReporterRequest = mojo::InterfaceRequest<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedPtr =
    mojo::AssociatedInterfacePtr<ResourceUsageReporter>;
using ThreadSafeResourceUsageReporterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ResourceUsageReporter>;

class ResourceTypeStat;
using ResourceTypeStatPtr = mojo::InlinedStructPtr<ResourceTypeStat>;

class ResourceTypeStats;
using ResourceTypeStatsPtr = mojo::StructPtr<ResourceTypeStats>;

class ResourceUsageData;
using ResourceUsageDataPtr = mojo::StructPtr<ResourceUsageData>;


class ResourceUsageReporterProxy;

template <typename ImplRefTraits>
class ResourceUsageReporterStub;

class ResourceUsageReporterRequestValidator;
class ResourceUsageReporterResponseValidator;

class CONTENT_EXPORT ResourceUsageReporter
    : public ResourceUsageReporterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ResourceUsageReporterProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResourceUsageReporterStub<ImplRefTraits>;

  using RequestValidator_ = ResourceUsageReporterRequestValidator;
  using ResponseValidator_ = ResourceUsageReporterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetUsageDataMinVersion = 0,
  };
  virtual ~ResourceUsageReporter() {}


  using GetUsageDataCallback = base::OnceCallback<void(ResourceUsageDataPtr)>;
  virtual void GetUsageData(GetUsageDataCallback callback) = 0;
};
class CONTENT_EXPORT ResourceUsageReporterInterceptorForTesting : public ResourceUsageReporter {
  virtual ResourceUsageReporter* GetForwardingInterface() = 0;
  void GetUsageData(GetUsageDataCallback callback) override;
};
class CONTENT_EXPORT ResourceUsageReporterAsyncWaiter {
 public:
  explicit ResourceUsageReporterAsyncWaiter(ResourceUsageReporter* proxy);
  ~ResourceUsageReporterAsyncWaiter();
  void GetUsageData(
      ResourceUsageDataPtr* out_data);

 private:
  ResourceUsageReporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResourceUsageReporterAsyncWaiter);
};

class CONTENT_EXPORT ResourceUsageReporterProxy
    : public ResourceUsageReporter {
 public:
  explicit ResourceUsageReporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetUsageData(GetUsageDataCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ResourceUsageReporterStubDispatch {
 public:
  static bool Accept(ResourceUsageReporter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResourceUsageReporter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResourceUsageReporter>>
class ResourceUsageReporterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResourceUsageReporterStub() {}
  ~ResourceUsageReporterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResourceUsageReporterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResourceUsageReporterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ResourceUsageReporterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ResourceUsageReporterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT ResourceTypeStat {
 public:
  using DataView = ResourceTypeStatDataView;
  using Data_ = internal::ResourceTypeStat_Data;

  template <typename... Args>
  static ResourceTypeStatPtr New(Args&&... args) {
    return ResourceTypeStatPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResourceTypeStatPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTypeStatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTypeStat>::Convert(*this);
  }


  ResourceTypeStat();

  ResourceTypeStat(
      uint64_t count,
      uint64_t size,
      uint64_t live_size,
      uint64_t decoded_size);

  ~ResourceTypeStat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceTypeStatPtr>
  ResourceTypeStatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceTypeStat>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResourceTypeStat::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResourceTypeStat::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResourceTypeStat_UnserializedMessageContext<
            UserType, ResourceTypeStat::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ResourceTypeStat::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ResourceTypeStat::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResourceTypeStat_UnserializedMessageContext<
            UserType, ResourceTypeStat::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResourceTypeStat::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint64_t count;
  uint64_t size;
  uint64_t live_size;
  uint64_t decoded_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class CONTENT_EXPORT ResourceTypeStats {
 public:
  using DataView = ResourceTypeStatsDataView;
  using Data_ = internal::ResourceTypeStats_Data;

  template <typename... Args>
  static ResourceTypeStatsPtr New(Args&&... args) {
    return ResourceTypeStatsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResourceTypeStatsPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTypeStatsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTypeStats>::Convert(*this);
  }


  ResourceTypeStats();

  ResourceTypeStats(
      ResourceTypeStatPtr images,
      ResourceTypeStatPtr css_style_sheets,
      ResourceTypeStatPtr scripts,
      ResourceTypeStatPtr xsl_style_sheets,
      ResourceTypeStatPtr fonts,
      ResourceTypeStatPtr other);

  ~ResourceTypeStats();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceTypeStatsPtr>
  ResourceTypeStatsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceTypeStats>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResourceTypeStats::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResourceTypeStats::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResourceTypeStats_UnserializedMessageContext<
            UserType, ResourceTypeStats::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ResourceTypeStats::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ResourceTypeStats::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResourceTypeStats_UnserializedMessageContext<
            UserType, ResourceTypeStats::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResourceTypeStats::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ResourceTypeStatPtr images;
  ResourceTypeStatPtr css_style_sheets;
  ResourceTypeStatPtr scripts;
  ResourceTypeStatPtr xsl_style_sheets;
  ResourceTypeStatPtr fonts;
  ResourceTypeStatPtr other;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ResourceTypeStats);
};


class CONTENT_EXPORT ResourceUsageData {
 public:
  using DataView = ResourceUsageDataDataView;
  using Data_ = internal::ResourceUsageData_Data;

  template <typename... Args>
  static ResourceUsageDataPtr New(Args&&... args) {
    return ResourceUsageDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResourceUsageDataPtr From(const U& u) {
    return mojo::TypeConverter<ResourceUsageDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceUsageData>::Convert(*this);
  }


  ResourceUsageData();

  ResourceUsageData(
      bool reports_v8_stats,
      uint64_t v8_bytes_allocated,
      uint64_t v8_bytes_used,
      ResourceTypeStatsPtr web_cache_stats);

  ~ResourceUsageData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceUsageDataPtr>
  ResourceUsageDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceUsageData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResourceUsageData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResourceUsageData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResourceUsageData_UnserializedMessageContext<
            UserType, ResourceUsageData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ResourceUsageData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ResourceUsageData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResourceUsageData_UnserializedMessageContext<
            UserType, ResourceUsageData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResourceUsageData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool reports_v8_stats;
  uint64_t v8_bytes_allocated;
  uint64_t v8_bytes_used;
  ResourceTypeStatsPtr web_cache_stats;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ResourceUsageData);
};

template <typename StructPtrType>
ResourceTypeStatPtr ResourceTypeStat::Clone() const {
  return New(
      mojo::Clone(count),
      mojo::Clone(size),
      mojo::Clone(live_size),
      mojo::Clone(decoded_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceTypeStat>::value>::type*>
bool ResourceTypeStat::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->count, other_struct.count))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->live_size, other_struct.live_size))
    return false;
  if (!mojo::Equals(this->decoded_size, other_struct.decoded_size))
    return false;
  return true;
}
template <typename StructPtrType>
ResourceTypeStatsPtr ResourceTypeStats::Clone() const {
  return New(
      mojo::Clone(images),
      mojo::Clone(css_style_sheets),
      mojo::Clone(scripts),
      mojo::Clone(xsl_style_sheets),
      mojo::Clone(fonts),
      mojo::Clone(other)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceTypeStats>::value>::type*>
bool ResourceTypeStats::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->images, other_struct.images))
    return false;
  if (!mojo::Equals(this->css_style_sheets, other_struct.css_style_sheets))
    return false;
  if (!mojo::Equals(this->scripts, other_struct.scripts))
    return false;
  if (!mojo::Equals(this->xsl_style_sheets, other_struct.xsl_style_sheets))
    return false;
  if (!mojo::Equals(this->fonts, other_struct.fonts))
    return false;
  if (!mojo::Equals(this->other, other_struct.other))
    return false;
  return true;
}
template <typename StructPtrType>
ResourceUsageDataPtr ResourceUsageData::Clone() const {
  return New(
      mojo::Clone(reports_v8_stats),
      mojo::Clone(v8_bytes_allocated),
      mojo::Clone(v8_bytes_used),
      mojo::Clone(web_cache_stats)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceUsageData>::value>::type*>
bool ResourceUsageData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->reports_v8_stats, other_struct.reports_v8_stats))
    return false;
  if (!mojo::Equals(this->v8_bytes_allocated, other_struct.v8_bytes_allocated))
    return false;
  if (!mojo::Equals(this->v8_bytes_used, other_struct.v8_bytes_used))
    return false;
  if (!mojo::Equals(this->web_cache_stats, other_struct.web_cache_stats))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ResourceTypeStat::DataView,
                                         ::content::mojom::ResourceTypeStatPtr> {
  static bool IsNull(const ::content::mojom::ResourceTypeStatPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ResourceTypeStatPtr* output) { output->reset(); }

  static decltype(::content::mojom::ResourceTypeStat::count) count(
      const ::content::mojom::ResourceTypeStatPtr& input) {
    return input->count;
  }

  static decltype(::content::mojom::ResourceTypeStat::size) size(
      const ::content::mojom::ResourceTypeStatPtr& input) {
    return input->size;
  }

  static decltype(::content::mojom::ResourceTypeStat::live_size) live_size(
      const ::content::mojom::ResourceTypeStatPtr& input) {
    return input->live_size;
  }

  static decltype(::content::mojom::ResourceTypeStat::decoded_size) decoded_size(
      const ::content::mojom::ResourceTypeStatPtr& input) {
    return input->decoded_size;
  }

  static bool Read(::content::mojom::ResourceTypeStat::DataView input, ::content::mojom::ResourceTypeStatPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ResourceTypeStats::DataView,
                                         ::content::mojom::ResourceTypeStatsPtr> {
  static bool IsNull(const ::content::mojom::ResourceTypeStatsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ResourceTypeStatsPtr* output) { output->reset(); }

  static const decltype(::content::mojom::ResourceTypeStats::images)& images(
      const ::content::mojom::ResourceTypeStatsPtr& input) {
    return input->images;
  }

  static const decltype(::content::mojom::ResourceTypeStats::css_style_sheets)& css_style_sheets(
      const ::content::mojom::ResourceTypeStatsPtr& input) {
    return input->css_style_sheets;
  }

  static const decltype(::content::mojom::ResourceTypeStats::scripts)& scripts(
      const ::content::mojom::ResourceTypeStatsPtr& input) {
    return input->scripts;
  }

  static const decltype(::content::mojom::ResourceTypeStats::xsl_style_sheets)& xsl_style_sheets(
      const ::content::mojom::ResourceTypeStatsPtr& input) {
    return input->xsl_style_sheets;
  }

  static const decltype(::content::mojom::ResourceTypeStats::fonts)& fonts(
      const ::content::mojom::ResourceTypeStatsPtr& input) {
    return input->fonts;
  }

  static const decltype(::content::mojom::ResourceTypeStats::other)& other(
      const ::content::mojom::ResourceTypeStatsPtr& input) {
    return input->other;
  }

  static bool Read(::content::mojom::ResourceTypeStats::DataView input, ::content::mojom::ResourceTypeStatsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ResourceUsageData::DataView,
                                         ::content::mojom::ResourceUsageDataPtr> {
  static bool IsNull(const ::content::mojom::ResourceUsageDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ResourceUsageDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::ResourceUsageData::reports_v8_stats) reports_v8_stats(
      const ::content::mojom::ResourceUsageDataPtr& input) {
    return input->reports_v8_stats;
  }

  static decltype(::content::mojom::ResourceUsageData::v8_bytes_allocated) v8_bytes_allocated(
      const ::content::mojom::ResourceUsageDataPtr& input) {
    return input->v8_bytes_allocated;
  }

  static decltype(::content::mojom::ResourceUsageData::v8_bytes_used) v8_bytes_used(
      const ::content::mojom::ResourceUsageDataPtr& input) {
    return input->v8_bytes_used;
  }

  static const decltype(::content::mojom::ResourceUsageData::web_cache_stats)& web_cache_stats(
      const ::content::mojom::ResourceUsageDataPtr& input) {
    return input->web_cache_stats;
  }

  static bool Read(::content::mojom::ResourceUsageData::DataView input, ::content::mojom::ResourceUsageDataPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_