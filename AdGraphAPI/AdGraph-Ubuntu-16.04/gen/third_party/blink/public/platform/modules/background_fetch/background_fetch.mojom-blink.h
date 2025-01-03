// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/background_fetch/background_fetch.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-blink.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct blink_mojom_internal_BackgroundFetchError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundFetchError& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundFetchError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundFetchError& left, const ::blink::mojom::BackgroundFetchError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::BackgroundFetchError> {
  using Hash = blink_mojom_internal_BackgroundFetchError_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::BackgroundFetchError>
    : public GenericHashTraits<::blink::mojom::BackgroundFetchError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundFetchError& value) {
    return value == static_cast<::blink::mojom::BackgroundFetchError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundFetchError& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundFetchError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundFetchError& value) {
    return value == static_cast<::blink::mojom::BackgroundFetchError>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using BackgroundFetchError = BackgroundFetchError;  // Alias for definition in the parent namespace.
class BackgroundFetchRegistrationObserver;
using BackgroundFetchRegistrationObserverPtr = mojo::InterfacePtr<BackgroundFetchRegistrationObserver>;
using RevocableBackgroundFetchRegistrationObserverPtr = ::blink::RevocableInterfacePtr<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverPtrInfo = mojo::InterfacePtrInfo<BackgroundFetchRegistrationObserver>;
using ThreadSafeBackgroundFetchRegistrationObserverPtr =
    mojo::ThreadSafeInterfacePtr<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverRequest = mojo::InterfaceRequest<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundFetchRegistrationObserver>;
using ThreadSafeBackgroundFetchRegistrationObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundFetchRegistrationObserver>;

class BackgroundFetchService;
using BackgroundFetchServicePtr = mojo::InterfacePtr<BackgroundFetchService>;
using RevocableBackgroundFetchServicePtr = ::blink::RevocableInterfacePtr<BackgroundFetchService>;
using BackgroundFetchServicePtrInfo = mojo::InterfacePtrInfo<BackgroundFetchService>;
using ThreadSafeBackgroundFetchServicePtr =
    mojo::ThreadSafeInterfacePtr<BackgroundFetchService>;
using BackgroundFetchServiceRequest = mojo::InterfaceRequest<BackgroundFetchService>;
using BackgroundFetchServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundFetchService>;
using ThreadSafeBackgroundFetchServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundFetchService>;
using BackgroundFetchServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundFetchService>;
using BackgroundFetchServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundFetchService>;

class IconDefinition;
using IconDefinitionPtr = mojo::InlinedStructPtr<IconDefinition>;

class BackgroundFetchOptions;
using BackgroundFetchOptionsPtr = mojo::StructPtr<BackgroundFetchOptions>;

class BackgroundFetchRegistration;
using BackgroundFetchRegistrationPtr = mojo::StructPtr<BackgroundFetchRegistration>;


class BackgroundFetchRegistrationObserverProxy;

template <typename ImplRefTraits>
class BackgroundFetchRegistrationObserverStub;

class BackgroundFetchRegistrationObserverRequestValidator;

class BLINK_PLATFORM_EXPORT BackgroundFetchRegistrationObserver
    : public BackgroundFetchRegistrationObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BackgroundFetchRegistrationObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundFetchRegistrationObserverStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundFetchRegistrationObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnProgressMinVersion = 0,
  };
  virtual ~BackgroundFetchRegistrationObserver() {}

  virtual void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded) = 0;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchRegistrationObserverInterceptorForTesting : public BackgroundFetchRegistrationObserver {
  virtual BackgroundFetchRegistrationObserver* GetForwardingInterface() = 0;
  void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded) override;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchRegistrationObserverAsyncWaiter {
 public:
  explicit BackgroundFetchRegistrationObserverAsyncWaiter(BackgroundFetchRegistrationObserver* proxy);
  ~BackgroundFetchRegistrationObserverAsyncWaiter();

 private:
  BackgroundFetchRegistrationObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationObserverAsyncWaiter);
};

class BackgroundFetchServiceProxy;

template <typename ImplRefTraits>
class BackgroundFetchServiceStub;

class BackgroundFetchServiceRequestValidator;
class BackgroundFetchServiceResponseValidator;

class BLINK_PLATFORM_EXPORT BackgroundFetchService
    : public BackgroundFetchServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BackgroundFetchServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundFetchServiceStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundFetchServiceRequestValidator;
  using ResponseValidator_ = BackgroundFetchServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFetchMinVersion = 0,
    kUpdateUIMinVersion = 0,
    kAbortMinVersion = 0,
    kGetRegistrationMinVersion = 0,
    kGetDeveloperIdsMinVersion = 0,
    kGetIconDisplaySizeMinVersion = 0,
    kAddRegistrationObserverMinVersion = 0,
  };
  virtual ~BackgroundFetchService() {}


  using FetchCallback = base::OnceCallback<void(BackgroundFetchError, BackgroundFetchRegistrationPtr)>;
  virtual void Fetch(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::Vector<::blink::WebServiceWorkerRequest>& requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, FetchCallback callback) = 0;


  using UpdateUICallback = base::OnceCallback<void(BackgroundFetchError)>;
  virtual void UpdateUI(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, const WTF::String& title, UpdateUICallback callback) = 0;


  using AbortCallback = base::OnceCallback<void(BackgroundFetchError)>;
  virtual void Abort(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, AbortCallback callback) = 0;


  using GetRegistrationCallback = base::OnceCallback<void(BackgroundFetchError, BackgroundFetchRegistrationPtr)>;
  virtual void GetRegistration(int64_t service_worker_registration_id, const WTF::String& developer_id, GetRegistrationCallback callback) = 0;


  using GetDeveloperIdsCallback = base::OnceCallback<void(BackgroundFetchError, const WTF::Vector<WTF::String>&)>;
  virtual void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) = 0;


  using GetIconDisplaySizeCallback = base::OnceCallback<void(const ::blink::WebSize&)>;
  virtual void GetIconDisplaySize(GetIconDisplaySizeCallback callback) = 0;

  virtual void AddRegistrationObserver(const WTF::String& unique_id, BackgroundFetchRegistrationObserverPtr observer) = 0;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchServiceInterceptorForTesting : public BackgroundFetchService {
  virtual BackgroundFetchService* GetForwardingInterface() = 0;
  void Fetch(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::Vector<::blink::WebServiceWorkerRequest>& requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, FetchCallback callback) override;
  void UpdateUI(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, const WTF::String& title, UpdateUICallback callback) override;
  void Abort(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, AbortCallback callback) override;
  void GetRegistration(int64_t service_worker_registration_id, const WTF::String& developer_id, GetRegistrationCallback callback) override;
  void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) override;
  void GetIconDisplaySize(GetIconDisplaySizeCallback callback) override;
  void AddRegistrationObserver(const WTF::String& unique_id, BackgroundFetchRegistrationObserverPtr observer) override;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchServiceAsyncWaiter {
 public:
  explicit BackgroundFetchServiceAsyncWaiter(BackgroundFetchService* proxy);
  ~BackgroundFetchServiceAsyncWaiter();
  void Fetch(
      int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::Vector<::blink::WebServiceWorkerRequest>& requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration);
  void UpdateUI(
      int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, const WTF::String& title, BackgroundFetchError* out_error);
  void Abort(
      int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, BackgroundFetchError* out_error);
  void GetRegistration(
      int64_t service_worker_registration_id, const WTF::String& developer_id, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration);
  void GetDeveloperIds(
      int64_t service_worker_registration_id, BackgroundFetchError* out_error, WTF::Vector<WTF::String>* out_developer_ids);
  void GetIconDisplaySize(
      ::blink::WebSize* out_icon_size_pixels);

 private:
  BackgroundFetchService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchServiceAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT BackgroundFetchRegistrationObserverProxy
    : public BackgroundFetchRegistrationObserver {
 public:
  explicit BackgroundFetchRegistrationObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT BackgroundFetchServiceProxy
    : public BackgroundFetchService {
 public:
  explicit BackgroundFetchServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Fetch(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::Vector<::blink::WebServiceWorkerRequest>& requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, FetchCallback callback) final;
  void UpdateUI(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, const WTF::String& title, UpdateUICallback callback) final;
  void Abort(int64_t service_worker_registration_id, const WTF::String& developer_id, const WTF::String& unique_id, AbortCallback callback) final;
  void GetRegistration(int64_t service_worker_registration_id, const WTF::String& developer_id, GetRegistrationCallback callback) final;
  void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) final;
  void GetIconDisplaySize(GetIconDisplaySizeCallback callback) final;
  void AddRegistrationObserver(const WTF::String& unique_id, BackgroundFetchRegistrationObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchRegistrationObserverStubDispatch {
 public:
  static bool Accept(BackgroundFetchRegistrationObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundFetchRegistrationObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundFetchRegistrationObserver>>
class BackgroundFetchRegistrationObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundFetchRegistrationObserverStub() {}
  ~BackgroundFetchRegistrationObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchRegistrationObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchRegistrationObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchServiceStubDispatch {
 public:
  static bool Accept(BackgroundFetchService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundFetchService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundFetchService>>
class BackgroundFetchServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundFetchServiceStub() {}
  ~BackgroundFetchServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchRegistrationObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT BackgroundFetchServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class BLINK_PLATFORM_EXPORT IconDefinition {
 public:
  using DataView = IconDefinitionDataView;
  using Data_ = internal::IconDefinition_Data;

  template <typename... Args>
  static IconDefinitionPtr New(Args&&... args) {
    return IconDefinitionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IconDefinitionPtr From(const U& u) {
    return mojo::TypeConverter<IconDefinitionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IconDefinition>::Convert(*this);
  }


  IconDefinition();

  IconDefinition(
      const WTF::String& src,
      const WTF::String& sizes,
      const WTF::String& type);

  ~IconDefinition();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IconDefinitionPtr>
  IconDefinitionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IconDefinition>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IconDefinition::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IconDefinition::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IconDefinition_UnserializedMessageContext<
            UserType, IconDefinition::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IconDefinition::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return IconDefinition::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IconDefinition_UnserializedMessageContext<
            UserType, IconDefinition::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IconDefinition::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String src;
  WTF::String sizes;
  WTF::String type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class BLINK_PLATFORM_EXPORT BackgroundFetchOptions {
 public:
  using DataView = BackgroundFetchOptionsDataView;
  using Data_ = internal::BackgroundFetchOptions_Data;

  template <typename... Args>
  static BackgroundFetchOptionsPtr New(Args&&... args) {
    return BackgroundFetchOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchOptionsPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchOptions>::Convert(*this);
  }


  BackgroundFetchOptions();

  BackgroundFetchOptions(
      WTF::Vector<IconDefinitionPtr> icons,
      uint64_t download_total,
      const WTF::String& title);

  ~BackgroundFetchOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchOptionsPtr>
  BackgroundFetchOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchOptions_UnserializedMessageContext<
            UserType, BackgroundFetchOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchOptions_UnserializedMessageContext<
            UserType, BackgroundFetchOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::Vector<IconDefinitionPtr> icons;
  uint64_t download_total;
  WTF::String title;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchOptions);
};


class BLINK_PLATFORM_EXPORT BackgroundFetchRegistration {
 public:
  using DataView = BackgroundFetchRegistrationDataView;
  using Data_ = internal::BackgroundFetchRegistration_Data;

  template <typename... Args>
  static BackgroundFetchRegistrationPtr New(Args&&... args) {
    return BackgroundFetchRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchRegistration>::Convert(*this);
  }


  BackgroundFetchRegistration();

  BackgroundFetchRegistration(
      const WTF::String& developer_id,
      const WTF::String& unique_id,
      uint64_t upload_total,
      uint64_t uploaded,
      uint64_t download_total,
      uint64_t downloaded);

  ~BackgroundFetchRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchRegistrationPtr>
  BackgroundFetchRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchRegistration::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchRegistration_UnserializedMessageContext<
            UserType, BackgroundFetchRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchRegistration_UnserializedMessageContext<
            UserType, BackgroundFetchRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String developer_id;
  WTF::String unique_id;
  uint64_t upload_total;
  uint64_t uploaded;
  uint64_t download_total;
  uint64_t downloaded;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
IconDefinitionPtr IconDefinition::Clone() const {
  return New(
      mojo::Clone(src),
      mojo::Clone(sizes),
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IconDefinition>::value>::type*>
bool IconDefinition::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->src, other_struct.src))
    return false;
  if (!mojo::Equals(this->sizes, other_struct.sizes))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundFetchOptionsPtr BackgroundFetchOptions::Clone() const {
  return New(
      mojo::Clone(icons),
      mojo::Clone(download_total),
      mojo::Clone(title)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchOptions>::value>::type*>
bool BackgroundFetchOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->icons, other_struct.icons))
    return false;
  if (!mojo::Equals(this->download_total, other_struct.download_total))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundFetchRegistrationPtr BackgroundFetchRegistration::Clone() const {
  return New(
      mojo::Clone(developer_id),
      mojo::Clone(unique_id),
      mojo::Clone(upload_total),
      mojo::Clone(uploaded),
      mojo::Clone(download_total),
      mojo::Clone(downloaded)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchRegistration>::value>::type*>
bool BackgroundFetchRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->developer_id, other_struct.developer_id))
    return false;
  if (!mojo::Equals(this->unique_id, other_struct.unique_id))
    return false;
  if (!mojo::Equals(this->upload_total, other_struct.upload_total))
    return false;
  if (!mojo::Equals(this->uploaded, other_struct.uploaded))
    return false;
  if (!mojo::Equals(this->download_total, other_struct.download_total))
    return false;
  if (!mojo::Equals(this->downloaded, other_struct.downloaded))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::IconDefinition::DataView,
                                         ::blink::mojom::blink::IconDefinitionPtr> {
  static bool IsNull(const ::blink::mojom::blink::IconDefinitionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::IconDefinitionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::IconDefinition::src)& src(
      const ::blink::mojom::blink::IconDefinitionPtr& input) {
    return input->src;
  }

  static const decltype(::blink::mojom::blink::IconDefinition::sizes)& sizes(
      const ::blink::mojom::blink::IconDefinitionPtr& input) {
    return input->sizes;
  }

  static const decltype(::blink::mojom::blink::IconDefinition::type)& type(
      const ::blink::mojom::blink::IconDefinitionPtr& input) {
    return input->type;
  }

  static bool Read(::blink::mojom::blink::IconDefinition::DataView input, ::blink::mojom::blink::IconDefinitionPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::BackgroundFetchOptions::DataView,
                                         ::blink::mojom::blink::BackgroundFetchOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::BackgroundFetchOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::BackgroundFetchOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::BackgroundFetchOptions::icons)& icons(
      const ::blink::mojom::blink::BackgroundFetchOptionsPtr& input) {
    return input->icons;
  }

  static decltype(::blink::mojom::blink::BackgroundFetchOptions::download_total) download_total(
      const ::blink::mojom::blink::BackgroundFetchOptionsPtr& input) {
    return input->download_total;
  }

  static const decltype(::blink::mojom::blink::BackgroundFetchOptions::title)& title(
      const ::blink::mojom::blink::BackgroundFetchOptionsPtr& input) {
    return input->title;
  }

  static bool Read(::blink::mojom::blink::BackgroundFetchOptions::DataView input, ::blink::mojom::blink::BackgroundFetchOptionsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::BackgroundFetchRegistration::DataView,
                                         ::blink::mojom::blink::BackgroundFetchRegistrationPtr> {
  static bool IsNull(const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::BackgroundFetchRegistrationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::BackgroundFetchRegistration::developer_id)& developer_id(
      const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) {
    return input->developer_id;
  }

  static const decltype(::blink::mojom::blink::BackgroundFetchRegistration::unique_id)& unique_id(
      const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) {
    return input->unique_id;
  }

  static decltype(::blink::mojom::blink::BackgroundFetchRegistration::upload_total) upload_total(
      const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) {
    return input->upload_total;
  }

  static decltype(::blink::mojom::blink::BackgroundFetchRegistration::uploaded) uploaded(
      const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) {
    return input->uploaded;
  }

  static decltype(::blink::mojom::blink::BackgroundFetchRegistration::download_total) download_total(
      const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) {
    return input->download_total;
  }

  static decltype(::blink::mojom::blink::BackgroundFetchRegistration::downloaded) downloaded(
      const ::blink::mojom::blink::BackgroundFetchRegistrationPtr& input) {
    return input->downloaded;
  }

  static bool Read(::blink::mojom::blink::BackgroundFetchRegistration::DataView input, ::blink::mojom::blink::BackgroundFetchRegistrationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_H_