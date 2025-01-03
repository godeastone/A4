// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/mediasession/media_session.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
struct blink_mojom_internal_MediaSessionAction_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::MediaSessionAction& value) {
    using utype = std::underlying_type<::blink::mojom::MediaSessionAction>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::MediaSessionAction& left, const ::blink::mojom::MediaSessionAction& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::MediaSessionAction> {
  using Hash = blink_mojom_internal_MediaSessionAction_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::MediaSessionAction>
    : public GenericHashTraits<::blink::mojom::MediaSessionAction> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::MediaSessionAction& value) {
    return value == static_cast<::blink::mojom::MediaSessionAction>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::MediaSessionAction& slot, bool) {
    slot = static_cast<::blink::mojom::MediaSessionAction>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::MediaSessionAction& value) {
    return value == static_cast<::blink::mojom::MediaSessionAction>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_MediaSessionPlaybackState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::MediaSessionPlaybackState& value) {
    using utype = std::underlying_type<::blink::mojom::MediaSessionPlaybackState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::MediaSessionPlaybackState& left, const ::blink::mojom::MediaSessionPlaybackState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::MediaSessionPlaybackState> {
  using Hash = blink_mojom_internal_MediaSessionPlaybackState_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::MediaSessionPlaybackState>
    : public GenericHashTraits<::blink::mojom::MediaSessionPlaybackState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::MediaSessionPlaybackState& value) {
    return value == static_cast<::blink::mojom::MediaSessionPlaybackState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::MediaSessionPlaybackState& slot, bool) {
    slot = static_cast<::blink::mojom::MediaSessionPlaybackState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::MediaSessionPlaybackState& value) {
    return value == static_cast<::blink::mojom::MediaSessionPlaybackState>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using MediaSessionAction = MediaSessionAction;  // Alias for definition in the parent namespace.
using MediaSessionPlaybackState = MediaSessionPlaybackState;  // Alias for definition in the parent namespace.
class MediaSessionClient;
using MediaSessionClientPtr = mojo::InterfacePtr<MediaSessionClient>;
using RevocableMediaSessionClientPtr = ::blink::RevocableInterfacePtr<MediaSessionClient>;
using MediaSessionClientPtrInfo = mojo::InterfacePtrInfo<MediaSessionClient>;
using ThreadSafeMediaSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<MediaSessionClient>;
using MediaSessionClientRequest = mojo::InterfaceRequest<MediaSessionClient>;
using MediaSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaSessionClient>;
using ThreadSafeMediaSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaSessionClient>;
using MediaSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaSessionClient>;
using MediaSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaSessionClient>;

class MediaSessionService;
using MediaSessionServicePtr = mojo::InterfacePtr<MediaSessionService>;
using RevocableMediaSessionServicePtr = ::blink::RevocableInterfacePtr<MediaSessionService>;
using MediaSessionServicePtrInfo = mojo::InterfacePtrInfo<MediaSessionService>;
using ThreadSafeMediaSessionServicePtr =
    mojo::ThreadSafeInterfacePtr<MediaSessionService>;
using MediaSessionServiceRequest = mojo::InterfaceRequest<MediaSessionService>;
using MediaSessionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaSessionService>;
using ThreadSafeMediaSessionServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaSessionService>;
using MediaSessionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaSessionService>;
using MediaSessionServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaSessionService>;

class MediaImage;
using MediaImagePtr = mojo::StructPtr<MediaImage>;

class MediaMetadata;
using MediaMetadataPtr = mojo::StructPtr<MediaMetadata>;


class MediaSessionClientProxy;

template <typename ImplRefTraits>
class MediaSessionClientStub;

class MediaSessionClientRequestValidator;

class BLINK_PLATFORM_EXPORT MediaSessionClient
    : public MediaSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = MediaSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidReceiveActionMinVersion = 0,
  };
  virtual ~MediaSessionClient() {}

  virtual void DidReceiveAction(MediaSessionAction action) = 0;
};
class BLINK_PLATFORM_EXPORT MediaSessionClientInterceptorForTesting : public MediaSessionClient {
  virtual MediaSessionClient* GetForwardingInterface() = 0;
  void DidReceiveAction(MediaSessionAction action) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionClientAsyncWaiter {
 public:
  explicit MediaSessionClientAsyncWaiter(MediaSessionClient* proxy);
  ~MediaSessionClientAsyncWaiter();

 private:
  MediaSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionClientAsyncWaiter);
};

class MediaSessionServiceProxy;

template <typename ImplRefTraits>
class MediaSessionServiceStub;

class MediaSessionServiceRequestValidator;

class BLINK_PLATFORM_EXPORT MediaSessionService
    : public MediaSessionServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaSessionServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaSessionServiceStub<ImplRefTraits>;

  using RequestValidator_ = MediaSessionServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kSetPlaybackStateMinVersion = 0,
    kSetMetadataMinVersion = 0,
    kEnableActionMinVersion = 0,
    kDisableActionMinVersion = 0,
  };
  virtual ~MediaSessionService() {}

  virtual void SetClient(MediaSessionClientPtr client) = 0;

  virtual void SetPlaybackState(MediaSessionPlaybackState state) = 0;

  virtual void SetMetadata(MediaMetadataPtr metadata) = 0;

  virtual void EnableAction(MediaSessionAction action) = 0;

  virtual void DisableAction(MediaSessionAction action) = 0;
};
class BLINK_PLATFORM_EXPORT MediaSessionServiceInterceptorForTesting : public MediaSessionService {
  virtual MediaSessionService* GetForwardingInterface() = 0;
  void SetClient(MediaSessionClientPtr client) override;
  void SetPlaybackState(MediaSessionPlaybackState state) override;
  void SetMetadata(MediaMetadataPtr metadata) override;
  void EnableAction(MediaSessionAction action) override;
  void DisableAction(MediaSessionAction action) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionServiceAsyncWaiter {
 public:
  explicit MediaSessionServiceAsyncWaiter(MediaSessionService* proxy);
  ~MediaSessionServiceAsyncWaiter();

 private:
  MediaSessionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionServiceAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT MediaSessionClientProxy
    : public MediaSessionClient {
 public:
  explicit MediaSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidReceiveAction(MediaSessionAction action) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT MediaSessionServiceProxy
    : public MediaSessionService {
 public:
  explicit MediaSessionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(MediaSessionClientPtr client) final;
  void SetPlaybackState(MediaSessionPlaybackState state) final;
  void SetMetadata(MediaMetadataPtr metadata) final;
  void EnableAction(MediaSessionAction action) final;
  void DisableAction(MediaSessionAction action) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT MediaSessionClientStubDispatch {
 public:
  static bool Accept(MediaSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaSessionClient>>
class MediaSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaSessionClientStub() {}
  ~MediaSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaSessionServiceStubDispatch {
 public:
  static bool Accept(MediaSessionService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaSessionService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaSessionService>>
class MediaSessionServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaSessionServiceStub() {}
  ~MediaSessionServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_PLATFORM_EXPORT MediaImage {
 public:
  using DataView = MediaImageDataView;
  using Data_ = internal::MediaImage_Data;

  template <typename... Args>
  static MediaImagePtr New(Args&&... args) {
    return MediaImagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaImagePtr From(const U& u) {
    return mojo::TypeConverter<MediaImagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaImage>::Convert(*this);
  }


  MediaImage();

  MediaImage(
      const ::blink::KURL& src,
      const WTF::String& type,
      const WTF::Vector<::blink::WebSize>& sizes);

  ~MediaImage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaImagePtr>
  MediaImagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaImage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaImage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaImage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaImage_UnserializedMessageContext<
            UserType, MediaImage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaImage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaImage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaImage_UnserializedMessageContext<
            UserType, MediaImage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaImage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::blink::KURL src;
  WTF::String type;
  WTF::Vector<::blink::WebSize> sizes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_PLATFORM_EXPORT MediaMetadata {
 public:
  using DataView = MediaMetadataDataView;
  using Data_ = internal::MediaMetadata_Data;

  template <typename... Args>
  static MediaMetadataPtr New(Args&&... args) {
    return MediaMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaMetadataPtr From(const U& u) {
    return mojo::TypeConverter<MediaMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaMetadata>::Convert(*this);
  }


  MediaMetadata();

  MediaMetadata(
      const WTF::String& title,
      const WTF::String& artist,
      const WTF::String& album,
      WTF::Vector<MediaImagePtr> artwork);

  ~MediaMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaMetadataPtr>
  MediaMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaMetadata::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaMetadata_UnserializedMessageContext<
            UserType, MediaMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaMetadata_UnserializedMessageContext<
            UserType, MediaMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String title;
  WTF::String artist;
  WTF::String album;
  WTF::Vector<MediaImagePtr> artwork;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaMetadata);
};

template <typename StructPtrType>
MediaImagePtr MediaImage::Clone() const {
  return New(
      mojo::Clone(src),
      mojo::Clone(type),
      mojo::Clone(sizes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaImage>::value>::type*>
bool MediaImage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->src, other_struct.src))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->sizes, other_struct.sizes))
    return false;
  return true;
}
template <typename StructPtrType>
MediaMetadataPtr MediaMetadata::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(artist),
      mojo::Clone(album),
      mojo::Clone(artwork)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaMetadata>::value>::type*>
bool MediaMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->artist, other_struct.artist))
    return false;
  if (!mojo::Equals(this->album, other_struct.album))
    return false;
  if (!mojo::Equals(this->artwork, other_struct.artwork))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::MediaImage::DataView,
                                         ::blink::mojom::blink::MediaImagePtr> {
  static bool IsNull(const ::blink::mojom::blink::MediaImagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MediaImagePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::MediaImage::src)& src(
      const ::blink::mojom::blink::MediaImagePtr& input) {
    return input->src;
  }

  static const decltype(::blink::mojom::blink::MediaImage::type)& type(
      const ::blink::mojom::blink::MediaImagePtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::blink::MediaImage::sizes)& sizes(
      const ::blink::mojom::blink::MediaImagePtr& input) {
    return input->sizes;
  }

  static bool Read(::blink::mojom::blink::MediaImage::DataView input, ::blink::mojom::blink::MediaImagePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::MediaMetadata::DataView,
                                         ::blink::mojom::blink::MediaMetadataPtr> {
  static bool IsNull(const ::blink::mojom::blink::MediaMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MediaMetadataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::MediaMetadata::title)& title(
      const ::blink::mojom::blink::MediaMetadataPtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::blink::MediaMetadata::artist)& artist(
      const ::blink::mojom::blink::MediaMetadataPtr& input) {
    return input->artist;
  }

  static const decltype(::blink::mojom::blink::MediaMetadata::album)& album(
      const ::blink::mojom::blink::MediaMetadataPtr& input) {
    return input->album;
  }

  static const decltype(::blink::mojom::blink::MediaMetadata::artwork)& artwork(
      const ::blink::mojom::blink::MediaMetadataPtr& input) {
    return input->artwork;
  }

  static bool Read(::blink::mojom::blink::MediaMetadata::DataView input, ::blink::mojom::blink::MediaMetadataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_H_