// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_OVERLAY_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_OVERLAY_H_

#include "base/optional.h"
#include "base/values.h"
#include "headless/public/devtools/internal/types_forward_declarations_dom.h"
#include "headless/public/devtools/internal/types_forward_declarations_debugger.h"
#include "headless/public/devtools/internal/types_forward_declarations_emulation.h"
#include "headless/public/devtools/internal/types_forward_declarations_io.h"
#include "headless/public/devtools/internal/types_forward_declarations_network.h"
#include "headless/public/devtools/internal/types_forward_declarations_overlay.h"
#include "headless/public/devtools/internal/types_forward_declarations_page.h"
#include "headless/public/devtools/internal/types_forward_declarations_runtime.h"
#include "headless/public/devtools/internal/types_forward_declarations_security.h"
#include "headless/public/headless_export.h"

namespace headless {

class ErrorReporter;

namespace overlay {

// Configuration data for the highlighting of page elements.
class HEADLESS_EXPORT HighlightConfig {
 public:
  static std::unique_ptr<HighlightConfig> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightConfig() { }

  // Whether the node info tooltip should be shown (default: false).
  bool HasShowInfo() const { return !!show_info_; }
  bool GetShowInfo() const { DCHECK(HasShowInfo()); return show_info_.value(); }
  void SetShowInfo(bool value) { show_info_ = value; }

  // Whether the rulers should be shown (default: false).
  bool HasShowRulers() const { return !!show_rulers_; }
  bool GetShowRulers() const { DCHECK(HasShowRulers()); return show_rulers_.value(); }
  void SetShowRulers(bool value) { show_rulers_ = value; }

  // Whether the extension lines from node to the rulers should be shown (default: false).
  bool HasShowExtensionLines() const { return !!show_extension_lines_; }
  bool GetShowExtensionLines() const { DCHECK(HasShowExtensionLines()); return show_extension_lines_.value(); }
  void SetShowExtensionLines(bool value) { show_extension_lines_ = value; }

  bool HasDisplayAsMaterial() const { return !!display_as_material_; }
  bool GetDisplayAsMaterial() const { DCHECK(HasDisplayAsMaterial()); return display_as_material_.value(); }
  void SetDisplayAsMaterial(bool value) { display_as_material_ = value; }

  // The content box highlight fill color (default: transparent).
  bool HasContentColor() const { return !!content_color_; }
  const ::headless::dom::RGBA* GetContentColor() const { DCHECK(HasContentColor()); return content_color_.value().get(); }
  void SetContentColor(std::unique_ptr<::headless::dom::RGBA> value) { content_color_ = std::move(value); }

  // The padding highlight fill color (default: transparent).
  bool HasPaddingColor() const { return !!padding_color_; }
  const ::headless::dom::RGBA* GetPaddingColor() const { DCHECK(HasPaddingColor()); return padding_color_.value().get(); }
  void SetPaddingColor(std::unique_ptr<::headless::dom::RGBA> value) { padding_color_ = std::move(value); }

  // The border highlight fill color (default: transparent).
  bool HasBorderColor() const { return !!border_color_; }
  const ::headless::dom::RGBA* GetBorderColor() const { DCHECK(HasBorderColor()); return border_color_.value().get(); }
  void SetBorderColor(std::unique_ptr<::headless::dom::RGBA> value) { border_color_ = std::move(value); }

  // The margin highlight fill color (default: transparent).
  bool HasMarginColor() const { return !!margin_color_; }
  const ::headless::dom::RGBA* GetMarginColor() const { DCHECK(HasMarginColor()); return margin_color_.value().get(); }
  void SetMarginColor(std::unique_ptr<::headless::dom::RGBA> value) { margin_color_ = std::move(value); }

  // The event target element highlight fill color (default: transparent).
  bool HasEventTargetColor() const { return !!event_target_color_; }
  const ::headless::dom::RGBA* GetEventTargetColor() const { DCHECK(HasEventTargetColor()); return event_target_color_.value().get(); }
  void SetEventTargetColor(std::unique_ptr<::headless::dom::RGBA> value) { event_target_color_ = std::move(value); }

  // The shape outside fill color (default: transparent).
  bool HasShapeColor() const { return !!shape_color_; }
  const ::headless::dom::RGBA* GetShapeColor() const { DCHECK(HasShapeColor()); return shape_color_.value().get(); }
  void SetShapeColor(std::unique_ptr<::headless::dom::RGBA> value) { shape_color_ = std::move(value); }

  // The shape margin fill color (default: transparent).
  bool HasShapeMarginColor() const { return !!shape_margin_color_; }
  const ::headless::dom::RGBA* GetShapeMarginColor() const { DCHECK(HasShapeMarginColor()); return shape_margin_color_.value().get(); }
  void SetShapeMarginColor(std::unique_ptr<::headless::dom::RGBA> value) { shape_margin_color_ = std::move(value); }

  // Selectors to highlight relevant nodes.
  bool HasSelectorList() const { return !!selector_list_; }
  std::string GetSelectorList() const { DCHECK(HasSelectorList()); return selector_list_.value(); }
  void SetSelectorList(const std::string& value) { selector_list_ = value; }

  // The grid layout color (default: transparent).
  bool HasCssGridColor() const { return !!css_grid_color_; }
  const ::headless::dom::RGBA* GetCssGridColor() const { DCHECK(HasCssGridColor()); return css_grid_color_.value().get(); }
  void SetCssGridColor(std::unique_ptr<::headless::dom::RGBA> value) { css_grid_color_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightConfig> Clone() const;

  template<int STATE>
  class HighlightConfigBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    HighlightConfigBuilder<STATE>& SetShowInfo(bool value) {
      result_->SetShowInfo(value);
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetShowRulers(bool value) {
      result_->SetShowRulers(value);
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetShowExtensionLines(bool value) {
      result_->SetShowExtensionLines(value);
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetDisplayAsMaterial(bool value) {
      result_->SetDisplayAsMaterial(value);
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetContentColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetContentColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetPaddingColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetPaddingColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetBorderColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetBorderColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetMarginColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetMarginColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetEventTargetColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetEventTargetColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetShapeColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetShapeColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetShapeMarginColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetShapeMarginColor(std::move(value));
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetSelectorList(const std::string& value) {
      result_->SetSelectorList(value);
      return *this;
    }

    HighlightConfigBuilder<STATE>& SetCssGridColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetCssGridColor(std::move(value));
      return *this;
    }

    std::unique_ptr<HighlightConfig> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightConfig;
    HighlightConfigBuilder() : result_(new HighlightConfig()) { }

    template<int STEP> HighlightConfigBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightConfigBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightConfig> result_;
  };

  static HighlightConfigBuilder<0> Builder() {
    return HighlightConfigBuilder<0>();
  }

 private:
  HighlightConfig() { }

  base::Optional<bool> show_info_;
  base::Optional<bool> show_rulers_;
  base::Optional<bool> show_extension_lines_;
  base::Optional<bool> display_as_material_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> content_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> padding_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> border_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> margin_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> event_target_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> shape_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> shape_margin_color_;
  base::Optional<std::string> selector_list_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> css_grid_color_;

  DISALLOW_COPY_AND_ASSIGN(HighlightConfig);
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


// Parameters for the GetHighlightObjectForTest command.
class HEADLESS_EXPORT GetHighlightObjectForTestParams {
 public:
  static std::unique_ptr<GetHighlightObjectForTestParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetHighlightObjectForTestParams() { }

  // Id of the node to get highlight object for.
  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHighlightObjectForTestParams> Clone() const;

  template<int STATE>
  class GetHighlightObjectForTestParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetHighlightObjectForTestParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetHighlightObjectForTestParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHighlightObjectForTestParams;
    GetHighlightObjectForTestParamsBuilder() : result_(new GetHighlightObjectForTestParams()) { }

    template<int STEP> GetHighlightObjectForTestParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHighlightObjectForTestParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHighlightObjectForTestParams> result_;
  };

  static GetHighlightObjectForTestParamsBuilder<0> Builder() {
    return GetHighlightObjectForTestParamsBuilder<0>();
  }

 private:
  GetHighlightObjectForTestParams() { }

  int node_id_;

  DISALLOW_COPY_AND_ASSIGN(GetHighlightObjectForTestParams);
};


// Result for the GetHighlightObjectForTest command.
class HEADLESS_EXPORT GetHighlightObjectForTestResult {
 public:
  static std::unique_ptr<GetHighlightObjectForTestResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetHighlightObjectForTestResult() { }

  // Highlight data for the node.
  const base::Value* GetHighlight() const { return highlight_.get(); }
  void SetHighlight(std::unique_ptr<base::Value> value) { highlight_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHighlightObjectForTestResult> Clone() const;

  template<int STATE>
  class GetHighlightObjectForTestResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHighlightSet = 1 << 1,
      kAllRequiredFieldsSet = (kHighlightSet | 0)
    };

    GetHighlightObjectForTestResultBuilder<STATE | kHighlightSet>& SetHighlight(std::unique_ptr<base::Value> value) {
      static_assert(!(STATE & kHighlightSet), "property highlight should not have already been set");
      result_->SetHighlight(std::move(value));
      return CastState<kHighlightSet>();
    }

    std::unique_ptr<GetHighlightObjectForTestResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHighlightObjectForTestResult;
    GetHighlightObjectForTestResultBuilder() : result_(new GetHighlightObjectForTestResult()) { }

    template<int STEP> GetHighlightObjectForTestResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHighlightObjectForTestResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHighlightObjectForTestResult> result_;
  };

  static GetHighlightObjectForTestResultBuilder<0> Builder() {
    return GetHighlightObjectForTestResultBuilder<0>();
  }

 private:
  GetHighlightObjectForTestResult() { }

  std::unique_ptr<base::Value> highlight_;

  DISALLOW_COPY_AND_ASSIGN(GetHighlightObjectForTestResult);
};


// Parameters for the HideHighlight command.
class HEADLESS_EXPORT HideHighlightParams {
 public:
  static std::unique_ptr<HideHighlightParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~HideHighlightParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HideHighlightParams> Clone() const;

  template<int STATE>
  class HideHighlightParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HideHighlightParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HideHighlightParams;
    HideHighlightParamsBuilder() : result_(new HideHighlightParams()) { }

    template<int STEP> HideHighlightParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HideHighlightParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HideHighlightParams> result_;
  };

  static HideHighlightParamsBuilder<0> Builder() {
    return HideHighlightParamsBuilder<0>();
  }

 private:
  HideHighlightParams() { }


  DISALLOW_COPY_AND_ASSIGN(HideHighlightParams);
};


// Result for the HideHighlight command.
class HEADLESS_EXPORT HideHighlightResult {
 public:
  static std::unique_ptr<HideHighlightResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~HideHighlightResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HideHighlightResult> Clone() const;

  template<int STATE>
  class HideHighlightResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HideHighlightResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HideHighlightResult;
    HideHighlightResultBuilder() : result_(new HideHighlightResult()) { }

    template<int STEP> HideHighlightResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HideHighlightResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HideHighlightResult> result_;
  };

  static HideHighlightResultBuilder<0> Builder() {
    return HideHighlightResultBuilder<0>();
  }

 private:
  HideHighlightResult() { }


  DISALLOW_COPY_AND_ASSIGN(HideHighlightResult);
};


// Parameters for the HighlightFrame command.
class HEADLESS_EXPORT HighlightFrameParams {
 public:
  static std::unique_ptr<HighlightFrameParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightFrameParams() { }

  // Identifier of the frame to highlight.
  std::string GetFrameId() const { return frame_id_; }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  // The content box highlight fill color (default: transparent).
  bool HasContentColor() const { return !!content_color_; }
  const ::headless::dom::RGBA* GetContentColor() const { DCHECK(HasContentColor()); return content_color_.value().get(); }
  void SetContentColor(std::unique_ptr<::headless::dom::RGBA> value) { content_color_ = std::move(value); }

  // The content box highlight outline color (default: transparent).
  bool HasContentOutlineColor() const { return !!content_outline_color_; }
  const ::headless::dom::RGBA* GetContentOutlineColor() const { DCHECK(HasContentOutlineColor()); return content_outline_color_.value().get(); }
  void SetContentOutlineColor(std::unique_ptr<::headless::dom::RGBA> value) { content_outline_color_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightFrameParams> Clone() const;

  template<int STATE>
  class HighlightFrameParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFrameIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kFrameIdSet | 0)
    };

    HighlightFrameParamsBuilder<STATE | kFrameIdSet>& SetFrameId(const std::string& value) {
      static_assert(!(STATE & kFrameIdSet), "property frameId should not have already been set");
      result_->SetFrameId(value);
      return CastState<kFrameIdSet>();
    }

    HighlightFrameParamsBuilder<STATE>& SetContentColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetContentColor(std::move(value));
      return *this;
    }

    HighlightFrameParamsBuilder<STATE>& SetContentOutlineColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetContentOutlineColor(std::move(value));
      return *this;
    }

    std::unique_ptr<HighlightFrameParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightFrameParams;
    HighlightFrameParamsBuilder() : result_(new HighlightFrameParams()) { }

    template<int STEP> HighlightFrameParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightFrameParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightFrameParams> result_;
  };

  static HighlightFrameParamsBuilder<0> Builder() {
    return HighlightFrameParamsBuilder<0>();
  }

 private:
  HighlightFrameParams() { }

  std::string frame_id_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> content_color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> content_outline_color_;

  DISALLOW_COPY_AND_ASSIGN(HighlightFrameParams);
};


// Result for the HighlightFrame command.
class HEADLESS_EXPORT HighlightFrameResult {
 public:
  static std::unique_ptr<HighlightFrameResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightFrameResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightFrameResult> Clone() const;

  template<int STATE>
  class HighlightFrameResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HighlightFrameResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightFrameResult;
    HighlightFrameResultBuilder() : result_(new HighlightFrameResult()) { }

    template<int STEP> HighlightFrameResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightFrameResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightFrameResult> result_;
  };

  static HighlightFrameResultBuilder<0> Builder() {
    return HighlightFrameResultBuilder<0>();
  }

 private:
  HighlightFrameResult() { }


  DISALLOW_COPY_AND_ASSIGN(HighlightFrameResult);
};


// Parameters for the HighlightNode command.
class HEADLESS_EXPORT HighlightNodeParams {
 public:
  static std::unique_ptr<HighlightNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightNodeParams() { }

  // A descriptor for the highlight appearance.
  const ::headless::overlay::HighlightConfig* GetHighlightConfig() const { return highlight_config_.get(); }
  void SetHighlightConfig(std::unique_ptr<::headless::overlay::HighlightConfig> value) { highlight_config_ = std::move(value); }

  // Identifier of the node to highlight.
  bool HasNodeId() const { return !!node_id_; }
  int GetNodeId() const { DCHECK(HasNodeId()); return node_id_.value(); }
  void SetNodeId(int value) { node_id_ = value; }

  // Identifier of the backend node to highlight.
  bool HasBackendNodeId() const { return !!backend_node_id_; }
  int GetBackendNodeId() const { DCHECK(HasBackendNodeId()); return backend_node_id_.value(); }
  void SetBackendNodeId(int value) { backend_node_id_ = value; }

  // JavaScript object id of the node to be highlighted.
  bool HasObjectId() const { return !!object_id_; }
  std::string GetObjectId() const { DCHECK(HasObjectId()); return object_id_.value(); }
  void SetObjectId(const std::string& value) { object_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightNodeParams> Clone() const;

  template<int STATE>
  class HighlightNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHighlightConfigSet = 1 << 1,
      kAllRequiredFieldsSet = (kHighlightConfigSet | 0)
    };

    HighlightNodeParamsBuilder<STATE | kHighlightConfigSet>& SetHighlightConfig(std::unique_ptr<::headless::overlay::HighlightConfig> value) {
      static_assert(!(STATE & kHighlightConfigSet), "property highlightConfig should not have already been set");
      result_->SetHighlightConfig(std::move(value));
      return CastState<kHighlightConfigSet>();
    }

    HighlightNodeParamsBuilder<STATE>& SetNodeId(int value) {
      result_->SetNodeId(value);
      return *this;
    }

    HighlightNodeParamsBuilder<STATE>& SetBackendNodeId(int value) {
      result_->SetBackendNodeId(value);
      return *this;
    }

    HighlightNodeParamsBuilder<STATE>& SetObjectId(const std::string& value) {
      result_->SetObjectId(value);
      return *this;
    }

    std::unique_ptr<HighlightNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightNodeParams;
    HighlightNodeParamsBuilder() : result_(new HighlightNodeParams()) { }

    template<int STEP> HighlightNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightNodeParams> result_;
  };

  static HighlightNodeParamsBuilder<0> Builder() {
    return HighlightNodeParamsBuilder<0>();
  }

 private:
  HighlightNodeParams() { }

  std::unique_ptr<::headless::overlay::HighlightConfig> highlight_config_;
  base::Optional<int> node_id_;
  base::Optional<int> backend_node_id_;
  base::Optional<std::string> object_id_;

  DISALLOW_COPY_AND_ASSIGN(HighlightNodeParams);
};


// Result for the HighlightNode command.
class HEADLESS_EXPORT HighlightNodeResult {
 public:
  static std::unique_ptr<HighlightNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightNodeResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightNodeResult> Clone() const;

  template<int STATE>
  class HighlightNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HighlightNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightNodeResult;
    HighlightNodeResultBuilder() : result_(new HighlightNodeResult()) { }

    template<int STEP> HighlightNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightNodeResult> result_;
  };

  static HighlightNodeResultBuilder<0> Builder() {
    return HighlightNodeResultBuilder<0>();
  }

 private:
  HighlightNodeResult() { }


  DISALLOW_COPY_AND_ASSIGN(HighlightNodeResult);
};


// Parameters for the HighlightQuad command.
class HEADLESS_EXPORT HighlightQuadParams {
 public:
  static std::unique_ptr<HighlightQuadParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightQuadParams() { }

  // Quad to highlight
  const std::vector<double>* GetQuad() const { return &quad_; }
  void SetQuad(std::vector<double> value) { quad_ = std::move(value); }

  // The highlight fill color (default: transparent).
  bool HasColor() const { return !!color_; }
  const ::headless::dom::RGBA* GetColor() const { DCHECK(HasColor()); return color_.value().get(); }
  void SetColor(std::unique_ptr<::headless::dom::RGBA> value) { color_ = std::move(value); }

  // The highlight outline color (default: transparent).
  bool HasOutlineColor() const { return !!outline_color_; }
  const ::headless::dom::RGBA* GetOutlineColor() const { DCHECK(HasOutlineColor()); return outline_color_.value().get(); }
  void SetOutlineColor(std::unique_ptr<::headless::dom::RGBA> value) { outline_color_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightQuadParams> Clone() const;

  template<int STATE>
  class HighlightQuadParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kQuadSet = 1 << 1,
      kAllRequiredFieldsSet = (kQuadSet | 0)
    };

    HighlightQuadParamsBuilder<STATE | kQuadSet>& SetQuad(std::vector<double> value) {
      static_assert(!(STATE & kQuadSet), "property quad should not have already been set");
      result_->SetQuad(std::move(value));
      return CastState<kQuadSet>();
    }

    HighlightQuadParamsBuilder<STATE>& SetColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetColor(std::move(value));
      return *this;
    }

    HighlightQuadParamsBuilder<STATE>& SetOutlineColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetOutlineColor(std::move(value));
      return *this;
    }

    std::unique_ptr<HighlightQuadParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightQuadParams;
    HighlightQuadParamsBuilder() : result_(new HighlightQuadParams()) { }

    template<int STEP> HighlightQuadParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightQuadParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightQuadParams> result_;
  };

  static HighlightQuadParamsBuilder<0> Builder() {
    return HighlightQuadParamsBuilder<0>();
  }

 private:
  HighlightQuadParams() { }

  std::vector<double> quad_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> outline_color_;

  DISALLOW_COPY_AND_ASSIGN(HighlightQuadParams);
};


// Result for the HighlightQuad command.
class HEADLESS_EXPORT HighlightQuadResult {
 public:
  static std::unique_ptr<HighlightQuadResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightQuadResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightQuadResult> Clone() const;

  template<int STATE>
  class HighlightQuadResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HighlightQuadResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightQuadResult;
    HighlightQuadResultBuilder() : result_(new HighlightQuadResult()) { }

    template<int STEP> HighlightQuadResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightQuadResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightQuadResult> result_;
  };

  static HighlightQuadResultBuilder<0> Builder() {
    return HighlightQuadResultBuilder<0>();
  }

 private:
  HighlightQuadResult() { }


  DISALLOW_COPY_AND_ASSIGN(HighlightQuadResult);
};


// Parameters for the HighlightRect command.
class HEADLESS_EXPORT HighlightRectParams {
 public:
  static std::unique_ptr<HighlightRectParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightRectParams() { }

  // X coordinate
  int GetX() const { return x_; }
  void SetX(int value) { x_ = value; }

  // Y coordinate
  int GetY() const { return y_; }
  void SetY(int value) { y_ = value; }

  // Rectangle width
  int GetWidth() const { return width_; }
  void SetWidth(int value) { width_ = value; }

  // Rectangle height
  int GetHeight() const { return height_; }
  void SetHeight(int value) { height_ = value; }

  // The highlight fill color (default: transparent).
  bool HasColor() const { return !!color_; }
  const ::headless::dom::RGBA* GetColor() const { DCHECK(HasColor()); return color_.value().get(); }
  void SetColor(std::unique_ptr<::headless::dom::RGBA> value) { color_ = std::move(value); }

  // The highlight outline color (default: transparent).
  bool HasOutlineColor() const { return !!outline_color_; }
  const ::headless::dom::RGBA* GetOutlineColor() const { DCHECK(HasOutlineColor()); return outline_color_.value().get(); }
  void SetOutlineColor(std::unique_ptr<::headless::dom::RGBA> value) { outline_color_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightRectParams> Clone() const;

  template<int STATE>
  class HighlightRectParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kXSet = 1 << 1,
    kYSet = 1 << 2,
    kWidthSet = 1 << 3,
    kHeightSet = 1 << 4,
      kAllRequiredFieldsSet = (kXSet | kYSet | kWidthSet | kHeightSet | 0)
    };

    HighlightRectParamsBuilder<STATE | kXSet>& SetX(int value) {
      static_assert(!(STATE & kXSet), "property x should not have already been set");
      result_->SetX(value);
      return CastState<kXSet>();
    }

    HighlightRectParamsBuilder<STATE | kYSet>& SetY(int value) {
      static_assert(!(STATE & kYSet), "property y should not have already been set");
      result_->SetY(value);
      return CastState<kYSet>();
    }

    HighlightRectParamsBuilder<STATE | kWidthSet>& SetWidth(int value) {
      static_assert(!(STATE & kWidthSet), "property width should not have already been set");
      result_->SetWidth(value);
      return CastState<kWidthSet>();
    }

    HighlightRectParamsBuilder<STATE | kHeightSet>& SetHeight(int value) {
      static_assert(!(STATE & kHeightSet), "property height should not have already been set");
      result_->SetHeight(value);
      return CastState<kHeightSet>();
    }

    HighlightRectParamsBuilder<STATE>& SetColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetColor(std::move(value));
      return *this;
    }

    HighlightRectParamsBuilder<STATE>& SetOutlineColor(std::unique_ptr<::headless::dom::RGBA> value) {
      result_->SetOutlineColor(std::move(value));
      return *this;
    }

    std::unique_ptr<HighlightRectParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightRectParams;
    HighlightRectParamsBuilder() : result_(new HighlightRectParams()) { }

    template<int STEP> HighlightRectParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightRectParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightRectParams> result_;
  };

  static HighlightRectParamsBuilder<0> Builder() {
    return HighlightRectParamsBuilder<0>();
  }

 private:
  HighlightRectParams() { }

  int x_;
  int y_;
  int width_;
  int height_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> color_;
  base::Optional<std::unique_ptr<::headless::dom::RGBA>> outline_color_;

  DISALLOW_COPY_AND_ASSIGN(HighlightRectParams);
};


// Result for the HighlightRect command.
class HEADLESS_EXPORT HighlightRectResult {
 public:
  static std::unique_ptr<HighlightRectResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~HighlightRectResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HighlightRectResult> Clone() const;

  template<int STATE>
  class HighlightRectResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<HighlightRectResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HighlightRectResult;
    HighlightRectResultBuilder() : result_(new HighlightRectResult()) { }

    template<int STEP> HighlightRectResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HighlightRectResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HighlightRectResult> result_;
  };

  static HighlightRectResultBuilder<0> Builder() {
    return HighlightRectResultBuilder<0>();
  }

 private:
  HighlightRectResult() { }


  DISALLOW_COPY_AND_ASSIGN(HighlightRectResult);
};


// Parameters for the SetInspectMode command.
class HEADLESS_EXPORT SetInspectModeParams {
 public:
  static std::unique_ptr<SetInspectModeParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetInspectModeParams() { }

  // Set an inspection mode.
  ::headless::overlay::InspectMode GetMode() const { return mode_; }
  void SetMode(::headless::overlay::InspectMode value) { mode_ = value; }

  // A descriptor for the highlight appearance of hovered-over nodes. May be omitted if `enabled
  // == false`.
  bool HasHighlightConfig() const { return !!highlight_config_; }
  const ::headless::overlay::HighlightConfig* GetHighlightConfig() const { DCHECK(HasHighlightConfig()); return highlight_config_.value().get(); }
  void SetHighlightConfig(std::unique_ptr<::headless::overlay::HighlightConfig> value) { highlight_config_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInspectModeParams> Clone() const;

  template<int STATE>
  class SetInspectModeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kModeSet = 1 << 1,
      kAllRequiredFieldsSet = (kModeSet | 0)
    };

    SetInspectModeParamsBuilder<STATE | kModeSet>& SetMode(::headless::overlay::InspectMode value) {
      static_assert(!(STATE & kModeSet), "property mode should not have already been set");
      result_->SetMode(value);
      return CastState<kModeSet>();
    }

    SetInspectModeParamsBuilder<STATE>& SetHighlightConfig(std::unique_ptr<::headless::overlay::HighlightConfig> value) {
      result_->SetHighlightConfig(std::move(value));
      return *this;
    }

    std::unique_ptr<SetInspectModeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetInspectModeParams;
    SetInspectModeParamsBuilder() : result_(new SetInspectModeParams()) { }

    template<int STEP> SetInspectModeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetInspectModeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetInspectModeParams> result_;
  };

  static SetInspectModeParamsBuilder<0> Builder() {
    return SetInspectModeParamsBuilder<0>();
  }

 private:
  SetInspectModeParams() { }

  ::headless::overlay::InspectMode mode_;
  base::Optional<std::unique_ptr<::headless::overlay::HighlightConfig>> highlight_config_;

  DISALLOW_COPY_AND_ASSIGN(SetInspectModeParams);
};


// Result for the SetInspectMode command.
class HEADLESS_EXPORT SetInspectModeResult {
 public:
  static std::unique_ptr<SetInspectModeResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetInspectModeResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetInspectModeResult> Clone() const;

  template<int STATE>
  class SetInspectModeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetInspectModeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetInspectModeResult;
    SetInspectModeResultBuilder() : result_(new SetInspectModeResult()) { }

    template<int STEP> SetInspectModeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetInspectModeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetInspectModeResult> result_;
  };

  static SetInspectModeResultBuilder<0> Builder() {
    return SetInspectModeResultBuilder<0>();
  }

 private:
  SetInspectModeResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetInspectModeResult);
};


// Parameters for the SetPausedInDebuggerMessage command.
class HEADLESS_EXPORT SetPausedInDebuggerMessageParams {
 public:
  static std::unique_ptr<SetPausedInDebuggerMessageParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetPausedInDebuggerMessageParams() { }

  // The message to display, also triggers resume and step over controls.
  bool HasMessage() const { return !!message_; }
  std::string GetMessage() const { DCHECK(HasMessage()); return message_.value(); }
  void SetMessage(const std::string& value) { message_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetPausedInDebuggerMessageParams> Clone() const;

  template<int STATE>
  class SetPausedInDebuggerMessageParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetPausedInDebuggerMessageParamsBuilder<STATE>& SetMessage(const std::string& value) {
      result_->SetMessage(value);
      return *this;
    }

    std::unique_ptr<SetPausedInDebuggerMessageParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetPausedInDebuggerMessageParams;
    SetPausedInDebuggerMessageParamsBuilder() : result_(new SetPausedInDebuggerMessageParams()) { }

    template<int STEP> SetPausedInDebuggerMessageParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetPausedInDebuggerMessageParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetPausedInDebuggerMessageParams> result_;
  };

  static SetPausedInDebuggerMessageParamsBuilder<0> Builder() {
    return SetPausedInDebuggerMessageParamsBuilder<0>();
  }

 private:
  SetPausedInDebuggerMessageParams() { }

  base::Optional<std::string> message_;

  DISALLOW_COPY_AND_ASSIGN(SetPausedInDebuggerMessageParams);
};


// Result for the SetPausedInDebuggerMessage command.
class HEADLESS_EXPORT SetPausedInDebuggerMessageResult {
 public:
  static std::unique_ptr<SetPausedInDebuggerMessageResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetPausedInDebuggerMessageResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetPausedInDebuggerMessageResult> Clone() const;

  template<int STATE>
  class SetPausedInDebuggerMessageResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetPausedInDebuggerMessageResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetPausedInDebuggerMessageResult;
    SetPausedInDebuggerMessageResultBuilder() : result_(new SetPausedInDebuggerMessageResult()) { }

    template<int STEP> SetPausedInDebuggerMessageResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetPausedInDebuggerMessageResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetPausedInDebuggerMessageResult> result_;
  };

  static SetPausedInDebuggerMessageResultBuilder<0> Builder() {
    return SetPausedInDebuggerMessageResultBuilder<0>();
  }

 private:
  SetPausedInDebuggerMessageResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetPausedInDebuggerMessageResult);
};


// Parameters for the SetShowDebugBorders command.
class HEADLESS_EXPORT SetShowDebugBordersParams {
 public:
  static std::unique_ptr<SetShowDebugBordersParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowDebugBordersParams() { }

  // True for showing debug borders
  bool GetShow() const { return show_; }
  void SetShow(bool value) { show_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowDebugBordersParams> Clone() const;

  template<int STATE>
  class SetShowDebugBordersParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kShowSet = 1 << 1,
      kAllRequiredFieldsSet = (kShowSet | 0)
    };

    SetShowDebugBordersParamsBuilder<STATE | kShowSet>& SetShow(bool value) {
      static_assert(!(STATE & kShowSet), "property show should not have already been set");
      result_->SetShow(value);
      return CastState<kShowSet>();
    }

    std::unique_ptr<SetShowDebugBordersParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowDebugBordersParams;
    SetShowDebugBordersParamsBuilder() : result_(new SetShowDebugBordersParams()) { }

    template<int STEP> SetShowDebugBordersParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowDebugBordersParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowDebugBordersParams> result_;
  };

  static SetShowDebugBordersParamsBuilder<0> Builder() {
    return SetShowDebugBordersParamsBuilder<0>();
  }

 private:
  SetShowDebugBordersParams() { }

  bool show_;

  DISALLOW_COPY_AND_ASSIGN(SetShowDebugBordersParams);
};


// Result for the SetShowDebugBorders command.
class HEADLESS_EXPORT SetShowDebugBordersResult {
 public:
  static std::unique_ptr<SetShowDebugBordersResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowDebugBordersResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowDebugBordersResult> Clone() const;

  template<int STATE>
  class SetShowDebugBordersResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetShowDebugBordersResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowDebugBordersResult;
    SetShowDebugBordersResultBuilder() : result_(new SetShowDebugBordersResult()) { }

    template<int STEP> SetShowDebugBordersResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowDebugBordersResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowDebugBordersResult> result_;
  };

  static SetShowDebugBordersResultBuilder<0> Builder() {
    return SetShowDebugBordersResultBuilder<0>();
  }

 private:
  SetShowDebugBordersResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetShowDebugBordersResult);
};


// Parameters for the SetShowFPSCounter command.
class HEADLESS_EXPORT SetShowFPSCounterParams {
 public:
  static std::unique_ptr<SetShowFPSCounterParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowFPSCounterParams() { }

  // True for showing the FPS counter
  bool GetShow() const { return show_; }
  void SetShow(bool value) { show_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowFPSCounterParams> Clone() const;

  template<int STATE>
  class SetShowFPSCounterParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kShowSet = 1 << 1,
      kAllRequiredFieldsSet = (kShowSet | 0)
    };

    SetShowFPSCounterParamsBuilder<STATE | kShowSet>& SetShow(bool value) {
      static_assert(!(STATE & kShowSet), "property show should not have already been set");
      result_->SetShow(value);
      return CastState<kShowSet>();
    }

    std::unique_ptr<SetShowFPSCounterParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowFPSCounterParams;
    SetShowFPSCounterParamsBuilder() : result_(new SetShowFPSCounterParams()) { }

    template<int STEP> SetShowFPSCounterParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowFPSCounterParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowFPSCounterParams> result_;
  };

  static SetShowFPSCounterParamsBuilder<0> Builder() {
    return SetShowFPSCounterParamsBuilder<0>();
  }

 private:
  SetShowFPSCounterParams() { }

  bool show_;

  DISALLOW_COPY_AND_ASSIGN(SetShowFPSCounterParams);
};


// Result for the SetShowFPSCounter command.
class HEADLESS_EXPORT SetShowFPSCounterResult {
 public:
  static std::unique_ptr<SetShowFPSCounterResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowFPSCounterResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowFPSCounterResult> Clone() const;

  template<int STATE>
  class SetShowFPSCounterResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetShowFPSCounterResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowFPSCounterResult;
    SetShowFPSCounterResultBuilder() : result_(new SetShowFPSCounterResult()) { }

    template<int STEP> SetShowFPSCounterResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowFPSCounterResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowFPSCounterResult> result_;
  };

  static SetShowFPSCounterResultBuilder<0> Builder() {
    return SetShowFPSCounterResultBuilder<0>();
  }

 private:
  SetShowFPSCounterResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetShowFPSCounterResult);
};


// Parameters for the SetShowPaintRects command.
class HEADLESS_EXPORT SetShowPaintRectsParams {
 public:
  static std::unique_ptr<SetShowPaintRectsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowPaintRectsParams() { }

  // True for showing paint rectangles
  bool GetResult() const { return result_; }
  void SetResult(bool value) { result_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowPaintRectsParams> Clone() const;

  template<int STATE>
  class SetShowPaintRectsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResultSet = 1 << 1,
      kAllRequiredFieldsSet = (kResultSet | 0)
    };

    SetShowPaintRectsParamsBuilder<STATE | kResultSet>& SetResult(bool value) {
      static_assert(!(STATE & kResultSet), "property result should not have already been set");
      result_->SetResult(value);
      return CastState<kResultSet>();
    }

    std::unique_ptr<SetShowPaintRectsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowPaintRectsParams;
    SetShowPaintRectsParamsBuilder() : result_(new SetShowPaintRectsParams()) { }

    template<int STEP> SetShowPaintRectsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowPaintRectsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowPaintRectsParams> result_;
  };

  static SetShowPaintRectsParamsBuilder<0> Builder() {
    return SetShowPaintRectsParamsBuilder<0>();
  }

 private:
  SetShowPaintRectsParams() { }

  bool result_;

  DISALLOW_COPY_AND_ASSIGN(SetShowPaintRectsParams);
};


// Result for the SetShowPaintRects command.
class HEADLESS_EXPORT SetShowPaintRectsResult {
 public:
  static std::unique_ptr<SetShowPaintRectsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowPaintRectsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowPaintRectsResult> Clone() const;

  template<int STATE>
  class SetShowPaintRectsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetShowPaintRectsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowPaintRectsResult;
    SetShowPaintRectsResultBuilder() : result_(new SetShowPaintRectsResult()) { }

    template<int STEP> SetShowPaintRectsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowPaintRectsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowPaintRectsResult> result_;
  };

  static SetShowPaintRectsResultBuilder<0> Builder() {
    return SetShowPaintRectsResultBuilder<0>();
  }

 private:
  SetShowPaintRectsResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetShowPaintRectsResult);
};


// Parameters for the SetShowScrollBottleneckRects command.
class HEADLESS_EXPORT SetShowScrollBottleneckRectsParams {
 public:
  static std::unique_ptr<SetShowScrollBottleneckRectsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowScrollBottleneckRectsParams() { }

  // True for showing scroll bottleneck rects
  bool GetShow() const { return show_; }
  void SetShow(bool value) { show_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowScrollBottleneckRectsParams> Clone() const;

  template<int STATE>
  class SetShowScrollBottleneckRectsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kShowSet = 1 << 1,
      kAllRequiredFieldsSet = (kShowSet | 0)
    };

    SetShowScrollBottleneckRectsParamsBuilder<STATE | kShowSet>& SetShow(bool value) {
      static_assert(!(STATE & kShowSet), "property show should not have already been set");
      result_->SetShow(value);
      return CastState<kShowSet>();
    }

    std::unique_ptr<SetShowScrollBottleneckRectsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowScrollBottleneckRectsParams;
    SetShowScrollBottleneckRectsParamsBuilder() : result_(new SetShowScrollBottleneckRectsParams()) { }

    template<int STEP> SetShowScrollBottleneckRectsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowScrollBottleneckRectsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowScrollBottleneckRectsParams> result_;
  };

  static SetShowScrollBottleneckRectsParamsBuilder<0> Builder() {
    return SetShowScrollBottleneckRectsParamsBuilder<0>();
  }

 private:
  SetShowScrollBottleneckRectsParams() { }

  bool show_;

  DISALLOW_COPY_AND_ASSIGN(SetShowScrollBottleneckRectsParams);
};


// Result for the SetShowScrollBottleneckRects command.
class HEADLESS_EXPORT SetShowScrollBottleneckRectsResult {
 public:
  static std::unique_ptr<SetShowScrollBottleneckRectsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowScrollBottleneckRectsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowScrollBottleneckRectsResult> Clone() const;

  template<int STATE>
  class SetShowScrollBottleneckRectsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetShowScrollBottleneckRectsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowScrollBottleneckRectsResult;
    SetShowScrollBottleneckRectsResultBuilder() : result_(new SetShowScrollBottleneckRectsResult()) { }

    template<int STEP> SetShowScrollBottleneckRectsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowScrollBottleneckRectsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowScrollBottleneckRectsResult> result_;
  };

  static SetShowScrollBottleneckRectsResultBuilder<0> Builder() {
    return SetShowScrollBottleneckRectsResultBuilder<0>();
  }

 private:
  SetShowScrollBottleneckRectsResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetShowScrollBottleneckRectsResult);
};


// Parameters for the SetShowViewportSizeOnResize command.
class HEADLESS_EXPORT SetShowViewportSizeOnResizeParams {
 public:
  static std::unique_ptr<SetShowViewportSizeOnResizeParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowViewportSizeOnResizeParams() { }

  // Whether to paint size or not.
  bool GetShow() const { return show_; }
  void SetShow(bool value) { show_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowViewportSizeOnResizeParams> Clone() const;

  template<int STATE>
  class SetShowViewportSizeOnResizeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kShowSet = 1 << 1,
      kAllRequiredFieldsSet = (kShowSet | 0)
    };

    SetShowViewportSizeOnResizeParamsBuilder<STATE | kShowSet>& SetShow(bool value) {
      static_assert(!(STATE & kShowSet), "property show should not have already been set");
      result_->SetShow(value);
      return CastState<kShowSet>();
    }

    std::unique_ptr<SetShowViewportSizeOnResizeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowViewportSizeOnResizeParams;
    SetShowViewportSizeOnResizeParamsBuilder() : result_(new SetShowViewportSizeOnResizeParams()) { }

    template<int STEP> SetShowViewportSizeOnResizeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowViewportSizeOnResizeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowViewportSizeOnResizeParams> result_;
  };

  static SetShowViewportSizeOnResizeParamsBuilder<0> Builder() {
    return SetShowViewportSizeOnResizeParamsBuilder<0>();
  }

 private:
  SetShowViewportSizeOnResizeParams() { }

  bool show_;

  DISALLOW_COPY_AND_ASSIGN(SetShowViewportSizeOnResizeParams);
};


// Result for the SetShowViewportSizeOnResize command.
class HEADLESS_EXPORT SetShowViewportSizeOnResizeResult {
 public:
  static std::unique_ptr<SetShowViewportSizeOnResizeResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetShowViewportSizeOnResizeResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetShowViewportSizeOnResizeResult> Clone() const;

  template<int STATE>
  class SetShowViewportSizeOnResizeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetShowViewportSizeOnResizeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetShowViewportSizeOnResizeResult;
    SetShowViewportSizeOnResizeResultBuilder() : result_(new SetShowViewportSizeOnResizeResult()) { }

    template<int STEP> SetShowViewportSizeOnResizeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetShowViewportSizeOnResizeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetShowViewportSizeOnResizeResult> result_;
  };

  static SetShowViewportSizeOnResizeResultBuilder<0> Builder() {
    return SetShowViewportSizeOnResizeResultBuilder<0>();
  }

 private:
  SetShowViewportSizeOnResizeResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetShowViewportSizeOnResizeResult);
};


// Parameters for the SetSuspended command.
class HEADLESS_EXPORT SetSuspendedParams {
 public:
  static std::unique_ptr<SetSuspendedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetSuspendedParams() { }

  // Whether overlay should be suspended and not consume any resources until resumed.
  bool GetSuspended() const { return suspended_; }
  void SetSuspended(bool value) { suspended_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSuspendedParams> Clone() const;

  template<int STATE>
  class SetSuspendedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSuspendedSet = 1 << 1,
      kAllRequiredFieldsSet = (kSuspendedSet | 0)
    };

    SetSuspendedParamsBuilder<STATE | kSuspendedSet>& SetSuspended(bool value) {
      static_assert(!(STATE & kSuspendedSet), "property suspended should not have already been set");
      result_->SetSuspended(value);
      return CastState<kSuspendedSet>();
    }

    std::unique_ptr<SetSuspendedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSuspendedParams;
    SetSuspendedParamsBuilder() : result_(new SetSuspendedParams()) { }

    template<int STEP> SetSuspendedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSuspendedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSuspendedParams> result_;
  };

  static SetSuspendedParamsBuilder<0> Builder() {
    return SetSuspendedParamsBuilder<0>();
  }

 private:
  SetSuspendedParams() { }

  bool suspended_;

  DISALLOW_COPY_AND_ASSIGN(SetSuspendedParams);
};


// Result for the SetSuspended command.
class HEADLESS_EXPORT SetSuspendedResult {
 public:
  static std::unique_ptr<SetSuspendedResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetSuspendedResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSuspendedResult> Clone() const;

  template<int STATE>
  class SetSuspendedResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetSuspendedResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSuspendedResult;
    SetSuspendedResultBuilder() : result_(new SetSuspendedResult()) { }

    template<int STEP> SetSuspendedResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSuspendedResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSuspendedResult> result_;
  };

  static SetSuspendedResultBuilder<0> Builder() {
    return SetSuspendedResultBuilder<0>();
  }

 private:
  SetSuspendedResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetSuspendedResult);
};


// Parameters for the InspectNodeRequested event.
class HEADLESS_EXPORT InspectNodeRequestedParams {
 public:
  static std::unique_ptr<InspectNodeRequestedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~InspectNodeRequestedParams() { }

  // Id of the node to inspect.
  int GetBackendNodeId() const { return backend_node_id_; }
  void SetBackendNodeId(int value) { backend_node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InspectNodeRequestedParams> Clone() const;

  template<int STATE>
  class InspectNodeRequestedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBackendNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kBackendNodeIdSet | 0)
    };

    InspectNodeRequestedParamsBuilder<STATE | kBackendNodeIdSet>& SetBackendNodeId(int value) {
      static_assert(!(STATE & kBackendNodeIdSet), "property backendNodeId should not have already been set");
      result_->SetBackendNodeId(value);
      return CastState<kBackendNodeIdSet>();
    }

    std::unique_ptr<InspectNodeRequestedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InspectNodeRequestedParams;
    InspectNodeRequestedParamsBuilder() : result_(new InspectNodeRequestedParams()) { }

    template<int STEP> InspectNodeRequestedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InspectNodeRequestedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InspectNodeRequestedParams> result_;
  };

  static InspectNodeRequestedParamsBuilder<0> Builder() {
    return InspectNodeRequestedParamsBuilder<0>();
  }

 private:
  InspectNodeRequestedParams() { }

  int backend_node_id_;

  DISALLOW_COPY_AND_ASSIGN(InspectNodeRequestedParams);
};


// Parameters for the NodeHighlightRequested event.
class HEADLESS_EXPORT NodeHighlightRequestedParams {
 public:
  static std::unique_ptr<NodeHighlightRequestedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~NodeHighlightRequestedParams() { }

  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<NodeHighlightRequestedParams> Clone() const;

  template<int STATE>
  class NodeHighlightRequestedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    NodeHighlightRequestedParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<NodeHighlightRequestedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class NodeHighlightRequestedParams;
    NodeHighlightRequestedParamsBuilder() : result_(new NodeHighlightRequestedParams()) { }

    template<int STEP> NodeHighlightRequestedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<NodeHighlightRequestedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<NodeHighlightRequestedParams> result_;
  };

  static NodeHighlightRequestedParamsBuilder<0> Builder() {
    return NodeHighlightRequestedParamsBuilder<0>();
  }

 private:
  NodeHighlightRequestedParams() { }

  int node_id_;

  DISALLOW_COPY_AND_ASSIGN(NodeHighlightRequestedParams);
};


// Parameters for the ScreenshotRequested event.
class HEADLESS_EXPORT ScreenshotRequestedParams {
 public:
  static std::unique_ptr<ScreenshotRequestedParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~ScreenshotRequestedParams() { }

  // Viewport to capture, in CSS.
  const ::headless::page::Viewport* GetViewport() const { return viewport_.get(); }
  void SetViewport(std::unique_ptr<::headless::page::Viewport> value) { viewport_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ScreenshotRequestedParams> Clone() const;

  template<int STATE>
  class ScreenshotRequestedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kViewportSet = 1 << 1,
      kAllRequiredFieldsSet = (kViewportSet | 0)
    };

    ScreenshotRequestedParamsBuilder<STATE | kViewportSet>& SetViewport(std::unique_ptr<::headless::page::Viewport> value) {
      static_assert(!(STATE & kViewportSet), "property viewport should not have already been set");
      result_->SetViewport(std::move(value));
      return CastState<kViewportSet>();
    }

    std::unique_ptr<ScreenshotRequestedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ScreenshotRequestedParams;
    ScreenshotRequestedParamsBuilder() : result_(new ScreenshotRequestedParams()) { }

    template<int STEP> ScreenshotRequestedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ScreenshotRequestedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ScreenshotRequestedParams> result_;
  };

  static ScreenshotRequestedParamsBuilder<0> Builder() {
    return ScreenshotRequestedParamsBuilder<0>();
  }

 private:
  ScreenshotRequestedParams() { }

  std::unique_ptr<::headless::page::Viewport> viewport_;

  DISALLOW_COPY_AND_ASSIGN(ScreenshotRequestedParams);
};


}  // namespace overlay

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_OVERLAY_H_
