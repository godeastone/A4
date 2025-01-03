// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_H_

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
#include "chrome/browser/ui/webui/discards/discards.mojom-shared.h"
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
class DiscardsDetailsProvider;
using DiscardsDetailsProviderPtr = mojo::InterfacePtr<DiscardsDetailsProvider>;
using DiscardsDetailsProviderPtrInfo = mojo::InterfacePtrInfo<DiscardsDetailsProvider>;
using ThreadSafeDiscardsDetailsProviderPtr =
    mojo::ThreadSafeInterfacePtr<DiscardsDetailsProvider>;
using DiscardsDetailsProviderRequest = mojo::InterfaceRequest<DiscardsDetailsProvider>;
using DiscardsDetailsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<DiscardsDetailsProvider>;
using ThreadSafeDiscardsDetailsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DiscardsDetailsProvider>;
using DiscardsDetailsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DiscardsDetailsProvider>;
using DiscardsDetailsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DiscardsDetailsProvider>;

class TabDiscardsInfo;
using TabDiscardsInfoPtr = mojo::StructPtr<TabDiscardsInfo>;


class DiscardsDetailsProviderProxy;

template <typename ImplRefTraits>
class DiscardsDetailsProviderStub;

class DiscardsDetailsProviderRequestValidator;
class DiscardsDetailsProviderResponseValidator;

class  DiscardsDetailsProvider
    : public DiscardsDetailsProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = DiscardsDetailsProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = DiscardsDetailsProviderStub<ImplRefTraits>;

  using RequestValidator_ = DiscardsDetailsProviderRequestValidator;
  using ResponseValidator_ = DiscardsDetailsProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetTabDiscardsInfoMinVersion = 0,
    kSetAutoDiscardableMinVersion = 0,
    kDiscardByIdMinVersion = 0,
    kFreezeByIdMinVersion = 0,
    kDiscardMinVersion = 0,
  };
  virtual ~DiscardsDetailsProvider() {}


  using GetTabDiscardsInfoCallback = base::OnceCallback<void(std::vector<TabDiscardsInfoPtr>)>;
  virtual void GetTabDiscardsInfo(GetTabDiscardsInfoCallback callback) = 0;


  using SetAutoDiscardableCallback = base::OnceCallback<void()>;
  virtual void SetAutoDiscardable(int32_t tab_id, bool is_auto_discardable, SetAutoDiscardableCallback callback) = 0;


  using DiscardByIdCallback = base::OnceCallback<void()>;
  virtual void DiscardById(int32_t tab_id, bool urgent, DiscardByIdCallback callback) = 0;

  virtual void FreezeById(int32_t tab_id) = 0;


  using DiscardCallback = base::OnceCallback<void()>;
  virtual void Discard(bool urgent, DiscardCallback callback) = 0;
};
class  DiscardsDetailsProviderInterceptorForTesting : public DiscardsDetailsProvider {
  virtual DiscardsDetailsProvider* GetForwardingInterface() = 0;
  void GetTabDiscardsInfo(GetTabDiscardsInfoCallback callback) override;
  void SetAutoDiscardable(int32_t tab_id, bool is_auto_discardable, SetAutoDiscardableCallback callback) override;
  void DiscardById(int32_t tab_id, bool urgent, DiscardByIdCallback callback) override;
  void FreezeById(int32_t tab_id) override;
  void Discard(bool urgent, DiscardCallback callback) override;
};
class  DiscardsDetailsProviderAsyncWaiter {
 public:
  explicit DiscardsDetailsProviderAsyncWaiter(DiscardsDetailsProvider* proxy);
  ~DiscardsDetailsProviderAsyncWaiter();
  void GetTabDiscardsInfo(
      std::vector<TabDiscardsInfoPtr>* out_infos);
  void SetAutoDiscardable(
      int32_t tab_id, bool is_auto_discardable);
  void DiscardById(
      int32_t tab_id, bool urgent);
  void Discard(
      bool urgent);

 private:
  DiscardsDetailsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProviderAsyncWaiter);
};

class  DiscardsDetailsProviderProxy
    : public DiscardsDetailsProvider {
 public:
  explicit DiscardsDetailsProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetTabDiscardsInfo(GetTabDiscardsInfoCallback callback) final;
  void SetAutoDiscardable(int32_t tab_id, bool is_auto_discardable, SetAutoDiscardableCallback callback) final;
  void DiscardById(int32_t tab_id, bool urgent, DiscardByIdCallback callback) final;
  void FreezeById(int32_t tab_id) final;
  void Discard(bool urgent, DiscardCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DiscardsDetailsProviderStubDispatch {
 public:
  static bool Accept(DiscardsDetailsProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DiscardsDetailsProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DiscardsDetailsProvider>>
class DiscardsDetailsProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DiscardsDetailsProviderStub() {}
  ~DiscardsDetailsProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DiscardsDetailsProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DiscardsDetailsProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DiscardsDetailsProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DiscardsDetailsProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  TabDiscardsInfo {
 public:
  using DataView = TabDiscardsInfoDataView;
  using Data_ = internal::TabDiscardsInfo_Data;

  template <typename... Args>
  static TabDiscardsInfoPtr New(Args&&... args) {
    return TabDiscardsInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TabDiscardsInfoPtr From(const U& u) {
    return mojo::TypeConverter<TabDiscardsInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TabDiscardsInfo>::Convert(*this);
  }


  TabDiscardsInfo();

  TabDiscardsInfo(
      const std::string& tab_url,
      const std::string& title,
      LifecycleUnitVisibility visibility,
      bool is_media,
      bool is_discarded,
      bool is_frozen,
      int32_t discard_count,
      int32_t utility_rank,
      int32_t last_active_seconds,
      int32_t id,
      bool is_auto_discardable,
      bool has_reactivation_score,
      double reactivation_score);

  ~TabDiscardsInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TabDiscardsInfoPtr>
  TabDiscardsInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TabDiscardsInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TabDiscardsInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TabDiscardsInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TabDiscardsInfo_UnserializedMessageContext<
            UserType, TabDiscardsInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TabDiscardsInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TabDiscardsInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TabDiscardsInfo_UnserializedMessageContext<
            UserType, TabDiscardsInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TabDiscardsInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string tab_url;
  std::string title;
  LifecycleUnitVisibility visibility;
  bool is_media;
  bool is_discarded;
  bool is_frozen;
  int32_t discard_count;
  int32_t utility_rank;
  int32_t last_active_seconds;
  int32_t id;
  bool is_auto_discardable;
  bool has_reactivation_score;
  double reactivation_score;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TabDiscardsInfoPtr TabDiscardsInfo::Clone() const {
  return New(
      mojo::Clone(tab_url),
      mojo::Clone(title),
      mojo::Clone(visibility),
      mojo::Clone(is_media),
      mojo::Clone(is_discarded),
      mojo::Clone(is_frozen),
      mojo::Clone(discard_count),
      mojo::Clone(utility_rank),
      mojo::Clone(last_active_seconds),
      mojo::Clone(id),
      mojo::Clone(is_auto_discardable),
      mojo::Clone(has_reactivation_score),
      mojo::Clone(reactivation_score)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TabDiscardsInfo>::value>::type*>
bool TabDiscardsInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->tab_url, other_struct.tab_url))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->visibility, other_struct.visibility))
    return false;
  if (!mojo::Equals(this->is_media, other_struct.is_media))
    return false;
  if (!mojo::Equals(this->is_discarded, other_struct.is_discarded))
    return false;
  if (!mojo::Equals(this->is_frozen, other_struct.is_frozen))
    return false;
  if (!mojo::Equals(this->discard_count, other_struct.discard_count))
    return false;
  if (!mojo::Equals(this->utility_rank, other_struct.utility_rank))
    return false;
  if (!mojo::Equals(this->last_active_seconds, other_struct.last_active_seconds))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->is_auto_discardable, other_struct.is_auto_discardable))
    return false;
  if (!mojo::Equals(this->has_reactivation_score, other_struct.has_reactivation_score))
    return false;
  if (!mojo::Equals(this->reactivation_score, other_struct.reactivation_score))
    return false;
  return true;
}


}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::TabDiscardsInfo::DataView,
                                         ::mojom::TabDiscardsInfoPtr> {
  static bool IsNull(const ::mojom::TabDiscardsInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::TabDiscardsInfoPtr* output) { output->reset(); }

  static const decltype(::mojom::TabDiscardsInfo::tab_url)& tab_url(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->tab_url;
  }

  static const decltype(::mojom::TabDiscardsInfo::title)& title(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->title;
  }

  static decltype(::mojom::TabDiscardsInfo::visibility) visibility(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->visibility;
  }

  static decltype(::mojom::TabDiscardsInfo::is_media) is_media(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->is_media;
  }

  static decltype(::mojom::TabDiscardsInfo::is_discarded) is_discarded(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->is_discarded;
  }

  static decltype(::mojom::TabDiscardsInfo::is_frozen) is_frozen(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->is_frozen;
  }

  static decltype(::mojom::TabDiscardsInfo::discard_count) discard_count(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->discard_count;
  }

  static decltype(::mojom::TabDiscardsInfo::utility_rank) utility_rank(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->utility_rank;
  }

  static decltype(::mojom::TabDiscardsInfo::last_active_seconds) last_active_seconds(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->last_active_seconds;
  }

  static decltype(::mojom::TabDiscardsInfo::id) id(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->id;
  }

  static decltype(::mojom::TabDiscardsInfo::is_auto_discardable) is_auto_discardable(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->is_auto_discardable;
  }

  static decltype(::mojom::TabDiscardsInfo::has_reactivation_score) has_reactivation_score(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->has_reactivation_score;
  }

  static decltype(::mojom::TabDiscardsInfo::reactivation_score) reactivation_score(
      const ::mojom::TabDiscardsInfoPtr& input) {
    return input->reactivation_score;
  }

  static bool Read(::mojom::TabDiscardsInfo::DataView input, ::mojom::TabDiscardsInfoPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_H_