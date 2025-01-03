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

#include "third_party/blink/public/mojom/manifest/manifest.mojom-blink.h"

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

#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/common/manifest/web_display_mode_mojom_traits.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_enum_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
Manifest::Manifest()
    : name(),
      short_name(),
      start_url(),
      display(),
      orientation(),
      icons(),
      share_target(),
      related_applications(),
      prefer_related_applications(),
      has_theme_color(),
      theme_color(),
      has_background_color(),
      background_color(),
      splash_screen_url(),
      gcm_sender_id(),
      scope() {}

Manifest::Manifest(
    const WTF::String& name_in,
    const WTF::String& short_name_in,
    const base::Optional<::blink::KURL>& start_url_in,
    ::blink::WebDisplayMode display_in,
    ::blink::WebScreenOrientationLockType orientation_in,
    base::Optional<WTF::Vector<ManifestIconPtr>> icons_in,
    ManifestShareTargetPtr share_target_in,
    base::Optional<WTF::Vector<ManifestRelatedApplicationPtr>> related_applications_in,
    bool prefer_related_applications_in,
    bool has_theme_color_in,
    uint32_t theme_color_in,
    bool has_background_color_in,
    uint32_t background_color_in,
    const base::Optional<::blink::KURL>& splash_screen_url_in,
    const WTF::String& gcm_sender_id_in,
    const base::Optional<::blink::KURL>& scope_in)
    : name(std::move(name_in)),
      short_name(std::move(short_name_in)),
      start_url(std::move(start_url_in)),
      display(std::move(display_in)),
      orientation(std::move(orientation_in)),
      icons(std::move(icons_in)),
      share_target(std::move(share_target_in)),
      related_applications(std::move(related_applications_in)),
      prefer_related_applications(std::move(prefer_related_applications_in)),
      has_theme_color(std::move(has_theme_color_in)),
      theme_color(std::move(theme_color_in)),
      has_background_color(std::move(has_background_color_in)),
      background_color(std::move(background_color_in)),
      splash_screen_url(std::move(splash_screen_url_in)),
      gcm_sender_id(std::move(gcm_sender_id_in)),
      scope(std::move(scope_in)) {}

Manifest::~Manifest() = default;

bool Manifest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestIcon::ManifestIcon()
    : src(),
      type(),
      sizes(),
      purpose() {}

ManifestIcon::ManifestIcon(
    const ::blink::KURL& src_in,
    const WTF::String& type_in,
    const WTF::Vector<::blink::WebSize>& sizes_in,
    const WTF::Vector<ManifestIcon::Purpose>& purpose_in)
    : src(std::move(src_in)),
      type(std::move(type_in)),
      sizes(std::move(sizes_in)),
      purpose(std::move(purpose_in)) {}

ManifestIcon::~ManifestIcon() = default;

bool ManifestIcon::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestRelatedApplication::ManifestRelatedApplication()
    : platform(),
      url(),
      id() {}

ManifestRelatedApplication::ManifestRelatedApplication(
    const WTF::String& platform_in,
    const base::Optional<::blink::KURL>& url_in,
    const WTF::String& id_in)
    : platform(std::move(platform_in)),
      url(std::move(url_in)),
      id(std::move(id_in)) {}

ManifestRelatedApplication::~ManifestRelatedApplication() = default;

bool ManifestRelatedApplication::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestShareTarget::ManifestShareTarget()
    : url_template() {}

ManifestShareTarget::ManifestShareTarget(
    const base::Optional<::blink::KURL>& url_template_in)
    : url_template(std::move(url_template_in)) {}

ManifestShareTarget::~ManifestShareTarget() = default;

bool ManifestShareTarget::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestDebugInfo::ManifestDebugInfo()
    : errors(),
      raw_manifest() {}

ManifestDebugInfo::ManifestDebugInfo(
    WTF::Vector<ManifestErrorPtr> errors_in,
    const WTF::String& raw_manifest_in)
    : errors(std::move(errors_in)),
      raw_manifest(std::move(raw_manifest_in)) {}

ManifestDebugInfo::~ManifestDebugInfo() = default;

bool ManifestDebugInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestError::ManifestError()
    : message(),
      critical(),
      line(),
      column() {}

ManifestError::ManifestError(
    const WTF::String& message_in,
    bool critical_in,
    uint32_t line_in,
    uint32_t column_in)
    : message(std::move(message_in)),
      critical(std::move(critical_in)),
      line(std::move(line_in)),
      column(std::move(column_in)) {}

ManifestError::~ManifestError() = default;
size_t ManifestError::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->message);
  seed = mojo::internal::WTFHash(seed, this->critical);
  seed = mojo::internal::WTFHash(seed, this->line);
  seed = mojo::internal::WTFHash(seed, this->column);
  return seed;
}

bool ManifestError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::Manifest::DataView, ::blink::mojom::blink::ManifestPtr>::Read(
    ::blink::mojom::blink::Manifest::DataView input,
    ::blink::mojom::blink::ManifestPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ManifestPtr result(::blink::mojom::blink::Manifest::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadShortName(&result->short_name))
        success = false;
      if (!input.ReadStartUrl(&result->start_url))
        success = false;
      if (!input.ReadDisplay(&result->display))
        success = false;
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadIcons(&result->icons))
        success = false;
      if (!input.ReadShareTarget(&result->share_target))
        success = false;
      if (!input.ReadRelatedApplications(&result->related_applications))
        success = false;
      result->prefer_related_applications = input.prefer_related_applications();
      result->has_theme_color = input.has_theme_color();
      result->theme_color = input.theme_color();
      result->has_background_color = input.has_background_color();
      result->background_color = input.background_color();
      if (!input.ReadSplashScreenUrl(&result->splash_screen_url))
        success = false;
      if (!input.ReadGcmSenderId(&result->gcm_sender_id))
        success = false;
      if (!input.ReadScope(&result->scope))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ManifestIcon::DataView, ::blink::mojom::blink::ManifestIconPtr>::Read(
    ::blink::mojom::blink::ManifestIcon::DataView input,
    ::blink::mojom::blink::ManifestIconPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ManifestIconPtr result(::blink::mojom::blink::ManifestIcon::New());
  
      if (!input.ReadSrc(&result->src))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadSizes(&result->sizes))
        success = false;
      if (!input.ReadPurpose(&result->purpose))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ManifestRelatedApplication::DataView, ::blink::mojom::blink::ManifestRelatedApplicationPtr>::Read(
    ::blink::mojom::blink::ManifestRelatedApplication::DataView input,
    ::blink::mojom::blink::ManifestRelatedApplicationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ManifestRelatedApplicationPtr result(::blink::mojom::blink::ManifestRelatedApplication::New());
  
      if (!input.ReadPlatform(&result->platform))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ManifestShareTarget::DataView, ::blink::mojom::blink::ManifestShareTargetPtr>::Read(
    ::blink::mojom::blink::ManifestShareTarget::DataView input,
    ::blink::mojom::blink::ManifestShareTargetPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ManifestShareTargetPtr result(::blink::mojom::blink::ManifestShareTarget::New());
  
      if (!input.ReadUrlTemplate(&result->url_template))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ManifestDebugInfo::DataView, ::blink::mojom::blink::ManifestDebugInfoPtr>::Read(
    ::blink::mojom::blink::ManifestDebugInfo::DataView input,
    ::blink::mojom::blink::ManifestDebugInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ManifestDebugInfoPtr result(::blink::mojom::blink::ManifestDebugInfo::New());
  
      if (!input.ReadErrors(&result->errors))
        success = false;
      if (!input.ReadRawManifest(&result->raw_manifest))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ManifestError::DataView, ::blink::mojom::blink::ManifestErrorPtr>::Read(
    ::blink::mojom::blink::ManifestError::DataView input,
    ::blink::mojom::blink::ManifestErrorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ManifestErrorPtr result(::blink::mojom::blink::ManifestError::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      result->critical = input.critical();
      result->line = input.line();
      result->column = input.column();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif