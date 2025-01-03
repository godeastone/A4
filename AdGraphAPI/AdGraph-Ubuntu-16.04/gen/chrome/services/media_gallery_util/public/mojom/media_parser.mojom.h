// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_H_
#define CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_H_

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
#include "chrome/services/media_gallery_util/public/mojom/media_parser.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
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
#include "chrome/common/media_galleries/metadata_types.h"


namespace chrome {
namespace mojom {
class MediaParser;
using MediaParserPtr = mojo::InterfacePtr<MediaParser>;
using MediaParserPtrInfo = mojo::InterfacePtrInfo<MediaParser>;
using ThreadSafeMediaParserPtr =
    mojo::ThreadSafeInterfacePtr<MediaParser>;
using MediaParserRequest = mojo::InterfaceRequest<MediaParser>;
using MediaParserAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaParser>;
using ThreadSafeMediaParserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaParser>;
using MediaParserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaParser>;
using MediaParserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaParser>;

class MediaParserFactory;
using MediaParserFactoryPtr = mojo::InterfacePtr<MediaParserFactory>;
using MediaParserFactoryPtrInfo = mojo::InterfacePtrInfo<MediaParserFactory>;
using ThreadSafeMediaParserFactoryPtr =
    mojo::ThreadSafeInterfacePtr<MediaParserFactory>;
using MediaParserFactoryRequest = mojo::InterfaceRequest<MediaParserFactory>;
using MediaParserFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaParserFactory>;
using ThreadSafeMediaParserFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaParserFactory>;
using MediaParserFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaParserFactory>;
using MediaParserFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaParserFactory>;

class MediaDataSource;
using MediaDataSourcePtr = mojo::InterfacePtr<MediaDataSource>;
using MediaDataSourcePtrInfo = mojo::InterfacePtrInfo<MediaDataSource>;
using ThreadSafeMediaDataSourcePtr =
    mojo::ThreadSafeInterfacePtr<MediaDataSource>;
using MediaDataSourceRequest = mojo::InterfaceRequest<MediaDataSource>;
using MediaDataSourceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDataSource>;
using ThreadSafeMediaDataSourceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDataSource>;
using MediaDataSourceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDataSource>;
using MediaDataSourceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDataSource>;

class MediaStreamInfo;
using MediaStreamInfoPtr = mojo::StructPtr<MediaStreamInfo>;

class MediaMetadata;
using MediaMetadataPtr = mojo::StructPtr<MediaMetadata>;

class AttachedImage;
using AttachedImagePtr = mojo::StructPtr<AttachedImage>;


class MediaParserProxy;

template <typename ImplRefTraits>
class MediaParserStub;

class MediaParserRequestValidator;
class MediaParserResponseValidator;

class  MediaParser
    : public MediaParserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaParserProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaParserStub<ImplRefTraits>;

  using RequestValidator_ = MediaParserRequestValidator;
  using ResponseValidator_ = MediaParserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kParseMediaMetadataMinVersion = 0,
    kCheckMediaFileMinVersion = 0,
    kGetCpuInfoMinVersion = 0,
  };
  virtual ~MediaParser() {}


  using ParseMediaMetadataCallback = base::OnceCallback<void(bool, MediaMetadataPtr, const std::vector<::metadata::AttachedImage>&)>;
  virtual void ParseMediaMetadata(const std::string& mime_type, int64_t total_size, bool get_attached_images, MediaDataSourcePtr media_data_source, ParseMediaMetadataCallback callback) = 0;


  using CheckMediaFileCallback = base::OnceCallback<void(bool)>;
  virtual void CheckMediaFile(base::TimeDelta decode_time, base::File file, CheckMediaFileCallback callback) = 0;


  using GetCpuInfoCallback = base::OnceCallback<void(int64_t, int64_t)>;
  virtual void GetCpuInfo(GetCpuInfoCallback callback) = 0;
};
class  MediaParserInterceptorForTesting : public MediaParser {
  virtual MediaParser* GetForwardingInterface() = 0;
  void ParseMediaMetadata(const std::string& mime_type, int64_t total_size, bool get_attached_images, MediaDataSourcePtr media_data_source, ParseMediaMetadataCallback callback) override;
  void CheckMediaFile(base::TimeDelta decode_time, base::File file, CheckMediaFileCallback callback) override;
  void GetCpuInfo(GetCpuInfoCallback callback) override;
};
class  MediaParserAsyncWaiter {
 public:
  explicit MediaParserAsyncWaiter(MediaParser* proxy);
  ~MediaParserAsyncWaiter();
  void ParseMediaMetadata(
      const std::string& mime_type, int64_t total_size, bool get_attached_images, MediaDataSourcePtr media_data_source, bool* out_parse_success, MediaMetadataPtr* out_metadata, std::vector<::metadata::AttachedImage>* out_attached_images);
  void CheckMediaFile(
      base::TimeDelta decode_time, base::File file, bool* out_success);
  void GetCpuInfo(
      int64_t* out_libyuv_cpu_flags, int64_t* out_ffmpeg_cpu_flags);

 private:
  MediaParser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaParserAsyncWaiter);
};

class MediaParserFactoryProxy;

template <typename ImplRefTraits>
class MediaParserFactoryStub;

class MediaParserFactoryRequestValidator;
class MediaParserFactoryResponseValidator;

class  MediaParserFactory
    : public MediaParserFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaParserFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaParserFactoryStub<ImplRefTraits>;

  using RequestValidator_ = MediaParserFactoryRequestValidator;
  using ResponseValidator_ = MediaParserFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateMediaParserMinVersion = 0,
  };
  virtual ~MediaParserFactory() {}


  using CreateMediaParserCallback = base::OnceCallback<void(MediaParserPtr)>;
  virtual void CreateMediaParser(int64_t libyuv_cpu_flags, int64_t libavutil_cpu_flags, CreateMediaParserCallback callback) = 0;
};
class  MediaParserFactoryInterceptorForTesting : public MediaParserFactory {
  virtual MediaParserFactory* GetForwardingInterface() = 0;
  void CreateMediaParser(int64_t libyuv_cpu_flags, int64_t libavutil_cpu_flags, CreateMediaParserCallback callback) override;
};
class  MediaParserFactoryAsyncWaiter {
 public:
  explicit MediaParserFactoryAsyncWaiter(MediaParserFactory* proxy);
  ~MediaParserFactoryAsyncWaiter();
  void CreateMediaParser(
      int64_t libyuv_cpu_flags, int64_t libavutil_cpu_flags, MediaParserPtr* out_media_parser);

 private:
  MediaParserFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaParserFactoryAsyncWaiter);
};

class MediaDataSourceProxy;

template <typename ImplRefTraits>
class MediaDataSourceStub;

class MediaDataSourceRequestValidator;
class MediaDataSourceResponseValidator;

class  MediaDataSource
    : public MediaDataSourceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaDataSourceProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDataSourceStub<ImplRefTraits>;

  using RequestValidator_ = MediaDataSourceRequestValidator;
  using ResponseValidator_ = MediaDataSourceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
  };
  virtual ~MediaDataSource() {}


  using ReadCallback = base::OnceCallback<void(const std::vector<uint8_t>&)>;
  virtual void Read(int64_t position, int64_t length, ReadCallback callback) = 0;
};
class  MediaDataSourceInterceptorForTesting : public MediaDataSource {
  virtual MediaDataSource* GetForwardingInterface() = 0;
  void Read(int64_t position, int64_t length, ReadCallback callback) override;
};
class  MediaDataSourceAsyncWaiter {
 public:
  explicit MediaDataSourceAsyncWaiter(MediaDataSource* proxy);
  ~MediaDataSourceAsyncWaiter();
  void Read(
      int64_t position, int64_t length, std::vector<uint8_t>* out_data);

 private:
  MediaDataSource* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDataSourceAsyncWaiter);
};

class  MediaParserProxy
    : public MediaParser {
 public:
  explicit MediaParserProxy(mojo::MessageReceiverWithResponder* receiver);
  void ParseMediaMetadata(const std::string& mime_type, int64_t total_size, bool get_attached_images, MediaDataSourcePtr media_data_source, ParseMediaMetadataCallback callback) final;
  void CheckMediaFile(base::TimeDelta decode_time, base::File file, CheckMediaFileCallback callback) final;
  void GetCpuInfo(GetCpuInfoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaParserFactoryProxy
    : public MediaParserFactory {
 public:
  explicit MediaParserFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateMediaParser(int64_t libyuv_cpu_flags, int64_t libavutil_cpu_flags, CreateMediaParserCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaDataSourceProxy
    : public MediaDataSource {
 public:
  explicit MediaDataSourceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Read(int64_t position, int64_t length, ReadCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaParserStubDispatch {
 public:
  static bool Accept(MediaParser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaParser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaParser>>
class MediaParserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaParserStub() {}
  ~MediaParserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaParserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaParserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaParserFactoryStubDispatch {
 public:
  static bool Accept(MediaParserFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaParserFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaParserFactory>>
class MediaParserFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaParserFactoryStub() {}
  ~MediaParserFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaParserFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaParserFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaDataSourceStubDispatch {
 public:
  static bool Accept(MediaDataSource* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDataSource* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDataSource>>
class MediaDataSourceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDataSourceStub() {}
  ~MediaDataSourceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDataSourceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDataSourceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaParserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaParserFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaDataSourceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaParserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaParserFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaDataSourceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class  MediaStreamInfo {
 public:
  using DataView = MediaStreamInfoDataView;
  using Data_ = internal::MediaStreamInfo_Data;

  template <typename... Args>
  static MediaStreamInfoPtr New(Args&&... args) {
    return MediaStreamInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaStreamInfoPtr From(const U& u) {
    return mojo::TypeConverter<MediaStreamInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaStreamInfo>::Convert(*this);
  }


  MediaStreamInfo();

  MediaStreamInfo(
      const std::string& type,
      base::Value additional_properties);

  ~MediaStreamInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaStreamInfoPtr>
  MediaStreamInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaStreamInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaStreamInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaStreamInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaStreamInfo_UnserializedMessageContext<
            UserType, MediaStreamInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaStreamInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaStreamInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaStreamInfo_UnserializedMessageContext<
            UserType, MediaStreamInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaStreamInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string type;
  base::Value additional_properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaStreamInfo);
};


class  MediaMetadata {
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
      const std::string& mime_type,
      int32_t height,
      int32_t width,
      double duration,
      int32_t rotation,
      const std::string& album,
      const std::string& artist,
      const std::string& comment,
      const std::string& copyright,
      int32_t disc,
      const std::string& genre,
      const std::string& language,
      const std::string& title,
      int32_t track,
      std::vector<MediaStreamInfoPtr> raw_tags);

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

  std::string mime_type;
  int32_t height;
  int32_t width;
  double duration;
  int32_t rotation;
  std::string album;
  std::string artist;
  std::string comment;
  std::string copyright;
  int32_t disc;
  std::string genre;
  std::string language;
  std::string title;
  int32_t track;
  std::vector<MediaStreamInfoPtr> raw_tags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaMetadata);
};


class  AttachedImage {
 public:
  using DataView = AttachedImageDataView;
  using Data_ = internal::AttachedImage_Data;

  template <typename... Args>
  static AttachedImagePtr New(Args&&... args) {
    return AttachedImagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AttachedImagePtr From(const U& u) {
    return mojo::TypeConverter<AttachedImagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AttachedImage>::Convert(*this);
  }


  AttachedImage();

  AttachedImage(
      const std::string& type,
      const std::vector<uint8_t>& data);

  ~AttachedImage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AttachedImagePtr>
  AttachedImagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AttachedImage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AttachedImage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AttachedImage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AttachedImage_UnserializedMessageContext<
            UserType, AttachedImage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AttachedImage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AttachedImage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AttachedImage_UnserializedMessageContext<
            UserType, AttachedImage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AttachedImage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string type;
  std::vector<uint8_t> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
MediaStreamInfoPtr MediaStreamInfo::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(additional_properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaStreamInfo>::value>::type*>
bool MediaStreamInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->additional_properties, other_struct.additional_properties))
    return false;
  return true;
}
template <typename StructPtrType>
MediaMetadataPtr MediaMetadata::Clone() const {
  return New(
      mojo::Clone(mime_type),
      mojo::Clone(height),
      mojo::Clone(width),
      mojo::Clone(duration),
      mojo::Clone(rotation),
      mojo::Clone(album),
      mojo::Clone(artist),
      mojo::Clone(comment),
      mojo::Clone(copyright),
      mojo::Clone(disc),
      mojo::Clone(genre),
      mojo::Clone(language),
      mojo::Clone(title),
      mojo::Clone(track),
      mojo::Clone(raw_tags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaMetadata>::value>::type*>
bool MediaMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->rotation, other_struct.rotation))
    return false;
  if (!mojo::Equals(this->album, other_struct.album))
    return false;
  if (!mojo::Equals(this->artist, other_struct.artist))
    return false;
  if (!mojo::Equals(this->comment, other_struct.comment))
    return false;
  if (!mojo::Equals(this->copyright, other_struct.copyright))
    return false;
  if (!mojo::Equals(this->disc, other_struct.disc))
    return false;
  if (!mojo::Equals(this->genre, other_struct.genre))
    return false;
  if (!mojo::Equals(this->language, other_struct.language))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->track, other_struct.track))
    return false;
  if (!mojo::Equals(this->raw_tags, other_struct.raw_tags))
    return false;
  return true;
}
template <typename StructPtrType>
AttachedImagePtr AttachedImage::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AttachedImage>::value>::type*>
bool AttachedImage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace chrome

namespace mojo {


template <>
struct  StructTraits<::chrome::mojom::MediaStreamInfo::DataView,
                                         ::chrome::mojom::MediaStreamInfoPtr> {
  static bool IsNull(const ::chrome::mojom::MediaStreamInfoPtr& input) { return !input; }
  static void SetToNull(::chrome::mojom::MediaStreamInfoPtr* output) { output->reset(); }

  static const decltype(::chrome::mojom::MediaStreamInfo::type)& type(
      const ::chrome::mojom::MediaStreamInfoPtr& input) {
    return input->type;
  }

  static const decltype(::chrome::mojom::MediaStreamInfo::additional_properties)& additional_properties(
      const ::chrome::mojom::MediaStreamInfoPtr& input) {
    return input->additional_properties;
  }

  static bool Read(::chrome::mojom::MediaStreamInfo::DataView input, ::chrome::mojom::MediaStreamInfoPtr* output);
};


template <>
struct  StructTraits<::chrome::mojom::MediaMetadata::DataView,
                                         ::chrome::mojom::MediaMetadataPtr> {
  static bool IsNull(const ::chrome::mojom::MediaMetadataPtr& input) { return !input; }
  static void SetToNull(::chrome::mojom::MediaMetadataPtr* output) { output->reset(); }

  static const decltype(::chrome::mojom::MediaMetadata::mime_type)& mime_type(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->mime_type;
  }

  static decltype(::chrome::mojom::MediaMetadata::height) height(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->height;
  }

  static decltype(::chrome::mojom::MediaMetadata::width) width(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->width;
  }

  static decltype(::chrome::mojom::MediaMetadata::duration) duration(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->duration;
  }

  static decltype(::chrome::mojom::MediaMetadata::rotation) rotation(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->rotation;
  }

  static const decltype(::chrome::mojom::MediaMetadata::album)& album(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->album;
  }

  static const decltype(::chrome::mojom::MediaMetadata::artist)& artist(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->artist;
  }

  static const decltype(::chrome::mojom::MediaMetadata::comment)& comment(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->comment;
  }

  static const decltype(::chrome::mojom::MediaMetadata::copyright)& copyright(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->copyright;
  }

  static decltype(::chrome::mojom::MediaMetadata::disc) disc(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->disc;
  }

  static const decltype(::chrome::mojom::MediaMetadata::genre)& genre(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->genre;
  }

  static const decltype(::chrome::mojom::MediaMetadata::language)& language(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->language;
  }

  static const decltype(::chrome::mojom::MediaMetadata::title)& title(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->title;
  }

  static decltype(::chrome::mojom::MediaMetadata::track) track(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->track;
  }

  static const decltype(::chrome::mojom::MediaMetadata::raw_tags)& raw_tags(
      const ::chrome::mojom::MediaMetadataPtr& input) {
    return input->raw_tags;
  }

  static bool Read(::chrome::mojom::MediaMetadata::DataView input, ::chrome::mojom::MediaMetadataPtr* output);
};


template <>
struct  StructTraits<::chrome::mojom::AttachedImage::DataView,
                                         ::chrome::mojom::AttachedImagePtr> {
  static bool IsNull(const ::chrome::mojom::AttachedImagePtr& input) { return !input; }
  static void SetToNull(::chrome::mojom::AttachedImagePtr* output) { output->reset(); }

  static const decltype(::chrome::mojom::AttachedImage::type)& type(
      const ::chrome::mojom::AttachedImagePtr& input) {
    return input->type;
  }

  static const decltype(::chrome::mojom::AttachedImage::data)& data(
      const ::chrome::mojom::AttachedImagePtr& input) {
    return input->data;
  }

  static bool Read(::chrome::mojom::AttachedImage::DataView input, ::chrome::mojom::AttachedImagePtr* output);
};

}  // namespace mojo

#endif  // CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_H_