// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_DOM_SNAPSHOT_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_DOM_SNAPSHOT_H_

#include "base/optional.h"
#include "base/values.h"
#include "headless/public/devtools/internal/types_forward_declarations_css.h"
#include "headless/public/devtools/internal/types_forward_declarations_dom.h"
#include "headless/public/devtools/internal/types_forward_declarations_dom_debugger.h"
#include "headless/public/devtools/internal/types_forward_declarations_dom_snapshot.h"
#include "headless/public/devtools/internal/types_forward_declarations_debugger.h"
#include "headless/public/devtools/internal/types_forward_declarations_emulation.h"
#include "headless/public/devtools/internal/types_forward_declarations_io.h"
#include "headless/public/devtools/internal/types_forward_declarations_network.h"
#include "headless/public/devtools/internal/types_forward_declarations_page.h"
#include "headless/public/devtools/internal/types_forward_declarations_runtime.h"
#include "headless/public/devtools/internal/types_forward_declarations_security.h"
#include "headless/public/headless_export.h"

namespace headless {

class ErrorReporter;

namespace dom_snapshot {

// A Node in the DOM tree.
class HEADLESS_EXPORT DOMNode {
 public:
  static std::unique_ptr<DOMNode> Parse(const base::Value& value, ErrorReporter* errors);
  ~DOMNode() { }

  // `Node`'s nodeType.
  int GetNodeType() const { return node_type_; }
  void SetNodeType(int value) { node_type_ = value; }

  // `Node`'s nodeName.
  std::string GetNodeName() const { return node_name_; }
  void SetNodeName(const std::string& value) { node_name_ = value; }

  // `Node`'s nodeValue.
  std::string GetNodeValue() const { return node_value_; }
  void SetNodeValue(const std::string& value) { node_value_ = value; }

  // Only set for textarea elements, contains the text value.
  bool HasTextValue() const { return !!text_value_; }
  std::string GetTextValue() const { DCHECK(HasTextValue()); return text_value_.value(); }
  void SetTextValue(const std::string& value) { text_value_ = value; }

  // Only set for input elements, contains the input's associated text value.
  bool HasInputValue() const { return !!input_value_; }
  std::string GetInputValue() const { DCHECK(HasInputValue()); return input_value_.value(); }
  void SetInputValue(const std::string& value) { input_value_ = value; }

  // Only set for radio and checkbox input elements, indicates if the element has been checked
  bool HasInputChecked() const { return !!input_checked_; }
  bool GetInputChecked() const { DCHECK(HasInputChecked()); return input_checked_.value(); }
  void SetInputChecked(bool value) { input_checked_ = value; }

  // Only set for option elements, indicates if the element has been selected
  bool HasOptionSelected() const { return !!option_selected_; }
  bool GetOptionSelected() const { DCHECK(HasOptionSelected()); return option_selected_.value(); }
  void SetOptionSelected(bool value) { option_selected_ = value; }

  // `Node`'s id, corresponds to DOM.Node.backendNodeId.
  int GetBackendNodeId() const { return backend_node_id_; }
  void SetBackendNodeId(int value) { backend_node_id_ = value; }

  // The indexes of the node's child nodes in the `domNodes` array returned by `getSnapshot`, if
  // any.
  bool HasChildNodeIndexes() const { return !!child_node_indexes_; }
  const std::vector<int>* GetChildNodeIndexes() const { DCHECK(HasChildNodeIndexes()); return &child_node_indexes_.value(); }
  void SetChildNodeIndexes(std::vector<int> value) { child_node_indexes_ = std::move(value); }

  // Attributes of an `Element` node.
  bool HasAttributes() const { return !!attributes_; }
  const std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>>* GetAttributes() const { DCHECK(HasAttributes()); return &attributes_.value(); }
  void SetAttributes(std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>> value) { attributes_ = std::move(value); }

  // Indexes of pseudo elements associated with this node in the `domNodes` array returned by
  // `getSnapshot`, if any.
  bool HasPseudoElementIndexes() const { return !!pseudo_element_indexes_; }
  const std::vector<int>* GetPseudoElementIndexes() const { DCHECK(HasPseudoElementIndexes()); return &pseudo_element_indexes_.value(); }
  void SetPseudoElementIndexes(std::vector<int> value) { pseudo_element_indexes_ = std::move(value); }

  // The index of the node's related layout tree node in the `layoutTreeNodes` array returned by
  // `getSnapshot`, if any.
  bool HasLayoutNodeIndex() const { return !!layout_node_index_; }
  int GetLayoutNodeIndex() const { DCHECK(HasLayoutNodeIndex()); return layout_node_index_.value(); }
  void SetLayoutNodeIndex(int value) { layout_node_index_ = value; }

  // Document URL that `Document` or `FrameOwner` node points to.
  bool HasDocumentURL() const { return !!documenturl_; }
  std::string GetDocumentURL() const { DCHECK(HasDocumentURL()); return documenturl_.value(); }
  void SetDocumentURL(const std::string& value) { documenturl_ = value; }

  // Base URL that `Document` or `FrameOwner` node uses for URL completion.
  bool HasBaseURL() const { return !!baseurl_; }
  std::string GetBaseURL() const { DCHECK(HasBaseURL()); return baseurl_.value(); }
  void SetBaseURL(const std::string& value) { baseurl_ = value; }

  // Only set for documents, contains the document's content language.
  bool HasContentLanguage() const { return !!content_language_; }
  std::string GetContentLanguage() const { DCHECK(HasContentLanguage()); return content_language_.value(); }
  void SetContentLanguage(const std::string& value) { content_language_ = value; }

  // Only set for documents, contains the document's character set encoding.
  bool HasDocumentEncoding() const { return !!document_encoding_; }
  std::string GetDocumentEncoding() const { DCHECK(HasDocumentEncoding()); return document_encoding_.value(); }
  void SetDocumentEncoding(const std::string& value) { document_encoding_ = value; }

  // `DocumentType` node's publicId.
  bool HasPublicId() const { return !!public_id_; }
  std::string GetPublicId() const { DCHECK(HasPublicId()); return public_id_.value(); }
  void SetPublicId(const std::string& value) { public_id_ = value; }

  // `DocumentType` node's systemId.
  bool HasSystemId() const { return !!system_id_; }
  std::string GetSystemId() const { DCHECK(HasSystemId()); return system_id_.value(); }
  void SetSystemId(const std::string& value) { system_id_ = value; }

  // Frame ID for frame owner elements and also for the document node.
  bool HasFrameId() const { return !!frame_id_; }
  std::string GetFrameId() const { DCHECK(HasFrameId()); return frame_id_.value(); }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  // The index of a frame owner element's content document in the `domNodes` array returned by
  // `getSnapshot`, if any.
  bool HasContentDocumentIndex() const { return !!content_document_index_; }
  int GetContentDocumentIndex() const { DCHECK(HasContentDocumentIndex()); return content_document_index_.value(); }
  void SetContentDocumentIndex(int value) { content_document_index_ = value; }

  // Index of the imported document's node of a link element in the `domNodes` array returned by
  // `getSnapshot`, if any.
  bool HasImportedDocumentIndex() const { return !!imported_document_index_; }
  int GetImportedDocumentIndex() const { DCHECK(HasImportedDocumentIndex()); return imported_document_index_.value(); }
  void SetImportedDocumentIndex(int value) { imported_document_index_ = value; }

  // Index of the content node of a template element in the `domNodes` array returned by
  // `getSnapshot`.
  bool HasTemplateContentIndex() const { return !!template_content_index_; }
  int GetTemplateContentIndex() const { DCHECK(HasTemplateContentIndex()); return template_content_index_.value(); }
  void SetTemplateContentIndex(int value) { template_content_index_ = value; }

  // Type of a pseudo element node.
  bool HasPseudoType() const { return !!pseudo_type_; }
  ::headless::dom::PseudoType GetPseudoType() const { DCHECK(HasPseudoType()); return pseudo_type_.value(); }
  void SetPseudoType(::headless::dom::PseudoType value) { pseudo_type_ = value; }

  // Shadow root type.
  bool HasShadowRootType() const { return !!shadow_root_type_; }
  ::headless::dom::ShadowRootType GetShadowRootType() const { DCHECK(HasShadowRootType()); return shadow_root_type_.value(); }
  void SetShadowRootType(::headless::dom::ShadowRootType value) { shadow_root_type_ = value; }

  // Whether this DOM node responds to mouse clicks. This includes nodes that have had click
  // event listeners attached via JavaScript as well as anchor tags that naturally navigate when
  // clicked.
  bool HasIsClickable() const { return !!is_clickable_; }
  bool GetIsClickable() const { DCHECK(HasIsClickable()); return is_clickable_.value(); }
  void SetIsClickable(bool value) { is_clickable_ = value; }

  // Details of the node's event listeners, if any.
  bool HasEventListeners() const { return !!event_listeners_; }
  const std::vector<std::unique_ptr<::headless::dom_debugger::EventListener>>* GetEventListeners() const { DCHECK(HasEventListeners()); return &event_listeners_.value(); }
  void SetEventListeners(std::vector<std::unique_ptr<::headless::dom_debugger::EventListener>> value) { event_listeners_ = std::move(value); }

  // The selected url for nodes with a srcset attribute.
  bool HasCurrentSourceURL() const { return !!current_sourceurl_; }
  std::string GetCurrentSourceURL() const { DCHECK(HasCurrentSourceURL()); return current_sourceurl_.value(); }
  void SetCurrentSourceURL(const std::string& value) { current_sourceurl_ = value; }

  // The url of the script (if any) that generates this node.
  bool HasOriginURL() const { return !!originurl_; }
  std::string GetOriginURL() const { DCHECK(HasOriginURL()); return originurl_.value(); }
  void SetOriginURL(const std::string& value) { originurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DOMNode> Clone() const;

  template<int STATE>
  class DOMNodeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeTypeSet = 1 << 1,
    kNodeNameSet = 1 << 2,
    kNodeValueSet = 1 << 3,
    kBackendNodeIdSet = 1 << 4,
      kAllRequiredFieldsSet = (kNodeTypeSet | kNodeNameSet | kNodeValueSet | kBackendNodeIdSet | 0)
    };

    DOMNodeBuilder<STATE | kNodeTypeSet>& SetNodeType(int value) {
      static_assert(!(STATE & kNodeTypeSet), "property nodeType should not have already been set");
      result_->SetNodeType(value);
      return CastState<kNodeTypeSet>();
    }

    DOMNodeBuilder<STATE | kNodeNameSet>& SetNodeName(const std::string& value) {
      static_assert(!(STATE & kNodeNameSet), "property nodeName should not have already been set");
      result_->SetNodeName(value);
      return CastState<kNodeNameSet>();
    }

    DOMNodeBuilder<STATE | kNodeValueSet>& SetNodeValue(const std::string& value) {
      static_assert(!(STATE & kNodeValueSet), "property nodeValue should not have already been set");
      result_->SetNodeValue(value);
      return CastState<kNodeValueSet>();
    }

    DOMNodeBuilder<STATE>& SetTextValue(const std::string& value) {
      result_->SetTextValue(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetInputValue(const std::string& value) {
      result_->SetInputValue(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetInputChecked(bool value) {
      result_->SetInputChecked(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetOptionSelected(bool value) {
      result_->SetOptionSelected(value);
      return *this;
    }

    DOMNodeBuilder<STATE | kBackendNodeIdSet>& SetBackendNodeId(int value) {
      static_assert(!(STATE & kBackendNodeIdSet), "property backendNodeId should not have already been set");
      result_->SetBackendNodeId(value);
      return CastState<kBackendNodeIdSet>();
    }

    DOMNodeBuilder<STATE>& SetChildNodeIndexes(std::vector<int> value) {
      result_->SetChildNodeIndexes(std::move(value));
      return *this;
    }

    DOMNodeBuilder<STATE>& SetAttributes(std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>> value) {
      result_->SetAttributes(std::move(value));
      return *this;
    }

    DOMNodeBuilder<STATE>& SetPseudoElementIndexes(std::vector<int> value) {
      result_->SetPseudoElementIndexes(std::move(value));
      return *this;
    }

    DOMNodeBuilder<STATE>& SetLayoutNodeIndex(int value) {
      result_->SetLayoutNodeIndex(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetDocumentURL(const std::string& value) {
      result_->SetDocumentURL(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetBaseURL(const std::string& value) {
      result_->SetBaseURL(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetContentLanguage(const std::string& value) {
      result_->SetContentLanguage(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetDocumentEncoding(const std::string& value) {
      result_->SetDocumentEncoding(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetPublicId(const std::string& value) {
      result_->SetPublicId(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetSystemId(const std::string& value) {
      result_->SetSystemId(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetFrameId(const std::string& value) {
      result_->SetFrameId(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetContentDocumentIndex(int value) {
      result_->SetContentDocumentIndex(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetImportedDocumentIndex(int value) {
      result_->SetImportedDocumentIndex(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetTemplateContentIndex(int value) {
      result_->SetTemplateContentIndex(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetPseudoType(::headless::dom::PseudoType value) {
      result_->SetPseudoType(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetShadowRootType(::headless::dom::ShadowRootType value) {
      result_->SetShadowRootType(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetIsClickable(bool value) {
      result_->SetIsClickable(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetEventListeners(std::vector<std::unique_ptr<::headless::dom_debugger::EventListener>> value) {
      result_->SetEventListeners(std::move(value));
      return *this;
    }

    DOMNodeBuilder<STATE>& SetCurrentSourceURL(const std::string& value) {
      result_->SetCurrentSourceURL(value);
      return *this;
    }

    DOMNodeBuilder<STATE>& SetOriginURL(const std::string& value) {
      result_->SetOriginURL(value);
      return *this;
    }

    std::unique_ptr<DOMNode> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DOMNode;
    DOMNodeBuilder() : result_(new DOMNode()) { }

    template<int STEP> DOMNodeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DOMNodeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DOMNode> result_;
  };

  static DOMNodeBuilder<0> Builder() {
    return DOMNodeBuilder<0>();
  }

 private:
  DOMNode() { }

  int node_type_;
  std::string node_name_;
  std::string node_value_;
  base::Optional<std::string> text_value_;
  base::Optional<std::string> input_value_;
  base::Optional<bool> input_checked_;
  base::Optional<bool> option_selected_;
  int backend_node_id_;
  base::Optional<std::vector<int>> child_node_indexes_;
  base::Optional<std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>>> attributes_;
  base::Optional<std::vector<int>> pseudo_element_indexes_;
  base::Optional<int> layout_node_index_;
  base::Optional<std::string> documenturl_;
  base::Optional<std::string> baseurl_;
  base::Optional<std::string> content_language_;
  base::Optional<std::string> document_encoding_;
  base::Optional<std::string> public_id_;
  base::Optional<std::string> system_id_;
  base::Optional<std::string> frame_id_;
  base::Optional<int> content_document_index_;
  base::Optional<int> imported_document_index_;
  base::Optional<int> template_content_index_;
  base::Optional<::headless::dom::PseudoType> pseudo_type_;
  base::Optional<::headless::dom::ShadowRootType> shadow_root_type_;
  base::Optional<bool> is_clickable_;
  base::Optional<std::vector<std::unique_ptr<::headless::dom_debugger::EventListener>>> event_listeners_;
  base::Optional<std::string> current_sourceurl_;
  base::Optional<std::string> originurl_;

  DISALLOW_COPY_AND_ASSIGN(DOMNode);
};


// Details of post layout rendered text positions. The exact layout should not be regarded as
// stable and may change between versions.
class HEADLESS_EXPORT InlineTextBox {
 public:
  static std::unique_ptr<InlineTextBox> Parse(const base::Value& value, ErrorReporter* errors);
  ~InlineTextBox() { }

  // The absolute position bounding box.
  const ::headless::dom::Rect* GetBoundingBox() const { return bounding_box_.get(); }
  void SetBoundingBox(std::unique_ptr<::headless::dom::Rect> value) { bounding_box_ = std::move(value); }

  // The starting index in characters, for this post layout textbox substring. Characters that
  // would be represented as a surrogate pair in UTF-16 have length 2.
  int GetStartCharacterIndex() const { return start_character_index_; }
  void SetStartCharacterIndex(int value) { start_character_index_ = value; }

  // The number of characters in this post layout textbox substring. Characters that would be
  // represented as a surrogate pair in UTF-16 have length 2.
  int GetNumCharacters() const { return num_characters_; }
  void SetNumCharacters(int value) { num_characters_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InlineTextBox> Clone() const;

  template<int STATE>
  class InlineTextBoxBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBoundingBoxSet = 1 << 1,
    kStartCharacterIndexSet = 1 << 2,
    kNumCharactersSet = 1 << 3,
      kAllRequiredFieldsSet = (kBoundingBoxSet | kStartCharacterIndexSet | kNumCharactersSet | 0)
    };

    InlineTextBoxBuilder<STATE | kBoundingBoxSet>& SetBoundingBox(std::unique_ptr<::headless::dom::Rect> value) {
      static_assert(!(STATE & kBoundingBoxSet), "property boundingBox should not have already been set");
      result_->SetBoundingBox(std::move(value));
      return CastState<kBoundingBoxSet>();
    }

    InlineTextBoxBuilder<STATE | kStartCharacterIndexSet>& SetStartCharacterIndex(int value) {
      static_assert(!(STATE & kStartCharacterIndexSet), "property startCharacterIndex should not have already been set");
      result_->SetStartCharacterIndex(value);
      return CastState<kStartCharacterIndexSet>();
    }

    InlineTextBoxBuilder<STATE | kNumCharactersSet>& SetNumCharacters(int value) {
      static_assert(!(STATE & kNumCharactersSet), "property numCharacters should not have already been set");
      result_->SetNumCharacters(value);
      return CastState<kNumCharactersSet>();
    }

    std::unique_ptr<InlineTextBox> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InlineTextBox;
    InlineTextBoxBuilder() : result_(new InlineTextBox()) { }

    template<int STEP> InlineTextBoxBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InlineTextBoxBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InlineTextBox> result_;
  };

  static InlineTextBoxBuilder<0> Builder() {
    return InlineTextBoxBuilder<0>();
  }

 private:
  InlineTextBox() { }

  std::unique_ptr<::headless::dom::Rect> bounding_box_;
  int start_character_index_;
  int num_characters_;

  DISALLOW_COPY_AND_ASSIGN(InlineTextBox);
};


// Details of an element in the DOM tree with a LayoutObject.
class HEADLESS_EXPORT LayoutTreeNode {
 public:
  static std::unique_ptr<LayoutTreeNode> Parse(const base::Value& value, ErrorReporter* errors);
  ~LayoutTreeNode() { }

  // The index of the related DOM node in the `domNodes` array returned by `getSnapshot`.
  int GetDomNodeIndex() const { return dom_node_index_; }
  void SetDomNodeIndex(int value) { dom_node_index_ = value; }

  // The absolute position bounding box.
  const ::headless::dom::Rect* GetBoundingBox() const { return bounding_box_.get(); }
  void SetBoundingBox(std::unique_ptr<::headless::dom::Rect> value) { bounding_box_ = std::move(value); }

  // Contents of the LayoutText, if any.
  bool HasLayoutText() const { return !!layout_text_; }
  std::string GetLayoutText() const { DCHECK(HasLayoutText()); return layout_text_.value(); }
  void SetLayoutText(const std::string& value) { layout_text_ = value; }

  // The post-layout inline text nodes, if any.
  bool HasInlineTextNodes() const { return !!inline_text_nodes_; }
  const std::vector<std::unique_ptr<::headless::dom_snapshot::InlineTextBox>>* GetInlineTextNodes() const { DCHECK(HasInlineTextNodes()); return &inline_text_nodes_.value(); }
  void SetInlineTextNodes(std::vector<std::unique_ptr<::headless::dom_snapshot::InlineTextBox>> value) { inline_text_nodes_ = std::move(value); }

  // Index into the `computedStyles` array returned by `getSnapshot`.
  bool HasStyleIndex() const { return !!style_index_; }
  int GetStyleIndex() const { DCHECK(HasStyleIndex()); return style_index_.value(); }
  void SetStyleIndex(int value) { style_index_ = value; }

  // Global paint order index, which is determined by the stacking order of the nodes. Nodes
  // that are painted together will have the same index. Only provided if includePaintOrder in
  // getSnapshot was true.
  bool HasPaintOrder() const { return !!paint_order_; }
  int GetPaintOrder() const { DCHECK(HasPaintOrder()); return paint_order_.value(); }
  void SetPaintOrder(int value) { paint_order_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<LayoutTreeNode> Clone() const;

  template<int STATE>
  class LayoutTreeNodeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDomNodeIndexSet = 1 << 1,
    kBoundingBoxSet = 1 << 2,
      kAllRequiredFieldsSet = (kDomNodeIndexSet | kBoundingBoxSet | 0)
    };

    LayoutTreeNodeBuilder<STATE | kDomNodeIndexSet>& SetDomNodeIndex(int value) {
      static_assert(!(STATE & kDomNodeIndexSet), "property domNodeIndex should not have already been set");
      result_->SetDomNodeIndex(value);
      return CastState<kDomNodeIndexSet>();
    }

    LayoutTreeNodeBuilder<STATE | kBoundingBoxSet>& SetBoundingBox(std::unique_ptr<::headless::dom::Rect> value) {
      static_assert(!(STATE & kBoundingBoxSet), "property boundingBox should not have already been set");
      result_->SetBoundingBox(std::move(value));
      return CastState<kBoundingBoxSet>();
    }

    LayoutTreeNodeBuilder<STATE>& SetLayoutText(const std::string& value) {
      result_->SetLayoutText(value);
      return *this;
    }

    LayoutTreeNodeBuilder<STATE>& SetInlineTextNodes(std::vector<std::unique_ptr<::headless::dom_snapshot::InlineTextBox>> value) {
      result_->SetInlineTextNodes(std::move(value));
      return *this;
    }

    LayoutTreeNodeBuilder<STATE>& SetStyleIndex(int value) {
      result_->SetStyleIndex(value);
      return *this;
    }

    LayoutTreeNodeBuilder<STATE>& SetPaintOrder(int value) {
      result_->SetPaintOrder(value);
      return *this;
    }

    std::unique_ptr<LayoutTreeNode> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class LayoutTreeNode;
    LayoutTreeNodeBuilder() : result_(new LayoutTreeNode()) { }

    template<int STEP> LayoutTreeNodeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<LayoutTreeNodeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<LayoutTreeNode> result_;
  };

  static LayoutTreeNodeBuilder<0> Builder() {
    return LayoutTreeNodeBuilder<0>();
  }

 private:
  LayoutTreeNode() { }

  int dom_node_index_;
  std::unique_ptr<::headless::dom::Rect> bounding_box_;
  base::Optional<std::string> layout_text_;
  base::Optional<std::vector<std::unique_ptr<::headless::dom_snapshot::InlineTextBox>>> inline_text_nodes_;
  base::Optional<int> style_index_;
  base::Optional<int> paint_order_;

  DISALLOW_COPY_AND_ASSIGN(LayoutTreeNode);
};


// A subset of the full ComputedStyle as defined by the request whitelist.
class HEADLESS_EXPORT ComputedStyle {
 public:
  static std::unique_ptr<ComputedStyle> Parse(const base::Value& value, ErrorReporter* errors);
  ~ComputedStyle() { }

  // Name/value pairs of computed style properties.
  const std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>>* GetProperties() const { return &properties_; }
  void SetProperties(std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>> value) { properties_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ComputedStyle> Clone() const;

  template<int STATE>
  class ComputedStyleBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPropertiesSet = 1 << 1,
      kAllRequiredFieldsSet = (kPropertiesSet | 0)
    };

    ComputedStyleBuilder<STATE | kPropertiesSet>& SetProperties(std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>> value) {
      static_assert(!(STATE & kPropertiesSet), "property properties should not have already been set");
      result_->SetProperties(std::move(value));
      return CastState<kPropertiesSet>();
    }

    std::unique_ptr<ComputedStyle> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ComputedStyle;
    ComputedStyleBuilder() : result_(new ComputedStyle()) { }

    template<int STEP> ComputedStyleBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ComputedStyleBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ComputedStyle> result_;
  };

  static ComputedStyleBuilder<0> Builder() {
    return ComputedStyleBuilder<0>();
  }

 private:
  ComputedStyle() { }

  std::vector<std::unique_ptr<::headless::dom_snapshot::NameValue>> properties_;

  DISALLOW_COPY_AND_ASSIGN(ComputedStyle);
};


// A name/value pair.
class HEADLESS_EXPORT NameValue {
 public:
  static std::unique_ptr<NameValue> Parse(const base::Value& value, ErrorReporter* errors);
  ~NameValue() { }

  // Attribute/property name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Attribute/property value.
  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<NameValue> Clone() const;

  template<int STATE>
  class NameValueBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kValueSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kValueSet | 0)
    };

    NameValueBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    NameValueBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    std::unique_ptr<NameValue> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class NameValue;
    NameValueBuilder() : result_(new NameValue()) { }

    template<int STEP> NameValueBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<NameValueBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<NameValue> result_;
  };

  static NameValueBuilder<0> Builder() {
    return NameValueBuilder<0>();
  }

 private:
  NameValue() { }

  std::string name_;
  std::string value_;

  DISALLOW_COPY_AND_ASSIGN(NameValue);
};


// Parameters for the Disable command.
class HEADLESS_EXPORT DisableParams {
 public:
  static std::unique_ptr<DisableParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~DisableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableParams> Clone() const;

  template<int STATE>
  class DisableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableParams;
    DisableParamsBuilder() : result_(new DisableParams()) { }

    template<int STEP> DisableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableParams> result_;
  };

  static DisableParamsBuilder<0> Builder() {
    return DisableParamsBuilder<0>();
  }

 private:
  DisableParams() { }


  DISALLOW_COPY_AND_ASSIGN(DisableParams);
};


// Result for the Disable command.
class HEADLESS_EXPORT DisableResult {
 public:
  static std::unique_ptr<DisableResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~DisableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableResult> Clone() const;

  template<int STATE>
  class DisableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableResult;
    DisableResultBuilder() : result_(new DisableResult()) { }

    template<int STEP> DisableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableResult> result_;
  };

  static DisableResultBuilder<0> Builder() {
    return DisableResultBuilder<0>();
  }

 private:
  DisableResult() { }


  DISALLOW_COPY_AND_ASSIGN(DisableResult);
};


// Parameters for the Enable command.
class HEADLESS_EXPORT EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~EnableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableParams;
    EnableParamsBuilder() : result_(new EnableParams()) { }

    template<int STEP> EnableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableParams> result_;
  };

  static EnableParamsBuilder<0> Builder() {
    return EnableParamsBuilder<0>();
  }

 private:
  EnableParams() { }


  DISALLOW_COPY_AND_ASSIGN(EnableParams);
};


// Result for the Enable command.
class HEADLESS_EXPORT EnableResult {
 public:
  static std::unique_ptr<EnableResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~EnableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableResult> Clone() const;

  template<int STATE>
  class EnableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableResult;
    EnableResultBuilder() : result_(new EnableResult()) { }

    template<int STEP> EnableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableResult> result_;
  };

  static EnableResultBuilder<0> Builder() {
    return EnableResultBuilder<0>();
  }

 private:
  EnableResult() { }


  DISALLOW_COPY_AND_ASSIGN(EnableResult);
};


// Parameters for the GetSnapshot command.
class HEADLESS_EXPORT GetSnapshotParams {
 public:
  static std::unique_ptr<GetSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetSnapshotParams() { }

  // Whitelist of computed styles to return.
  const std::vector<std::string>* GetComputedStyleWhitelist() const { return &computed_style_whitelist_; }
  void SetComputedStyleWhitelist(std::vector<std::string> value) { computed_style_whitelist_ = std::move(value); }

  // Whether or not to retrieve details of DOM listeners (default false).
  bool HasIncludeEventListeners() const { return !!include_event_listeners_; }
  bool GetIncludeEventListeners() const { DCHECK(HasIncludeEventListeners()); return include_event_listeners_.value(); }
  void SetIncludeEventListeners(bool value) { include_event_listeners_ = value; }

  // Whether to determine and include the paint order index of LayoutTreeNodes (default false).
  bool HasIncludePaintOrder() const { return !!include_paint_order_; }
  bool GetIncludePaintOrder() const { DCHECK(HasIncludePaintOrder()); return include_paint_order_.value(); }
  void SetIncludePaintOrder(bool value) { include_paint_order_ = value; }

  // Whether to include UA shadow tree in the snapshot (default false).
  bool HasIncludeUserAgentShadowTree() const { return !!include_user_agent_shadow_tree_; }
  bool GetIncludeUserAgentShadowTree() const { DCHECK(HasIncludeUserAgentShadowTree()); return include_user_agent_shadow_tree_.value(); }
  void SetIncludeUserAgentShadowTree(bool value) { include_user_agent_shadow_tree_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetSnapshotParams> Clone() const;

  template<int STATE>
  class GetSnapshotParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kComputedStyleWhitelistSet = 1 << 1,
      kAllRequiredFieldsSet = (kComputedStyleWhitelistSet | 0)
    };

    GetSnapshotParamsBuilder<STATE | kComputedStyleWhitelistSet>& SetComputedStyleWhitelist(std::vector<std::string> value) {
      static_assert(!(STATE & kComputedStyleWhitelistSet), "property computedStyleWhitelist should not have already been set");
      result_->SetComputedStyleWhitelist(std::move(value));
      return CastState<kComputedStyleWhitelistSet>();
    }

    GetSnapshotParamsBuilder<STATE>& SetIncludeEventListeners(bool value) {
      result_->SetIncludeEventListeners(value);
      return *this;
    }

    GetSnapshotParamsBuilder<STATE>& SetIncludePaintOrder(bool value) {
      result_->SetIncludePaintOrder(value);
      return *this;
    }

    GetSnapshotParamsBuilder<STATE>& SetIncludeUserAgentShadowTree(bool value) {
      result_->SetIncludeUserAgentShadowTree(value);
      return *this;
    }

    std::unique_ptr<GetSnapshotParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetSnapshotParams;
    GetSnapshotParamsBuilder() : result_(new GetSnapshotParams()) { }

    template<int STEP> GetSnapshotParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetSnapshotParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetSnapshotParams> result_;
  };

  static GetSnapshotParamsBuilder<0> Builder() {
    return GetSnapshotParamsBuilder<0>();
  }

 private:
  GetSnapshotParams() { }

  std::vector<std::string> computed_style_whitelist_;
  base::Optional<bool> include_event_listeners_;
  base::Optional<bool> include_paint_order_;
  base::Optional<bool> include_user_agent_shadow_tree_;

  DISALLOW_COPY_AND_ASSIGN(GetSnapshotParams);
};


// Result for the GetSnapshot command.
class HEADLESS_EXPORT GetSnapshotResult {
 public:
  static std::unique_ptr<GetSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetSnapshotResult() { }

  // The nodes in the DOM tree. The DOMNode at index 0 corresponds to the root document.
  const std::vector<std::unique_ptr<::headless::dom_snapshot::DOMNode>>* GetDomNodes() const { return &dom_nodes_; }
  void SetDomNodes(std::vector<std::unique_ptr<::headless::dom_snapshot::DOMNode>> value) { dom_nodes_ = std::move(value); }

  // The nodes in the layout tree.
  const std::vector<std::unique_ptr<::headless::dom_snapshot::LayoutTreeNode>>* GetLayoutTreeNodes() const { return &layout_tree_nodes_; }
  void SetLayoutTreeNodes(std::vector<std::unique_ptr<::headless::dom_snapshot::LayoutTreeNode>> value) { layout_tree_nodes_ = std::move(value); }

  // Whitelisted ComputedStyle properties for each node in the layout tree.
  const std::vector<std::unique_ptr<::headless::dom_snapshot::ComputedStyle>>* GetComputedStyles() const { return &computed_styles_; }
  void SetComputedStyles(std::vector<std::unique_ptr<::headless::dom_snapshot::ComputedStyle>> value) { computed_styles_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetSnapshotResult> Clone() const;

  template<int STATE>
  class GetSnapshotResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDomNodesSet = 1 << 1,
    kLayoutTreeNodesSet = 1 << 2,
    kComputedStylesSet = 1 << 3,
      kAllRequiredFieldsSet = (kDomNodesSet | kLayoutTreeNodesSet | kComputedStylesSet | 0)
    };

    GetSnapshotResultBuilder<STATE | kDomNodesSet>& SetDomNodes(std::vector<std::unique_ptr<::headless::dom_snapshot::DOMNode>> value) {
      static_assert(!(STATE & kDomNodesSet), "property domNodes should not have already been set");
      result_->SetDomNodes(std::move(value));
      return CastState<kDomNodesSet>();
    }

    GetSnapshotResultBuilder<STATE | kLayoutTreeNodesSet>& SetLayoutTreeNodes(std::vector<std::unique_ptr<::headless::dom_snapshot::LayoutTreeNode>> value) {
      static_assert(!(STATE & kLayoutTreeNodesSet), "property layoutTreeNodes should not have already been set");
      result_->SetLayoutTreeNodes(std::move(value));
      return CastState<kLayoutTreeNodesSet>();
    }

    GetSnapshotResultBuilder<STATE | kComputedStylesSet>& SetComputedStyles(std::vector<std::unique_ptr<::headless::dom_snapshot::ComputedStyle>> value) {
      static_assert(!(STATE & kComputedStylesSet), "property computedStyles should not have already been set");
      result_->SetComputedStyles(std::move(value));
      return CastState<kComputedStylesSet>();
    }

    std::unique_ptr<GetSnapshotResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetSnapshotResult;
    GetSnapshotResultBuilder() : result_(new GetSnapshotResult()) { }

    template<int STEP> GetSnapshotResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetSnapshotResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetSnapshotResult> result_;
  };

  static GetSnapshotResultBuilder<0> Builder() {
    return GetSnapshotResultBuilder<0>();
  }

 private:
  GetSnapshotResult() { }

  std::vector<std::unique_ptr<::headless::dom_snapshot::DOMNode>> dom_nodes_;
  std::vector<std::unique_ptr<::headless::dom_snapshot::LayoutTreeNode>> layout_tree_nodes_;
  std::vector<std::unique_ptr<::headless::dom_snapshot::ComputedStyle>> computed_styles_;

  DISALLOW_COPY_AND_ASSIGN(GetSnapshotResult);
};


}  // namespace dom_snapshot

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_DOM_SNAPSHOT_H_
