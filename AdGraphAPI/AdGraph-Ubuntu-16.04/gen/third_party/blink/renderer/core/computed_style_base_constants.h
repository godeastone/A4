// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/computed_style_base_constants.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleDiffFunctions.json5
//   ../../third_party/blink/renderer/core/css/ComputedStyleExtraFields.json5
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSGroupConfig.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/CSSPropertiesRanking.json5
//   ../../third_party/blink/renderer/core/css/CSSValueKeywords.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_COMPUTED_STYLE_BASE_CONSTANTS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_COMPUTED_STYLE_BASE_CONSTANTS_H_

namespace blink {

// TODO(sashab): Move these enums to their own namespace, or add a CSS prefix,
// for consistency and to prevent name conflicts.

enum class AutoRepeatType : unsigned {
  kNoAutoRepeat,
  kAutoFill,
  kAutoFit,
};

enum class EBackfaceVisibility : unsigned {
  kHidden,
  kVisible,
};

enum class EBorderCollapse : unsigned {
  kCollapse,
  kSeparate,
};

enum class EBorderStyle : unsigned {
  kNone,
  kHidden,
  kInset,
  kGroove,
  kOutset,
  kRidge,
  kDotted,
  kDashed,
  kSolid,
  kDouble,
};

enum class EBoxAlignment : unsigned {
  kBaseline,
  kCenter,
  kStretch,
  kStart,
  kEnd,
};

enum class EBoxDecorationBreak : unsigned {
  kClone,
  kSlice,
};

enum class EBoxDirection : unsigned {
  kNormal,
  kReverse,
};

enum class EBoxOrient : unsigned {
  kHorizontal,
  kVertical,
};

enum class EBoxPack : unsigned {
  kCenter,
  kJustify,
  kStart,
  kEnd,
};

enum class EBoxSizing : unsigned {
  kBorderBox,
  kContentBox,
};

enum class EBreakBetween : unsigned {
  kLeft,
  kRight,
  kAuto,
  kAvoid,
  kColumn,
  kAvoidPage,
  kPage,
  kRecto,
  kVerso,
  kAvoidColumn,
};

enum class EBreakInside : unsigned {
  kAuto,
  kAvoid,
  kAvoidPage,
  kAvoidColumn,
};

enum class ECaptionSide : unsigned {
  kTop,
  kBottom,
};

enum class EClear : unsigned {
  kNone,
  kLeft,
  kRight,
  kBoth,
};

enum class EColumnFill : unsigned {
  kAuto,
  kBalance,
};

enum class EColumnSpan : unsigned {
  kNone,
  kAll,
};

enum class ECursor : unsigned {
  kNone,
  kCopy,
  kAuto,
  kCrosshair,
  kDefault,
  kPointer,
  kMove,
  kVerticalText,
  kCell,
  kContextMenu,
  kAlias,
  kProgress,
  kNoDrop,
  kNotAllowed,
  kZoomIn,
  kZoomOut,
  kEResize,
  kNeResize,
  kNwResize,
  kNResize,
  kSeResize,
  kSwResize,
  kSResize,
  kWResize,
  kEwResize,
  kNsResize,
  kNeswResize,
  kNwseResize,
  kColResize,
  kRowResize,
  kText,
  kWait,
  kHelp,
  kAllScroll,
  kGrab,
  kGrabbing,
};

enum class EDisplay : unsigned {
  kInline,
  kBlock,
  kListItem,
  kInlineBlock,
  kTable,
  kInlineTable,
  kTableRowGroup,
  kTableHeaderGroup,
  kTableFooterGroup,
  kTableRow,
  kTableColumnGroup,
  kTableColumn,
  kTableCell,
  kTableCaption,
  kWebkitBox,
  kWebkitInlineBox,
  kFlex,
  kInlineFlex,
  kGrid,
  kInlineGrid,
  kContents,
  kFlowRoot,
  kNone,
  kLayoutCustom,
  kInlineLayoutCustom,
};

enum class EDraggableRegionMode : unsigned {
  kNone,
  kDrag,
  kNoDrag,
};

enum class EEmptyCells : unsigned {
  kHide,
  kShow,
};

enum class EFlexDirection : unsigned {
  kRow,
  kRowReverse,
  kColumn,
  kColumnReverse,
};

enum class EFlexWrap : unsigned {
  kNowrap,
  kWrap,
  kWrapReverse,
};

enum class EFloat : unsigned {
  kNone,
  kLeft,
  kRight,
};

enum class EImageRendering : unsigned {
  kAuto,
  kOptimizeSpeed,
  kOptimizeQuality,
  kPixelated,
  kWebkitOptimizeContrast,
};

enum class EInsideLink : unsigned {
  kNotInsideLink,
  kInsideUnvisitedLink,
  kInsideVisitedLink,
};

enum class EIsolation : unsigned {
  kAuto,
  kIsolate,
};

enum class EListStylePosition : unsigned {
  kOutside,
  kInside,
};

enum class EListStyleType : unsigned {
  kNone,
  kDisc,
  kCircle,
  kSquare,
  kDecimal,
  kDecimalLeadingZero,
  kArabicIndic,
  kBengali,
  kCambodian,
  kKhmer,
  kDevanagari,
  kGujarati,
  kGurmukhi,
  kKannada,
  kLao,
  kMalayalam,
  kMongolian,
  kMyanmar,
  kOriya,
  kPersian,
  kUrdu,
  kTelugu,
  kTibetan,
  kThai,
  kLowerRoman,
  kUpperRoman,
  kLowerGreek,
  kLowerAlpha,
  kLowerLatin,
  kUpperAlpha,
  kUpperLatin,
  kCjkEarthlyBranch,
  kCjkHeavenlyStem,
  kEthiopicHalehame,
  kEthiopicHalehameAm,
  kEthiopicHalehameTiEr,
  kEthiopicHalehameTiEt,
  kHangul,
  kHangulConsonant,
  kKoreanHangulFormal,
  kKoreanHanjaFormal,
  kKoreanHanjaInformal,
  kHebrew,
  kArmenian,
  kLowerArmenian,
  kUpperArmenian,
  kGeorgian,
  kCjkIdeographic,
  kSimpChineseFormal,
  kSimpChineseInformal,
  kTradChineseFormal,
  kTradChineseInformal,
  kHiragana,
  kKatakana,
  kHiraganaIroha,
  kKatakanaIroha,
};

enum class EMarginCollapse : unsigned {
  kCollapse,
  kSeparate,
  kDiscard,
};

enum class EObjectFit : unsigned {
  kNone,
  kContain,
  kCover,
  kFill,
  kScaleDown,
};

enum class EOrder : unsigned {
  kLogical,
  kVisual,
};

enum class EOverflow : unsigned {
  kHidden,
  kAuto,
  kVisible,
  kOverlay,
  kScroll,
  kWebkitPagedX,
  kWebkitPagedY,
};

enum class EOverflowAnchor : unsigned {
  kNone,
  kAuto,
  kVisible,
};

enum class EOverflowWrap : unsigned {
  kNormal,
  kBreakWord,
};

enum class EOverscrollBehavior : unsigned {
  kNone,
  kAuto,
  kContain,
};

enum class EPageSizeType : unsigned {
  kAuto,
  kLandscape,
  kPortrait,
  kResolved,
};

enum class EPointerEvents : unsigned {
  kNone,
  kAll,
  kAuto,
  kVisible,
  kVisiblePainted,
  kVisibleFill,
  kVisibleStroke,
  kPainted,
  kFill,
  kStroke,
  kBoundingBox,
};

enum class EPosition : unsigned {
  kAbsolute,
  kFixed,
  kRelative,
  kStatic,
  kSticky,
};

enum class EPrintColorAdjust : unsigned {
  kEconomy,
  kExact,
};

enum class EResize : unsigned {
  kNone,
  kBoth,
  kHorizontal,
  kVertical,
};

enum class EScrollSnapStop : unsigned {
  kNormal,
  kAlways,
};

enum class ESpeak : unsigned {
  kNone,
  kNormal,
  kSpellOut,
  kDigits,
  kLiteralPunctuation,
  kNoPunctuation,
};

enum class ETableLayout : unsigned {
  kAuto,
  kFixed,
};

enum class ETextAlign : unsigned {
  kLeft,
  kRight,
  kCenter,
  kJustify,
  kWebkitLeft,
  kWebkitRight,
  kWebkitCenter,
  kStart,
  kEnd,
};

enum class ETextAlignLast : unsigned {
  kLeft,
  kRight,
  kCenter,
  kJustify,
  kAuto,
  kStart,
  kEnd,
};

enum class ETextCombine : unsigned {
  kNone,
  kAll,
};

enum class ETextDecorationSkipInk : unsigned {
  kNone,
  kAuto,
};

enum class ETextDecorationStyle : unsigned {
  kDotted,
  kDashed,
  kSolid,
  kDouble,
  kWavy,
};

enum class ETextOrientation : unsigned {
  kMixed,
  kSideways,
  kUpright,
};

enum class ETextOverflow : unsigned {
  kClip,
  kEllipsis,
};

enum class ETextSecurity : unsigned {
  kNone,
  kDisc,
  kCircle,
  kSquare,
};

enum class ETextTransform : unsigned {
  kNone,
  kCapitalize,
  kUppercase,
  kLowercase,
};

enum class ETransformBox : unsigned {
  kFillBox,
  kViewBox,
};

enum class ETransformStyle3D : unsigned {
  kFlat,
  kPreserve3d,
};

enum class EUserDrag : unsigned {
  kNone,
  kAuto,
  kElement,
};

enum class EUserModify : unsigned {
  kReadOnly,
  kReadWrite,
  kReadWritePlaintextOnly,
};

enum class EUserSelect : unsigned {
  kNone,
  kAll,
  kAuto,
  kText,
};

enum class EVisibility : unsigned {
  kHidden,
  kVisible,
  kCollapse,
};

enum class EWhiteSpace : unsigned {
  kNormal,
  kNowrap,
  kPre,
  kPreLine,
  kPreWrap,
  kWebkitNowrap,
};

enum class EWordBreak : unsigned {
  kNormal,
  kBreakAll,
  kKeepAll,
  kBreakWord,
};

enum class Hyphens : unsigned {
  kNone,
  kAuto,
  kManual,
};

enum class LineBreak : unsigned {
  kNormal,
  kAuto,
  kLoose,
  kStrict,
  kAfterWhiteSpace,
};

enum class RubyPosition : unsigned {
  kAfter,
  kBefore,
};

enum class TextDecoration : unsigned {
  kNone = 0,
  kUnderline = 2,
  kOverline = 4,
  kLineThrough = 8,
  kBlink = 16,
};

static const int kTextDecorationBits = 4;

inline TextDecoration operator|(TextDecoration a, TextDecoration b) {
  return static_cast<TextDecoration>(
    static_cast<unsigned>(a) | static_cast<unsigned>(b)
  );
}
inline TextDecoration& operator|=(TextDecoration& a, TextDecoration b) {
  return a = a | b;
}

inline TextDecoration operator^(TextDecoration a, TextDecoration b) {
  return static_cast<TextDecoration>(
    static_cast<unsigned>(a) ^ static_cast<unsigned>(b)
  );
}
inline TextDecoration& operator^=(TextDecoration& a, TextDecoration b) {
  return a = a ^ b;
}

enum class TextEmphasisFill : unsigned {
  kFilled,
  kOpen,
};

enum class TextEmphasisMark : unsigned {
  kNone,
  kAuto,
  kDot,
  kCircle,
  kDoubleCircle,
  kTriangle,
  kSesame,
  kCustom,
};

enum class TextIndentLine : unsigned {
  kFirstLine,
  kEachLine,
};

enum class TextIndentType : unsigned {
  kNormal,
  kHanging,
};

enum class TextUnderlinePosition : unsigned {
  kAuto,
  kUnder,
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_COMPUTED_STYLE_BASE_CONSTANTS_H_
