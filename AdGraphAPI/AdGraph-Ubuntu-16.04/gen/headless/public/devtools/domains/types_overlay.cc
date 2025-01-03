// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/types_dom.h"
#include "headless/public/devtools/domains/types_debugger.h"
#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/devtools/domains/types_overlay.h"
#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/devtools/domains/types_runtime.h"
#include "headless/public/devtools/domains/types_security.h"

#include "base/memory/ptr_util.h"
#include "headless/public/devtools/internal/type_conversions_dom.h"
#include "headless/public/devtools/internal/type_conversions_debugger.h"
#include "headless/public/devtools/internal/type_conversions_emulation.h"
#include "headless/public/devtools/internal/type_conversions_io.h"
#include "headless/public/devtools/internal/type_conversions_network.h"
#include "headless/public/devtools/internal/type_conversions_overlay.h"
#include "headless/public/devtools/internal/type_conversions_page.h"
#include "headless/public/devtools/internal/type_conversions_runtime.h"
#include "headless/public/devtools/internal/type_conversions_security.h"

namespace headless {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace overlay {

std::unique_ptr<HighlightConfig> HighlightConfig::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightConfig");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightConfig> result(new HighlightConfig());
  errors->Push();
  errors->SetName("HighlightConfig");
  const base::Value* show_info_value = value.FindKey("showInfo");
  if (show_info_value) {
    errors->SetName("showInfo");
    result->show_info_ = internal::FromValue<bool>::Parse(*show_info_value, errors);
  }
  const base::Value* show_rulers_value = value.FindKey("showRulers");
  if (show_rulers_value) {
    errors->SetName("showRulers");
    result->show_rulers_ = internal::FromValue<bool>::Parse(*show_rulers_value, errors);
  }
  const base::Value* show_extension_lines_value = value.FindKey("showExtensionLines");
  if (show_extension_lines_value) {
    errors->SetName("showExtensionLines");
    result->show_extension_lines_ = internal::FromValue<bool>::Parse(*show_extension_lines_value, errors);
  }
  const base::Value* display_as_material_value = value.FindKey("displayAsMaterial");
  if (display_as_material_value) {
    errors->SetName("displayAsMaterial");
    result->display_as_material_ = internal::FromValue<bool>::Parse(*display_as_material_value, errors);
  }
  const base::Value* content_color_value = value.FindKey("contentColor");
  if (content_color_value) {
    errors->SetName("contentColor");
    result->content_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*content_color_value, errors);
  }
  const base::Value* padding_color_value = value.FindKey("paddingColor");
  if (padding_color_value) {
    errors->SetName("paddingColor");
    result->padding_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*padding_color_value, errors);
  }
  const base::Value* border_color_value = value.FindKey("borderColor");
  if (border_color_value) {
    errors->SetName("borderColor");
    result->border_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*border_color_value, errors);
  }
  const base::Value* margin_color_value = value.FindKey("marginColor");
  if (margin_color_value) {
    errors->SetName("marginColor");
    result->margin_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*margin_color_value, errors);
  }
  const base::Value* event_target_color_value = value.FindKey("eventTargetColor");
  if (event_target_color_value) {
    errors->SetName("eventTargetColor");
    result->event_target_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*event_target_color_value, errors);
  }
  const base::Value* shape_color_value = value.FindKey("shapeColor");
  if (shape_color_value) {
    errors->SetName("shapeColor");
    result->shape_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*shape_color_value, errors);
  }
  const base::Value* shape_margin_color_value = value.FindKey("shapeMarginColor");
  if (shape_margin_color_value) {
    errors->SetName("shapeMarginColor");
    result->shape_margin_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*shape_margin_color_value, errors);
  }
  const base::Value* selector_list_value = value.FindKey("selectorList");
  if (selector_list_value) {
    errors->SetName("selectorList");
    result->selector_list_ = internal::FromValue<std::string>::Parse(*selector_list_value, errors);
  }
  const base::Value* css_grid_color_value = value.FindKey("cssGridColor");
  if (css_grid_color_value) {
    errors->SetName("cssGridColor");
    result->css_grid_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*css_grid_color_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightConfig::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (show_info_)
    result->Set("showInfo", internal::ToValue(show_info_.value()));
  if (show_rulers_)
    result->Set("showRulers", internal::ToValue(show_rulers_.value()));
  if (show_extension_lines_)
    result->Set("showExtensionLines", internal::ToValue(show_extension_lines_.value()));
  if (display_as_material_)
    result->Set("displayAsMaterial", internal::ToValue(display_as_material_.value()));
  if (content_color_)
    result->Set("contentColor", internal::ToValue(*content_color_.value()));
  if (padding_color_)
    result->Set("paddingColor", internal::ToValue(*padding_color_.value()));
  if (border_color_)
    result->Set("borderColor", internal::ToValue(*border_color_.value()));
  if (margin_color_)
    result->Set("marginColor", internal::ToValue(*margin_color_.value()));
  if (event_target_color_)
    result->Set("eventTargetColor", internal::ToValue(*event_target_color_.value()));
  if (shape_color_)
    result->Set("shapeColor", internal::ToValue(*shape_color_.value()));
  if (shape_margin_color_)
    result->Set("shapeMarginColor", internal::ToValue(*shape_margin_color_.value()));
  if (selector_list_)
    result->Set("selectorList", internal::ToValue(selector_list_.value()));
  if (css_grid_color_)
    result->Set("cssGridColor", internal::ToValue(*css_grid_color_.value()));
  return std::move(result);
}

std::unique_ptr<HighlightConfig> HighlightConfig::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightConfig> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DisableParams> DisableParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DisableParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DisableParams> result(new DisableParams());
  errors->Push();
  errors->SetName("DisableParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DisableParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DisableParams> DisableParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DisableParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DisableResult> DisableResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DisableResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DisableResult> result(new DisableResult());
  errors->Push();
  errors->SetName("DisableResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DisableResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DisableResult> DisableResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DisableResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EnableParams> EnableParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EnableParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EnableParams> result(new EnableParams());
  errors->Push();
  errors->SetName("EnableParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EnableParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EnableParams> EnableParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EnableParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EnableResult> EnableResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EnableResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EnableResult> result(new EnableResult());
  errors->Push();
  errors->SetName("EnableResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EnableResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EnableResult> EnableResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EnableResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetHighlightObjectForTestParams> GetHighlightObjectForTestParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetHighlightObjectForTestParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetHighlightObjectForTestParams> result(new GetHighlightObjectForTestParams());
  errors->Push();
  errors->SetName("GetHighlightObjectForTestParams");
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<int>::Parse(*node_id_value, errors);
  } else {
    errors->AddError("required property missing: nodeId");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetHighlightObjectForTestParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodeId", internal::ToValue(node_id_));
  return std::move(result);
}

std::unique_ptr<GetHighlightObjectForTestParams> GetHighlightObjectForTestParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetHighlightObjectForTestParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetHighlightObjectForTestResult> GetHighlightObjectForTestResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetHighlightObjectForTestResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetHighlightObjectForTestResult> result(new GetHighlightObjectForTestResult());
  errors->Push();
  errors->SetName("GetHighlightObjectForTestResult");
  const base::Value* highlight_value = value.FindKey("highlight");
  if (highlight_value) {
    errors->SetName("highlight");
    result->highlight_ = internal::FromValue<base::Value>::Parse(*highlight_value, errors);
  } else {
    errors->AddError("required property missing: highlight");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetHighlightObjectForTestResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("highlight", internal::ToValue(*highlight_));
  return std::move(result);
}

std::unique_ptr<GetHighlightObjectForTestResult> GetHighlightObjectForTestResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetHighlightObjectForTestResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HideHighlightParams> HideHighlightParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HideHighlightParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HideHighlightParams> result(new HideHighlightParams());
  errors->Push();
  errors->SetName("HideHighlightParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HideHighlightParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HideHighlightParams> HideHighlightParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HideHighlightParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HideHighlightResult> HideHighlightResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HideHighlightResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HideHighlightResult> result(new HideHighlightResult());
  errors->Push();
  errors->SetName("HideHighlightResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HideHighlightResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HideHighlightResult> HideHighlightResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HideHighlightResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightFrameParams> HighlightFrameParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightFrameParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightFrameParams> result(new HighlightFrameParams());
  errors->Push();
  errors->SetName("HighlightFrameParams");
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  } else {
    errors->AddError("required property missing: frameId");
  }
  const base::Value* content_color_value = value.FindKey("contentColor");
  if (content_color_value) {
    errors->SetName("contentColor");
    result->content_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*content_color_value, errors);
  }
  const base::Value* content_outline_color_value = value.FindKey("contentOutlineColor");
  if (content_outline_color_value) {
    errors->SetName("contentOutlineColor");
    result->content_outline_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*content_outline_color_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightFrameParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("frameId", internal::ToValue(frame_id_));
  if (content_color_)
    result->Set("contentColor", internal::ToValue(*content_color_.value()));
  if (content_outline_color_)
    result->Set("contentOutlineColor", internal::ToValue(*content_outline_color_.value()));
  return std::move(result);
}

std::unique_ptr<HighlightFrameParams> HighlightFrameParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightFrameParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightFrameResult> HighlightFrameResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightFrameResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightFrameResult> result(new HighlightFrameResult());
  errors->Push();
  errors->SetName("HighlightFrameResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightFrameResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HighlightFrameResult> HighlightFrameResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightFrameResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightNodeParams> HighlightNodeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightNodeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightNodeParams> result(new HighlightNodeParams());
  errors->Push();
  errors->SetName("HighlightNodeParams");
  const base::Value* highlight_config_value = value.FindKey("highlightConfig");
  if (highlight_config_value) {
    errors->SetName("highlightConfig");
    result->highlight_config_ = internal::FromValue<::headless::overlay::HighlightConfig>::Parse(*highlight_config_value, errors);
  } else {
    errors->AddError("required property missing: highlightConfig");
  }
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<int>::Parse(*node_id_value, errors);
  }
  const base::Value* backend_node_id_value = value.FindKey("backendNodeId");
  if (backend_node_id_value) {
    errors->SetName("backendNodeId");
    result->backend_node_id_ = internal::FromValue<int>::Parse(*backend_node_id_value, errors);
  }
  const base::Value* object_id_value = value.FindKey("objectId");
  if (object_id_value) {
    errors->SetName("objectId");
    result->object_id_ = internal::FromValue<std::string>::Parse(*object_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightNodeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("highlightConfig", internal::ToValue(*highlight_config_));
  if (node_id_)
    result->Set("nodeId", internal::ToValue(node_id_.value()));
  if (backend_node_id_)
    result->Set("backendNodeId", internal::ToValue(backend_node_id_.value()));
  if (object_id_)
    result->Set("objectId", internal::ToValue(object_id_.value()));
  return std::move(result);
}

std::unique_ptr<HighlightNodeParams> HighlightNodeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightNodeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightNodeResult> HighlightNodeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightNodeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightNodeResult> result(new HighlightNodeResult());
  errors->Push();
  errors->SetName("HighlightNodeResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightNodeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HighlightNodeResult> HighlightNodeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightNodeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightQuadParams> HighlightQuadParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightQuadParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightQuadParams> result(new HighlightQuadParams());
  errors->Push();
  errors->SetName("HighlightQuadParams");
  const base::Value* quad_value = value.FindKey("quad");
  if (quad_value) {
    errors->SetName("quad");
    result->quad_ = internal::FromValue<std::vector<double>>::Parse(*quad_value, errors);
  } else {
    errors->AddError("required property missing: quad");
  }
  const base::Value* color_value = value.FindKey("color");
  if (color_value) {
    errors->SetName("color");
    result->color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*color_value, errors);
  }
  const base::Value* outline_color_value = value.FindKey("outlineColor");
  if (outline_color_value) {
    errors->SetName("outlineColor");
    result->outline_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*outline_color_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightQuadParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("quad", internal::ToValue(quad_));
  if (color_)
    result->Set("color", internal::ToValue(*color_.value()));
  if (outline_color_)
    result->Set("outlineColor", internal::ToValue(*outline_color_.value()));
  return std::move(result);
}

std::unique_ptr<HighlightQuadParams> HighlightQuadParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightQuadParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightQuadResult> HighlightQuadResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightQuadResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightQuadResult> result(new HighlightQuadResult());
  errors->Push();
  errors->SetName("HighlightQuadResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightQuadResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HighlightQuadResult> HighlightQuadResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightQuadResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightRectParams> HighlightRectParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightRectParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightRectParams> result(new HighlightRectParams());
  errors->Push();
  errors->SetName("HighlightRectParams");
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<int>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<int>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* width_value = value.FindKey("width");
  if (width_value) {
    errors->SetName("width");
    result->width_ = internal::FromValue<int>::Parse(*width_value, errors);
  } else {
    errors->AddError("required property missing: width");
  }
  const base::Value* height_value = value.FindKey("height");
  if (height_value) {
    errors->SetName("height");
    result->height_ = internal::FromValue<int>::Parse(*height_value, errors);
  } else {
    errors->AddError("required property missing: height");
  }
  const base::Value* color_value = value.FindKey("color");
  if (color_value) {
    errors->SetName("color");
    result->color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*color_value, errors);
  }
  const base::Value* outline_color_value = value.FindKey("outlineColor");
  if (outline_color_value) {
    errors->SetName("outlineColor");
    result->outline_color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*outline_color_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightRectParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  result->Set("width", internal::ToValue(width_));
  result->Set("height", internal::ToValue(height_));
  if (color_)
    result->Set("color", internal::ToValue(*color_.value()));
  if (outline_color_)
    result->Set("outlineColor", internal::ToValue(*outline_color_.value()));
  return std::move(result);
}

std::unique_ptr<HighlightRectParams> HighlightRectParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightRectParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<HighlightRectResult> HighlightRectResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("HighlightRectResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<HighlightRectResult> result(new HighlightRectResult());
  errors->Push();
  errors->SetName("HighlightRectResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> HighlightRectResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<HighlightRectResult> HighlightRectResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<HighlightRectResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetInspectModeParams> SetInspectModeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetInspectModeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetInspectModeParams> result(new SetInspectModeParams());
  errors->Push();
  errors->SetName("SetInspectModeParams");
  const base::Value* mode_value = value.FindKey("mode");
  if (mode_value) {
    errors->SetName("mode");
    result->mode_ = internal::FromValue<::headless::overlay::InspectMode>::Parse(*mode_value, errors);
  } else {
    errors->AddError("required property missing: mode");
  }
  const base::Value* highlight_config_value = value.FindKey("highlightConfig");
  if (highlight_config_value) {
    errors->SetName("highlightConfig");
    result->highlight_config_ = internal::FromValue<::headless::overlay::HighlightConfig>::Parse(*highlight_config_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetInspectModeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("mode", internal::ToValue(mode_));
  if (highlight_config_)
    result->Set("highlightConfig", internal::ToValue(*highlight_config_.value()));
  return std::move(result);
}

std::unique_ptr<SetInspectModeParams> SetInspectModeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetInspectModeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetInspectModeResult> SetInspectModeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetInspectModeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetInspectModeResult> result(new SetInspectModeResult());
  errors->Push();
  errors->SetName("SetInspectModeResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetInspectModeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetInspectModeResult> SetInspectModeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetInspectModeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetPausedInDebuggerMessageParams> SetPausedInDebuggerMessageParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetPausedInDebuggerMessageParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetPausedInDebuggerMessageParams> result(new SetPausedInDebuggerMessageParams());
  errors->Push();
  errors->SetName("SetPausedInDebuggerMessageParams");
  const base::Value* message_value = value.FindKey("message");
  if (message_value) {
    errors->SetName("message");
    result->message_ = internal::FromValue<std::string>::Parse(*message_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetPausedInDebuggerMessageParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (message_)
    result->Set("message", internal::ToValue(message_.value()));
  return std::move(result);
}

std::unique_ptr<SetPausedInDebuggerMessageParams> SetPausedInDebuggerMessageParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetPausedInDebuggerMessageParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetPausedInDebuggerMessageResult> SetPausedInDebuggerMessageResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetPausedInDebuggerMessageResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetPausedInDebuggerMessageResult> result(new SetPausedInDebuggerMessageResult());
  errors->Push();
  errors->SetName("SetPausedInDebuggerMessageResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetPausedInDebuggerMessageResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetPausedInDebuggerMessageResult> SetPausedInDebuggerMessageResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetPausedInDebuggerMessageResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowDebugBordersParams> SetShowDebugBordersParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowDebugBordersParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowDebugBordersParams> result(new SetShowDebugBordersParams());
  errors->Push();
  errors->SetName("SetShowDebugBordersParams");
  const base::Value* show_value = value.FindKey("show");
  if (show_value) {
    errors->SetName("show");
    result->show_ = internal::FromValue<bool>::Parse(*show_value, errors);
  } else {
    errors->AddError("required property missing: show");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowDebugBordersParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("show", internal::ToValue(show_));
  return std::move(result);
}

std::unique_ptr<SetShowDebugBordersParams> SetShowDebugBordersParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowDebugBordersParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowDebugBordersResult> SetShowDebugBordersResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowDebugBordersResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowDebugBordersResult> result(new SetShowDebugBordersResult());
  errors->Push();
  errors->SetName("SetShowDebugBordersResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowDebugBordersResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetShowDebugBordersResult> SetShowDebugBordersResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowDebugBordersResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowFPSCounterParams> SetShowFPSCounterParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowFPSCounterParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowFPSCounterParams> result(new SetShowFPSCounterParams());
  errors->Push();
  errors->SetName("SetShowFPSCounterParams");
  const base::Value* show_value = value.FindKey("show");
  if (show_value) {
    errors->SetName("show");
    result->show_ = internal::FromValue<bool>::Parse(*show_value, errors);
  } else {
    errors->AddError("required property missing: show");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowFPSCounterParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("show", internal::ToValue(show_));
  return std::move(result);
}

std::unique_ptr<SetShowFPSCounterParams> SetShowFPSCounterParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowFPSCounterParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowFPSCounterResult> SetShowFPSCounterResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowFPSCounterResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowFPSCounterResult> result(new SetShowFPSCounterResult());
  errors->Push();
  errors->SetName("SetShowFPSCounterResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowFPSCounterResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetShowFPSCounterResult> SetShowFPSCounterResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowFPSCounterResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowPaintRectsParams> SetShowPaintRectsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowPaintRectsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowPaintRectsParams> result(new SetShowPaintRectsParams());
  errors->Push();
  errors->SetName("SetShowPaintRectsParams");
  const base::Value* result_value = value.FindKey("result");
  if (result_value) {
    errors->SetName("result");
    result->result_ = internal::FromValue<bool>::Parse(*result_value, errors);
  } else {
    errors->AddError("required property missing: result");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowPaintRectsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("result", internal::ToValue(result_));
  return std::move(result);
}

std::unique_ptr<SetShowPaintRectsParams> SetShowPaintRectsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowPaintRectsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowPaintRectsResult> SetShowPaintRectsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowPaintRectsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowPaintRectsResult> result(new SetShowPaintRectsResult());
  errors->Push();
  errors->SetName("SetShowPaintRectsResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowPaintRectsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetShowPaintRectsResult> SetShowPaintRectsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowPaintRectsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowScrollBottleneckRectsParams> SetShowScrollBottleneckRectsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowScrollBottleneckRectsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowScrollBottleneckRectsParams> result(new SetShowScrollBottleneckRectsParams());
  errors->Push();
  errors->SetName("SetShowScrollBottleneckRectsParams");
  const base::Value* show_value = value.FindKey("show");
  if (show_value) {
    errors->SetName("show");
    result->show_ = internal::FromValue<bool>::Parse(*show_value, errors);
  } else {
    errors->AddError("required property missing: show");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowScrollBottleneckRectsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("show", internal::ToValue(show_));
  return std::move(result);
}

std::unique_ptr<SetShowScrollBottleneckRectsParams> SetShowScrollBottleneckRectsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowScrollBottleneckRectsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowScrollBottleneckRectsResult> SetShowScrollBottleneckRectsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowScrollBottleneckRectsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowScrollBottleneckRectsResult> result(new SetShowScrollBottleneckRectsResult());
  errors->Push();
  errors->SetName("SetShowScrollBottleneckRectsResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowScrollBottleneckRectsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetShowScrollBottleneckRectsResult> SetShowScrollBottleneckRectsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowScrollBottleneckRectsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowViewportSizeOnResizeParams> SetShowViewportSizeOnResizeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowViewportSizeOnResizeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowViewportSizeOnResizeParams> result(new SetShowViewportSizeOnResizeParams());
  errors->Push();
  errors->SetName("SetShowViewportSizeOnResizeParams");
  const base::Value* show_value = value.FindKey("show");
  if (show_value) {
    errors->SetName("show");
    result->show_ = internal::FromValue<bool>::Parse(*show_value, errors);
  } else {
    errors->AddError("required property missing: show");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowViewportSizeOnResizeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("show", internal::ToValue(show_));
  return std::move(result);
}

std::unique_ptr<SetShowViewportSizeOnResizeParams> SetShowViewportSizeOnResizeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowViewportSizeOnResizeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetShowViewportSizeOnResizeResult> SetShowViewportSizeOnResizeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetShowViewportSizeOnResizeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetShowViewportSizeOnResizeResult> result(new SetShowViewportSizeOnResizeResult());
  errors->Push();
  errors->SetName("SetShowViewportSizeOnResizeResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetShowViewportSizeOnResizeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetShowViewportSizeOnResizeResult> SetShowViewportSizeOnResizeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetShowViewportSizeOnResizeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetSuspendedParams> SetSuspendedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetSuspendedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetSuspendedParams> result(new SetSuspendedParams());
  errors->Push();
  errors->SetName("SetSuspendedParams");
  const base::Value* suspended_value = value.FindKey("suspended");
  if (suspended_value) {
    errors->SetName("suspended");
    result->suspended_ = internal::FromValue<bool>::Parse(*suspended_value, errors);
  } else {
    errors->AddError("required property missing: suspended");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetSuspendedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("suspended", internal::ToValue(suspended_));
  return std::move(result);
}

std::unique_ptr<SetSuspendedParams> SetSuspendedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetSuspendedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetSuspendedResult> SetSuspendedResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetSuspendedResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetSuspendedResult> result(new SetSuspendedResult());
  errors->Push();
  errors->SetName("SetSuspendedResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetSuspendedResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetSuspendedResult> SetSuspendedResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetSuspendedResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InspectNodeRequestedParams> InspectNodeRequestedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InspectNodeRequestedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InspectNodeRequestedParams> result(new InspectNodeRequestedParams());
  errors->Push();
  errors->SetName("InspectNodeRequestedParams");
  const base::Value* backend_node_id_value = value.FindKey("backendNodeId");
  if (backend_node_id_value) {
    errors->SetName("backendNodeId");
    result->backend_node_id_ = internal::FromValue<int>::Parse(*backend_node_id_value, errors);
  } else {
    errors->AddError("required property missing: backendNodeId");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InspectNodeRequestedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("backendNodeId", internal::ToValue(backend_node_id_));
  return std::move(result);
}

std::unique_ptr<InspectNodeRequestedParams> InspectNodeRequestedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InspectNodeRequestedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<NodeHighlightRequestedParams> NodeHighlightRequestedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("NodeHighlightRequestedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<NodeHighlightRequestedParams> result(new NodeHighlightRequestedParams());
  errors->Push();
  errors->SetName("NodeHighlightRequestedParams");
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<int>::Parse(*node_id_value, errors);
  } else {
    errors->AddError("required property missing: nodeId");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> NodeHighlightRequestedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodeId", internal::ToValue(node_id_));
  return std::move(result);
}

std::unique_ptr<NodeHighlightRequestedParams> NodeHighlightRequestedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<NodeHighlightRequestedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ScreenshotRequestedParams> ScreenshotRequestedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ScreenshotRequestedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ScreenshotRequestedParams> result(new ScreenshotRequestedParams());
  errors->Push();
  errors->SetName("ScreenshotRequestedParams");
  const base::Value* viewport_value = value.FindKey("viewport");
  if (viewport_value) {
    errors->SetName("viewport");
    result->viewport_ = internal::FromValue<::headless::page::Viewport>::Parse(*viewport_value, errors);
  } else {
    errors->AddError("required property missing: viewport");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ScreenshotRequestedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("viewport", internal::ToValue(*viewport_));
  return std::move(result);
}

std::unique_ptr<ScreenshotRequestedParams> ScreenshotRequestedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ScreenshotRequestedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace overlay
}  // namespace headless
