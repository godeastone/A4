// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "chrome/services/media_gallery_util/public/mojom/media_parser.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "chrome/services/media_gallery_util/public/mojom/media_parser.mojom-shared-message-ids.h"
#include "chrome/services/media_gallery_util/public/mojom/media_parser_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
namespace chrome {
namespace mojom {
MediaStreamInfo::MediaStreamInfo()
    : type(),
      additional_properties() {}

MediaStreamInfo::MediaStreamInfo(
    const std::string& type_in,
    base::Value additional_properties_in)
    : type(std::move(type_in)),
      additional_properties(std::move(additional_properties_in)) {}

MediaStreamInfo::~MediaStreamInfo() = default;

bool MediaStreamInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaMetadata::MediaMetadata()
    : mime_type(),
      height(-1),
      width(-1),
      duration(-1),
      rotation(),
      album(),
      artist(),
      comment(),
      copyright(),
      disc(-1),
      genre(),
      language(),
      title(),
      track(-1),
      raw_tags() {}

MediaMetadata::MediaMetadata(
    const std::string& mime_type_in,
    int32_t height_in,
    int32_t width_in,
    double duration_in,
    int32_t rotation_in,
    const std::string& album_in,
    const std::string& artist_in,
    const std::string& comment_in,
    const std::string& copyright_in,
    int32_t disc_in,
    const std::string& genre_in,
    const std::string& language_in,
    const std::string& title_in,
    int32_t track_in,
    std::vector<MediaStreamInfoPtr> raw_tags_in)
    : mime_type(std::move(mime_type_in)),
      height(std::move(height_in)),
      width(std::move(width_in)),
      duration(std::move(duration_in)),
      rotation(std::move(rotation_in)),
      album(std::move(album_in)),
      artist(std::move(artist_in)),
      comment(std::move(comment_in)),
      copyright(std::move(copyright_in)),
      disc(std::move(disc_in)),
      genre(std::move(genre_in)),
      language(std::move(language_in)),
      title(std::move(title_in)),
      track(std::move(track_in)),
      raw_tags(std::move(raw_tags_in)) {}

MediaMetadata::~MediaMetadata() = default;

bool MediaMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AttachedImage::AttachedImage()
    : type(),
      data() {}

AttachedImage::AttachedImage(
    const std::string& type_in,
    const std::vector<uint8_t>& data_in)
    : type(std::move(type_in)),
      data(std::move(data_in)) {}

AttachedImage::~AttachedImage() = default;

bool AttachedImage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaParser::Name_[] = "chrome.mojom.MediaParser";

class MediaParser_ParseMediaMetadata_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaParser_ParseMediaMetadata_ForwardToCallback(
      MediaParser::ParseMediaMetadataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaParser::ParseMediaMetadataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaParser_ParseMediaMetadata_ForwardToCallback);
};

class MediaParser_CheckMediaFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaParser_CheckMediaFile_ForwardToCallback(
      MediaParser::CheckMediaFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaParser::CheckMediaFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaParser_CheckMediaFile_ForwardToCallback);
};

class MediaParser_GetCpuInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaParser_GetCpuInfo_ForwardToCallback(
      MediaParser::GetCpuInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaParser::GetCpuInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaParser_GetCpuInfo_ForwardToCallback);
};

MediaParserProxy::MediaParserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaParserProxy::ParseMediaMetadata(
    const std::string& in_mime_type, int64_t in_total_size, bool in_get_attached_images, MediaDataSourcePtr in_media_data_source, ParseMediaMetadataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::MediaParser::ParseMediaMetadata");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParser_ParseMediaMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParser_ParseMediaMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->mime_type)::BaseType::BufferWriter
      mime_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_mime_type, buffer, &mime_type_writer, &serialization_context);
  params->mime_type.Set(
      mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in MediaParser.ParseMediaMetadata request");
  params->total_size = in_total_size;
  params->get_attached_images = in_get_attached_images;
  mojo::internal::Serialize<::chrome::mojom::MediaDataSourcePtrDataView>(
      in_media_data_source, &params->media_data_source, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_data_source),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_data_source in MediaParser.ParseMediaMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaParser_ParseMediaMetadata_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaParserProxy::CheckMediaFile(
    base::TimeDelta in_decode_time, base::File in_file, CheckMediaFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::MediaParser::CheckMediaFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParser_CheckMediaFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParser_CheckMediaFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->decode_time)::BaseType::BufferWriter
      decode_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_decode_time, buffer, &decode_time_writer, &serialization_context);
  params->decode_time.Set(
      decode_time_writer.is_null() ? nullptr : decode_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->decode_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null decode_time in MediaParser.CheckMediaFile request");
  typename decltype(params->file)::BaseType::BufferWriter
      file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file, buffer, &file_writer, &serialization_context);
  params->file.Set(
      file_writer.is_null() ? nullptr : file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file in MediaParser.CheckMediaFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaParser_CheckMediaFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaParserProxy::GetCpuInfo(
    GetCpuInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::MediaParser::GetCpuInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParser_GetCpuInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParser_GetCpuInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaParser_GetCpuInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaParser_ParseMediaMetadata_ProxyToResponder {
 public:
  static MediaParser::ParseMediaMetadataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaParser_ParseMediaMetadata_ProxyToResponder> proxy(
        new MediaParser_ParseMediaMetadata_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaParser_ParseMediaMetadata_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaParser_ParseMediaMetadata_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaParser_ParseMediaMetadata_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaParser::ParseMediaMetadataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_parse_success, MediaMetadataPtr in_metadata, const std::vector<::metadata::AttachedImage>& in_attached_images);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaParser_ParseMediaMetadata_ProxyToResponder);
};

bool MediaParser_ParseMediaMetadata_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::MediaParser::ParseMediaMetadataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaParser_ParseMediaMetadata_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaParser_ParseMediaMetadata_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_parse_success{};
  MediaMetadataPtr p_metadata{};
  std::vector<::metadata::AttachedImage> p_attached_images{};
  MediaParser_ParseMediaMetadata_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_parse_success = input_data_view.parse_success();
  if (!input_data_view.ReadMetadata(&p_metadata))
    success = false;
  if (!input_data_view.ReadAttachedImages(&p_attached_images))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaParser::ParseMediaMetadata response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_parse_success), 
std::move(p_metadata), 
std::move(p_attached_images));
  return true;
}

void MediaParser_ParseMediaMetadata_ProxyToResponder::Run(
    bool in_parse_success, MediaMetadataPtr in_metadata, const std::vector<::metadata::AttachedImage>& in_attached_images) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParser_ParseMediaMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParser_ParseMediaMetadata_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->parse_success = in_parse_success;
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::chrome::mojom::MediaMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in ");
  typename decltype(params->attached_images)::BaseType::BufferWriter
      attached_images_writer;
  const mojo::internal::ContainerValidateParams attached_images_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::AttachedImageDataView>>(
      in_attached_images, buffer, &attached_images_writer, &attached_images_validate_params,
      &serialization_context);
  params->attached_images.Set(
      attached_images_writer.is_null() ? nullptr : attached_images_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->attached_images.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null attached_images in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::ParseMediaMetadataCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaParser_CheckMediaFile_ProxyToResponder {
 public:
  static MediaParser::CheckMediaFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaParser_CheckMediaFile_ProxyToResponder> proxy(
        new MediaParser_CheckMediaFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaParser_CheckMediaFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaParser_CheckMediaFile_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaParser_CheckMediaFile_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaParser::CheckMediaFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaParser_CheckMediaFile_ProxyToResponder);
};

bool MediaParser_CheckMediaFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::MediaParser::CheckMediaFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaParser_CheckMediaFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaParser_CheckMediaFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  MediaParser_CheckMediaFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaParser::CheckMediaFile response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void MediaParser_CheckMediaFile_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParser_CheckMediaFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParser_CheckMediaFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::CheckMediaFileCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaParser_GetCpuInfo_ProxyToResponder {
 public:
  static MediaParser::GetCpuInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaParser_GetCpuInfo_ProxyToResponder> proxy(
        new MediaParser_GetCpuInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaParser_GetCpuInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaParser_GetCpuInfo_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaParser_GetCpuInfo_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaParser::GetCpuInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int64_t in_libyuv_cpu_flags, int64_t in_ffmpeg_cpu_flags);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaParser_GetCpuInfo_ProxyToResponder);
};

bool MediaParser_GetCpuInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::MediaParser::GetCpuInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaParser_GetCpuInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaParser_GetCpuInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_libyuv_cpu_flags{};
  int64_t p_ffmpeg_cpu_flags{};
  MediaParser_GetCpuInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_libyuv_cpu_flags = input_data_view.libyuv_cpu_flags();
  p_ffmpeg_cpu_flags = input_data_view.ffmpeg_cpu_flags();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaParser::GetCpuInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_libyuv_cpu_flags), 
std::move(p_ffmpeg_cpu_flags));
  return true;
}

void MediaParser_GetCpuInfo_ProxyToResponder::Run(
    int64_t in_libyuv_cpu_flags, int64_t in_ffmpeg_cpu_flags) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParser_GetCpuInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParser_GetCpuInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->libyuv_cpu_flags = in_libyuv_cpu_flags;
  params->ffmpeg_cpu_flags = in_ffmpeg_cpu_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::GetCpuInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaParserStubDispatch::Accept(
    MediaParser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaParser_ParseMediaMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::ParseMediaMetadata",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaParser_CheckMediaFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::CheckMediaFile",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaParser_GetCpuInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::GetCpuInfo",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaParserStubDispatch::AcceptWithResponder(
    MediaParser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaParser_ParseMediaMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::ParseMediaMetadata",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaParser_ParseMediaMetadata_Params_Data* params =
          reinterpret_cast<
              internal::MediaParser_ParseMediaMetadata_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_mime_type{};
      int64_t p_total_size{};
      bool p_get_attached_images{};
      MediaDataSourcePtr p_media_data_source{};
      MediaParser_ParseMediaMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMimeType(&p_mime_type))
        success = false;
      p_total_size = input_data_view.total_size();
      p_get_attached_images = input_data_view.get_attached_images();
      p_media_data_source =
          input_data_view.TakeMediaDataSource<decltype(p_media_data_source)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaParser::ParseMediaMetadata deserializer");
        return false;
      }
      MediaParser::ParseMediaMetadataCallback callback =
          MediaParser_ParseMediaMetadata_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ParseMediaMetadata(
std::move(p_mime_type), 
std::move(p_total_size), 
std::move(p_get_attached_images), 
std::move(p_media_data_source), std::move(callback));
      return true;
    }
    case internal::kMediaParser_CheckMediaFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::CheckMediaFile",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaParser_CheckMediaFile_Params_Data* params =
          reinterpret_cast<
              internal::MediaParser_CheckMediaFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_decode_time{};
      base::File p_file{};
      MediaParser_CheckMediaFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDecodeTime(&p_decode_time))
        success = false;
      if (!input_data_view.ReadFile(&p_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaParser::CheckMediaFile deserializer");
        return false;
      }
      MediaParser::CheckMediaFileCallback callback =
          MediaParser_CheckMediaFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CheckMediaFile(
std::move(p_decode_time), 
std::move(p_file), std::move(callback));
      return true;
    }
    case internal::kMediaParser_GetCpuInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParser::GetCpuInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaParser_GetCpuInfo_Params_Data* params =
          reinterpret_cast<
              internal::MediaParser_GetCpuInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaParser_GetCpuInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaParser::GetCpuInfo deserializer");
        return false;
      }
      MediaParser::GetCpuInfoCallback callback =
          MediaParser_GetCpuInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCpuInfo(std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaParserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaParser RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaParser_ParseMediaMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParser_ParseMediaMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaParser_CheckMediaFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParser_CheckMediaFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaParser_GetCpuInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParser_GetCpuInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool MediaParserResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaParser ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaParser_ParseMediaMetadata_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParser_ParseMediaMetadata_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaParser_CheckMediaFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParser_CheckMediaFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaParser_GetCpuInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParser_GetCpuInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void MediaParserInterceptorForTesting::ParseMediaMetadata(const std::string& mime_type, int64_t total_size, bool get_attached_images, MediaDataSourcePtr media_data_source, ParseMediaMetadataCallback callback) {
  GetForwardingInterface()->ParseMediaMetadata(std::move(mime_type), std::move(total_size), std::move(get_attached_images), std::move(media_data_source), std::move(callback));
}
void MediaParserInterceptorForTesting::CheckMediaFile(base::TimeDelta decode_time, base::File file, CheckMediaFileCallback callback) {
  GetForwardingInterface()->CheckMediaFile(std::move(decode_time), std::move(file), std::move(callback));
}
void MediaParserInterceptorForTesting::GetCpuInfo(GetCpuInfoCallback callback) {
  GetForwardingInterface()->GetCpuInfo(std::move(callback));
}
MediaParserAsyncWaiter::MediaParserAsyncWaiter(
    MediaParser* proxy) : proxy_(proxy) {}

MediaParserAsyncWaiter::~MediaParserAsyncWaiter() = default;

void MediaParserAsyncWaiter::ParseMediaMetadata(
    const std::string& mime_type, int64_t total_size, bool get_attached_images, MediaDataSourcePtr media_data_source, bool* out_parse_success, MediaMetadataPtr* out_metadata, std::vector<::metadata::AttachedImage>* out_attached_images) {
  base::RunLoop loop;
  proxy_->ParseMediaMetadata(std::move(mime_type),std::move(total_size),std::move(get_attached_images),std::move(media_data_source),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_parse_success
,
             MediaMetadataPtr* out_metadata
,
             std::vector<::metadata::AttachedImage>* out_attached_images
,
             bool parse_success,
             MediaMetadataPtr metadata,
             const std::vector<::metadata::AttachedImage>& attached_images) {*out_parse_success = std::move(parse_success);*out_metadata = std::move(metadata);*out_attached_images = std::move(attached_images);
            loop->Quit();
          },
          &loop,
          out_parse_success,
          out_metadata,
          out_attached_images));
  loop.Run();
}
void MediaParserAsyncWaiter::CheckMediaFile(
    base::TimeDelta decode_time, base::File file, bool* out_success) {
  base::RunLoop loop;
  proxy_->CheckMediaFile(std::move(decode_time),std::move(file),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void MediaParserAsyncWaiter::GetCpuInfo(
    int64_t* out_libyuv_cpu_flags, int64_t* out_ffmpeg_cpu_flags) {
  base::RunLoop loop;
  proxy_->GetCpuInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             int64_t* out_libyuv_cpu_flags
,
             int64_t* out_ffmpeg_cpu_flags
,
             int64_t libyuv_cpu_flags,
             int64_t ffmpeg_cpu_flags) {*out_libyuv_cpu_flags = std::move(libyuv_cpu_flags);*out_ffmpeg_cpu_flags = std::move(ffmpeg_cpu_flags);
            loop->Quit();
          },
          &loop,
          out_libyuv_cpu_flags,
          out_ffmpeg_cpu_flags));
  loop.Run();
}

const char MediaParserFactory::Name_[] = "chrome.mojom.MediaParserFactory";

class MediaParserFactory_CreateMediaParser_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaParserFactory_CreateMediaParser_ForwardToCallback(
      MediaParserFactory::CreateMediaParserCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaParserFactory::CreateMediaParserCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaParserFactory_CreateMediaParser_ForwardToCallback);
};

MediaParserFactoryProxy::MediaParserFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaParserFactoryProxy::CreateMediaParser(
    int64_t in_libyuv_cpu_flags, int64_t in_libavutil_cpu_flags, CreateMediaParserCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::MediaParserFactory::CreateMediaParser");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParserFactory_CreateMediaParser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParserFactory_CreateMediaParser_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->libyuv_cpu_flags = in_libyuv_cpu_flags;
  params->libavutil_cpu_flags = in_libavutil_cpu_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaParserFactory_CreateMediaParser_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaParserFactory_CreateMediaParser_ProxyToResponder {
 public:
  static MediaParserFactory::CreateMediaParserCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaParserFactory_CreateMediaParser_ProxyToResponder> proxy(
        new MediaParserFactory_CreateMediaParser_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaParserFactory_CreateMediaParser_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaParserFactory_CreateMediaParser_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaParserFactory_CreateMediaParser_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaParserFactory::CreateMediaParserCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MediaParserPtr in_media_parser);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaParserFactory_CreateMediaParser_ProxyToResponder);
};

bool MediaParserFactory_CreateMediaParser_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::MediaParserFactory::CreateMediaParserCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaParserFactory_CreateMediaParser_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaParserFactory_CreateMediaParser_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MediaParserPtr p_media_parser{};
  MediaParserFactory_CreateMediaParser_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_media_parser =
      input_data_view.TakeMediaParser<decltype(p_media_parser)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaParserFactory::CreateMediaParser response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_media_parser));
  return true;
}

void MediaParserFactory_CreateMediaParser_ProxyToResponder::Run(
    MediaParserPtr in_media_parser) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaParserFactory_CreateMediaParser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaParserFactory_CreateMediaParser_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::MediaParserPtrDataView>(
      in_media_parser, &params->media_parser, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_parser),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_parser in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParserFactory::CreateMediaParserCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaParserFactoryStubDispatch::Accept(
    MediaParserFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaParserFactory_CreateMediaParser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParserFactory::CreateMediaParser",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaParserFactoryStubDispatch::AcceptWithResponder(
    MediaParserFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaParserFactory_CreateMediaParser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaParserFactory::CreateMediaParser",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaParserFactory_CreateMediaParser_Params_Data* params =
          reinterpret_cast<
              internal::MediaParserFactory_CreateMediaParser_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_libyuv_cpu_flags{};
      int64_t p_libavutil_cpu_flags{};
      MediaParserFactory_CreateMediaParser_ParamsDataView input_data_view(params, &serialization_context);
      
      p_libyuv_cpu_flags = input_data_view.libyuv_cpu_flags();
      p_libavutil_cpu_flags = input_data_view.libavutil_cpu_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaParserFactory::CreateMediaParser deserializer");
        return false;
      }
      MediaParserFactory::CreateMediaParserCallback callback =
          MediaParserFactory_CreateMediaParser_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateMediaParser(
std::move(p_libyuv_cpu_flags), 
std::move(p_libavutil_cpu_flags), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaParserFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaParserFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaParserFactory_CreateMediaParser_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParserFactory_CreateMediaParser_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool MediaParserFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaParserFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaParserFactory_CreateMediaParser_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaParserFactory_CreateMediaParser_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void MediaParserFactoryInterceptorForTesting::CreateMediaParser(int64_t libyuv_cpu_flags, int64_t libavutil_cpu_flags, CreateMediaParserCallback callback) {
  GetForwardingInterface()->CreateMediaParser(std::move(libyuv_cpu_flags), std::move(libavutil_cpu_flags), std::move(callback));
}
MediaParserFactoryAsyncWaiter::MediaParserFactoryAsyncWaiter(
    MediaParserFactory* proxy) : proxy_(proxy) {}

MediaParserFactoryAsyncWaiter::~MediaParserFactoryAsyncWaiter() = default;

void MediaParserFactoryAsyncWaiter::CreateMediaParser(
    int64_t libyuv_cpu_flags, int64_t libavutil_cpu_flags, MediaParserPtr* out_media_parser) {
  base::RunLoop loop;
  proxy_->CreateMediaParser(std::move(libyuv_cpu_flags),std::move(libavutil_cpu_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             MediaParserPtr* out_media_parser
,
             MediaParserPtr media_parser) {*out_media_parser = std::move(media_parser);
            loop->Quit();
          },
          &loop,
          out_media_parser));
  loop.Run();
}

const char MediaDataSource::Name_[] = "chrome.mojom.MediaDataSource";

class MediaDataSource_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDataSource_Read_ForwardToCallback(
      MediaDataSource::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDataSource::ReadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDataSource_Read_ForwardToCallback);
};

MediaDataSourceProxy::MediaDataSourceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaDataSourceProxy::Read(
    int64_t in_position, int64_t in_length, ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::MediaDataSource::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDataSource_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaDataSource_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->position = in_position;
  params->length = in_length;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDataSource_Read_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaDataSource_Read_ProxyToResponder {
 public:
  static MediaDataSource::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDataSource_Read_ProxyToResponder> proxy(
        new MediaDataSource_Read_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDataSource_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDataSource_Read_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MediaDataSource_Read_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MediaDataSource::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<uint8_t>& in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDataSource_Read_ProxyToResponder);
};

bool MediaDataSource_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::MediaDataSource::ReadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDataSource_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDataSource_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<uint8_t> p_data{};
  MediaDataSource_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MediaDataSource::Read response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data));
  return true;
}

void MediaDataSource_Read_ProxyToResponder::Run(
    const std::vector<uint8_t>& in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDataSource_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::MediaDataSource_Read_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaDataSource::ReadCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaDataSourceStubDispatch::Accept(
    MediaDataSource* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaDataSource_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaDataSource::Read",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MediaDataSourceStubDispatch::AcceptWithResponder(
    MediaDataSource* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaDataSource_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::MediaDataSource::Read",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDataSource_Read_Params_Data* params =
          reinterpret_cast<
              internal::MediaDataSource_Read_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_position{};
      int64_t p_length{};
      MediaDataSource_Read_ParamsDataView input_data_view(params, &serialization_context);
      
      p_position = input_data_view.position();
      p_length = input_data_view.length();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDataSource::Read deserializer");
        return false;
      }
      MediaDataSource::ReadCallback callback =
          MediaDataSource_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Read(
std::move(p_position), 
std::move(p_length), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaDataSourceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDataSource RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaDataSource_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDataSource_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool MediaDataSourceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDataSource ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaDataSource_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDataSource_Read_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void MediaDataSourceInterceptorForTesting::Read(int64_t position, int64_t length, ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(position), std::move(length), std::move(callback));
}
MediaDataSourceAsyncWaiter::MediaDataSourceAsyncWaiter(
    MediaDataSource* proxy) : proxy_(proxy) {}

MediaDataSourceAsyncWaiter::~MediaDataSourceAsyncWaiter() = default;

void MediaDataSourceAsyncWaiter::Read(
    int64_t position, int64_t length, std::vector<uint8_t>* out_data) {
  base::RunLoop loop;
  proxy_->Read(std::move(position),std::move(length),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<uint8_t>* out_data
,
             const std::vector<uint8_t>& data) {*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_data));
  loop.Run();
}

}  // namespace mojom
}  // namespace chrome

namespace mojo {


// static
bool StructTraits<::chrome::mojom::MediaStreamInfo::DataView, ::chrome::mojom::MediaStreamInfoPtr>::Read(
    ::chrome::mojom::MediaStreamInfo::DataView input,
    ::chrome::mojom::MediaStreamInfoPtr* output) {
  bool success = true;
  ::chrome::mojom::MediaStreamInfoPtr result(::chrome::mojom::MediaStreamInfo::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadAdditionalProperties(&result->additional_properties))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::chrome::mojom::MediaMetadata::DataView, ::chrome::mojom::MediaMetadataPtr>::Read(
    ::chrome::mojom::MediaMetadata::DataView input,
    ::chrome::mojom::MediaMetadataPtr* output) {
  bool success = true;
  ::chrome::mojom::MediaMetadataPtr result(::chrome::mojom::MediaMetadata::New());
  
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      result->height = input.height();
      result->width = input.width();
      result->duration = input.duration();
      result->rotation = input.rotation();
      if (!input.ReadAlbum(&result->album))
        success = false;
      if (!input.ReadArtist(&result->artist))
        success = false;
      if (!input.ReadComment(&result->comment))
        success = false;
      if (!input.ReadCopyright(&result->copyright))
        success = false;
      result->disc = input.disc();
      if (!input.ReadGenre(&result->genre))
        success = false;
      if (!input.ReadLanguage(&result->language))
        success = false;
      if (!input.ReadTitle(&result->title))
        success = false;
      result->track = input.track();
      if (!input.ReadRawTags(&result->raw_tags))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::chrome::mojom::AttachedImage::DataView, ::chrome::mojom::AttachedImagePtr>::Read(
    ::chrome::mojom::AttachedImage::DataView input,
    ::chrome::mojom::AttachedImagePtr* output) {
  bool success = true;
  ::chrome::mojom::AttachedImagePtr result(::chrome::mojom::AttachedImage::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif