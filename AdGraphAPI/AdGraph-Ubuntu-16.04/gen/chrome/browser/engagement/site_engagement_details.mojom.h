// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_H_
#define CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_H_

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
#include "chrome/browser/engagement/site_engagement_details.mojom-shared.h"
#include "url/mojom/url.mojom.h"
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


namespace mojom {
class SiteEngagementDetailsProvider;
using SiteEngagementDetailsProviderPtr = mojo::InterfacePtr<SiteEngagementDetailsProvider>;
using SiteEngagementDetailsProviderPtrInfo = mojo::InterfacePtrInfo<SiteEngagementDetailsProvider>;
using ThreadSafeSiteEngagementDetailsProviderPtr =
    mojo::ThreadSafeInterfacePtr<SiteEngagementDetailsProvider>;
using SiteEngagementDetailsProviderRequest = mojo::InterfaceRequest<SiteEngagementDetailsProvider>;
using SiteEngagementDetailsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<SiteEngagementDetailsProvider>;
using ThreadSafeSiteEngagementDetailsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SiteEngagementDetailsProvider>;
using SiteEngagementDetailsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SiteEngagementDetailsProvider>;
using SiteEngagementDetailsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SiteEngagementDetailsProvider>;

class SiteEngagementDetails;
using SiteEngagementDetailsPtr = mojo::StructPtr<SiteEngagementDetails>;


class SiteEngagementDetailsProviderProxy;

template <typename ImplRefTraits>
class SiteEngagementDetailsProviderStub;

class SiteEngagementDetailsProviderRequestValidator;
class SiteEngagementDetailsProviderResponseValidator;

class  SiteEngagementDetailsProvider
    : public SiteEngagementDetailsProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SiteEngagementDetailsProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = SiteEngagementDetailsProviderStub<ImplRefTraits>;

  using RequestValidator_ = SiteEngagementDetailsProviderRequestValidator;
  using ResponseValidator_ = SiteEngagementDetailsProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSiteEngagementDetailsMinVersion = 0,
    kSetSiteEngagementBaseScoreForUrlMinVersion = 0,
  };
  virtual ~SiteEngagementDetailsProvider() {}


  using GetSiteEngagementDetailsCallback = base::OnceCallback<void(std::vector<SiteEngagementDetailsPtr>)>;
  virtual void GetSiteEngagementDetails(GetSiteEngagementDetailsCallback callback) = 0;

  virtual void SetSiteEngagementBaseScoreForUrl(const GURL& url, double score) = 0;
};
class  SiteEngagementDetailsProviderInterceptorForTesting : public SiteEngagementDetailsProvider {
  virtual SiteEngagementDetailsProvider* GetForwardingInterface() = 0;
  void GetSiteEngagementDetails(GetSiteEngagementDetailsCallback callback) override;
  void SetSiteEngagementBaseScoreForUrl(const GURL& url, double score) override;
};
class  SiteEngagementDetailsProviderAsyncWaiter {
 public:
  explicit SiteEngagementDetailsProviderAsyncWaiter(SiteEngagementDetailsProvider* proxy);
  ~SiteEngagementDetailsProviderAsyncWaiter();
  void GetSiteEngagementDetails(
      std::vector<SiteEngagementDetailsPtr>* out_info);

 private:
  SiteEngagementDetailsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SiteEngagementDetailsProviderAsyncWaiter);
};

class  SiteEngagementDetailsProviderProxy
    : public SiteEngagementDetailsProvider {
 public:
  explicit SiteEngagementDetailsProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetSiteEngagementDetails(GetSiteEngagementDetailsCallback callback) final;
  void SetSiteEngagementBaseScoreForUrl(const GURL& url, double score) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SiteEngagementDetailsProviderStubDispatch {
 public:
  static bool Accept(SiteEngagementDetailsProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SiteEngagementDetailsProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SiteEngagementDetailsProvider>>
class SiteEngagementDetailsProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SiteEngagementDetailsProviderStub() {}
  ~SiteEngagementDetailsProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SiteEngagementDetailsProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SiteEngagementDetailsProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SiteEngagementDetailsProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SiteEngagementDetailsProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  SiteEngagementDetails {
 public:
  using DataView = SiteEngagementDetailsDataView;
  using Data_ = internal::SiteEngagementDetails_Data;

  template <typename... Args>
  static SiteEngagementDetailsPtr New(Args&&... args) {
    return SiteEngagementDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SiteEngagementDetailsPtr From(const U& u) {
    return mojo::TypeConverter<SiteEngagementDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SiteEngagementDetails>::Convert(*this);
  }


  SiteEngagementDetails();

  SiteEngagementDetails(
      const GURL& origin,
      double total_score,
      double base_score,
      double installed_bonus);

  ~SiteEngagementDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SiteEngagementDetailsPtr>
  SiteEngagementDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SiteEngagementDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SiteEngagementDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SiteEngagementDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SiteEngagementDetails_UnserializedMessageContext<
            UserType, SiteEngagementDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SiteEngagementDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SiteEngagementDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SiteEngagementDetails_UnserializedMessageContext<
            UserType, SiteEngagementDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SiteEngagementDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL origin;
  double total_score;
  double base_score;
  double installed_bonus;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SiteEngagementDetailsPtr SiteEngagementDetails::Clone() const {
  return New(
      mojo::Clone(origin),
      mojo::Clone(total_score),
      mojo::Clone(base_score),
      mojo::Clone(installed_bonus)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SiteEngagementDetails>::value>::type*>
bool SiteEngagementDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->total_score, other_struct.total_score))
    return false;
  if (!mojo::Equals(this->base_score, other_struct.base_score))
    return false;
  if (!mojo::Equals(this->installed_bonus, other_struct.installed_bonus))
    return false;
  return true;
}


}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::SiteEngagementDetails::DataView,
                                         ::mojom::SiteEngagementDetailsPtr> {
  static bool IsNull(const ::mojom::SiteEngagementDetailsPtr& input) { return !input; }
  static void SetToNull(::mojom::SiteEngagementDetailsPtr* output) { output->reset(); }

  static const decltype(::mojom::SiteEngagementDetails::origin)& origin(
      const ::mojom::SiteEngagementDetailsPtr& input) {
    return input->origin;
  }

  static decltype(::mojom::SiteEngagementDetails::total_score) total_score(
      const ::mojom::SiteEngagementDetailsPtr& input) {
    return input->total_score;
  }

  static decltype(::mojom::SiteEngagementDetails::base_score) base_score(
      const ::mojom::SiteEngagementDetailsPtr& input) {
    return input->base_score;
  }

  static decltype(::mojom::SiteEngagementDetails::installed_bonus) installed_bonus(
      const ::mojom::SiteEngagementDetailsPtr& input) {
    return input->installed_bonus;
  }

  static bool Read(::mojom::SiteEngagementDetails::DataView input, ::mojom::SiteEngagementDetailsPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_H_