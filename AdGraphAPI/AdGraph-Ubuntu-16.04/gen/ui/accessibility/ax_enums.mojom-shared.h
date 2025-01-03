// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_AX_ENUMS_MOJOM_SHARED_H_
#define UI_ACCESSIBILITY_AX_ENUMS_MOJOM_SHARED_H_

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
#include "ui/accessibility/ax_enums.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ax {
namespace mojom {


}  // namespace mojom
}  // namespace ax

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ax {
namespace mojom {

enum class Event : int32_t {
  kNone,
  kActiveDescendantChanged,
  kAlert,
  kAriaAttributeChanged,
  kAutocorrectionOccured,
  kBlur,
  kCheckedStateChanged,
  kChildrenChanged,
  kClicked,
  kDocumentSelectionChanged,
  kExpandedChanged,
  kFocus,
  kFocusContext,
  kHide,
  kHitTestResult,
  kHover,
  kImageFrameUpdated,
  kInvalidStatusChanged,
  kLayoutComplete,
  kLiveRegionCreated,
  kLiveRegionChanged,
  kLoadComplete,
  kLocationChanged,
  kMediaStartedPlaying,
  kMediaStoppedPlaying,
  kMenuEnd,
  kMenuListItemSelected,
  kMenuListValueChanged,
  kMenuPopupEnd,
  kMenuPopupStart,
  kMenuStart,
  kMouseCanceled,
  kMouseDragged,
  kMouseMoved,
  kMousePressed,
  kMouseReleased,
  kRowCollapsed,
  kRowCountChanged,
  kRowExpanded,
  kScrollPositionChanged,
  kScrolledToAnchor,
  kSelectedChildrenChanged,
  kSelection,
  kSelectionAdd,
  kSelectionRemove,
  kShow,
  kStateChanged,
  kTextChanged,
  kTextSelectionChanged,
  kTreeChanged,
  kValueChanged,
  kMinValue = 0,
  kMaxValue = 50,
};

inline std::ostream& operator<<(std::ostream& os, Event value) {
  switch(value) {
    case Event::kNone:
      return os << "Event::kNone";
    case Event::kActiveDescendantChanged:
      return os << "Event::kActiveDescendantChanged";
    case Event::kAlert:
      return os << "Event::kAlert";
    case Event::kAriaAttributeChanged:
      return os << "Event::kAriaAttributeChanged";
    case Event::kAutocorrectionOccured:
      return os << "Event::kAutocorrectionOccured";
    case Event::kBlur:
      return os << "Event::kBlur";
    case Event::kCheckedStateChanged:
      return os << "Event::kCheckedStateChanged";
    case Event::kChildrenChanged:
      return os << "Event::kChildrenChanged";
    case Event::kClicked:
      return os << "Event::kClicked";
    case Event::kDocumentSelectionChanged:
      return os << "Event::kDocumentSelectionChanged";
    case Event::kExpandedChanged:
      return os << "Event::kExpandedChanged";
    case Event::kFocus:
      return os << "Event::kFocus";
    case Event::kFocusContext:
      return os << "Event::kFocusContext";
    case Event::kHide:
      return os << "Event::kHide";
    case Event::kHitTestResult:
      return os << "Event::kHitTestResult";
    case Event::kHover:
      return os << "Event::kHover";
    case Event::kImageFrameUpdated:
      return os << "Event::kImageFrameUpdated";
    case Event::kInvalidStatusChanged:
      return os << "Event::kInvalidStatusChanged";
    case Event::kLayoutComplete:
      return os << "Event::kLayoutComplete";
    case Event::kLiveRegionCreated:
      return os << "Event::kLiveRegionCreated";
    case Event::kLiveRegionChanged:
      return os << "Event::kLiveRegionChanged";
    case Event::kLoadComplete:
      return os << "Event::kLoadComplete";
    case Event::kLocationChanged:
      return os << "Event::kLocationChanged";
    case Event::kMediaStartedPlaying:
      return os << "Event::kMediaStartedPlaying";
    case Event::kMediaStoppedPlaying:
      return os << "Event::kMediaStoppedPlaying";
    case Event::kMenuEnd:
      return os << "Event::kMenuEnd";
    case Event::kMenuListItemSelected:
      return os << "Event::kMenuListItemSelected";
    case Event::kMenuListValueChanged:
      return os << "Event::kMenuListValueChanged";
    case Event::kMenuPopupEnd:
      return os << "Event::kMenuPopupEnd";
    case Event::kMenuPopupStart:
      return os << "Event::kMenuPopupStart";
    case Event::kMenuStart:
      return os << "Event::kMenuStart";
    case Event::kMouseCanceled:
      return os << "Event::kMouseCanceled";
    case Event::kMouseDragged:
      return os << "Event::kMouseDragged";
    case Event::kMouseMoved:
      return os << "Event::kMouseMoved";
    case Event::kMousePressed:
      return os << "Event::kMousePressed";
    case Event::kMouseReleased:
      return os << "Event::kMouseReleased";
    case Event::kRowCollapsed:
      return os << "Event::kRowCollapsed";
    case Event::kRowCountChanged:
      return os << "Event::kRowCountChanged";
    case Event::kRowExpanded:
      return os << "Event::kRowExpanded";
    case Event::kScrollPositionChanged:
      return os << "Event::kScrollPositionChanged";
    case Event::kScrolledToAnchor:
      return os << "Event::kScrolledToAnchor";
    case Event::kSelectedChildrenChanged:
      return os << "Event::kSelectedChildrenChanged";
    case Event::kSelection:
      return os << "Event::kSelection";
    case Event::kSelectionAdd:
      return os << "Event::kSelectionAdd";
    case Event::kSelectionRemove:
      return os << "Event::kSelectionRemove";
    case Event::kShow:
      return os << "Event::kShow";
    case Event::kStateChanged:
      return os << "Event::kStateChanged";
    case Event::kTextChanged:
      return os << "Event::kTextChanged";
    case Event::kTextSelectionChanged:
      return os << "Event::kTextSelectionChanged";
    case Event::kTreeChanged:
      return os << "Event::kTreeChanged";
    case Event::kValueChanged:
      return os << "Event::kValueChanged";
    default:
      return os << "Unknown Event value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Event value) {
  return internal::Event_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Role : int32_t {
  kNone,
  kAbbr,
  kAlert,
  kAlertDialog,
  kAnchor,
  kAnnotation,
  kApplication,
  kArticle,
  kAudio,
  kBanner,
  kBlockquote,
  kButton,
  kCanvas,
  kCaption,
  kCaret,
  kCell,
  kCheckBox,
  kClient,
  kColorWell,
  kColumn,
  kColumnHeader,
  kComboBoxGrouping,
  kComboBoxMenuButton,
  kComplementary,
  kContentInfo,
  kDate,
  kDateTime,
  kDefinition,
  kDescriptionList,
  kDescriptionListDetail,
  kDescriptionListTerm,
  kDesktop,
  kDetails,
  kDialog,
  kDirectory,
  kDisclosureTriangle,
  kDocAbstract,
  kDocAcknowledgments,
  kDocAfterword,
  kDocAppendix,
  kDocBackLink,
  kDocBiblioEntry,
  kDocBibliography,
  kDocBiblioRef,
  kDocChapter,
  kDocColophon,
  kDocConclusion,
  kDocCover,
  kDocCredit,
  kDocCredits,
  kDocDedication,
  kDocEndnote,
  kDocEndnotes,
  kDocEpigraph,
  kDocEpilogue,
  kDocErrata,
  kDocExample,
  kDocFootnote,
  kDocForeword,
  kDocGlossary,
  kDocGlossRef,
  kDocIndex,
  kDocIntroduction,
  kDocNoteRef,
  kDocNotice,
  kDocPageBreak,
  kDocPageList,
  kDocPart,
  kDocPreface,
  kDocPrologue,
  kDocPullquote,
  kDocQna,
  kDocSubtitle,
  kDocTip,
  kDocToc,
  kDocument,
  kEmbeddedObject,
  kFeed,
  kFigcaption,
  kFigure,
  kFooter,
  kForm,
  kGenericContainer,
  kGraphicsDocument,
  kGraphicsObject,
  kGraphicsSymbol,
  kGrid,
  kGroup,
  kHeading,
  kIframe,
  kIframePresentational,
  kIgnored,
  kImage,
  kImageMap,
  kInlineTextBox,
  kInputTime,
  kLabelText,
  kLayoutTable,
  kLayoutTableCell,
  kLayoutTableColumn,
  kLayoutTableRow,
  kLegend,
  kLineBreak,
  kLink,
  kList,
  kListBox,
  kListBoxOption,
  kListItem,
  kListMarker,
  kLocationBar,
  kLog,
  kMain,
  kMark,
  kMarquee,
  kMath,
  kMenu,
  kMenuBar,
  kMenuButton,
  kMenuItem,
  kMenuItemCheckBox,
  kMenuItemRadio,
  kMenuListOption,
  kMenuListPopup,
  kMeter,
  kNavigation,
  kNote,
  kPane,
  kParagraph,
  kPopUpButton,
  kPre,
  kPresentational,
  kProgressIndicator,
  kRadioButton,
  kRadioGroup,
  kRegion,
  kRootWebArea,
  kRow,
  kRowHeader,
  kRuby,
  kScrollBar,
  kScrollView,
  kSearch,
  kSearchBox,
  kSlider,
  kSliderThumb,
  kSpinButton,
  kSplitter,
  kStaticText,
  kStatus,
  kSvgRoot,
  kSwitch,
  kTab,
  kTabList,
  kTabPanel,
  kTable,
  kTableHeaderContainer,
  kTerm,
  kTextField,
  kTextFieldWithComboBox,
  kTime,
  kTimer,
  kTitleBar,
  kToggleButton,
  kToolbar,
  kTooltip,
  kTree,
  kTreeGrid,
  kTreeItem,
  kUnknown,
  kVideo,
  kWebArea,
  kWebView,
  kWindow,
  kMinValue = 0,
  kMaxValue = 172,
};

inline std::ostream& operator<<(std::ostream& os, Role value) {
  switch(value) {
    case Role::kNone:
      return os << "Role::kNone";
    case Role::kAbbr:
      return os << "Role::kAbbr";
    case Role::kAlert:
      return os << "Role::kAlert";
    case Role::kAlertDialog:
      return os << "Role::kAlertDialog";
    case Role::kAnchor:
      return os << "Role::kAnchor";
    case Role::kAnnotation:
      return os << "Role::kAnnotation";
    case Role::kApplication:
      return os << "Role::kApplication";
    case Role::kArticle:
      return os << "Role::kArticle";
    case Role::kAudio:
      return os << "Role::kAudio";
    case Role::kBanner:
      return os << "Role::kBanner";
    case Role::kBlockquote:
      return os << "Role::kBlockquote";
    case Role::kButton:
      return os << "Role::kButton";
    case Role::kCanvas:
      return os << "Role::kCanvas";
    case Role::kCaption:
      return os << "Role::kCaption";
    case Role::kCaret:
      return os << "Role::kCaret";
    case Role::kCell:
      return os << "Role::kCell";
    case Role::kCheckBox:
      return os << "Role::kCheckBox";
    case Role::kClient:
      return os << "Role::kClient";
    case Role::kColorWell:
      return os << "Role::kColorWell";
    case Role::kColumn:
      return os << "Role::kColumn";
    case Role::kColumnHeader:
      return os << "Role::kColumnHeader";
    case Role::kComboBoxGrouping:
      return os << "Role::kComboBoxGrouping";
    case Role::kComboBoxMenuButton:
      return os << "Role::kComboBoxMenuButton";
    case Role::kComplementary:
      return os << "Role::kComplementary";
    case Role::kContentInfo:
      return os << "Role::kContentInfo";
    case Role::kDate:
      return os << "Role::kDate";
    case Role::kDateTime:
      return os << "Role::kDateTime";
    case Role::kDefinition:
      return os << "Role::kDefinition";
    case Role::kDescriptionList:
      return os << "Role::kDescriptionList";
    case Role::kDescriptionListDetail:
      return os << "Role::kDescriptionListDetail";
    case Role::kDescriptionListTerm:
      return os << "Role::kDescriptionListTerm";
    case Role::kDesktop:
      return os << "Role::kDesktop";
    case Role::kDetails:
      return os << "Role::kDetails";
    case Role::kDialog:
      return os << "Role::kDialog";
    case Role::kDirectory:
      return os << "Role::kDirectory";
    case Role::kDisclosureTriangle:
      return os << "Role::kDisclosureTriangle";
    case Role::kDocAbstract:
      return os << "Role::kDocAbstract";
    case Role::kDocAcknowledgments:
      return os << "Role::kDocAcknowledgments";
    case Role::kDocAfterword:
      return os << "Role::kDocAfterword";
    case Role::kDocAppendix:
      return os << "Role::kDocAppendix";
    case Role::kDocBackLink:
      return os << "Role::kDocBackLink";
    case Role::kDocBiblioEntry:
      return os << "Role::kDocBiblioEntry";
    case Role::kDocBibliography:
      return os << "Role::kDocBibliography";
    case Role::kDocBiblioRef:
      return os << "Role::kDocBiblioRef";
    case Role::kDocChapter:
      return os << "Role::kDocChapter";
    case Role::kDocColophon:
      return os << "Role::kDocColophon";
    case Role::kDocConclusion:
      return os << "Role::kDocConclusion";
    case Role::kDocCover:
      return os << "Role::kDocCover";
    case Role::kDocCredit:
      return os << "Role::kDocCredit";
    case Role::kDocCredits:
      return os << "Role::kDocCredits";
    case Role::kDocDedication:
      return os << "Role::kDocDedication";
    case Role::kDocEndnote:
      return os << "Role::kDocEndnote";
    case Role::kDocEndnotes:
      return os << "Role::kDocEndnotes";
    case Role::kDocEpigraph:
      return os << "Role::kDocEpigraph";
    case Role::kDocEpilogue:
      return os << "Role::kDocEpilogue";
    case Role::kDocErrata:
      return os << "Role::kDocErrata";
    case Role::kDocExample:
      return os << "Role::kDocExample";
    case Role::kDocFootnote:
      return os << "Role::kDocFootnote";
    case Role::kDocForeword:
      return os << "Role::kDocForeword";
    case Role::kDocGlossary:
      return os << "Role::kDocGlossary";
    case Role::kDocGlossRef:
      return os << "Role::kDocGlossRef";
    case Role::kDocIndex:
      return os << "Role::kDocIndex";
    case Role::kDocIntroduction:
      return os << "Role::kDocIntroduction";
    case Role::kDocNoteRef:
      return os << "Role::kDocNoteRef";
    case Role::kDocNotice:
      return os << "Role::kDocNotice";
    case Role::kDocPageBreak:
      return os << "Role::kDocPageBreak";
    case Role::kDocPageList:
      return os << "Role::kDocPageList";
    case Role::kDocPart:
      return os << "Role::kDocPart";
    case Role::kDocPreface:
      return os << "Role::kDocPreface";
    case Role::kDocPrologue:
      return os << "Role::kDocPrologue";
    case Role::kDocPullquote:
      return os << "Role::kDocPullquote";
    case Role::kDocQna:
      return os << "Role::kDocQna";
    case Role::kDocSubtitle:
      return os << "Role::kDocSubtitle";
    case Role::kDocTip:
      return os << "Role::kDocTip";
    case Role::kDocToc:
      return os << "Role::kDocToc";
    case Role::kDocument:
      return os << "Role::kDocument";
    case Role::kEmbeddedObject:
      return os << "Role::kEmbeddedObject";
    case Role::kFeed:
      return os << "Role::kFeed";
    case Role::kFigcaption:
      return os << "Role::kFigcaption";
    case Role::kFigure:
      return os << "Role::kFigure";
    case Role::kFooter:
      return os << "Role::kFooter";
    case Role::kForm:
      return os << "Role::kForm";
    case Role::kGenericContainer:
      return os << "Role::kGenericContainer";
    case Role::kGraphicsDocument:
      return os << "Role::kGraphicsDocument";
    case Role::kGraphicsObject:
      return os << "Role::kGraphicsObject";
    case Role::kGraphicsSymbol:
      return os << "Role::kGraphicsSymbol";
    case Role::kGrid:
      return os << "Role::kGrid";
    case Role::kGroup:
      return os << "Role::kGroup";
    case Role::kHeading:
      return os << "Role::kHeading";
    case Role::kIframe:
      return os << "Role::kIframe";
    case Role::kIframePresentational:
      return os << "Role::kIframePresentational";
    case Role::kIgnored:
      return os << "Role::kIgnored";
    case Role::kImage:
      return os << "Role::kImage";
    case Role::kImageMap:
      return os << "Role::kImageMap";
    case Role::kInlineTextBox:
      return os << "Role::kInlineTextBox";
    case Role::kInputTime:
      return os << "Role::kInputTime";
    case Role::kLabelText:
      return os << "Role::kLabelText";
    case Role::kLayoutTable:
      return os << "Role::kLayoutTable";
    case Role::kLayoutTableCell:
      return os << "Role::kLayoutTableCell";
    case Role::kLayoutTableColumn:
      return os << "Role::kLayoutTableColumn";
    case Role::kLayoutTableRow:
      return os << "Role::kLayoutTableRow";
    case Role::kLegend:
      return os << "Role::kLegend";
    case Role::kLineBreak:
      return os << "Role::kLineBreak";
    case Role::kLink:
      return os << "Role::kLink";
    case Role::kList:
      return os << "Role::kList";
    case Role::kListBox:
      return os << "Role::kListBox";
    case Role::kListBoxOption:
      return os << "Role::kListBoxOption";
    case Role::kListItem:
      return os << "Role::kListItem";
    case Role::kListMarker:
      return os << "Role::kListMarker";
    case Role::kLocationBar:
      return os << "Role::kLocationBar";
    case Role::kLog:
      return os << "Role::kLog";
    case Role::kMain:
      return os << "Role::kMain";
    case Role::kMark:
      return os << "Role::kMark";
    case Role::kMarquee:
      return os << "Role::kMarquee";
    case Role::kMath:
      return os << "Role::kMath";
    case Role::kMenu:
      return os << "Role::kMenu";
    case Role::kMenuBar:
      return os << "Role::kMenuBar";
    case Role::kMenuButton:
      return os << "Role::kMenuButton";
    case Role::kMenuItem:
      return os << "Role::kMenuItem";
    case Role::kMenuItemCheckBox:
      return os << "Role::kMenuItemCheckBox";
    case Role::kMenuItemRadio:
      return os << "Role::kMenuItemRadio";
    case Role::kMenuListOption:
      return os << "Role::kMenuListOption";
    case Role::kMenuListPopup:
      return os << "Role::kMenuListPopup";
    case Role::kMeter:
      return os << "Role::kMeter";
    case Role::kNavigation:
      return os << "Role::kNavigation";
    case Role::kNote:
      return os << "Role::kNote";
    case Role::kPane:
      return os << "Role::kPane";
    case Role::kParagraph:
      return os << "Role::kParagraph";
    case Role::kPopUpButton:
      return os << "Role::kPopUpButton";
    case Role::kPre:
      return os << "Role::kPre";
    case Role::kPresentational:
      return os << "Role::kPresentational";
    case Role::kProgressIndicator:
      return os << "Role::kProgressIndicator";
    case Role::kRadioButton:
      return os << "Role::kRadioButton";
    case Role::kRadioGroup:
      return os << "Role::kRadioGroup";
    case Role::kRegion:
      return os << "Role::kRegion";
    case Role::kRootWebArea:
      return os << "Role::kRootWebArea";
    case Role::kRow:
      return os << "Role::kRow";
    case Role::kRowHeader:
      return os << "Role::kRowHeader";
    case Role::kRuby:
      return os << "Role::kRuby";
    case Role::kScrollBar:
      return os << "Role::kScrollBar";
    case Role::kScrollView:
      return os << "Role::kScrollView";
    case Role::kSearch:
      return os << "Role::kSearch";
    case Role::kSearchBox:
      return os << "Role::kSearchBox";
    case Role::kSlider:
      return os << "Role::kSlider";
    case Role::kSliderThumb:
      return os << "Role::kSliderThumb";
    case Role::kSpinButton:
      return os << "Role::kSpinButton";
    case Role::kSplitter:
      return os << "Role::kSplitter";
    case Role::kStaticText:
      return os << "Role::kStaticText";
    case Role::kStatus:
      return os << "Role::kStatus";
    case Role::kSvgRoot:
      return os << "Role::kSvgRoot";
    case Role::kSwitch:
      return os << "Role::kSwitch";
    case Role::kTab:
      return os << "Role::kTab";
    case Role::kTabList:
      return os << "Role::kTabList";
    case Role::kTabPanel:
      return os << "Role::kTabPanel";
    case Role::kTable:
      return os << "Role::kTable";
    case Role::kTableHeaderContainer:
      return os << "Role::kTableHeaderContainer";
    case Role::kTerm:
      return os << "Role::kTerm";
    case Role::kTextField:
      return os << "Role::kTextField";
    case Role::kTextFieldWithComboBox:
      return os << "Role::kTextFieldWithComboBox";
    case Role::kTime:
      return os << "Role::kTime";
    case Role::kTimer:
      return os << "Role::kTimer";
    case Role::kTitleBar:
      return os << "Role::kTitleBar";
    case Role::kToggleButton:
      return os << "Role::kToggleButton";
    case Role::kToolbar:
      return os << "Role::kToolbar";
    case Role::kTooltip:
      return os << "Role::kTooltip";
    case Role::kTree:
      return os << "Role::kTree";
    case Role::kTreeGrid:
      return os << "Role::kTreeGrid";
    case Role::kTreeItem:
      return os << "Role::kTreeItem";
    case Role::kUnknown:
      return os << "Role::kUnknown";
    case Role::kVideo:
      return os << "Role::kVideo";
    case Role::kWebArea:
      return os << "Role::kWebArea";
    case Role::kWebView:
      return os << "Role::kWebView";
    case Role::kWindow:
      return os << "Role::kWindow";
    default:
      return os << "Unknown Role value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Role value) {
  return internal::Role_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class State : int32_t {
  kNone,
  kCollapsed,
  kDefault,
  kEditable,
  kExpanded,
  kFocusable,
  kHasPopup,
  kHorizontal,
  kHovered,
  kIgnored,
  kInvisible,
  kLinked,
  kMultiline,
  kMultiselectable,
  kProtected,
  kRequired,
  kRichlyEditable,
  kVertical,
  kVisited,
  kMinValue = 0,
  kMaxValue = 18,
};

inline std::ostream& operator<<(std::ostream& os, State value) {
  switch(value) {
    case State::kNone:
      return os << "State::kNone";
    case State::kCollapsed:
      return os << "State::kCollapsed";
    case State::kDefault:
      return os << "State::kDefault";
    case State::kEditable:
      return os << "State::kEditable";
    case State::kExpanded:
      return os << "State::kExpanded";
    case State::kFocusable:
      return os << "State::kFocusable";
    case State::kHasPopup:
      return os << "State::kHasPopup";
    case State::kHorizontal:
      return os << "State::kHorizontal";
    case State::kHovered:
      return os << "State::kHovered";
    case State::kIgnored:
      return os << "State::kIgnored";
    case State::kInvisible:
      return os << "State::kInvisible";
    case State::kLinked:
      return os << "State::kLinked";
    case State::kMultiline:
      return os << "State::kMultiline";
    case State::kMultiselectable:
      return os << "State::kMultiselectable";
    case State::kProtected:
      return os << "State::kProtected";
    case State::kRequired:
      return os << "State::kRequired";
    case State::kRichlyEditable:
      return os << "State::kRichlyEditable";
    case State::kVertical:
      return os << "State::kVertical";
    case State::kVisited:
      return os << "State::kVisited";
    default:
      return os << "Unknown State value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(State value) {
  return internal::State_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Action : int32_t {
  kNone,
  kBlur,
  kClearAccessibilityFocus,
  kCustomAction,
  kDecrement,
  kDoDefault,
  kFocus,
  kGetImageData,
  kHitTest,
  kIncrement,
  kLoadInlineTextBoxes,
  kReplaceSelectedText,
  kScrollBackward,
  kScrollDown,
  kScrollForward,
  kScrollLeft,
  kScrollRight,
  kScrollUp,
  kScrollToMakeVisible,
  kScrollToPoint,
  kSetAccessibilityFocus,
  kSetScrollOffset,
  kSetSelection,
  kSetSequentialFocusNavigationStartingPoint,
  kSetValue,
  kShowContextMenu,
  kMinValue = 0,
  kMaxValue = 25,
};

inline std::ostream& operator<<(std::ostream& os, Action value) {
  switch(value) {
    case Action::kNone:
      return os << "Action::kNone";
    case Action::kBlur:
      return os << "Action::kBlur";
    case Action::kClearAccessibilityFocus:
      return os << "Action::kClearAccessibilityFocus";
    case Action::kCustomAction:
      return os << "Action::kCustomAction";
    case Action::kDecrement:
      return os << "Action::kDecrement";
    case Action::kDoDefault:
      return os << "Action::kDoDefault";
    case Action::kFocus:
      return os << "Action::kFocus";
    case Action::kGetImageData:
      return os << "Action::kGetImageData";
    case Action::kHitTest:
      return os << "Action::kHitTest";
    case Action::kIncrement:
      return os << "Action::kIncrement";
    case Action::kLoadInlineTextBoxes:
      return os << "Action::kLoadInlineTextBoxes";
    case Action::kReplaceSelectedText:
      return os << "Action::kReplaceSelectedText";
    case Action::kScrollBackward:
      return os << "Action::kScrollBackward";
    case Action::kScrollDown:
      return os << "Action::kScrollDown";
    case Action::kScrollForward:
      return os << "Action::kScrollForward";
    case Action::kScrollLeft:
      return os << "Action::kScrollLeft";
    case Action::kScrollRight:
      return os << "Action::kScrollRight";
    case Action::kScrollUp:
      return os << "Action::kScrollUp";
    case Action::kScrollToMakeVisible:
      return os << "Action::kScrollToMakeVisible";
    case Action::kScrollToPoint:
      return os << "Action::kScrollToPoint";
    case Action::kSetAccessibilityFocus:
      return os << "Action::kSetAccessibilityFocus";
    case Action::kSetScrollOffset:
      return os << "Action::kSetScrollOffset";
    case Action::kSetSelection:
      return os << "Action::kSetSelection";
    case Action::kSetSequentialFocusNavigationStartingPoint:
      return os << "Action::kSetSequentialFocusNavigationStartingPoint";
    case Action::kSetValue:
      return os << "Action::kSetValue";
    case Action::kShowContextMenu:
      return os << "Action::kShowContextMenu";
    default:
      return os << "Unknown Action value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Action value) {
  return internal::Action_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ActionFlags : int32_t {
  kNone,
  kRequestImages,
  kRequestInlineTextBoxes,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ActionFlags value) {
  switch(value) {
    case ActionFlags::kNone:
      return os << "ActionFlags::kNone";
    case ActionFlags::kRequestImages:
      return os << "ActionFlags::kRequestImages";
    case ActionFlags::kRequestInlineTextBoxes:
      return os << "ActionFlags::kRequestInlineTextBoxes";
    default:
      return os << "Unknown ActionFlags value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ActionFlags value) {
  return internal::ActionFlags_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class DefaultActionVerb : int32_t {
  kNone,
  kActivate,
  kCheck,
  kClick,
  kClickAncestor,
  kJump,
  kOpen,
  kPress,
  kSelect,
  kUncheck,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, DefaultActionVerb value) {
  switch(value) {
    case DefaultActionVerb::kNone:
      return os << "DefaultActionVerb::kNone";
    case DefaultActionVerb::kActivate:
      return os << "DefaultActionVerb::kActivate";
    case DefaultActionVerb::kCheck:
      return os << "DefaultActionVerb::kCheck";
    case DefaultActionVerb::kClick:
      return os << "DefaultActionVerb::kClick";
    case DefaultActionVerb::kClickAncestor:
      return os << "DefaultActionVerb::kClickAncestor";
    case DefaultActionVerb::kJump:
      return os << "DefaultActionVerb::kJump";
    case DefaultActionVerb::kOpen:
      return os << "DefaultActionVerb::kOpen";
    case DefaultActionVerb::kPress:
      return os << "DefaultActionVerb::kPress";
    case DefaultActionVerb::kSelect:
      return os << "DefaultActionVerb::kSelect";
    case DefaultActionVerb::kUncheck:
      return os << "DefaultActionVerb::kUncheck";
    default:
      return os << "Unknown DefaultActionVerb value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DefaultActionVerb value) {
  return internal::DefaultActionVerb_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Mutation : int32_t {
  kNone,
  kNodeCreated,
  kSubtreeCreated,
  kNodeChanged,
  kNodeRemoved,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, Mutation value) {
  switch(value) {
    case Mutation::kNone:
      return os << "Mutation::kNone";
    case Mutation::kNodeCreated:
      return os << "Mutation::kNodeCreated";
    case Mutation::kSubtreeCreated:
      return os << "Mutation::kSubtreeCreated";
    case Mutation::kNodeChanged:
      return os << "Mutation::kNodeChanged";
    case Mutation::kNodeRemoved:
      return os << "Mutation::kNodeRemoved";
    default:
      return os << "Unknown Mutation value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Mutation value) {
  return internal::Mutation_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class StringAttribute : int32_t {
  kNone,
  kAccessKey,
  kAriaInvalidValue,
  kAutoComplete,
  kChromeChannel,
  kClassName,
  kContainerLiveRelevant,
  kContainerLiveStatus,
  kDescription,
  kDisplay,
  kFontFamily,
  kHtmlTag,
  kImageDataUrl,
  kInnerHtml,
  kKeyShortcuts,
  kLanguage,
  kName,
  kLiveRelevant,
  kLiveStatus,
  kPlaceholder,
  kRole,
  kRoleDescription,
  kUrl,
  kValue,
  kMinValue = 0,
  kMaxValue = 23,
};

inline std::ostream& operator<<(std::ostream& os, StringAttribute value) {
  switch(value) {
    case StringAttribute::kNone:
      return os << "StringAttribute::kNone";
    case StringAttribute::kAccessKey:
      return os << "StringAttribute::kAccessKey";
    case StringAttribute::kAriaInvalidValue:
      return os << "StringAttribute::kAriaInvalidValue";
    case StringAttribute::kAutoComplete:
      return os << "StringAttribute::kAutoComplete";
    case StringAttribute::kChromeChannel:
      return os << "StringAttribute::kChromeChannel";
    case StringAttribute::kClassName:
      return os << "StringAttribute::kClassName";
    case StringAttribute::kContainerLiveRelevant:
      return os << "StringAttribute::kContainerLiveRelevant";
    case StringAttribute::kContainerLiveStatus:
      return os << "StringAttribute::kContainerLiveStatus";
    case StringAttribute::kDescription:
      return os << "StringAttribute::kDescription";
    case StringAttribute::kDisplay:
      return os << "StringAttribute::kDisplay";
    case StringAttribute::kFontFamily:
      return os << "StringAttribute::kFontFamily";
    case StringAttribute::kHtmlTag:
      return os << "StringAttribute::kHtmlTag";
    case StringAttribute::kImageDataUrl:
      return os << "StringAttribute::kImageDataUrl";
    case StringAttribute::kInnerHtml:
      return os << "StringAttribute::kInnerHtml";
    case StringAttribute::kKeyShortcuts:
      return os << "StringAttribute::kKeyShortcuts";
    case StringAttribute::kLanguage:
      return os << "StringAttribute::kLanguage";
    case StringAttribute::kName:
      return os << "StringAttribute::kName";
    case StringAttribute::kLiveRelevant:
      return os << "StringAttribute::kLiveRelevant";
    case StringAttribute::kLiveStatus:
      return os << "StringAttribute::kLiveStatus";
    case StringAttribute::kPlaceholder:
      return os << "StringAttribute::kPlaceholder";
    case StringAttribute::kRole:
      return os << "StringAttribute::kRole";
    case StringAttribute::kRoleDescription:
      return os << "StringAttribute::kRoleDescription";
    case StringAttribute::kUrl:
      return os << "StringAttribute::kUrl";
    case StringAttribute::kValue:
      return os << "StringAttribute::kValue";
    default:
      return os << "Unknown StringAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(StringAttribute value) {
  return internal::StringAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class IntAttribute : int32_t {
  kNone,
  kDefaultActionVerb,
  kScrollX,
  kScrollXMin,
  kScrollXMax,
  kScrollY,
  kScrollYMin,
  kScrollYMax,
  kTextSelStart,
  kTextSelEnd,
  kAriaColumnCount,
  kAriaCellColumnIndex,
  kAriaRowCount,
  kAriaCellRowIndex,
  kTableRowCount,
  kTableColumnCount,
  kTableHeaderId,
  kTableRowIndex,
  kTableRowHeaderId,
  kTableColumnIndex,
  kTableColumnHeaderId,
  kTableCellColumnIndex,
  kTableCellColumnSpan,
  kTableCellRowIndex,
  kTableCellRowSpan,
  kSortDirection,
  kHierarchicalLevel,
  kNameFrom,
  kDescriptionFrom,
  kActivedescendantId,
  kDetailsId,
  kErrormessageId,
  kInPageLinkTargetId,
  kMemberOfId,
  kNextOnLineId,
  kPreviousOnLineId,
  kChildTreeId,
  kRestriction,
  kSetSize,
  kPosInSet,
  kColorValue,
  kAriaCurrentState,
  kBackgroundColor,
  kColor,
  kHasPopup,
  kInvalidState,
  kCheckedState,
  kTextDirection,
  kTextPosition,
  kTextStyle,
  kPreviousFocusId,
  kNextFocusId,
  kMinValue = 0,
  kMaxValue = 51,
};

inline std::ostream& operator<<(std::ostream& os, IntAttribute value) {
  switch(value) {
    case IntAttribute::kNone:
      return os << "IntAttribute::kNone";
    case IntAttribute::kDefaultActionVerb:
      return os << "IntAttribute::kDefaultActionVerb";
    case IntAttribute::kScrollX:
      return os << "IntAttribute::kScrollX";
    case IntAttribute::kScrollXMin:
      return os << "IntAttribute::kScrollXMin";
    case IntAttribute::kScrollXMax:
      return os << "IntAttribute::kScrollXMax";
    case IntAttribute::kScrollY:
      return os << "IntAttribute::kScrollY";
    case IntAttribute::kScrollYMin:
      return os << "IntAttribute::kScrollYMin";
    case IntAttribute::kScrollYMax:
      return os << "IntAttribute::kScrollYMax";
    case IntAttribute::kTextSelStart:
      return os << "IntAttribute::kTextSelStart";
    case IntAttribute::kTextSelEnd:
      return os << "IntAttribute::kTextSelEnd";
    case IntAttribute::kAriaColumnCount:
      return os << "IntAttribute::kAriaColumnCount";
    case IntAttribute::kAriaCellColumnIndex:
      return os << "IntAttribute::kAriaCellColumnIndex";
    case IntAttribute::kAriaRowCount:
      return os << "IntAttribute::kAriaRowCount";
    case IntAttribute::kAriaCellRowIndex:
      return os << "IntAttribute::kAriaCellRowIndex";
    case IntAttribute::kTableRowCount:
      return os << "IntAttribute::kTableRowCount";
    case IntAttribute::kTableColumnCount:
      return os << "IntAttribute::kTableColumnCount";
    case IntAttribute::kTableHeaderId:
      return os << "IntAttribute::kTableHeaderId";
    case IntAttribute::kTableRowIndex:
      return os << "IntAttribute::kTableRowIndex";
    case IntAttribute::kTableRowHeaderId:
      return os << "IntAttribute::kTableRowHeaderId";
    case IntAttribute::kTableColumnIndex:
      return os << "IntAttribute::kTableColumnIndex";
    case IntAttribute::kTableColumnHeaderId:
      return os << "IntAttribute::kTableColumnHeaderId";
    case IntAttribute::kTableCellColumnIndex:
      return os << "IntAttribute::kTableCellColumnIndex";
    case IntAttribute::kTableCellColumnSpan:
      return os << "IntAttribute::kTableCellColumnSpan";
    case IntAttribute::kTableCellRowIndex:
      return os << "IntAttribute::kTableCellRowIndex";
    case IntAttribute::kTableCellRowSpan:
      return os << "IntAttribute::kTableCellRowSpan";
    case IntAttribute::kSortDirection:
      return os << "IntAttribute::kSortDirection";
    case IntAttribute::kHierarchicalLevel:
      return os << "IntAttribute::kHierarchicalLevel";
    case IntAttribute::kNameFrom:
      return os << "IntAttribute::kNameFrom";
    case IntAttribute::kDescriptionFrom:
      return os << "IntAttribute::kDescriptionFrom";
    case IntAttribute::kActivedescendantId:
      return os << "IntAttribute::kActivedescendantId";
    case IntAttribute::kDetailsId:
      return os << "IntAttribute::kDetailsId";
    case IntAttribute::kErrormessageId:
      return os << "IntAttribute::kErrormessageId";
    case IntAttribute::kInPageLinkTargetId:
      return os << "IntAttribute::kInPageLinkTargetId";
    case IntAttribute::kMemberOfId:
      return os << "IntAttribute::kMemberOfId";
    case IntAttribute::kNextOnLineId:
      return os << "IntAttribute::kNextOnLineId";
    case IntAttribute::kPreviousOnLineId:
      return os << "IntAttribute::kPreviousOnLineId";
    case IntAttribute::kChildTreeId:
      return os << "IntAttribute::kChildTreeId";
    case IntAttribute::kRestriction:
      return os << "IntAttribute::kRestriction";
    case IntAttribute::kSetSize:
      return os << "IntAttribute::kSetSize";
    case IntAttribute::kPosInSet:
      return os << "IntAttribute::kPosInSet";
    case IntAttribute::kColorValue:
      return os << "IntAttribute::kColorValue";
    case IntAttribute::kAriaCurrentState:
      return os << "IntAttribute::kAriaCurrentState";
    case IntAttribute::kBackgroundColor:
      return os << "IntAttribute::kBackgroundColor";
    case IntAttribute::kColor:
      return os << "IntAttribute::kColor";
    case IntAttribute::kHasPopup:
      return os << "IntAttribute::kHasPopup";
    case IntAttribute::kInvalidState:
      return os << "IntAttribute::kInvalidState";
    case IntAttribute::kCheckedState:
      return os << "IntAttribute::kCheckedState";
    case IntAttribute::kTextDirection:
      return os << "IntAttribute::kTextDirection";
    case IntAttribute::kTextPosition:
      return os << "IntAttribute::kTextPosition";
    case IntAttribute::kTextStyle:
      return os << "IntAttribute::kTextStyle";
    case IntAttribute::kPreviousFocusId:
      return os << "IntAttribute::kPreviousFocusId";
    case IntAttribute::kNextFocusId:
      return os << "IntAttribute::kNextFocusId";
    default:
      return os << "Unknown IntAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(IntAttribute value) {
  return internal::IntAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FloatAttribute : int32_t {
  kNone,
  kValueForRange,
  kMinValueForRange,
  kMaxValueForRange,
  kStepValueForRange,
  kFontSize,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, FloatAttribute value) {
  switch(value) {
    case FloatAttribute::kNone:
      return os << "FloatAttribute::kNone";
    case FloatAttribute::kValueForRange:
      return os << "FloatAttribute::kValueForRange";
    case FloatAttribute::kMinValueForRange:
      return os << "FloatAttribute::kMinValueForRange";
    case FloatAttribute::kMaxValueForRange:
      return os << "FloatAttribute::kMaxValueForRange";
    case FloatAttribute::kStepValueForRange:
      return os << "FloatAttribute::kStepValueForRange";
    case FloatAttribute::kFontSize:
      return os << "FloatAttribute::kFontSize";
    default:
      return os << "Unknown FloatAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FloatAttribute value) {
  return internal::FloatAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class BoolAttribute : int32_t {
  kNone,
  kBusy,
  kEditableRoot,
  kContainerLiveAtomic,
  kContainerLiveBusy,
  kLiveAtomic,
  kModal,
  kUpdateLocationOnly,
  kCanvasHasFallback,
  kScrollable,
  kClickable,
  kClipsChildren,
  kSelected,
  kMinValue = 0,
  kMaxValue = 12,
};

inline std::ostream& operator<<(std::ostream& os, BoolAttribute value) {
  switch(value) {
    case BoolAttribute::kNone:
      return os << "BoolAttribute::kNone";
    case BoolAttribute::kBusy:
      return os << "BoolAttribute::kBusy";
    case BoolAttribute::kEditableRoot:
      return os << "BoolAttribute::kEditableRoot";
    case BoolAttribute::kContainerLiveAtomic:
      return os << "BoolAttribute::kContainerLiveAtomic";
    case BoolAttribute::kContainerLiveBusy:
      return os << "BoolAttribute::kContainerLiveBusy";
    case BoolAttribute::kLiveAtomic:
      return os << "BoolAttribute::kLiveAtomic";
    case BoolAttribute::kModal:
      return os << "BoolAttribute::kModal";
    case BoolAttribute::kUpdateLocationOnly:
      return os << "BoolAttribute::kUpdateLocationOnly";
    case BoolAttribute::kCanvasHasFallback:
      return os << "BoolAttribute::kCanvasHasFallback";
    case BoolAttribute::kScrollable:
      return os << "BoolAttribute::kScrollable";
    case BoolAttribute::kClickable:
      return os << "BoolAttribute::kClickable";
    case BoolAttribute::kClipsChildren:
      return os << "BoolAttribute::kClipsChildren";
    case BoolAttribute::kSelected:
      return os << "BoolAttribute::kSelected";
    default:
      return os << "Unknown BoolAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BoolAttribute value) {
  return internal::BoolAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class IntListAttribute : int32_t {
  kNone,
  kIndirectChildIds,
  kControlsIds,
  kDescribedbyIds,
  kFlowtoIds,
  kLabelledbyIds,
  kRadioGroupIds,
  kLineBreaks,
  kMarkerTypes,
  kMarkerStarts,
  kMarkerEnds,
  kCharacterOffsets,
  kCachedLineStarts,
  kWordStarts,
  kWordEnds,
  kCustomActionIds,
  kMinValue = 0,
  kMaxValue = 15,
};

inline std::ostream& operator<<(std::ostream& os, IntListAttribute value) {
  switch(value) {
    case IntListAttribute::kNone:
      return os << "IntListAttribute::kNone";
    case IntListAttribute::kIndirectChildIds:
      return os << "IntListAttribute::kIndirectChildIds";
    case IntListAttribute::kControlsIds:
      return os << "IntListAttribute::kControlsIds";
    case IntListAttribute::kDescribedbyIds:
      return os << "IntListAttribute::kDescribedbyIds";
    case IntListAttribute::kFlowtoIds:
      return os << "IntListAttribute::kFlowtoIds";
    case IntListAttribute::kLabelledbyIds:
      return os << "IntListAttribute::kLabelledbyIds";
    case IntListAttribute::kRadioGroupIds:
      return os << "IntListAttribute::kRadioGroupIds";
    case IntListAttribute::kLineBreaks:
      return os << "IntListAttribute::kLineBreaks";
    case IntListAttribute::kMarkerTypes:
      return os << "IntListAttribute::kMarkerTypes";
    case IntListAttribute::kMarkerStarts:
      return os << "IntListAttribute::kMarkerStarts";
    case IntListAttribute::kMarkerEnds:
      return os << "IntListAttribute::kMarkerEnds";
    case IntListAttribute::kCharacterOffsets:
      return os << "IntListAttribute::kCharacterOffsets";
    case IntListAttribute::kCachedLineStarts:
      return os << "IntListAttribute::kCachedLineStarts";
    case IntListAttribute::kWordStarts:
      return os << "IntListAttribute::kWordStarts";
    case IntListAttribute::kWordEnds:
      return os << "IntListAttribute::kWordEnds";
    case IntListAttribute::kCustomActionIds:
      return os << "IntListAttribute::kCustomActionIds";
    default:
      return os << "Unknown IntListAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(IntListAttribute value) {
  return internal::IntListAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class StringListAttribute : int32_t {
  kNone,
  kCustomActionDescriptions,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, StringListAttribute value) {
  switch(value) {
    case StringListAttribute::kNone:
      return os << "StringListAttribute::kNone";
    case StringListAttribute::kCustomActionDescriptions:
      return os << "StringListAttribute::kCustomActionDescriptions";
    default:
      return os << "Unknown StringListAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(StringListAttribute value) {
  return internal::StringListAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MarkerType : int32_t {
  kNone,
  kSpelling = 1,
  kGrammar = 2,
  kSpellingGrammar = 3,
  kTextMatch = 4,
  kSpellingTextMatch = 5,
  kGrammarTextMatch = 6,
  kSpellingGrammarTextMatch = 7,
  kActiveSuggestion = 16,
  kSpellingActiveSuggestion = 17,
  kGrammarActiveSuggestion = 18,
  kSpellingGrammarActiveSuggestion = 19,
  kTextMatchActiveSuggestion = 20,
  kSpellingTextMatchActiveSuggestion = 21,
  kGrammarTextMatchActiveSuggestion = 22,
  kSpellingGrammarTextMatchActiveSuggestion = 23,
  kSuggestion = 32,
  kSpellingSuggestion = 33,
  kGrammarSuggestion = 34,
  kSpellingGrammarSuggestion = 35,
  kTextMatchSuggestion = 36,
  kSpellingTextMatchSuggestion = 37,
  kGrammarTextMatchSuggestion = 38,
  kSpellingGrammarTextMatchSuggestion = 39,
  kActiveSuggestionSuggestion = 48,
  kSpellingActiveSuggestionSuggestion = 49,
  kGrammarActiveSuggestionSuggestion = 50,
  kSpellingGrammarActiveSuggestionSuggestion = 51,
  kTextMatchActiveSuggestionSuggestion = 52,
  kSpellingTextMatchActiveSuggestionSuggestion = 53,
  kGrammarTextMatchActiveSuggestionSuggestion = 54,
  kSpellingGrammarTextMatchActiveSuggestionSuggestion = 55,
  kMinValue = 0,
  kMaxValue = 55,
};

inline std::ostream& operator<<(std::ostream& os, MarkerType value) {
  switch(value) {
    case MarkerType::kNone:
      return os << "MarkerType::kNone";
    case MarkerType::kSpelling:
      return os << "MarkerType::kSpelling";
    case MarkerType::kGrammar:
      return os << "MarkerType::kGrammar";
    case MarkerType::kSpellingGrammar:
      return os << "MarkerType::kSpellingGrammar";
    case MarkerType::kTextMatch:
      return os << "MarkerType::kTextMatch";
    case MarkerType::kSpellingTextMatch:
      return os << "MarkerType::kSpellingTextMatch";
    case MarkerType::kGrammarTextMatch:
      return os << "MarkerType::kGrammarTextMatch";
    case MarkerType::kSpellingGrammarTextMatch:
      return os << "MarkerType::kSpellingGrammarTextMatch";
    case MarkerType::kActiveSuggestion:
      return os << "MarkerType::kActiveSuggestion";
    case MarkerType::kSpellingActiveSuggestion:
      return os << "MarkerType::kSpellingActiveSuggestion";
    case MarkerType::kGrammarActiveSuggestion:
      return os << "MarkerType::kGrammarActiveSuggestion";
    case MarkerType::kSpellingGrammarActiveSuggestion:
      return os << "MarkerType::kSpellingGrammarActiveSuggestion";
    case MarkerType::kTextMatchActiveSuggestion:
      return os << "MarkerType::kTextMatchActiveSuggestion";
    case MarkerType::kSpellingTextMatchActiveSuggestion:
      return os << "MarkerType::kSpellingTextMatchActiveSuggestion";
    case MarkerType::kGrammarTextMatchActiveSuggestion:
      return os << "MarkerType::kGrammarTextMatchActiveSuggestion";
    case MarkerType::kSpellingGrammarTextMatchActiveSuggestion:
      return os << "MarkerType::kSpellingGrammarTextMatchActiveSuggestion";
    case MarkerType::kSuggestion:
      return os << "MarkerType::kSuggestion";
    case MarkerType::kSpellingSuggestion:
      return os << "MarkerType::kSpellingSuggestion";
    case MarkerType::kGrammarSuggestion:
      return os << "MarkerType::kGrammarSuggestion";
    case MarkerType::kSpellingGrammarSuggestion:
      return os << "MarkerType::kSpellingGrammarSuggestion";
    case MarkerType::kTextMatchSuggestion:
      return os << "MarkerType::kTextMatchSuggestion";
    case MarkerType::kSpellingTextMatchSuggestion:
      return os << "MarkerType::kSpellingTextMatchSuggestion";
    case MarkerType::kGrammarTextMatchSuggestion:
      return os << "MarkerType::kGrammarTextMatchSuggestion";
    case MarkerType::kSpellingGrammarTextMatchSuggestion:
      return os << "MarkerType::kSpellingGrammarTextMatchSuggestion";
    case MarkerType::kActiveSuggestionSuggestion:
      return os << "MarkerType::kActiveSuggestionSuggestion";
    case MarkerType::kSpellingActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingActiveSuggestionSuggestion";
    case MarkerType::kGrammarActiveSuggestionSuggestion:
      return os << "MarkerType::kGrammarActiveSuggestionSuggestion";
    case MarkerType::kSpellingGrammarActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingGrammarActiveSuggestionSuggestion";
    case MarkerType::kTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kTextMatchActiveSuggestionSuggestion";
    case MarkerType::kSpellingTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingTextMatchActiveSuggestionSuggestion";
    case MarkerType::kGrammarTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kGrammarTextMatchActiveSuggestionSuggestion";
    case MarkerType::kSpellingGrammarTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingGrammarTextMatchActiveSuggestionSuggestion";
    default:
      return os << "Unknown MarkerType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MarkerType value) {
  return internal::MarkerType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextDirection : int32_t {
  kNone,
  kLtr,
  kRtl,
  kTtb,
  kBtt,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, TextDirection value) {
  switch(value) {
    case TextDirection::kNone:
      return os << "TextDirection::kNone";
    case TextDirection::kLtr:
      return os << "TextDirection::kLtr";
    case TextDirection::kRtl:
      return os << "TextDirection::kRtl";
    case TextDirection::kTtb:
      return os << "TextDirection::kTtb";
    case TextDirection::kBtt:
      return os << "TextDirection::kBtt";
    default:
      return os << "Unknown TextDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextDirection value) {
  return internal::TextDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextPosition : int32_t {
  kNone,
  kSubscript,
  kSuperscript,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, TextPosition value) {
  switch(value) {
    case TextPosition::kNone:
      return os << "TextPosition::kNone";
    case TextPosition::kSubscript:
      return os << "TextPosition::kSubscript";
    case TextPosition::kSuperscript:
      return os << "TextPosition::kSuperscript";
    default:
      return os << "Unknown TextPosition value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextPosition value) {
  return internal::TextPosition_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextStyle : int32_t {
  kNone,
  kTextStyleBold = 1,
  kTextStyleItalic = 2,
  kTextStyleBoldItalic = 3,
  kTextStyleUnderline = 4,
  kTextStyleBoldUnderline = 5,
  kTextStyleItalicUnderline = 6,
  kTextStyleBoldItalicUnderline = 7,
  kTextStyleLineThrough = 8,
  kTextStyleBoldLineThrough = 9,
  kTextStyleItalicLineThrough = 10,
  kTextStyleBoldItalicLineThrough = 11,
  kTextStyleUnderlineLineThrough = 12,
  kTextStyleBoldUnderlineLineThrough = 13,
  kTextStyleItalicUnderlineLineThrough = 14,
  kTextStyleBoldItalicUnderlineLineThrough = 15,
  kMinValue = 0,
  kMaxValue = 15,
};

inline std::ostream& operator<<(std::ostream& os, TextStyle value) {
  switch(value) {
    case TextStyle::kNone:
      return os << "TextStyle::kNone";
    case TextStyle::kTextStyleBold:
      return os << "TextStyle::kTextStyleBold";
    case TextStyle::kTextStyleItalic:
      return os << "TextStyle::kTextStyleItalic";
    case TextStyle::kTextStyleBoldItalic:
      return os << "TextStyle::kTextStyleBoldItalic";
    case TextStyle::kTextStyleUnderline:
      return os << "TextStyle::kTextStyleUnderline";
    case TextStyle::kTextStyleBoldUnderline:
      return os << "TextStyle::kTextStyleBoldUnderline";
    case TextStyle::kTextStyleItalicUnderline:
      return os << "TextStyle::kTextStyleItalicUnderline";
    case TextStyle::kTextStyleBoldItalicUnderline:
      return os << "TextStyle::kTextStyleBoldItalicUnderline";
    case TextStyle::kTextStyleLineThrough:
      return os << "TextStyle::kTextStyleLineThrough";
    case TextStyle::kTextStyleBoldLineThrough:
      return os << "TextStyle::kTextStyleBoldLineThrough";
    case TextStyle::kTextStyleItalicLineThrough:
      return os << "TextStyle::kTextStyleItalicLineThrough";
    case TextStyle::kTextStyleBoldItalicLineThrough:
      return os << "TextStyle::kTextStyleBoldItalicLineThrough";
    case TextStyle::kTextStyleUnderlineLineThrough:
      return os << "TextStyle::kTextStyleUnderlineLineThrough";
    case TextStyle::kTextStyleBoldUnderlineLineThrough:
      return os << "TextStyle::kTextStyleBoldUnderlineLineThrough";
    case TextStyle::kTextStyleItalicUnderlineLineThrough:
      return os << "TextStyle::kTextStyleItalicUnderlineLineThrough";
    case TextStyle::kTextStyleBoldItalicUnderlineLineThrough:
      return os << "TextStyle::kTextStyleBoldItalicUnderlineLineThrough";
    default:
      return os << "Unknown TextStyle value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextStyle value) {
  return internal::TextStyle_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AriaCurrentState : int32_t {
  kNone,
  kFalse,
  kTrue,
  kPage,
  kStep,
  kLocation,
  kUnclippedLocation,
  kDate,
  kTime,
  kMinValue = 0,
  kMaxValue = 8,
};

inline std::ostream& operator<<(std::ostream& os, AriaCurrentState value) {
  switch(value) {
    case AriaCurrentState::kNone:
      return os << "AriaCurrentState::kNone";
    case AriaCurrentState::kFalse:
      return os << "AriaCurrentState::kFalse";
    case AriaCurrentState::kTrue:
      return os << "AriaCurrentState::kTrue";
    case AriaCurrentState::kPage:
      return os << "AriaCurrentState::kPage";
    case AriaCurrentState::kStep:
      return os << "AriaCurrentState::kStep";
    case AriaCurrentState::kLocation:
      return os << "AriaCurrentState::kLocation";
    case AriaCurrentState::kUnclippedLocation:
      return os << "AriaCurrentState::kUnclippedLocation";
    case AriaCurrentState::kDate:
      return os << "AriaCurrentState::kDate";
    case AriaCurrentState::kTime:
      return os << "AriaCurrentState::kTime";
    default:
      return os << "Unknown AriaCurrentState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AriaCurrentState value) {
  return internal::AriaCurrentState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class HasPopup : int32_t {
  kFalse = 0,
  kTrue,
  kMenu,
  kListbox,
  kTree,
  kGrid,
  kDialog,
  kLast = HasPopup::kDialog,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, HasPopup value) {
  switch(value) {
    case HasPopup::kFalse:
      return os << "HasPopup::kFalse";
    case HasPopup::kTrue:
      return os << "HasPopup::kTrue";
    case HasPopup::kMenu:
      return os << "HasPopup::kMenu";
    case HasPopup::kListbox:
      return os << "HasPopup::kListbox";
    case HasPopup::kTree:
      return os << "HasPopup::kTree";
    case HasPopup::kGrid:
      return os << "HasPopup::kGrid";
    case HasPopup::kDialog:
      return os << "HasPopup::{kDialog, kLast}";
    default:
      return os << "Unknown HasPopup value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(HasPopup value) {
  return internal::HasPopup_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class InvalidState : int32_t {
  kNone,
  kFalse,
  kTrue,
  kSpelling,
  kGrammar,
  kOther,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, InvalidState value) {
  switch(value) {
    case InvalidState::kNone:
      return os << "InvalidState::kNone";
    case InvalidState::kFalse:
      return os << "InvalidState::kFalse";
    case InvalidState::kTrue:
      return os << "InvalidState::kTrue";
    case InvalidState::kSpelling:
      return os << "InvalidState::kSpelling";
    case InvalidState::kGrammar:
      return os << "InvalidState::kGrammar";
    case InvalidState::kOther:
      return os << "InvalidState::kOther";
    default:
      return os << "Unknown InvalidState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(InvalidState value) {
  return internal::InvalidState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Restriction : int32_t {
  kNone,
  kReadOnly,
  kDisabled,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, Restriction value) {
  switch(value) {
    case Restriction::kNone:
      return os << "Restriction::kNone";
    case Restriction::kReadOnly:
      return os << "Restriction::kReadOnly";
    case Restriction::kDisabled:
      return os << "Restriction::kDisabled";
    default:
      return os << "Unknown Restriction value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Restriction value) {
  return internal::Restriction_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CheckedState : int32_t {
  kNone,
  kFalse,
  kTrue,
  kMixed,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, CheckedState value) {
  switch(value) {
    case CheckedState::kNone:
      return os << "CheckedState::kNone";
    case CheckedState::kFalse:
      return os << "CheckedState::kFalse";
    case CheckedState::kTrue:
      return os << "CheckedState::kTrue";
    case CheckedState::kMixed:
      return os << "CheckedState::kMixed";
    default:
      return os << "Unknown CheckedState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CheckedState value) {
  return internal::CheckedState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SortDirection : int32_t {
  kNone,
  kUnsorted,
  kAscending,
  kDescending,
  kOther,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, SortDirection value) {
  switch(value) {
    case SortDirection::kNone:
      return os << "SortDirection::kNone";
    case SortDirection::kUnsorted:
      return os << "SortDirection::kUnsorted";
    case SortDirection::kAscending:
      return os << "SortDirection::kAscending";
    case SortDirection::kDescending:
      return os << "SortDirection::kDescending";
    case SortDirection::kOther:
      return os << "SortDirection::kOther";
    default:
      return os << "Unknown SortDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SortDirection value) {
  return internal::SortDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class NameFrom : int32_t {
  kNone,
  kUninitialized,
  kAttribute,
  kAttributeExplicitlyEmpty,
  kContents,
  kPlaceholder,
  kRelatedElement,
  kValue,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, NameFrom value) {
  switch(value) {
    case NameFrom::kNone:
      return os << "NameFrom::kNone";
    case NameFrom::kUninitialized:
      return os << "NameFrom::kUninitialized";
    case NameFrom::kAttribute:
      return os << "NameFrom::kAttribute";
    case NameFrom::kAttributeExplicitlyEmpty:
      return os << "NameFrom::kAttributeExplicitlyEmpty";
    case NameFrom::kContents:
      return os << "NameFrom::kContents";
    case NameFrom::kPlaceholder:
      return os << "NameFrom::kPlaceholder";
    case NameFrom::kRelatedElement:
      return os << "NameFrom::kRelatedElement";
    case NameFrom::kValue:
      return os << "NameFrom::kValue";
    default:
      return os << "Unknown NameFrom value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NameFrom value) {
  return internal::NameFrom_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class DescriptionFrom : int32_t {
  kNone,
  kUninitialized,
  kAttribute,
  kContents,
  kPlaceholder,
  kRelatedElement,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, DescriptionFrom value) {
  switch(value) {
    case DescriptionFrom::kNone:
      return os << "DescriptionFrom::kNone";
    case DescriptionFrom::kUninitialized:
      return os << "DescriptionFrom::kUninitialized";
    case DescriptionFrom::kAttribute:
      return os << "DescriptionFrom::kAttribute";
    case DescriptionFrom::kContents:
      return os << "DescriptionFrom::kContents";
    case DescriptionFrom::kPlaceholder:
      return os << "DescriptionFrom::kPlaceholder";
    case DescriptionFrom::kRelatedElement:
      return os << "DescriptionFrom::kRelatedElement";
    default:
      return os << "Unknown DescriptionFrom value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DescriptionFrom value) {
  return internal::DescriptionFrom_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class EventFrom : int32_t {
  kNone,
  kUser,
  kPage,
  kAction,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, EventFrom value) {
  switch(value) {
    case EventFrom::kNone:
      return os << "EventFrom::kNone";
    case EventFrom::kUser:
      return os << "EventFrom::kUser";
    case EventFrom::kPage:
      return os << "EventFrom::kPage";
    case EventFrom::kAction:
      return os << "EventFrom::kAction";
    default:
      return os << "Unknown EventFrom value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EventFrom value) {
  return internal::EventFrom_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Gesture : int32_t {
  kNone,
  kClick,
  kSwipeLeft1,
  kSwipeUp1,
  kSwipeRight1,
  kSwipeDown1,
  kSwipeLeft2,
  kSwipeUp2,
  kSwipeRight2,
  kSwipeDown2,
  kSwipeLeft3,
  kSwipeUp3,
  kSwipeRight3,
  kSwipeDown3,
  kSwipeLeft4,
  kSwipeUp4,
  kSwipeRight4,
  kSwipeDown4,
  kTap2,
  kTap3,
  kTap4,
  kMinValue = 0,
  kMaxValue = 20,
};

inline std::ostream& operator<<(std::ostream& os, Gesture value) {
  switch(value) {
    case Gesture::kNone:
      return os << "Gesture::kNone";
    case Gesture::kClick:
      return os << "Gesture::kClick";
    case Gesture::kSwipeLeft1:
      return os << "Gesture::kSwipeLeft1";
    case Gesture::kSwipeUp1:
      return os << "Gesture::kSwipeUp1";
    case Gesture::kSwipeRight1:
      return os << "Gesture::kSwipeRight1";
    case Gesture::kSwipeDown1:
      return os << "Gesture::kSwipeDown1";
    case Gesture::kSwipeLeft2:
      return os << "Gesture::kSwipeLeft2";
    case Gesture::kSwipeUp2:
      return os << "Gesture::kSwipeUp2";
    case Gesture::kSwipeRight2:
      return os << "Gesture::kSwipeRight2";
    case Gesture::kSwipeDown2:
      return os << "Gesture::kSwipeDown2";
    case Gesture::kSwipeLeft3:
      return os << "Gesture::kSwipeLeft3";
    case Gesture::kSwipeUp3:
      return os << "Gesture::kSwipeUp3";
    case Gesture::kSwipeRight3:
      return os << "Gesture::kSwipeRight3";
    case Gesture::kSwipeDown3:
      return os << "Gesture::kSwipeDown3";
    case Gesture::kSwipeLeft4:
      return os << "Gesture::kSwipeLeft4";
    case Gesture::kSwipeUp4:
      return os << "Gesture::kSwipeUp4";
    case Gesture::kSwipeRight4:
      return os << "Gesture::kSwipeRight4";
    case Gesture::kSwipeDown4:
      return os << "Gesture::kSwipeDown4";
    case Gesture::kTap2:
      return os << "Gesture::kTap2";
    case Gesture::kTap3:
      return os << "Gesture::kTap3";
    case Gesture::kTap4:
      return os << "Gesture::kTap4";
    default:
      return os << "Unknown Gesture value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Gesture value) {
  return internal::Gesture_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextAffinity : int32_t {
  kNone,
  kDownstream,
  kUpstream,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, TextAffinity value) {
  switch(value) {
    case TextAffinity::kNone:
      return os << "TextAffinity::kNone";
    case TextAffinity::kDownstream:
      return os << "TextAffinity::kDownstream";
    case TextAffinity::kUpstream:
      return os << "TextAffinity::kUpstream";
    default:
      return os << "Unknown TextAffinity value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextAffinity value) {
  return internal::TextAffinity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TreeOrder : int32_t {
  kNone,
  kUndefined,
  kBefore,
  kEqual,
  kAfter,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, TreeOrder value) {
  switch(value) {
    case TreeOrder::kNone:
      return os << "TreeOrder::kNone";
    case TreeOrder::kUndefined:
      return os << "TreeOrder::kUndefined";
    case TreeOrder::kBefore:
      return os << "TreeOrder::kBefore";
    case TreeOrder::kEqual:
      return os << "TreeOrder::kEqual";
    case TreeOrder::kAfter:
      return os << "TreeOrder::kAfter";
    default:
      return os << "Unknown TreeOrder value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TreeOrder value) {
  return internal::TreeOrder_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ax

namespace std {

template <>
struct hash<::ax::mojom::Event>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Event> {};

template <>
struct hash<::ax::mojom::Role>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Role> {};

template <>
struct hash<::ax::mojom::State>
    : public mojo::internal::EnumHashImpl<::ax::mojom::State> {};

template <>
struct hash<::ax::mojom::Action>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Action> {};

template <>
struct hash<::ax::mojom::ActionFlags>
    : public mojo::internal::EnumHashImpl<::ax::mojom::ActionFlags> {};

template <>
struct hash<::ax::mojom::DefaultActionVerb>
    : public mojo::internal::EnumHashImpl<::ax::mojom::DefaultActionVerb> {};

template <>
struct hash<::ax::mojom::Mutation>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Mutation> {};

template <>
struct hash<::ax::mojom::StringAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::StringAttribute> {};

template <>
struct hash<::ax::mojom::IntAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::IntAttribute> {};

template <>
struct hash<::ax::mojom::FloatAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::FloatAttribute> {};

template <>
struct hash<::ax::mojom::BoolAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::BoolAttribute> {};

template <>
struct hash<::ax::mojom::IntListAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::IntListAttribute> {};

template <>
struct hash<::ax::mojom::StringListAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::StringListAttribute> {};

template <>
struct hash<::ax::mojom::MarkerType>
    : public mojo::internal::EnumHashImpl<::ax::mojom::MarkerType> {};

template <>
struct hash<::ax::mojom::TextDirection>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextDirection> {};

template <>
struct hash<::ax::mojom::TextPosition>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextPosition> {};

template <>
struct hash<::ax::mojom::TextStyle>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextStyle> {};

template <>
struct hash<::ax::mojom::AriaCurrentState>
    : public mojo::internal::EnumHashImpl<::ax::mojom::AriaCurrentState> {};

template <>
struct hash<::ax::mojom::HasPopup>
    : public mojo::internal::EnumHashImpl<::ax::mojom::HasPopup> {};

template <>
struct hash<::ax::mojom::InvalidState>
    : public mojo::internal::EnumHashImpl<::ax::mojom::InvalidState> {};

template <>
struct hash<::ax::mojom::Restriction>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Restriction> {};

template <>
struct hash<::ax::mojom::CheckedState>
    : public mojo::internal::EnumHashImpl<::ax::mojom::CheckedState> {};

template <>
struct hash<::ax::mojom::SortDirection>
    : public mojo::internal::EnumHashImpl<::ax::mojom::SortDirection> {};

template <>
struct hash<::ax::mojom::NameFrom>
    : public mojo::internal::EnumHashImpl<::ax::mojom::NameFrom> {};

template <>
struct hash<::ax::mojom::DescriptionFrom>
    : public mojo::internal::EnumHashImpl<::ax::mojom::DescriptionFrom> {};

template <>
struct hash<::ax::mojom::EventFrom>
    : public mojo::internal::EnumHashImpl<::ax::mojom::EventFrom> {};

template <>
struct hash<::ax::mojom::Gesture>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Gesture> {};

template <>
struct hash<::ax::mojom::TextAffinity>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextAffinity> {};

template <>
struct hash<::ax::mojom::TreeOrder>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TreeOrder> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ax::mojom::Event, ::ax::mojom::Event> {
  static ::ax::mojom::Event ToMojom(::ax::mojom::Event input) { return input; }
  static bool FromMojom(::ax::mojom::Event input, ::ax::mojom::Event* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Event, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Event, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Event>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Role, ::ax::mojom::Role> {
  static ::ax::mojom::Role ToMojom(::ax::mojom::Role input) { return input; }
  static bool FromMojom(::ax::mojom::Role input, ::ax::mojom::Role* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Role, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Role, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Role>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::State, ::ax::mojom::State> {
  static ::ax::mojom::State ToMojom(::ax::mojom::State input) { return input; }
  static bool FromMojom(::ax::mojom::State input, ::ax::mojom::State* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::State, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::State, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::State>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Action, ::ax::mojom::Action> {
  static ::ax::mojom::Action ToMojom(::ax::mojom::Action input) { return input; }
  static bool FromMojom(::ax::mojom::Action input, ::ax::mojom::Action* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Action, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Action, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Action>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::ActionFlags, ::ax::mojom::ActionFlags> {
  static ::ax::mojom::ActionFlags ToMojom(::ax::mojom::ActionFlags input) { return input; }
  static bool FromMojom(::ax::mojom::ActionFlags input, ::ax::mojom::ActionFlags* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::ActionFlags, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::ActionFlags, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::ActionFlags>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::DefaultActionVerb, ::ax::mojom::DefaultActionVerb> {
  static ::ax::mojom::DefaultActionVerb ToMojom(::ax::mojom::DefaultActionVerb input) { return input; }
  static bool FromMojom(::ax::mojom::DefaultActionVerb input, ::ax::mojom::DefaultActionVerb* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::DefaultActionVerb, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::DefaultActionVerb, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::DefaultActionVerb>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Mutation, ::ax::mojom::Mutation> {
  static ::ax::mojom::Mutation ToMojom(::ax::mojom::Mutation input) { return input; }
  static bool FromMojom(::ax::mojom::Mutation input, ::ax::mojom::Mutation* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Mutation, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Mutation, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Mutation>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::StringAttribute, ::ax::mojom::StringAttribute> {
  static ::ax::mojom::StringAttribute ToMojom(::ax::mojom::StringAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::StringAttribute input, ::ax::mojom::StringAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::StringAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::StringAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::StringAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::IntAttribute, ::ax::mojom::IntAttribute> {
  static ::ax::mojom::IntAttribute ToMojom(::ax::mojom::IntAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::IntAttribute input, ::ax::mojom::IntAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::IntAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::IntAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::IntAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::FloatAttribute, ::ax::mojom::FloatAttribute> {
  static ::ax::mojom::FloatAttribute ToMojom(::ax::mojom::FloatAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::FloatAttribute input, ::ax::mojom::FloatAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::FloatAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::FloatAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::FloatAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::BoolAttribute, ::ax::mojom::BoolAttribute> {
  static ::ax::mojom::BoolAttribute ToMojom(::ax::mojom::BoolAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::BoolAttribute input, ::ax::mojom::BoolAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::BoolAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::BoolAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::BoolAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::IntListAttribute, ::ax::mojom::IntListAttribute> {
  static ::ax::mojom::IntListAttribute ToMojom(::ax::mojom::IntListAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::IntListAttribute input, ::ax::mojom::IntListAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::IntListAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::IntListAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::IntListAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::StringListAttribute, ::ax::mojom::StringListAttribute> {
  static ::ax::mojom::StringListAttribute ToMojom(::ax::mojom::StringListAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::StringListAttribute input, ::ax::mojom::StringListAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::StringListAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::StringListAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::StringListAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::MarkerType, ::ax::mojom::MarkerType> {
  static ::ax::mojom::MarkerType ToMojom(::ax::mojom::MarkerType input) { return input; }
  static bool FromMojom(::ax::mojom::MarkerType input, ::ax::mojom::MarkerType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::MarkerType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::MarkerType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::MarkerType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextDirection, ::ax::mojom::TextDirection> {
  static ::ax::mojom::TextDirection ToMojom(::ax::mojom::TextDirection input) { return input; }
  static bool FromMojom(::ax::mojom::TextDirection input, ::ax::mojom::TextDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextPosition, ::ax::mojom::TextPosition> {
  static ::ax::mojom::TextPosition ToMojom(::ax::mojom::TextPosition input) { return input; }
  static bool FromMojom(::ax::mojom::TextPosition input, ::ax::mojom::TextPosition* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextPosition, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextPosition, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextPosition>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextStyle, ::ax::mojom::TextStyle> {
  static ::ax::mojom::TextStyle ToMojom(::ax::mojom::TextStyle input) { return input; }
  static bool FromMojom(::ax::mojom::TextStyle input, ::ax::mojom::TextStyle* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextStyle, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextStyle, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextStyle>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::AriaCurrentState, ::ax::mojom::AriaCurrentState> {
  static ::ax::mojom::AriaCurrentState ToMojom(::ax::mojom::AriaCurrentState input) { return input; }
  static bool FromMojom(::ax::mojom::AriaCurrentState input, ::ax::mojom::AriaCurrentState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::AriaCurrentState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::AriaCurrentState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::AriaCurrentState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::HasPopup, ::ax::mojom::HasPopup> {
  static ::ax::mojom::HasPopup ToMojom(::ax::mojom::HasPopup input) { return input; }
  static bool FromMojom(::ax::mojom::HasPopup input, ::ax::mojom::HasPopup* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::HasPopup, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::HasPopup, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::HasPopup>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::InvalidState, ::ax::mojom::InvalidState> {
  static ::ax::mojom::InvalidState ToMojom(::ax::mojom::InvalidState input) { return input; }
  static bool FromMojom(::ax::mojom::InvalidState input, ::ax::mojom::InvalidState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::InvalidState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::InvalidState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::InvalidState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Restriction, ::ax::mojom::Restriction> {
  static ::ax::mojom::Restriction ToMojom(::ax::mojom::Restriction input) { return input; }
  static bool FromMojom(::ax::mojom::Restriction input, ::ax::mojom::Restriction* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Restriction, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Restriction, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Restriction>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::CheckedState, ::ax::mojom::CheckedState> {
  static ::ax::mojom::CheckedState ToMojom(::ax::mojom::CheckedState input) { return input; }
  static bool FromMojom(::ax::mojom::CheckedState input, ::ax::mojom::CheckedState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::CheckedState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::CheckedState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::CheckedState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::SortDirection, ::ax::mojom::SortDirection> {
  static ::ax::mojom::SortDirection ToMojom(::ax::mojom::SortDirection input) { return input; }
  static bool FromMojom(::ax::mojom::SortDirection input, ::ax::mojom::SortDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::SortDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::SortDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::SortDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::NameFrom, ::ax::mojom::NameFrom> {
  static ::ax::mojom::NameFrom ToMojom(::ax::mojom::NameFrom input) { return input; }
  static bool FromMojom(::ax::mojom::NameFrom input, ::ax::mojom::NameFrom* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::NameFrom, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::NameFrom, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::NameFrom>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::DescriptionFrom, ::ax::mojom::DescriptionFrom> {
  static ::ax::mojom::DescriptionFrom ToMojom(::ax::mojom::DescriptionFrom input) { return input; }
  static bool FromMojom(::ax::mojom::DescriptionFrom input, ::ax::mojom::DescriptionFrom* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::DescriptionFrom, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::DescriptionFrom, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::DescriptionFrom>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::EventFrom, ::ax::mojom::EventFrom> {
  static ::ax::mojom::EventFrom ToMojom(::ax::mojom::EventFrom input) { return input; }
  static bool FromMojom(::ax::mojom::EventFrom input, ::ax::mojom::EventFrom* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::EventFrom, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::EventFrom, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::EventFrom>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Gesture, ::ax::mojom::Gesture> {
  static ::ax::mojom::Gesture ToMojom(::ax::mojom::Gesture input) { return input; }
  static bool FromMojom(::ax::mojom::Gesture input, ::ax::mojom::Gesture* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Gesture, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Gesture, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Gesture>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextAffinity, ::ax::mojom::TextAffinity> {
  static ::ax::mojom::TextAffinity ToMojom(::ax::mojom::TextAffinity input) { return input; }
  static bool FromMojom(::ax::mojom::TextAffinity input, ::ax::mojom::TextAffinity* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextAffinity, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextAffinity, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextAffinity>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TreeOrder, ::ax::mojom::TreeOrder> {
  static ::ax::mojom::TreeOrder ToMojom(::ax::mojom::TreeOrder input) { return input; }
  static bool FromMojom(::ax::mojom::TreeOrder input, ::ax::mojom::TreeOrder* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TreeOrder, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TreeOrder, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TreeOrder>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ax {
namespace mojom {


}  // namespace mojom
}  // namespace ax

#endif  // UI_ACCESSIBILITY_AX_ENUMS_MOJOM_SHARED_H_
