// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_H_
#define CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_H_

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
#include "chrome/services/media_gallery_util/public/mojom/media_parser.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {
class MediaStreamInfoDataView;

class MediaMetadataDataView;

class AttachedImageDataView;



}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::chrome::mojom::MediaStreamInfoDataView> {
  using Data = ::chrome::mojom::internal::MediaStreamInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::chrome::mojom::MediaMetadataDataView> {
  using Data = ::chrome::mojom::internal::MediaMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::chrome::mojom::AttachedImageDataView> {
  using Data = ::chrome::mojom::internal::AttachedImage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaParserInterfaceBase {};

using MediaParserPtrDataView =
    mojo::InterfacePtrDataView<MediaParserInterfaceBase>;
using MediaParserRequestDataView =
    mojo::InterfaceRequestDataView<MediaParserInterfaceBase>;
using MediaParserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaParserInterfaceBase>;
using MediaParserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaParserInterfaceBase>;
class MediaParserFactoryInterfaceBase {};

using MediaParserFactoryPtrDataView =
    mojo::InterfacePtrDataView<MediaParserFactoryInterfaceBase>;
using MediaParserFactoryRequestDataView =
    mojo::InterfaceRequestDataView<MediaParserFactoryInterfaceBase>;
using MediaParserFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaParserFactoryInterfaceBase>;
using MediaParserFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaParserFactoryInterfaceBase>;
class MediaDataSourceInterfaceBase {};

using MediaDataSourcePtrDataView =
    mojo::InterfacePtrDataView<MediaDataSourceInterfaceBase>;
using MediaDataSourceRequestDataView =
    mojo::InterfaceRequestDataView<MediaDataSourceInterfaceBase>;
using MediaDataSourceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDataSourceInterfaceBase>;
using MediaDataSourceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDataSourceInterfaceBase>;
class MediaStreamInfoDataView {
 public:
  MediaStreamInfoDataView() {}

  MediaStreamInfoDataView(
      internal::MediaStreamInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAdditionalPropertiesDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdditionalProperties(UserType* output) {
    auto* pointer = data_->additional_properties.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetadataDataView {
 public:
  MediaMetadataDataView() {}

  MediaMetadataDataView(
      internal::MediaMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t height() const {
    return data_->height;
  }
  int32_t width() const {
    return data_->width;
  }
  double duration() const {
    return data_->duration;
  }
  int32_t rotation() const {
    return data_->rotation;
  }
  inline void GetAlbumDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlbum(UserType* output) {
    auto* pointer = data_->album.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetArtistDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArtist(UserType* output) {
    auto* pointer = data_->artist.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCommentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadComment(UserType* output) {
    auto* pointer = data_->comment.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCopyrightDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCopyright(UserType* output) {
    auto* pointer = data_->copyright.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t disc() const {
    return data_->disc;
  }
  inline void GetGenreDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGenre(UserType* output) {
    auto* pointer = data_->genre.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLanguage(UserType* output) {
    auto* pointer = data_->language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t track() const {
    return data_->track;
  }
  inline void GetRawTagsDataView(
      mojo::ArrayDataView<MediaStreamInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawTags(UserType* output) {
    auto* pointer = data_->raw_tags.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::MediaStreamInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AttachedImageDataView {
 public:
  AttachedImageDataView() {}

  AttachedImageDataView(
      internal::AttachedImage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::AttachedImage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaParser_ParseMediaMetadata_ParamsDataView {
 public:
  MediaParser_ParseMediaMetadata_ParamsDataView() {}

  MediaParser_ParseMediaMetadata_ParamsDataView(
      internal::MediaParser_ParseMediaMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int64_t total_size() const {
    return data_->total_size;
  }
  bool get_attached_images() const {
    return data_->get_attached_images;
  }
  template <typename UserType>
  UserType TakeMediaDataSource() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::MediaDataSourcePtrDataView>(
            &data_->media_data_source, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaParser_ParseMediaMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaParser_ParseMediaMetadata_ResponseParamsDataView {
 public:
  MediaParser_ParseMediaMetadata_ResponseParamsDataView() {}

  MediaParser_ParseMediaMetadata_ResponseParamsDataView(
      internal::MediaParser_ParseMediaMetadata_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool parse_success() const {
    return data_->parse_success;
  }
  inline void GetMetadataDataView(
      MediaMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::chrome::mojom::MediaMetadataDataView>(
        pointer, output, context_);
  }
  inline void GetAttachedImagesDataView(
      mojo::ArrayDataView<AttachedImageDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttachedImages(UserType* output) {
    auto* pointer = data_->attached_images.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::AttachedImageDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaParser_ParseMediaMetadata_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaParser_CheckMediaFile_ParamsDataView {
 public:
  MediaParser_CheckMediaFile_ParamsDataView() {}

  MediaParser_CheckMediaFile_ParamsDataView(
      internal::MediaParser_CheckMediaFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDecodeTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDecodeTime(UserType* output) {
    auto* pointer = data_->decode_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaParser_CheckMediaFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaParser_CheckMediaFile_ResponseParamsDataView {
 public:
  MediaParser_CheckMediaFile_ResponseParamsDataView() {}

  MediaParser_CheckMediaFile_ResponseParamsDataView(
      internal::MediaParser_CheckMediaFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::MediaParser_CheckMediaFile_ResponseParams_Data* data_ = nullptr;
};

class MediaParser_GetCpuInfo_ParamsDataView {
 public:
  MediaParser_GetCpuInfo_ParamsDataView() {}

  MediaParser_GetCpuInfo_ParamsDataView(
      internal::MediaParser_GetCpuInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaParser_GetCpuInfo_Params_Data* data_ = nullptr;
};

class MediaParser_GetCpuInfo_ResponseParamsDataView {
 public:
  MediaParser_GetCpuInfo_ResponseParamsDataView() {}

  MediaParser_GetCpuInfo_ResponseParamsDataView(
      internal::MediaParser_GetCpuInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t libyuv_cpu_flags() const {
    return data_->libyuv_cpu_flags;
  }
  int64_t ffmpeg_cpu_flags() const {
    return data_->ffmpeg_cpu_flags;
  }
 private:
  internal::MediaParser_GetCpuInfo_ResponseParams_Data* data_ = nullptr;
};

class MediaParserFactory_CreateMediaParser_ParamsDataView {
 public:
  MediaParserFactory_CreateMediaParser_ParamsDataView() {}

  MediaParserFactory_CreateMediaParser_ParamsDataView(
      internal::MediaParserFactory_CreateMediaParser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t libyuv_cpu_flags() const {
    return data_->libyuv_cpu_flags;
  }
  int64_t libavutil_cpu_flags() const {
    return data_->libavutil_cpu_flags;
  }
 private:
  internal::MediaParserFactory_CreateMediaParser_Params_Data* data_ = nullptr;
};

class MediaParserFactory_CreateMediaParser_ResponseParamsDataView {
 public:
  MediaParserFactory_CreateMediaParser_ResponseParamsDataView() {}

  MediaParserFactory_CreateMediaParser_ResponseParamsDataView(
      internal::MediaParserFactory_CreateMediaParser_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeMediaParser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::MediaParserPtrDataView>(
            &data_->media_parser, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaParserFactory_CreateMediaParser_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDataSource_Read_ParamsDataView {
 public:
  MediaDataSource_Read_ParamsDataView() {}

  MediaDataSource_Read_ParamsDataView(
      internal::MediaDataSource_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t position() const {
    return data_->position;
  }
  int64_t length() const {
    return data_->length;
  }
 private:
  internal::MediaDataSource_Read_Params_Data* data_ = nullptr;
};

class MediaDataSource_Read_ResponseParamsDataView {
 public:
  MediaDataSource_Read_ResponseParamsDataView() {}

  MediaDataSource_Read_ResponseParamsDataView(
      internal::MediaDataSource_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDataSource_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::MediaStreamInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::MediaStreamInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome::mojom::internal::MediaStreamInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in MediaStreamInfo struct");
    decltype(CallWithContext(Traits::additional_properties, input, custom_context)) in_additional_properties = CallWithContext(Traits::additional_properties, input, custom_context);
    typename decltype((*output)->additional_properties)::BaseType::BufferWriter
        additional_properties_writer;
    mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
        in_additional_properties, buffer, &additional_properties_writer, context);
    (*output)->additional_properties.Set(
        additional_properties_writer.is_null() ? nullptr : additional_properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->additional_properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null additional_properties in MediaStreamInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome::mojom::internal::MediaStreamInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::MediaStreamInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::MediaMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::MediaMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome::mojom::internal::MediaMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in MediaMetadata struct");
    (*output)->height = CallWithContext(Traits::height, input, custom_context);
    (*output)->width = CallWithContext(Traits::width, input, custom_context);
    (*output)->duration = CallWithContext(Traits::duration, input, custom_context);
    (*output)->rotation = CallWithContext(Traits::rotation, input, custom_context);
    decltype(CallWithContext(Traits::album, input, custom_context)) in_album = CallWithContext(Traits::album, input, custom_context);
    typename decltype((*output)->album)::BaseType::BufferWriter
        album_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_album, buffer, &album_writer, context);
    (*output)->album.Set(
        album_writer.is_null() ? nullptr : album_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->album.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null album in MediaMetadata struct");
    decltype(CallWithContext(Traits::artist, input, custom_context)) in_artist = CallWithContext(Traits::artist, input, custom_context);
    typename decltype((*output)->artist)::BaseType::BufferWriter
        artist_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_artist, buffer, &artist_writer, context);
    (*output)->artist.Set(
        artist_writer.is_null() ? nullptr : artist_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->artist.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null artist in MediaMetadata struct");
    decltype(CallWithContext(Traits::comment, input, custom_context)) in_comment = CallWithContext(Traits::comment, input, custom_context);
    typename decltype((*output)->comment)::BaseType::BufferWriter
        comment_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_comment, buffer, &comment_writer, context);
    (*output)->comment.Set(
        comment_writer.is_null() ? nullptr : comment_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->comment.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null comment in MediaMetadata struct");
    decltype(CallWithContext(Traits::copyright, input, custom_context)) in_copyright = CallWithContext(Traits::copyright, input, custom_context);
    typename decltype((*output)->copyright)::BaseType::BufferWriter
        copyright_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_copyright, buffer, &copyright_writer, context);
    (*output)->copyright.Set(
        copyright_writer.is_null() ? nullptr : copyright_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->copyright.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null copyright in MediaMetadata struct");
    (*output)->disc = CallWithContext(Traits::disc, input, custom_context);
    decltype(CallWithContext(Traits::genre, input, custom_context)) in_genre = CallWithContext(Traits::genre, input, custom_context);
    typename decltype((*output)->genre)::BaseType::BufferWriter
        genre_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_genre, buffer, &genre_writer, context);
    (*output)->genre.Set(
        genre_writer.is_null() ? nullptr : genre_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->genre.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null genre in MediaMetadata struct");
    decltype(CallWithContext(Traits::language, input, custom_context)) in_language = CallWithContext(Traits::language, input, custom_context);
    typename decltype((*output)->language)::BaseType::BufferWriter
        language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_language, buffer, &language_writer, context);
    (*output)->language.Set(
        language_writer.is_null() ? nullptr : language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null language in MediaMetadata struct");
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in MediaMetadata struct");
    (*output)->track = CallWithContext(Traits::track, input, custom_context);
    decltype(CallWithContext(Traits::raw_tags, input, custom_context)) in_raw_tags = CallWithContext(Traits::raw_tags, input, custom_context);
    typename decltype((*output)->raw_tags)::BaseType::BufferWriter
        raw_tags_writer;
    const mojo::internal::ContainerValidateParams raw_tags_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::MediaStreamInfoDataView>>(
        in_raw_tags, buffer, &raw_tags_writer, &raw_tags_validate_params,
        context);
    (*output)->raw_tags.Set(
        raw_tags_writer.is_null() ? nullptr : raw_tags_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->raw_tags.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_tags in MediaMetadata struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome::mojom::internal::MediaMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::MediaMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::AttachedImageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::AttachedImageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::chrome::mojom::internal::AttachedImage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in AttachedImage struct");
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in AttachedImage struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::chrome::mojom::internal::AttachedImage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::AttachedImageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void MediaStreamInfoDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamInfoDataView::GetAdditionalPropertiesDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->additional_properties.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}


inline void MediaMetadataDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetAlbumDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->album.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetArtistDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->artist.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetCommentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->comment.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetCopyrightDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->copyright.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetGenreDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->genre.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaMetadataDataView::GetRawTagsDataView(
    mojo::ArrayDataView<MediaStreamInfoDataView>* output) {
  auto pointer = data_->raw_tags.Get();
  *output = mojo::ArrayDataView<MediaStreamInfoDataView>(pointer, context_);
}


inline void AttachedImageDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AttachedImageDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void MediaParser_ParseMediaMetadata_ParamsDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaParser_ParseMediaMetadata_ResponseParamsDataView::GetMetadataDataView(
    MediaMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = MediaMetadataDataView(pointer, context_);
}
inline void MediaParser_ParseMediaMetadata_ResponseParamsDataView::GetAttachedImagesDataView(
    mojo::ArrayDataView<AttachedImageDataView>* output) {
  auto pointer = data_->attached_images.Get();
  *output = mojo::ArrayDataView<AttachedImageDataView>(pointer, context_);
}


inline void MediaParser_CheckMediaFile_ParamsDataView::GetDecodeTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->decode_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void MediaParser_CheckMediaFile_ParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}














inline void MediaDataSource_Read_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_H_
