// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/css_value_id_mappings_generated.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/CSSValueKeywords.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_VALUE_ID_MAPPINGS_GENERATED_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_VALUE_ID_MAPPINGS_GENERATED_H_

#include "base/logging.h"
#include "third_party/blink/renderer/core/computed_style_base_constants.h"
#include "third_party/blink/renderer/core/css_value_keywords.h"
#include "third_party/blink/renderer/core/css/style_color.h"
#include "third_party/blink/renderer/core/style/basic_shapes.h"
#include "third_party/blink/renderer/core/style/clip_path_operation.h"
#include "third_party/blink/renderer/core/style/content_data.h"
#include "third_party/blink/renderer/core/style/gap_length.h"
#include "third_party/blink/renderer/core/style/grid_position.h"
#include "third_party/blink/renderer/core/style/grid_track_size.h"
#include "third_party/blink/renderer/core/style/quotes_data.h"
#include "third_party/blink/renderer/core/style/shadow_list.h"
#include "third_party/blink/renderer/core/style/shape_value.h"
#include "third_party/blink/renderer/core/style/style_content_alignment_data.h"
#include "third_party/blink/renderer/core/style/style_filter_data.h"
#include "third_party/blink/renderer/core/style/style_image.h"
#include "third_party/blink/renderer/core/style/style_offset_rotation.h"
#include "third_party/blink/renderer/core/style/style_reflection.h"
#include "third_party/blink/renderer/core/style/style_self_alignment_data.h"
#include "third_party/blink/renderer/core/style/text_size_adjust.h"
#include "third_party/blink/renderer/core/style/transform_origin.h"
#include "third_party/blink/renderer/platform/graphics/color.h"
#include "third_party/blink/renderer/platform/graphics/graphics_types.h"
#include "third_party/blink/renderer/platform/graphics/touch_action.h"
#include "third_party/blink/renderer/platform/layout_unit.h"
#include "third_party/blink/renderer/platform/length.h"
#include "third_party/blink/renderer/platform/length_box.h"
#include "third_party/blink/renderer/platform/length_point.h"
#include "third_party/blink/renderer/platform/length_size.h"
#include "third_party/blink/renderer/platform/scroll/scroll_customization.h"
#include "third_party/blink/renderer/platform/scroll/scroll_snap_data.h"
#include "third_party/blink/renderer/platform/text/tab_size.h"
#include "third_party/blink/renderer/platform/text/text_direction.h"
#include "third_party/blink/renderer/platform/text/text_justify.h"
#include "third_party/blink/renderer/platform/text/unicode_bidi.h"
#include "third_party/blink/renderer/platform/text/writing_mode.h"
#include "third_party/blink/renderer/platform/transforms/rotate_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/scale_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/transform_operations.h"
#include "third_party/blink/renderer/platform/transforms/translate_transform_operation.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

// Do not use these functions directly, use the non-generated versions
// in CSSValueMappings.h

namespace detail {

template <class T>
T cssValueIDToPlatformEnumGenerated(CSSValueID);


template <>
inline EVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueHidden:
      return EVisibility::kHidden;
    default:
      DCHECK_GE(v, CSSValueVisible);
      DCHECK_LE(v, CSSValueCollapse);
      return static_cast<EVisibility>(v - CSSValueVisible + static_cast<int>(EVisibility::kVisible));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EVisibility v) {
  switch (v) {
    case EVisibility::kHidden:
      return CSSValueHidden;
    default:
      DCHECK_GE(v, EVisibility::kVisible);
      DCHECK_LE(v, EVisibility::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EVisibility::kVisible) + static_cast<int>(CSSValueVisible));
  }
}


template <>
inline EOverflowAnchor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return EOverflowAnchor::kAuto;
    case CSSValueVisible:
      return EOverflowAnchor::kVisible;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<EOverflowAnchor>(v - CSSValueNone + static_cast<int>(EOverflowAnchor::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflowAnchor v) {
  switch (v) {
    case EOverflowAnchor::kAuto:
      return CSSValueAuto;
    case EOverflowAnchor::kVisible:
      return CSSValueVisible;
    default:
      DCHECK_GE(v, EOverflowAnchor::kNone);
      DCHECK_LE(v, EOverflowAnchor::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflowAnchor::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EBoxDecorationBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueClone);
  DCHECK_LE(v, CSSValueSlice);
  return static_cast<EBoxDecorationBreak>(v - CSSValueClone + static_cast<int>(EBoxDecorationBreak::kClone));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxDecorationBreak v) {
  DCHECK_GE(v, EBoxDecorationBreak::kClone);
  DCHECK_LE(v, EBoxDecorationBreak::kSlice);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxDecorationBreak::kClone) + static_cast<int>(CSSValueClone));
}


template <>
inline LineBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNormal:
      return LineBreak::kNormal;
    case CSSValueAuto:
      return LineBreak::kAuto;
    default:
      DCHECK_GE(v, CSSValueLoose);
      DCHECK_LE(v, CSSValueAfterWhiteSpace);
      return static_cast<LineBreak>(v - CSSValueLoose + static_cast<int>(LineBreak::kLoose));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(LineBreak v) {
  switch (v) {
    case LineBreak::kNormal:
      return CSSValueNormal;
    case LineBreak::kAuto:
      return CSSValueAuto;
    default:
      DCHECK_GE(v, LineBreak::kLoose);
      DCHECK_LE(v, LineBreak::kAfterWhiteSpace);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(LineBreak::kLoose) + static_cast<int>(CSSValueLoose));
  }
}


template <>
inline TextJustify cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return TextJustify::kNone;
    case CSSValueAuto:
      return TextJustify::kAuto;
    default:
      DCHECK_GE(v, CSSValueInterWord);
      DCHECK_LE(v, CSSValueDistribute);
      return static_cast<TextJustify>(v - CSSValueInterWord + static_cast<int>(TextJustify::kInterWord));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextJustify v) {
  switch (v) {
    case TextJustify::kNone:
      return CSSValueNone;
    case TextJustify::kAuto:
      return CSSValueAuto;
    default:
      DCHECK_GE(v, TextJustify::kInterWord);
      DCHECK_LE(v, TextJustify::kDistribute);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextJustify::kInterWord) + static_cast<int>(CSSValueInterWord));
  }
}


template <>
inline EColumnSpan cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAll:
      return EColumnSpan::kAll;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<EColumnSpan>(v - CSSValueNone + static_cast<int>(EColumnSpan::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColumnSpan v) {
  switch (v) {
    case EColumnSpan::kAll:
      return CSSValueAll;
    default:
      DCHECK_GE(v, EColumnSpan::kNone);
      DCHECK_LE(v, EColumnSpan::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColumnSpan::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EPointerEvents cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EPointerEvents::kNone;
    case CSSValueAll:
      return EPointerEvents::kAll;
    case CSSValueAuto:
      return EPointerEvents::kAuto;
    case CSSValueVisible:
      return EPointerEvents::kVisible;
    default:
      DCHECK_GE(v, CSSValueVisiblePainted);
      DCHECK_LE(v, CSSValueBoundingBox);
      return static_cast<EPointerEvents>(v - CSSValueVisiblePainted + static_cast<int>(EPointerEvents::kVisiblePainted));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPointerEvents v) {
  switch (v) {
    case EPointerEvents::kNone:
      return CSSValueNone;
    case EPointerEvents::kAll:
      return CSSValueAll;
    case EPointerEvents::kAuto:
      return CSSValueAuto;
    case EPointerEvents::kVisible:
      return CSSValueVisible;
    default:
      DCHECK_GE(v, EPointerEvents::kVisiblePainted);
      DCHECK_LE(v, EPointerEvents::kBoundingBox);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPointerEvents::kVisiblePainted) + static_cast<int>(CSSValueVisiblePainted));
  }
}


template <>
inline ETextOverflow cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueClip);
  DCHECK_LE(v, CSSValueEllipsis);
  return static_cast<ETextOverflow>(v - CSSValueClip + static_cast<int>(ETextOverflow::kClip));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextOverflow v) {
  DCHECK_GE(v, ETextOverflow::kClip);
  DCHECK_LE(v, ETextOverflow::kEllipsis);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextOverflow::kClip) + static_cast<int>(CSSValueClip));
}


template <>
inline EColumnFill cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueBalance:
      return EColumnFill::kBalance;
    default:
      DCHECK_GE(v, CSSValueAuto);
      DCHECK_LE(v, CSSValueAuto);
      return static_cast<EColumnFill>(v - CSSValueAuto + static_cast<int>(EColumnFill::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColumnFill v) {
  switch (v) {
    case EColumnFill::kBalance:
      return CSSValueBalance;
    default:
      DCHECK_GE(v, EColumnFill::kAuto);
      DCHECK_LE(v, EColumnFill::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColumnFill::kAuto) + static_cast<int>(CSSValueAuto));
  }
}


template <>
inline TextDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueLtr);
  DCHECK_LE(v, CSSValueRtl);
  return static_cast<TextDirection>(v - CSSValueLtr + static_cast<int>(TextDirection::kLtr));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextDirection v) {
  DCHECK_GE(v, TextDirection::kLtr);
  DCHECK_LE(v, TextDirection::kRtl);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextDirection::kLtr) + static_cast<int>(CSSValueLtr));
}


template <>
inline EBreakInside cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAvoid:
      return EBreakInside::kAvoid;
    case CSSValueAvoidPage:
      return EBreakInside::kAvoidPage;
    case CSSValueAvoidColumn:
      return EBreakInside::kAvoidColumn;
    default:
      DCHECK_GE(v, CSSValueAuto);
      DCHECK_LE(v, CSSValueAuto);
      return static_cast<EBreakInside>(v - CSSValueAuto + static_cast<int>(EBreakInside::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBreakInside v) {
  switch (v) {
    case EBreakInside::kAvoid:
      return CSSValueAvoid;
    case EBreakInside::kAvoidPage:
      return CSSValueAvoidPage;
    case EBreakInside::kAvoidColumn:
      return CSSValueAvoidColumn;
    default:
      DCHECK_GE(v, EBreakInside::kAuto);
      DCHECK_LE(v, EBreakInside::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBreakInside::kAuto) + static_cast<int>(CSSValueAuto));
  }
}


template <>
inline EFloat cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EFloat::kNone;
    default:
      DCHECK_GE(v, CSSValueLeft);
      DCHECK_LE(v, CSSValueRight);
      return static_cast<EFloat>(v - CSSValueLeft + static_cast<int>(EFloat::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFloat v) {
  switch (v) {
    case EFloat::kNone:
      return CSSValueNone;
    default:
      DCHECK_GE(v, EFloat::kLeft);
      DCHECK_LE(v, EFloat::kRight);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFloat::kLeft) + static_cast<int>(CSSValueLeft));
  }
}


template <>
inline EOrder cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueLogical);
  DCHECK_LE(v, CSSValueVisual);
  return static_cast<EOrder>(v - CSSValueLogical + static_cast<int>(EOrder::kLogical));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOrder v) {
  DCHECK_GE(v, EOrder::kLogical);
  DCHECK_LE(v, EOrder::kVisual);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOrder::kLogical) + static_cast<int>(CSSValueLogical));
}


template <>
inline EImageRendering cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return EImageRendering::kAuto;
    case CSSValueOptimizeSpeed:
      return EImageRendering::kOptimizeSpeed;
    default:
      DCHECK_GE(v, CSSValueOptimizeQuality);
      DCHECK_LE(v, CSSValueWebkitOptimizeContrast);
      return static_cast<EImageRendering>(v - CSSValueOptimizeQuality + static_cast<int>(EImageRendering::kOptimizeQuality));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EImageRendering v) {
  switch (v) {
    case EImageRendering::kAuto:
      return CSSValueAuto;
    case EImageRendering::kOptimizeSpeed:
      return CSSValueOptimizeSpeed;
    default:
      DCHECK_GE(v, EImageRendering::kOptimizeQuality);
      DCHECK_LE(v, EImageRendering::kWebkitOptimizeContrast);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EImageRendering::kOptimizeQuality) + static_cast<int>(CSSValueOptimizeQuality));
  }
}


template <>
inline EUserModify cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueReadOnly);
  DCHECK_LE(v, CSSValueReadWritePlaintextOnly);
  return static_cast<EUserModify>(v - CSSValueReadOnly + static_cast<int>(EUserModify::kReadOnly));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserModify v) {
  DCHECK_GE(v, EUserModify::kReadOnly);
  DCHECK_LE(v, EUserModify::kReadWritePlaintextOnly);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserModify::kReadOnly) + static_cast<int>(CSSValueReadOnly));
}


template <>
inline EMarginCollapse cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueSeparate:
      return EMarginCollapse::kSeparate;
    case CSSValueDiscard:
      return EMarginCollapse::kDiscard;
    default:
      DCHECK_GE(v, CSSValueCollapse);
      DCHECK_LE(v, CSSValueCollapse);
      return static_cast<EMarginCollapse>(v - CSSValueCollapse + static_cast<int>(EMarginCollapse::kCollapse));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EMarginCollapse v) {
  switch (v) {
    case EMarginCollapse::kSeparate:
      return CSSValueSeparate;
    case EMarginCollapse::kDiscard:
      return CSSValueDiscard;
    default:
      DCHECK_GE(v, EMarginCollapse::kCollapse);
      DCHECK_LE(v, EMarginCollapse::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EMarginCollapse::kCollapse) + static_cast<int>(CSSValueCollapse));
  }
}


template <>
inline EWordBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNormal:
      return EWordBreak::kNormal;
    default:
      DCHECK_GE(v, CSSValueBreakAll);
      DCHECK_LE(v, CSSValueBreakWord);
      return static_cast<EWordBreak>(v - CSSValueBreakAll + static_cast<int>(EWordBreak::kBreakAll));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EWordBreak v) {
  switch (v) {
    case EWordBreak::kNormal:
      return CSSValueNormal;
    default:
      DCHECK_GE(v, EWordBreak::kBreakAll);
      DCHECK_LE(v, EWordBreak::kBreakWord);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EWordBreak::kBreakAll) + static_cast<int>(CSSValueBreakAll));
  }
}


template <>
inline EOverscrollBehavior cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return EOverscrollBehavior::kAuto;
    case CSSValueContain:
      return EOverscrollBehavior::kContain;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<EOverscrollBehavior>(v - CSSValueNone + static_cast<int>(EOverscrollBehavior::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverscrollBehavior v) {
  switch (v) {
    case EOverscrollBehavior::kAuto:
      return CSSValueAuto;
    case EOverscrollBehavior::kContain:
      return CSSValueContain;
    default:
      DCHECK_GE(v, EOverscrollBehavior::kNone);
      DCHECK_LE(v, EOverscrollBehavior::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverscrollBehavior::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EFlexWrap cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNowrap:
      return EFlexWrap::kNowrap;
    default:
      DCHECK_GE(v, CSSValueWrap);
      DCHECK_LE(v, CSSValueWrapReverse);
      return static_cast<EFlexWrap>(v - CSSValueWrap + static_cast<int>(EFlexWrap::kWrap));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFlexWrap v) {
  switch (v) {
    case EFlexWrap::kNowrap:
      return CSSValueNowrap;
    default:
      DCHECK_GE(v, EFlexWrap::kWrap);
      DCHECK_LE(v, EFlexWrap::kWrapReverse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFlexWrap::kWrap) + static_cast<int>(CSSValueWrap));
  }
}


template <>
inline TextUnderlinePosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueUnder:
      return TextUnderlinePosition::kUnder;
    default:
      DCHECK_GE(v, CSSValueAuto);
      DCHECK_LE(v, CSSValueAuto);
      return static_cast<TextUnderlinePosition>(v - CSSValueAuto + static_cast<int>(TextUnderlinePosition::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextUnderlinePosition v) {
  switch (v) {
    case TextUnderlinePosition::kUnder:
      return CSSValueUnder;
    default:
      DCHECK_GE(v, TextUnderlinePosition::kAuto);
      DCHECK_LE(v, TextUnderlinePosition::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextUnderlinePosition::kAuto) + static_cast<int>(CSSValueAuto));
  }
}


template <>
inline EBoxDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueReverse:
      return EBoxDirection::kReverse;
    default:
      DCHECK_GE(v, CSSValueNormal);
      DCHECK_LE(v, CSSValueNormal);
      return static_cast<EBoxDirection>(v - CSSValueNormal + static_cast<int>(EBoxDirection::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxDirection v) {
  switch (v) {
    case EBoxDirection::kReverse:
      return CSSValueReverse;
    default:
      DCHECK_GE(v, EBoxDirection::kNormal);
      DCHECK_LE(v, EBoxDirection::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxDirection::kNormal) + static_cast<int>(CSSValueNormal));
  }
}


template <>
inline ETransformStyle3D cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueFlat);
  DCHECK_LE(v, CSSValuePreserve3d);
  return static_cast<ETransformStyle3D>(v - CSSValueFlat + static_cast<int>(ETransformStyle3D::kFlat));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETransformStyle3D v) {
  DCHECK_GE(v, ETransformStyle3D::kFlat);
  DCHECK_LE(v, ETransformStyle3D::kPreserve3d);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETransformStyle3D::kFlat) + static_cast<int>(CSSValueFlat));
}


template <>
inline ETextOrientation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueUpright:
      return ETextOrientation::kUpright;
    default:
      DCHECK_GE(v, CSSValueMixed);
      DCHECK_LE(v, CSSValueSideways);
      return static_cast<ETextOrientation>(v - CSSValueMixed + static_cast<int>(ETextOrientation::kMixed));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextOrientation v) {
  switch (v) {
    case ETextOrientation::kUpright:
      return CSSValueUpright;
    default:
      DCHECK_GE(v, ETextOrientation::kMixed);
      DCHECK_LE(v, ETextOrientation::kSideways);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextOrientation::kMixed) + static_cast<int>(CSSValueMixed));
  }
}


template <>
inline EBoxSizing cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueContentBox:
      return EBoxSizing::kContentBox;
    default:
      DCHECK_GE(v, CSSValueBorderBox);
      DCHECK_LE(v, CSSValueBorderBox);
      return static_cast<EBoxSizing>(v - CSSValueBorderBox + static_cast<int>(EBoxSizing::kBorderBox));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxSizing v) {
  switch (v) {
    case EBoxSizing::kContentBox:
      return CSSValueContentBox;
    default:
      DCHECK_GE(v, EBoxSizing::kBorderBox);
      DCHECK_LE(v, EBoxSizing::kBorderBox);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxSizing::kBorderBox) + static_cast<int>(CSSValueBorderBox));
  }
}


template <>
inline ETextAlign cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueStart:
      return ETextAlign::kStart;
    case CSSValueEnd:
      return ETextAlign::kEnd;
    default:
      DCHECK_GE(v, CSSValueLeft);
      DCHECK_LE(v, CSSValueWebkitCenter);
      return static_cast<ETextAlign>(v - CSSValueLeft + static_cast<int>(ETextAlign::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAlign v) {
  switch (v) {
    case ETextAlign::kStart:
      return CSSValueStart;
    case ETextAlign::kEnd:
      return CSSValueEnd;
    default:
      DCHECK_GE(v, ETextAlign::kLeft);
      DCHECK_LE(v, ETextAlign::kWebkitCenter);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAlign::kLeft) + static_cast<int>(CSSValueLeft));
  }
}


template <>
inline Hyphens cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return Hyphens::kAuto;
    case CSSValueManual:
      return Hyphens::kManual;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<Hyphens>(v - CSSValueNone + static_cast<int>(Hyphens::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(Hyphens v) {
  switch (v) {
    case Hyphens::kAuto:
      return CSSValueAuto;
    case Hyphens::kManual:
      return CSSValueManual;
    default:
      DCHECK_GE(v, Hyphens::kNone);
      DCHECK_LE(v, Hyphens::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(Hyphens::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EWhiteSpace cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNormal:
      return EWhiteSpace::kNormal;
    case CSSValueNowrap:
      return EWhiteSpace::kNowrap;
    case CSSValueWebkitNowrap:
      return EWhiteSpace::kWebkitNowrap;
    default:
      DCHECK_GE(v, CSSValuePre);
      DCHECK_LE(v, CSSValuePreWrap);
      return static_cast<EWhiteSpace>(v - CSSValuePre + static_cast<int>(EWhiteSpace::kPre));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EWhiteSpace v) {
  switch (v) {
    case EWhiteSpace::kNormal:
      return CSSValueNormal;
    case EWhiteSpace::kNowrap:
      return CSSValueNowrap;
    case EWhiteSpace::kWebkitNowrap:
      return CSSValueWebkitNowrap;
    default:
      DCHECK_GE(v, EWhiteSpace::kPre);
      DCHECK_LE(v, EWhiteSpace::kPreWrap);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EWhiteSpace::kPre) + static_cast<int>(CSSValuePre));
  }
}


template <>
inline ETextTransform cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return ETextTransform::kNone;
    default:
      DCHECK_GE(v, CSSValueCapitalize);
      DCHECK_LE(v, CSSValueLowercase);
      return static_cast<ETextTransform>(v - CSSValueCapitalize + static_cast<int>(ETextTransform::kCapitalize));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextTransform v) {
  switch (v) {
    case ETextTransform::kNone:
      return CSSValueNone;
    default:
      DCHECK_GE(v, ETextTransform::kCapitalize);
      DCHECK_LE(v, ETextTransform::kLowercase);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextTransform::kCapitalize) + static_cast<int>(CSSValueCapitalize));
  }
}


template <>
inline EBreakBetween cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueLeft:
      return EBreakBetween::kLeft;
    case CSSValueRight:
      return EBreakBetween::kRight;
    case CSSValueAuto:
      return EBreakBetween::kAuto;
    case CSSValueAvoid:
      return EBreakBetween::kAvoid;
    case CSSValueColumn:
      return EBreakBetween::kColumn;
    default:
      DCHECK_GE(v, CSSValueAvoidPage);
      DCHECK_LE(v, CSSValueAvoidColumn);
      return static_cast<EBreakBetween>(v - CSSValueAvoidPage + static_cast<int>(EBreakBetween::kAvoidPage));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBreakBetween v) {
  switch (v) {
    case EBreakBetween::kLeft:
      return CSSValueLeft;
    case EBreakBetween::kRight:
      return CSSValueRight;
    case EBreakBetween::kAuto:
      return CSSValueAuto;
    case EBreakBetween::kAvoid:
      return CSSValueAvoid;
    case EBreakBetween::kColumn:
      return CSSValueColumn;
    default:
      DCHECK_GE(v, EBreakBetween::kAvoidPage);
      DCHECK_LE(v, EBreakBetween::kAvoidColumn);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBreakBetween::kAvoidPage) + static_cast<int>(CSSValueAvoidPage));
  }
}


template <>
inline EScrollSnapStop cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAlways:
      return EScrollSnapStop::kAlways;
    default:
      DCHECK_GE(v, CSSValueNormal);
      DCHECK_LE(v, CSSValueNormal);
      return static_cast<EScrollSnapStop>(v - CSSValueNormal + static_cast<int>(EScrollSnapStop::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EScrollSnapStop v) {
  switch (v) {
    case EScrollSnapStop::kAlways:
      return CSSValueAlways;
    default:
      DCHECK_GE(v, EScrollSnapStop::kNormal);
      DCHECK_LE(v, EScrollSnapStop::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EScrollSnapStop::kNormal) + static_cast<int>(CSSValueNormal));
  }
}


template <>
inline EBoxPack cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueStart:
      return EBoxPack::kStart;
    case CSSValueEnd:
      return EBoxPack::kEnd;
    default:
      DCHECK_GE(v, CSSValueCenter);
      DCHECK_LE(v, CSSValueJustify);
      return static_cast<EBoxPack>(v - CSSValueCenter + static_cast<int>(EBoxPack::kCenter));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxPack v) {
  switch (v) {
    case EBoxPack::kStart:
      return CSSValueStart;
    case EBoxPack::kEnd:
      return CSSValueEnd;
    default:
      DCHECK_GE(v, EBoxPack::kCenter);
      DCHECK_LE(v, EBoxPack::kJustify);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxPack::kCenter) + static_cast<int>(CSSValueCenter));
  }
}


template <>
inline EListStylePosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueOutside);
  DCHECK_LE(v, CSSValueInside);
  return static_cast<EListStylePosition>(v - CSSValueOutside + static_cast<int>(EListStylePosition::kOutside));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EListStylePosition v) {
  DCHECK_GE(v, EListStylePosition::kOutside);
  DCHECK_LE(v, EListStylePosition::kInside);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EListStylePosition::kOutside) + static_cast<int>(CSSValueOutside));
}


template <>
inline ETextAlignLast cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return ETextAlignLast::kAuto;
    case CSSValueStart:
      return ETextAlignLast::kStart;
    case CSSValueEnd:
      return ETextAlignLast::kEnd;
    default:
      DCHECK_GE(v, CSSValueLeft);
      DCHECK_LE(v, CSSValueJustify);
      return static_cast<ETextAlignLast>(v - CSSValueLeft + static_cast<int>(ETextAlignLast::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAlignLast v) {
  switch (v) {
    case ETextAlignLast::kAuto:
      return CSSValueAuto;
    case ETextAlignLast::kStart:
      return CSSValueStart;
    case ETextAlignLast::kEnd:
      return CSSValueEnd;
    default:
      DCHECK_GE(v, ETextAlignLast::kLeft);
      DCHECK_LE(v, ETextAlignLast::kJustify);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAlignLast::kLeft) + static_cast<int>(CSSValueLeft));
  }
}


template <>
inline EBorderStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueNone);
  DCHECK_LE(v, CSSValueDouble);
  return static_cast<EBorderStyle>(v - CSSValueNone + static_cast<int>(EBorderStyle::kNone));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBorderStyle v) {
  DCHECK_GE(v, EBorderStyle::kNone);
  DCHECK_LE(v, EBorderStyle::kDouble);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBorderStyle::kNone) + static_cast<int>(CSSValueNone));
}


template <>
inline ETextDecorationSkipInk cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return ETextDecorationSkipInk::kAuto;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<ETextDecorationSkipInk>(v - CSSValueNone + static_cast<int>(ETextDecorationSkipInk::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextDecorationSkipInk v) {
  switch (v) {
    case ETextDecorationSkipInk::kAuto:
      return CSSValueAuto;
    default:
      DCHECK_GE(v, ETextDecorationSkipInk::kNone);
      DCHECK_LE(v, ETextDecorationSkipInk::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextDecorationSkipInk::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EDraggableRegionMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EDraggableRegionMode::kNone;
    default:
      DCHECK_GE(v, CSSValueDrag);
      DCHECK_LE(v, CSSValueNoDrag);
      return static_cast<EDraggableRegionMode>(v - CSSValueDrag + static_cast<int>(EDraggableRegionMode::kDrag));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EDraggableRegionMode v) {
  switch (v) {
    case EDraggableRegionMode::kNone:
      return CSSValueNone;
    default:
      DCHECK_GE(v, EDraggableRegionMode::kDrag);
      DCHECK_LE(v, EDraggableRegionMode::kNoDrag);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EDraggableRegionMode::kDrag) + static_cast<int>(CSSValueDrag));
  }
}

template <>
inline TextDecoration cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return TextDecoration::kNone;
    case CSSValueUnderline:
      return TextDecoration::kUnderline;
    case CSSValueOverline:
      return TextDecoration::kOverline;
    case CSSValueLineThrough:
      return TextDecoration::kLineThrough;
    case CSSValueBlink:
      return TextDecoration::kBlink;
    default:
      NOTREACHED();
      return TextDecoration::kNone;
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextDecoration v) {
  switch (v) {
    case TextDecoration::kNone:
      return CSSValueNone;
    case TextDecoration::kUnderline:
      return CSSValueUnderline;
    case TextDecoration::kOverline:
      return CSSValueOverline;
    case TextDecoration::kLineThrough:
      return CSSValueLineThrough;
    case TextDecoration::kBlink:
      return CSSValueBlink;
    default:
      NOTREACHED();
      return CSSValueNone;
  }
}

template <>
inline ETransformBox cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueFillBox);
  DCHECK_LE(v, CSSValueViewBox);
  return static_cast<ETransformBox>(v - CSSValueFillBox + static_cast<int>(ETransformBox::kFillBox));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETransformBox v) {
  DCHECK_GE(v, ETransformBox::kFillBox);
  DCHECK_LE(v, ETransformBox::kViewBox);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETransformBox::kFillBox) + static_cast<int>(CSSValueFillBox));
}


template <>
inline ECursor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return ECursor::kNone;
    case CSSValueCopy:
      return ECursor::kCopy;
    default:
      DCHECK_GE(v, CSSValueAuto);
      DCHECK_LE(v, CSSValueGrabbing);
      return static_cast<ECursor>(v - CSSValueAuto + static_cast<int>(ECursor::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ECursor v) {
  switch (v) {
    case ECursor::kNone:
      return CSSValueNone;
    case ECursor::kCopy:
      return CSSValueCopy;
    default:
      DCHECK_GE(v, ECursor::kAuto);
      DCHECK_LE(v, ECursor::kGrabbing);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ECursor::kAuto) + static_cast<int>(CSSValueAuto));
  }
}


template <>
inline EOverflowWrap cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueBreakWord:
      return EOverflowWrap::kBreakWord;
    default:
      DCHECK_GE(v, CSSValueNormal);
      DCHECK_LE(v, CSSValueNormal);
      return static_cast<EOverflowWrap>(v - CSSValueNormal + static_cast<int>(EOverflowWrap::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflowWrap v) {
  switch (v) {
    case EOverflowWrap::kBreakWord:
      return CSSValueBreakWord;
    default:
      DCHECK_GE(v, EOverflowWrap::kNormal);
      DCHECK_LE(v, EOverflowWrap::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflowWrap::kNormal) + static_cast<int>(CSSValueNormal));
  }
}


template <>
inline ETextCombine cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAll:
      return ETextCombine::kAll;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<ETextCombine>(v - CSSValueNone + static_cast<int>(ETextCombine::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextCombine v) {
  switch (v) {
    case ETextCombine::kAll:
      return CSSValueAll;
    default:
      DCHECK_GE(v, ETextCombine::kNone);
      DCHECK_LE(v, ETextCombine::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextCombine::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EPrintColorAdjust cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueEconomy);
  DCHECK_LE(v, CSSValueExact);
  return static_cast<EPrintColorAdjust>(v - CSSValueEconomy + static_cast<int>(EPrintColorAdjust::kEconomy));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPrintColorAdjust v) {
  DCHECK_GE(v, EPrintColorAdjust::kEconomy);
  DCHECK_LE(v, EPrintColorAdjust::kExact);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPrintColorAdjust::kEconomy) + static_cast<int>(CSSValueEconomy));
}


template <>
inline ETextDecorationStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueWavy:
      return ETextDecorationStyle::kWavy;
    default:
      DCHECK_GE(v, CSSValueDotted);
      DCHECK_LE(v, CSSValueDouble);
      return static_cast<ETextDecorationStyle>(v - CSSValueDotted + static_cast<int>(ETextDecorationStyle::kDotted));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextDecorationStyle v) {
  switch (v) {
    case ETextDecorationStyle::kWavy:
      return CSSValueWavy;
    default:
      DCHECK_GE(v, ETextDecorationStyle::kDotted);
      DCHECK_LE(v, ETextDecorationStyle::kDouble);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextDecorationStyle::kDotted) + static_cast<int>(CSSValueDotted));
  }
}


template <>
inline EOverflow cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueHidden:
      return EOverflow::kHidden;
    case CSSValueAuto:
      return EOverflow::kAuto;
    case CSSValueVisible:
      return EOverflow::kVisible;
    case CSSValueOverlay:
      return EOverflow::kOverlay;
    case CSSValueScroll:
      return EOverflow::kScroll;
    default:
      DCHECK_GE(v, CSSValueWebkitPagedX);
      DCHECK_LE(v, CSSValueWebkitPagedY);
      return static_cast<EOverflow>(v - CSSValueWebkitPagedX + static_cast<int>(EOverflow::kWebkitPagedX));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflow v) {
  switch (v) {
    case EOverflow::kHidden:
      return CSSValueHidden;
    case EOverflow::kAuto:
      return CSSValueAuto;
    case EOverflow::kVisible:
      return CSSValueVisible;
    case EOverflow::kOverlay:
      return CSSValueOverlay;
    case EOverflow::kScroll:
      return CSSValueScroll;
    default:
      DCHECK_GE(v, EOverflow::kWebkitPagedX);
      DCHECK_LE(v, EOverflow::kWebkitPagedY);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflow::kWebkitPagedX) + static_cast<int>(CSSValueWebkitPagedX));
  }
}


template <>
inline ECaptionSide cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueTop);
  DCHECK_LE(v, CSSValueBottom);
  return static_cast<ECaptionSide>(v - CSSValueTop + static_cast<int>(ECaptionSide::kTop));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ECaptionSide v) {
  DCHECK_GE(v, ECaptionSide::kTop);
  DCHECK_LE(v, ECaptionSide::kBottom);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ECaptionSide::kTop) + static_cast<int>(CSSValueTop));
}


template <>
inline EEmptyCells cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueShow:
      return EEmptyCells::kShow;
    default:
      DCHECK_GE(v, CSSValueHide);
      DCHECK_LE(v, CSSValueHide);
      return static_cast<EEmptyCells>(v - CSSValueHide + static_cast<int>(EEmptyCells::kHide));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EEmptyCells v) {
  switch (v) {
    case EEmptyCells::kShow:
      return CSSValueShow;
    default:
      DCHECK_GE(v, EEmptyCells::kHide);
      DCHECK_LE(v, EEmptyCells::kHide);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EEmptyCells::kHide) + static_cast<int>(CSSValueHide));
  }
}


template <>
inline WritingMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueHorizontalTb);
  DCHECK_LE(v, CSSValueVerticalLr);
  return static_cast<WritingMode>(v - CSSValueHorizontalTb + static_cast<int>(WritingMode::kHorizontalTb));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(WritingMode v) {
  DCHECK_GE(v, WritingMode::kHorizontalTb);
  DCHECK_LE(v, WritingMode::kVerticalLr);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(WritingMode::kHorizontalTb) + static_cast<int>(CSSValueHorizontalTb));
}


template <>
inline ETextSecurity cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return ETextSecurity::kNone;
    default:
      DCHECK_GE(v, CSSValueDisc);
      DCHECK_LE(v, CSSValueSquare);
      return static_cast<ETextSecurity>(v - CSSValueDisc + static_cast<int>(ETextSecurity::kDisc));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextSecurity v) {
  switch (v) {
    case ETextSecurity::kNone:
      return CSSValueNone;
    default:
      DCHECK_GE(v, ETextSecurity::kDisc);
      DCHECK_LE(v, ETextSecurity::kSquare);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextSecurity::kDisc) + static_cast<int>(CSSValueDisc));
  }
}


template <>
inline BlendMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNormal:
      return BlendMode::kNormal;
    case CSSValueOverlay:
      return BlendMode::kOverlay;
    case CSSValueMultiply:
      return BlendMode::kMultiply;
    case CSSValueScreen:
      return BlendMode::kScreen;
    default:
      DCHECK_GE(v, CSSValueDarken);
      DCHECK_LE(v, CSSValueLuminosity);
      return static_cast<BlendMode>(v - CSSValueDarken + static_cast<int>(BlendMode::kDarken));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(BlendMode v) {
  switch (v) {
    case BlendMode::kNormal:
      return CSSValueNormal;
    case BlendMode::kOverlay:
      return CSSValueOverlay;
    case BlendMode::kMultiply:
      return CSSValueMultiply;
    case BlendMode::kScreen:
      return CSSValueScreen;
    default:
      DCHECK_GE(v, BlendMode::kDarken);
      DCHECK_LE(v, BlendMode::kLuminosity);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(BlendMode::kDarken) + static_cast<int>(CSSValueDarken));
  }
}


template <>
inline ESpeak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return ESpeak::kNone;
    case CSSValueNormal:
      return ESpeak::kNormal;
    default:
      DCHECK_GE(v, CSSValueSpellOut);
      DCHECK_LE(v, CSSValueNoPunctuation);
      return static_cast<ESpeak>(v - CSSValueSpellOut + static_cast<int>(ESpeak::kSpellOut));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ESpeak v) {
  switch (v) {
    case ESpeak::kNone:
      return CSSValueNone;
    case ESpeak::kNormal:
      return CSSValueNormal;
    default:
      DCHECK_GE(v, ESpeak::kSpellOut);
      DCHECK_LE(v, ESpeak::kNoPunctuation);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ESpeak::kSpellOut) + static_cast<int>(CSSValueSpellOut));
  }
}


template <>
inline EResize cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EResize::kNone;
    case CSSValueBoth:
      return EResize::kBoth;
    default:
      DCHECK_GE(v, CSSValueHorizontal);
      DCHECK_LE(v, CSSValueVertical);
      return static_cast<EResize>(v - CSSValueHorizontal + static_cast<int>(EResize::kHorizontal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EResize v) {
  switch (v) {
    case EResize::kNone:
      return CSSValueNone;
    case EResize::kBoth:
      return CSSValueBoth;
    default:
      DCHECK_GE(v, EResize::kHorizontal);
      DCHECK_LE(v, EResize::kVertical);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EResize::kHorizontal) + static_cast<int>(CSSValueHorizontal));
  }
}


template <>
inline UnicodeBidi cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueBidiOverride:
      return UnicodeBidi::kBidiOverride;
    case CSSValueEmbed:
      return UnicodeBidi::kEmbed;
    case CSSValueIsolate:
      return UnicodeBidi::kIsolate;
    case CSSValueIsolateOverride:
      return UnicodeBidi::kIsolateOverride;
    case CSSValuePlaintext:
      return UnicodeBidi::kPlaintext;
    default:
      DCHECK_GE(v, CSSValueNormal);
      DCHECK_LE(v, CSSValueNormal);
      return static_cast<UnicodeBidi>(v - CSSValueNormal + static_cast<int>(UnicodeBidi::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(UnicodeBidi v) {
  switch (v) {
    case UnicodeBidi::kBidiOverride:
      return CSSValueBidiOverride;
    case UnicodeBidi::kEmbed:
      return CSSValueEmbed;
    case UnicodeBidi::kIsolate:
      return CSSValueIsolate;
    case UnicodeBidi::kIsolateOverride:
      return CSSValueIsolateOverride;
    case UnicodeBidi::kPlaintext:
      return CSSValuePlaintext;
    default:
      DCHECK_GE(v, UnicodeBidi::kNormal);
      DCHECK_LE(v, UnicodeBidi::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(UnicodeBidi::kNormal) + static_cast<int>(CSSValueNormal));
  }
}


template <>
inline EPosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueFixed:
      return EPosition::kFixed;
    case CSSValueRelative:
      return EPosition::kRelative;
    case CSSValueStatic:
      return EPosition::kStatic;
    case CSSValueSticky:
      return EPosition::kSticky;
    default:
      DCHECK_GE(v, CSSValueAbsolute);
      DCHECK_LE(v, CSSValueAbsolute);
      return static_cast<EPosition>(v - CSSValueAbsolute + static_cast<int>(EPosition::kAbsolute));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPosition v) {
  switch (v) {
    case EPosition::kFixed:
      return CSSValueFixed;
    case EPosition::kRelative:
      return CSSValueRelative;
    case EPosition::kStatic:
      return CSSValueStatic;
    case EPosition::kSticky:
      return CSSValueSticky;
    default:
      DCHECK_GE(v, EPosition::kAbsolute);
      DCHECK_LE(v, EPosition::kAbsolute);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPosition::kAbsolute) + static_cast<int>(CSSValueAbsolute));
  }
}


template <>
inline EBoxAlignment cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueBaseline:
      return EBoxAlignment::kBaseline;
    case CSSValueCenter:
      return EBoxAlignment::kCenter;
    default:
      DCHECK_GE(v, CSSValueStretch);
      DCHECK_LE(v, CSSValueEnd);
      return static_cast<EBoxAlignment>(v - CSSValueStretch + static_cast<int>(EBoxAlignment::kStretch));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxAlignment v) {
  switch (v) {
    case EBoxAlignment::kBaseline:
      return CSSValueBaseline;
    case EBoxAlignment::kCenter:
      return CSSValueCenter;
    default:
      DCHECK_GE(v, EBoxAlignment::kStretch);
      DCHECK_LE(v, EBoxAlignment::kEnd);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxAlignment::kStretch) + static_cast<int>(CSSValueStretch));
  }
}


template <>
inline ETableLayout cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueFixed:
      return ETableLayout::kFixed;
    default:
      DCHECK_GE(v, CSSValueAuto);
      DCHECK_LE(v, CSSValueAuto);
      return static_cast<ETableLayout>(v - CSSValueAuto + static_cast<int>(ETableLayout::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETableLayout v) {
  switch (v) {
    case ETableLayout::kFixed:
      return CSSValueFixed;
    default:
      DCHECK_GE(v, ETableLayout::kAuto);
      DCHECK_LE(v, ETableLayout::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETableLayout::kAuto) + static_cast<int>(CSSValueAuto));
  }
}


template <>
inline EBoxOrient cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueHorizontal);
  DCHECK_LE(v, CSSValueVertical);
  return static_cast<EBoxOrient>(v - CSSValueHorizontal + static_cast<int>(EBoxOrient::kHorizontal));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxOrient v) {
  DCHECK_GE(v, EBoxOrient::kHorizontal);
  DCHECK_LE(v, EBoxOrient::kVertical);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxOrient::kHorizontal) + static_cast<int>(CSSValueHorizontal));
}


template <>
inline EObjectFit cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EObjectFit::kNone;
    case CSSValueFill:
      return EObjectFit::kFill;
    case CSSValueScaleDown:
      return EObjectFit::kScaleDown;
    default:
      DCHECK_GE(v, CSSValueContain);
      DCHECK_LE(v, CSSValueCover);
      return static_cast<EObjectFit>(v - CSSValueContain + static_cast<int>(EObjectFit::kContain));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EObjectFit v) {
  switch (v) {
    case EObjectFit::kNone:
      return CSSValueNone;
    case EObjectFit::kFill:
      return CSSValueFill;
    case EObjectFit::kScaleDown:
      return CSSValueScaleDown;
    default:
      DCHECK_GE(v, EObjectFit::kContain);
      DCHECK_LE(v, EObjectFit::kCover);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EObjectFit::kContain) + static_cast<int>(CSSValueContain));
  }
}


template <>
inline EFlexDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueRow);
  DCHECK_LE(v, CSSValueColumnReverse);
  return static_cast<EFlexDirection>(v - CSSValueRow + static_cast<int>(EFlexDirection::kRow));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFlexDirection v) {
  DCHECK_GE(v, EFlexDirection::kRow);
  DCHECK_LE(v, EFlexDirection::kColumnReverse);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFlexDirection::kRow) + static_cast<int>(CSSValueRow));
}


template <>
inline EUserDrag cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAuto:
      return EUserDrag::kAuto;
    case CSSValueElement:
      return EUserDrag::kElement;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<EUserDrag>(v - CSSValueNone + static_cast<int>(EUserDrag::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserDrag v) {
  switch (v) {
    case EUserDrag::kAuto:
      return CSSValueAuto;
    case EUserDrag::kElement:
      return CSSValueElement;
    default:
      DCHECK_GE(v, EUserDrag::kNone);
      DCHECK_LE(v, EUserDrag::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserDrag::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EClear cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EClear::kNone;
    case CSSValueBoth:
      return EClear::kBoth;
    default:
      DCHECK_GE(v, CSSValueLeft);
      DCHECK_LE(v, CSSValueRight);
      return static_cast<EClear>(v - CSSValueLeft + static_cast<int>(EClear::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EClear v) {
  switch (v) {
    case EClear::kNone:
      return CSSValueNone;
    case EClear::kBoth:
      return CSSValueBoth;
    default:
      DCHECK_GE(v, EClear::kLeft);
      DCHECK_LE(v, EClear::kRight);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EClear::kLeft) + static_cast<int>(CSSValueLeft));
  }
}


template <>
inline EUserSelect cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueAll:
      return EUserSelect::kAll;
    case CSSValueAuto:
      return EUserSelect::kAuto;
    case CSSValueText:
      return EUserSelect::kText;
    default:
      DCHECK_GE(v, CSSValueNone);
      DCHECK_LE(v, CSSValueNone);
      return static_cast<EUserSelect>(v - CSSValueNone + static_cast<int>(EUserSelect::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserSelect v) {
  switch (v) {
    case EUserSelect::kAll:
      return CSSValueAll;
    case EUserSelect::kAuto:
      return CSSValueAuto;
    case EUserSelect::kText:
      return CSSValueText;
    default:
      DCHECK_GE(v, EUserSelect::kNone);
      DCHECK_LE(v, EUserSelect::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserSelect::kNone) + static_cast<int>(CSSValueNone));
  }
}


template <>
inline EBackfaceVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueVisible:
      return EBackfaceVisibility::kVisible;
    default:
      DCHECK_GE(v, CSSValueHidden);
      DCHECK_LE(v, CSSValueHidden);
      return static_cast<EBackfaceVisibility>(v - CSSValueHidden + static_cast<int>(EBackfaceVisibility::kHidden));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBackfaceVisibility v) {
  switch (v) {
    case EBackfaceVisibility::kVisible:
      return CSSValueVisible;
    default:
      DCHECK_GE(v, EBackfaceVisibility::kHidden);
      DCHECK_LE(v, EBackfaceVisibility::kHidden);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBackfaceVisibility::kHidden) + static_cast<int>(CSSValueHidden));
  }
}


template <>
inline EBorderCollapse cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueSeparate:
      return EBorderCollapse::kSeparate;
    default:
      DCHECK_GE(v, CSSValueCollapse);
      DCHECK_LE(v, CSSValueCollapse);
      return static_cast<EBorderCollapse>(v - CSSValueCollapse + static_cast<int>(EBorderCollapse::kCollapse));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBorderCollapse v) {
  switch (v) {
    case EBorderCollapse::kSeparate:
      return CSSValueSeparate;
    default:
      DCHECK_GE(v, EBorderCollapse::kCollapse);
      DCHECK_LE(v, EBorderCollapse::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBorderCollapse::kCollapse) + static_cast<int>(CSSValueCollapse));
  }
}


template <>
inline EIsolation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueIsolate:
      return EIsolation::kIsolate;
    default:
      DCHECK_GE(v, CSSValueAuto);
      DCHECK_LE(v, CSSValueAuto);
      return static_cast<EIsolation>(v - CSSValueAuto + static_cast<int>(EIsolation::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EIsolation v) {
  switch (v) {
    case EIsolation::kIsolate:
      return CSSValueIsolate;
    default:
      DCHECK_GE(v, EIsolation::kAuto);
      DCHECK_LE(v, EIsolation::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EIsolation::kAuto) + static_cast<int>(CSSValueAuto));
  }
}


template <>
inline EListStyleType cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueNone:
      return EListStyleType::kNone;
    default:
      DCHECK_GE(v, CSSValueDisc);
      DCHECK_LE(v, CSSValueKatakanaIroha);
      return static_cast<EListStyleType>(v - CSSValueDisc + static_cast<int>(EListStyleType::kDisc));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EListStyleType v) {
  switch (v) {
    case EListStyleType::kNone:
      return CSSValueNone;
    default:
      DCHECK_GE(v, EListStyleType::kDisc);
      DCHECK_LE(v, EListStyleType::kKatakanaIroha);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EListStyleType::kDisc) + static_cast<int>(CSSValueDisc));
  }
}


template <>
inline RubyPosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueAfter);
  DCHECK_LE(v, CSSValueBefore);
  return static_cast<RubyPosition>(v - CSSValueAfter + static_cast<int>(RubyPosition::kAfter));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(RubyPosition v) {
  DCHECK_GE(v, RubyPosition::kAfter);
  DCHECK_LE(v, RubyPosition::kBefore);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(RubyPosition::kAfter) + static_cast<int>(CSSValueAfter));
}

}  // namespace detail

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_VALUE_ID_MAPPINGS_GENERATED_H_
