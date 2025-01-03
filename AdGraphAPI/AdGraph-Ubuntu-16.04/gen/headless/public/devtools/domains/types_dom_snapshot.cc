// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/types_css.h"
#include "headless/public/devtools/domains/types_dom.h"
#include "headless/public/devtools/domains/types_dom_debugger.h"
#include "headless/public/devtools/domains/types_dom_snapshot.h"
#include "headless/public/devtools/domains/types_debugger.h"
#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/devtools/domains/types_runtime.h"
#include "headless/public/devtools/domains/types_security.h"

#include "base/memory/ptr_util.h"
#include "headless/public/devtools/internal/type_conversions_css.h"
#include "headless/public/devtools/internal/type_conversions_dom.h"
#include "headless/public/devtools/internal/type_conversions_dom_debugger.h"
#include "headless/public/devtools/internal/type_conversions_dom_snapshot.h"
#include "headless/public/devtools/internal/type_conversions_debugger.h"
#include "headless/public/devtools/internal/type_conversions_emulation.h"
#include "headless/public/devtools/internal/type_conversions_io.h"
#include "headless/public/devtools/internal/type_conversions_network.h"
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

namespace dom_snapshot {

std::unique_ptr<DOMNode> DOMNode::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DOMNode");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DOMNode> result(new DOMNode());
  errors->Push();
  errors->SetName("DOMNode");
  const base::Value* node_type_value = value.FindKey("nodeType");
  if (node_type_value) {
    errors->SetName("nodeType");
    result->node_type_ = internal::FromValue<int>::Parse(*node_type_value, errors);
  } else {
    errors->AddError("required property missing: nodeType");
  }
  const base::Value* node_name_value = value.FindKey("nodeName");
  if (node_name_value) {
    errors->SetName("nodeName");
    result->node_name_ = internal::FromValue<std::string>::Parse(*node_name_value, errors);
  } else {
    errors->AddError("required property missing: nodeName");
  }
  const base::Value* node_value_value = value.FindKey("nodeValue");
  if (node_value_value) {
    errors->SetName("nodeValue");
    result->node_value_ = internal::FromValue<std::string>::Parse(*node_value_value, errors);
  } else {
    errors->AddError("required property missing: nodeValue");
  }
  const base::Value* text_value_value = value.FindKey("textValue");
  if (text_value_value) {
    errors->SetName("textValue");
    result->text_value_ = internal::FromValue<std::string>::Parse(*text_value_value, errors);
  }
  const base::Value* input_value_value = value.FindKey("inputValue");
  if (input_value_value) {
    errors->SetName("inputValue");
    result->input_value_ = internal::FromValue<std::string>::Parse(*input_value_value, errors);
  }
  const base::Value* input_checked_value = value.FindKey("inputChecked");
  if (input_checked_value) {
    errors->SetName("inputChecked");
    result->input_checked_ = internal::FromValue<bool>::Parse(*input_checked_value, errors);
  }
  const base::Value* option_selected_value = value.FindKey("optionSelected");
  if (option_selected_value) {
    errors->SetName("optionSelected");
    result->option_selected_ = internal::FromValue<bool>::Parse(*option_selected_value, errors);
  }
  const base::Value* backend_node_id_value = value.FindKey("backendNodeId");
  if (backend_node_id_value) {
    errors->SetName("backendNodeId");
    result->backend_node_id_ = internal::FromValue<int>::Parse(*backend_node_id_value, errors);
  } else {
    errors->AddError("required property missing: backendNodeId");
  }
  const base::Value* child_node_indexes_value = value.FindKey("childNodeIndexes");
  if (child_node_indexes_value) {
    errors->SetName("childNodeIndexes");
    result->child_node_indexes_ = internal::FromValue<std::vector<int>>::Parse(*child_node_indexes_value, errors);
  }
  const base::Value* attributes_value = value.FindKey("attributes");
  if (attributes_value) {
    errors->SetName("attributes");
    result->attributes_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>>>::Parse(*attributes_value, errors);
  }
  const base::Value* pseudo_element_indexes_value = value.FindKey("pseudoElementIndexes");
  if (pseudo_element_indexes_value) {
    errors->SetName("pseudoElementIndexes");
    result->pseudo_element_indexes_ = internal::FromValue<std::vector<int>>::Parse(*pseudo_element_indexes_value, errors);
  }
  const base::Value* layout_node_index_value = value.FindKey("layoutNodeIndex");
  if (layout_node_index_value) {
    errors->SetName("layoutNodeIndex");
    result->layout_node_index_ = internal::FromValue<int>::Parse(*layout_node_index_value, errors);
  }
  const base::Value* documenturl_value = value.FindKey("documentURL");
  if (documenturl_value) {
    errors->SetName("documentURL");
    result->documenturl_ = internal::FromValue<std::string>::Parse(*documenturl_value, errors);
  }
  const base::Value* baseurl_value = value.FindKey("baseURL");
  if (baseurl_value) {
    errors->SetName("baseURL");
    result->baseurl_ = internal::FromValue<std::string>::Parse(*baseurl_value, errors);
  }
  const base::Value* content_language_value = value.FindKey("contentLanguage");
  if (content_language_value) {
    errors->SetName("contentLanguage");
    result->content_language_ = internal::FromValue<std::string>::Parse(*content_language_value, errors);
  }
  const base::Value* document_encoding_value = value.FindKey("documentEncoding");
  if (document_encoding_value) {
    errors->SetName("documentEncoding");
    result->document_encoding_ = internal::FromValue<std::string>::Parse(*document_encoding_value, errors);
  }
  const base::Value* public_id_value = value.FindKey("publicId");
  if (public_id_value) {
    errors->SetName("publicId");
    result->public_id_ = internal::FromValue<std::string>::Parse(*public_id_value, errors);
  }
  const base::Value* system_id_value = value.FindKey("systemId");
  if (system_id_value) {
    errors->SetName("systemId");
    result->system_id_ = internal::FromValue<std::string>::Parse(*system_id_value, errors);
  }
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  }
  const base::Value* content_document_index_value = value.FindKey("contentDocumentIndex");
  if (content_document_index_value) {
    errors->SetName("contentDocumentIndex");
    result->content_document_index_ = internal::FromValue<int>::Parse(*content_document_index_value, errors);
  }
  const base::Value* imported_document_index_value = value.FindKey("importedDocumentIndex");
  if (imported_document_index_value) {
    errors->SetName("importedDocumentIndex");
    result->imported_document_index_ = internal::FromValue<int>::Parse(*imported_document_index_value, errors);
  }
  const base::Value* template_content_index_value = value.FindKey("templateContentIndex");
  if (template_content_index_value) {
    errors->SetName("templateContentIndex");
    result->template_content_index_ = internal::FromValue<int>::Parse(*template_content_index_value, errors);
  }
  const base::Value* pseudo_type_value = value.FindKey("pseudoType");
  if (pseudo_type_value) {
    errors->SetName("pseudoType");
    result->pseudo_type_ = internal::FromValue<::headless::dom::PseudoType>::Parse(*pseudo_type_value, errors);
  }
  const base::Value* shadow_root_type_value = value.FindKey("shadowRootType");
  if (shadow_root_type_value) {
    errors->SetName("shadowRootType");
    result->shadow_root_type_ = internal::FromValue<::headless::dom::ShadowRootType>::Parse(*shadow_root_type_value, errors);
  }
  const base::Value* is_clickable_value = value.FindKey("isClickable");
  if (is_clickable_value) {
    errors->SetName("isClickable");
    result->is_clickable_ = internal::FromValue<bool>::Parse(*is_clickable_value, errors);
  }
  const base::Value* event_listeners_value = value.FindKey("eventListeners");
  if (event_listeners_value) {
    errors->SetName("eventListeners");
    result->event_listeners_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_debugger::EventListener>>>::Parse(*event_listeners_value, errors);
  }
  const base::Value* current_sourceurl_value = value.FindKey("currentSourceURL");
  if (current_sourceurl_value) {
    errors->SetName("currentSourceURL");
    result->current_sourceurl_ = internal::FromValue<std::string>::Parse(*current_sourceurl_value, errors);
  }
  const base::Value* originurl_value = value.FindKey("originURL");
  if (originurl_value) {
    errors->SetName("originURL");
    result->originurl_ = internal::FromValue<std::string>::Parse(*originurl_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DOMNode::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodeType", internal::ToValue(node_type_));
  result->Set("nodeName", internal::ToValue(node_name_));
  result->Set("nodeValue", internal::ToValue(node_value_));
  if (text_value_)
    result->Set("textValue", internal::ToValue(text_value_.value()));
  if (input_value_)
    result->Set("inputValue", internal::ToValue(input_value_.value()));
  if (input_checked_)
    result->Set("inputChecked", internal::ToValue(input_checked_.value()));
  if (option_selected_)
    result->Set("optionSelected", internal::ToValue(option_selected_.value()));
  result->Set("backendNodeId", internal::ToValue(backend_node_id_));
  if (child_node_indexes_)
    result->Set("childNodeIndexes", internal::ToValue(child_node_indexes_.value()));
  if (attributes_)
    result->Set("attributes", internal::ToValue(attributes_.value()));
  if (pseudo_element_indexes_)
    result->Set("pseudoElementIndexes", internal::ToValue(pseudo_element_indexes_.value()));
  if (layout_node_index_)
    result->Set("layoutNodeIndex", internal::ToValue(layout_node_index_.value()));
  if (documenturl_)
    result->Set("documentURL", internal::ToValue(documenturl_.value()));
  if (baseurl_)
    result->Set("baseURL", internal::ToValue(baseurl_.value()));
  if (content_language_)
    result->Set("contentLanguage", internal::ToValue(content_language_.value()));
  if (document_encoding_)
    result->Set("documentEncoding", internal::ToValue(document_encoding_.value()));
  if (public_id_)
    result->Set("publicId", internal::ToValue(public_id_.value()));
  if (system_id_)
    result->Set("systemId", internal::ToValue(system_id_.value()));
  if (frame_id_)
    result->Set("frameId", internal::ToValue(frame_id_.value()));
  if (content_document_index_)
    result->Set("contentDocumentIndex", internal::ToValue(content_document_index_.value()));
  if (imported_document_index_)
    result->Set("importedDocumentIndex", internal::ToValue(imported_document_index_.value()));
  if (template_content_index_)
    result->Set("templateContentIndex", internal::ToValue(template_content_index_.value()));
  if (pseudo_type_)
    result->Set("pseudoType", internal::ToValue(pseudo_type_.value()));
  if (shadow_root_type_)
    result->Set("shadowRootType", internal::ToValue(shadow_root_type_.value()));
  if (is_clickable_)
    result->Set("isClickable", internal::ToValue(is_clickable_.value()));
  if (event_listeners_)
    result->Set("eventListeners", internal::ToValue(event_listeners_.value()));
  if (current_sourceurl_)
    result->Set("currentSourceURL", internal::ToValue(current_sourceurl_.value()));
  if (originurl_)
    result->Set("originURL", internal::ToValue(originurl_.value()));
  return std::move(result);
}

std::unique_ptr<DOMNode> DOMNode::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DOMNode> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InlineTextBox> InlineTextBox::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InlineTextBox");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InlineTextBox> result(new InlineTextBox());
  errors->Push();
  errors->SetName("InlineTextBox");
  const base::Value* bounding_box_value = value.FindKey("boundingBox");
  if (bounding_box_value) {
    errors->SetName("boundingBox");
    result->bounding_box_ = internal::FromValue<::headless::dom::Rect>::Parse(*bounding_box_value, errors);
  } else {
    errors->AddError("required property missing: boundingBox");
  }
  const base::Value* start_character_index_value = value.FindKey("startCharacterIndex");
  if (start_character_index_value) {
    errors->SetName("startCharacterIndex");
    result->start_character_index_ = internal::FromValue<int>::Parse(*start_character_index_value, errors);
  } else {
    errors->AddError("required property missing: startCharacterIndex");
  }
  const base::Value* num_characters_value = value.FindKey("numCharacters");
  if (num_characters_value) {
    errors->SetName("numCharacters");
    result->num_characters_ = internal::FromValue<int>::Parse(*num_characters_value, errors);
  } else {
    errors->AddError("required property missing: numCharacters");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InlineTextBox::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("boundingBox", internal::ToValue(*bounding_box_));
  result->Set("startCharacterIndex", internal::ToValue(start_character_index_));
  result->Set("numCharacters", internal::ToValue(num_characters_));
  return std::move(result);
}

std::unique_ptr<InlineTextBox> InlineTextBox::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InlineTextBox> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<LayoutTreeNode> LayoutTreeNode::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("LayoutTreeNode");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<LayoutTreeNode> result(new LayoutTreeNode());
  errors->Push();
  errors->SetName("LayoutTreeNode");
  const base::Value* dom_node_index_value = value.FindKey("domNodeIndex");
  if (dom_node_index_value) {
    errors->SetName("domNodeIndex");
    result->dom_node_index_ = internal::FromValue<int>::Parse(*dom_node_index_value, errors);
  } else {
    errors->AddError("required property missing: domNodeIndex");
  }
  const base::Value* bounding_box_value = value.FindKey("boundingBox");
  if (bounding_box_value) {
    errors->SetName("boundingBox");
    result->bounding_box_ = internal::FromValue<::headless::dom::Rect>::Parse(*bounding_box_value, errors);
  } else {
    errors->AddError("required property missing: boundingBox");
  }
  const base::Value* layout_text_value = value.FindKey("layoutText");
  if (layout_text_value) {
    errors->SetName("layoutText");
    result->layout_text_ = internal::FromValue<std::string>::Parse(*layout_text_value, errors);
  }
  const base::Value* inline_text_nodes_value = value.FindKey("inlineTextNodes");
  if (inline_text_nodes_value) {
    errors->SetName("inlineTextNodes");
    result->inline_text_nodes_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_snapshot::InlineTextBox>>>::Parse(*inline_text_nodes_value, errors);
  }
  const base::Value* style_index_value = value.FindKey("styleIndex");
  if (style_index_value) {
    errors->SetName("styleIndex");
    result->style_index_ = internal::FromValue<int>::Parse(*style_index_value, errors);
  }
  const base::Value* paint_order_value = value.FindKey("paintOrder");
  if (paint_order_value) {
    errors->SetName("paintOrder");
    result->paint_order_ = internal::FromValue<int>::Parse(*paint_order_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> LayoutTreeNode::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("domNodeIndex", internal::ToValue(dom_node_index_));
  result->Set("boundingBox", internal::ToValue(*bounding_box_));
  if (layout_text_)
    result->Set("layoutText", internal::ToValue(layout_text_.value()));
  if (inline_text_nodes_)
    result->Set("inlineTextNodes", internal::ToValue(inline_text_nodes_.value()));
  if (style_index_)
    result->Set("styleIndex", internal::ToValue(style_index_.value()));
  if (paint_order_)
    result->Set("paintOrder", internal::ToValue(paint_order_.value()));
  return std::move(result);
}

std::unique_ptr<LayoutTreeNode> LayoutTreeNode::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<LayoutTreeNode> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ComputedStyle> ComputedStyle::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ComputedStyle");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ComputedStyle> result(new ComputedStyle());
  errors->Push();
  errors->SetName("ComputedStyle");
  const base::Value* properties_value = value.FindKey("properties");
  if (properties_value) {
    errors->SetName("properties");
    result->properties_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>>>::Parse(*properties_value, errors);
  } else {
    errors->AddError("required property missing: properties");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ComputedStyle::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("properties", internal::ToValue(properties_));
  return std::move(result);
}

std::unique_ptr<ComputedStyle> ComputedStyle::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ComputedStyle> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<NameValue> NameValue::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("NameValue");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<NameValue> result(new NameValue());
  errors->Push();
  errors->SetName("NameValue");
  const base::Value* name_value = value.FindKey("name");
  if (name_value) {
    errors->SetName("name");
    result->name_ = internal::FromValue<std::string>::Parse(*name_value, errors);
  } else {
    errors->AddError("required property missing: name");
  }
  const base::Value* value_value = value.FindKey("value");
  if (value_value) {
    errors->SetName("value");
    result->value_ = internal::FromValue<std::string>::Parse(*value_value, errors);
  } else {
    errors->AddError("required property missing: value");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> NameValue::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("name", internal::ToValue(name_));
  result->Set("value", internal::ToValue(value_));
  return std::move(result);
}

std::unique_ptr<NameValue> NameValue::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<NameValue> result = Parse(*Serialize(), &errors);
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


std::unique_ptr<GetSnapshotParams> GetSnapshotParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetSnapshotParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetSnapshotParams> result(new GetSnapshotParams());
  errors->Push();
  errors->SetName("GetSnapshotParams");
  const base::Value* computed_style_whitelist_value = value.FindKey("computedStyleWhitelist");
  if (computed_style_whitelist_value) {
    errors->SetName("computedStyleWhitelist");
    result->computed_style_whitelist_ = internal::FromValue<std::vector<std::string>>::Parse(*computed_style_whitelist_value, errors);
  } else {
    errors->AddError("required property missing: computedStyleWhitelist");
  }
  const base::Value* include_event_listeners_value = value.FindKey("includeEventListeners");
  if (include_event_listeners_value) {
    errors->SetName("includeEventListeners");
    result->include_event_listeners_ = internal::FromValue<bool>::Parse(*include_event_listeners_value, errors);
  }
  const base::Value* include_paint_order_value = value.FindKey("includePaintOrder");
  if (include_paint_order_value) {
    errors->SetName("includePaintOrder");
    result->include_paint_order_ = internal::FromValue<bool>::Parse(*include_paint_order_value, errors);
  }
  const base::Value* include_user_agent_shadow_tree_value = value.FindKey("includeUserAgentShadowTree");
  if (include_user_agent_shadow_tree_value) {
    errors->SetName("includeUserAgentShadowTree");
    result->include_user_agent_shadow_tree_ = internal::FromValue<bool>::Parse(*include_user_agent_shadow_tree_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetSnapshotParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("computedStyleWhitelist", internal::ToValue(computed_style_whitelist_));
  if (include_event_listeners_)
    result->Set("includeEventListeners", internal::ToValue(include_event_listeners_.value()));
  if (include_paint_order_)
    result->Set("includePaintOrder", internal::ToValue(include_paint_order_.value()));
  if (include_user_agent_shadow_tree_)
    result->Set("includeUserAgentShadowTree", internal::ToValue(include_user_agent_shadow_tree_.value()));
  return std::move(result);
}

std::unique_ptr<GetSnapshotParams> GetSnapshotParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetSnapshotParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetSnapshotResult> GetSnapshotResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetSnapshotResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetSnapshotResult> result(new GetSnapshotResult());
  errors->Push();
  errors->SetName("GetSnapshotResult");
  const base::Value* dom_nodes_value = value.FindKey("domNodes");
  if (dom_nodes_value) {
    errors->SetName("domNodes");
    result->dom_nodes_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_snapshot::DOMNode>>>::Parse(*dom_nodes_value, errors);
  } else {
    errors->AddError("required property missing: domNodes");
  }
  const base::Value* layout_tree_nodes_value = value.FindKey("layoutTreeNodes");
  if (layout_tree_nodes_value) {
    errors->SetName("layoutTreeNodes");
    result->layout_tree_nodes_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_snapshot::LayoutTreeNode>>>::Parse(*layout_tree_nodes_value, errors);
  } else {
    errors->AddError("required property missing: layoutTreeNodes");
  }
  const base::Value* computed_styles_value = value.FindKey("computedStyles");
  if (computed_styles_value) {
    errors->SetName("computedStyles");
    result->computed_styles_ = internal::FromValue<std::vector<std::unique_ptr<::headless::dom_snapshot::ComputedStyle>>>::Parse(*computed_styles_value, errors);
  } else {
    errors->AddError("required property missing: computedStyles");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetSnapshotResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("domNodes", internal::ToValue(dom_nodes_));
  result->Set("layoutTreeNodes", internal::ToValue(layout_tree_nodes_));
  result->Set("computedStyles", internal::ToValue(computed_styles_));
  return std::move(result);
}

std::unique_ptr<GetSnapshotResult> GetSnapshotResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetSnapshotResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace dom_snapshot
}  // namespace headless
