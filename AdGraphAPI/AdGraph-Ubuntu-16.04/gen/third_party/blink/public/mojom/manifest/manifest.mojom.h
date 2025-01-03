// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_H_

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
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "third_party/blink/public/mojom/manifest/display_mode.mojom.h"
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
#include "third_party/blink/common/common_export.h"
#include "third_party/blink/public/common/manifest/manifest.h"
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class Manifest;
using ManifestPtr = mojo::StructPtr<Manifest>;

class ManifestIcon;
using ManifestIconPtr = mojo::StructPtr<ManifestIcon>;

class ManifestRelatedApplication;
using ManifestRelatedApplicationPtr = mojo::StructPtr<ManifestRelatedApplication>;

class ManifestShareTarget;
using ManifestShareTargetPtr = mojo::StructPtr<ManifestShareTarget>;

class ManifestDebugInfo;
using ManifestDebugInfoPtr = mojo::StructPtr<ManifestDebugInfo>;

class ManifestError;
using ManifestErrorPtr = mojo::InlinedStructPtr<ManifestError>;








class BLINK_COMMON_EXPORT ManifestError {
 public:
  using DataView = ManifestErrorDataView;
  using Data_ = internal::ManifestError_Data;

  template <typename... Args>
  static ManifestErrorPtr New(Args&&... args) {
    return ManifestErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestErrorPtr From(const U& u) {
    return mojo::TypeConverter<ManifestErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestError>::Convert(*this);
  }


  ManifestError();

  ManifestError(
      const std::string& message,
      bool critical,
      uint32_t line,
      uint32_t column);

  ~ManifestError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestErrorPtr>
  ManifestErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestError>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestError::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestError_UnserializedMessageContext<
            UserType, ManifestError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ManifestError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestError_UnserializedMessageContext<
            UserType, ManifestError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string message;
  bool critical;
  uint32_t line;
  uint32_t column;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class BLINK_COMMON_EXPORT Manifest {
 public:
  using DataView = ManifestDataView;
  using Data_ = internal::Manifest_Data;

  template <typename... Args>
  static ManifestPtr New(Args&&... args) {
    return ManifestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestPtr From(const U& u) {
    return mojo::TypeConverter<ManifestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Manifest>::Convert(*this);
  }


  Manifest();

  Manifest(
      const base::Optional<base::string16>& name,
      const base::Optional<base::string16>& short_name,
      const base::Optional<GURL>& start_url,
      ::blink::WebDisplayMode display,
      ::blink::WebScreenOrientationLockType orientation,
      const base::Optional<std::vector<::blink::Manifest::Icon>>& icons,
      const base::Optional<::blink::Manifest::ShareTarget>& share_target,
      const base::Optional<std::vector<::blink::Manifest::RelatedApplication>>& related_applications,
      bool prefer_related_applications,
      bool has_theme_color,
      uint32_t theme_color,
      bool has_background_color,
      uint32_t background_color,
      const base::Optional<GURL>& splash_screen_url,
      const base::Optional<base::string16>& gcm_sender_id,
      const base::Optional<GURL>& scope);

  ~Manifest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestPtr>
  ManifestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Manifest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Manifest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Manifest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Manifest_UnserializedMessageContext<
            UserType, Manifest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Manifest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Manifest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Manifest_UnserializedMessageContext<
            UserType, Manifest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Manifest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::string16> name;
  base::Optional<base::string16> short_name;
  base::Optional<GURL> start_url;
  ::blink::WebDisplayMode display;
  ::blink::WebScreenOrientationLockType orientation;
  base::Optional<std::vector<::blink::Manifest::Icon>> icons;
  base::Optional<::blink::Manifest::ShareTarget> share_target;
  base::Optional<std::vector<::blink::Manifest::RelatedApplication>> related_applications;
  bool prefer_related_applications;
  bool has_theme_color;
  uint32_t theme_color;
  bool has_background_color;
  uint32_t background_color;
  base::Optional<GURL> splash_screen_url;
  base::Optional<base::string16> gcm_sender_id;
  base::Optional<GURL> scope;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_COMMON_EXPORT ManifestIcon {
 public:
  using DataView = ManifestIconDataView;
  using Data_ = internal::ManifestIcon_Data;using Purpose = ManifestIcon_Purpose;

  template <typename... Args>
  static ManifestIconPtr New(Args&&... args) {
    return ManifestIconPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestIconPtr From(const U& u) {
    return mojo::TypeConverter<ManifestIconPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestIcon>::Convert(*this);
  }


  ManifestIcon();

  ManifestIcon(
      const GURL& src,
      const base::Optional<base::string16>& type,
      const std::vector<gfx::Size>& sizes,
      const std::vector<ManifestIcon::Purpose>& purpose);

  ~ManifestIcon();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestIconPtr>
  ManifestIconPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestIcon>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestIcon::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestIcon::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestIcon_UnserializedMessageContext<
            UserType, ManifestIcon::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestIcon::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ManifestIcon::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestIcon_UnserializedMessageContext<
            UserType, ManifestIcon::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestIcon::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL src;
  base::Optional<base::string16> type;
  std::vector<gfx::Size> sizes;
  std::vector<ManifestIcon::Purpose> purpose;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_COMMON_EXPORT ManifestRelatedApplication {
 public:
  using DataView = ManifestRelatedApplicationDataView;
  using Data_ = internal::ManifestRelatedApplication_Data;

  template <typename... Args>
  static ManifestRelatedApplicationPtr New(Args&&... args) {
    return ManifestRelatedApplicationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestRelatedApplicationPtr From(const U& u) {
    return mojo::TypeConverter<ManifestRelatedApplicationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestRelatedApplication>::Convert(*this);
  }


  ManifestRelatedApplication();

  ManifestRelatedApplication(
      const base::Optional<base::string16>& platform,
      const base::Optional<GURL>& url,
      const base::Optional<base::string16>& id);

  ~ManifestRelatedApplication();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestRelatedApplicationPtr>
  ManifestRelatedApplicationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestRelatedApplication>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestRelatedApplication::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestRelatedApplication::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestRelatedApplication_UnserializedMessageContext<
            UserType, ManifestRelatedApplication::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestRelatedApplication::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ManifestRelatedApplication::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestRelatedApplication_UnserializedMessageContext<
            UserType, ManifestRelatedApplication::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestRelatedApplication::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<base::string16> platform;
  base::Optional<GURL> url;
  base::Optional<base::string16> id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_COMMON_EXPORT ManifestShareTarget {
 public:
  using DataView = ManifestShareTargetDataView;
  using Data_ = internal::ManifestShareTarget_Data;

  template <typename... Args>
  static ManifestShareTargetPtr New(Args&&... args) {
    return ManifestShareTargetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestShareTargetPtr From(const U& u) {
    return mojo::TypeConverter<ManifestShareTargetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestShareTarget>::Convert(*this);
  }


  ManifestShareTarget();

  explicit ManifestShareTarget(
      const base::Optional<GURL>& url_template);

  ~ManifestShareTarget();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestShareTargetPtr>
  ManifestShareTargetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestShareTarget>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestShareTarget::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestShareTarget::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestShareTarget_UnserializedMessageContext<
            UserType, ManifestShareTarget::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestShareTarget::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ManifestShareTarget::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestShareTarget_UnserializedMessageContext<
            UserType, ManifestShareTarget::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestShareTarget::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::Optional<GURL> url_template;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class BLINK_COMMON_EXPORT ManifestDebugInfo {
 public:
  using DataView = ManifestDebugInfoDataView;
  using Data_ = internal::ManifestDebugInfo_Data;

  template <typename... Args>
  static ManifestDebugInfoPtr New(Args&&... args) {
    return ManifestDebugInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestDebugInfoPtr From(const U& u) {
    return mojo::TypeConverter<ManifestDebugInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestDebugInfo>::Convert(*this);
  }


  ManifestDebugInfo();

  ManifestDebugInfo(
      std::vector<ManifestErrorPtr> errors,
      const std::string& raw_manifest);

  ~ManifestDebugInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestDebugInfoPtr>
  ManifestDebugInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestDebugInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestDebugInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestDebugInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestDebugInfo_UnserializedMessageContext<
            UserType, ManifestDebugInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestDebugInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ManifestDebugInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestDebugInfo_UnserializedMessageContext<
            UserType, ManifestDebugInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestDebugInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<ManifestErrorPtr> errors;
  std::string raw_manifest;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ManifestDebugInfo);
};


template <typename StructPtrType>
ManifestPtr Manifest::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(short_name),
      mojo::Clone(start_url),
      mojo::Clone(display),
      mojo::Clone(orientation),
      mojo::Clone(icons),
      mojo::Clone(share_target),
      mojo::Clone(related_applications),
      mojo::Clone(prefer_related_applications),
      mojo::Clone(has_theme_color),
      mojo::Clone(theme_color),
      mojo::Clone(has_background_color),
      mojo::Clone(background_color),
      mojo::Clone(splash_screen_url),
      mojo::Clone(gcm_sender_id),
      mojo::Clone(scope)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Manifest>::value>::type*>
bool Manifest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->short_name, other_struct.short_name))
    return false;
  if (!mojo::Equals(this->start_url, other_struct.start_url))
    return false;
  if (!mojo::Equals(this->display, other_struct.display))
    return false;
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->icons, other_struct.icons))
    return false;
  if (!mojo::Equals(this->share_target, other_struct.share_target))
    return false;
  if (!mojo::Equals(this->related_applications, other_struct.related_applications))
    return false;
  if (!mojo::Equals(this->prefer_related_applications, other_struct.prefer_related_applications))
    return false;
  if (!mojo::Equals(this->has_theme_color, other_struct.has_theme_color))
    return false;
  if (!mojo::Equals(this->theme_color, other_struct.theme_color))
    return false;
  if (!mojo::Equals(this->has_background_color, other_struct.has_background_color))
    return false;
  if (!mojo::Equals(this->background_color, other_struct.background_color))
    return false;
  if (!mojo::Equals(this->splash_screen_url, other_struct.splash_screen_url))
    return false;
  if (!mojo::Equals(this->gcm_sender_id, other_struct.gcm_sender_id))
    return false;
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestIconPtr ManifestIcon::Clone() const {
  return New(
      mojo::Clone(src),
      mojo::Clone(type),
      mojo::Clone(sizes),
      mojo::Clone(purpose)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestIcon>::value>::type*>
bool ManifestIcon::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->src, other_struct.src))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->sizes, other_struct.sizes))
    return false;
  if (!mojo::Equals(this->purpose, other_struct.purpose))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestRelatedApplicationPtr ManifestRelatedApplication::Clone() const {
  return New(
      mojo::Clone(platform),
      mojo::Clone(url),
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestRelatedApplication>::value>::type*>
bool ManifestRelatedApplication::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->platform, other_struct.platform))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestShareTargetPtr ManifestShareTarget::Clone() const {
  return New(
      mojo::Clone(url_template)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestShareTarget>::value>::type*>
bool ManifestShareTarget::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_template, other_struct.url_template))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestDebugInfoPtr ManifestDebugInfo::Clone() const {
  return New(
      mojo::Clone(errors),
      mojo::Clone(raw_manifest)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestDebugInfo>::value>::type*>
bool ManifestDebugInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->errors, other_struct.errors))
    return false;
  if (!mojo::Equals(this->raw_manifest, other_struct.raw_manifest))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestErrorPtr ManifestError::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(critical),
      mojo::Clone(line),
      mojo::Clone(column)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestError>::value>::type*>
bool ManifestError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->critical, other_struct.critical))
    return false;
  if (!mojo::Equals(this->line, other_struct.line))
    return false;
  if (!mojo::Equals(this->column, other_struct.column))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::Manifest::DataView,
                                         ::blink::mojom::ManifestPtr> {
  static bool IsNull(const ::blink::mojom::ManifestPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ManifestPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::Manifest::name)& name(
      const ::blink::mojom::ManifestPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::Manifest::short_name)& short_name(
      const ::blink::mojom::ManifestPtr& input) {
    return input->short_name;
  }

  static const decltype(::blink::mojom::Manifest::start_url)& start_url(
      const ::blink::mojom::ManifestPtr& input) {
    return input->start_url;
  }

  static decltype(::blink::mojom::Manifest::display) display(
      const ::blink::mojom::ManifestPtr& input) {
    return input->display;
  }

  static decltype(::blink::mojom::Manifest::orientation) orientation(
      const ::blink::mojom::ManifestPtr& input) {
    return input->orientation;
  }

  static const decltype(::blink::mojom::Manifest::icons)& icons(
      const ::blink::mojom::ManifestPtr& input) {
    return input->icons;
  }

  static const decltype(::blink::mojom::Manifest::share_target)& share_target(
      const ::blink::mojom::ManifestPtr& input) {
    return input->share_target;
  }

  static const decltype(::blink::mojom::Manifest::related_applications)& related_applications(
      const ::blink::mojom::ManifestPtr& input) {
    return input->related_applications;
  }

  static decltype(::blink::mojom::Manifest::prefer_related_applications) prefer_related_applications(
      const ::blink::mojom::ManifestPtr& input) {
    return input->prefer_related_applications;
  }

  static decltype(::blink::mojom::Manifest::has_theme_color) has_theme_color(
      const ::blink::mojom::ManifestPtr& input) {
    return input->has_theme_color;
  }

  static decltype(::blink::mojom::Manifest::theme_color) theme_color(
      const ::blink::mojom::ManifestPtr& input) {
    return input->theme_color;
  }

  static decltype(::blink::mojom::Manifest::has_background_color) has_background_color(
      const ::blink::mojom::ManifestPtr& input) {
    return input->has_background_color;
  }

  static decltype(::blink::mojom::Manifest::background_color) background_color(
      const ::blink::mojom::ManifestPtr& input) {
    return input->background_color;
  }

  static const decltype(::blink::mojom::Manifest::splash_screen_url)& splash_screen_url(
      const ::blink::mojom::ManifestPtr& input) {
    return input->splash_screen_url;
  }

  static const decltype(::blink::mojom::Manifest::gcm_sender_id)& gcm_sender_id(
      const ::blink::mojom::ManifestPtr& input) {
    return input->gcm_sender_id;
  }

  static const decltype(::blink::mojom::Manifest::scope)& scope(
      const ::blink::mojom::ManifestPtr& input) {
    return input->scope;
  }

  static bool Read(::blink::mojom::Manifest::DataView input, ::blink::mojom::ManifestPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ManifestIcon::DataView,
                                         ::blink::mojom::ManifestIconPtr> {
  static bool IsNull(const ::blink::mojom::ManifestIconPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ManifestIconPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ManifestIcon::src)& src(
      const ::blink::mojom::ManifestIconPtr& input) {
    return input->src;
  }

  static const decltype(::blink::mojom::ManifestIcon::type)& type(
      const ::blink::mojom::ManifestIconPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::ManifestIcon::sizes)& sizes(
      const ::blink::mojom::ManifestIconPtr& input) {
    return input->sizes;
  }

  static const decltype(::blink::mojom::ManifestIcon::purpose)& purpose(
      const ::blink::mojom::ManifestIconPtr& input) {
    return input->purpose;
  }

  static bool Read(::blink::mojom::ManifestIcon::DataView input, ::blink::mojom::ManifestIconPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ManifestRelatedApplication::DataView,
                                         ::blink::mojom::ManifestRelatedApplicationPtr> {
  static bool IsNull(const ::blink::mojom::ManifestRelatedApplicationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ManifestRelatedApplicationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ManifestRelatedApplication::platform)& platform(
      const ::blink::mojom::ManifestRelatedApplicationPtr& input) {
    return input->platform;
  }

  static const decltype(::blink::mojom::ManifestRelatedApplication::url)& url(
      const ::blink::mojom::ManifestRelatedApplicationPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::ManifestRelatedApplication::id)& id(
      const ::blink::mojom::ManifestRelatedApplicationPtr& input) {
    return input->id;
  }

  static bool Read(::blink::mojom::ManifestRelatedApplication::DataView input, ::blink::mojom::ManifestRelatedApplicationPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ManifestShareTarget::DataView,
                                         ::blink::mojom::ManifestShareTargetPtr> {
  static bool IsNull(const ::blink::mojom::ManifestShareTargetPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ManifestShareTargetPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ManifestShareTarget::url_template)& url_template(
      const ::blink::mojom::ManifestShareTargetPtr& input) {
    return input->url_template;
  }

  static bool Read(::blink::mojom::ManifestShareTarget::DataView input, ::blink::mojom::ManifestShareTargetPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ManifestDebugInfo::DataView,
                                         ::blink::mojom::ManifestDebugInfoPtr> {
  static bool IsNull(const ::blink::mojom::ManifestDebugInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ManifestDebugInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ManifestDebugInfo::errors)& errors(
      const ::blink::mojom::ManifestDebugInfoPtr& input) {
    return input->errors;
  }

  static const decltype(::blink::mojom::ManifestDebugInfo::raw_manifest)& raw_manifest(
      const ::blink::mojom::ManifestDebugInfoPtr& input) {
    return input->raw_manifest;
  }

  static bool Read(::blink::mojom::ManifestDebugInfo::DataView input, ::blink::mojom::ManifestDebugInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ManifestError::DataView,
                                         ::blink::mojom::ManifestErrorPtr> {
  static bool IsNull(const ::blink::mojom::ManifestErrorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ManifestErrorPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ManifestError::message)& message(
      const ::blink::mojom::ManifestErrorPtr& input) {
    return input->message;
  }

  static decltype(::blink::mojom::ManifestError::critical) critical(
      const ::blink::mojom::ManifestErrorPtr& input) {
    return input->critical;
  }

  static decltype(::blink::mojom::ManifestError::line) line(
      const ::blink::mojom::ManifestErrorPtr& input) {
    return input->line;
  }

  static decltype(::blink::mojom::ManifestError::column) column(
      const ::blink::mojom::ManifestErrorPtr& input) {
    return input->column;
  }

  static bool Read(::blink::mojom::ManifestError::DataView input, ::blink::mojom::ManifestErrorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_H_