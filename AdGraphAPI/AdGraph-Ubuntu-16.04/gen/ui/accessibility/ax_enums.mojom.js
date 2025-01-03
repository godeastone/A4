// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/accessibility/ax_enums.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ax.mojom');


  var Event = {};
  Event.kNone = 0;
  Event.kActiveDescendantChanged = Event.kNone + 1;
  Event.kAlert = Event.kActiveDescendantChanged + 1;
  Event.kAriaAttributeChanged = Event.kAlert + 1;
  Event.kAutocorrectionOccured = Event.kAriaAttributeChanged + 1;
  Event.kBlur = Event.kAutocorrectionOccured + 1;
  Event.kCheckedStateChanged = Event.kBlur + 1;
  Event.kChildrenChanged = Event.kCheckedStateChanged + 1;
  Event.kClicked = Event.kChildrenChanged + 1;
  Event.kDocumentSelectionChanged = Event.kClicked + 1;
  Event.kExpandedChanged = Event.kDocumentSelectionChanged + 1;
  Event.kFocus = Event.kExpandedChanged + 1;
  Event.kFocusContext = Event.kFocus + 1;
  Event.kHide = Event.kFocusContext + 1;
  Event.kHitTestResult = Event.kHide + 1;
  Event.kHover = Event.kHitTestResult + 1;
  Event.kImageFrameUpdated = Event.kHover + 1;
  Event.kInvalidStatusChanged = Event.kImageFrameUpdated + 1;
  Event.kLayoutComplete = Event.kInvalidStatusChanged + 1;
  Event.kLiveRegionCreated = Event.kLayoutComplete + 1;
  Event.kLiveRegionChanged = Event.kLiveRegionCreated + 1;
  Event.kLoadComplete = Event.kLiveRegionChanged + 1;
  Event.kLocationChanged = Event.kLoadComplete + 1;
  Event.kMediaStartedPlaying = Event.kLocationChanged + 1;
  Event.kMediaStoppedPlaying = Event.kMediaStartedPlaying + 1;
  Event.kMenuEnd = Event.kMediaStoppedPlaying + 1;
  Event.kMenuListItemSelected = Event.kMenuEnd + 1;
  Event.kMenuListValueChanged = Event.kMenuListItemSelected + 1;
  Event.kMenuPopupEnd = Event.kMenuListValueChanged + 1;
  Event.kMenuPopupStart = Event.kMenuPopupEnd + 1;
  Event.kMenuStart = Event.kMenuPopupStart + 1;
  Event.kMouseCanceled = Event.kMenuStart + 1;
  Event.kMouseDragged = Event.kMouseCanceled + 1;
  Event.kMouseMoved = Event.kMouseDragged + 1;
  Event.kMousePressed = Event.kMouseMoved + 1;
  Event.kMouseReleased = Event.kMousePressed + 1;
  Event.kRowCollapsed = Event.kMouseReleased + 1;
  Event.kRowCountChanged = Event.kRowCollapsed + 1;
  Event.kRowExpanded = Event.kRowCountChanged + 1;
  Event.kScrollPositionChanged = Event.kRowExpanded + 1;
  Event.kScrolledToAnchor = Event.kScrollPositionChanged + 1;
  Event.kSelectedChildrenChanged = Event.kScrolledToAnchor + 1;
  Event.kSelection = Event.kSelectedChildrenChanged + 1;
  Event.kSelectionAdd = Event.kSelection + 1;
  Event.kSelectionRemove = Event.kSelectionAdd + 1;
  Event.kShow = Event.kSelectionRemove + 1;
  Event.kStateChanged = Event.kShow + 1;
  Event.kTextChanged = Event.kStateChanged + 1;
  Event.kTextSelectionChanged = Event.kTextChanged + 1;
  Event.kTreeChanged = Event.kTextSelectionChanged + 1;
  Event.kValueChanged = Event.kTreeChanged + 1;

  Event.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
      return true;
    }
    return false;
  };

  Event.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Role = {};
  Role.kNone = 0;
  Role.kAbbr = Role.kNone + 1;
  Role.kAlert = Role.kAbbr + 1;
  Role.kAlertDialog = Role.kAlert + 1;
  Role.kAnchor = Role.kAlertDialog + 1;
  Role.kAnnotation = Role.kAnchor + 1;
  Role.kApplication = Role.kAnnotation + 1;
  Role.kArticle = Role.kApplication + 1;
  Role.kAudio = Role.kArticle + 1;
  Role.kBanner = Role.kAudio + 1;
  Role.kBlockquote = Role.kBanner + 1;
  Role.kButton = Role.kBlockquote + 1;
  Role.kCanvas = Role.kButton + 1;
  Role.kCaption = Role.kCanvas + 1;
  Role.kCaret = Role.kCaption + 1;
  Role.kCell = Role.kCaret + 1;
  Role.kCheckBox = Role.kCell + 1;
  Role.kClient = Role.kCheckBox + 1;
  Role.kColorWell = Role.kClient + 1;
  Role.kColumn = Role.kColorWell + 1;
  Role.kColumnHeader = Role.kColumn + 1;
  Role.kComboBoxGrouping = Role.kColumnHeader + 1;
  Role.kComboBoxMenuButton = Role.kComboBoxGrouping + 1;
  Role.kComplementary = Role.kComboBoxMenuButton + 1;
  Role.kContentInfo = Role.kComplementary + 1;
  Role.kDate = Role.kContentInfo + 1;
  Role.kDateTime = Role.kDate + 1;
  Role.kDefinition = Role.kDateTime + 1;
  Role.kDescriptionList = Role.kDefinition + 1;
  Role.kDescriptionListDetail = Role.kDescriptionList + 1;
  Role.kDescriptionListTerm = Role.kDescriptionListDetail + 1;
  Role.kDesktop = Role.kDescriptionListTerm + 1;
  Role.kDetails = Role.kDesktop + 1;
  Role.kDialog = Role.kDetails + 1;
  Role.kDirectory = Role.kDialog + 1;
  Role.kDisclosureTriangle = Role.kDirectory + 1;
  Role.kDocAbstract = Role.kDisclosureTriangle + 1;
  Role.kDocAcknowledgments = Role.kDocAbstract + 1;
  Role.kDocAfterword = Role.kDocAcknowledgments + 1;
  Role.kDocAppendix = Role.kDocAfterword + 1;
  Role.kDocBackLink = Role.kDocAppendix + 1;
  Role.kDocBiblioEntry = Role.kDocBackLink + 1;
  Role.kDocBibliography = Role.kDocBiblioEntry + 1;
  Role.kDocBiblioRef = Role.kDocBibliography + 1;
  Role.kDocChapter = Role.kDocBiblioRef + 1;
  Role.kDocColophon = Role.kDocChapter + 1;
  Role.kDocConclusion = Role.kDocColophon + 1;
  Role.kDocCover = Role.kDocConclusion + 1;
  Role.kDocCredit = Role.kDocCover + 1;
  Role.kDocCredits = Role.kDocCredit + 1;
  Role.kDocDedication = Role.kDocCredits + 1;
  Role.kDocEndnote = Role.kDocDedication + 1;
  Role.kDocEndnotes = Role.kDocEndnote + 1;
  Role.kDocEpigraph = Role.kDocEndnotes + 1;
  Role.kDocEpilogue = Role.kDocEpigraph + 1;
  Role.kDocErrata = Role.kDocEpilogue + 1;
  Role.kDocExample = Role.kDocErrata + 1;
  Role.kDocFootnote = Role.kDocExample + 1;
  Role.kDocForeword = Role.kDocFootnote + 1;
  Role.kDocGlossary = Role.kDocForeword + 1;
  Role.kDocGlossRef = Role.kDocGlossary + 1;
  Role.kDocIndex = Role.kDocGlossRef + 1;
  Role.kDocIntroduction = Role.kDocIndex + 1;
  Role.kDocNoteRef = Role.kDocIntroduction + 1;
  Role.kDocNotice = Role.kDocNoteRef + 1;
  Role.kDocPageBreak = Role.kDocNotice + 1;
  Role.kDocPageList = Role.kDocPageBreak + 1;
  Role.kDocPart = Role.kDocPageList + 1;
  Role.kDocPreface = Role.kDocPart + 1;
  Role.kDocPrologue = Role.kDocPreface + 1;
  Role.kDocPullquote = Role.kDocPrologue + 1;
  Role.kDocQna = Role.kDocPullquote + 1;
  Role.kDocSubtitle = Role.kDocQna + 1;
  Role.kDocTip = Role.kDocSubtitle + 1;
  Role.kDocToc = Role.kDocTip + 1;
  Role.kDocument = Role.kDocToc + 1;
  Role.kEmbeddedObject = Role.kDocument + 1;
  Role.kFeed = Role.kEmbeddedObject + 1;
  Role.kFigcaption = Role.kFeed + 1;
  Role.kFigure = Role.kFigcaption + 1;
  Role.kFooter = Role.kFigure + 1;
  Role.kForm = Role.kFooter + 1;
  Role.kGenericContainer = Role.kForm + 1;
  Role.kGraphicsDocument = Role.kGenericContainer + 1;
  Role.kGraphicsObject = Role.kGraphicsDocument + 1;
  Role.kGraphicsSymbol = Role.kGraphicsObject + 1;
  Role.kGrid = Role.kGraphicsSymbol + 1;
  Role.kGroup = Role.kGrid + 1;
  Role.kHeading = Role.kGroup + 1;
  Role.kIframe = Role.kHeading + 1;
  Role.kIframePresentational = Role.kIframe + 1;
  Role.kIgnored = Role.kIframePresentational + 1;
  Role.kImage = Role.kIgnored + 1;
  Role.kImageMap = Role.kImage + 1;
  Role.kInlineTextBox = Role.kImageMap + 1;
  Role.kInputTime = Role.kInlineTextBox + 1;
  Role.kLabelText = Role.kInputTime + 1;
  Role.kLayoutTable = Role.kLabelText + 1;
  Role.kLayoutTableCell = Role.kLayoutTable + 1;
  Role.kLayoutTableColumn = Role.kLayoutTableCell + 1;
  Role.kLayoutTableRow = Role.kLayoutTableColumn + 1;
  Role.kLegend = Role.kLayoutTableRow + 1;
  Role.kLineBreak = Role.kLegend + 1;
  Role.kLink = Role.kLineBreak + 1;
  Role.kList = Role.kLink + 1;
  Role.kListBox = Role.kList + 1;
  Role.kListBoxOption = Role.kListBox + 1;
  Role.kListItem = Role.kListBoxOption + 1;
  Role.kListMarker = Role.kListItem + 1;
  Role.kLocationBar = Role.kListMarker + 1;
  Role.kLog = Role.kLocationBar + 1;
  Role.kMain = Role.kLog + 1;
  Role.kMark = Role.kMain + 1;
  Role.kMarquee = Role.kMark + 1;
  Role.kMath = Role.kMarquee + 1;
  Role.kMenu = Role.kMath + 1;
  Role.kMenuBar = Role.kMenu + 1;
  Role.kMenuButton = Role.kMenuBar + 1;
  Role.kMenuItem = Role.kMenuButton + 1;
  Role.kMenuItemCheckBox = Role.kMenuItem + 1;
  Role.kMenuItemRadio = Role.kMenuItemCheckBox + 1;
  Role.kMenuListOption = Role.kMenuItemRadio + 1;
  Role.kMenuListPopup = Role.kMenuListOption + 1;
  Role.kMeter = Role.kMenuListPopup + 1;
  Role.kNavigation = Role.kMeter + 1;
  Role.kNote = Role.kNavigation + 1;
  Role.kPane = Role.kNote + 1;
  Role.kParagraph = Role.kPane + 1;
  Role.kPopUpButton = Role.kParagraph + 1;
  Role.kPre = Role.kPopUpButton + 1;
  Role.kPresentational = Role.kPre + 1;
  Role.kProgressIndicator = Role.kPresentational + 1;
  Role.kRadioButton = Role.kProgressIndicator + 1;
  Role.kRadioGroup = Role.kRadioButton + 1;
  Role.kRegion = Role.kRadioGroup + 1;
  Role.kRootWebArea = Role.kRegion + 1;
  Role.kRow = Role.kRootWebArea + 1;
  Role.kRowHeader = Role.kRow + 1;
  Role.kRuby = Role.kRowHeader + 1;
  Role.kScrollBar = Role.kRuby + 1;
  Role.kScrollView = Role.kScrollBar + 1;
  Role.kSearch = Role.kScrollView + 1;
  Role.kSearchBox = Role.kSearch + 1;
  Role.kSlider = Role.kSearchBox + 1;
  Role.kSliderThumb = Role.kSlider + 1;
  Role.kSpinButton = Role.kSliderThumb + 1;
  Role.kSplitter = Role.kSpinButton + 1;
  Role.kStaticText = Role.kSplitter + 1;
  Role.kStatus = Role.kStaticText + 1;
  Role.kSvgRoot = Role.kStatus + 1;
  Role.kSwitch = Role.kSvgRoot + 1;
  Role.kTab = Role.kSwitch + 1;
  Role.kTabList = Role.kTab + 1;
  Role.kTabPanel = Role.kTabList + 1;
  Role.kTable = Role.kTabPanel + 1;
  Role.kTableHeaderContainer = Role.kTable + 1;
  Role.kTerm = Role.kTableHeaderContainer + 1;
  Role.kTextField = Role.kTerm + 1;
  Role.kTextFieldWithComboBox = Role.kTextField + 1;
  Role.kTime = Role.kTextFieldWithComboBox + 1;
  Role.kTimer = Role.kTime + 1;
  Role.kTitleBar = Role.kTimer + 1;
  Role.kToggleButton = Role.kTitleBar + 1;
  Role.kToolbar = Role.kToggleButton + 1;
  Role.kTooltip = Role.kToolbar + 1;
  Role.kTree = Role.kTooltip + 1;
  Role.kTreeGrid = Role.kTree + 1;
  Role.kTreeItem = Role.kTreeGrid + 1;
  Role.kUnknown = Role.kTreeItem + 1;
  Role.kVideo = Role.kUnknown + 1;
  Role.kWebArea = Role.kVideo + 1;
  Role.kWebView = Role.kWebArea + 1;
  Role.kWindow = Role.kWebView + 1;

  Role.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
      return true;
    }
    return false;
  };

  Role.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var State = {};
  State.kNone = 0;
  State.kCollapsed = State.kNone + 1;
  State.kDefault = State.kCollapsed + 1;
  State.kEditable = State.kDefault + 1;
  State.kExpanded = State.kEditable + 1;
  State.kFocusable = State.kExpanded + 1;
  State.kHasPopup = State.kFocusable + 1;
  State.kHorizontal = State.kHasPopup + 1;
  State.kHovered = State.kHorizontal + 1;
  State.kIgnored = State.kHovered + 1;
  State.kInvisible = State.kIgnored + 1;
  State.kLinked = State.kInvisible + 1;
  State.kMultiline = State.kLinked + 1;
  State.kMultiselectable = State.kMultiline + 1;
  State.kProtected = State.kMultiselectable + 1;
  State.kRequired = State.kProtected + 1;
  State.kRichlyEditable = State.kRequired + 1;
  State.kVertical = State.kRichlyEditable + 1;
  State.kVisited = State.kVertical + 1;

  State.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    }
    return false;
  };

  State.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Action = {};
  Action.kNone = 0;
  Action.kBlur = Action.kNone + 1;
  Action.kClearAccessibilityFocus = Action.kBlur + 1;
  Action.kCustomAction = Action.kClearAccessibilityFocus + 1;
  Action.kDecrement = Action.kCustomAction + 1;
  Action.kDoDefault = Action.kDecrement + 1;
  Action.kFocus = Action.kDoDefault + 1;
  Action.kGetImageData = Action.kFocus + 1;
  Action.kHitTest = Action.kGetImageData + 1;
  Action.kIncrement = Action.kHitTest + 1;
  Action.kLoadInlineTextBoxes = Action.kIncrement + 1;
  Action.kReplaceSelectedText = Action.kLoadInlineTextBoxes + 1;
  Action.kScrollBackward = Action.kReplaceSelectedText + 1;
  Action.kScrollDown = Action.kScrollBackward + 1;
  Action.kScrollForward = Action.kScrollDown + 1;
  Action.kScrollLeft = Action.kScrollForward + 1;
  Action.kScrollRight = Action.kScrollLeft + 1;
  Action.kScrollUp = Action.kScrollRight + 1;
  Action.kScrollToMakeVisible = Action.kScrollUp + 1;
  Action.kScrollToPoint = Action.kScrollToMakeVisible + 1;
  Action.kSetAccessibilityFocus = Action.kScrollToPoint + 1;
  Action.kSetScrollOffset = Action.kSetAccessibilityFocus + 1;
  Action.kSetSelection = Action.kSetScrollOffset + 1;
  Action.kSetSequentialFocusNavigationStartingPoint = Action.kSetSelection + 1;
  Action.kSetValue = Action.kSetSequentialFocusNavigationStartingPoint + 1;
  Action.kShowContextMenu = Action.kSetValue + 1;

  Action.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
      return true;
    }
    return false;
  };

  Action.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ActionFlags = {};
  ActionFlags.kNone = 0;
  ActionFlags.kRequestImages = ActionFlags.kNone + 1;
  ActionFlags.kRequestInlineTextBoxes = ActionFlags.kRequestImages + 1;

  ActionFlags.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ActionFlags.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var DefaultActionVerb = {};
  DefaultActionVerb.kNone = 0;
  DefaultActionVerb.kActivate = DefaultActionVerb.kNone + 1;
  DefaultActionVerb.kCheck = DefaultActionVerb.kActivate + 1;
  DefaultActionVerb.kClick = DefaultActionVerb.kCheck + 1;
  DefaultActionVerb.kClickAncestor = DefaultActionVerb.kClick + 1;
  DefaultActionVerb.kJump = DefaultActionVerb.kClickAncestor + 1;
  DefaultActionVerb.kOpen = DefaultActionVerb.kJump + 1;
  DefaultActionVerb.kPress = DefaultActionVerb.kOpen + 1;
  DefaultActionVerb.kSelect = DefaultActionVerb.kPress + 1;
  DefaultActionVerb.kUncheck = DefaultActionVerb.kSelect + 1;

  DefaultActionVerb.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    }
    return false;
  };

  DefaultActionVerb.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Mutation = {};
  Mutation.kNone = 0;
  Mutation.kNodeCreated = Mutation.kNone + 1;
  Mutation.kSubtreeCreated = Mutation.kNodeCreated + 1;
  Mutation.kNodeChanged = Mutation.kSubtreeCreated + 1;
  Mutation.kNodeRemoved = Mutation.kNodeChanged + 1;

  Mutation.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  Mutation.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var StringAttribute = {};
  StringAttribute.kNone = 0;
  StringAttribute.kAccessKey = StringAttribute.kNone + 1;
  StringAttribute.kAriaInvalidValue = StringAttribute.kAccessKey + 1;
  StringAttribute.kAutoComplete = StringAttribute.kAriaInvalidValue + 1;
  StringAttribute.kChromeChannel = StringAttribute.kAutoComplete + 1;
  StringAttribute.kClassName = StringAttribute.kChromeChannel + 1;
  StringAttribute.kContainerLiveRelevant = StringAttribute.kClassName + 1;
  StringAttribute.kContainerLiveStatus = StringAttribute.kContainerLiveRelevant + 1;
  StringAttribute.kDescription = StringAttribute.kContainerLiveStatus + 1;
  StringAttribute.kDisplay = StringAttribute.kDescription + 1;
  StringAttribute.kFontFamily = StringAttribute.kDisplay + 1;
  StringAttribute.kHtmlTag = StringAttribute.kFontFamily + 1;
  StringAttribute.kImageDataUrl = StringAttribute.kHtmlTag + 1;
  StringAttribute.kInnerHtml = StringAttribute.kImageDataUrl + 1;
  StringAttribute.kKeyShortcuts = StringAttribute.kInnerHtml + 1;
  StringAttribute.kLanguage = StringAttribute.kKeyShortcuts + 1;
  StringAttribute.kName = StringAttribute.kLanguage + 1;
  StringAttribute.kLiveRelevant = StringAttribute.kName + 1;
  StringAttribute.kLiveStatus = StringAttribute.kLiveRelevant + 1;
  StringAttribute.kPlaceholder = StringAttribute.kLiveStatus + 1;
  StringAttribute.kRole = StringAttribute.kPlaceholder + 1;
  StringAttribute.kRoleDescription = StringAttribute.kRole + 1;
  StringAttribute.kUrl = StringAttribute.kRoleDescription + 1;
  StringAttribute.kValue = StringAttribute.kUrl + 1;

  StringAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      return true;
    }
    return false;
  };

  StringAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var IntAttribute = {};
  IntAttribute.kNone = 0;
  IntAttribute.kDefaultActionVerb = IntAttribute.kNone + 1;
  IntAttribute.kScrollX = IntAttribute.kDefaultActionVerb + 1;
  IntAttribute.kScrollXMin = IntAttribute.kScrollX + 1;
  IntAttribute.kScrollXMax = IntAttribute.kScrollXMin + 1;
  IntAttribute.kScrollY = IntAttribute.kScrollXMax + 1;
  IntAttribute.kScrollYMin = IntAttribute.kScrollY + 1;
  IntAttribute.kScrollYMax = IntAttribute.kScrollYMin + 1;
  IntAttribute.kTextSelStart = IntAttribute.kScrollYMax + 1;
  IntAttribute.kTextSelEnd = IntAttribute.kTextSelStart + 1;
  IntAttribute.kAriaColumnCount = IntAttribute.kTextSelEnd + 1;
  IntAttribute.kAriaCellColumnIndex = IntAttribute.kAriaColumnCount + 1;
  IntAttribute.kAriaRowCount = IntAttribute.kAriaCellColumnIndex + 1;
  IntAttribute.kAriaCellRowIndex = IntAttribute.kAriaRowCount + 1;
  IntAttribute.kTableRowCount = IntAttribute.kAriaCellRowIndex + 1;
  IntAttribute.kTableColumnCount = IntAttribute.kTableRowCount + 1;
  IntAttribute.kTableHeaderId = IntAttribute.kTableColumnCount + 1;
  IntAttribute.kTableRowIndex = IntAttribute.kTableHeaderId + 1;
  IntAttribute.kTableRowHeaderId = IntAttribute.kTableRowIndex + 1;
  IntAttribute.kTableColumnIndex = IntAttribute.kTableRowHeaderId + 1;
  IntAttribute.kTableColumnHeaderId = IntAttribute.kTableColumnIndex + 1;
  IntAttribute.kTableCellColumnIndex = IntAttribute.kTableColumnHeaderId + 1;
  IntAttribute.kTableCellColumnSpan = IntAttribute.kTableCellColumnIndex + 1;
  IntAttribute.kTableCellRowIndex = IntAttribute.kTableCellColumnSpan + 1;
  IntAttribute.kTableCellRowSpan = IntAttribute.kTableCellRowIndex + 1;
  IntAttribute.kSortDirection = IntAttribute.kTableCellRowSpan + 1;
  IntAttribute.kHierarchicalLevel = IntAttribute.kSortDirection + 1;
  IntAttribute.kNameFrom = IntAttribute.kHierarchicalLevel + 1;
  IntAttribute.kDescriptionFrom = IntAttribute.kNameFrom + 1;
  IntAttribute.kActivedescendantId = IntAttribute.kDescriptionFrom + 1;
  IntAttribute.kDetailsId = IntAttribute.kActivedescendantId + 1;
  IntAttribute.kErrormessageId = IntAttribute.kDetailsId + 1;
  IntAttribute.kInPageLinkTargetId = IntAttribute.kErrormessageId + 1;
  IntAttribute.kMemberOfId = IntAttribute.kInPageLinkTargetId + 1;
  IntAttribute.kNextOnLineId = IntAttribute.kMemberOfId + 1;
  IntAttribute.kPreviousOnLineId = IntAttribute.kNextOnLineId + 1;
  IntAttribute.kChildTreeId = IntAttribute.kPreviousOnLineId + 1;
  IntAttribute.kRestriction = IntAttribute.kChildTreeId + 1;
  IntAttribute.kSetSize = IntAttribute.kRestriction + 1;
  IntAttribute.kPosInSet = IntAttribute.kSetSize + 1;
  IntAttribute.kColorValue = IntAttribute.kPosInSet + 1;
  IntAttribute.kAriaCurrentState = IntAttribute.kColorValue + 1;
  IntAttribute.kBackgroundColor = IntAttribute.kAriaCurrentState + 1;
  IntAttribute.kColor = IntAttribute.kBackgroundColor + 1;
  IntAttribute.kHasPopup = IntAttribute.kColor + 1;
  IntAttribute.kInvalidState = IntAttribute.kHasPopup + 1;
  IntAttribute.kCheckedState = IntAttribute.kInvalidState + 1;
  IntAttribute.kTextDirection = IntAttribute.kCheckedState + 1;
  IntAttribute.kTextPosition = IntAttribute.kTextDirection + 1;
  IntAttribute.kTextStyle = IntAttribute.kTextPosition + 1;
  IntAttribute.kPreviousFocusId = IntAttribute.kTextStyle + 1;
  IntAttribute.kNextFocusId = IntAttribute.kPreviousFocusId + 1;

  IntAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
      return true;
    }
    return false;
  };

  IntAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FloatAttribute = {};
  FloatAttribute.kNone = 0;
  FloatAttribute.kValueForRange = FloatAttribute.kNone + 1;
  FloatAttribute.kMinValueForRange = FloatAttribute.kValueForRange + 1;
  FloatAttribute.kMaxValueForRange = FloatAttribute.kMinValueForRange + 1;
  FloatAttribute.kStepValueForRange = FloatAttribute.kMaxValueForRange + 1;
  FloatAttribute.kFontSize = FloatAttribute.kStepValueForRange + 1;

  FloatAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  FloatAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BoolAttribute = {};
  BoolAttribute.kNone = 0;
  BoolAttribute.kBusy = BoolAttribute.kNone + 1;
  BoolAttribute.kEditableRoot = BoolAttribute.kBusy + 1;
  BoolAttribute.kContainerLiveAtomic = BoolAttribute.kEditableRoot + 1;
  BoolAttribute.kContainerLiveBusy = BoolAttribute.kContainerLiveAtomic + 1;
  BoolAttribute.kLiveAtomic = BoolAttribute.kContainerLiveBusy + 1;
  BoolAttribute.kModal = BoolAttribute.kLiveAtomic + 1;
  BoolAttribute.kUpdateLocationOnly = BoolAttribute.kModal + 1;
  BoolAttribute.kCanvasHasFallback = BoolAttribute.kUpdateLocationOnly + 1;
  BoolAttribute.kScrollable = BoolAttribute.kCanvasHasFallback + 1;
  BoolAttribute.kClickable = BoolAttribute.kScrollable + 1;
  BoolAttribute.kClipsChildren = BoolAttribute.kClickable + 1;
  BoolAttribute.kSelected = BoolAttribute.kClipsChildren + 1;

  BoolAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      return true;
    }
    return false;
  };

  BoolAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var IntListAttribute = {};
  IntListAttribute.kNone = 0;
  IntListAttribute.kIndirectChildIds = IntListAttribute.kNone + 1;
  IntListAttribute.kControlsIds = IntListAttribute.kIndirectChildIds + 1;
  IntListAttribute.kDescribedbyIds = IntListAttribute.kControlsIds + 1;
  IntListAttribute.kFlowtoIds = IntListAttribute.kDescribedbyIds + 1;
  IntListAttribute.kLabelledbyIds = IntListAttribute.kFlowtoIds + 1;
  IntListAttribute.kRadioGroupIds = IntListAttribute.kLabelledbyIds + 1;
  IntListAttribute.kLineBreaks = IntListAttribute.kRadioGroupIds + 1;
  IntListAttribute.kMarkerTypes = IntListAttribute.kLineBreaks + 1;
  IntListAttribute.kMarkerStarts = IntListAttribute.kMarkerTypes + 1;
  IntListAttribute.kMarkerEnds = IntListAttribute.kMarkerStarts + 1;
  IntListAttribute.kCharacterOffsets = IntListAttribute.kMarkerEnds + 1;
  IntListAttribute.kCachedLineStarts = IntListAttribute.kCharacterOffsets + 1;
  IntListAttribute.kWordStarts = IntListAttribute.kCachedLineStarts + 1;
  IntListAttribute.kWordEnds = IntListAttribute.kWordStarts + 1;
  IntListAttribute.kCustomActionIds = IntListAttribute.kWordEnds + 1;

  IntListAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      return true;
    }
    return false;
  };

  IntListAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var StringListAttribute = {};
  StringListAttribute.kNone = 0;
  StringListAttribute.kCustomActionDescriptions = StringListAttribute.kNone + 1;

  StringListAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  StringListAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var MarkerType = {};
  MarkerType.kNone = 0;
  MarkerType.kSpelling = 1;
  MarkerType.kGrammar = 2;
  MarkerType.kSpellingGrammar = 3;
  MarkerType.kTextMatch = 4;
  MarkerType.kSpellingTextMatch = 5;
  MarkerType.kGrammarTextMatch = 6;
  MarkerType.kSpellingGrammarTextMatch = 7;
  MarkerType.kActiveSuggestion = 16;
  MarkerType.kSpellingActiveSuggestion = 17;
  MarkerType.kGrammarActiveSuggestion = 18;
  MarkerType.kSpellingGrammarActiveSuggestion = 19;
  MarkerType.kTextMatchActiveSuggestion = 20;
  MarkerType.kSpellingTextMatchActiveSuggestion = 21;
  MarkerType.kGrammarTextMatchActiveSuggestion = 22;
  MarkerType.kSpellingGrammarTextMatchActiveSuggestion = 23;
  MarkerType.kSuggestion = 32;
  MarkerType.kSpellingSuggestion = 33;
  MarkerType.kGrammarSuggestion = 34;
  MarkerType.kSpellingGrammarSuggestion = 35;
  MarkerType.kTextMatchSuggestion = 36;
  MarkerType.kSpellingTextMatchSuggestion = 37;
  MarkerType.kGrammarTextMatchSuggestion = 38;
  MarkerType.kSpellingGrammarTextMatchSuggestion = 39;
  MarkerType.kActiveSuggestionSuggestion = 48;
  MarkerType.kSpellingActiveSuggestionSuggestion = 49;
  MarkerType.kGrammarActiveSuggestionSuggestion = 50;
  MarkerType.kSpellingGrammarActiveSuggestionSuggestion = 51;
  MarkerType.kTextMatchActiveSuggestionSuggestion = 52;
  MarkerType.kSpellingTextMatchActiveSuggestionSuggestion = 53;
  MarkerType.kGrammarTextMatchActiveSuggestionSuggestion = 54;
  MarkerType.kSpellingGrammarTextMatchActiveSuggestionSuggestion = 55;

  MarkerType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      return true;
    }
    return false;
  };

  MarkerType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TextDirection = {};
  TextDirection.kNone = 0;
  TextDirection.kLtr = TextDirection.kNone + 1;
  TextDirection.kRtl = TextDirection.kLtr + 1;
  TextDirection.kTtb = TextDirection.kRtl + 1;
  TextDirection.kBtt = TextDirection.kTtb + 1;

  TextDirection.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  TextDirection.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TextPosition = {};
  TextPosition.kNone = 0;
  TextPosition.kSubscript = TextPosition.kNone + 1;
  TextPosition.kSuperscript = TextPosition.kSubscript + 1;

  TextPosition.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  TextPosition.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TextStyle = {};
  TextStyle.kNone = 0;
  TextStyle.kTextStyleBold = 1;
  TextStyle.kTextStyleItalic = 2;
  TextStyle.kTextStyleBoldItalic = 3;
  TextStyle.kTextStyleUnderline = 4;
  TextStyle.kTextStyleBoldUnderline = 5;
  TextStyle.kTextStyleItalicUnderline = 6;
  TextStyle.kTextStyleBoldItalicUnderline = 7;
  TextStyle.kTextStyleLineThrough = 8;
  TextStyle.kTextStyleBoldLineThrough = 9;
  TextStyle.kTextStyleItalicLineThrough = 10;
  TextStyle.kTextStyleBoldItalicLineThrough = 11;
  TextStyle.kTextStyleUnderlineLineThrough = 12;
  TextStyle.kTextStyleBoldUnderlineLineThrough = 13;
  TextStyle.kTextStyleItalicUnderlineLineThrough = 14;
  TextStyle.kTextStyleBoldItalicUnderlineLineThrough = 15;

  TextStyle.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      return true;
    }
    return false;
  };

  TextStyle.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AriaCurrentState = {};
  AriaCurrentState.kNone = 0;
  AriaCurrentState.kFalse = AriaCurrentState.kNone + 1;
  AriaCurrentState.kTrue = AriaCurrentState.kFalse + 1;
  AriaCurrentState.kPage = AriaCurrentState.kTrue + 1;
  AriaCurrentState.kStep = AriaCurrentState.kPage + 1;
  AriaCurrentState.kLocation = AriaCurrentState.kStep + 1;
  AriaCurrentState.kUnclippedLocation = AriaCurrentState.kLocation + 1;
  AriaCurrentState.kDate = AriaCurrentState.kUnclippedLocation + 1;
  AriaCurrentState.kTime = AriaCurrentState.kDate + 1;

  AriaCurrentState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    }
    return false;
  };

  AriaCurrentState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var HasPopup = {};
  HasPopup.kFalse = 0;
  HasPopup.kTrue = HasPopup.kFalse + 1;
  HasPopup.kMenu = HasPopup.kTrue + 1;
  HasPopup.kListbox = HasPopup.kMenu + 1;
  HasPopup.kTree = HasPopup.kListbox + 1;
  HasPopup.kGrid = HasPopup.kTree + 1;
  HasPopup.kDialog = HasPopup.kGrid + 1;
  HasPopup.kLast = HasPopup.kDialog;

  HasPopup.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  HasPopup.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var InvalidState = {};
  InvalidState.kNone = 0;
  InvalidState.kFalse = InvalidState.kNone + 1;
  InvalidState.kTrue = InvalidState.kFalse + 1;
  InvalidState.kSpelling = InvalidState.kTrue + 1;
  InvalidState.kGrammar = InvalidState.kSpelling + 1;
  InvalidState.kOther = InvalidState.kGrammar + 1;

  InvalidState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  InvalidState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Restriction = {};
  Restriction.kNone = 0;
  Restriction.kReadOnly = Restriction.kNone + 1;
  Restriction.kDisabled = Restriction.kReadOnly + 1;

  Restriction.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  Restriction.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CheckedState = {};
  CheckedState.kNone = 0;
  CheckedState.kFalse = CheckedState.kNone + 1;
  CheckedState.kTrue = CheckedState.kFalse + 1;
  CheckedState.kMixed = CheckedState.kTrue + 1;

  CheckedState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  CheckedState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SortDirection = {};
  SortDirection.kNone = 0;
  SortDirection.kUnsorted = SortDirection.kNone + 1;
  SortDirection.kAscending = SortDirection.kUnsorted + 1;
  SortDirection.kDescending = SortDirection.kAscending + 1;
  SortDirection.kOther = SortDirection.kDescending + 1;

  SortDirection.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  SortDirection.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var NameFrom = {};
  NameFrom.kNone = 0;
  NameFrom.kUninitialized = NameFrom.kNone + 1;
  NameFrom.kAttribute = NameFrom.kUninitialized + 1;
  NameFrom.kAttributeExplicitlyEmpty = NameFrom.kAttribute + 1;
  NameFrom.kContents = NameFrom.kAttributeExplicitlyEmpty + 1;
  NameFrom.kPlaceholder = NameFrom.kContents + 1;
  NameFrom.kRelatedElement = NameFrom.kPlaceholder + 1;
  NameFrom.kValue = NameFrom.kRelatedElement + 1;

  NameFrom.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  NameFrom.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var DescriptionFrom = {};
  DescriptionFrom.kNone = 0;
  DescriptionFrom.kUninitialized = DescriptionFrom.kNone + 1;
  DescriptionFrom.kAttribute = DescriptionFrom.kUninitialized + 1;
  DescriptionFrom.kContents = DescriptionFrom.kAttribute + 1;
  DescriptionFrom.kPlaceholder = DescriptionFrom.kContents + 1;
  DescriptionFrom.kRelatedElement = DescriptionFrom.kPlaceholder + 1;

  DescriptionFrom.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  DescriptionFrom.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var EventFrom = {};
  EventFrom.kNone = 0;
  EventFrom.kUser = EventFrom.kNone + 1;
  EventFrom.kPage = EventFrom.kUser + 1;
  EventFrom.kAction = EventFrom.kPage + 1;

  EventFrom.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  EventFrom.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Gesture = {};
  Gesture.kNone = 0;
  Gesture.kClick = Gesture.kNone + 1;
  Gesture.kSwipeLeft1 = Gesture.kClick + 1;
  Gesture.kSwipeUp1 = Gesture.kSwipeLeft1 + 1;
  Gesture.kSwipeRight1 = Gesture.kSwipeUp1 + 1;
  Gesture.kSwipeDown1 = Gesture.kSwipeRight1 + 1;
  Gesture.kSwipeLeft2 = Gesture.kSwipeDown1 + 1;
  Gesture.kSwipeUp2 = Gesture.kSwipeLeft2 + 1;
  Gesture.kSwipeRight2 = Gesture.kSwipeUp2 + 1;
  Gesture.kSwipeDown2 = Gesture.kSwipeRight2 + 1;
  Gesture.kSwipeLeft3 = Gesture.kSwipeDown2 + 1;
  Gesture.kSwipeUp3 = Gesture.kSwipeLeft3 + 1;
  Gesture.kSwipeRight3 = Gesture.kSwipeUp3 + 1;
  Gesture.kSwipeDown3 = Gesture.kSwipeRight3 + 1;
  Gesture.kSwipeLeft4 = Gesture.kSwipeDown3 + 1;
  Gesture.kSwipeUp4 = Gesture.kSwipeLeft4 + 1;
  Gesture.kSwipeRight4 = Gesture.kSwipeUp4 + 1;
  Gesture.kSwipeDown4 = Gesture.kSwipeRight4 + 1;
  Gesture.kTap2 = Gesture.kSwipeDown4 + 1;
  Gesture.kTap3 = Gesture.kTap2 + 1;
  Gesture.kTap4 = Gesture.kTap3 + 1;

  Gesture.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      return true;
    }
    return false;
  };

  Gesture.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TextAffinity = {};
  TextAffinity.kNone = 0;
  TextAffinity.kDownstream = TextAffinity.kNone + 1;
  TextAffinity.kUpstream = TextAffinity.kDownstream + 1;

  TextAffinity.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  TextAffinity.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TreeOrder = {};
  TreeOrder.kNone = 0;
  TreeOrder.kUndefined = TreeOrder.kNone + 1;
  TreeOrder.kBefore = TreeOrder.kUndefined + 1;
  TreeOrder.kEqual = TreeOrder.kBefore + 1;
  TreeOrder.kAfter = TreeOrder.kEqual + 1;

  TreeOrder.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  TreeOrder.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.Event = Event;
  exports.Role = Role;
  exports.State = State;
  exports.Action = Action;
  exports.ActionFlags = ActionFlags;
  exports.DefaultActionVerb = DefaultActionVerb;
  exports.Mutation = Mutation;
  exports.StringAttribute = StringAttribute;
  exports.IntAttribute = IntAttribute;
  exports.FloatAttribute = FloatAttribute;
  exports.BoolAttribute = BoolAttribute;
  exports.IntListAttribute = IntListAttribute;
  exports.StringListAttribute = StringListAttribute;
  exports.MarkerType = MarkerType;
  exports.TextDirection = TextDirection;
  exports.TextPosition = TextPosition;
  exports.TextStyle = TextStyle;
  exports.AriaCurrentState = AriaCurrentState;
  exports.HasPopup = HasPopup;
  exports.InvalidState = InvalidState;
  exports.Restriction = Restriction;
  exports.CheckedState = CheckedState;
  exports.SortDirection = SortDirection;
  exports.NameFrom = NameFrom;
  exports.DescriptionFrom = DescriptionFrom;
  exports.EventFrom = EventFrom;
  exports.Gesture = Gesture;
  exports.TextAffinity = TextAffinity;
  exports.TreeOrder = TreeOrder;
})();