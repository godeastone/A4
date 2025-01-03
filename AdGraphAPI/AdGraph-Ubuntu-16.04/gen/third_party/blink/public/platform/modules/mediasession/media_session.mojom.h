// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_H_

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
#include "mojo/public/mojom/base/string16.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "content/public/common/media_metadata.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class MediaSessionClient;
using MediaSessionClientPtr = mojo::InterfacePtr<MediaSessionClient>;
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

class CONTENT_EXPORT MediaSessionClient
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
class CONTENT_EXPORT MediaSessionClientInterceptorForTesting : public MediaSessionClient {
  virtual MediaSessionClient* GetForwardingInterface() = 0;
  void DidReceiveAction(MediaSessionAction action) override;
};
class CONTENT_EXPORT MediaSessionClientAsyncWaiter {
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

class CONTENT_EXPORT MediaSessionService
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

  virtual void SetMetadata(const base::Optional<content::MediaMetadata>& metadata) = 0;

  virtual void EnableAction(MediaSessionAction action) = 0;

  virtual void DisableAction(MediaSessionAction action) = 0;
};
class CONTENT_EXPORT MediaSessionServiceInterceptorForTesting : public MediaSessionService {
  virtual MediaSessionService* GetForwardingInterface() = 0;
  void SetClient(MediaSessionClientPtr client) override;
  void SetPlaybackState(MediaSessionPlaybackState state) override;
  void SetMetadata(const base::Optional<content::MediaMetadata>& metadata) override;
  void EnableAction(MediaSessionAction action) override;
  void DisableAction(MediaSessionAction action) override;
};
class CONTENT_EXPORT MediaSessionServiceAsyncWaiter {
 public:
  explicit MediaSessionServiceAsyncWaiter(MediaSessionService* proxy);
  ~MediaSessionServiceAsyncWaiter();

 private:
  MediaSessionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionServiceAsyncWaiter);
};

class CONTENT_EXPORT MediaSessionClientProxy
    : public MediaSessionClient {
 public:
  explicit MediaSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidReceiveAction(MediaSessionAction action) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT MediaSessionServiceProxy
    : public MediaSessionService {
 public:
  explicit MediaSessionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(MediaSessionClientPtr client) final;
  void SetPlaybackState(MediaSessionPlaybackState state) final;
  void SetMetadata(const base::Optional<content::MediaMetadata>& metadata) final;
  void EnableAction(MediaSessionAction action) final;
  void DisableAction(MediaSessionAction action) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT MediaSessionClientStubDispatch {
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
class CONTENT_EXPORT MediaSessionServiceStubDispatch {
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
class CONTENT_EXPORT MediaSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MediaSessionServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class CONTENT_EXPORT MediaImage {
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
      const GURL& src,
      const base::string16& type,
      const std::vector<gfx::Size>& sizes);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaImage::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  GURL src;
  base::string16 type;
  std::vector<gfx::Size> sizes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT MediaMetadata {
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
      const base::string16& title,
      const base::string16& artist,
      const base::string16& album,
      const std::vector<content::MediaMetadata::MediaImage>& artwork);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaMetadata::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  base::string16 title;
  base::string16 artist;
  base::string16 album;
  std::vector<content::MediaMetadata::MediaImage> artwork;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::MediaImage::DataView,
                                         ::blink::mojom::MediaImagePtr> {
  static bool IsNull(const ::blink::mojom::MediaImagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::MediaImagePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::MediaImage::src)& src(
      const ::blink::mojom::MediaImagePtr& input) {
    return input->src;
  }

  static const decltype(::blink::mojom::MediaImage::type)& type(
      const ::blink::mojom::MediaImagePtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::MediaImage::sizes)& sizes(
      const ::blink::mojom::MediaImagePtr& input) {
    return input->sizes;
  }

  static bool Read(::blink::mojom::MediaImage::DataView input, ::blink::mojom::MediaImagePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::MediaMetadata::DataView,
                                         ::blink::mojom::MediaMetadataPtr> {
  static bool IsNull(const ::blink::mojom::MediaMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::MediaMetadataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::MediaMetadata::title)& title(
      const ::blink::mojom::MediaMetadataPtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::MediaMetadata::artist)& artist(
      const ::blink::mojom::MediaMetadataPtr& input) {
    return input->artist;
  }

  static const decltype(::blink::mojom::MediaMetadata::album)& album(
      const ::blink::mojom::MediaMetadataPtr& input) {
    return input->album;
  }

  static const decltype(::blink::mojom::MediaMetadata::artwork)& artwork(
      const ::blink::mojom::MediaMetadataPtr& input) {
    return input->artwork;
  }

  static bool Read(::blink::mojom::MediaMetadata::DataView input, ::blink::mojom::MediaMetadataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_H_