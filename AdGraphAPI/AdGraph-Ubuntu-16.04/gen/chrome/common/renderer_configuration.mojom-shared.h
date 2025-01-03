// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_SHARED_H_
#define CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_SHARED_H_

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
#include "chrome/common/renderer_configuration.mojom-shared-internal.h"
#include "components/content_settings/core/common/content_settings.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RendererConfigurationInterfaceBase {};

using RendererConfigurationPtrDataView =
    mojo::InterfacePtrDataView<RendererConfigurationInterfaceBase>;
using RendererConfigurationRequestDataView =
    mojo::InterfaceRequestDataView<RendererConfigurationInterfaceBase>;
using RendererConfigurationAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RendererConfigurationInterfaceBase>;
using RendererConfigurationAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RendererConfigurationInterfaceBase>;
class RendererConfiguration_SetInitialConfiguration_ParamsDataView {
 public:
  RendererConfiguration_SetInitialConfiguration_ParamsDataView() {}

  RendererConfiguration_SetInitialConfiguration_ParamsDataView(
      internal::RendererConfiguration_SetInitialConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_incognito_process() const {
    return data_->is_incognito_process;
  }
 private:
  internal::RendererConfiguration_SetInitialConfiguration_Params_Data* data_ = nullptr;
};

class RendererConfiguration_SetContentSettingRules_ParamsDataView {
 public:
  RendererConfiguration_SetContentSettingRules_ParamsDataView() {}

  RendererConfiguration_SetContentSettingRules_ParamsDataView(
      internal::RendererConfiguration_SetContentSettingRules_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRulesDataView(
      ::content_settings::mojom::RendererContentSettingRulesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRules(UserType* output) {
    auto* pointer = data_->rules.Get();
    return mojo::internal::Deserialize<::content_settings::mojom::RendererContentSettingRulesDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererConfiguration_SetContentSettingRules_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererConfiguration_SetFieldTrialGroup_ParamsDataView {
 public:
  RendererConfiguration_SetFieldTrialGroup_ParamsDataView() {}

  RendererConfiguration_SetFieldTrialGroup_ParamsDataView(
      internal::RendererConfiguration_SetFieldTrialGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTrialNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrialName(UserType* output) {
    auto* pointer = data_->trial_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupName(UserType* output) {
    auto* pointer = data_->group_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererConfiguration_SetFieldTrialGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {



inline void RendererConfiguration_SetContentSettingRules_ParamsDataView::GetRulesDataView(
    ::content_settings::mojom::RendererContentSettingRulesDataView* output) {
  auto pointer = data_->rules.Get();
  *output = ::content_settings::mojom::RendererContentSettingRulesDataView(pointer, context_);
}


inline void RendererConfiguration_SetFieldTrialGroup_ParamsDataView::GetTrialNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trial_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RendererConfiguration_SetFieldTrialGroup_ParamsDataView::GetGroupNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_SHARED_H_
