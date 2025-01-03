// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_FEATURE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_FEATURE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/web_feature.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class WebFeature : int32_t {
  kOBSOLETE_PageDestruction = 0,
  kWorkerStart = 4,
  kSharedWorkerStart = 5,
  kUnprefixedIndexedDB = 9,
  kOpenWebDatabase = 10,
  kUnprefixedRequestAnimationFrame = 13,
  kPrefixedRequestAnimationFrame = 14,
  kContentSecurityPolicy = 15,
  kContentSecurityPolicyReportOnly = 16,
  kPrefixedTransitionEndEvent = 18,
  kUnprefixedTransitionEndEvent = 19,
  kPrefixedAndUnprefixedTransitionEndEvent = 20,
  kAutoFocusAttribute = 21,
  kDataListElement = 23,
  kFormAttribute = 24,
  kIncrementalAttribute = 25,
  kInputTypeColor = 26,
  kInputTypeDate = 27,
  kInputTypeDateTimeFallback = 29,
  kInputTypeDateTimeLocal = 30,
  kInputTypeEmail = 31,
  kInputTypeMonth = 32,
  kInputTypeNumber = 33,
  kInputTypeRange = 34,
  kInputTypeSearch = 35,
  kInputTypeTel = 36,
  kInputTypeTime = 37,
  kInputTypeURL = 38,
  kInputTypeWeek = 39,
  kInputTypeWeekFallback = 40,
  kListAttribute = 41,
  kMaxAttribute = 42,
  kMinAttribute = 43,
  kPatternAttribute = 44,
  kPlaceholderAttribute = 45,
  kPrefixedDirectoryAttribute = 47,
  kRequiredAttribute = 49,
  kStepAttribute = 51,
  kPageVisits = 52,
  kHTMLMarqueeElement = 53,
  kReflection = 55,
  kPrefixedStorageInfo = 57,
  kDeprecatedFlexboxWebContent = 61,
  kDeprecatedFlexboxChrome = 62,
  kDeprecatedFlexboxChromeExtension = 63,
  kWindowEvent = 69,
  kContentSecurityPolicyWithBaseElement = 70,
  kDocumentClear = 74,
  kXMLDocument = 77,
  kXSLProcessingInstruction = 78,
  kXSLTProcessor = 79,
  kSVGSwitchElement = 80,
  kDocumentAll = 83,
  kFormElement = 84,
  kDemotedFormElement = 85,
  kSVGAnimationElement = 90,
  kLineClamp = 96,
  kSubFrameBeforeUnloadRegistered = 97,
  kSubFrameBeforeUnloadFired = 98,
  kConsoleMarkTimeline = 102,
  kDocumentCreateAttribute = 111,
  kDocumentCreateAttributeNS = 112,
  kDocumentXMLEncoding = 115,
  kDocumentXMLStandalone = 116,
  kDocumentXMLVersion = 117,
  kNavigatorProductSub = 123,
  kNavigatorVendor = 124,
  kNavigatorVendorSub = 125,
  kPrefixedAnimationEndEvent = 128,
  kUnprefixedAnimationEndEvent = 129,
  kPrefixedAndUnprefixedAnimationEndEvent = 130,
  kPrefixedAnimationStartEvent = 131,
  kUnprefixedAnimationStartEvent = 132,
  kPrefixedAndUnprefixedAnimationStartEvent = 133,
  kPrefixedAnimationIterationEvent = 134,
  kUnprefixedAnimationIterationEvent = 135,
  kPrefixedAndUnprefixedAnimationIterationEvent = 136,
  kEventReturnValue = 137,
  kSVGSVGElement = 138,
  kDOMSubtreeModifiedEvent = 143,
  kDOMNodeInsertedEvent = 144,
  kDOMNodeRemovedEvent = 145,
  kDOMNodeRemovedFromDocumentEvent = 146,
  kDOMNodeInsertedIntoDocumentEvent = 147,
  kDOMCharacterDataModifiedEvent = 148,
  kPrefixedAudioDecodedByteCount = 164,
  kPrefixedVideoDecodedByteCount = 165,
  kPrefixedVideoSupportsFullscreen = 166,
  kPrefixedVideoDisplayingFullscreen = 167,
  kPrefixedVideoEnterFullscreen = 168,
  kPrefixedVideoExitFullscreen = 169,
  kPrefixedVideoEnterFullScreen = 170,
  kPrefixedVideoExitFullScreen = 171,
  kPrefixedVideoDecodedFrameCount = 172,
  kPrefixedVideoDroppedFrameCount = 173,
  kPrefixedElementRequestFullscreen = 176,
  kPrefixedElementRequestFullScreen = 177,
  kBarPropLocationbar = 178,
  kBarPropMenubar = 179,
  kBarPropPersonalbar = 180,
  kBarPropScrollbars = 181,
  kBarPropStatusbar = 182,
  kBarPropToolbar = 183,
  kInputTypeEmailMultiple = 184,
  kInputTypeEmailMaxLength = 185,
  kInputTypeEmailMultipleMaxLength = 186,
  kInputTypeText = 190,
  kInputTypeTextMaxLength = 191,
  kInputTypePassword = 192,
  kInputTypePasswordMaxLength = 193,
  kPrefixedPageVisibility = 196,
  kDocumentBeforeUnloadRegistered = 200,
  kDocumentBeforeUnloadFired = 201,
  kDocumentUnloadRegistered = 202,
  kDocumentUnloadFired = 203,
  kSVGLocatableNearestViewportElement = 204,
  kSVGLocatableFarthestViewportElement = 205,
  kSVGPointMatrixTransform = 209,
  kDOMFocusInOutEvent = 211,
  kFileGetLastModifiedDate = 212,
  kHTMLElementInnerText = 213,
  kHTMLElementOuterText = 214,
  kReplaceDocumentViaJavaScriptURL = 215,
  kElementPrefixedMatchesSelector = 217,
  kCSSStyleSheetRules = 219,
  kCSSStyleSheetAddRule = 220,
  kCSSStyleSheetRemoveRule = 221,
  kInitMessageEvent = 222,
  kPrefixedDevicePixelRatioMediaFeature = 233,
  kPrefixedMaxDevicePixelRatioMediaFeature = 234,
  kPrefixedMinDevicePixelRatioMediaFeature = 235,
  kPrefixedTransform3dMediaFeature = 237,
  kPrefixedStorageQuota = 240,
  kResetReferrerPolicy = 243,
  kCaseInsensitiveAttrSelectorMatch = 244,
  kFormNameAccessForImageElement = 246,
  kFormNameAccessForPastNamesMap = 247,
  kFormAssociationByParser = 248,
  kSVGSVGElementInDocument = 250,
  kSVGDocumentRootElement = 251,
  kWorkerSubjectToCSP = 257,
  kWorkerAllowedByChildBlockedByScript = 258,
  kDeprecatedWebKitGradient = 260,
  kDeprecatedWebKitLinearGradient = 261,
  kDeprecatedWebKitRepeatingLinearGradient = 262,
  kDeprecatedWebKitRadialGradient = 263,
  kDeprecatedWebKitRepeatingRadialGradient = 264,
  kTextAutosizing = 274,
  kHTMLAnchorElementPingAttribute = 276,
  kSVGClassName = 279,
  kHTMLMediaElementSeekToFragmentStart = 281,
  kHTMLMediaElementPauseAtFragmentEnd = 282,
  kPrefixedWindowURL = 283,
  kWindowOrientation = 285,
  kDocumentCaptureEvents = 287,
  kDocumentReleaseEvents = 288,
  kWindowCaptureEvents = 289,
  kWindowReleaseEvents = 290,
  kDocumentXPathCreateExpression = 295,
  kDocumentXPathCreateNSResolver = 296,
  kDocumentXPathEvaluate = 297,
  kAnimationConstructorKeyframeListEffectObjectTiming = 300,
  kAnimationConstructorKeyframeListEffectNoTiming = 302,
  kPrefixedCancelAnimationFrame = 304,
  kNamedNodeMapGetNamedItem = 306,
  kNamedNodeMapSetNamedItem = 307,
  kNamedNodeMapRemoveNamedItem = 308,
  kNamedNodeMapItem = 309,
  kNamedNodeMapGetNamedItemNS = 310,
  kNamedNodeMapSetNamedItemNS = 311,
  kNamedNodeMapRemoveNamedItemNS = 312,
  kPrefixedDocumentIsFullscreen = 318,
  kPrefixedDocumentCurrentFullScreenElement = 320,
  kPrefixedDocumentCancelFullScreen = 321,
  kPrefixedDocumentFullscreenEnabled = 322,
  kPrefixedDocumentFullscreenElement = 323,
  kPrefixedDocumentExitFullscreen = 324,
  kSVGForeignObjectElement = 325,
  kSelectionSetPosition = 327,
  kAnimationFinishEvent = 328,
  kSVGSVGElementInXMLDocument = 329,
  kEventSrcElement = 343,
  kEventCancelBubble = 344,
  kEventPath = 345,
  kNodeIteratorDetach = 347,
  kEventGetReturnValueTrue = 350,
  kEventGetReturnValueFalse = 351,
  kEventSetReturnValueTrue = 352,
  kEventSetReturnValueFalse = 353,
  kWindowOffscreenBuffering = 356,
  kWindowDefaultStatus = 357,
  kWindowDefaultstatus = 358,
  kPrefixedTransitionEventConstructor = 361,
  kPrefixedMutationObserverConstructor = 362,
  kNotificationPermission = 371,
  kRangeDetach = 372,
  kPrefixedFileRelativePath = 386,
  kDocumentCaretRangeFromPoint = 387,
  kElementScrollIntoViewIfNeeded = 389,
  kRangeExpand = 393,
  kHTMLImageElementX = 396,
  kHTMLImageElementY = 397,
  kSelectionBaseNode = 400,
  kSelectionBaseOffset = 401,
  kSelectionExtentNode = 402,
  kSelectionExtentOffset = 403,
  kSelectionType = 404,
  kSelectionModify = 405,
  kSelectionSetBaseAndExtent = 406,
  kSelectionEmpty = 407,
  kVTTCue = 409,
  kVTTCueRender = 410,
  kVTTCueRenderVertical = 411,
  kVTTCueRenderSnapToLinesFalse = 412,
  kVTTCueRenderLineNotAuto = 413,
  kVTTCueRenderPositionNot50 = 414,
  kVTTCueRenderSizeNot100 = 415,
  kVTTCueRenderAlignNotCenter = 416,
  kElementRequestPointerLock = 417,
  kVTTCueRenderRtl = 418,
  kPostMessageFromSecureToInsecure = 419,
  kPostMessageFromInsecureToSecure = 420,
  kDocumentExitPointerLock = 421,
  kDocumentPointerLockElement = 422,
  kPrefixedCursorZoomIn = 424,
  kPrefixedCursorZoomOut = 425,
  kTextEncoderConstructor = 429,
  kTextEncoderEncode = 430,
  kTextDecoderConstructor = 431,
  kTextDecoderDecode = 432,
  kFocusInOutEvent = 433,
  kMouseEventMovementX = 434,
  kMouseEventMovementY = 435,
  kDocumentFonts = 440,
  kMixedContentFormsSubmitted = 441,
  kFormsSubmitted = 442,
  kHTMLImports = 455,
  kElementCreateShadowRoot = 456,
  kDocumentRegisterElement = 457,
  kEditingAppleInterchangeNewline = 458,
  kEditingAppleConvertedSpace = 459,
  kEditingApplePasteAsQuotation = 460,
  kEditingAppleStyleSpanClass = 461,
  kHTMLImportsAsyncAttribute = 463,
  kXMLHttpRequestSynchronous = 465,
  kCSSSelectorPseudoUnresolved = 466,
  kCSSSelectorPseudoShadow = 467,
  kCSSSelectorPseudoContent = 468,
  kCSSSelectorPseudoHost = 469,
  kCSSSelectorPseudoHostContext = 470,
  kCSSDeepCombinator = 471,
  kUseAsm = 473,
  kDOMWindowOpen = 475,
  kDOMWindowOpenFeatures = 476,
  kAspectRatioFlexItem = 479,
  kDetailsElement = 480,
  kDialogElement = 481,
  kMapElement = 482,
  kMeterElement = 483,
  kProgressElement = 484,
  kWheelEventWheelDeltaX = 491,
  kWheelEventWheelDeltaY = 492,
  kWheelEventWheelDelta = 493,
  kSendBeacon = 494,
  kSendBeaconQuotaExceeded = 495,
  kSVGSMILElementInDocument = 501,
  kMouseEventOffsetX = 502,
  kMouseEventOffsetY = 503,
  kMouseEventX = 504,
  kMouseEventY = 505,
  kMouseEventFromElement = 506,
  kMouseEventToElement = 507,
  kRequestFileSystem = 508,
  kRequestFileSystemWorker = 509,
  kRequestFileSystemSyncWorker = 510,
  kSVGStyleElementTitle = 519,
  kPictureSourceSrc = 520,
  kPicture = 521,
  kSizes = 522,
  kSrcsetXDescriptor = 523,
  kSrcsetWDescriptor = 524,
  kSelectionContainsNode = 525,
  kXMLExternalResourceLoad = 529,
  kMixedContentPrivateHostnameInPublicHostname = 530,
  kLegacyProtocolEmbeddedAsSubresource = 531,
  kRequestedSubresourceWithEmbeddedCredentials = 532,
  kNotificationCreated = 533,
  kNotificationClosed = 534,
  kNotificationPermissionRequested = 535,
  kConsoleTimeline = 538,
  kConsoleTimelineEnd = 539,
  kSRIElementWithMatchingIntegrityAttribute = 540,
  kSRIElementWithNonMatchingIntegrityAttribute = 541,
  kSRIElementWithUnparsableIntegrityAttribute = 542,
  kV8Animation_StartTime_AttributeGetter = 545,
  kV8Animation_StartTime_AttributeSetter = 546,
  kV8Animation_CurrentTime_AttributeGetter = 547,
  kV8Animation_CurrentTime_AttributeSetter = 548,
  kV8Animation_PlaybackRate_AttributeGetter = 549,
  kV8Animation_PlaybackRate_AttributeSetter = 550,
  kV8Animation_PlayState_AttributeGetter = 551,
  kV8Animation_Finish_Method = 552,
  kV8Animation_Play_Method = 553,
  kV8Animation_Pause_Method = 554,
  kV8Animation_Reverse_Method = 555,
  kBreakIterator = 556,
  kScreenOrientationAngle = 557,
  kScreenOrientationType = 558,
  kScreenOrientationLock = 559,
  kScreenOrientationUnlock = 560,
  kGeolocationSecureOrigin = 561,
  kGeolocationInsecureOrigin = 562,
  kNotificationSecureOrigin = 563,
  kNotificationInsecureOrigin = 564,
  kNotificationShowEvent = 565,
  kSVGTransformListConsolidate = 569,
  kSVGAnimatedTransformListBaseVal = 570,
  kQuotedAnimationName = 571,
  kQuotedKeyframesRule = 572,
  kSrcsetDroppedCandidate = 573,
  kWindowPostMessage = 574,
  kRenderRuby = 576,
  kScriptElementWithInvalidTypeHasSrc = 578,
  kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload = 581,
  kCSSSelectorPseudoScrollbar = 582,
  kCSSSelectorPseudoScrollbarButton = 583,
  kCSSSelectorPseudoScrollbarThumb = 584,
  kCSSSelectorPseudoScrollbarTrack = 585,
  kCSSSelectorPseudoScrollbarTrackPiece = 586,
  kLangAttribute = 587,
  kLangAttributeOnHTML = 588,
  kLangAttributeOnBody = 589,
  kLangAttributeDoesNotMatchToUILocale = 590,
  kInputTypeSubmit = 591,
  kInputTypeSubmitWithValue = 592,
  kSetReferrerPolicy = 593,
  kTextWholeText = 599,
  kNotificationCloseEvent = 603,
  kStyleMedia = 606,
  kStyleMediaType = 607,
  kStyleMediaMatchMedium = 608,
  kMixedContentPresent = 609,
  kMixedContentBlockable = 610,
  kMixedContentAudio = 611,
  kMixedContentDownload = 612,
  kMixedContentFavicon = 613,
  kMixedContentImage = 614,
  kMixedContentInternal = 615,
  kMixedContentPlugin = 616,
  kMixedContentPrefetch = 617,
  kMixedContentVideo = 618,
  kCSSSelectorPseudoFullScreenAncestor = 628,
  kCSSSelectorPseudoFullScreen = 629,
  kWebKitCSSMatrix = 630,
  kAudioContextCreateAnalyser = 631,
  kAudioContextCreateBiquadFilter = 632,
  kAudioContextCreateBufferSource = 633,
  kAudioContextCreateChannelMerger = 634,
  kAudioContextCreateChannelSplitter = 635,
  kAudioContextCreateConvolver = 636,
  kAudioContextCreateDelay = 637,
  kAudioContextCreateDynamicsCompressor = 638,
  kAudioContextCreateGain = 639,
  kAudioContextCreateMediaElementSource = 640,
  kAudioContextCreateMediaStreamDestination = 641,
  kAudioContextCreateMediaStreamSource = 642,
  kAudioContextCreateOscillator = 643,
  kAudioContextCreatePeriodicWave = 645,
  kAudioContextCreateScriptProcessor = 646,
  kAudioContextCreateStereoPanner = 647,
  kAudioContextCreateWaveShaper = 648,
  kAudioContextDecodeAudioData = 649,
  kAudioContextResume = 650,
  kAudioContextSuspend = 651,
  kMixedContentInNonHTTPSFrameThatRestrictsMixedContent = 661,
  kMixedContentInSecureFrameThatDoesNotRestrictMixedContent = 662,
  kMixedContentWebSocket = 663,
  kSyntheticKeyframesInCompositedCSSAnimation = 664,
  kMixedContentFormPresent = 665,
  kGetUserMediaInsecureOrigin = 666,
  kGetUserMediaSecureOrigin = 667,
  kDeviceMotionInsecureOrigin = 668,
  kDeviceMotionSecureOrigin = 669,
  kDeviceOrientationInsecureOrigin = 670,
  kDeviceOrientationSecureOrigin = 671,
  kSandboxViaIFrame = 672,
  kSandboxViaCSP = 673,
  kBlockedSniffingImageToScript = 674,
  kFetch = 675,
  kFetchBodyStream = 676,
  kXMLHttpRequestAsynchronous = 677,
  kWhiteSpacePreFromXMLSpace = 679,
  kWhiteSpaceNowrapFromXMLSpace = 680,
  kSVGSVGElementForceRedraw = 685,
  kSVGSVGElementSuspendRedraw = 686,
  kSVGSVGElementUnsuspendRedraw = 687,
  kSVGSVGElementUnsuspendRedrawAll = 688,
  kAudioContextClose = 689,
  kCSSZoomNotEqualToOne = 691,
  kClientRectListItem = 694,
  kWindowClientInformation = 695,
  kWindowFind = 696,
  kWindowScreenLeft = 697,
  kWindowScreenTop = 698,
  kV8Animation_Cancel_Method = 699,
  kV8Animation_Onfinish_AttributeGetter = 700,
  kV8Animation_Onfinish_AttributeSetter = 701,
  kV8Window_WebKitAnimationEvent_ConstructorGetter = 707,
  kCryptoGetRandomValues = 710,
  kSubtleCryptoEncrypt = 711,
  kSubtleCryptoDecrypt = 712,
  kSubtleCryptoSign = 713,
  kSubtleCryptoVerify = 714,
  kSubtleCryptoDigest = 715,
  kSubtleCryptoGenerateKey = 716,
  kSubtleCryptoImportKey = 717,
  kSubtleCryptoExportKey = 718,
  kSubtleCryptoDeriveBits = 719,
  kSubtleCryptoDeriveKey = 720,
  kSubtleCryptoWrapKey = 721,
  kSubtleCryptoUnwrapKey = 722,
  kCryptoAlgorithmAesCbc = 723,
  kCryptoAlgorithmHmac = 724,
  kCryptoAlgorithmRsaSsaPkcs1v1_5 = 725,
  kCryptoAlgorithmSha1 = 726,
  kCryptoAlgorithmSha256 = 727,
  kCryptoAlgorithmSha384 = 728,
  kCryptoAlgorithmSha512 = 729,
  kCryptoAlgorithmAesGcm = 730,
  kCryptoAlgorithmRsaOaep = 731,
  kCryptoAlgorithmAesCtr = 732,
  kCryptoAlgorithmAesKw = 733,
  kCryptoAlgorithmRsaPss = 734,
  kCryptoAlgorithmEcdsa = 735,
  kCryptoAlgorithmEcdh = 736,
  kCryptoAlgorithmHkdf = 737,
  kCryptoAlgorithmPbkdf2 = 738,
  kDocumentSetDomain = 739,
  kUpgradeInsecureRequestsEnabled = 740,
  kUpgradeInsecureRequestsUpgradedRequest = 741,
  kDocumentDesignMode = 742,
  kGlobalCacheStorage = 743,
  kNetInfo = 744,
  kBackgroundSync = 745,
  kLegacyConst = 748,
  kV8Permissions_Query_Method = 750,
  kSVGHrefBaseVal = 758,
  kSVGHrefAnimVal = 759,
  kV8CSSRuleList_Item_Method = 760,
  kV8MediaList_Item_Method = 761,
  kV8StyleSheetList_Item_Method = 762,
  kStyleSheetListAnonymousNamedGetter = 763,
  kAutocapitalizeAttribute = 764,
  kFullscreenSecureOrigin = 765,
  kFullscreenInsecureOrigin = 766,
  kDialogInSandboxedContext = 767,
  kSVGSMILAnimationInImageRegardlessOfCache = 768,
  kEncryptedMediaSecureOrigin = 770,
  kPerformanceFrameTiming = 772,
  kV8Element_Animate_Method = 773,
  kV8SVGSVGElement_GetElementById_Method = 778,
  kV8MessageChannel_Constructor = 780,
  kV8MessagePort_PostMessage_Method = 781,
  kV8MessagePort_Start_Method = 782,
  kV8MessagePort_Close_Method = 783,
  kMessagePortsTransferred = 784,
  kCSSKeyframesRuleAnonymousIndexedGetter = 785,
  kV8Screen_AvailLeft_AttributeGetter = 786,
  kV8Screen_AvailTop_AttributeGetter = 787,
  kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter = 791,
  kV8SVGStyleElement_Disabled_AttributeGetter = 798,
  kV8SVGStyleElement_Disabled_AttributeSetter = 799,
  kInputTypeFileSecureOrigin = 801,
  kInputTypeFileInsecureOrigin = 802,
  kElementAttachShadow = 804,
  kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter = 806,
  kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter = 807,
  kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter = 808,
  kHTMLLinkElementDisabled = 809,
  kV8HTMLLinkElement_Disabled_AttributeGetter = 810,
  kV8HTMLLinkElement_Disabled_AttributeSetter = 811,
  kV8HTMLStyleElement_Disabled_AttributeGetter = 812,
  kV8HTMLStyleElement_Disabled_AttributeSetter = 813,
  kV8DOMError_Constructor = 816,
  kV8DOMError_Name_AttributeGetter = 817,
  kV8DOMError_Message_AttributeGetter = 818,
  kTextInputFired = 830,
  kV8TextEvent_Data_AttributeGetter = 831,
  kV8TextEvent_InitTextEvent_Method = 832,
  kClientHintsDPR = 835,
  kClientHintsResourceWidth = 836,
  kClientHintsViewportWidth = 837,
  kSRIElementIntegrityAttributeButIneligible = 838,
  kFormDataAppendNull = 843,
  kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase = 845,
  kNavigatorVibrate = 850,
  kNavigatorVibrateSubFrame = 851,
  kV8XPathEvaluator_Constructor = 853,
  kV8XPathEvaluator_CreateExpression_Method = 854,
  kV8XPathEvaluator_CreateNSResolver_Method = 855,
  kV8XPathEvaluator_Evaluate_Method = 856,
  kRequestMIDIAccess_ObscuredByFootprinting = 857,
  kV8MouseEvent_LayerX_AttributeGetter = 858,
  kV8MouseEvent_LayerY_AttributeGetter = 859,
  kInnerTextWithShadowTree = 860,
  kSelectionToStringWithShadowTree = 861,
  kWindowFindWithShadowTree = 862,
  kV8CompositionEvent_InitCompositionEvent_Method = 863,
  kV8CustomEvent_InitCustomEvent_Method = 864,
  kV8DeviceMotionEvent_InitDeviceMotionEvent_Method = 865,
  kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method = 866,
  kV8Event_InitEvent_Method = 867,
  kV8KeyboardEvent_InitKeyboardEvent_Method = 868,
  kV8MouseEvent_InitMouseEvent_Method = 869,
  kV8MutationEvent_InitMutationEvent_Method = 870,
  kV8StorageEvent_InitStorageEvent_Method = 871,
  kV8UIEvent_InitUIEvent_Method = 873,
  kRequestFileSystemNonWebbyOrigin = 876,
  kV8MemoryInfo_TotalJSHeapSize_AttributeGetter = 879,
  kV8MemoryInfo_UsedJSHeapSize_AttributeGetter = 880,
  kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter = 881,
  kV8Performance_Timing_AttributeGetter = 882,
  kV8Performance_Navigation_AttributeGetter = 883,
  kV8Performance_Memory_AttributeGetter = 884,
  kV8SharedWorker_WorkerStart_AttributeGetter = 885,
  kHTMLMediaElementPreloadNone = 892,
  kHTMLMediaElementPreloadMetadata = 893,
  kHTMLMediaElementPreloadAuto = 894,
  kHTMLMediaElementPreloadDefault = 895,
  kMixedContentBlockableAllowed = 896,
  kPseudoBeforeAfterForInputElement = 897,
  kV8Permissions_Revoke_Method = 898,
  kLinkRelDnsPrefetch = 899,
  kLinkRelPreconnect = 900,
  kLinkRelPreload = 901,
  kLinkHeaderDnsPrefetch = 902,
  kLinkHeaderPreconnect = 903,
  kClientHintsMetaAcceptCH = 904,
  kHTMLElementDeprecatedWidth = 905,
  kClientHintsContentDPR = 906,
  kElementAttachShadowOpen = 907,
  kElementAttachShadowClosed = 908,
  kAudioParamSetValueAtTime = 909,
  kAudioParamLinearRampToValueAtTime = 910,
  kAudioParamExponentialRampToValueAtTime = 911,
  kAudioParamSetTargetAtTime = 912,
  kAudioParamSetValueCurveAtTime = 913,
  kAudioParamCancelScheduledValues = 914,
  kV8Permissions_Request_Method = 915,
  kLinkRelPrefetch = 917,
  kLinkRelPrerender = 918,
  kLinkRelNext = 919,
  kCSSValuePrefixedMinContent = 921,
  kCSSValuePrefixedMaxContent = 922,
  kCSSValuePrefixedFitContent = 923,
  kCSSValuePrefixedFillAvailable = 924,
  kPresentationDefaultRequest = 926,
  kPresentationAvailabilityChangeEventListener = 927,
  kPresentationRequestConstructor = 928,
  kPresentationRequestStart = 929,
  kPresentationRequestReconnect = 930,
  kPresentationRequestGetAvailability = 931,
  kPresentationRequestConnectionAvailableEventListener = 932,
  kPresentationConnectionTerminate = 933,
  kPresentationConnectionSend = 934,
  kPresentationConnectionMessageEventListener = 936,
  kCSSAnimationsStackedNeutralKeyframe = 937,
  kReadingCheckedInClickHandler = 938,
  kFlexboxIntrinsicSizeAlgorithmIsDifferent = 939,
  kHTMLImportsHasStyleSheets = 940,
  kNetInfoType = 946,
  kNetInfoDownlinkMax = 947,
  kNetInfoOnChange = 948,
  kNetInfoOnTypeChange = 949,
  kV8Window_Alert_Method = 950,
  kV8Window_Confirm_Method = 951,
  kV8Window_Prompt_Method = 952,
  kV8Window_Print_Method = 953,
  kV8Window_RequestIdleCallback_Method = 954,
  kFlexboxPercentagePaddingVertical = 955,
  kFlexboxPercentageMarginVertical = 956,
  kCSPSourceWildcardWouldMatchExactHost = 959,
  kCredentialManagerGet = 960,
  kCredentialManagerGetMediationOptional = 961,
  kCredentialManagerGetMediationSilent = 962,
  kCredentialManagerStore = 963,
  kBlockableMixedContentInSubframeBlocked = 966,
  kAddEventListenerThirdArgumentIsObject = 967,
  kRemoveEventListenerThirdArgumentIsObject = 968,
  kCSSAtRuleCharset = 969,
  kCSSAtRuleFontFace = 970,
  kCSSAtRuleImport = 971,
  kCSSAtRuleKeyframes = 972,
  kCSSAtRuleMedia = 973,
  kCSSAtRuleNamespace = 974,
  kCSSAtRulePage = 975,
  kCSSAtRuleSupports = 976,
  kCSSAtRuleViewport = 977,
  kCSSAtRuleWebkitKeyframes = 978,
  kV8HTMLFieldSetElement_Elements_AttributeGetter = 979,
  kHTMLMediaElementPreloadForcedNone = 980,
  kExternalAddSearchProvider = 981,
  kExternalIsSearchProviderInstalled = 982,
  kV8Permissions_RequestAll_Method = 983,
  kDeviceOrientationAbsoluteInsecureOrigin = 987,
  kDeviceOrientationAbsoluteSecureOrigin = 988,
  kFontFaceConstructor = 989,
  kServiceWorkerControlledPage = 990,
  kMeterElementWithMeterAppearance = 993,
  kMeterElementWithNoneAppearance = 994,
  kSelectionAnchorNode = 997,
  kSelectionAnchorOffset = 998,
  kSelectionFocusNode = 999,
  kSelectionFocusOffset = 1000,
  kSelectionIsCollapsed = 1001,
  kSelectionRangeCount = 1002,
  kSelectionGetRangeAt = 1003,
  kSelectionAddRange = 1004,
  kSelectionRemoveAllRanges = 1005,
  kSelectionCollapse = 1006,
  kSelectionCollapseToStart = 1007,
  kSelectionCollapseToEnd = 1008,
  kSelectionExtend = 1009,
  kSelectionSelectAllChildren = 1010,
  kSelectionDeleteDromDocument = 1011,
  kSelectionDOMString = 1012,
  kInputTypeRangeVerticalAppearance = 1013,
  kCSSFilterReference = 1014,
  kCSSFilterGrayscale = 1015,
  kCSSFilterSepia = 1016,
  kCSSFilterSaturate = 1017,
  kCSSFilterHueRotate = 1018,
  kCSSFilterInvert = 1019,
  kCSSFilterOpacity = 1020,
  kCSSFilterBrightness = 1021,
  kCSSFilterContrast = 1022,
  kCSSFilterBlur = 1023,
  kCSSFilterDropShadow = 1024,
  kBackgroundSyncRegister = 1025,
  kExecCommandOnInputOrTextarea = 1027,
  kV8History_ScrollRestoration_AttributeGetter = 1028,
  kV8History_ScrollRestoration_AttributeSetter = 1029,
  kSVG1DOMFilter = 1030,
  kOfflineAudioContextStartRendering = 1031,
  kOfflineAudioContextSuspend = 1032,
  kOfflineAudioContextResume = 1033,
  kSVG1DOMPaintServer = 1035,
  kSVGSVGElementFragmentSVGView = 1036,
  kSVGSVGElementFragmentSVGViewElement = 1037,
  kPresentationConnectionClose = 1038,
  kSVG1DOMShape = 1039,
  kSVG1DOMText = 1040,
  kRTCPeerConnectionConstructorConstraints = 1041,
  kRTCPeerConnectionConstructorCompliant = 1042,
  kRTCPeerConnectionCreateOfferLegacyFailureCallback = 1044,
  kRTCPeerConnectionCreateOfferLegacyConstraints = 1045,
  kRTCPeerConnectionCreateOfferLegacyOfferOptions = 1046,
  kRTCPeerConnectionCreateOfferLegacyCompliant = 1047,
  kRTCPeerConnectionCreateAnswerLegacyFailureCallback = 1049,
  kRTCPeerConnectionCreateAnswerLegacyConstraints = 1050,
  kRTCPeerConnectionCreateAnswerLegacyCompliant = 1051,
  kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback = 1052,
  kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback = 1053,
  kRTCPeerConnectionSetLocalDescriptionLegacyCompliant = 1054,
  kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback = 1055,
  kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback = 1056,
  kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant = 1057,
  kRTCPeerConnectionGetStatsLegacyNonCompliant = 1058,
  kNodeFilterIsFunction = 1059,
  kNodeFilterIsObject = 1060,
  kCSSSelectorInternalPseudoListBox = 1062,
  kCSSSelectorInternalMediaControlsOverlayCastButton = 1064,
  kCSSSelectorInternalPseudoSpatialNavigationFocus = 1065,
  kSameOriginTextScript = 1066,
  kSameOriginApplicationScript = 1067,
  kSameOriginOtherScript = 1068,
  kCrossOriginTextScript = 1069,
  kCrossOriginApplicationScript = 1070,
  kCrossOriginOtherScript = 1071,
  kSVG1DOMSVGTests = 1072,
  kDisableRemotePlaybackAttribute = 1074,
  kV8SloppyMode = 1075,
  kV8StrictMode = 1076,
  kV8StrongMode = 1077,
  kAudioNodeConnectToAudioNode = 1078,
  kAudioNodeConnectToAudioParam = 1079,
  kAudioNodeDisconnectFromAudioNode = 1080,
  kAudioNodeDisconnectFromAudioParam = 1081,
  kV8CSSFontFaceRule_Style_AttributeGetter = 1082,
  kSelectionCollapseNull = 1083,
  kSelectionSetBaseAndExtentNull = 1084,
  kV8SVGSVGElement_CreateSVGNumber_Method = 1085,
  kV8SVGSVGElement_CreateSVGLength_Method = 1086,
  kV8SVGSVGElement_CreateSVGAngle_Method = 1087,
  kV8SVGSVGElement_CreateSVGPoint_Method = 1088,
  kV8SVGSVGElement_CreateSVGMatrix_Method = 1089,
  kV8SVGSVGElement_CreateSVGRect_Method = 1090,
  kV8SVGSVGElement_CreateSVGTransform_Method = 1091,
  kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method = 1092,
  kFormNameAccessForNonDescendantImageElement = 1093,
  kV8RegExpPrototypeStickyGetter = 1096,
  kV8RegExpPrototypeToString = 1097,
  kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter = 1098,
  kDataElement = 1099,
  kTimeElement = 1100,
  kSVG1DOMUriReference = 1101,
  kSVG1DOMZoomAndPan = 1102,
  kV8SVGGraphicsElement_Transform_AttributeGetter = 1103,
  kMenuItemElement = 1104,
  kMenuItemCloseTag = 1105,
  kSVG1DOMMarkerElement = 1106,
  kSVG1DOMUseElement = 1107,
  kSVG1DOMMaskElement = 1108,
  kV8SVGAElement_Target_AttributeGetter = 1109,
  kV8SVGClipPathElement_ClipPathUnits_AttributeGetter = 1110,
  kSVG1DOMFitToViewBox = 1111,
  kSVG1DOMSVGElement = 1114,
  kSVG1DOMImageElement = 1115,
  kSVG1DOMForeignObjectElement = 1116,
  kAudioContextCreateIIRFilter = 1117,
  kCSSSelectorPseudoSlotted = 1118,
  kMediaDevicesEnumerateDevices = 1119,
  kEventComposedPath = 1123,
  kLinkHeaderPreload = 1124,
  kMouseWheelEvent = 1125,
  kWheelEvent = 1126,
  kMouseWheelAndWheelEvent = 1127,
  kBodyScrollsInAdditionToViewport = 1128,
  kDocumentDesignModeEnabeld = 1129,
  kContentEditableTrue = 1130,
  kContentEditableTrueOnHTML = 1131,
  kContentEditablePlainTextOnly = 1132,
  kV8RegExpPrototypeUnicodeGetter = 1133,
  kV8IntlV8Parse = 1134,
  kV8IntlPattern = 1135,
  kV8IntlResolved = 1136,
  kV8PromiseChain = 1137,
  kV8PromiseAccept = 1138,
  kV8PromiseDefer = 1139,
  kEventComposed = 1140,
  kGeolocationInsecureOriginIframe = 1141,
  kGeolocationSecureOriginIframe = 1142,
  kRequestMIDIAccessIframe_ObscuredByFootprinting = 1143,
  kGetUserMediaInsecureOriginIframe = 1144,
  kGetUserMediaSecureOriginIframe = 1145,
  kElementRequestPointerLockIframe = 1146,
  kNotificationAPIInsecureOriginIframe = 1147,
  kNotificationAPISecureOriginIframe = 1148,
  kWebSocket = 1149,
  kMediaStreamConstraintsNameValue = 1150,
  kMediaStreamConstraintsFromDictionary = 1151,
  kMediaStreamConstraintsConformant = 1152,
  kCSSSelectorIndirectAdjacent = 1153,
  kCreateImageBitmap = 1156,
  kPresentationConnectionConnectEventListener = 1157,
  kPresentationConnectionCloseEventListener = 1158,
  kPresentationConnectionTerminateEventListener = 1159,
  kDocumentCreateEventAnimationEvent = 1162,
  kDocumentCreateEventBeforeUnloadEvent = 1166,
  kDocumentCreateEventCompositionEvent = 1168,
  kDocumentCreateEventDragEvent = 1169,
  kDocumentCreateEventErrorEvent = 1170,
  kDocumentCreateEventFocusEvent = 1171,
  kDocumentCreateEventHashChangeEvent = 1172,
  kDocumentCreateEventMutationEvent = 1173,
  kDocumentCreateEventPageTransitionEvent = 1174,
  kDocumentCreateEventPopStateEvent = 1176,
  kDocumentCreateEventTextEvent = 1182,
  kDocumentCreateEventTransitionEvent = 1183,
  kDocumentCreateEventWheelEvent = 1184,
  kDocumentCreateEventTrackEvent = 1186,
  kDocumentCreateEventMutationEvents = 1188,
  kDocumentCreateEventSVGEvents = 1190,
  kDocumentCreateEventDeviceMotionEvent = 1195,
  kDocumentCreateEventDeviceOrientationEvent = 1196,
  kDocumentCreateEventIDBVersionChangeEvent = 1201,
  kDocumentCreateEventStorageEvent = 1221,
  kDocumentCreateEventWebGLContextEvent = 1224,
  kDocumentCreateEventCloseEvent = 1227,
  kDocumentCreateEventKeyboardEvents = 1228,
  kHTMLMediaElement = 1229,
  kHTMLMediaElementInDocument = 1230,
  kHTMLMediaElementControlsAttribute = 1231,
  kV8Animation_Oncancel_AttributeGetter = 1233,
  kV8Animation_Oncancel_AttributeSetter = 1234,
  kV8HTMLCommentInExternalScript = 1235,
  kV8HTMLComment = 1236,
  kV8SloppyModeBlockScopedFunctionRedefinition = 1237,
  kV8ForInInitializer = 1238,
  kV8Animation_Id_AttributeGetter = 1239,
  kV8Animation_Id_AttributeSetter = 1240,
  kApplicationCacheManifestSelectInsecureOrigin = 1245,
  kApplicationCacheManifestSelectSecureOrigin = 1246,
  kApplicationCacheAPIInsecureOrigin = 1247,
  kApplicationCacheAPISecureOrigin = 1248,
  kCSSAtRuleApply = 1249,
  kCSSSelectorPseudoAny = 1250,
  kHTMLLabelElementControlForNonFormAssociatedElement = 1263,
  kHTMLMediaElementLoadNetworkEmptyNotPaused = 1265,
  kV8Window_WebkitSpeechGrammar_ConstructorGetter = 1267,
  kV8Window_WebkitSpeechGrammarList_ConstructorGetter = 1268,
  kV8Window_WebkitSpeechRecognition_ConstructorGetter = 1269,
  kV8Window_WebkitSpeechRecognitionError_ConstructorGetter = 1270,
  kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter = 1271,
  kV8Window_SpeechSynthesis_AttributeGetter = 1272,
  kV8IDBFactory_WebkitGetDatabaseNames_Method = 1273,
  kScriptPassesCSPDynamic = 1275,
  kCSPWithStrictDynamic = 1277,
  kScrollAnchored = 1278,
  kAddEventListenerFourArguments = 1279,
  kRemoveEventListenerFourArguments = 1280,
  kSVGCalcModeDiscrete = 1287,
  kSVGCalcModeLinear = 1288,
  kSVGCalcModePaced = 1289,
  kSVGCalcModeSpline = 1290,
  kFormSubmissionStarted = 1291,
  kFormValidationStarted = 1292,
  kFormValidationAbortedSubmission = 1293,
  kFormValidationShowedMessage = 1294,
  kV8Document_Images_AttributeGetter = 1297,
  kV8Document_Embeds_AttributeGetter = 1298,
  kV8Document_Plugins_AttributeGetter = 1299,
  kV8Document_Links_AttributeGetter = 1300,
  kV8Document_Forms_AttributeGetter = 1301,
  kV8Document_Scripts_AttributeGetter = 1302,
  kV8Document_Anchors_AttributeGetter = 1303,
  kV8Document_Applets_AttributeGetter = 1304,
  kXMLHttpRequestCrossOriginWithCredentials = 1305,
  kMediaStreamTrackRemote = 1306,
  kV8Node_IsConnected_AttributeGetter = 1307,
  kShadowRootDelegatesFocus = 1308,
  kMixedShadowRootV0AndV1 = 1309,
  kFileAPINativeLineEndings = 1320,
  kPointerEventAttributeCount = 1321,
  kCompositedReplication = 1322,
  kV8DataTransferItem_WebkitGetAsEntry_Method = 1325,
  kV8HTMLInputElement_WebkitEntries_AttributeGetter = 1326,
  kEntry_Filesystem_AttributeGetter_IsolatedFileSystem = 1327,
  kEntry_GetMetadata_Method_IsolatedFileSystem = 1328,
  kEntry_MoveTo_Method_IsolatedFileSystem = 1329,
  kEntry_CopyTo_Method_IsolatedFileSystem = 1330,
  kEntry_Remove_Method_IsolatedFileSystem = 1331,
  kEntry_GetParent_Method_IsolatedFileSystem = 1332,
  kEntry_ToURL_Method_IsolatedFileSystem = 1333,
  kDuring_Microtask_Alert = 1334,
  kDuring_Microtask_Confirm = 1335,
  kDuring_Microtask_Print = 1336,
  kDuring_Microtask_Prompt = 1337,
  kDuring_Microtask_SyncXHR = 1338,
  kCredentialManagerGetReturnedCredential = 1342,
  kGeolocationInsecureOriginDeprecatedNotRemoved = 1343,
  kGeolocationInsecureOriginIframeDeprecatedNotRemoved = 1344,
  kProgressElementWithNoneAppearance = 1345,
  kProgressElementWithProgressBarAppearance = 1346,
  kPointerEventAddListenerCount = 1347,
  kCSSValueAppearanceNone = 1351,
  kCSSValueAppearanceNotNone = 1352,
  kCSSValueAppearanceOthers = 1353,
  kCSSValueAppearanceButton = 1354,
  kCSSValueAppearanceCaret = 1355,
  kCSSValueAppearanceCheckbox = 1356,
  kCSSValueAppearanceMenulist = 1357,
  kCSSValueAppearanceMenulistButton = 1358,
  kCSSValueAppearanceListbox = 1359,
  kCSSValueAppearanceRadio = 1360,
  kCSSValueAppearanceSearchField = 1361,
  kCSSValueAppearanceTextField = 1362,
  kAudioContextCreatePannerAutomated = 1363,
  kPannerNodeSetPosition = 1364,
  kPannerNodeSetOrientation = 1365,
  kAudioListenerSetPosition = 1366,
  kAudioListenerSetOrientation = 1367,
  kIntersectionObserver_Constructor = 1368,
  kDurableStoragePersist = 1369,
  kDurableStoragePersisted = 1370,
  kDurableStorageEstimate = 1371,
  kCSSDeepCombinatorAndShadow = 1375,
  kOpacityWithPreserve3DQuirk = 1376,
  kCSSSelectorPseudoReadOnly = 1377,
  kCSSSelectorPseudoReadWrite = 1378,
  kCSSSelectorPseudoDefined = 1383,
  kRTCPeerConnectionAddIceCandidatePromise = 1384,
  kRTCPeerConnectionAddIceCandidateLegacy = 1385,
  kRTCIceCandidateDefaultSdpMLineIndex = 1386,
  kMediaStreamConstraintsOldAndNew = 1389,
  kV8ArrayProtectorDirtied = 1390,
  kV8ArraySpeciesModified = 1391,
  kV8ArrayPrototypeConstructorModified = 1392,
  kV8ArrayInstanceProtoModified = 1393,
  kV8ArrayInstanceConstructorModified = 1394,
  kV8LegacyFunctionDeclaration = 1395,
  kV8RegExpPrototypeSourceGetter = 1396,
  kV8RegExpPrototypeOldFlagGetter = 1397,
  kV8DecimalWithLeadingZeroInStrictMode = 1398,
  kGetUserMediaPrefixed = 1400,
  kGetUserMediaLegacy = 1401,
  kGetUserMediaPromise = 1402,
  kCSSFilterFunctionNoArguments = 1403,
  kV8LegacyDateParser = 1404,
  kOpenSearchInsecureOriginInsecureTarget = 1405,
  kOpenSearchInsecureOriginSecureTarget = 1406,
  kOpenSearchSecureOriginInsecureTarget = 1407,
  kOpenSearchSecureOriginSecureTarget = 1408,
  kRegisterProtocolHandlerSecureOrigin = 1409,
  kRegisterProtocolHandlerInsecureOrigin = 1410,
  kCrossOriginWindowAlert = 1411,
  kCrossOriginWindowConfirm = 1412,
  kCrossOriginWindowPrompt = 1413,
  kCrossOriginWindowPrint = 1414,
  kMediaStreamOnActive = 1415,
  kMediaStreamOnInactive = 1416,
  kAddEventListenerPassiveTrue = 1417,
  kAddEventListenerPassiveFalse = 1418,
  kCSPReferrerDirective = 1419,
  kDocumentOpen = 1420,
  kElementRequestPointerLockInShadow = 1421,
  kShadowRootPointerLockElement = 1422,
  kDocumentPointerLockElementInV0Shadow = 1423,
  kTextAreaMaxLength = 1424,
  kTextAreaMinLength = 1425,
  kTopNavigationFromSubFrame = 1426,
  kPrefixedElementRequestFullscreenInShadow = 1427,
  kMediaSourceAbortRemove = 1428,
  kMediaSourceDurationTruncatingBuffered = 1429,
  kAudioContextCrossOriginIframe = 1430,
  kPointerEventSetCapture = 1431,
  kPointerEventDispatch = 1432,
  kMIDIMessageEventReceivedTime = 1433,
  kSummaryElementWithDisplayBlockAuthorRule = 1434,
  kV8MediaStream_Active_AttributeGetter = 1435,
  kBeforeInstallPromptEvent = 1436,
  kBeforeInstallPromptEventUserChoice = 1437,
  kBeforeInstallPromptEventPreventDefault = 1438,
  kBeforeInstallPromptEventPrompt = 1439,
  kExecCommandAltersHTMLStructure = 1440,
  kSecureContextCheckPassed = 1441,
  kSecureContextCheckFailed = 1442,
  kSecureContextCheckForSandboxedOriginPassed = 1443,
  kSecureContextCheckForSandboxedOriginFailed = 1444,
  kV8DefineGetterOrSetterWouldThrow = 1445,
  kV8FunctionConstructorReturnedUndefined = 1446,
  kV8BroadcastChannel_Constructor = 1447,
  kV8BroadcastChannel_PostMessage_Method = 1448,
  kV8BroadcastChannel_Close_Method = 1449,
  kTouchStartFired = 1450,
  kMouseDownFired = 1451,
  kPointerDownFired = 1452,
  kPointerDownFiredForTouch = 1453,
  kPointerEventDispatchPointerDown = 1454,
  kSVGSMILBeginOrEndEventValue = 1455,
  kSVGSMILBeginOrEndSyncbaseValue = 1456,
  kSVGSMILElementInsertedAfterLoad = 1457,
  kV8VisualViewport_OffsetLeft_AttributeGetter = 1458,
  kV8VisualViewport_OffsetTop_AttributeGetter = 1459,
  kV8VisualViewport_PageLeft_AttributeGetter = 1460,
  kV8VisualViewport_PageTop_AttributeGetter = 1461,
  kV8VisualViewport_Width_AttributeGetter = 1462,
  kV8VisualViewport_Height_AttributeGetter = 1463,
  kV8VisualViewport_Scale_AttributeGetter = 1464,
  kVisualViewportScrollFired = 1465,
  kVisualViewportResizeFired = 1466,
  kNodeGetRootNode = 1467,
  kSlotChangeEventAddListener = 1468,
  kCSSValueAppearanceButtonRendered = 1469,
  kCSSValueAppearanceButtonForAnchor = 1470,
  kCSSValueAppearanceButtonForButton = 1471,
  kCSSValueAppearanceButtonForOtherButtons = 1472,
  kCSSValueAppearanceTextFieldRendered = 1473,
  kCSSValueAppearanceTextFieldForSearch = 1474,
  kCSSValueAppearanceTextFieldForTextField = 1475,
  kRTCPeerConnectionGetStats = 1476,
  kSVGSMILAnimationAppliedEffect = 1477,
  kPerformanceResourceTimingSizes = 1478,
  kEventSourceDocument = 1479,
  kEventSourceWorker = 1480,
  kSingleOriginInTimingAllowOrigin = 1481,
  kMultipleOriginsInTimingAllowOrigin = 1482,
  kStarInTimingAllowOrigin = 1483,
  kSVGSMILAdditiveAnimation = 1484,
  kSendBeaconWithNonSimpleContentType = 1485,
  kChromeLoadTimesRequestTime = 1486,
  kChromeLoadTimesStartLoadTime = 1487,
  kChromeLoadTimesCommitLoadTime = 1488,
  kChromeLoadTimesFinishDocumentLoadTime = 1489,
  kChromeLoadTimesFinishLoadTime = 1490,
  kChromeLoadTimesFirstPaintTime = 1491,
  kChromeLoadTimesFirstPaintAfterLoadTime = 1492,
  kChromeLoadTimesNavigationType = 1493,
  kChromeLoadTimesWasFetchedViaSpdy = 1494,
  kChromeLoadTimesWasNpnNegotiated = 1495,
  kChromeLoadTimesNpnNegotiatedProtocol = 1496,
  kChromeLoadTimesWasAlternateProtocolAvailable = 1497,
  kChromeLoadTimesConnectionInfo = 1498,
  kChromeLoadTimesUnknown = 1499,
  kSVGViewElement = 1500,
  kWebShareShare = 1501,
  kAuxclickAddListenerCount = 1502,
  kHTMLCanvasElement = 1503,
  kSVGSMILAnimationElementTiming = 1504,
  kSVGSMILBeginEndAnimationElement = 1505,
  kSVGSMILPausing = 1506,
  kSVGSMILCurrentTime = 1507,
  kHTMLBodyElementOnSelectionChangeAttribute = 1508,
  kForeignFetchInterception = 1509,
  kUsbGetDevices = 1519,
  kUsbRequestDevice = 1520,
  kUsbDeviceOpen = 1521,
  kUsbDeviceClose = 1522,
  kUsbDeviceSelectConfiguration = 1523,
  kUsbDeviceClaimInterface = 1524,
  kUsbDeviceReleaseInterface = 1525,
  kUsbDeviceSelectAlternateInterface = 1526,
  kUsbDeviceControlTransferIn = 1527,
  kUsbDeviceControlTransferOut = 1528,
  kUsbDeviceClearHalt = 1529,
  kUsbDeviceTransferIn = 1530,
  kUsbDeviceTransferOut = 1531,
  kUsbDeviceIsochronousTransferIn = 1532,
  kUsbDeviceIsochronousTransferOut = 1533,
  kUsbDeviceReset = 1534,
  kPointerEnterLeaveFired = 1535,
  kPointerOverOutFired = 1536,
  kDraggableAttribute = 1539,
  kCleanScriptElementWithNonce = 1540,
  kPotentiallyInjectedScriptElementWithNonce = 1541,
  kPendingStylesheetAddedAfterBodyStarted = 1542,
  kUntrustedMouseDownEventDispatchedToSelect = 1543,
  kBlockedSniffingAudioToScript = 1544,
  kBlockedSniffingVideoToScript = 1545,
  kBlockedSniffingCSVToScript = 1546,
  kMetaSetCookie = 1547,
  kMetaRefresh = 1548,
  kMetaSetCookieWhenCSPBlocksInlineScript = 1549,
  kMetaRefreshWhenCSPBlocksInlineScript = 1550,
  kMiddleClickAutoscrollStart = 1551,
  kRTCPeerConnectionCreateOfferOptionsOfferToReceive = 1553,
  kDragAndDropScrollStart = 1554,
  kPresentationConnectionListConnectionAvailableEventListener = 1555,
  kWebAudioAutoplayCrossOriginIframe = 1556,
  kVRGetDisplays = 1558,
  kXSSAuditorBlockedScript = 1581,
  kXSSAuditorBlockedEntirePage = 1582,
  kXSSAuditorDisabled = 1583,
  kXSSAuditorEnabledFilter = 1584,
  kXSSAuditorEnabledBlock = 1585,
  kXSSAuditorInvalid = 1586,
  kTextInputEventOnInput = 1589,
  kTextInputEventOnTextArea = 1590,
  kTextInputEventOnContentEditable = 1591,
  kTextInputEventOnNotNode = 1592,
  kWebkitBeforeTextInsertedOnInput = 1593,
  kWebkitBeforeTextInsertedOnTextArea = 1594,
  kWebkitBeforeTextInsertedOnContentEditable = 1595,
  kWebkitBeforeTextInsertedOnNotNode = 1596,
  kWebkitEditableContentChangedOnInput = 1597,
  kWebkitEditableContentChangedOnTextArea = 1598,
  kWebkitEditableContentChangedOnContentEditable = 1599,
  kWebkitEditableContentChangedOnNotNode = 1600,
  kV8NavigatorUserMediaError_ConstraintName_AttributeGetter = 1601,
  kV8HTMLMediaElement_SrcObject_AttributeGetter = 1602,
  kV8HTMLMediaElement_SrcObject_AttributeSetter = 1603,
  kCreateObjectURLBlob = 1604,
  kCreateObjectURLMediaSource = 1605,
  kCreateObjectURLMediaStream = 1606,
  kLongTaskObserver = 1615,
  kCSSOffsetInEffect = 1617,
  kVRGetDisplaysInsecureOrigin = 1618,
  kVRRequestPresent = 1619,
  kVRRequestPresentInsecureOrigin = 1620,
  kVRDeprecatedFieldOfView = 1621,
  kVideoInCanvas = 1622,
  kHiddenAutoplayedVideoInCanvas = 1623,
  kOffscreenCanvas = 1624,
  kGamepadPose = 1625,
  kGamepadHand = 1626,
  kGamepadDisplayId = 1627,
  kGamepadButtonTouched = 1628,
  kGamepadPoseHasOrientation = 1629,
  kGamepadPoseHasPosition = 1630,
  kGamepadPosePosition = 1631,
  kGamepadPoseLinearVelocity = 1632,
  kGamepadPoseLinearAcceleration = 1633,
  kGamepadPoseOrientation = 1634,
  kGamepadPoseAngularVelocity = 1635,
  kGamepadPoseAngularAcceleration = 1636,
  kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter = 1638,
  kV8RTCDataChannel_MaxRetransmits_AttributeGetter = 1639,
  kV8RTCDataChannel_Reliable_AttributeGetter = 1640,
  kV8RTCPeerConnection_AddStream_Method = 1641,
  kV8RTCPeerConnection_CreateDTMFSender_Method = 1642,
  kV8RTCPeerConnection_GetLocalStreams_Method = 1643,
  kV8RTCPeerConnection_GetRemoteStreams_Method = 1644,
  kV8RTCPeerConnection_RemoveStream_Method = 1646,
  kRTCPeerConnectionCreateDataChannelMaxRetransmitTime = 1648,
  kRTCPeerConnectionCreateDataChannelMaxRetransmits = 1649,
  kAudioContextCreateConstantSource = 1650,
  kWebAudioConstantSourceNode = 1651,
  kLoopbackEmbeddedInSecureContext = 1652,
  kLoopbackEmbeddedInNonSecureContext = 1653,
  kBlinkMacSystemFont = 1654,
  kRTCIceServerURL = 1656,
  kRTCIceServerURLs = 1657,
  kOffscreenCanvasTransferToImageBitmap2D = 1658,
  kOffscreenCanvasTransferToImageBitmapWebGL = 1659,
  kOffscreenCanvasCommit2D = 1660,
  kOffscreenCanvasCommitWebGL = 1661,
  kRTCConfigurationIceTransportPolicy = 1662,
  kRTCConfigurationIceTransports = 1664,
  kDocumentFullscreenElementInV0Shadow = 1665,
  kScriptWithCSPBypassingSchemeParserInserted = 1666,
  kScriptWithCSPBypassingSchemeNotParserInserted = 1667,
  kDocumentCreateElement2ndArgStringHandling = 1668,
  kV8MediaRecorder_Start_Method = 1669,
  kWebBluetoothRequestDevice = 1670,
  kUnitlessPerspectiveInPerspectiveProperty = 1671,
  kUnitlessPerspectiveInTransformProperty = 1672,
  kV8RTCSessionDescription_Type_AttributeGetter = 1673,
  kV8RTCSessionDescription_Type_AttributeSetter = 1674,
  kV8RTCSessionDescription_Sdp_AttributeGetter = 1675,
  kV8RTCSessionDescription_Sdp_AttributeSetter = 1676,
  kRTCSessionDescriptionInitNoType = 1677,
  kRTCSessionDescriptionInitNoSdp = 1678,
  kHTMLMediaElementPreloadForcedMetadata = 1679,
  kGenericSensorStart = 1680,
  kGenericSensorStop = 1681,
  kTouchEventPreventedNoTouchAction = 1682,
  kTouchEventPreventedForcedDocumentPassiveNoTouchAction = 1683,
  kV8Event_StopPropagation_Method = 1684,
  kV8Event_StopImmediatePropagation_Method = 1685,
  kImageCaptureConstructor = 1686,
  kV8Document_RootScroller_AttributeGetter = 1687,
  kV8Document_RootScroller_AttributeSetter = 1688,
  kCustomElementRegistryDefine = 1689,
  kLinkHeaderServiceWorker = 1690,
  kCSSShadowPiercingDescendantCombinator = 1691,
  kCSSFlexibleBox = 1692,
  kCSSGridLayout = 1693,
  kFullscreenAllowedByOrientationChange = 1696,
  kServiceWorkerRespondToNavigationRequestWithRedirectedResponse = 1697,
  kV8AudioContext_Constructor = 1698,
  kV8OfflineAudioContext_Constructor = 1699,
  kAppInstalledEventAddListener = 1700,
  kAudioContextGetOutputTimestamp = 1701,
  kV8MediaStreamAudioDestinationNode_Constructor = 1702,
  kV8AnalyserNode_Constructor = 1703,
  kV8AudioBuffer_Constructor = 1704,
  kV8AudioBufferSourceNode_Constructor = 1705,
  kV8AudioProcessingEvent_Constructor = 1706,
  kV8BiquadFilterNode_Constructor = 1707,
  kV8ChannelMergerNode_Constructor = 1708,
  kV8ChannelSplitterNode_Constructor = 1709,
  kV8ConstantSourceNode_Constructor = 1710,
  kV8ConvolverNode_Constructor = 1711,
  kV8DelayNode_Constructor = 1712,
  kV8DynamicsCompressorNode_Constructor = 1713,
  kV8GainNode_Constructor = 1714,
  kV8IIRFilterNode_Constructor = 1715,
  kV8MediaElementAudioSourceNode_Constructor = 1716,
  kV8MediaStreamAudioSourceNode_Constructor = 1717,
  kV8OfflineAudioCompletionEvent_Constructor = 1718,
  kV8OscillatorNode_Constructor = 1719,
  kV8PannerNode_Constructor = 1720,
  kV8PeriodicWave_Constructor = 1721,
  kV8StereoPannerNode_Constructor = 1722,
  kV8WaveShaperNode_Constructor = 1723,
  kV8Headers_GetAll_Method = 1724,
  kNavigatorVibrateEngagementNone = 1725,
  kNavigatorVibrateEngagementMinimal = 1726,
  kNavigatorVibrateEngagementLow = 1727,
  kNavigatorVibrateEngagementMedium = 1728,
  kNavigatorVibrateEngagementHigh = 1729,
  kNavigatorVibrateEngagementMax = 1730,
  kAlertEngagementNone = 1731,
  kAlertEngagementMinimal = 1732,
  kAlertEngagementLow = 1733,
  kAlertEngagementMedium = 1734,
  kAlertEngagementHigh = 1735,
  kAlertEngagementMax = 1736,
  kConfirmEngagementNone = 1737,
  kConfirmEngagementMinimal = 1738,
  kConfirmEngagementLow = 1739,
  kConfirmEngagementMedium = 1740,
  kConfirmEngagementHigh = 1741,
  kConfirmEngagementMax = 1742,
  kPromptEngagementNone = 1743,
  kPromptEngagementMinimal = 1744,
  kPromptEngagementLow = 1745,
  kPromptEngagementMedium = 1746,
  kPromptEngagementHigh = 1747,
  kPromptEngagementMax = 1748,
  kTopNavInSandbox = 1749,
  kTopNavInSandboxWithoutGesture = 1750,
  kTopNavInSandboxWithPerm = 1751,
  kTopNavInSandboxWithPermButNoGesture = 1752,
  kReferrerPolicyHeader = 1753,
  kHTMLAnchorElementReferrerPolicyAttribute = 1754,
  kHTMLIFrameElementReferrerPolicyAttribute = 1755,
  kHTMLImageElementReferrerPolicyAttribute = 1756,
  kHTMLLinkElementReferrerPolicyAttribute = 1757,
  kBaseElement = 1758,
  kBaseWithCrossOriginHref = 1759,
  kBaseWithDataHref = 1760,
  kBaseWithNewlinesInTarget = 1761,
  kBaseWithOpenBracketInTarget = 1762,
  kBaseWouldBeBlockedByDefaultSrc = 1763,
  kV8AssigmentExpressionLHSIsCallInSloppy = 1764,
  kV8AssigmentExpressionLHSIsCallInStrict = 1765,
  kV8PromiseConstructorReturnedUndefined = 1766,
  kFormSubmittedWithUnclosedFormControl = 1767,
  kScrollbarUseVerticalScrollbarButton = 1777,
  kScrollbarUseVerticalScrollbarThumb = 1778,
  kScrollbarUseVerticalScrollbarTrack = 1779,
  kScrollbarUseHorizontalScrollbarButton = 1780,
  kScrollbarUseHorizontalScrollbarThumb = 1781,
  kScrollbarUseHorizontalScrollbarTrack = 1782,
  kHTMLTableCellElementColspan = 1783,
  kHTMLTableCellElementColspanGreaterThan1000 = 1784,
  kHTMLTableCellElementColspanGreaterThan8190 = 1785,
  kSelectionAddRangeIntersect = 1786,
  kPostMessageFromInsecureToSecureToplevel = 1787,
  kV8MediaSession_Metadata_AttributeGetter = 1788,
  kV8MediaSession_Metadata_AttributeSetter = 1789,
  kV8MediaSession_PlaybackState_AttributeGetter = 1790,
  kV8MediaSession_PlaybackState_AttributeSetter = 1791,
  kV8MediaSession_SetActionHandler_Method = 1792,
  kWebNFCPush = 1793,
  kWebNFCCancelPush = 1794,
  kWebNFCWatch = 1795,
  kWebNFCCancelWatch = 1796,
  kAudioParamCancelAndHoldAtTime = 1797,
  kCSSValueUserModifyReadOnly = 1798,
  kCSSValueUserModifyReadWrite = 1799,
  kCSSValueUserModifyReadWritePlaintextOnly = 1800,
  kCSSValueOnDemand = 1802,
  kServiceWorkerNavigationPreload = 1803,
  kFullscreenRequestWithPendingElement = 1804,
  kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad = 1805,
  kPointerEventSetCaptureOutsideDispatch = 1806,
  kNotificationPermissionRequestedInsecureOrigin = 1807,
  kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method = 1808,
  kV8DeprecatedStorageInfo_RequestQuota_Method = 1809,
  kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method = 1810,
  kV8DeprecatedStorageQuota_RequestQuota_Method = 1811,
  kV8FileReaderSync_Constructor = 1812,
  kV8HTMLVideoElement_Poster_AttributeGetter = 1815,
  kV8HTMLVideoElement_Poster_AttributeSetter = 1816,
  kNotificationPermissionRequestedIframe = 1817,
  kPresentationReceiverInsecureOrigin = 1819,
  kPresentationReceiverSecureOrigin = 1820,
  kPresentationRequestInsecureOrigin = 1821,
  kPresentationRequestSecureOrigin = 1822,
  kRtcpMuxPolicyNegotiate = 1823,
  kDOMClobberedVariableAccessed = 1824,
  kHTMLDocumentCreateProcessingInstruction = 1825,
  kFetchResponseConstructionWithStream = 1826,
  kLocationOrigin = 1827,
  kDocumentOrigin = 1828,
  kCanvas2DFilter = 1830,
  kCanvas2DImageSmoothingQuality = 1831,
  kCanvasToBlob = 1832,
  kCanvasToDataURL = 1833,
  kOffscreenCanvasConvertToBlob = 1834,
  kSVGInCanvas2D = 1835,
  kSVGInWebGL = 1836,
  kSelectionFuncionsChangeFocus = 1837,
  kHTMLObjectElementGetter = 1838,
  kHTMLObjectElementSetter = 1839,
  kHTMLEmbedElementGetter = 1840,
  kHTMLEmbedElementSetter = 1841,
  kTransformUsesBoxSizeOnSVG = 1842,
  kScrollByKeyboardArrowKeys = 1843,
  kScrollByKeyboardPageUpDownKeys = 1844,
  kScrollByKeyboardHomeEndKeys = 1845,
  kScrollByKeyboardSpacebarKey = 1846,
  kScrollByTouch = 1847,
  kScrollByWheel = 1848,
  kScheduledActionIgnored = 1849,
  kGetCanvas2DContextAttributes = 1850,
  kV8HTMLInputElement_Capture_AttributeGetter = 1851,
  kV8HTMLInputElement_Capture_AttributeSetter = 1852,
  kHTMLMediaElementControlsListAttribute = 1853,
  kHTMLMediaElementControlsListNoDownload = 1854,
  kHTMLMediaElementControlsListNoFullscreen = 1855,
  kHTMLMediaElementControlsListNoRemotePlayback = 1856,
  kPointerEventClickRetargetCausedByCapture = 1857,
  kVRDisplayDisplayName = 1861,
  kVREyeParametersOffset = 1862,
  kVRPoseLinearVelocity = 1863,
  kVRPoseLinearAcceleration = 1864,
  kVRPoseAngularVelocity = 1865,
  kVRPoseAngularAcceleration = 1866,
  kCSSOverflowPaged = 1867,
  kChildSrcAllowedWorkerThatScriptSrcBlocked = 1868,
  kHTMLTableElementPresentationAttributeBackground = 1869,
  kV8Navigator_GetInstalledRelatedApps_Method = 1870,
  kNamedAccessOnWindow_ChildBrowsingContext = 1871,
  kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch = 1872,
  kV0CustomElementsRegisterHTMLCustomTag = 1873,
  kV0CustomElementsRegisterHTMLTypeExtension = 1874,
  kV0CustomElementsRegisterSVGElement = 1875,
  kV0CustomElementsRegisterEmbedderElement = 1876,
  kV0CustomElementsCreateCustomTagElement = 1877,
  kV0CustomElementsCreateTypeExtensionElement = 1878,
  kV0CustomElementsConstruct = 1879,
  kV8IDBObserver_Observe_Method = 1880,
  kV8IDBObserver_Unobserve_Method = 1881,
  kWebBluetoothRemoteCharacteristicGetDescriptor = 1882,
  kWebBluetoothRemoteCharacteristicGetDescriptors = 1883,
  kWebBluetoothRemoteCharacteristicReadValue = 1884,
  kWebBluetoothRemoteCharacteristicWriteValue = 1885,
  kWebBluetoothRemoteCharacteristicStartNotifications = 1886,
  kWebBluetoothRemoteCharacteristicStopNotifications = 1887,
  kWebBluetoothRemoteDescriptorReadValue = 1888,
  kWebBluetoothRemoteDescriptorWriteValue = 1889,
  kWebBluetoothRemoteServerConnect = 1890,
  kWebBluetoothRemoteServerDisconnect = 1891,
  kWebBluetoothRemoteServerGetPrimaryService = 1892,
  kWebBluetoothRemoteServerGetPrimaryServices = 1893,
  kWebBluetoothRemoteServiceGetCharacteristic = 1894,
  kWebBluetoothRemoteServiceGetCharacteristics = 1895,
  kHTMLContentElement = 1896,
  kHTMLShadowElement = 1897,
  kHTMLSlotElement = 1898,
  kAccelerometerConstructor = 1899,
  kAbsoluteOrientationSensorConstructor = 1900,
  kAmbientLightSensorConstructor = 1901,
  kGenericSensorOnActivate = 1902,
  kGenericSensorOnChange = 1903,
  kGenericSensorOnError = 1904,
  kGenericSensorActivated = 1905,
  kGyroscopeConstructor = 1906,
  kMagnetometerConstructor = 1907,
  kOrientationSensorPopulateMatrix = 1908,
  kWindowOpenWithInvalidURL = 1909,
  kCrossOriginMainFrameNulledNameAccessed = 1910,
  kMenuItemElementIconAttribute = 1911,
  kWebkitCSSMatrixSetMatrixValue = 1912,
  kWebkitCSSMatrixConstructFromString = 1913,
  kCanRequestURLHTTPContainingNewline = 1914,
  kGetGamepads = 1916,
  kMediaStreamConstraintsAudio = 1918,
  kMediaStreamConstraintsAudioUnconstrained = 1919,
  kMediaStreamConstraintsVideo = 1920,
  kMediaStreamConstraintsVideoUnconstrained = 1921,
  kMediaStreamConstraintsWidth = 1922,
  kMediaStreamConstraintsHeight = 1923,
  kMediaStreamConstraintsAspectRatio = 1924,
  kMediaStreamConstraintsFrameRate = 1925,
  kMediaStreamConstraintsFacingMode = 1926,
  kMediaStreamConstraintsVolume = 1927,
  kMediaStreamConstraintsSampleRate = 1928,
  kMediaStreamConstraintsSampleSize = 1929,
  kMediaStreamConstraintsEchoCancellation = 1930,
  kMediaStreamConstraintsLatency = 1931,
  kMediaStreamConstraintsChannelCount = 1932,
  kMediaStreamConstraintsDeviceIdAudio = 1933,
  kMediaStreamConstraintsDeviceIdVideo = 1934,
  kMediaStreamConstraintsDisableLocalEcho = 1935,
  kMediaStreamConstraintsGroupIdAudio = 1936,
  kMediaStreamConstraintsGroupIdVideo = 1937,
  kMediaStreamConstraintsVideoKind = 1938,
  kMediaStreamConstraintsDepthNear = 1939,
  kMediaStreamConstraintsDepthFar = 1940,
  kMediaStreamConstraintsFocalLengthX = 1941,
  kMediaStreamConstraintsFocalLengthY = 1942,
  kMediaStreamConstraintsMediaStreamSourceAudio = 1943,
  kMediaStreamConstraintsMediaStreamSourceVideo = 1944,
  kMediaStreamConstraintsRenderToAssociatedSink = 1945,
  kMediaStreamConstraintsHotwordEnabled = 1946,
  kMediaStreamConstraintsGoogEchoCancellation = 1947,
  kMediaStreamConstraintsGoogExperimentalEchoCancellation = 1948,
  kMediaStreamConstraintsGoogAutoGainControl = 1949,
  kMediaStreamConstraintsGoogExperimentalAutoGainControl = 1950,
  kMediaStreamConstraintsGoogNoiseSuppression = 1951,
  kMediaStreamConstraintsGoogHighpassFilter = 1952,
  kMediaStreamConstraintsGoogTypingNoiseDetection = 1953,
  kMediaStreamConstraintsGoogExperimentalNoiseSuppression = 1954,
  kMediaStreamConstraintsGoogBeamforming = 1955,
  kMediaStreamConstraintsGoogArrayGeometry = 1956,
  kMediaStreamConstraintsGoogAudioMirroring = 1957,
  kMediaStreamConstraintsGoogDAEchoCancellation = 1958,
  kMediaStreamConstraintsGoogNoiseReduction = 1959,
  kMediaStreamConstraintsGoogPowerLineFrequency = 1960,
  kViewportFixedPositionUnderFilter = 1961,
  kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting = 1962,
  kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting = 1963,
  kGamepadAxes = 1964,
  kGamepadButtons = 1965,
  kDispatchMouseEventOnDisabledFormControl = 1967,
  kElementNameDOMInvalidHTMLParserValid = 1968,
  kElementNameDOMValidHTMLParserInvalid = 1969,
  kGATTServerDisconnectedEvent = 1970,
  kAnchorClickDispatchForNonConnectedNode = 1971,
  kHTMLParseErrorNestedForm = 1972,
  kFontShapingNotDefGlyphObserved = 1973,
  kPostMessageOutgoingWouldBeBlockedByConnectSrc = 1974,
  kPostMessageIncomingWouldBeBlockedByConnectSrc = 1975,
  kPaymentRequestNetworkNameInSupportedMethods = 1976,
  kCrossOriginPropertyAccess = 1977,
  kCrossOriginPropertyAccessFromOpener = 1978,
  kCredentialManagerCreate = 1979,
  kWebDatabaseCreateDropFTS3Table = 1980,
  kFieldEditInSecureContext = 1981,
  kFieldEditInNonSecureContext = 1982,
  kCredentialManagerGetMediationRequired = 1984,
  kNetInfoRtt = 1989,
  kNetInfoDownlink = 1990,
  kShapeDetection_BarcodeDetectorConstructor = 1991,
  kShapeDetection_FaceDetectorConstructor = 1992,
  kShapeDetection_TextDetectorConstructor = 1993,
  kInertAttribute = 1995,
  kPluginInstanceAccessFromIsolatedWorld = 1996,
  kPluginInstanceAccessFromMainWorld = 1997,
  kShowModalForElementInFullscreenStack = 2000,
  kThreeValuedPositionBackground = 2001,
  kUnitlessZeroAngleFilter = 2007,
  kUnitlessZeroAngleGradient = 2008,
  kUnitlessZeroAngleTransform = 2010,
  kCredentialManagerPreventSilentAccess = 2012,
  kNetInfoEffectiveType = 2013,
  kV8SpeechRecognition_Start_Method = 2014,
  kTableRowDirectionDifferentFromTable = 2015,
  kTableSectionDirectionDifferentFromTable = 2016,
  kClientHintsDeviceMemory = 2017,
  kCSSRegisterProperty = 2018,
  kRelativeOrientationSensorConstructor = 2019,
  kSmoothScrollJSInterventionActivated = 2020,
  kBudgetAPIGetCost = 2021,
  kBudgetAPIGetBudget = 2022,
  kCrossOriginMainFrameNulledNonEmptyNameAccessed = 2023,
  kDeprecatedTimingFunctionStepMiddle = 2024,
  kDocumentDomainSetWithNonDefaultPort = 2025,
  kDocumentDomainSetWithDefaultPort = 2026,
  kFeaturePolicyHeader = 2027,
  kFeaturePolicyAllowAttribute = 2028,
  kMIDIPortOpen = 2029,
  kMIDIOutputSend = 2030,
  kMIDIMessageEvent = 2031,
  kFetchEventIsReload = 2032,
  kServiceWorkerClientFrameType = 2033,
  kQuirksModeDocument = 2034,
  kLimitedQuirksModeDocument = 2035,
  kEncryptedMediaCrossOriginIframe = 2036,
  kCSSSelectorWebkitMediaControls = 2037,
  kCSSSelectorWebkitMediaControlsOverlayEnclosure = 2038,
  kCSSSelectorWebkitMediaControlsOverlayPlayButton = 2039,
  kCSSSelectorWebkitMediaControlsEnclosure = 2040,
  kCSSSelectorWebkitMediaControlsPanel = 2041,
  kCSSSelectorWebkitMediaControlsPlayButton = 2042,
  kCSSSelectorWebkitMediaControlsCurrentTimeDisplay = 2043,
  kCSSSelectorWebkitMediaControlsTimeRemainingDisplay = 2044,
  kCSSSelectorWebkitMediaControlsTimeline = 2045,
  kCSSSelectorWebkitMediaControlsTimelineContainer = 2046,
  kCSSSelectorWebkitMediaControlsMuteButton = 2047,
  kCSSSelectorWebkitMediaControlsVolumeSlider = 2048,
  kCSSSelectorWebkitMediaControlsFullscreenButton = 2049,
  kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton = 2050,
  kLinearAccelerationSensorConstructor = 2051,
  kReportUriMultipleEndpoints = 2052,
  kReportUriSingleEndpoint = 2053,
  kV8ConstructorNonUndefinedPrimitiveReturn = 2054,
  kEncryptedMediaDisallowedByFeaturePolicyInCrossOriginIframe = 2055,
  kGeolocationDisallowedByFeaturePolicyInCrossOriginIframe = 2056,
  kGetUserMediaMicDisallowedByFeaturePolicyInCrossOriginIframe = 2057,
  kGetUserMediaCameraDisallowedByFeaturePolicyInCrossOriginIframe = 2058,
  kRequestMIDIAccessDisallowedByFeaturePolicyInCrossOriginIframe = 2059,
  kMediaSourceKeyframeTimeGreaterThanDependant = 2060,
  kMediaSourceMuxedSequenceMode = 2061,
  kPrepareModuleScript = 2062,
  kPresentationRequestStartSecureOrigin = 2063,
  kPresentationRequestStartInsecureOrigin = 2064,
  kPersistentClientHintHeader = 2065,
  kStyleSheetListNonNullAnonymousNamedGetter = 2066,
  kOffMainThreadFetch = 2067,
  kARIAActiveDescendantAttribute = 2069,
  kARIAAtomicAttribute = 2070,
  kARIAAutocompleteAttribute = 2071,
  kARIABusyAttribute = 2072,
  kARIACheckedAttribute = 2073,
  kARIAColCountAttribute = 2074,
  kARIAColIndexAttribute = 2075,
  kARIAColSpanAttribute = 2076,
  kARIAControlsAttribute = 2077,
  kARIACurrentAttribute = 2078,
  kARIADescribedByAttribute = 2079,
  kARIADetailsAttribute = 2080,
  kARIADisabledAttribute = 2081,
  kARIADropEffectAttribute = 2082,
  kARIAErrorMessageAttribute = 2083,
  kARIAExpandedAttribute = 2084,
  kARIAFlowToAttribute = 2085,
  kARIAGrabbedAttribute = 2086,
  kARIAHasPopupAttribute = 2087,
  kARIAHelpAttribute = 2088,
  kARIAHiddenAttribute = 2089,
  kARIAInvalidAttribute = 2090,
  kARIAKeyShortcutsAttribute = 2091,
  kARIALabelAttribute = 2092,
  kARIALabeledByAttribute = 2093,
  kARIALabelledByAttribute = 2094,
  kARIALevelAttribute = 2095,
  kARIALiveAttribute = 2096,
  kARIAModalAttribute = 2097,
  kARIAMultilineAttribute = 2098,
  kARIAMultiselectableAttribute = 2099,
  kARIAOrientationAttribute = 2100,
  kARIAOwnsAttribute = 2101,
  kARIAPlaceholderAttribute = 2102,
  kARIAPosInSetAttribute = 2103,
  kARIAPressedAttribute = 2104,
  kARIAReadOnlyAttribute = 2105,
  kARIARelevantAttribute = 2106,
  kARIARequiredAttribute = 2107,
  kARIARoleDescriptionAttribute = 2108,
  kARIARowCountAttribute = 2109,
  kARIARowIndexAttribute = 2110,
  kARIARowSpanAttribute = 2111,
  kARIASelectedAttribute = 2112,
  kARIASetSizeAttribute = 2113,
  kARIASortAttribute = 2114,
  kARIAValueMaxAttribute = 2115,
  kARIAValueMinAttribute = 2116,
  kARIAValueNowAttribute = 2117,
  kARIAValueTextAttribute = 2118,
  kV8LabeledExpressionStatement = 2119,
  kPaymentRequestSupportedMethodsArray = 2120,
  kNavigatorDeviceMemory = 2121,
  kFixedWidthTableDistributionChanged = 2122,
  kWebkitBoxLayout = 2123,
  kWebkitBoxLayoutHorizontal = 2124,
  kWebkitBoxLayoutVertical = 2125,
  kWebkitBoxAlignNotInitial = 2126,
  kWebkitBoxDirectionNotInitial = 2127,
  kWebkitBoxLinesNotInitial = 2128,
  kWebkitBoxPackNotInitial = 2129,
  kWebkitBoxChildFlexNotInitial = 2130,
  kWebkitBoxChildFlexGroupNotInitial = 2131,
  kWebkitBoxChildOrdinalGroupNotInitial = 2132,
  kWebkitBoxNotDefaultOrder = 2133,
  kWebkitBoxNoChildren = 2134,
  kWebkitBoxOneChild = 2135,
  kWebkitBoxOneChildIsLayoutBlockFlowInline = 2136,
  kWebkitBoxManyChildren = 2137,
  kWebkitBoxLineClamp = 2138,
  kWebkitBoxLineClampPercentage = 2139,
  kWebkitBoxLineClampNoChildren = 2140,
  kWebkitBoxLineClampOneChild = 2141,
  kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline = 2142,
  kWebkitBoxLineClampManyChildren = 2143,
  kWebkitBoxLineClampDoesSomething = 2144,
  kFeaturePolicyAllowAttributeDeprecatedSyntax = 2145,
  kSuppressHistoryEntryWithoutUserGesture = 2146,
  kImageInputTypeFormDataWithNonEmptyValue = 2147,
  kPerformanceServerTiming = 2157,
  kFileReaderResultBeforeCompletion = 2158,
  kSyncXhrInPageDismissal = 2159,
  kAsyncXhrInPageDismissal = 2160,
  kAnimationSetPlaybackRateCompensatorySeek = 2162,
  kDeepCombinatorInStaticProfile = 2163,
  kPseudoShadowInStaticProfile = 2164,
  kSchemeBypassesCSP = 2165,
  kInnerSchemeBypassesCSP = 2166,
  kSameOriginApplicationOctetStream = 2167,
  kSameOriginApplicationXml = 2168,
  kSameOriginTextHtml = 2169,
  kSameOriginTextPlain = 2170,
  kSameOriginTextXml = 2171,
  kCrossOriginApplicationOctetStream = 2172,
  kCrossOriginApplicationXml = 2173,
  kCrossOriginTextHtml = 2174,
  kCrossOriginTextPlain = 2175,
  kCrossOriginTextXml = 2176,
  kSameOriginWorkerApplicationOctetStream = 2177,
  kSameOriginWorkerApplicationXml = 2178,
  kSameOriginWorkerTextHtml = 2179,
  kSameOriginWorkerTextPlain = 2180,
  kSameOriginWorkerTextXml = 2181,
  kCrossOriginWorkerApplicationOctetStream = 2182,
  kCrossOriginWorkerApplicationXml = 2183,
  kCrossOriginWorkerTextHtml = 2184,
  kCrossOriginWorkerTextPlain = 2185,
  kCrossOriginWorkerTextXml = 2186,
  kPerformanceObserverForWindow = 2188,
  kPerformanceObserverForWorker = 2189,
  kPaintTimingObserved = 2190,
  kPaintTimingRequested = 2191,
  kHTMLMediaElementMediaPlaybackRateOutOfRange = 2192,
  kCookieSet = 2194,
  kCookieGet = 2195,
  kGeolocationDisabledByFeaturePolicy = 2196,
  kEncryptedMediaDisabledByFeaturePolicy = 2197,
  kBatteryStatusGetBattery = 2198,
  kBatteryStatusInsecureOrigin = 2199,
  kBatteryStatusCrossOrigin = 2200,
  kBatteryStatusSameOriginABA = 2201,
  kHasIDClassTagAttribute = 2203,
  kHasBeforeOrAfterPseudoElement = 2204,
  kShapeOutsideMaybeAffectedInlineSize = 2205,
  kShapeOutsideMaybeAffectedInlinePosition = 2206,
  kGamepadVibrationActuator = 2207,
  kMicrophoneDisabledByFeaturePolicyEstimate = 2208,
  kCameraDisabledByFeaturePolicyEstimate = 2209,
  kMidiDisabledByFeaturePolicy = 2210,
  kGeolocationGetCurrentPosition = 2214,
  kGeolocationWatchPosition = 2215,
  kDataUriHasOctothorpe = 2216,
  kNetInfoSaveData = 2217,
  kV8Element_GetClientRects_Method = 2218,
  kV8Element_GetBoundingClientRect_Method = 2219,
  kV8Range_GetClientRects_Method = 2220,
  kV8Range_GetBoundingClientRect_Method = 2221,
  kV8ErrorCaptureStackTrace = 2222,
  kV8ErrorPrepareStackTrace = 2223,
  kV8ErrorStackTraceLimit = 2224,
  kPaintWorklet = 2225,
  kDocumentPageHideRegistered = 2226,
  kDocumentPageHideFired = 2227,
  kDocumentPageShowRegistered = 2228,
  kDocumentPageShowFired = 2229,
  kReplaceCharsetInXHR = 2230,
  kRespondToSameOriginRequestWithCrossOriginResponse = 2231,
  kLinkRelModulePreload = 2232,
  kHTMLFrameSetElementNonNullAnonymousNamedGetter = 2235,
  kCSPWithUnsafeEval = 2236,
  kWebAssemblyInstantiation = 2237,
  kV8IndexAccessor = 2238,
  kV8MediaCapabilities_DecodingInfo_Method = 2239,
  kV8MediaCapabilities_EncodingInfo_Method = 2240,
  kV8MediaCapabilitiesInfo_Supported_AttributeGetter = 2241,
  kV8MediaCapabilitiesInfo_Smooth_AttributeGetter = 2242,
  kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter = 2243,
  kWindowEventInV0ShadowTree = 2244,
  kHTMLAnchorElementDownloadInSandboxWithUserGesture = 2245,
  kHTMLAnchorElementDownloadInSandboxWithoutUserGesture = 2246,
  kWindowOpenRealmMismatch = 2247,
  kGridRowTrackPercentIndefiniteHeight = 2248,
  kVRGetDisplaysSupportsPresent = 2249,
  kDuplicatedAttribute = 2250,
  kDuplicatedAttributeForExecutedScript = 2251,
  kV8RTCPeerConnection_GetSenders_Method = 2252,
  kV8RTCPeerConnection_GetReceivers_Method = 2253,
  kV8RTCPeerConnection_AddTrack_Method = 2254,
  kV8RTCPeerConnection_RemoveTrack_Method = 2255,
  kLocalCSSFile = 2256,
  kLocalCSSFileExtensionRejected = 2257,
  kUserMediaDisableHardwareNoiseSuppression = 2258,
  kCertificateTransparencyRequiredErrorOnResourceLoad = 2259,
  kCSSSelectorPseudoWebkitAnyLink = 2260,
  kAudioWorkletAddModule = 2261,
  kAudioWorkletGlobalScopeRegisterProcessor = 2262,
  kAudioWorkletNodeConstructor = 2263,
  kHTMLMediaElementEmptyLoadWithFutureData = 2264,
  kCSSValueDisplayContents = 2265,
  kCSSSelectorPseudoAnyLink = 2266,
  kFileAccessedCache = 2267,
  kFileAccessedCookies = 2268,
  kFileAccessedDatabase = 2269,
  kFileAccessedFileSystem = 2270,
  kFileAccessedLocalStorage = 2271,
  kFileAccessedLocks = 2272,
  kFileAccessedServiceWorker = 2273,
  kFileAccessedSessionStorage = 2274,
  kFileAccessedSharedWorker = 2275,
  kV8MediaKeys_GetStatusForPolicy_Method = 2276,
  kV8DeoptimizerDisableSpeculation = 2277,
  kCSSSelectorCue = 2278,
  kCSSSelectorWebkitCalendarPickerIndicator = 2279,
  kCSSSelectorWebkitClearButton = 2280,
  kCSSSelectorWebkitColorSwatch = 2281,
  kCSSSelectorWebkitColorSwatchWrapper = 2282,
  kCSSSelectorWebkitDateAndTimeValue = 2283,
  kCSSSelectorWebkitDatetimeEdit = 2284,
  kCSSSelectorWebkitDatetimeEditAmpmField = 2285,
  kCSSSelectorWebkitDatetimeEditDayField = 2286,
  kCSSSelectorWebkitDatetimeEditFieldsWrapper = 2287,
  kCSSSelectorWebkitDatetimeEditHourField = 2288,
  kCSSSelectorWebkitDatetimeEditMillisecondField = 2289,
  kCSSSelectorWebkitDatetimeEditMinuteField = 2290,
  kCSSSelectorWebkitDatetimeEditMonthField = 2291,
  kCSSSelectorWebkitDatetimeEditSecondField = 2292,
  kCSSSelectorWebkitDatetimeEditText = 2293,
  kCSSSelectorWebkitDatetimeEditWeekField = 2294,
  kCSSSelectorWebkitDatetimeEditYearField = 2295,
  kCSSSelectorWebkitDetailsMarker = 2296,
  kCSSSelectorWebkitFileUploadButton = 2297,
  kCSSSelectorWebkitInnerSpinButton = 2298,
  kCSSSelectorWebkitInputPlaceholder = 2299,
  kCSSSelectorWebkitMediaSliderContainer = 2300,
  kCSSSelectorWebkitMediaSliderThumb = 2301,
  kCSSSelectorWebkitMediaTextTrackContainer = 2302,
  kCSSSelectorWebkitMediaTextTrackDisplay = 2303,
  kCSSSelectorWebkitMediaTextTrackRegion = 2304,
  kCSSSelectorWebkitMediaTextTrackRegionContainer = 2305,
  kCSSSelectorWebkitMeterBar = 2306,
  kCSSSelectorWebkitMeterEvenLessGoodValue = 2307,
  kCSSSelectorWebkitMeterInnerElement = 2308,
  kCSSSelectorWebkitMeterOptimumValue = 2309,
  kCSSSelectorWebkitMeterSuboptimumValue = 2310,
  kCSSSelectorWebkitProgressBar = 2311,
  kCSSSelectorWebkitProgressInnerElement = 2312,
  kCSSSelectorWebkitProgressValue = 2313,
  kCSSSelectorWebkitSearchCancelButton = 2314,
  kCSSSelectorWebkitSliderContainer = 2315,
  kCSSSelectorWebkitSliderRunnableTrack = 2316,
  kCSSSelectorWebkitSliderThumb = 2317,
  kCSSSelectorWebkitTextfieldDecorationContainer = 2318,
  kCSSSelectorWebkitUnknownPseudo = 2319,
  kFilterAsContainingBlockMayChangeOutput = 2320,
  kDispatchMouseUpDownEventOnDisabledFormControl = 2321,
  kCSSSelectorPseudoMatches = 2322,
  kV8RTCRtpSender_ReplaceTrack_Method = 2323,
  kInputTypeFileSecureOriginOpenChooser = 2324,
  kInputTypeFileInsecureOriginOpenChooser = 2325,
  kBasicShapeEllipseNoRadius = 2326,
  kBasicShapeEllipseOneRadius = 2327,
  kBasicShapeEllipseTwoRadius = 2328,
  kTemporalInputTypeChooserByTrustedClick = 2329,
  kTemporalInputTypeChooserByUntrustedClick = 2330,
  kTemporalInputTypeIgnoreUntrustedClick = 2331,
  kColorInputTypeChooserByTrustedClick = 2332,
  kColorInputTypeChooserByUntrustedClick = 2333,
  kCSSTypedOMStylePropertyMap = 2334,
  kScrollToFragmentRequested = 2335,
  kScrollToFragmentSucceedWithRaw = 2336,
  kScrollToFragmentSucceedWithASCII = 2337,
  kScrollToFragmentSucceedWithUTF8 = 2338,
  kScrollToFragmentSucceedWithIsomorphic = 2339,
  kScrollToFragmentSucceedWithMixed = 2340,
  kScrollToFragmentFailWithASCII = 2341,
  kScrollToFragmentFailWithUTF8 = 2342,
  kScrollToFragmentFailWithIsomorphic = 2343,
  kScrollToFragmentFailWithMixed = 2344,
  kScrollToFragmentFailWithInvalidEncoding = 2345,
  kRTCPeerConnectionWithActiveCsp = 2346,
  kImageDecodingAttribute = 2347,
  kImageDecodeAPI = 2348,
  kV8HTMLElement_Autocapitalize_AttributeGetter = 2349,
  kV8HTMLElement_Autocapitalize_AttributeSetter = 2350,
  kCSSLegacyAlignment = 2351,
  kSRISignatureCheck = 2352,
  kSRISignatureSuccess = 2353,
  kCSSBasicShape = 2354,
  kCSSGradient = 2355,
  kCSSPaintFunction = 2356,
  kWebkitCrossFade = 2357,
  kDisablePictureInPictureAttribute = 2358,
  kCertificateTransparencyNonCompliantSubresourceInMainFrame = 2359,
  kCertificateTransparencyNonCompliantResourceInSubframe = 2360,
  kV8AbortController_Constructor = 2361,
  kReplaceCharsetInXHRIgnoringCase = 2362,
  kHTMLIFrameElementGestureMedia = 2363,
  kWorkletAddModule = 2364,
  kAnimationWorkletRegisterAnimator = 2365,
  kWorkletAnimationConstructor = 2366,
  kScrollTimelineConstructor = 2367,
  kV8Document_CreateTouchList_Method = 2368,
  kAsyncClipboardAPIRead = 2369,
  kAsyncClipboardAPIWrite = 2370,
  kAsyncClipboardAPIReadText = 2371,
  kAsyncClipboardAPIWriteText = 2372,
  kOpenerNavigationWithoutGesture = 2373,
  kGetComputedStyleWebkitAppearance = 2374,
  kV8LockManager_Request_Method = 2375,
  kV8LockManager_Query_Method = 2376,
  kUserMediaEnableExperimentalHardwareEchoCancellation = 2377,
  kV8RTCDTMFSender_Track_AttributeGetter = 2378,
  kV8RTCDTMFSender_Duration_AttributeGetter = 2379,
  kV8RTCDTMFSender_InterToneGap_AttributeGetter = 2380,
  kV8RTCRtpSender_Dtmf_AttributeGetter = 2381,
  kRTCConstraintEnableDtlsSrtpTrue = 2382,
  kRTCConstraintEnableDtlsSrtpFalse = 2383,
  kRtcPeerConnectionId = 2384,
  kV8PaintWorkletGlobalScope_RegisterPaint_Method = 2385,
  kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter = 2386,
  kCSSSelectorPseudoFocus = 2387,
  kCSSSelectorPseudoFocusVisible = 2388,
  kDistrustedLegacySymantecSubresource = 2389,
  kVRDisplayGetFrameData = 2390,
  kXMLHttpRequestResponseXML = 2391,
  kMessagePortTransferClosedPort = 2392,
  kRTCLocalSdpModification = 2393,
  kKeyboardApiLock = 2394,
  kKeyboardApiUnlock = 2395,
  kPPAPIURLRequestStreamToFile = 2396,
  kPaymentHandler = 2397,
  kPaymentRequestShowWithoutGesture = 2398,
  kReadableStreamConstructor = 2399,
  kWritableStreamConstructor = 2400,
  kTransformStreamConstructor = 2401,
  kNegativeBackgroundSize = 2402,
  kNegativeMaskSize = 2403,
  kClientHintsRtt = 2404,
  kClientHintsDownlink = 2405,
  kClientHintsEct = 2406,
  kCrossOriginHTMLIFrameElementContentDocument = 2407,
  kCrossOriginHTMLIFrameElementGetSVGDocument = 2408,
  kCrossOriginHTMLEmbedElementGetSVGDocument = 2409,
  kCrossOriginHTMLFrameElementContentDocument = 2410,
  kCrossOriginHTMLObjectElementContentDocument = 2411,
  kCrossOriginHTMLObjectElementGetSVGDocument = 2412,
  kNavigatorXR = 2413,
  kXRRequestDevice = 2414,
  kXRRequestSession = 2415,
  kXRSupportsSession = 2416,
  kXRSessionGetInputSources = 2417,
  kCSSResizeAuto = 2418,
  kPrefixedCursorGrab = 2419,
  kPrefixedCursorGrabbing = 2420,
  kCredentialManagerCreatePublicKeyCredential = 2421,
  kCredentialManagerGetPublicKeyCredential = 2422,
  kCredentialManagerMakePublicKeyCredentialSuccess = 2423,
  kCredentialManagerGetPublicKeyCredentialSuccess = 2424,
  kShapeOutsideContentBox = 2425,
  kShapeOutsidePaddingBox = 2426,
  kShapeOutsideBorderBox = 2427,
  kShapeOutsideMarginBox = 2428,
  kPerformanceTimeline = 2429,
  kUserTiming = 2430,
  kCSSSelectorPseudoIS = 2431,
  kKeyboardApiGetLayoutMap = 2432,
  kWebRtcVaapiHWVP8Encoding = 2433,
  kPerformanceResourceTimingInitiatorType = 2434,
  kV8ArraySortNoElementsProtector = 2436,
  kV8ArrayPrototypeSortJSArrayModifiedPrototype = 2437,
  kV8Document_PictureInPictureEnabled_AttributeGetter = 2438,
  kV8Document_PictureInPictureElement_AttributeGetter = 2439,
  kV8Document_ExitPictureInPicture_Method = 2440,
  kV8ShadowRoot_PictureInPictureElement_AttributeGetter = 2441,
  kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter = 2442,
  kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter = 2443,
  kV8HTMLVideoElement_RequestPictureInPicture_Method = 2444,
  kEnterPictureInPictureEventListener = 2445,
  kLeavePictureInPictureEventListener = 2446,
  kV8PictureInPictureWindow_Height_AttributeGetter = 2447,
  kV8PictureInPictureWindow_Width_AttributeGetter = 2448,
  kPictureInPictureWindowResizeEventListener = 2449,
  kV8CookieStore_Delete_Method = 2450,
  kV8CookieStore_Get_Method = 2451,
  kV8CookieStore_GetAll_Method = 2452,
  kV8CookieStore_GetChangeSubscriptions_Method = 2453,
  kV8CookieStore_Has_Method = 2454,
  kV8CookieStore_Set_Method = 2455,
  kV8CookieStore_SubscribeToChanges_Method = 2456,
  kV8CookieChangeEvent_Changed_AttributeGetter = 2457,
  kV8CookieChangeEvent_Deleted_AttributeGetter = 2458,
  kV8ExtendableCookieChangeEvent_Changed_AttributeGetter = 2459,
  kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter = 2460,
  kShapeOutsideContentBoxDifferentFromMarginBox = 2461,
  kShapeOutsidePaddingBoxDifferentFromMarginBox = 2462,
  kCSSContainLayoutPositionedDescendants = 2463,
  kHTMLFrameSetElementAnonymousNamedGetter = 2464,
  kNumberOfFeatures,
  kMinValue = 0,
  kMaxValue = 2465,
};

inline std::ostream& operator<<(std::ostream& os, WebFeature value) {
  switch(value) {
    case WebFeature::kOBSOLETE_PageDestruction:
      return os << "WebFeature::kOBSOLETE_PageDestruction";
    case WebFeature::kWorkerStart:
      return os << "WebFeature::kWorkerStart";
    case WebFeature::kSharedWorkerStart:
      return os << "WebFeature::kSharedWorkerStart";
    case WebFeature::kUnprefixedIndexedDB:
      return os << "WebFeature::kUnprefixedIndexedDB";
    case WebFeature::kOpenWebDatabase:
      return os << "WebFeature::kOpenWebDatabase";
    case WebFeature::kUnprefixedRequestAnimationFrame:
      return os << "WebFeature::kUnprefixedRequestAnimationFrame";
    case WebFeature::kPrefixedRequestAnimationFrame:
      return os << "WebFeature::kPrefixedRequestAnimationFrame";
    case WebFeature::kContentSecurityPolicy:
      return os << "WebFeature::kContentSecurityPolicy";
    case WebFeature::kContentSecurityPolicyReportOnly:
      return os << "WebFeature::kContentSecurityPolicyReportOnly";
    case WebFeature::kPrefixedTransitionEndEvent:
      return os << "WebFeature::kPrefixedTransitionEndEvent";
    case WebFeature::kUnprefixedTransitionEndEvent:
      return os << "WebFeature::kUnprefixedTransitionEndEvent";
    case WebFeature::kPrefixedAndUnprefixedTransitionEndEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedTransitionEndEvent";
    case WebFeature::kAutoFocusAttribute:
      return os << "WebFeature::kAutoFocusAttribute";
    case WebFeature::kDataListElement:
      return os << "WebFeature::kDataListElement";
    case WebFeature::kFormAttribute:
      return os << "WebFeature::kFormAttribute";
    case WebFeature::kIncrementalAttribute:
      return os << "WebFeature::kIncrementalAttribute";
    case WebFeature::kInputTypeColor:
      return os << "WebFeature::kInputTypeColor";
    case WebFeature::kInputTypeDate:
      return os << "WebFeature::kInputTypeDate";
    case WebFeature::kInputTypeDateTimeFallback:
      return os << "WebFeature::kInputTypeDateTimeFallback";
    case WebFeature::kInputTypeDateTimeLocal:
      return os << "WebFeature::kInputTypeDateTimeLocal";
    case WebFeature::kInputTypeEmail:
      return os << "WebFeature::kInputTypeEmail";
    case WebFeature::kInputTypeMonth:
      return os << "WebFeature::kInputTypeMonth";
    case WebFeature::kInputTypeNumber:
      return os << "WebFeature::kInputTypeNumber";
    case WebFeature::kInputTypeRange:
      return os << "WebFeature::kInputTypeRange";
    case WebFeature::kInputTypeSearch:
      return os << "WebFeature::kInputTypeSearch";
    case WebFeature::kInputTypeTel:
      return os << "WebFeature::kInputTypeTel";
    case WebFeature::kInputTypeTime:
      return os << "WebFeature::kInputTypeTime";
    case WebFeature::kInputTypeURL:
      return os << "WebFeature::kInputTypeURL";
    case WebFeature::kInputTypeWeek:
      return os << "WebFeature::kInputTypeWeek";
    case WebFeature::kInputTypeWeekFallback:
      return os << "WebFeature::kInputTypeWeekFallback";
    case WebFeature::kListAttribute:
      return os << "WebFeature::kListAttribute";
    case WebFeature::kMaxAttribute:
      return os << "WebFeature::kMaxAttribute";
    case WebFeature::kMinAttribute:
      return os << "WebFeature::kMinAttribute";
    case WebFeature::kPatternAttribute:
      return os << "WebFeature::kPatternAttribute";
    case WebFeature::kPlaceholderAttribute:
      return os << "WebFeature::kPlaceholderAttribute";
    case WebFeature::kPrefixedDirectoryAttribute:
      return os << "WebFeature::kPrefixedDirectoryAttribute";
    case WebFeature::kRequiredAttribute:
      return os << "WebFeature::kRequiredAttribute";
    case WebFeature::kStepAttribute:
      return os << "WebFeature::kStepAttribute";
    case WebFeature::kPageVisits:
      return os << "WebFeature::kPageVisits";
    case WebFeature::kHTMLMarqueeElement:
      return os << "WebFeature::kHTMLMarqueeElement";
    case WebFeature::kReflection:
      return os << "WebFeature::kReflection";
    case WebFeature::kPrefixedStorageInfo:
      return os << "WebFeature::kPrefixedStorageInfo";
    case WebFeature::kDeprecatedFlexboxWebContent:
      return os << "WebFeature::kDeprecatedFlexboxWebContent";
    case WebFeature::kDeprecatedFlexboxChrome:
      return os << "WebFeature::kDeprecatedFlexboxChrome";
    case WebFeature::kDeprecatedFlexboxChromeExtension:
      return os << "WebFeature::kDeprecatedFlexboxChromeExtension";
    case WebFeature::kWindowEvent:
      return os << "WebFeature::kWindowEvent";
    case WebFeature::kContentSecurityPolicyWithBaseElement:
      return os << "WebFeature::kContentSecurityPolicyWithBaseElement";
    case WebFeature::kDocumentClear:
      return os << "WebFeature::kDocumentClear";
    case WebFeature::kXMLDocument:
      return os << "WebFeature::kXMLDocument";
    case WebFeature::kXSLProcessingInstruction:
      return os << "WebFeature::kXSLProcessingInstruction";
    case WebFeature::kXSLTProcessor:
      return os << "WebFeature::kXSLTProcessor";
    case WebFeature::kSVGSwitchElement:
      return os << "WebFeature::kSVGSwitchElement";
    case WebFeature::kDocumentAll:
      return os << "WebFeature::kDocumentAll";
    case WebFeature::kFormElement:
      return os << "WebFeature::kFormElement";
    case WebFeature::kDemotedFormElement:
      return os << "WebFeature::kDemotedFormElement";
    case WebFeature::kSVGAnimationElement:
      return os << "WebFeature::kSVGAnimationElement";
    case WebFeature::kLineClamp:
      return os << "WebFeature::kLineClamp";
    case WebFeature::kSubFrameBeforeUnloadRegistered:
      return os << "WebFeature::kSubFrameBeforeUnloadRegistered";
    case WebFeature::kSubFrameBeforeUnloadFired:
      return os << "WebFeature::kSubFrameBeforeUnloadFired";
    case WebFeature::kConsoleMarkTimeline:
      return os << "WebFeature::kConsoleMarkTimeline";
    case WebFeature::kDocumentCreateAttribute:
      return os << "WebFeature::kDocumentCreateAttribute";
    case WebFeature::kDocumentCreateAttributeNS:
      return os << "WebFeature::kDocumentCreateAttributeNS";
    case WebFeature::kDocumentXMLEncoding:
      return os << "WebFeature::kDocumentXMLEncoding";
    case WebFeature::kDocumentXMLStandalone:
      return os << "WebFeature::kDocumentXMLStandalone";
    case WebFeature::kDocumentXMLVersion:
      return os << "WebFeature::kDocumentXMLVersion";
    case WebFeature::kNavigatorProductSub:
      return os << "WebFeature::kNavigatorProductSub";
    case WebFeature::kNavigatorVendor:
      return os << "WebFeature::kNavigatorVendor";
    case WebFeature::kNavigatorVendorSub:
      return os << "WebFeature::kNavigatorVendorSub";
    case WebFeature::kPrefixedAnimationEndEvent:
      return os << "WebFeature::kPrefixedAnimationEndEvent";
    case WebFeature::kUnprefixedAnimationEndEvent:
      return os << "WebFeature::kUnprefixedAnimationEndEvent";
    case WebFeature::kPrefixedAndUnprefixedAnimationEndEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedAnimationEndEvent";
    case WebFeature::kPrefixedAnimationStartEvent:
      return os << "WebFeature::kPrefixedAnimationStartEvent";
    case WebFeature::kUnprefixedAnimationStartEvent:
      return os << "WebFeature::kUnprefixedAnimationStartEvent";
    case WebFeature::kPrefixedAndUnprefixedAnimationStartEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedAnimationStartEvent";
    case WebFeature::kPrefixedAnimationIterationEvent:
      return os << "WebFeature::kPrefixedAnimationIterationEvent";
    case WebFeature::kUnprefixedAnimationIterationEvent:
      return os << "WebFeature::kUnprefixedAnimationIterationEvent";
    case WebFeature::kPrefixedAndUnprefixedAnimationIterationEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedAnimationIterationEvent";
    case WebFeature::kEventReturnValue:
      return os << "WebFeature::kEventReturnValue";
    case WebFeature::kSVGSVGElement:
      return os << "WebFeature::kSVGSVGElement";
    case WebFeature::kDOMSubtreeModifiedEvent:
      return os << "WebFeature::kDOMSubtreeModifiedEvent";
    case WebFeature::kDOMNodeInsertedEvent:
      return os << "WebFeature::kDOMNodeInsertedEvent";
    case WebFeature::kDOMNodeRemovedEvent:
      return os << "WebFeature::kDOMNodeRemovedEvent";
    case WebFeature::kDOMNodeRemovedFromDocumentEvent:
      return os << "WebFeature::kDOMNodeRemovedFromDocumentEvent";
    case WebFeature::kDOMNodeInsertedIntoDocumentEvent:
      return os << "WebFeature::kDOMNodeInsertedIntoDocumentEvent";
    case WebFeature::kDOMCharacterDataModifiedEvent:
      return os << "WebFeature::kDOMCharacterDataModifiedEvent";
    case WebFeature::kPrefixedAudioDecodedByteCount:
      return os << "WebFeature::kPrefixedAudioDecodedByteCount";
    case WebFeature::kPrefixedVideoDecodedByteCount:
      return os << "WebFeature::kPrefixedVideoDecodedByteCount";
    case WebFeature::kPrefixedVideoSupportsFullscreen:
      return os << "WebFeature::kPrefixedVideoSupportsFullscreen";
    case WebFeature::kPrefixedVideoDisplayingFullscreen:
      return os << "WebFeature::kPrefixedVideoDisplayingFullscreen";
    case WebFeature::kPrefixedVideoEnterFullscreen:
      return os << "WebFeature::kPrefixedVideoEnterFullscreen";
    case WebFeature::kPrefixedVideoExitFullscreen:
      return os << "WebFeature::kPrefixedVideoExitFullscreen";
    case WebFeature::kPrefixedVideoEnterFullScreen:
      return os << "WebFeature::kPrefixedVideoEnterFullScreen";
    case WebFeature::kPrefixedVideoExitFullScreen:
      return os << "WebFeature::kPrefixedVideoExitFullScreen";
    case WebFeature::kPrefixedVideoDecodedFrameCount:
      return os << "WebFeature::kPrefixedVideoDecodedFrameCount";
    case WebFeature::kPrefixedVideoDroppedFrameCount:
      return os << "WebFeature::kPrefixedVideoDroppedFrameCount";
    case WebFeature::kPrefixedElementRequestFullscreen:
      return os << "WebFeature::kPrefixedElementRequestFullscreen";
    case WebFeature::kPrefixedElementRequestFullScreen:
      return os << "WebFeature::kPrefixedElementRequestFullScreen";
    case WebFeature::kBarPropLocationbar:
      return os << "WebFeature::kBarPropLocationbar";
    case WebFeature::kBarPropMenubar:
      return os << "WebFeature::kBarPropMenubar";
    case WebFeature::kBarPropPersonalbar:
      return os << "WebFeature::kBarPropPersonalbar";
    case WebFeature::kBarPropScrollbars:
      return os << "WebFeature::kBarPropScrollbars";
    case WebFeature::kBarPropStatusbar:
      return os << "WebFeature::kBarPropStatusbar";
    case WebFeature::kBarPropToolbar:
      return os << "WebFeature::kBarPropToolbar";
    case WebFeature::kInputTypeEmailMultiple:
      return os << "WebFeature::kInputTypeEmailMultiple";
    case WebFeature::kInputTypeEmailMaxLength:
      return os << "WebFeature::kInputTypeEmailMaxLength";
    case WebFeature::kInputTypeEmailMultipleMaxLength:
      return os << "WebFeature::kInputTypeEmailMultipleMaxLength";
    case WebFeature::kInputTypeText:
      return os << "WebFeature::kInputTypeText";
    case WebFeature::kInputTypeTextMaxLength:
      return os << "WebFeature::kInputTypeTextMaxLength";
    case WebFeature::kInputTypePassword:
      return os << "WebFeature::kInputTypePassword";
    case WebFeature::kInputTypePasswordMaxLength:
      return os << "WebFeature::kInputTypePasswordMaxLength";
    case WebFeature::kPrefixedPageVisibility:
      return os << "WebFeature::kPrefixedPageVisibility";
    case WebFeature::kDocumentBeforeUnloadRegistered:
      return os << "WebFeature::kDocumentBeforeUnloadRegistered";
    case WebFeature::kDocumentBeforeUnloadFired:
      return os << "WebFeature::kDocumentBeforeUnloadFired";
    case WebFeature::kDocumentUnloadRegistered:
      return os << "WebFeature::kDocumentUnloadRegistered";
    case WebFeature::kDocumentUnloadFired:
      return os << "WebFeature::kDocumentUnloadFired";
    case WebFeature::kSVGLocatableNearestViewportElement:
      return os << "WebFeature::kSVGLocatableNearestViewportElement";
    case WebFeature::kSVGLocatableFarthestViewportElement:
      return os << "WebFeature::kSVGLocatableFarthestViewportElement";
    case WebFeature::kSVGPointMatrixTransform:
      return os << "WebFeature::kSVGPointMatrixTransform";
    case WebFeature::kDOMFocusInOutEvent:
      return os << "WebFeature::kDOMFocusInOutEvent";
    case WebFeature::kFileGetLastModifiedDate:
      return os << "WebFeature::kFileGetLastModifiedDate";
    case WebFeature::kHTMLElementInnerText:
      return os << "WebFeature::kHTMLElementInnerText";
    case WebFeature::kHTMLElementOuterText:
      return os << "WebFeature::kHTMLElementOuterText";
    case WebFeature::kReplaceDocumentViaJavaScriptURL:
      return os << "WebFeature::kReplaceDocumentViaJavaScriptURL";
    case WebFeature::kElementPrefixedMatchesSelector:
      return os << "WebFeature::kElementPrefixedMatchesSelector";
    case WebFeature::kCSSStyleSheetRules:
      return os << "WebFeature::kCSSStyleSheetRules";
    case WebFeature::kCSSStyleSheetAddRule:
      return os << "WebFeature::kCSSStyleSheetAddRule";
    case WebFeature::kCSSStyleSheetRemoveRule:
      return os << "WebFeature::kCSSStyleSheetRemoveRule";
    case WebFeature::kInitMessageEvent:
      return os << "WebFeature::kInitMessageEvent";
    case WebFeature::kPrefixedDevicePixelRatioMediaFeature:
      return os << "WebFeature::kPrefixedDevicePixelRatioMediaFeature";
    case WebFeature::kPrefixedMaxDevicePixelRatioMediaFeature:
      return os << "WebFeature::kPrefixedMaxDevicePixelRatioMediaFeature";
    case WebFeature::kPrefixedMinDevicePixelRatioMediaFeature:
      return os << "WebFeature::kPrefixedMinDevicePixelRatioMediaFeature";
    case WebFeature::kPrefixedTransform3dMediaFeature:
      return os << "WebFeature::kPrefixedTransform3dMediaFeature";
    case WebFeature::kPrefixedStorageQuota:
      return os << "WebFeature::kPrefixedStorageQuota";
    case WebFeature::kResetReferrerPolicy:
      return os << "WebFeature::kResetReferrerPolicy";
    case WebFeature::kCaseInsensitiveAttrSelectorMatch:
      return os << "WebFeature::kCaseInsensitiveAttrSelectorMatch";
    case WebFeature::kFormNameAccessForImageElement:
      return os << "WebFeature::kFormNameAccessForImageElement";
    case WebFeature::kFormNameAccessForPastNamesMap:
      return os << "WebFeature::kFormNameAccessForPastNamesMap";
    case WebFeature::kFormAssociationByParser:
      return os << "WebFeature::kFormAssociationByParser";
    case WebFeature::kSVGSVGElementInDocument:
      return os << "WebFeature::kSVGSVGElementInDocument";
    case WebFeature::kSVGDocumentRootElement:
      return os << "WebFeature::kSVGDocumentRootElement";
    case WebFeature::kWorkerSubjectToCSP:
      return os << "WebFeature::kWorkerSubjectToCSP";
    case WebFeature::kWorkerAllowedByChildBlockedByScript:
      return os << "WebFeature::kWorkerAllowedByChildBlockedByScript";
    case WebFeature::kDeprecatedWebKitGradient:
      return os << "WebFeature::kDeprecatedWebKitGradient";
    case WebFeature::kDeprecatedWebKitLinearGradient:
      return os << "WebFeature::kDeprecatedWebKitLinearGradient";
    case WebFeature::kDeprecatedWebKitRepeatingLinearGradient:
      return os << "WebFeature::kDeprecatedWebKitRepeatingLinearGradient";
    case WebFeature::kDeprecatedWebKitRadialGradient:
      return os << "WebFeature::kDeprecatedWebKitRadialGradient";
    case WebFeature::kDeprecatedWebKitRepeatingRadialGradient:
      return os << "WebFeature::kDeprecatedWebKitRepeatingRadialGradient";
    case WebFeature::kTextAutosizing:
      return os << "WebFeature::kTextAutosizing";
    case WebFeature::kHTMLAnchorElementPingAttribute:
      return os << "WebFeature::kHTMLAnchorElementPingAttribute";
    case WebFeature::kSVGClassName:
      return os << "WebFeature::kSVGClassName";
    case WebFeature::kHTMLMediaElementSeekToFragmentStart:
      return os << "WebFeature::kHTMLMediaElementSeekToFragmentStart";
    case WebFeature::kHTMLMediaElementPauseAtFragmentEnd:
      return os << "WebFeature::kHTMLMediaElementPauseAtFragmentEnd";
    case WebFeature::kPrefixedWindowURL:
      return os << "WebFeature::kPrefixedWindowURL";
    case WebFeature::kWindowOrientation:
      return os << "WebFeature::kWindowOrientation";
    case WebFeature::kDocumentCaptureEvents:
      return os << "WebFeature::kDocumentCaptureEvents";
    case WebFeature::kDocumentReleaseEvents:
      return os << "WebFeature::kDocumentReleaseEvents";
    case WebFeature::kWindowCaptureEvents:
      return os << "WebFeature::kWindowCaptureEvents";
    case WebFeature::kWindowReleaseEvents:
      return os << "WebFeature::kWindowReleaseEvents";
    case WebFeature::kDocumentXPathCreateExpression:
      return os << "WebFeature::kDocumentXPathCreateExpression";
    case WebFeature::kDocumentXPathCreateNSResolver:
      return os << "WebFeature::kDocumentXPathCreateNSResolver";
    case WebFeature::kDocumentXPathEvaluate:
      return os << "WebFeature::kDocumentXPathEvaluate";
    case WebFeature::kAnimationConstructorKeyframeListEffectObjectTiming:
      return os << "WebFeature::kAnimationConstructorKeyframeListEffectObjectTiming";
    case WebFeature::kAnimationConstructorKeyframeListEffectNoTiming:
      return os << "WebFeature::kAnimationConstructorKeyframeListEffectNoTiming";
    case WebFeature::kPrefixedCancelAnimationFrame:
      return os << "WebFeature::kPrefixedCancelAnimationFrame";
    case WebFeature::kNamedNodeMapGetNamedItem:
      return os << "WebFeature::kNamedNodeMapGetNamedItem";
    case WebFeature::kNamedNodeMapSetNamedItem:
      return os << "WebFeature::kNamedNodeMapSetNamedItem";
    case WebFeature::kNamedNodeMapRemoveNamedItem:
      return os << "WebFeature::kNamedNodeMapRemoveNamedItem";
    case WebFeature::kNamedNodeMapItem:
      return os << "WebFeature::kNamedNodeMapItem";
    case WebFeature::kNamedNodeMapGetNamedItemNS:
      return os << "WebFeature::kNamedNodeMapGetNamedItemNS";
    case WebFeature::kNamedNodeMapSetNamedItemNS:
      return os << "WebFeature::kNamedNodeMapSetNamedItemNS";
    case WebFeature::kNamedNodeMapRemoveNamedItemNS:
      return os << "WebFeature::kNamedNodeMapRemoveNamedItemNS";
    case WebFeature::kPrefixedDocumentIsFullscreen:
      return os << "WebFeature::kPrefixedDocumentIsFullscreen";
    case WebFeature::kPrefixedDocumentCurrentFullScreenElement:
      return os << "WebFeature::kPrefixedDocumentCurrentFullScreenElement";
    case WebFeature::kPrefixedDocumentCancelFullScreen:
      return os << "WebFeature::kPrefixedDocumentCancelFullScreen";
    case WebFeature::kPrefixedDocumentFullscreenEnabled:
      return os << "WebFeature::kPrefixedDocumentFullscreenEnabled";
    case WebFeature::kPrefixedDocumentFullscreenElement:
      return os << "WebFeature::kPrefixedDocumentFullscreenElement";
    case WebFeature::kPrefixedDocumentExitFullscreen:
      return os << "WebFeature::kPrefixedDocumentExitFullscreen";
    case WebFeature::kSVGForeignObjectElement:
      return os << "WebFeature::kSVGForeignObjectElement";
    case WebFeature::kSelectionSetPosition:
      return os << "WebFeature::kSelectionSetPosition";
    case WebFeature::kAnimationFinishEvent:
      return os << "WebFeature::kAnimationFinishEvent";
    case WebFeature::kSVGSVGElementInXMLDocument:
      return os << "WebFeature::kSVGSVGElementInXMLDocument";
    case WebFeature::kEventSrcElement:
      return os << "WebFeature::kEventSrcElement";
    case WebFeature::kEventCancelBubble:
      return os << "WebFeature::kEventCancelBubble";
    case WebFeature::kEventPath:
      return os << "WebFeature::kEventPath";
    case WebFeature::kNodeIteratorDetach:
      return os << "WebFeature::kNodeIteratorDetach";
    case WebFeature::kEventGetReturnValueTrue:
      return os << "WebFeature::kEventGetReturnValueTrue";
    case WebFeature::kEventGetReturnValueFalse:
      return os << "WebFeature::kEventGetReturnValueFalse";
    case WebFeature::kEventSetReturnValueTrue:
      return os << "WebFeature::kEventSetReturnValueTrue";
    case WebFeature::kEventSetReturnValueFalse:
      return os << "WebFeature::kEventSetReturnValueFalse";
    case WebFeature::kWindowOffscreenBuffering:
      return os << "WebFeature::kWindowOffscreenBuffering";
    case WebFeature::kWindowDefaultStatus:
      return os << "WebFeature::kWindowDefaultStatus";
    case WebFeature::kWindowDefaultstatus:
      return os << "WebFeature::kWindowDefaultstatus";
    case WebFeature::kPrefixedTransitionEventConstructor:
      return os << "WebFeature::kPrefixedTransitionEventConstructor";
    case WebFeature::kPrefixedMutationObserverConstructor:
      return os << "WebFeature::kPrefixedMutationObserverConstructor";
    case WebFeature::kNotificationPermission:
      return os << "WebFeature::kNotificationPermission";
    case WebFeature::kRangeDetach:
      return os << "WebFeature::kRangeDetach";
    case WebFeature::kPrefixedFileRelativePath:
      return os << "WebFeature::kPrefixedFileRelativePath";
    case WebFeature::kDocumentCaretRangeFromPoint:
      return os << "WebFeature::kDocumentCaretRangeFromPoint";
    case WebFeature::kElementScrollIntoViewIfNeeded:
      return os << "WebFeature::kElementScrollIntoViewIfNeeded";
    case WebFeature::kRangeExpand:
      return os << "WebFeature::kRangeExpand";
    case WebFeature::kHTMLImageElementX:
      return os << "WebFeature::kHTMLImageElementX";
    case WebFeature::kHTMLImageElementY:
      return os << "WebFeature::kHTMLImageElementY";
    case WebFeature::kSelectionBaseNode:
      return os << "WebFeature::kSelectionBaseNode";
    case WebFeature::kSelectionBaseOffset:
      return os << "WebFeature::kSelectionBaseOffset";
    case WebFeature::kSelectionExtentNode:
      return os << "WebFeature::kSelectionExtentNode";
    case WebFeature::kSelectionExtentOffset:
      return os << "WebFeature::kSelectionExtentOffset";
    case WebFeature::kSelectionType:
      return os << "WebFeature::kSelectionType";
    case WebFeature::kSelectionModify:
      return os << "WebFeature::kSelectionModify";
    case WebFeature::kSelectionSetBaseAndExtent:
      return os << "WebFeature::kSelectionSetBaseAndExtent";
    case WebFeature::kSelectionEmpty:
      return os << "WebFeature::kSelectionEmpty";
    case WebFeature::kVTTCue:
      return os << "WebFeature::kVTTCue";
    case WebFeature::kVTTCueRender:
      return os << "WebFeature::kVTTCueRender";
    case WebFeature::kVTTCueRenderVertical:
      return os << "WebFeature::kVTTCueRenderVertical";
    case WebFeature::kVTTCueRenderSnapToLinesFalse:
      return os << "WebFeature::kVTTCueRenderSnapToLinesFalse";
    case WebFeature::kVTTCueRenderLineNotAuto:
      return os << "WebFeature::kVTTCueRenderLineNotAuto";
    case WebFeature::kVTTCueRenderPositionNot50:
      return os << "WebFeature::kVTTCueRenderPositionNot50";
    case WebFeature::kVTTCueRenderSizeNot100:
      return os << "WebFeature::kVTTCueRenderSizeNot100";
    case WebFeature::kVTTCueRenderAlignNotCenter:
      return os << "WebFeature::kVTTCueRenderAlignNotCenter";
    case WebFeature::kElementRequestPointerLock:
      return os << "WebFeature::kElementRequestPointerLock";
    case WebFeature::kVTTCueRenderRtl:
      return os << "WebFeature::kVTTCueRenderRtl";
    case WebFeature::kPostMessageFromSecureToInsecure:
      return os << "WebFeature::kPostMessageFromSecureToInsecure";
    case WebFeature::kPostMessageFromInsecureToSecure:
      return os << "WebFeature::kPostMessageFromInsecureToSecure";
    case WebFeature::kDocumentExitPointerLock:
      return os << "WebFeature::kDocumentExitPointerLock";
    case WebFeature::kDocumentPointerLockElement:
      return os << "WebFeature::kDocumentPointerLockElement";
    case WebFeature::kPrefixedCursorZoomIn:
      return os << "WebFeature::kPrefixedCursorZoomIn";
    case WebFeature::kPrefixedCursorZoomOut:
      return os << "WebFeature::kPrefixedCursorZoomOut";
    case WebFeature::kTextEncoderConstructor:
      return os << "WebFeature::kTextEncoderConstructor";
    case WebFeature::kTextEncoderEncode:
      return os << "WebFeature::kTextEncoderEncode";
    case WebFeature::kTextDecoderConstructor:
      return os << "WebFeature::kTextDecoderConstructor";
    case WebFeature::kTextDecoderDecode:
      return os << "WebFeature::kTextDecoderDecode";
    case WebFeature::kFocusInOutEvent:
      return os << "WebFeature::kFocusInOutEvent";
    case WebFeature::kMouseEventMovementX:
      return os << "WebFeature::kMouseEventMovementX";
    case WebFeature::kMouseEventMovementY:
      return os << "WebFeature::kMouseEventMovementY";
    case WebFeature::kDocumentFonts:
      return os << "WebFeature::kDocumentFonts";
    case WebFeature::kMixedContentFormsSubmitted:
      return os << "WebFeature::kMixedContentFormsSubmitted";
    case WebFeature::kFormsSubmitted:
      return os << "WebFeature::kFormsSubmitted";
    case WebFeature::kHTMLImports:
      return os << "WebFeature::kHTMLImports";
    case WebFeature::kElementCreateShadowRoot:
      return os << "WebFeature::kElementCreateShadowRoot";
    case WebFeature::kDocumentRegisterElement:
      return os << "WebFeature::kDocumentRegisterElement";
    case WebFeature::kEditingAppleInterchangeNewline:
      return os << "WebFeature::kEditingAppleInterchangeNewline";
    case WebFeature::kEditingAppleConvertedSpace:
      return os << "WebFeature::kEditingAppleConvertedSpace";
    case WebFeature::kEditingApplePasteAsQuotation:
      return os << "WebFeature::kEditingApplePasteAsQuotation";
    case WebFeature::kEditingAppleStyleSpanClass:
      return os << "WebFeature::kEditingAppleStyleSpanClass";
    case WebFeature::kHTMLImportsAsyncAttribute:
      return os << "WebFeature::kHTMLImportsAsyncAttribute";
    case WebFeature::kXMLHttpRequestSynchronous:
      return os << "WebFeature::kXMLHttpRequestSynchronous";
    case WebFeature::kCSSSelectorPseudoUnresolved:
      return os << "WebFeature::kCSSSelectorPseudoUnresolved";
    case WebFeature::kCSSSelectorPseudoShadow:
      return os << "WebFeature::kCSSSelectorPseudoShadow";
    case WebFeature::kCSSSelectorPseudoContent:
      return os << "WebFeature::kCSSSelectorPseudoContent";
    case WebFeature::kCSSSelectorPseudoHost:
      return os << "WebFeature::kCSSSelectorPseudoHost";
    case WebFeature::kCSSSelectorPseudoHostContext:
      return os << "WebFeature::kCSSSelectorPseudoHostContext";
    case WebFeature::kCSSDeepCombinator:
      return os << "WebFeature::kCSSDeepCombinator";
    case WebFeature::kUseAsm:
      return os << "WebFeature::kUseAsm";
    case WebFeature::kDOMWindowOpen:
      return os << "WebFeature::kDOMWindowOpen";
    case WebFeature::kDOMWindowOpenFeatures:
      return os << "WebFeature::kDOMWindowOpenFeatures";
    case WebFeature::kAspectRatioFlexItem:
      return os << "WebFeature::kAspectRatioFlexItem";
    case WebFeature::kDetailsElement:
      return os << "WebFeature::kDetailsElement";
    case WebFeature::kDialogElement:
      return os << "WebFeature::kDialogElement";
    case WebFeature::kMapElement:
      return os << "WebFeature::kMapElement";
    case WebFeature::kMeterElement:
      return os << "WebFeature::kMeterElement";
    case WebFeature::kProgressElement:
      return os << "WebFeature::kProgressElement";
    case WebFeature::kWheelEventWheelDeltaX:
      return os << "WebFeature::kWheelEventWheelDeltaX";
    case WebFeature::kWheelEventWheelDeltaY:
      return os << "WebFeature::kWheelEventWheelDeltaY";
    case WebFeature::kWheelEventWheelDelta:
      return os << "WebFeature::kWheelEventWheelDelta";
    case WebFeature::kSendBeacon:
      return os << "WebFeature::kSendBeacon";
    case WebFeature::kSendBeaconQuotaExceeded:
      return os << "WebFeature::kSendBeaconQuotaExceeded";
    case WebFeature::kSVGSMILElementInDocument:
      return os << "WebFeature::kSVGSMILElementInDocument";
    case WebFeature::kMouseEventOffsetX:
      return os << "WebFeature::kMouseEventOffsetX";
    case WebFeature::kMouseEventOffsetY:
      return os << "WebFeature::kMouseEventOffsetY";
    case WebFeature::kMouseEventX:
      return os << "WebFeature::kMouseEventX";
    case WebFeature::kMouseEventY:
      return os << "WebFeature::kMouseEventY";
    case WebFeature::kMouseEventFromElement:
      return os << "WebFeature::kMouseEventFromElement";
    case WebFeature::kMouseEventToElement:
      return os << "WebFeature::kMouseEventToElement";
    case WebFeature::kRequestFileSystem:
      return os << "WebFeature::kRequestFileSystem";
    case WebFeature::kRequestFileSystemWorker:
      return os << "WebFeature::kRequestFileSystemWorker";
    case WebFeature::kRequestFileSystemSyncWorker:
      return os << "WebFeature::kRequestFileSystemSyncWorker";
    case WebFeature::kSVGStyleElementTitle:
      return os << "WebFeature::kSVGStyleElementTitle";
    case WebFeature::kPictureSourceSrc:
      return os << "WebFeature::kPictureSourceSrc";
    case WebFeature::kPicture:
      return os << "WebFeature::kPicture";
    case WebFeature::kSizes:
      return os << "WebFeature::kSizes";
    case WebFeature::kSrcsetXDescriptor:
      return os << "WebFeature::kSrcsetXDescriptor";
    case WebFeature::kSrcsetWDescriptor:
      return os << "WebFeature::kSrcsetWDescriptor";
    case WebFeature::kSelectionContainsNode:
      return os << "WebFeature::kSelectionContainsNode";
    case WebFeature::kXMLExternalResourceLoad:
      return os << "WebFeature::kXMLExternalResourceLoad";
    case WebFeature::kMixedContentPrivateHostnameInPublicHostname:
      return os << "WebFeature::kMixedContentPrivateHostnameInPublicHostname";
    case WebFeature::kLegacyProtocolEmbeddedAsSubresource:
      return os << "WebFeature::kLegacyProtocolEmbeddedAsSubresource";
    case WebFeature::kRequestedSubresourceWithEmbeddedCredentials:
      return os << "WebFeature::kRequestedSubresourceWithEmbeddedCredentials";
    case WebFeature::kNotificationCreated:
      return os << "WebFeature::kNotificationCreated";
    case WebFeature::kNotificationClosed:
      return os << "WebFeature::kNotificationClosed";
    case WebFeature::kNotificationPermissionRequested:
      return os << "WebFeature::kNotificationPermissionRequested";
    case WebFeature::kConsoleTimeline:
      return os << "WebFeature::kConsoleTimeline";
    case WebFeature::kConsoleTimelineEnd:
      return os << "WebFeature::kConsoleTimelineEnd";
    case WebFeature::kSRIElementWithMatchingIntegrityAttribute:
      return os << "WebFeature::kSRIElementWithMatchingIntegrityAttribute";
    case WebFeature::kSRIElementWithNonMatchingIntegrityAttribute:
      return os << "WebFeature::kSRIElementWithNonMatchingIntegrityAttribute";
    case WebFeature::kSRIElementWithUnparsableIntegrityAttribute:
      return os << "WebFeature::kSRIElementWithUnparsableIntegrityAttribute";
    case WebFeature::kV8Animation_StartTime_AttributeGetter:
      return os << "WebFeature::kV8Animation_StartTime_AttributeGetter";
    case WebFeature::kV8Animation_StartTime_AttributeSetter:
      return os << "WebFeature::kV8Animation_StartTime_AttributeSetter";
    case WebFeature::kV8Animation_CurrentTime_AttributeGetter:
      return os << "WebFeature::kV8Animation_CurrentTime_AttributeGetter";
    case WebFeature::kV8Animation_CurrentTime_AttributeSetter:
      return os << "WebFeature::kV8Animation_CurrentTime_AttributeSetter";
    case WebFeature::kV8Animation_PlaybackRate_AttributeGetter:
      return os << "WebFeature::kV8Animation_PlaybackRate_AttributeGetter";
    case WebFeature::kV8Animation_PlaybackRate_AttributeSetter:
      return os << "WebFeature::kV8Animation_PlaybackRate_AttributeSetter";
    case WebFeature::kV8Animation_PlayState_AttributeGetter:
      return os << "WebFeature::kV8Animation_PlayState_AttributeGetter";
    case WebFeature::kV8Animation_Finish_Method:
      return os << "WebFeature::kV8Animation_Finish_Method";
    case WebFeature::kV8Animation_Play_Method:
      return os << "WebFeature::kV8Animation_Play_Method";
    case WebFeature::kV8Animation_Pause_Method:
      return os << "WebFeature::kV8Animation_Pause_Method";
    case WebFeature::kV8Animation_Reverse_Method:
      return os << "WebFeature::kV8Animation_Reverse_Method";
    case WebFeature::kBreakIterator:
      return os << "WebFeature::kBreakIterator";
    case WebFeature::kScreenOrientationAngle:
      return os << "WebFeature::kScreenOrientationAngle";
    case WebFeature::kScreenOrientationType:
      return os << "WebFeature::kScreenOrientationType";
    case WebFeature::kScreenOrientationLock:
      return os << "WebFeature::kScreenOrientationLock";
    case WebFeature::kScreenOrientationUnlock:
      return os << "WebFeature::kScreenOrientationUnlock";
    case WebFeature::kGeolocationSecureOrigin:
      return os << "WebFeature::kGeolocationSecureOrigin";
    case WebFeature::kGeolocationInsecureOrigin:
      return os << "WebFeature::kGeolocationInsecureOrigin";
    case WebFeature::kNotificationSecureOrigin:
      return os << "WebFeature::kNotificationSecureOrigin";
    case WebFeature::kNotificationInsecureOrigin:
      return os << "WebFeature::kNotificationInsecureOrigin";
    case WebFeature::kNotificationShowEvent:
      return os << "WebFeature::kNotificationShowEvent";
    case WebFeature::kSVGTransformListConsolidate:
      return os << "WebFeature::kSVGTransformListConsolidate";
    case WebFeature::kSVGAnimatedTransformListBaseVal:
      return os << "WebFeature::kSVGAnimatedTransformListBaseVal";
    case WebFeature::kQuotedAnimationName:
      return os << "WebFeature::kQuotedAnimationName";
    case WebFeature::kQuotedKeyframesRule:
      return os << "WebFeature::kQuotedKeyframesRule";
    case WebFeature::kSrcsetDroppedCandidate:
      return os << "WebFeature::kSrcsetDroppedCandidate";
    case WebFeature::kWindowPostMessage:
      return os << "WebFeature::kWindowPostMessage";
    case WebFeature::kRenderRuby:
      return os << "WebFeature::kRenderRuby";
    case WebFeature::kScriptElementWithInvalidTypeHasSrc:
      return os << "WebFeature::kScriptElementWithInvalidTypeHasSrc";
    case WebFeature::kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload:
      return os << "WebFeature::kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload";
    case WebFeature::kCSSSelectorPseudoScrollbar:
      return os << "WebFeature::kCSSSelectorPseudoScrollbar";
    case WebFeature::kCSSSelectorPseudoScrollbarButton:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarButton";
    case WebFeature::kCSSSelectorPseudoScrollbarThumb:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarThumb";
    case WebFeature::kCSSSelectorPseudoScrollbarTrack:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarTrack";
    case WebFeature::kCSSSelectorPseudoScrollbarTrackPiece:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarTrackPiece";
    case WebFeature::kLangAttribute:
      return os << "WebFeature::kLangAttribute";
    case WebFeature::kLangAttributeOnHTML:
      return os << "WebFeature::kLangAttributeOnHTML";
    case WebFeature::kLangAttributeOnBody:
      return os << "WebFeature::kLangAttributeOnBody";
    case WebFeature::kLangAttributeDoesNotMatchToUILocale:
      return os << "WebFeature::kLangAttributeDoesNotMatchToUILocale";
    case WebFeature::kInputTypeSubmit:
      return os << "WebFeature::kInputTypeSubmit";
    case WebFeature::kInputTypeSubmitWithValue:
      return os << "WebFeature::kInputTypeSubmitWithValue";
    case WebFeature::kSetReferrerPolicy:
      return os << "WebFeature::kSetReferrerPolicy";
    case WebFeature::kTextWholeText:
      return os << "WebFeature::kTextWholeText";
    case WebFeature::kNotificationCloseEvent:
      return os << "WebFeature::kNotificationCloseEvent";
    case WebFeature::kStyleMedia:
      return os << "WebFeature::kStyleMedia";
    case WebFeature::kStyleMediaType:
      return os << "WebFeature::kStyleMediaType";
    case WebFeature::kStyleMediaMatchMedium:
      return os << "WebFeature::kStyleMediaMatchMedium";
    case WebFeature::kMixedContentPresent:
      return os << "WebFeature::kMixedContentPresent";
    case WebFeature::kMixedContentBlockable:
      return os << "WebFeature::kMixedContentBlockable";
    case WebFeature::kMixedContentAudio:
      return os << "WebFeature::kMixedContentAudio";
    case WebFeature::kMixedContentDownload:
      return os << "WebFeature::kMixedContentDownload";
    case WebFeature::kMixedContentFavicon:
      return os << "WebFeature::kMixedContentFavicon";
    case WebFeature::kMixedContentImage:
      return os << "WebFeature::kMixedContentImage";
    case WebFeature::kMixedContentInternal:
      return os << "WebFeature::kMixedContentInternal";
    case WebFeature::kMixedContentPlugin:
      return os << "WebFeature::kMixedContentPlugin";
    case WebFeature::kMixedContentPrefetch:
      return os << "WebFeature::kMixedContentPrefetch";
    case WebFeature::kMixedContentVideo:
      return os << "WebFeature::kMixedContentVideo";
    case WebFeature::kCSSSelectorPseudoFullScreenAncestor:
      return os << "WebFeature::kCSSSelectorPseudoFullScreenAncestor";
    case WebFeature::kCSSSelectorPseudoFullScreen:
      return os << "WebFeature::kCSSSelectorPseudoFullScreen";
    case WebFeature::kWebKitCSSMatrix:
      return os << "WebFeature::kWebKitCSSMatrix";
    case WebFeature::kAudioContextCreateAnalyser:
      return os << "WebFeature::kAudioContextCreateAnalyser";
    case WebFeature::kAudioContextCreateBiquadFilter:
      return os << "WebFeature::kAudioContextCreateBiquadFilter";
    case WebFeature::kAudioContextCreateBufferSource:
      return os << "WebFeature::kAudioContextCreateBufferSource";
    case WebFeature::kAudioContextCreateChannelMerger:
      return os << "WebFeature::kAudioContextCreateChannelMerger";
    case WebFeature::kAudioContextCreateChannelSplitter:
      return os << "WebFeature::kAudioContextCreateChannelSplitter";
    case WebFeature::kAudioContextCreateConvolver:
      return os << "WebFeature::kAudioContextCreateConvolver";
    case WebFeature::kAudioContextCreateDelay:
      return os << "WebFeature::kAudioContextCreateDelay";
    case WebFeature::kAudioContextCreateDynamicsCompressor:
      return os << "WebFeature::kAudioContextCreateDynamicsCompressor";
    case WebFeature::kAudioContextCreateGain:
      return os << "WebFeature::kAudioContextCreateGain";
    case WebFeature::kAudioContextCreateMediaElementSource:
      return os << "WebFeature::kAudioContextCreateMediaElementSource";
    case WebFeature::kAudioContextCreateMediaStreamDestination:
      return os << "WebFeature::kAudioContextCreateMediaStreamDestination";
    case WebFeature::kAudioContextCreateMediaStreamSource:
      return os << "WebFeature::kAudioContextCreateMediaStreamSource";
    case WebFeature::kAudioContextCreateOscillator:
      return os << "WebFeature::kAudioContextCreateOscillator";
    case WebFeature::kAudioContextCreatePeriodicWave:
      return os << "WebFeature::kAudioContextCreatePeriodicWave";
    case WebFeature::kAudioContextCreateScriptProcessor:
      return os << "WebFeature::kAudioContextCreateScriptProcessor";
    case WebFeature::kAudioContextCreateStereoPanner:
      return os << "WebFeature::kAudioContextCreateStereoPanner";
    case WebFeature::kAudioContextCreateWaveShaper:
      return os << "WebFeature::kAudioContextCreateWaveShaper";
    case WebFeature::kAudioContextDecodeAudioData:
      return os << "WebFeature::kAudioContextDecodeAudioData";
    case WebFeature::kAudioContextResume:
      return os << "WebFeature::kAudioContextResume";
    case WebFeature::kAudioContextSuspend:
      return os << "WebFeature::kAudioContextSuspend";
    case WebFeature::kMixedContentInNonHTTPSFrameThatRestrictsMixedContent:
      return os << "WebFeature::kMixedContentInNonHTTPSFrameThatRestrictsMixedContent";
    case WebFeature::kMixedContentInSecureFrameThatDoesNotRestrictMixedContent:
      return os << "WebFeature::kMixedContentInSecureFrameThatDoesNotRestrictMixedContent";
    case WebFeature::kMixedContentWebSocket:
      return os << "WebFeature::kMixedContentWebSocket";
    case WebFeature::kSyntheticKeyframesInCompositedCSSAnimation:
      return os << "WebFeature::kSyntheticKeyframesInCompositedCSSAnimation";
    case WebFeature::kMixedContentFormPresent:
      return os << "WebFeature::kMixedContentFormPresent";
    case WebFeature::kGetUserMediaInsecureOrigin:
      return os << "WebFeature::kGetUserMediaInsecureOrigin";
    case WebFeature::kGetUserMediaSecureOrigin:
      return os << "WebFeature::kGetUserMediaSecureOrigin";
    case WebFeature::kDeviceMotionInsecureOrigin:
      return os << "WebFeature::kDeviceMotionInsecureOrigin";
    case WebFeature::kDeviceMotionSecureOrigin:
      return os << "WebFeature::kDeviceMotionSecureOrigin";
    case WebFeature::kDeviceOrientationInsecureOrigin:
      return os << "WebFeature::kDeviceOrientationInsecureOrigin";
    case WebFeature::kDeviceOrientationSecureOrigin:
      return os << "WebFeature::kDeviceOrientationSecureOrigin";
    case WebFeature::kSandboxViaIFrame:
      return os << "WebFeature::kSandboxViaIFrame";
    case WebFeature::kSandboxViaCSP:
      return os << "WebFeature::kSandboxViaCSP";
    case WebFeature::kBlockedSniffingImageToScript:
      return os << "WebFeature::kBlockedSniffingImageToScript";
    case WebFeature::kFetch:
      return os << "WebFeature::kFetch";
    case WebFeature::kFetchBodyStream:
      return os << "WebFeature::kFetchBodyStream";
    case WebFeature::kXMLHttpRequestAsynchronous:
      return os << "WebFeature::kXMLHttpRequestAsynchronous";
    case WebFeature::kWhiteSpacePreFromXMLSpace:
      return os << "WebFeature::kWhiteSpacePreFromXMLSpace";
    case WebFeature::kWhiteSpaceNowrapFromXMLSpace:
      return os << "WebFeature::kWhiteSpaceNowrapFromXMLSpace";
    case WebFeature::kSVGSVGElementForceRedraw:
      return os << "WebFeature::kSVGSVGElementForceRedraw";
    case WebFeature::kSVGSVGElementSuspendRedraw:
      return os << "WebFeature::kSVGSVGElementSuspendRedraw";
    case WebFeature::kSVGSVGElementUnsuspendRedraw:
      return os << "WebFeature::kSVGSVGElementUnsuspendRedraw";
    case WebFeature::kSVGSVGElementUnsuspendRedrawAll:
      return os << "WebFeature::kSVGSVGElementUnsuspendRedrawAll";
    case WebFeature::kAudioContextClose:
      return os << "WebFeature::kAudioContextClose";
    case WebFeature::kCSSZoomNotEqualToOne:
      return os << "WebFeature::kCSSZoomNotEqualToOne";
    case WebFeature::kClientRectListItem:
      return os << "WebFeature::kClientRectListItem";
    case WebFeature::kWindowClientInformation:
      return os << "WebFeature::kWindowClientInformation";
    case WebFeature::kWindowFind:
      return os << "WebFeature::kWindowFind";
    case WebFeature::kWindowScreenLeft:
      return os << "WebFeature::kWindowScreenLeft";
    case WebFeature::kWindowScreenTop:
      return os << "WebFeature::kWindowScreenTop";
    case WebFeature::kV8Animation_Cancel_Method:
      return os << "WebFeature::kV8Animation_Cancel_Method";
    case WebFeature::kV8Animation_Onfinish_AttributeGetter:
      return os << "WebFeature::kV8Animation_Onfinish_AttributeGetter";
    case WebFeature::kV8Animation_Onfinish_AttributeSetter:
      return os << "WebFeature::kV8Animation_Onfinish_AttributeSetter";
    case WebFeature::kV8Window_WebKitAnimationEvent_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebKitAnimationEvent_ConstructorGetter";
    case WebFeature::kCryptoGetRandomValues:
      return os << "WebFeature::kCryptoGetRandomValues";
    case WebFeature::kSubtleCryptoEncrypt:
      return os << "WebFeature::kSubtleCryptoEncrypt";
    case WebFeature::kSubtleCryptoDecrypt:
      return os << "WebFeature::kSubtleCryptoDecrypt";
    case WebFeature::kSubtleCryptoSign:
      return os << "WebFeature::kSubtleCryptoSign";
    case WebFeature::kSubtleCryptoVerify:
      return os << "WebFeature::kSubtleCryptoVerify";
    case WebFeature::kSubtleCryptoDigest:
      return os << "WebFeature::kSubtleCryptoDigest";
    case WebFeature::kSubtleCryptoGenerateKey:
      return os << "WebFeature::kSubtleCryptoGenerateKey";
    case WebFeature::kSubtleCryptoImportKey:
      return os << "WebFeature::kSubtleCryptoImportKey";
    case WebFeature::kSubtleCryptoExportKey:
      return os << "WebFeature::kSubtleCryptoExportKey";
    case WebFeature::kSubtleCryptoDeriveBits:
      return os << "WebFeature::kSubtleCryptoDeriveBits";
    case WebFeature::kSubtleCryptoDeriveKey:
      return os << "WebFeature::kSubtleCryptoDeriveKey";
    case WebFeature::kSubtleCryptoWrapKey:
      return os << "WebFeature::kSubtleCryptoWrapKey";
    case WebFeature::kSubtleCryptoUnwrapKey:
      return os << "WebFeature::kSubtleCryptoUnwrapKey";
    case WebFeature::kCryptoAlgorithmAesCbc:
      return os << "WebFeature::kCryptoAlgorithmAesCbc";
    case WebFeature::kCryptoAlgorithmHmac:
      return os << "WebFeature::kCryptoAlgorithmHmac";
    case WebFeature::kCryptoAlgorithmRsaSsaPkcs1v1_5:
      return os << "WebFeature::kCryptoAlgorithmRsaSsaPkcs1v1_5";
    case WebFeature::kCryptoAlgorithmSha1:
      return os << "WebFeature::kCryptoAlgorithmSha1";
    case WebFeature::kCryptoAlgorithmSha256:
      return os << "WebFeature::kCryptoAlgorithmSha256";
    case WebFeature::kCryptoAlgorithmSha384:
      return os << "WebFeature::kCryptoAlgorithmSha384";
    case WebFeature::kCryptoAlgorithmSha512:
      return os << "WebFeature::kCryptoAlgorithmSha512";
    case WebFeature::kCryptoAlgorithmAesGcm:
      return os << "WebFeature::kCryptoAlgorithmAesGcm";
    case WebFeature::kCryptoAlgorithmRsaOaep:
      return os << "WebFeature::kCryptoAlgorithmRsaOaep";
    case WebFeature::kCryptoAlgorithmAesCtr:
      return os << "WebFeature::kCryptoAlgorithmAesCtr";
    case WebFeature::kCryptoAlgorithmAesKw:
      return os << "WebFeature::kCryptoAlgorithmAesKw";
    case WebFeature::kCryptoAlgorithmRsaPss:
      return os << "WebFeature::kCryptoAlgorithmRsaPss";
    case WebFeature::kCryptoAlgorithmEcdsa:
      return os << "WebFeature::kCryptoAlgorithmEcdsa";
    case WebFeature::kCryptoAlgorithmEcdh:
      return os << "WebFeature::kCryptoAlgorithmEcdh";
    case WebFeature::kCryptoAlgorithmHkdf:
      return os << "WebFeature::kCryptoAlgorithmHkdf";
    case WebFeature::kCryptoAlgorithmPbkdf2:
      return os << "WebFeature::kCryptoAlgorithmPbkdf2";
    case WebFeature::kDocumentSetDomain:
      return os << "WebFeature::kDocumentSetDomain";
    case WebFeature::kUpgradeInsecureRequestsEnabled:
      return os << "WebFeature::kUpgradeInsecureRequestsEnabled";
    case WebFeature::kUpgradeInsecureRequestsUpgradedRequest:
      return os << "WebFeature::kUpgradeInsecureRequestsUpgradedRequest";
    case WebFeature::kDocumentDesignMode:
      return os << "WebFeature::kDocumentDesignMode";
    case WebFeature::kGlobalCacheStorage:
      return os << "WebFeature::kGlobalCacheStorage";
    case WebFeature::kNetInfo:
      return os << "WebFeature::kNetInfo";
    case WebFeature::kBackgroundSync:
      return os << "WebFeature::kBackgroundSync";
    case WebFeature::kLegacyConst:
      return os << "WebFeature::kLegacyConst";
    case WebFeature::kV8Permissions_Query_Method:
      return os << "WebFeature::kV8Permissions_Query_Method";
    case WebFeature::kSVGHrefBaseVal:
      return os << "WebFeature::kSVGHrefBaseVal";
    case WebFeature::kSVGHrefAnimVal:
      return os << "WebFeature::kSVGHrefAnimVal";
    case WebFeature::kV8CSSRuleList_Item_Method:
      return os << "WebFeature::kV8CSSRuleList_Item_Method";
    case WebFeature::kV8MediaList_Item_Method:
      return os << "WebFeature::kV8MediaList_Item_Method";
    case WebFeature::kV8StyleSheetList_Item_Method:
      return os << "WebFeature::kV8StyleSheetList_Item_Method";
    case WebFeature::kStyleSheetListAnonymousNamedGetter:
      return os << "WebFeature::kStyleSheetListAnonymousNamedGetter";
    case WebFeature::kAutocapitalizeAttribute:
      return os << "WebFeature::kAutocapitalizeAttribute";
    case WebFeature::kFullscreenSecureOrigin:
      return os << "WebFeature::kFullscreenSecureOrigin";
    case WebFeature::kFullscreenInsecureOrigin:
      return os << "WebFeature::kFullscreenInsecureOrigin";
    case WebFeature::kDialogInSandboxedContext:
      return os << "WebFeature::kDialogInSandboxedContext";
    case WebFeature::kSVGSMILAnimationInImageRegardlessOfCache:
      return os << "WebFeature::kSVGSMILAnimationInImageRegardlessOfCache";
    case WebFeature::kEncryptedMediaSecureOrigin:
      return os << "WebFeature::kEncryptedMediaSecureOrigin";
    case WebFeature::kPerformanceFrameTiming:
      return os << "WebFeature::kPerformanceFrameTiming";
    case WebFeature::kV8Element_Animate_Method:
      return os << "WebFeature::kV8Element_Animate_Method";
    case WebFeature::kV8SVGSVGElement_GetElementById_Method:
      return os << "WebFeature::kV8SVGSVGElement_GetElementById_Method";
    case WebFeature::kV8MessageChannel_Constructor:
      return os << "WebFeature::kV8MessageChannel_Constructor";
    case WebFeature::kV8MessagePort_PostMessage_Method:
      return os << "WebFeature::kV8MessagePort_PostMessage_Method";
    case WebFeature::kV8MessagePort_Start_Method:
      return os << "WebFeature::kV8MessagePort_Start_Method";
    case WebFeature::kV8MessagePort_Close_Method:
      return os << "WebFeature::kV8MessagePort_Close_Method";
    case WebFeature::kMessagePortsTransferred:
      return os << "WebFeature::kMessagePortsTransferred";
    case WebFeature::kCSSKeyframesRuleAnonymousIndexedGetter:
      return os << "WebFeature::kCSSKeyframesRuleAnonymousIndexedGetter";
    case WebFeature::kV8Screen_AvailLeft_AttributeGetter:
      return os << "WebFeature::kV8Screen_AvailLeft_AttributeGetter";
    case WebFeature::kV8Screen_AvailTop_AttributeGetter:
      return os << "WebFeature::kV8Screen_AvailTop_AttributeGetter";
    case WebFeature::kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter:
      return os << "WebFeature::kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter";
    case WebFeature::kV8SVGStyleElement_Disabled_AttributeGetter:
      return os << "WebFeature::kV8SVGStyleElement_Disabled_AttributeGetter";
    case WebFeature::kV8SVGStyleElement_Disabled_AttributeSetter:
      return os << "WebFeature::kV8SVGStyleElement_Disabled_AttributeSetter";
    case WebFeature::kInputTypeFileSecureOrigin:
      return os << "WebFeature::kInputTypeFileSecureOrigin";
    case WebFeature::kInputTypeFileInsecureOrigin:
      return os << "WebFeature::kInputTypeFileInsecureOrigin";
    case WebFeature::kElementAttachShadow:
      return os << "WebFeature::kElementAttachShadow";
    case WebFeature::kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter:
      return os << "WebFeature::kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter";
    case WebFeature::kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter:
      return os << "WebFeature::kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter";
    case WebFeature::kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter:
      return os << "WebFeature::kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter";
    case WebFeature::kHTMLLinkElementDisabled:
      return os << "WebFeature::kHTMLLinkElementDisabled";
    case WebFeature::kV8HTMLLinkElement_Disabled_AttributeGetter:
      return os << "WebFeature::kV8HTMLLinkElement_Disabled_AttributeGetter";
    case WebFeature::kV8HTMLLinkElement_Disabled_AttributeSetter:
      return os << "WebFeature::kV8HTMLLinkElement_Disabled_AttributeSetter";
    case WebFeature::kV8HTMLStyleElement_Disabled_AttributeGetter:
      return os << "WebFeature::kV8HTMLStyleElement_Disabled_AttributeGetter";
    case WebFeature::kV8HTMLStyleElement_Disabled_AttributeSetter:
      return os << "WebFeature::kV8HTMLStyleElement_Disabled_AttributeSetter";
    case WebFeature::kV8DOMError_Constructor:
      return os << "WebFeature::kV8DOMError_Constructor";
    case WebFeature::kV8DOMError_Name_AttributeGetter:
      return os << "WebFeature::kV8DOMError_Name_AttributeGetter";
    case WebFeature::kV8DOMError_Message_AttributeGetter:
      return os << "WebFeature::kV8DOMError_Message_AttributeGetter";
    case WebFeature::kTextInputFired:
      return os << "WebFeature::kTextInputFired";
    case WebFeature::kV8TextEvent_Data_AttributeGetter:
      return os << "WebFeature::kV8TextEvent_Data_AttributeGetter";
    case WebFeature::kV8TextEvent_InitTextEvent_Method:
      return os << "WebFeature::kV8TextEvent_InitTextEvent_Method";
    case WebFeature::kClientHintsDPR:
      return os << "WebFeature::kClientHintsDPR";
    case WebFeature::kClientHintsResourceWidth:
      return os << "WebFeature::kClientHintsResourceWidth";
    case WebFeature::kClientHintsViewportWidth:
      return os << "WebFeature::kClientHintsViewportWidth";
    case WebFeature::kSRIElementIntegrityAttributeButIneligible:
      return os << "WebFeature::kSRIElementIntegrityAttributeButIneligible";
    case WebFeature::kFormDataAppendNull:
      return os << "WebFeature::kFormDataAppendNull";
    case WebFeature::kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase:
      return os << "WebFeature::kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase";
    case WebFeature::kNavigatorVibrate:
      return os << "WebFeature::kNavigatorVibrate";
    case WebFeature::kNavigatorVibrateSubFrame:
      return os << "WebFeature::kNavigatorVibrateSubFrame";
    case WebFeature::kV8XPathEvaluator_Constructor:
      return os << "WebFeature::kV8XPathEvaluator_Constructor";
    case WebFeature::kV8XPathEvaluator_CreateExpression_Method:
      return os << "WebFeature::kV8XPathEvaluator_CreateExpression_Method";
    case WebFeature::kV8XPathEvaluator_CreateNSResolver_Method:
      return os << "WebFeature::kV8XPathEvaluator_CreateNSResolver_Method";
    case WebFeature::kV8XPathEvaluator_Evaluate_Method:
      return os << "WebFeature::kV8XPathEvaluator_Evaluate_Method";
    case WebFeature::kRequestMIDIAccess_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccess_ObscuredByFootprinting";
    case WebFeature::kV8MouseEvent_LayerX_AttributeGetter:
      return os << "WebFeature::kV8MouseEvent_LayerX_AttributeGetter";
    case WebFeature::kV8MouseEvent_LayerY_AttributeGetter:
      return os << "WebFeature::kV8MouseEvent_LayerY_AttributeGetter";
    case WebFeature::kInnerTextWithShadowTree:
      return os << "WebFeature::kInnerTextWithShadowTree";
    case WebFeature::kSelectionToStringWithShadowTree:
      return os << "WebFeature::kSelectionToStringWithShadowTree";
    case WebFeature::kWindowFindWithShadowTree:
      return os << "WebFeature::kWindowFindWithShadowTree";
    case WebFeature::kV8CompositionEvent_InitCompositionEvent_Method:
      return os << "WebFeature::kV8CompositionEvent_InitCompositionEvent_Method";
    case WebFeature::kV8CustomEvent_InitCustomEvent_Method:
      return os << "WebFeature::kV8CustomEvent_InitCustomEvent_Method";
    case WebFeature::kV8DeviceMotionEvent_InitDeviceMotionEvent_Method:
      return os << "WebFeature::kV8DeviceMotionEvent_InitDeviceMotionEvent_Method";
    case WebFeature::kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method:
      return os << "WebFeature::kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method";
    case WebFeature::kV8Event_InitEvent_Method:
      return os << "WebFeature::kV8Event_InitEvent_Method";
    case WebFeature::kV8KeyboardEvent_InitKeyboardEvent_Method:
      return os << "WebFeature::kV8KeyboardEvent_InitKeyboardEvent_Method";
    case WebFeature::kV8MouseEvent_InitMouseEvent_Method:
      return os << "WebFeature::kV8MouseEvent_InitMouseEvent_Method";
    case WebFeature::kV8MutationEvent_InitMutationEvent_Method:
      return os << "WebFeature::kV8MutationEvent_InitMutationEvent_Method";
    case WebFeature::kV8StorageEvent_InitStorageEvent_Method:
      return os << "WebFeature::kV8StorageEvent_InitStorageEvent_Method";
    case WebFeature::kV8UIEvent_InitUIEvent_Method:
      return os << "WebFeature::kV8UIEvent_InitUIEvent_Method";
    case WebFeature::kRequestFileSystemNonWebbyOrigin:
      return os << "WebFeature::kRequestFileSystemNonWebbyOrigin";
    case WebFeature::kV8MemoryInfo_TotalJSHeapSize_AttributeGetter:
      return os << "WebFeature::kV8MemoryInfo_TotalJSHeapSize_AttributeGetter";
    case WebFeature::kV8MemoryInfo_UsedJSHeapSize_AttributeGetter:
      return os << "WebFeature::kV8MemoryInfo_UsedJSHeapSize_AttributeGetter";
    case WebFeature::kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter:
      return os << "WebFeature::kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter";
    case WebFeature::kV8Performance_Timing_AttributeGetter:
      return os << "WebFeature::kV8Performance_Timing_AttributeGetter";
    case WebFeature::kV8Performance_Navigation_AttributeGetter:
      return os << "WebFeature::kV8Performance_Navigation_AttributeGetter";
    case WebFeature::kV8Performance_Memory_AttributeGetter:
      return os << "WebFeature::kV8Performance_Memory_AttributeGetter";
    case WebFeature::kV8SharedWorker_WorkerStart_AttributeGetter:
      return os << "WebFeature::kV8SharedWorker_WorkerStart_AttributeGetter";
    case WebFeature::kHTMLMediaElementPreloadNone:
      return os << "WebFeature::kHTMLMediaElementPreloadNone";
    case WebFeature::kHTMLMediaElementPreloadMetadata:
      return os << "WebFeature::kHTMLMediaElementPreloadMetadata";
    case WebFeature::kHTMLMediaElementPreloadAuto:
      return os << "WebFeature::kHTMLMediaElementPreloadAuto";
    case WebFeature::kHTMLMediaElementPreloadDefault:
      return os << "WebFeature::kHTMLMediaElementPreloadDefault";
    case WebFeature::kMixedContentBlockableAllowed:
      return os << "WebFeature::kMixedContentBlockableAllowed";
    case WebFeature::kPseudoBeforeAfterForInputElement:
      return os << "WebFeature::kPseudoBeforeAfterForInputElement";
    case WebFeature::kV8Permissions_Revoke_Method:
      return os << "WebFeature::kV8Permissions_Revoke_Method";
    case WebFeature::kLinkRelDnsPrefetch:
      return os << "WebFeature::kLinkRelDnsPrefetch";
    case WebFeature::kLinkRelPreconnect:
      return os << "WebFeature::kLinkRelPreconnect";
    case WebFeature::kLinkRelPreload:
      return os << "WebFeature::kLinkRelPreload";
    case WebFeature::kLinkHeaderDnsPrefetch:
      return os << "WebFeature::kLinkHeaderDnsPrefetch";
    case WebFeature::kLinkHeaderPreconnect:
      return os << "WebFeature::kLinkHeaderPreconnect";
    case WebFeature::kClientHintsMetaAcceptCH:
      return os << "WebFeature::kClientHintsMetaAcceptCH";
    case WebFeature::kHTMLElementDeprecatedWidth:
      return os << "WebFeature::kHTMLElementDeprecatedWidth";
    case WebFeature::kClientHintsContentDPR:
      return os << "WebFeature::kClientHintsContentDPR";
    case WebFeature::kElementAttachShadowOpen:
      return os << "WebFeature::kElementAttachShadowOpen";
    case WebFeature::kElementAttachShadowClosed:
      return os << "WebFeature::kElementAttachShadowClosed";
    case WebFeature::kAudioParamSetValueAtTime:
      return os << "WebFeature::kAudioParamSetValueAtTime";
    case WebFeature::kAudioParamLinearRampToValueAtTime:
      return os << "WebFeature::kAudioParamLinearRampToValueAtTime";
    case WebFeature::kAudioParamExponentialRampToValueAtTime:
      return os << "WebFeature::kAudioParamExponentialRampToValueAtTime";
    case WebFeature::kAudioParamSetTargetAtTime:
      return os << "WebFeature::kAudioParamSetTargetAtTime";
    case WebFeature::kAudioParamSetValueCurveAtTime:
      return os << "WebFeature::kAudioParamSetValueCurveAtTime";
    case WebFeature::kAudioParamCancelScheduledValues:
      return os << "WebFeature::kAudioParamCancelScheduledValues";
    case WebFeature::kV8Permissions_Request_Method:
      return os << "WebFeature::kV8Permissions_Request_Method";
    case WebFeature::kLinkRelPrefetch:
      return os << "WebFeature::kLinkRelPrefetch";
    case WebFeature::kLinkRelPrerender:
      return os << "WebFeature::kLinkRelPrerender";
    case WebFeature::kLinkRelNext:
      return os << "WebFeature::kLinkRelNext";
    case WebFeature::kCSSValuePrefixedMinContent:
      return os << "WebFeature::kCSSValuePrefixedMinContent";
    case WebFeature::kCSSValuePrefixedMaxContent:
      return os << "WebFeature::kCSSValuePrefixedMaxContent";
    case WebFeature::kCSSValuePrefixedFitContent:
      return os << "WebFeature::kCSSValuePrefixedFitContent";
    case WebFeature::kCSSValuePrefixedFillAvailable:
      return os << "WebFeature::kCSSValuePrefixedFillAvailable";
    case WebFeature::kPresentationDefaultRequest:
      return os << "WebFeature::kPresentationDefaultRequest";
    case WebFeature::kPresentationAvailabilityChangeEventListener:
      return os << "WebFeature::kPresentationAvailabilityChangeEventListener";
    case WebFeature::kPresentationRequestConstructor:
      return os << "WebFeature::kPresentationRequestConstructor";
    case WebFeature::kPresentationRequestStart:
      return os << "WebFeature::kPresentationRequestStart";
    case WebFeature::kPresentationRequestReconnect:
      return os << "WebFeature::kPresentationRequestReconnect";
    case WebFeature::kPresentationRequestGetAvailability:
      return os << "WebFeature::kPresentationRequestGetAvailability";
    case WebFeature::kPresentationRequestConnectionAvailableEventListener:
      return os << "WebFeature::kPresentationRequestConnectionAvailableEventListener";
    case WebFeature::kPresentationConnectionTerminate:
      return os << "WebFeature::kPresentationConnectionTerminate";
    case WebFeature::kPresentationConnectionSend:
      return os << "WebFeature::kPresentationConnectionSend";
    case WebFeature::kPresentationConnectionMessageEventListener:
      return os << "WebFeature::kPresentationConnectionMessageEventListener";
    case WebFeature::kCSSAnimationsStackedNeutralKeyframe:
      return os << "WebFeature::kCSSAnimationsStackedNeutralKeyframe";
    case WebFeature::kReadingCheckedInClickHandler:
      return os << "WebFeature::kReadingCheckedInClickHandler";
    case WebFeature::kFlexboxIntrinsicSizeAlgorithmIsDifferent:
      return os << "WebFeature::kFlexboxIntrinsicSizeAlgorithmIsDifferent";
    case WebFeature::kHTMLImportsHasStyleSheets:
      return os << "WebFeature::kHTMLImportsHasStyleSheets";
    case WebFeature::kNetInfoType:
      return os << "WebFeature::kNetInfoType";
    case WebFeature::kNetInfoDownlinkMax:
      return os << "WebFeature::kNetInfoDownlinkMax";
    case WebFeature::kNetInfoOnChange:
      return os << "WebFeature::kNetInfoOnChange";
    case WebFeature::kNetInfoOnTypeChange:
      return os << "WebFeature::kNetInfoOnTypeChange";
    case WebFeature::kV8Window_Alert_Method:
      return os << "WebFeature::kV8Window_Alert_Method";
    case WebFeature::kV8Window_Confirm_Method:
      return os << "WebFeature::kV8Window_Confirm_Method";
    case WebFeature::kV8Window_Prompt_Method:
      return os << "WebFeature::kV8Window_Prompt_Method";
    case WebFeature::kV8Window_Print_Method:
      return os << "WebFeature::kV8Window_Print_Method";
    case WebFeature::kV8Window_RequestIdleCallback_Method:
      return os << "WebFeature::kV8Window_RequestIdleCallback_Method";
    case WebFeature::kFlexboxPercentagePaddingVertical:
      return os << "WebFeature::kFlexboxPercentagePaddingVertical";
    case WebFeature::kFlexboxPercentageMarginVertical:
      return os << "WebFeature::kFlexboxPercentageMarginVertical";
    case WebFeature::kCSPSourceWildcardWouldMatchExactHost:
      return os << "WebFeature::kCSPSourceWildcardWouldMatchExactHost";
    case WebFeature::kCredentialManagerGet:
      return os << "WebFeature::kCredentialManagerGet";
    case WebFeature::kCredentialManagerGetMediationOptional:
      return os << "WebFeature::kCredentialManagerGetMediationOptional";
    case WebFeature::kCredentialManagerGetMediationSilent:
      return os << "WebFeature::kCredentialManagerGetMediationSilent";
    case WebFeature::kCredentialManagerStore:
      return os << "WebFeature::kCredentialManagerStore";
    case WebFeature::kBlockableMixedContentInSubframeBlocked:
      return os << "WebFeature::kBlockableMixedContentInSubframeBlocked";
    case WebFeature::kAddEventListenerThirdArgumentIsObject:
      return os << "WebFeature::kAddEventListenerThirdArgumentIsObject";
    case WebFeature::kRemoveEventListenerThirdArgumentIsObject:
      return os << "WebFeature::kRemoveEventListenerThirdArgumentIsObject";
    case WebFeature::kCSSAtRuleCharset:
      return os << "WebFeature::kCSSAtRuleCharset";
    case WebFeature::kCSSAtRuleFontFace:
      return os << "WebFeature::kCSSAtRuleFontFace";
    case WebFeature::kCSSAtRuleImport:
      return os << "WebFeature::kCSSAtRuleImport";
    case WebFeature::kCSSAtRuleKeyframes:
      return os << "WebFeature::kCSSAtRuleKeyframes";
    case WebFeature::kCSSAtRuleMedia:
      return os << "WebFeature::kCSSAtRuleMedia";
    case WebFeature::kCSSAtRuleNamespace:
      return os << "WebFeature::kCSSAtRuleNamespace";
    case WebFeature::kCSSAtRulePage:
      return os << "WebFeature::kCSSAtRulePage";
    case WebFeature::kCSSAtRuleSupports:
      return os << "WebFeature::kCSSAtRuleSupports";
    case WebFeature::kCSSAtRuleViewport:
      return os << "WebFeature::kCSSAtRuleViewport";
    case WebFeature::kCSSAtRuleWebkitKeyframes:
      return os << "WebFeature::kCSSAtRuleWebkitKeyframes";
    case WebFeature::kV8HTMLFieldSetElement_Elements_AttributeGetter:
      return os << "WebFeature::kV8HTMLFieldSetElement_Elements_AttributeGetter";
    case WebFeature::kHTMLMediaElementPreloadForcedNone:
      return os << "WebFeature::kHTMLMediaElementPreloadForcedNone";
    case WebFeature::kExternalAddSearchProvider:
      return os << "WebFeature::kExternalAddSearchProvider";
    case WebFeature::kExternalIsSearchProviderInstalled:
      return os << "WebFeature::kExternalIsSearchProviderInstalled";
    case WebFeature::kV8Permissions_RequestAll_Method:
      return os << "WebFeature::kV8Permissions_RequestAll_Method";
    case WebFeature::kDeviceOrientationAbsoluteInsecureOrigin:
      return os << "WebFeature::kDeviceOrientationAbsoluteInsecureOrigin";
    case WebFeature::kDeviceOrientationAbsoluteSecureOrigin:
      return os << "WebFeature::kDeviceOrientationAbsoluteSecureOrigin";
    case WebFeature::kFontFaceConstructor:
      return os << "WebFeature::kFontFaceConstructor";
    case WebFeature::kServiceWorkerControlledPage:
      return os << "WebFeature::kServiceWorkerControlledPage";
    case WebFeature::kMeterElementWithMeterAppearance:
      return os << "WebFeature::kMeterElementWithMeterAppearance";
    case WebFeature::kMeterElementWithNoneAppearance:
      return os << "WebFeature::kMeterElementWithNoneAppearance";
    case WebFeature::kSelectionAnchorNode:
      return os << "WebFeature::kSelectionAnchorNode";
    case WebFeature::kSelectionAnchorOffset:
      return os << "WebFeature::kSelectionAnchorOffset";
    case WebFeature::kSelectionFocusNode:
      return os << "WebFeature::kSelectionFocusNode";
    case WebFeature::kSelectionFocusOffset:
      return os << "WebFeature::kSelectionFocusOffset";
    case WebFeature::kSelectionIsCollapsed:
      return os << "WebFeature::kSelectionIsCollapsed";
    case WebFeature::kSelectionRangeCount:
      return os << "WebFeature::kSelectionRangeCount";
    case WebFeature::kSelectionGetRangeAt:
      return os << "WebFeature::kSelectionGetRangeAt";
    case WebFeature::kSelectionAddRange:
      return os << "WebFeature::kSelectionAddRange";
    case WebFeature::kSelectionRemoveAllRanges:
      return os << "WebFeature::kSelectionRemoveAllRanges";
    case WebFeature::kSelectionCollapse:
      return os << "WebFeature::kSelectionCollapse";
    case WebFeature::kSelectionCollapseToStart:
      return os << "WebFeature::kSelectionCollapseToStart";
    case WebFeature::kSelectionCollapseToEnd:
      return os << "WebFeature::kSelectionCollapseToEnd";
    case WebFeature::kSelectionExtend:
      return os << "WebFeature::kSelectionExtend";
    case WebFeature::kSelectionSelectAllChildren:
      return os << "WebFeature::kSelectionSelectAllChildren";
    case WebFeature::kSelectionDeleteDromDocument:
      return os << "WebFeature::kSelectionDeleteDromDocument";
    case WebFeature::kSelectionDOMString:
      return os << "WebFeature::kSelectionDOMString";
    case WebFeature::kInputTypeRangeVerticalAppearance:
      return os << "WebFeature::kInputTypeRangeVerticalAppearance";
    case WebFeature::kCSSFilterReference:
      return os << "WebFeature::kCSSFilterReference";
    case WebFeature::kCSSFilterGrayscale:
      return os << "WebFeature::kCSSFilterGrayscale";
    case WebFeature::kCSSFilterSepia:
      return os << "WebFeature::kCSSFilterSepia";
    case WebFeature::kCSSFilterSaturate:
      return os << "WebFeature::kCSSFilterSaturate";
    case WebFeature::kCSSFilterHueRotate:
      return os << "WebFeature::kCSSFilterHueRotate";
    case WebFeature::kCSSFilterInvert:
      return os << "WebFeature::kCSSFilterInvert";
    case WebFeature::kCSSFilterOpacity:
      return os << "WebFeature::kCSSFilterOpacity";
    case WebFeature::kCSSFilterBrightness:
      return os << "WebFeature::kCSSFilterBrightness";
    case WebFeature::kCSSFilterContrast:
      return os << "WebFeature::kCSSFilterContrast";
    case WebFeature::kCSSFilterBlur:
      return os << "WebFeature::kCSSFilterBlur";
    case WebFeature::kCSSFilterDropShadow:
      return os << "WebFeature::kCSSFilterDropShadow";
    case WebFeature::kBackgroundSyncRegister:
      return os << "WebFeature::kBackgroundSyncRegister";
    case WebFeature::kExecCommandOnInputOrTextarea:
      return os << "WebFeature::kExecCommandOnInputOrTextarea";
    case WebFeature::kV8History_ScrollRestoration_AttributeGetter:
      return os << "WebFeature::kV8History_ScrollRestoration_AttributeGetter";
    case WebFeature::kV8History_ScrollRestoration_AttributeSetter:
      return os << "WebFeature::kV8History_ScrollRestoration_AttributeSetter";
    case WebFeature::kSVG1DOMFilter:
      return os << "WebFeature::kSVG1DOMFilter";
    case WebFeature::kOfflineAudioContextStartRendering:
      return os << "WebFeature::kOfflineAudioContextStartRendering";
    case WebFeature::kOfflineAudioContextSuspend:
      return os << "WebFeature::kOfflineAudioContextSuspend";
    case WebFeature::kOfflineAudioContextResume:
      return os << "WebFeature::kOfflineAudioContextResume";
    case WebFeature::kSVG1DOMPaintServer:
      return os << "WebFeature::kSVG1DOMPaintServer";
    case WebFeature::kSVGSVGElementFragmentSVGView:
      return os << "WebFeature::kSVGSVGElementFragmentSVGView";
    case WebFeature::kSVGSVGElementFragmentSVGViewElement:
      return os << "WebFeature::kSVGSVGElementFragmentSVGViewElement";
    case WebFeature::kPresentationConnectionClose:
      return os << "WebFeature::kPresentationConnectionClose";
    case WebFeature::kSVG1DOMShape:
      return os << "WebFeature::kSVG1DOMShape";
    case WebFeature::kSVG1DOMText:
      return os << "WebFeature::kSVG1DOMText";
    case WebFeature::kRTCPeerConnectionConstructorConstraints:
      return os << "WebFeature::kRTCPeerConnectionConstructorConstraints";
    case WebFeature::kRTCPeerConnectionConstructorCompliant:
      return os << "WebFeature::kRTCPeerConnectionConstructorCompliant";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyFailureCallback";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyConstraints:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyConstraints";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyOfferOptions:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyOfferOptions";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyCompliant";
    case WebFeature::kRTCPeerConnectionCreateAnswerLegacyFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionCreateAnswerLegacyFailureCallback";
    case WebFeature::kRTCPeerConnectionCreateAnswerLegacyConstraints:
      return os << "WebFeature::kRTCPeerConnectionCreateAnswerLegacyConstraints";
    case WebFeature::kRTCPeerConnectionCreateAnswerLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionCreateAnswerLegacyCompliant";
    case WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback:
      return os << "WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback";
    case WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback";
    case WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyCompliant";
    case WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback:
      return os << "WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback";
    case WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback";
    case WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant";
    case WebFeature::kRTCPeerConnectionGetStatsLegacyNonCompliant:
      return os << "WebFeature::kRTCPeerConnectionGetStatsLegacyNonCompliant";
    case WebFeature::kNodeFilterIsFunction:
      return os << "WebFeature::kNodeFilterIsFunction";
    case WebFeature::kNodeFilterIsObject:
      return os << "WebFeature::kNodeFilterIsObject";
    case WebFeature::kCSSSelectorInternalPseudoListBox:
      return os << "WebFeature::kCSSSelectorInternalPseudoListBox";
    case WebFeature::kCSSSelectorInternalMediaControlsOverlayCastButton:
      return os << "WebFeature::kCSSSelectorInternalMediaControlsOverlayCastButton";
    case WebFeature::kCSSSelectorInternalPseudoSpatialNavigationFocus:
      return os << "WebFeature::kCSSSelectorInternalPseudoSpatialNavigationFocus";
    case WebFeature::kSameOriginTextScript:
      return os << "WebFeature::kSameOriginTextScript";
    case WebFeature::kSameOriginApplicationScript:
      return os << "WebFeature::kSameOriginApplicationScript";
    case WebFeature::kSameOriginOtherScript:
      return os << "WebFeature::kSameOriginOtherScript";
    case WebFeature::kCrossOriginTextScript:
      return os << "WebFeature::kCrossOriginTextScript";
    case WebFeature::kCrossOriginApplicationScript:
      return os << "WebFeature::kCrossOriginApplicationScript";
    case WebFeature::kCrossOriginOtherScript:
      return os << "WebFeature::kCrossOriginOtherScript";
    case WebFeature::kSVG1DOMSVGTests:
      return os << "WebFeature::kSVG1DOMSVGTests";
    case WebFeature::kDisableRemotePlaybackAttribute:
      return os << "WebFeature::kDisableRemotePlaybackAttribute";
    case WebFeature::kV8SloppyMode:
      return os << "WebFeature::kV8SloppyMode";
    case WebFeature::kV8StrictMode:
      return os << "WebFeature::kV8StrictMode";
    case WebFeature::kV8StrongMode:
      return os << "WebFeature::kV8StrongMode";
    case WebFeature::kAudioNodeConnectToAudioNode:
      return os << "WebFeature::kAudioNodeConnectToAudioNode";
    case WebFeature::kAudioNodeConnectToAudioParam:
      return os << "WebFeature::kAudioNodeConnectToAudioParam";
    case WebFeature::kAudioNodeDisconnectFromAudioNode:
      return os << "WebFeature::kAudioNodeDisconnectFromAudioNode";
    case WebFeature::kAudioNodeDisconnectFromAudioParam:
      return os << "WebFeature::kAudioNodeDisconnectFromAudioParam";
    case WebFeature::kV8CSSFontFaceRule_Style_AttributeGetter:
      return os << "WebFeature::kV8CSSFontFaceRule_Style_AttributeGetter";
    case WebFeature::kSelectionCollapseNull:
      return os << "WebFeature::kSelectionCollapseNull";
    case WebFeature::kSelectionSetBaseAndExtentNull:
      return os << "WebFeature::kSelectionSetBaseAndExtentNull";
    case WebFeature::kV8SVGSVGElement_CreateSVGNumber_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGNumber_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGLength_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGLength_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGAngle_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGAngle_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGPoint_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGPoint_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGMatrix_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGMatrix_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGRect_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGRect_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGTransform_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGTransform_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method";
    case WebFeature::kFormNameAccessForNonDescendantImageElement:
      return os << "WebFeature::kFormNameAccessForNonDescendantImageElement";
    case WebFeature::kV8RegExpPrototypeStickyGetter:
      return os << "WebFeature::kV8RegExpPrototypeStickyGetter";
    case WebFeature::kV8RegExpPrototypeToString:
      return os << "WebFeature::kV8RegExpPrototypeToString";
    case WebFeature::kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter:
      return os << "WebFeature::kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter";
    case WebFeature::kDataElement:
      return os << "WebFeature::kDataElement";
    case WebFeature::kTimeElement:
      return os << "WebFeature::kTimeElement";
    case WebFeature::kSVG1DOMUriReference:
      return os << "WebFeature::kSVG1DOMUriReference";
    case WebFeature::kSVG1DOMZoomAndPan:
      return os << "WebFeature::kSVG1DOMZoomAndPan";
    case WebFeature::kV8SVGGraphicsElement_Transform_AttributeGetter:
      return os << "WebFeature::kV8SVGGraphicsElement_Transform_AttributeGetter";
    case WebFeature::kMenuItemElement:
      return os << "WebFeature::kMenuItemElement";
    case WebFeature::kMenuItemCloseTag:
      return os << "WebFeature::kMenuItemCloseTag";
    case WebFeature::kSVG1DOMMarkerElement:
      return os << "WebFeature::kSVG1DOMMarkerElement";
    case WebFeature::kSVG1DOMUseElement:
      return os << "WebFeature::kSVG1DOMUseElement";
    case WebFeature::kSVG1DOMMaskElement:
      return os << "WebFeature::kSVG1DOMMaskElement";
    case WebFeature::kV8SVGAElement_Target_AttributeGetter:
      return os << "WebFeature::kV8SVGAElement_Target_AttributeGetter";
    case WebFeature::kV8SVGClipPathElement_ClipPathUnits_AttributeGetter:
      return os << "WebFeature::kV8SVGClipPathElement_ClipPathUnits_AttributeGetter";
    case WebFeature::kSVG1DOMFitToViewBox:
      return os << "WebFeature::kSVG1DOMFitToViewBox";
    case WebFeature::kSVG1DOMSVGElement:
      return os << "WebFeature::kSVG1DOMSVGElement";
    case WebFeature::kSVG1DOMImageElement:
      return os << "WebFeature::kSVG1DOMImageElement";
    case WebFeature::kSVG1DOMForeignObjectElement:
      return os << "WebFeature::kSVG1DOMForeignObjectElement";
    case WebFeature::kAudioContextCreateIIRFilter:
      return os << "WebFeature::kAudioContextCreateIIRFilter";
    case WebFeature::kCSSSelectorPseudoSlotted:
      return os << "WebFeature::kCSSSelectorPseudoSlotted";
    case WebFeature::kMediaDevicesEnumerateDevices:
      return os << "WebFeature::kMediaDevicesEnumerateDevices";
    case WebFeature::kEventComposedPath:
      return os << "WebFeature::kEventComposedPath";
    case WebFeature::kLinkHeaderPreload:
      return os << "WebFeature::kLinkHeaderPreload";
    case WebFeature::kMouseWheelEvent:
      return os << "WebFeature::kMouseWheelEvent";
    case WebFeature::kWheelEvent:
      return os << "WebFeature::kWheelEvent";
    case WebFeature::kMouseWheelAndWheelEvent:
      return os << "WebFeature::kMouseWheelAndWheelEvent";
    case WebFeature::kBodyScrollsInAdditionToViewport:
      return os << "WebFeature::kBodyScrollsInAdditionToViewport";
    case WebFeature::kDocumentDesignModeEnabeld:
      return os << "WebFeature::kDocumentDesignModeEnabeld";
    case WebFeature::kContentEditableTrue:
      return os << "WebFeature::kContentEditableTrue";
    case WebFeature::kContentEditableTrueOnHTML:
      return os << "WebFeature::kContentEditableTrueOnHTML";
    case WebFeature::kContentEditablePlainTextOnly:
      return os << "WebFeature::kContentEditablePlainTextOnly";
    case WebFeature::kV8RegExpPrototypeUnicodeGetter:
      return os << "WebFeature::kV8RegExpPrototypeUnicodeGetter";
    case WebFeature::kV8IntlV8Parse:
      return os << "WebFeature::kV8IntlV8Parse";
    case WebFeature::kV8IntlPattern:
      return os << "WebFeature::kV8IntlPattern";
    case WebFeature::kV8IntlResolved:
      return os << "WebFeature::kV8IntlResolved";
    case WebFeature::kV8PromiseChain:
      return os << "WebFeature::kV8PromiseChain";
    case WebFeature::kV8PromiseAccept:
      return os << "WebFeature::kV8PromiseAccept";
    case WebFeature::kV8PromiseDefer:
      return os << "WebFeature::kV8PromiseDefer";
    case WebFeature::kEventComposed:
      return os << "WebFeature::kEventComposed";
    case WebFeature::kGeolocationInsecureOriginIframe:
      return os << "WebFeature::kGeolocationInsecureOriginIframe";
    case WebFeature::kGeolocationSecureOriginIframe:
      return os << "WebFeature::kGeolocationSecureOriginIframe";
    case WebFeature::kRequestMIDIAccessIframe_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccessIframe_ObscuredByFootprinting";
    case WebFeature::kGetUserMediaInsecureOriginIframe:
      return os << "WebFeature::kGetUserMediaInsecureOriginIframe";
    case WebFeature::kGetUserMediaSecureOriginIframe:
      return os << "WebFeature::kGetUserMediaSecureOriginIframe";
    case WebFeature::kElementRequestPointerLockIframe:
      return os << "WebFeature::kElementRequestPointerLockIframe";
    case WebFeature::kNotificationAPIInsecureOriginIframe:
      return os << "WebFeature::kNotificationAPIInsecureOriginIframe";
    case WebFeature::kNotificationAPISecureOriginIframe:
      return os << "WebFeature::kNotificationAPISecureOriginIframe";
    case WebFeature::kWebSocket:
      return os << "WebFeature::kWebSocket";
    case WebFeature::kMediaStreamConstraintsNameValue:
      return os << "WebFeature::kMediaStreamConstraintsNameValue";
    case WebFeature::kMediaStreamConstraintsFromDictionary:
      return os << "WebFeature::kMediaStreamConstraintsFromDictionary";
    case WebFeature::kMediaStreamConstraintsConformant:
      return os << "WebFeature::kMediaStreamConstraintsConformant";
    case WebFeature::kCSSSelectorIndirectAdjacent:
      return os << "WebFeature::kCSSSelectorIndirectAdjacent";
    case WebFeature::kCreateImageBitmap:
      return os << "WebFeature::kCreateImageBitmap";
    case WebFeature::kPresentationConnectionConnectEventListener:
      return os << "WebFeature::kPresentationConnectionConnectEventListener";
    case WebFeature::kPresentationConnectionCloseEventListener:
      return os << "WebFeature::kPresentationConnectionCloseEventListener";
    case WebFeature::kPresentationConnectionTerminateEventListener:
      return os << "WebFeature::kPresentationConnectionTerminateEventListener";
    case WebFeature::kDocumentCreateEventAnimationEvent:
      return os << "WebFeature::kDocumentCreateEventAnimationEvent";
    case WebFeature::kDocumentCreateEventBeforeUnloadEvent:
      return os << "WebFeature::kDocumentCreateEventBeforeUnloadEvent";
    case WebFeature::kDocumentCreateEventCompositionEvent:
      return os << "WebFeature::kDocumentCreateEventCompositionEvent";
    case WebFeature::kDocumentCreateEventDragEvent:
      return os << "WebFeature::kDocumentCreateEventDragEvent";
    case WebFeature::kDocumentCreateEventErrorEvent:
      return os << "WebFeature::kDocumentCreateEventErrorEvent";
    case WebFeature::kDocumentCreateEventFocusEvent:
      return os << "WebFeature::kDocumentCreateEventFocusEvent";
    case WebFeature::kDocumentCreateEventHashChangeEvent:
      return os << "WebFeature::kDocumentCreateEventHashChangeEvent";
    case WebFeature::kDocumentCreateEventMutationEvent:
      return os << "WebFeature::kDocumentCreateEventMutationEvent";
    case WebFeature::kDocumentCreateEventPageTransitionEvent:
      return os << "WebFeature::kDocumentCreateEventPageTransitionEvent";
    case WebFeature::kDocumentCreateEventPopStateEvent:
      return os << "WebFeature::kDocumentCreateEventPopStateEvent";
    case WebFeature::kDocumentCreateEventTextEvent:
      return os << "WebFeature::kDocumentCreateEventTextEvent";
    case WebFeature::kDocumentCreateEventTransitionEvent:
      return os << "WebFeature::kDocumentCreateEventTransitionEvent";
    case WebFeature::kDocumentCreateEventWheelEvent:
      return os << "WebFeature::kDocumentCreateEventWheelEvent";
    case WebFeature::kDocumentCreateEventTrackEvent:
      return os << "WebFeature::kDocumentCreateEventTrackEvent";
    case WebFeature::kDocumentCreateEventMutationEvents:
      return os << "WebFeature::kDocumentCreateEventMutationEvents";
    case WebFeature::kDocumentCreateEventSVGEvents:
      return os << "WebFeature::kDocumentCreateEventSVGEvents";
    case WebFeature::kDocumentCreateEventDeviceMotionEvent:
      return os << "WebFeature::kDocumentCreateEventDeviceMotionEvent";
    case WebFeature::kDocumentCreateEventDeviceOrientationEvent:
      return os << "WebFeature::kDocumentCreateEventDeviceOrientationEvent";
    case WebFeature::kDocumentCreateEventIDBVersionChangeEvent:
      return os << "WebFeature::kDocumentCreateEventIDBVersionChangeEvent";
    case WebFeature::kDocumentCreateEventStorageEvent:
      return os << "WebFeature::kDocumentCreateEventStorageEvent";
    case WebFeature::kDocumentCreateEventWebGLContextEvent:
      return os << "WebFeature::kDocumentCreateEventWebGLContextEvent";
    case WebFeature::kDocumentCreateEventCloseEvent:
      return os << "WebFeature::kDocumentCreateEventCloseEvent";
    case WebFeature::kDocumentCreateEventKeyboardEvents:
      return os << "WebFeature::kDocumentCreateEventKeyboardEvents";
    case WebFeature::kHTMLMediaElement:
      return os << "WebFeature::kHTMLMediaElement";
    case WebFeature::kHTMLMediaElementInDocument:
      return os << "WebFeature::kHTMLMediaElementInDocument";
    case WebFeature::kHTMLMediaElementControlsAttribute:
      return os << "WebFeature::kHTMLMediaElementControlsAttribute";
    case WebFeature::kV8Animation_Oncancel_AttributeGetter:
      return os << "WebFeature::kV8Animation_Oncancel_AttributeGetter";
    case WebFeature::kV8Animation_Oncancel_AttributeSetter:
      return os << "WebFeature::kV8Animation_Oncancel_AttributeSetter";
    case WebFeature::kV8HTMLCommentInExternalScript:
      return os << "WebFeature::kV8HTMLCommentInExternalScript";
    case WebFeature::kV8HTMLComment:
      return os << "WebFeature::kV8HTMLComment";
    case WebFeature::kV8SloppyModeBlockScopedFunctionRedefinition:
      return os << "WebFeature::kV8SloppyModeBlockScopedFunctionRedefinition";
    case WebFeature::kV8ForInInitializer:
      return os << "WebFeature::kV8ForInInitializer";
    case WebFeature::kV8Animation_Id_AttributeGetter:
      return os << "WebFeature::kV8Animation_Id_AttributeGetter";
    case WebFeature::kV8Animation_Id_AttributeSetter:
      return os << "WebFeature::kV8Animation_Id_AttributeSetter";
    case WebFeature::kApplicationCacheManifestSelectInsecureOrigin:
      return os << "WebFeature::kApplicationCacheManifestSelectInsecureOrigin";
    case WebFeature::kApplicationCacheManifestSelectSecureOrigin:
      return os << "WebFeature::kApplicationCacheManifestSelectSecureOrigin";
    case WebFeature::kApplicationCacheAPIInsecureOrigin:
      return os << "WebFeature::kApplicationCacheAPIInsecureOrigin";
    case WebFeature::kApplicationCacheAPISecureOrigin:
      return os << "WebFeature::kApplicationCacheAPISecureOrigin";
    case WebFeature::kCSSAtRuleApply:
      return os << "WebFeature::kCSSAtRuleApply";
    case WebFeature::kCSSSelectorPseudoAny:
      return os << "WebFeature::kCSSSelectorPseudoAny";
    case WebFeature::kHTMLLabelElementControlForNonFormAssociatedElement:
      return os << "WebFeature::kHTMLLabelElementControlForNonFormAssociatedElement";
    case WebFeature::kHTMLMediaElementLoadNetworkEmptyNotPaused:
      return os << "WebFeature::kHTMLMediaElementLoadNetworkEmptyNotPaused";
    case WebFeature::kV8Window_WebkitSpeechGrammar_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechGrammar_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechGrammarList_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechGrammarList_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechRecognition_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechRecognition_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechRecognitionError_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechRecognitionError_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter";
    case WebFeature::kV8Window_SpeechSynthesis_AttributeGetter:
      return os << "WebFeature::kV8Window_SpeechSynthesis_AttributeGetter";
    case WebFeature::kV8IDBFactory_WebkitGetDatabaseNames_Method:
      return os << "WebFeature::kV8IDBFactory_WebkitGetDatabaseNames_Method";
    case WebFeature::kScriptPassesCSPDynamic:
      return os << "WebFeature::kScriptPassesCSPDynamic";
    case WebFeature::kCSPWithStrictDynamic:
      return os << "WebFeature::kCSPWithStrictDynamic";
    case WebFeature::kScrollAnchored:
      return os << "WebFeature::kScrollAnchored";
    case WebFeature::kAddEventListenerFourArguments:
      return os << "WebFeature::kAddEventListenerFourArguments";
    case WebFeature::kRemoveEventListenerFourArguments:
      return os << "WebFeature::kRemoveEventListenerFourArguments";
    case WebFeature::kSVGCalcModeDiscrete:
      return os << "WebFeature::kSVGCalcModeDiscrete";
    case WebFeature::kSVGCalcModeLinear:
      return os << "WebFeature::kSVGCalcModeLinear";
    case WebFeature::kSVGCalcModePaced:
      return os << "WebFeature::kSVGCalcModePaced";
    case WebFeature::kSVGCalcModeSpline:
      return os << "WebFeature::kSVGCalcModeSpline";
    case WebFeature::kFormSubmissionStarted:
      return os << "WebFeature::kFormSubmissionStarted";
    case WebFeature::kFormValidationStarted:
      return os << "WebFeature::kFormValidationStarted";
    case WebFeature::kFormValidationAbortedSubmission:
      return os << "WebFeature::kFormValidationAbortedSubmission";
    case WebFeature::kFormValidationShowedMessage:
      return os << "WebFeature::kFormValidationShowedMessage";
    case WebFeature::kV8Document_Images_AttributeGetter:
      return os << "WebFeature::kV8Document_Images_AttributeGetter";
    case WebFeature::kV8Document_Embeds_AttributeGetter:
      return os << "WebFeature::kV8Document_Embeds_AttributeGetter";
    case WebFeature::kV8Document_Plugins_AttributeGetter:
      return os << "WebFeature::kV8Document_Plugins_AttributeGetter";
    case WebFeature::kV8Document_Links_AttributeGetter:
      return os << "WebFeature::kV8Document_Links_AttributeGetter";
    case WebFeature::kV8Document_Forms_AttributeGetter:
      return os << "WebFeature::kV8Document_Forms_AttributeGetter";
    case WebFeature::kV8Document_Scripts_AttributeGetter:
      return os << "WebFeature::kV8Document_Scripts_AttributeGetter";
    case WebFeature::kV8Document_Anchors_AttributeGetter:
      return os << "WebFeature::kV8Document_Anchors_AttributeGetter";
    case WebFeature::kV8Document_Applets_AttributeGetter:
      return os << "WebFeature::kV8Document_Applets_AttributeGetter";
    case WebFeature::kXMLHttpRequestCrossOriginWithCredentials:
      return os << "WebFeature::kXMLHttpRequestCrossOriginWithCredentials";
    case WebFeature::kMediaStreamTrackRemote:
      return os << "WebFeature::kMediaStreamTrackRemote";
    case WebFeature::kV8Node_IsConnected_AttributeGetter:
      return os << "WebFeature::kV8Node_IsConnected_AttributeGetter";
    case WebFeature::kShadowRootDelegatesFocus:
      return os << "WebFeature::kShadowRootDelegatesFocus";
    case WebFeature::kMixedShadowRootV0AndV1:
      return os << "WebFeature::kMixedShadowRootV0AndV1";
    case WebFeature::kFileAPINativeLineEndings:
      return os << "WebFeature::kFileAPINativeLineEndings";
    case WebFeature::kPointerEventAttributeCount:
      return os << "WebFeature::kPointerEventAttributeCount";
    case WebFeature::kCompositedReplication:
      return os << "WebFeature::kCompositedReplication";
    case WebFeature::kV8DataTransferItem_WebkitGetAsEntry_Method:
      return os << "WebFeature::kV8DataTransferItem_WebkitGetAsEntry_Method";
    case WebFeature::kV8HTMLInputElement_WebkitEntries_AttributeGetter:
      return os << "WebFeature::kV8HTMLInputElement_WebkitEntries_AttributeGetter";
    case WebFeature::kEntry_Filesystem_AttributeGetter_IsolatedFileSystem:
      return os << "WebFeature::kEntry_Filesystem_AttributeGetter_IsolatedFileSystem";
    case WebFeature::kEntry_GetMetadata_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_GetMetadata_Method_IsolatedFileSystem";
    case WebFeature::kEntry_MoveTo_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_MoveTo_Method_IsolatedFileSystem";
    case WebFeature::kEntry_CopyTo_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_CopyTo_Method_IsolatedFileSystem";
    case WebFeature::kEntry_Remove_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_Remove_Method_IsolatedFileSystem";
    case WebFeature::kEntry_GetParent_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_GetParent_Method_IsolatedFileSystem";
    case WebFeature::kEntry_ToURL_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_ToURL_Method_IsolatedFileSystem";
    case WebFeature::kDuring_Microtask_Alert:
      return os << "WebFeature::kDuring_Microtask_Alert";
    case WebFeature::kDuring_Microtask_Confirm:
      return os << "WebFeature::kDuring_Microtask_Confirm";
    case WebFeature::kDuring_Microtask_Print:
      return os << "WebFeature::kDuring_Microtask_Print";
    case WebFeature::kDuring_Microtask_Prompt:
      return os << "WebFeature::kDuring_Microtask_Prompt";
    case WebFeature::kDuring_Microtask_SyncXHR:
      return os << "WebFeature::kDuring_Microtask_SyncXHR";
    case WebFeature::kCredentialManagerGetReturnedCredential:
      return os << "WebFeature::kCredentialManagerGetReturnedCredential";
    case WebFeature::kGeolocationInsecureOriginDeprecatedNotRemoved:
      return os << "WebFeature::kGeolocationInsecureOriginDeprecatedNotRemoved";
    case WebFeature::kGeolocationInsecureOriginIframeDeprecatedNotRemoved:
      return os << "WebFeature::kGeolocationInsecureOriginIframeDeprecatedNotRemoved";
    case WebFeature::kProgressElementWithNoneAppearance:
      return os << "WebFeature::kProgressElementWithNoneAppearance";
    case WebFeature::kProgressElementWithProgressBarAppearance:
      return os << "WebFeature::kProgressElementWithProgressBarAppearance";
    case WebFeature::kPointerEventAddListenerCount:
      return os << "WebFeature::kPointerEventAddListenerCount";
    case WebFeature::kCSSValueAppearanceNone:
      return os << "WebFeature::kCSSValueAppearanceNone";
    case WebFeature::kCSSValueAppearanceNotNone:
      return os << "WebFeature::kCSSValueAppearanceNotNone";
    case WebFeature::kCSSValueAppearanceOthers:
      return os << "WebFeature::kCSSValueAppearanceOthers";
    case WebFeature::kCSSValueAppearanceButton:
      return os << "WebFeature::kCSSValueAppearanceButton";
    case WebFeature::kCSSValueAppearanceCaret:
      return os << "WebFeature::kCSSValueAppearanceCaret";
    case WebFeature::kCSSValueAppearanceCheckbox:
      return os << "WebFeature::kCSSValueAppearanceCheckbox";
    case WebFeature::kCSSValueAppearanceMenulist:
      return os << "WebFeature::kCSSValueAppearanceMenulist";
    case WebFeature::kCSSValueAppearanceMenulistButton:
      return os << "WebFeature::kCSSValueAppearanceMenulistButton";
    case WebFeature::kCSSValueAppearanceListbox:
      return os << "WebFeature::kCSSValueAppearanceListbox";
    case WebFeature::kCSSValueAppearanceRadio:
      return os << "WebFeature::kCSSValueAppearanceRadio";
    case WebFeature::kCSSValueAppearanceSearchField:
      return os << "WebFeature::kCSSValueAppearanceSearchField";
    case WebFeature::kCSSValueAppearanceTextField:
      return os << "WebFeature::kCSSValueAppearanceTextField";
    case WebFeature::kAudioContextCreatePannerAutomated:
      return os << "WebFeature::kAudioContextCreatePannerAutomated";
    case WebFeature::kPannerNodeSetPosition:
      return os << "WebFeature::kPannerNodeSetPosition";
    case WebFeature::kPannerNodeSetOrientation:
      return os << "WebFeature::kPannerNodeSetOrientation";
    case WebFeature::kAudioListenerSetPosition:
      return os << "WebFeature::kAudioListenerSetPosition";
    case WebFeature::kAudioListenerSetOrientation:
      return os << "WebFeature::kAudioListenerSetOrientation";
    case WebFeature::kIntersectionObserver_Constructor:
      return os << "WebFeature::kIntersectionObserver_Constructor";
    case WebFeature::kDurableStoragePersist:
      return os << "WebFeature::kDurableStoragePersist";
    case WebFeature::kDurableStoragePersisted:
      return os << "WebFeature::kDurableStoragePersisted";
    case WebFeature::kDurableStorageEstimate:
      return os << "WebFeature::kDurableStorageEstimate";
    case WebFeature::kCSSDeepCombinatorAndShadow:
      return os << "WebFeature::kCSSDeepCombinatorAndShadow";
    case WebFeature::kOpacityWithPreserve3DQuirk:
      return os << "WebFeature::kOpacityWithPreserve3DQuirk";
    case WebFeature::kCSSSelectorPseudoReadOnly:
      return os << "WebFeature::kCSSSelectorPseudoReadOnly";
    case WebFeature::kCSSSelectorPseudoReadWrite:
      return os << "WebFeature::kCSSSelectorPseudoReadWrite";
    case WebFeature::kCSSSelectorPseudoDefined:
      return os << "WebFeature::kCSSSelectorPseudoDefined";
    case WebFeature::kRTCPeerConnectionAddIceCandidatePromise:
      return os << "WebFeature::kRTCPeerConnectionAddIceCandidatePromise";
    case WebFeature::kRTCPeerConnectionAddIceCandidateLegacy:
      return os << "WebFeature::kRTCPeerConnectionAddIceCandidateLegacy";
    case WebFeature::kRTCIceCandidateDefaultSdpMLineIndex:
      return os << "WebFeature::kRTCIceCandidateDefaultSdpMLineIndex";
    case WebFeature::kMediaStreamConstraintsOldAndNew:
      return os << "WebFeature::kMediaStreamConstraintsOldAndNew";
    case WebFeature::kV8ArrayProtectorDirtied:
      return os << "WebFeature::kV8ArrayProtectorDirtied";
    case WebFeature::kV8ArraySpeciesModified:
      return os << "WebFeature::kV8ArraySpeciesModified";
    case WebFeature::kV8ArrayPrototypeConstructorModified:
      return os << "WebFeature::kV8ArrayPrototypeConstructorModified";
    case WebFeature::kV8ArrayInstanceProtoModified:
      return os << "WebFeature::kV8ArrayInstanceProtoModified";
    case WebFeature::kV8ArrayInstanceConstructorModified:
      return os << "WebFeature::kV8ArrayInstanceConstructorModified";
    case WebFeature::kV8LegacyFunctionDeclaration:
      return os << "WebFeature::kV8LegacyFunctionDeclaration";
    case WebFeature::kV8RegExpPrototypeSourceGetter:
      return os << "WebFeature::kV8RegExpPrototypeSourceGetter";
    case WebFeature::kV8RegExpPrototypeOldFlagGetter:
      return os << "WebFeature::kV8RegExpPrototypeOldFlagGetter";
    case WebFeature::kV8DecimalWithLeadingZeroInStrictMode:
      return os << "WebFeature::kV8DecimalWithLeadingZeroInStrictMode";
    case WebFeature::kGetUserMediaPrefixed:
      return os << "WebFeature::kGetUserMediaPrefixed";
    case WebFeature::kGetUserMediaLegacy:
      return os << "WebFeature::kGetUserMediaLegacy";
    case WebFeature::kGetUserMediaPromise:
      return os << "WebFeature::kGetUserMediaPromise";
    case WebFeature::kCSSFilterFunctionNoArguments:
      return os << "WebFeature::kCSSFilterFunctionNoArguments";
    case WebFeature::kV8LegacyDateParser:
      return os << "WebFeature::kV8LegacyDateParser";
    case WebFeature::kOpenSearchInsecureOriginInsecureTarget:
      return os << "WebFeature::kOpenSearchInsecureOriginInsecureTarget";
    case WebFeature::kOpenSearchInsecureOriginSecureTarget:
      return os << "WebFeature::kOpenSearchInsecureOriginSecureTarget";
    case WebFeature::kOpenSearchSecureOriginInsecureTarget:
      return os << "WebFeature::kOpenSearchSecureOriginInsecureTarget";
    case WebFeature::kOpenSearchSecureOriginSecureTarget:
      return os << "WebFeature::kOpenSearchSecureOriginSecureTarget";
    case WebFeature::kRegisterProtocolHandlerSecureOrigin:
      return os << "WebFeature::kRegisterProtocolHandlerSecureOrigin";
    case WebFeature::kRegisterProtocolHandlerInsecureOrigin:
      return os << "WebFeature::kRegisterProtocolHandlerInsecureOrigin";
    case WebFeature::kCrossOriginWindowAlert:
      return os << "WebFeature::kCrossOriginWindowAlert";
    case WebFeature::kCrossOriginWindowConfirm:
      return os << "WebFeature::kCrossOriginWindowConfirm";
    case WebFeature::kCrossOriginWindowPrompt:
      return os << "WebFeature::kCrossOriginWindowPrompt";
    case WebFeature::kCrossOriginWindowPrint:
      return os << "WebFeature::kCrossOriginWindowPrint";
    case WebFeature::kMediaStreamOnActive:
      return os << "WebFeature::kMediaStreamOnActive";
    case WebFeature::kMediaStreamOnInactive:
      return os << "WebFeature::kMediaStreamOnInactive";
    case WebFeature::kAddEventListenerPassiveTrue:
      return os << "WebFeature::kAddEventListenerPassiveTrue";
    case WebFeature::kAddEventListenerPassiveFalse:
      return os << "WebFeature::kAddEventListenerPassiveFalse";
    case WebFeature::kCSPReferrerDirective:
      return os << "WebFeature::kCSPReferrerDirective";
    case WebFeature::kDocumentOpen:
      return os << "WebFeature::kDocumentOpen";
    case WebFeature::kElementRequestPointerLockInShadow:
      return os << "WebFeature::kElementRequestPointerLockInShadow";
    case WebFeature::kShadowRootPointerLockElement:
      return os << "WebFeature::kShadowRootPointerLockElement";
    case WebFeature::kDocumentPointerLockElementInV0Shadow:
      return os << "WebFeature::kDocumentPointerLockElementInV0Shadow";
    case WebFeature::kTextAreaMaxLength:
      return os << "WebFeature::kTextAreaMaxLength";
    case WebFeature::kTextAreaMinLength:
      return os << "WebFeature::kTextAreaMinLength";
    case WebFeature::kTopNavigationFromSubFrame:
      return os << "WebFeature::kTopNavigationFromSubFrame";
    case WebFeature::kPrefixedElementRequestFullscreenInShadow:
      return os << "WebFeature::kPrefixedElementRequestFullscreenInShadow";
    case WebFeature::kMediaSourceAbortRemove:
      return os << "WebFeature::kMediaSourceAbortRemove";
    case WebFeature::kMediaSourceDurationTruncatingBuffered:
      return os << "WebFeature::kMediaSourceDurationTruncatingBuffered";
    case WebFeature::kAudioContextCrossOriginIframe:
      return os << "WebFeature::kAudioContextCrossOriginIframe";
    case WebFeature::kPointerEventSetCapture:
      return os << "WebFeature::kPointerEventSetCapture";
    case WebFeature::kPointerEventDispatch:
      return os << "WebFeature::kPointerEventDispatch";
    case WebFeature::kMIDIMessageEventReceivedTime:
      return os << "WebFeature::kMIDIMessageEventReceivedTime";
    case WebFeature::kSummaryElementWithDisplayBlockAuthorRule:
      return os << "WebFeature::kSummaryElementWithDisplayBlockAuthorRule";
    case WebFeature::kV8MediaStream_Active_AttributeGetter:
      return os << "WebFeature::kV8MediaStream_Active_AttributeGetter";
    case WebFeature::kBeforeInstallPromptEvent:
      return os << "WebFeature::kBeforeInstallPromptEvent";
    case WebFeature::kBeforeInstallPromptEventUserChoice:
      return os << "WebFeature::kBeforeInstallPromptEventUserChoice";
    case WebFeature::kBeforeInstallPromptEventPreventDefault:
      return os << "WebFeature::kBeforeInstallPromptEventPreventDefault";
    case WebFeature::kBeforeInstallPromptEventPrompt:
      return os << "WebFeature::kBeforeInstallPromptEventPrompt";
    case WebFeature::kExecCommandAltersHTMLStructure:
      return os << "WebFeature::kExecCommandAltersHTMLStructure";
    case WebFeature::kSecureContextCheckPassed:
      return os << "WebFeature::kSecureContextCheckPassed";
    case WebFeature::kSecureContextCheckFailed:
      return os << "WebFeature::kSecureContextCheckFailed";
    case WebFeature::kSecureContextCheckForSandboxedOriginPassed:
      return os << "WebFeature::kSecureContextCheckForSandboxedOriginPassed";
    case WebFeature::kSecureContextCheckForSandboxedOriginFailed:
      return os << "WebFeature::kSecureContextCheckForSandboxedOriginFailed";
    case WebFeature::kV8DefineGetterOrSetterWouldThrow:
      return os << "WebFeature::kV8DefineGetterOrSetterWouldThrow";
    case WebFeature::kV8FunctionConstructorReturnedUndefined:
      return os << "WebFeature::kV8FunctionConstructorReturnedUndefined";
    case WebFeature::kV8BroadcastChannel_Constructor:
      return os << "WebFeature::kV8BroadcastChannel_Constructor";
    case WebFeature::kV8BroadcastChannel_PostMessage_Method:
      return os << "WebFeature::kV8BroadcastChannel_PostMessage_Method";
    case WebFeature::kV8BroadcastChannel_Close_Method:
      return os << "WebFeature::kV8BroadcastChannel_Close_Method";
    case WebFeature::kTouchStartFired:
      return os << "WebFeature::kTouchStartFired";
    case WebFeature::kMouseDownFired:
      return os << "WebFeature::kMouseDownFired";
    case WebFeature::kPointerDownFired:
      return os << "WebFeature::kPointerDownFired";
    case WebFeature::kPointerDownFiredForTouch:
      return os << "WebFeature::kPointerDownFiredForTouch";
    case WebFeature::kPointerEventDispatchPointerDown:
      return os << "WebFeature::kPointerEventDispatchPointerDown";
    case WebFeature::kSVGSMILBeginOrEndEventValue:
      return os << "WebFeature::kSVGSMILBeginOrEndEventValue";
    case WebFeature::kSVGSMILBeginOrEndSyncbaseValue:
      return os << "WebFeature::kSVGSMILBeginOrEndSyncbaseValue";
    case WebFeature::kSVGSMILElementInsertedAfterLoad:
      return os << "WebFeature::kSVGSMILElementInsertedAfterLoad";
    case WebFeature::kV8VisualViewport_OffsetLeft_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_OffsetLeft_AttributeGetter";
    case WebFeature::kV8VisualViewport_OffsetTop_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_OffsetTop_AttributeGetter";
    case WebFeature::kV8VisualViewport_PageLeft_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_PageLeft_AttributeGetter";
    case WebFeature::kV8VisualViewport_PageTop_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_PageTop_AttributeGetter";
    case WebFeature::kV8VisualViewport_Width_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_Width_AttributeGetter";
    case WebFeature::kV8VisualViewport_Height_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_Height_AttributeGetter";
    case WebFeature::kV8VisualViewport_Scale_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_Scale_AttributeGetter";
    case WebFeature::kVisualViewportScrollFired:
      return os << "WebFeature::kVisualViewportScrollFired";
    case WebFeature::kVisualViewportResizeFired:
      return os << "WebFeature::kVisualViewportResizeFired";
    case WebFeature::kNodeGetRootNode:
      return os << "WebFeature::kNodeGetRootNode";
    case WebFeature::kSlotChangeEventAddListener:
      return os << "WebFeature::kSlotChangeEventAddListener";
    case WebFeature::kCSSValueAppearanceButtonRendered:
      return os << "WebFeature::kCSSValueAppearanceButtonRendered";
    case WebFeature::kCSSValueAppearanceButtonForAnchor:
      return os << "WebFeature::kCSSValueAppearanceButtonForAnchor";
    case WebFeature::kCSSValueAppearanceButtonForButton:
      return os << "WebFeature::kCSSValueAppearanceButtonForButton";
    case WebFeature::kCSSValueAppearanceButtonForOtherButtons:
      return os << "WebFeature::kCSSValueAppearanceButtonForOtherButtons";
    case WebFeature::kCSSValueAppearanceTextFieldRendered:
      return os << "WebFeature::kCSSValueAppearanceTextFieldRendered";
    case WebFeature::kCSSValueAppearanceTextFieldForSearch:
      return os << "WebFeature::kCSSValueAppearanceTextFieldForSearch";
    case WebFeature::kCSSValueAppearanceTextFieldForTextField:
      return os << "WebFeature::kCSSValueAppearanceTextFieldForTextField";
    case WebFeature::kRTCPeerConnectionGetStats:
      return os << "WebFeature::kRTCPeerConnectionGetStats";
    case WebFeature::kSVGSMILAnimationAppliedEffect:
      return os << "WebFeature::kSVGSMILAnimationAppliedEffect";
    case WebFeature::kPerformanceResourceTimingSizes:
      return os << "WebFeature::kPerformanceResourceTimingSizes";
    case WebFeature::kEventSourceDocument:
      return os << "WebFeature::kEventSourceDocument";
    case WebFeature::kEventSourceWorker:
      return os << "WebFeature::kEventSourceWorker";
    case WebFeature::kSingleOriginInTimingAllowOrigin:
      return os << "WebFeature::kSingleOriginInTimingAllowOrigin";
    case WebFeature::kMultipleOriginsInTimingAllowOrigin:
      return os << "WebFeature::kMultipleOriginsInTimingAllowOrigin";
    case WebFeature::kStarInTimingAllowOrigin:
      return os << "WebFeature::kStarInTimingAllowOrigin";
    case WebFeature::kSVGSMILAdditiveAnimation:
      return os << "WebFeature::kSVGSMILAdditiveAnimation";
    case WebFeature::kSendBeaconWithNonSimpleContentType:
      return os << "WebFeature::kSendBeaconWithNonSimpleContentType";
    case WebFeature::kChromeLoadTimesRequestTime:
      return os << "WebFeature::kChromeLoadTimesRequestTime";
    case WebFeature::kChromeLoadTimesStartLoadTime:
      return os << "WebFeature::kChromeLoadTimesStartLoadTime";
    case WebFeature::kChromeLoadTimesCommitLoadTime:
      return os << "WebFeature::kChromeLoadTimesCommitLoadTime";
    case WebFeature::kChromeLoadTimesFinishDocumentLoadTime:
      return os << "WebFeature::kChromeLoadTimesFinishDocumentLoadTime";
    case WebFeature::kChromeLoadTimesFinishLoadTime:
      return os << "WebFeature::kChromeLoadTimesFinishLoadTime";
    case WebFeature::kChromeLoadTimesFirstPaintTime:
      return os << "WebFeature::kChromeLoadTimesFirstPaintTime";
    case WebFeature::kChromeLoadTimesFirstPaintAfterLoadTime:
      return os << "WebFeature::kChromeLoadTimesFirstPaintAfterLoadTime";
    case WebFeature::kChromeLoadTimesNavigationType:
      return os << "WebFeature::kChromeLoadTimesNavigationType";
    case WebFeature::kChromeLoadTimesWasFetchedViaSpdy:
      return os << "WebFeature::kChromeLoadTimesWasFetchedViaSpdy";
    case WebFeature::kChromeLoadTimesWasNpnNegotiated:
      return os << "WebFeature::kChromeLoadTimesWasNpnNegotiated";
    case WebFeature::kChromeLoadTimesNpnNegotiatedProtocol:
      return os << "WebFeature::kChromeLoadTimesNpnNegotiatedProtocol";
    case WebFeature::kChromeLoadTimesWasAlternateProtocolAvailable:
      return os << "WebFeature::kChromeLoadTimesWasAlternateProtocolAvailable";
    case WebFeature::kChromeLoadTimesConnectionInfo:
      return os << "WebFeature::kChromeLoadTimesConnectionInfo";
    case WebFeature::kChromeLoadTimesUnknown:
      return os << "WebFeature::kChromeLoadTimesUnknown";
    case WebFeature::kSVGViewElement:
      return os << "WebFeature::kSVGViewElement";
    case WebFeature::kWebShareShare:
      return os << "WebFeature::kWebShareShare";
    case WebFeature::kAuxclickAddListenerCount:
      return os << "WebFeature::kAuxclickAddListenerCount";
    case WebFeature::kHTMLCanvasElement:
      return os << "WebFeature::kHTMLCanvasElement";
    case WebFeature::kSVGSMILAnimationElementTiming:
      return os << "WebFeature::kSVGSMILAnimationElementTiming";
    case WebFeature::kSVGSMILBeginEndAnimationElement:
      return os << "WebFeature::kSVGSMILBeginEndAnimationElement";
    case WebFeature::kSVGSMILPausing:
      return os << "WebFeature::kSVGSMILPausing";
    case WebFeature::kSVGSMILCurrentTime:
      return os << "WebFeature::kSVGSMILCurrentTime";
    case WebFeature::kHTMLBodyElementOnSelectionChangeAttribute:
      return os << "WebFeature::kHTMLBodyElementOnSelectionChangeAttribute";
    case WebFeature::kForeignFetchInterception:
      return os << "WebFeature::kForeignFetchInterception";
    case WebFeature::kUsbGetDevices:
      return os << "WebFeature::kUsbGetDevices";
    case WebFeature::kUsbRequestDevice:
      return os << "WebFeature::kUsbRequestDevice";
    case WebFeature::kUsbDeviceOpen:
      return os << "WebFeature::kUsbDeviceOpen";
    case WebFeature::kUsbDeviceClose:
      return os << "WebFeature::kUsbDeviceClose";
    case WebFeature::kUsbDeviceSelectConfiguration:
      return os << "WebFeature::kUsbDeviceSelectConfiguration";
    case WebFeature::kUsbDeviceClaimInterface:
      return os << "WebFeature::kUsbDeviceClaimInterface";
    case WebFeature::kUsbDeviceReleaseInterface:
      return os << "WebFeature::kUsbDeviceReleaseInterface";
    case WebFeature::kUsbDeviceSelectAlternateInterface:
      return os << "WebFeature::kUsbDeviceSelectAlternateInterface";
    case WebFeature::kUsbDeviceControlTransferIn:
      return os << "WebFeature::kUsbDeviceControlTransferIn";
    case WebFeature::kUsbDeviceControlTransferOut:
      return os << "WebFeature::kUsbDeviceControlTransferOut";
    case WebFeature::kUsbDeviceClearHalt:
      return os << "WebFeature::kUsbDeviceClearHalt";
    case WebFeature::kUsbDeviceTransferIn:
      return os << "WebFeature::kUsbDeviceTransferIn";
    case WebFeature::kUsbDeviceTransferOut:
      return os << "WebFeature::kUsbDeviceTransferOut";
    case WebFeature::kUsbDeviceIsochronousTransferIn:
      return os << "WebFeature::kUsbDeviceIsochronousTransferIn";
    case WebFeature::kUsbDeviceIsochronousTransferOut:
      return os << "WebFeature::kUsbDeviceIsochronousTransferOut";
    case WebFeature::kUsbDeviceReset:
      return os << "WebFeature::kUsbDeviceReset";
    case WebFeature::kPointerEnterLeaveFired:
      return os << "WebFeature::kPointerEnterLeaveFired";
    case WebFeature::kPointerOverOutFired:
      return os << "WebFeature::kPointerOverOutFired";
    case WebFeature::kDraggableAttribute:
      return os << "WebFeature::kDraggableAttribute";
    case WebFeature::kCleanScriptElementWithNonce:
      return os << "WebFeature::kCleanScriptElementWithNonce";
    case WebFeature::kPotentiallyInjectedScriptElementWithNonce:
      return os << "WebFeature::kPotentiallyInjectedScriptElementWithNonce";
    case WebFeature::kPendingStylesheetAddedAfterBodyStarted:
      return os << "WebFeature::kPendingStylesheetAddedAfterBodyStarted";
    case WebFeature::kUntrustedMouseDownEventDispatchedToSelect:
      return os << "WebFeature::kUntrustedMouseDownEventDispatchedToSelect";
    case WebFeature::kBlockedSniffingAudioToScript:
      return os << "WebFeature::kBlockedSniffingAudioToScript";
    case WebFeature::kBlockedSniffingVideoToScript:
      return os << "WebFeature::kBlockedSniffingVideoToScript";
    case WebFeature::kBlockedSniffingCSVToScript:
      return os << "WebFeature::kBlockedSniffingCSVToScript";
    case WebFeature::kMetaSetCookie:
      return os << "WebFeature::kMetaSetCookie";
    case WebFeature::kMetaRefresh:
      return os << "WebFeature::kMetaRefresh";
    case WebFeature::kMetaSetCookieWhenCSPBlocksInlineScript:
      return os << "WebFeature::kMetaSetCookieWhenCSPBlocksInlineScript";
    case WebFeature::kMetaRefreshWhenCSPBlocksInlineScript:
      return os << "WebFeature::kMetaRefreshWhenCSPBlocksInlineScript";
    case WebFeature::kMiddleClickAutoscrollStart:
      return os << "WebFeature::kMiddleClickAutoscrollStart";
    case WebFeature::kRTCPeerConnectionCreateOfferOptionsOfferToReceive:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferOptionsOfferToReceive";
    case WebFeature::kDragAndDropScrollStart:
      return os << "WebFeature::kDragAndDropScrollStart";
    case WebFeature::kPresentationConnectionListConnectionAvailableEventListener:
      return os << "WebFeature::kPresentationConnectionListConnectionAvailableEventListener";
    case WebFeature::kWebAudioAutoplayCrossOriginIframe:
      return os << "WebFeature::kWebAudioAutoplayCrossOriginIframe";
    case WebFeature::kVRGetDisplays:
      return os << "WebFeature::kVRGetDisplays";
    case WebFeature::kXSSAuditorBlockedScript:
      return os << "WebFeature::kXSSAuditorBlockedScript";
    case WebFeature::kXSSAuditorBlockedEntirePage:
      return os << "WebFeature::kXSSAuditorBlockedEntirePage";
    case WebFeature::kXSSAuditorDisabled:
      return os << "WebFeature::kXSSAuditorDisabled";
    case WebFeature::kXSSAuditorEnabledFilter:
      return os << "WebFeature::kXSSAuditorEnabledFilter";
    case WebFeature::kXSSAuditorEnabledBlock:
      return os << "WebFeature::kXSSAuditorEnabledBlock";
    case WebFeature::kXSSAuditorInvalid:
      return os << "WebFeature::kXSSAuditorInvalid";
    case WebFeature::kTextInputEventOnInput:
      return os << "WebFeature::kTextInputEventOnInput";
    case WebFeature::kTextInputEventOnTextArea:
      return os << "WebFeature::kTextInputEventOnTextArea";
    case WebFeature::kTextInputEventOnContentEditable:
      return os << "WebFeature::kTextInputEventOnContentEditable";
    case WebFeature::kTextInputEventOnNotNode:
      return os << "WebFeature::kTextInputEventOnNotNode";
    case WebFeature::kWebkitBeforeTextInsertedOnInput:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnInput";
    case WebFeature::kWebkitBeforeTextInsertedOnTextArea:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnTextArea";
    case WebFeature::kWebkitBeforeTextInsertedOnContentEditable:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnContentEditable";
    case WebFeature::kWebkitBeforeTextInsertedOnNotNode:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnNotNode";
    case WebFeature::kWebkitEditableContentChangedOnInput:
      return os << "WebFeature::kWebkitEditableContentChangedOnInput";
    case WebFeature::kWebkitEditableContentChangedOnTextArea:
      return os << "WebFeature::kWebkitEditableContentChangedOnTextArea";
    case WebFeature::kWebkitEditableContentChangedOnContentEditable:
      return os << "WebFeature::kWebkitEditableContentChangedOnContentEditable";
    case WebFeature::kWebkitEditableContentChangedOnNotNode:
      return os << "WebFeature::kWebkitEditableContentChangedOnNotNode";
    case WebFeature::kV8NavigatorUserMediaError_ConstraintName_AttributeGetter:
      return os << "WebFeature::kV8NavigatorUserMediaError_ConstraintName_AttributeGetter";
    case WebFeature::kV8HTMLMediaElement_SrcObject_AttributeGetter:
      return os << "WebFeature::kV8HTMLMediaElement_SrcObject_AttributeGetter";
    case WebFeature::kV8HTMLMediaElement_SrcObject_AttributeSetter:
      return os << "WebFeature::kV8HTMLMediaElement_SrcObject_AttributeSetter";
    case WebFeature::kCreateObjectURLBlob:
      return os << "WebFeature::kCreateObjectURLBlob";
    case WebFeature::kCreateObjectURLMediaSource:
      return os << "WebFeature::kCreateObjectURLMediaSource";
    case WebFeature::kCreateObjectURLMediaStream:
      return os << "WebFeature::kCreateObjectURLMediaStream";
    case WebFeature::kLongTaskObserver:
      return os << "WebFeature::kLongTaskObserver";
    case WebFeature::kCSSOffsetInEffect:
      return os << "WebFeature::kCSSOffsetInEffect";
    case WebFeature::kVRGetDisplaysInsecureOrigin:
      return os << "WebFeature::kVRGetDisplaysInsecureOrigin";
    case WebFeature::kVRRequestPresent:
      return os << "WebFeature::kVRRequestPresent";
    case WebFeature::kVRRequestPresentInsecureOrigin:
      return os << "WebFeature::kVRRequestPresentInsecureOrigin";
    case WebFeature::kVRDeprecatedFieldOfView:
      return os << "WebFeature::kVRDeprecatedFieldOfView";
    case WebFeature::kVideoInCanvas:
      return os << "WebFeature::kVideoInCanvas";
    case WebFeature::kHiddenAutoplayedVideoInCanvas:
      return os << "WebFeature::kHiddenAutoplayedVideoInCanvas";
    case WebFeature::kOffscreenCanvas:
      return os << "WebFeature::kOffscreenCanvas";
    case WebFeature::kGamepadPose:
      return os << "WebFeature::kGamepadPose";
    case WebFeature::kGamepadHand:
      return os << "WebFeature::kGamepadHand";
    case WebFeature::kGamepadDisplayId:
      return os << "WebFeature::kGamepadDisplayId";
    case WebFeature::kGamepadButtonTouched:
      return os << "WebFeature::kGamepadButtonTouched";
    case WebFeature::kGamepadPoseHasOrientation:
      return os << "WebFeature::kGamepadPoseHasOrientation";
    case WebFeature::kGamepadPoseHasPosition:
      return os << "WebFeature::kGamepadPoseHasPosition";
    case WebFeature::kGamepadPosePosition:
      return os << "WebFeature::kGamepadPosePosition";
    case WebFeature::kGamepadPoseLinearVelocity:
      return os << "WebFeature::kGamepadPoseLinearVelocity";
    case WebFeature::kGamepadPoseLinearAcceleration:
      return os << "WebFeature::kGamepadPoseLinearAcceleration";
    case WebFeature::kGamepadPoseOrientation:
      return os << "WebFeature::kGamepadPoseOrientation";
    case WebFeature::kGamepadPoseAngularVelocity:
      return os << "WebFeature::kGamepadPoseAngularVelocity";
    case WebFeature::kGamepadPoseAngularAcceleration:
      return os << "WebFeature::kGamepadPoseAngularAcceleration";
    case WebFeature::kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter:
      return os << "WebFeature::kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter";
    case WebFeature::kV8RTCDataChannel_MaxRetransmits_AttributeGetter:
      return os << "WebFeature::kV8RTCDataChannel_MaxRetransmits_AttributeGetter";
    case WebFeature::kV8RTCDataChannel_Reliable_AttributeGetter:
      return os << "WebFeature::kV8RTCDataChannel_Reliable_AttributeGetter";
    case WebFeature::kV8RTCPeerConnection_AddStream_Method:
      return os << "WebFeature::kV8RTCPeerConnection_AddStream_Method";
    case WebFeature::kV8RTCPeerConnection_CreateDTMFSender_Method:
      return os << "WebFeature::kV8RTCPeerConnection_CreateDTMFSender_Method";
    case WebFeature::kV8RTCPeerConnection_GetLocalStreams_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetLocalStreams_Method";
    case WebFeature::kV8RTCPeerConnection_GetRemoteStreams_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetRemoteStreams_Method";
    case WebFeature::kV8RTCPeerConnection_RemoveStream_Method:
      return os << "WebFeature::kV8RTCPeerConnection_RemoveStream_Method";
    case WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmitTime:
      return os << "WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmitTime";
    case WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmits:
      return os << "WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmits";
    case WebFeature::kAudioContextCreateConstantSource:
      return os << "WebFeature::kAudioContextCreateConstantSource";
    case WebFeature::kWebAudioConstantSourceNode:
      return os << "WebFeature::kWebAudioConstantSourceNode";
    case WebFeature::kLoopbackEmbeddedInSecureContext:
      return os << "WebFeature::kLoopbackEmbeddedInSecureContext";
    case WebFeature::kLoopbackEmbeddedInNonSecureContext:
      return os << "WebFeature::kLoopbackEmbeddedInNonSecureContext";
    case WebFeature::kBlinkMacSystemFont:
      return os << "WebFeature::kBlinkMacSystemFont";
    case WebFeature::kRTCIceServerURL:
      return os << "WebFeature::kRTCIceServerURL";
    case WebFeature::kRTCIceServerURLs:
      return os << "WebFeature::kRTCIceServerURLs";
    case WebFeature::kOffscreenCanvasTransferToImageBitmap2D:
      return os << "WebFeature::kOffscreenCanvasTransferToImageBitmap2D";
    case WebFeature::kOffscreenCanvasTransferToImageBitmapWebGL:
      return os << "WebFeature::kOffscreenCanvasTransferToImageBitmapWebGL";
    case WebFeature::kOffscreenCanvasCommit2D:
      return os << "WebFeature::kOffscreenCanvasCommit2D";
    case WebFeature::kOffscreenCanvasCommitWebGL:
      return os << "WebFeature::kOffscreenCanvasCommitWebGL";
    case WebFeature::kRTCConfigurationIceTransportPolicy:
      return os << "WebFeature::kRTCConfigurationIceTransportPolicy";
    case WebFeature::kRTCConfigurationIceTransports:
      return os << "WebFeature::kRTCConfigurationIceTransports";
    case WebFeature::kDocumentFullscreenElementInV0Shadow:
      return os << "WebFeature::kDocumentFullscreenElementInV0Shadow";
    case WebFeature::kScriptWithCSPBypassingSchemeParserInserted:
      return os << "WebFeature::kScriptWithCSPBypassingSchemeParserInserted";
    case WebFeature::kScriptWithCSPBypassingSchemeNotParserInserted:
      return os << "WebFeature::kScriptWithCSPBypassingSchemeNotParserInserted";
    case WebFeature::kDocumentCreateElement2ndArgStringHandling:
      return os << "WebFeature::kDocumentCreateElement2ndArgStringHandling";
    case WebFeature::kV8MediaRecorder_Start_Method:
      return os << "WebFeature::kV8MediaRecorder_Start_Method";
    case WebFeature::kWebBluetoothRequestDevice:
      return os << "WebFeature::kWebBluetoothRequestDevice";
    case WebFeature::kUnitlessPerspectiveInPerspectiveProperty:
      return os << "WebFeature::kUnitlessPerspectiveInPerspectiveProperty";
    case WebFeature::kUnitlessPerspectiveInTransformProperty:
      return os << "WebFeature::kUnitlessPerspectiveInTransformProperty";
    case WebFeature::kV8RTCSessionDescription_Type_AttributeGetter:
      return os << "WebFeature::kV8RTCSessionDescription_Type_AttributeGetter";
    case WebFeature::kV8RTCSessionDescription_Type_AttributeSetter:
      return os << "WebFeature::kV8RTCSessionDescription_Type_AttributeSetter";
    case WebFeature::kV8RTCSessionDescription_Sdp_AttributeGetter:
      return os << "WebFeature::kV8RTCSessionDescription_Sdp_AttributeGetter";
    case WebFeature::kV8RTCSessionDescription_Sdp_AttributeSetter:
      return os << "WebFeature::kV8RTCSessionDescription_Sdp_AttributeSetter";
    case WebFeature::kRTCSessionDescriptionInitNoType:
      return os << "WebFeature::kRTCSessionDescriptionInitNoType";
    case WebFeature::kRTCSessionDescriptionInitNoSdp:
      return os << "WebFeature::kRTCSessionDescriptionInitNoSdp";
    case WebFeature::kHTMLMediaElementPreloadForcedMetadata:
      return os << "WebFeature::kHTMLMediaElementPreloadForcedMetadata";
    case WebFeature::kGenericSensorStart:
      return os << "WebFeature::kGenericSensorStart";
    case WebFeature::kGenericSensorStop:
      return os << "WebFeature::kGenericSensorStop";
    case WebFeature::kTouchEventPreventedNoTouchAction:
      return os << "WebFeature::kTouchEventPreventedNoTouchAction";
    case WebFeature::kTouchEventPreventedForcedDocumentPassiveNoTouchAction:
      return os << "WebFeature::kTouchEventPreventedForcedDocumentPassiveNoTouchAction";
    case WebFeature::kV8Event_StopPropagation_Method:
      return os << "WebFeature::kV8Event_StopPropagation_Method";
    case WebFeature::kV8Event_StopImmediatePropagation_Method:
      return os << "WebFeature::kV8Event_StopImmediatePropagation_Method";
    case WebFeature::kImageCaptureConstructor:
      return os << "WebFeature::kImageCaptureConstructor";
    case WebFeature::kV8Document_RootScroller_AttributeGetter:
      return os << "WebFeature::kV8Document_RootScroller_AttributeGetter";
    case WebFeature::kV8Document_RootScroller_AttributeSetter:
      return os << "WebFeature::kV8Document_RootScroller_AttributeSetter";
    case WebFeature::kCustomElementRegistryDefine:
      return os << "WebFeature::kCustomElementRegistryDefine";
    case WebFeature::kLinkHeaderServiceWorker:
      return os << "WebFeature::kLinkHeaderServiceWorker";
    case WebFeature::kCSSShadowPiercingDescendantCombinator:
      return os << "WebFeature::kCSSShadowPiercingDescendantCombinator";
    case WebFeature::kCSSFlexibleBox:
      return os << "WebFeature::kCSSFlexibleBox";
    case WebFeature::kCSSGridLayout:
      return os << "WebFeature::kCSSGridLayout";
    case WebFeature::kFullscreenAllowedByOrientationChange:
      return os << "WebFeature::kFullscreenAllowedByOrientationChange";
    case WebFeature::kServiceWorkerRespondToNavigationRequestWithRedirectedResponse:
      return os << "WebFeature::kServiceWorkerRespondToNavigationRequestWithRedirectedResponse";
    case WebFeature::kV8AudioContext_Constructor:
      return os << "WebFeature::kV8AudioContext_Constructor";
    case WebFeature::kV8OfflineAudioContext_Constructor:
      return os << "WebFeature::kV8OfflineAudioContext_Constructor";
    case WebFeature::kAppInstalledEventAddListener:
      return os << "WebFeature::kAppInstalledEventAddListener";
    case WebFeature::kAudioContextGetOutputTimestamp:
      return os << "WebFeature::kAudioContextGetOutputTimestamp";
    case WebFeature::kV8MediaStreamAudioDestinationNode_Constructor:
      return os << "WebFeature::kV8MediaStreamAudioDestinationNode_Constructor";
    case WebFeature::kV8AnalyserNode_Constructor:
      return os << "WebFeature::kV8AnalyserNode_Constructor";
    case WebFeature::kV8AudioBuffer_Constructor:
      return os << "WebFeature::kV8AudioBuffer_Constructor";
    case WebFeature::kV8AudioBufferSourceNode_Constructor:
      return os << "WebFeature::kV8AudioBufferSourceNode_Constructor";
    case WebFeature::kV8AudioProcessingEvent_Constructor:
      return os << "WebFeature::kV8AudioProcessingEvent_Constructor";
    case WebFeature::kV8BiquadFilterNode_Constructor:
      return os << "WebFeature::kV8BiquadFilterNode_Constructor";
    case WebFeature::kV8ChannelMergerNode_Constructor:
      return os << "WebFeature::kV8ChannelMergerNode_Constructor";
    case WebFeature::kV8ChannelSplitterNode_Constructor:
      return os << "WebFeature::kV8ChannelSplitterNode_Constructor";
    case WebFeature::kV8ConstantSourceNode_Constructor:
      return os << "WebFeature::kV8ConstantSourceNode_Constructor";
    case WebFeature::kV8ConvolverNode_Constructor:
      return os << "WebFeature::kV8ConvolverNode_Constructor";
    case WebFeature::kV8DelayNode_Constructor:
      return os << "WebFeature::kV8DelayNode_Constructor";
    case WebFeature::kV8DynamicsCompressorNode_Constructor:
      return os << "WebFeature::kV8DynamicsCompressorNode_Constructor";
    case WebFeature::kV8GainNode_Constructor:
      return os << "WebFeature::kV8GainNode_Constructor";
    case WebFeature::kV8IIRFilterNode_Constructor:
      return os << "WebFeature::kV8IIRFilterNode_Constructor";
    case WebFeature::kV8MediaElementAudioSourceNode_Constructor:
      return os << "WebFeature::kV8MediaElementAudioSourceNode_Constructor";
    case WebFeature::kV8MediaStreamAudioSourceNode_Constructor:
      return os << "WebFeature::kV8MediaStreamAudioSourceNode_Constructor";
    case WebFeature::kV8OfflineAudioCompletionEvent_Constructor:
      return os << "WebFeature::kV8OfflineAudioCompletionEvent_Constructor";
    case WebFeature::kV8OscillatorNode_Constructor:
      return os << "WebFeature::kV8OscillatorNode_Constructor";
    case WebFeature::kV8PannerNode_Constructor:
      return os << "WebFeature::kV8PannerNode_Constructor";
    case WebFeature::kV8PeriodicWave_Constructor:
      return os << "WebFeature::kV8PeriodicWave_Constructor";
    case WebFeature::kV8StereoPannerNode_Constructor:
      return os << "WebFeature::kV8StereoPannerNode_Constructor";
    case WebFeature::kV8WaveShaperNode_Constructor:
      return os << "WebFeature::kV8WaveShaperNode_Constructor";
    case WebFeature::kV8Headers_GetAll_Method:
      return os << "WebFeature::kV8Headers_GetAll_Method";
    case WebFeature::kNavigatorVibrateEngagementNone:
      return os << "WebFeature::kNavigatorVibrateEngagementNone";
    case WebFeature::kNavigatorVibrateEngagementMinimal:
      return os << "WebFeature::kNavigatorVibrateEngagementMinimal";
    case WebFeature::kNavigatorVibrateEngagementLow:
      return os << "WebFeature::kNavigatorVibrateEngagementLow";
    case WebFeature::kNavigatorVibrateEngagementMedium:
      return os << "WebFeature::kNavigatorVibrateEngagementMedium";
    case WebFeature::kNavigatorVibrateEngagementHigh:
      return os << "WebFeature::kNavigatorVibrateEngagementHigh";
    case WebFeature::kNavigatorVibrateEngagementMax:
      return os << "WebFeature::kNavigatorVibrateEngagementMax";
    case WebFeature::kAlertEngagementNone:
      return os << "WebFeature::kAlertEngagementNone";
    case WebFeature::kAlertEngagementMinimal:
      return os << "WebFeature::kAlertEngagementMinimal";
    case WebFeature::kAlertEngagementLow:
      return os << "WebFeature::kAlertEngagementLow";
    case WebFeature::kAlertEngagementMedium:
      return os << "WebFeature::kAlertEngagementMedium";
    case WebFeature::kAlertEngagementHigh:
      return os << "WebFeature::kAlertEngagementHigh";
    case WebFeature::kAlertEngagementMax:
      return os << "WebFeature::kAlertEngagementMax";
    case WebFeature::kConfirmEngagementNone:
      return os << "WebFeature::kConfirmEngagementNone";
    case WebFeature::kConfirmEngagementMinimal:
      return os << "WebFeature::kConfirmEngagementMinimal";
    case WebFeature::kConfirmEngagementLow:
      return os << "WebFeature::kConfirmEngagementLow";
    case WebFeature::kConfirmEngagementMedium:
      return os << "WebFeature::kConfirmEngagementMedium";
    case WebFeature::kConfirmEngagementHigh:
      return os << "WebFeature::kConfirmEngagementHigh";
    case WebFeature::kConfirmEngagementMax:
      return os << "WebFeature::kConfirmEngagementMax";
    case WebFeature::kPromptEngagementNone:
      return os << "WebFeature::kPromptEngagementNone";
    case WebFeature::kPromptEngagementMinimal:
      return os << "WebFeature::kPromptEngagementMinimal";
    case WebFeature::kPromptEngagementLow:
      return os << "WebFeature::kPromptEngagementLow";
    case WebFeature::kPromptEngagementMedium:
      return os << "WebFeature::kPromptEngagementMedium";
    case WebFeature::kPromptEngagementHigh:
      return os << "WebFeature::kPromptEngagementHigh";
    case WebFeature::kPromptEngagementMax:
      return os << "WebFeature::kPromptEngagementMax";
    case WebFeature::kTopNavInSandbox:
      return os << "WebFeature::kTopNavInSandbox";
    case WebFeature::kTopNavInSandboxWithoutGesture:
      return os << "WebFeature::kTopNavInSandboxWithoutGesture";
    case WebFeature::kTopNavInSandboxWithPerm:
      return os << "WebFeature::kTopNavInSandboxWithPerm";
    case WebFeature::kTopNavInSandboxWithPermButNoGesture:
      return os << "WebFeature::kTopNavInSandboxWithPermButNoGesture";
    case WebFeature::kReferrerPolicyHeader:
      return os << "WebFeature::kReferrerPolicyHeader";
    case WebFeature::kHTMLAnchorElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLAnchorElementReferrerPolicyAttribute";
    case WebFeature::kHTMLIFrameElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLIFrameElementReferrerPolicyAttribute";
    case WebFeature::kHTMLImageElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLImageElementReferrerPolicyAttribute";
    case WebFeature::kHTMLLinkElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLLinkElementReferrerPolicyAttribute";
    case WebFeature::kBaseElement:
      return os << "WebFeature::kBaseElement";
    case WebFeature::kBaseWithCrossOriginHref:
      return os << "WebFeature::kBaseWithCrossOriginHref";
    case WebFeature::kBaseWithDataHref:
      return os << "WebFeature::kBaseWithDataHref";
    case WebFeature::kBaseWithNewlinesInTarget:
      return os << "WebFeature::kBaseWithNewlinesInTarget";
    case WebFeature::kBaseWithOpenBracketInTarget:
      return os << "WebFeature::kBaseWithOpenBracketInTarget";
    case WebFeature::kBaseWouldBeBlockedByDefaultSrc:
      return os << "WebFeature::kBaseWouldBeBlockedByDefaultSrc";
    case WebFeature::kV8AssigmentExpressionLHSIsCallInSloppy:
      return os << "WebFeature::kV8AssigmentExpressionLHSIsCallInSloppy";
    case WebFeature::kV8AssigmentExpressionLHSIsCallInStrict:
      return os << "WebFeature::kV8AssigmentExpressionLHSIsCallInStrict";
    case WebFeature::kV8PromiseConstructorReturnedUndefined:
      return os << "WebFeature::kV8PromiseConstructorReturnedUndefined";
    case WebFeature::kFormSubmittedWithUnclosedFormControl:
      return os << "WebFeature::kFormSubmittedWithUnclosedFormControl";
    case WebFeature::kScrollbarUseVerticalScrollbarButton:
      return os << "WebFeature::kScrollbarUseVerticalScrollbarButton";
    case WebFeature::kScrollbarUseVerticalScrollbarThumb:
      return os << "WebFeature::kScrollbarUseVerticalScrollbarThumb";
    case WebFeature::kScrollbarUseVerticalScrollbarTrack:
      return os << "WebFeature::kScrollbarUseVerticalScrollbarTrack";
    case WebFeature::kScrollbarUseHorizontalScrollbarButton:
      return os << "WebFeature::kScrollbarUseHorizontalScrollbarButton";
    case WebFeature::kScrollbarUseHorizontalScrollbarThumb:
      return os << "WebFeature::kScrollbarUseHorizontalScrollbarThumb";
    case WebFeature::kScrollbarUseHorizontalScrollbarTrack:
      return os << "WebFeature::kScrollbarUseHorizontalScrollbarTrack";
    case WebFeature::kHTMLTableCellElementColspan:
      return os << "WebFeature::kHTMLTableCellElementColspan";
    case WebFeature::kHTMLTableCellElementColspanGreaterThan1000:
      return os << "WebFeature::kHTMLTableCellElementColspanGreaterThan1000";
    case WebFeature::kHTMLTableCellElementColspanGreaterThan8190:
      return os << "WebFeature::kHTMLTableCellElementColspanGreaterThan8190";
    case WebFeature::kSelectionAddRangeIntersect:
      return os << "WebFeature::kSelectionAddRangeIntersect";
    case WebFeature::kPostMessageFromInsecureToSecureToplevel:
      return os << "WebFeature::kPostMessageFromInsecureToSecureToplevel";
    case WebFeature::kV8MediaSession_Metadata_AttributeGetter:
      return os << "WebFeature::kV8MediaSession_Metadata_AttributeGetter";
    case WebFeature::kV8MediaSession_Metadata_AttributeSetter:
      return os << "WebFeature::kV8MediaSession_Metadata_AttributeSetter";
    case WebFeature::kV8MediaSession_PlaybackState_AttributeGetter:
      return os << "WebFeature::kV8MediaSession_PlaybackState_AttributeGetter";
    case WebFeature::kV8MediaSession_PlaybackState_AttributeSetter:
      return os << "WebFeature::kV8MediaSession_PlaybackState_AttributeSetter";
    case WebFeature::kV8MediaSession_SetActionHandler_Method:
      return os << "WebFeature::kV8MediaSession_SetActionHandler_Method";
    case WebFeature::kWebNFCPush:
      return os << "WebFeature::kWebNFCPush";
    case WebFeature::kWebNFCCancelPush:
      return os << "WebFeature::kWebNFCCancelPush";
    case WebFeature::kWebNFCWatch:
      return os << "WebFeature::kWebNFCWatch";
    case WebFeature::kWebNFCCancelWatch:
      return os << "WebFeature::kWebNFCCancelWatch";
    case WebFeature::kAudioParamCancelAndHoldAtTime:
      return os << "WebFeature::kAudioParamCancelAndHoldAtTime";
    case WebFeature::kCSSValueUserModifyReadOnly:
      return os << "WebFeature::kCSSValueUserModifyReadOnly";
    case WebFeature::kCSSValueUserModifyReadWrite:
      return os << "WebFeature::kCSSValueUserModifyReadWrite";
    case WebFeature::kCSSValueUserModifyReadWritePlaintextOnly:
      return os << "WebFeature::kCSSValueUserModifyReadWritePlaintextOnly";
    case WebFeature::kCSSValueOnDemand:
      return os << "WebFeature::kCSSValueOnDemand";
    case WebFeature::kServiceWorkerNavigationPreload:
      return os << "WebFeature::kServiceWorkerNavigationPreload";
    case WebFeature::kFullscreenRequestWithPendingElement:
      return os << "WebFeature::kFullscreenRequestWithPendingElement";
    case WebFeature::kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad:
      return os << "WebFeature::kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad";
    case WebFeature::kPointerEventSetCaptureOutsideDispatch:
      return os << "WebFeature::kPointerEventSetCaptureOutsideDispatch";
    case WebFeature::kNotificationPermissionRequestedInsecureOrigin:
      return os << "WebFeature::kNotificationPermissionRequestedInsecureOrigin";
    case WebFeature::kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method";
    case WebFeature::kV8DeprecatedStorageInfo_RequestQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageInfo_RequestQuota_Method";
    case WebFeature::kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method";
    case WebFeature::kV8DeprecatedStorageQuota_RequestQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageQuota_RequestQuota_Method";
    case WebFeature::kV8FileReaderSync_Constructor:
      return os << "WebFeature::kV8FileReaderSync_Constructor";
    case WebFeature::kV8HTMLVideoElement_Poster_AttributeGetter:
      return os << "WebFeature::kV8HTMLVideoElement_Poster_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_Poster_AttributeSetter:
      return os << "WebFeature::kV8HTMLVideoElement_Poster_AttributeSetter";
    case WebFeature::kNotificationPermissionRequestedIframe:
      return os << "WebFeature::kNotificationPermissionRequestedIframe";
    case WebFeature::kPresentationReceiverInsecureOrigin:
      return os << "WebFeature::kPresentationReceiverInsecureOrigin";
    case WebFeature::kPresentationReceiverSecureOrigin:
      return os << "WebFeature::kPresentationReceiverSecureOrigin";
    case WebFeature::kPresentationRequestInsecureOrigin:
      return os << "WebFeature::kPresentationRequestInsecureOrigin";
    case WebFeature::kPresentationRequestSecureOrigin:
      return os << "WebFeature::kPresentationRequestSecureOrigin";
    case WebFeature::kRtcpMuxPolicyNegotiate:
      return os << "WebFeature::kRtcpMuxPolicyNegotiate";
    case WebFeature::kDOMClobberedVariableAccessed:
      return os << "WebFeature::kDOMClobberedVariableAccessed";
    case WebFeature::kHTMLDocumentCreateProcessingInstruction:
      return os << "WebFeature::kHTMLDocumentCreateProcessingInstruction";
    case WebFeature::kFetchResponseConstructionWithStream:
      return os << "WebFeature::kFetchResponseConstructionWithStream";
    case WebFeature::kLocationOrigin:
      return os << "WebFeature::kLocationOrigin";
    case WebFeature::kDocumentOrigin:
      return os << "WebFeature::kDocumentOrigin";
    case WebFeature::kCanvas2DFilter:
      return os << "WebFeature::kCanvas2DFilter";
    case WebFeature::kCanvas2DImageSmoothingQuality:
      return os << "WebFeature::kCanvas2DImageSmoothingQuality";
    case WebFeature::kCanvasToBlob:
      return os << "WebFeature::kCanvasToBlob";
    case WebFeature::kCanvasToDataURL:
      return os << "WebFeature::kCanvasToDataURL";
    case WebFeature::kOffscreenCanvasConvertToBlob:
      return os << "WebFeature::kOffscreenCanvasConvertToBlob";
    case WebFeature::kSVGInCanvas2D:
      return os << "WebFeature::kSVGInCanvas2D";
    case WebFeature::kSVGInWebGL:
      return os << "WebFeature::kSVGInWebGL";
    case WebFeature::kSelectionFuncionsChangeFocus:
      return os << "WebFeature::kSelectionFuncionsChangeFocus";
    case WebFeature::kHTMLObjectElementGetter:
      return os << "WebFeature::kHTMLObjectElementGetter";
    case WebFeature::kHTMLObjectElementSetter:
      return os << "WebFeature::kHTMLObjectElementSetter";
    case WebFeature::kHTMLEmbedElementGetter:
      return os << "WebFeature::kHTMLEmbedElementGetter";
    case WebFeature::kHTMLEmbedElementSetter:
      return os << "WebFeature::kHTMLEmbedElementSetter";
    case WebFeature::kTransformUsesBoxSizeOnSVG:
      return os << "WebFeature::kTransformUsesBoxSizeOnSVG";
    case WebFeature::kScrollByKeyboardArrowKeys:
      return os << "WebFeature::kScrollByKeyboardArrowKeys";
    case WebFeature::kScrollByKeyboardPageUpDownKeys:
      return os << "WebFeature::kScrollByKeyboardPageUpDownKeys";
    case WebFeature::kScrollByKeyboardHomeEndKeys:
      return os << "WebFeature::kScrollByKeyboardHomeEndKeys";
    case WebFeature::kScrollByKeyboardSpacebarKey:
      return os << "WebFeature::kScrollByKeyboardSpacebarKey";
    case WebFeature::kScrollByTouch:
      return os << "WebFeature::kScrollByTouch";
    case WebFeature::kScrollByWheel:
      return os << "WebFeature::kScrollByWheel";
    case WebFeature::kScheduledActionIgnored:
      return os << "WebFeature::kScheduledActionIgnored";
    case WebFeature::kGetCanvas2DContextAttributes:
      return os << "WebFeature::kGetCanvas2DContextAttributes";
    case WebFeature::kV8HTMLInputElement_Capture_AttributeGetter:
      return os << "WebFeature::kV8HTMLInputElement_Capture_AttributeGetter";
    case WebFeature::kV8HTMLInputElement_Capture_AttributeSetter:
      return os << "WebFeature::kV8HTMLInputElement_Capture_AttributeSetter";
    case WebFeature::kHTMLMediaElementControlsListAttribute:
      return os << "WebFeature::kHTMLMediaElementControlsListAttribute";
    case WebFeature::kHTMLMediaElementControlsListNoDownload:
      return os << "WebFeature::kHTMLMediaElementControlsListNoDownload";
    case WebFeature::kHTMLMediaElementControlsListNoFullscreen:
      return os << "WebFeature::kHTMLMediaElementControlsListNoFullscreen";
    case WebFeature::kHTMLMediaElementControlsListNoRemotePlayback:
      return os << "WebFeature::kHTMLMediaElementControlsListNoRemotePlayback";
    case WebFeature::kPointerEventClickRetargetCausedByCapture:
      return os << "WebFeature::kPointerEventClickRetargetCausedByCapture";
    case WebFeature::kVRDisplayDisplayName:
      return os << "WebFeature::kVRDisplayDisplayName";
    case WebFeature::kVREyeParametersOffset:
      return os << "WebFeature::kVREyeParametersOffset";
    case WebFeature::kVRPoseLinearVelocity:
      return os << "WebFeature::kVRPoseLinearVelocity";
    case WebFeature::kVRPoseLinearAcceleration:
      return os << "WebFeature::kVRPoseLinearAcceleration";
    case WebFeature::kVRPoseAngularVelocity:
      return os << "WebFeature::kVRPoseAngularVelocity";
    case WebFeature::kVRPoseAngularAcceleration:
      return os << "WebFeature::kVRPoseAngularAcceleration";
    case WebFeature::kCSSOverflowPaged:
      return os << "WebFeature::kCSSOverflowPaged";
    case WebFeature::kChildSrcAllowedWorkerThatScriptSrcBlocked:
      return os << "WebFeature::kChildSrcAllowedWorkerThatScriptSrcBlocked";
    case WebFeature::kHTMLTableElementPresentationAttributeBackground:
      return os << "WebFeature::kHTMLTableElementPresentationAttributeBackground";
    case WebFeature::kV8Navigator_GetInstalledRelatedApps_Method:
      return os << "WebFeature::kV8Navigator_GetInstalledRelatedApps_Method";
    case WebFeature::kNamedAccessOnWindow_ChildBrowsingContext:
      return os << "WebFeature::kNamedAccessOnWindow_ChildBrowsingContext";
    case WebFeature::kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch:
      return os << "WebFeature::kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch";
    case WebFeature::kV0CustomElementsRegisterHTMLCustomTag:
      return os << "WebFeature::kV0CustomElementsRegisterHTMLCustomTag";
    case WebFeature::kV0CustomElementsRegisterHTMLTypeExtension:
      return os << "WebFeature::kV0CustomElementsRegisterHTMLTypeExtension";
    case WebFeature::kV0CustomElementsRegisterSVGElement:
      return os << "WebFeature::kV0CustomElementsRegisterSVGElement";
    case WebFeature::kV0CustomElementsRegisterEmbedderElement:
      return os << "WebFeature::kV0CustomElementsRegisterEmbedderElement";
    case WebFeature::kV0CustomElementsCreateCustomTagElement:
      return os << "WebFeature::kV0CustomElementsCreateCustomTagElement";
    case WebFeature::kV0CustomElementsCreateTypeExtensionElement:
      return os << "WebFeature::kV0CustomElementsCreateTypeExtensionElement";
    case WebFeature::kV0CustomElementsConstruct:
      return os << "WebFeature::kV0CustomElementsConstruct";
    case WebFeature::kV8IDBObserver_Observe_Method:
      return os << "WebFeature::kV8IDBObserver_Observe_Method";
    case WebFeature::kV8IDBObserver_Unobserve_Method:
      return os << "WebFeature::kV8IDBObserver_Unobserve_Method";
    case WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptor:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptor";
    case WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptors:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptors";
    case WebFeature::kWebBluetoothRemoteCharacteristicReadValue:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicReadValue";
    case WebFeature::kWebBluetoothRemoteCharacteristicWriteValue:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicWriteValue";
    case WebFeature::kWebBluetoothRemoteCharacteristicStartNotifications:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicStartNotifications";
    case WebFeature::kWebBluetoothRemoteCharacteristicStopNotifications:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicStopNotifications";
    case WebFeature::kWebBluetoothRemoteDescriptorReadValue:
      return os << "WebFeature::kWebBluetoothRemoteDescriptorReadValue";
    case WebFeature::kWebBluetoothRemoteDescriptorWriteValue:
      return os << "WebFeature::kWebBluetoothRemoteDescriptorWriteValue";
    case WebFeature::kWebBluetoothRemoteServerConnect:
      return os << "WebFeature::kWebBluetoothRemoteServerConnect";
    case WebFeature::kWebBluetoothRemoteServerDisconnect:
      return os << "WebFeature::kWebBluetoothRemoteServerDisconnect";
    case WebFeature::kWebBluetoothRemoteServerGetPrimaryService:
      return os << "WebFeature::kWebBluetoothRemoteServerGetPrimaryService";
    case WebFeature::kWebBluetoothRemoteServerGetPrimaryServices:
      return os << "WebFeature::kWebBluetoothRemoteServerGetPrimaryServices";
    case WebFeature::kWebBluetoothRemoteServiceGetCharacteristic:
      return os << "WebFeature::kWebBluetoothRemoteServiceGetCharacteristic";
    case WebFeature::kWebBluetoothRemoteServiceGetCharacteristics:
      return os << "WebFeature::kWebBluetoothRemoteServiceGetCharacteristics";
    case WebFeature::kHTMLContentElement:
      return os << "WebFeature::kHTMLContentElement";
    case WebFeature::kHTMLShadowElement:
      return os << "WebFeature::kHTMLShadowElement";
    case WebFeature::kHTMLSlotElement:
      return os << "WebFeature::kHTMLSlotElement";
    case WebFeature::kAccelerometerConstructor:
      return os << "WebFeature::kAccelerometerConstructor";
    case WebFeature::kAbsoluteOrientationSensorConstructor:
      return os << "WebFeature::kAbsoluteOrientationSensorConstructor";
    case WebFeature::kAmbientLightSensorConstructor:
      return os << "WebFeature::kAmbientLightSensorConstructor";
    case WebFeature::kGenericSensorOnActivate:
      return os << "WebFeature::kGenericSensorOnActivate";
    case WebFeature::kGenericSensorOnChange:
      return os << "WebFeature::kGenericSensorOnChange";
    case WebFeature::kGenericSensorOnError:
      return os << "WebFeature::kGenericSensorOnError";
    case WebFeature::kGenericSensorActivated:
      return os << "WebFeature::kGenericSensorActivated";
    case WebFeature::kGyroscopeConstructor:
      return os << "WebFeature::kGyroscopeConstructor";
    case WebFeature::kMagnetometerConstructor:
      return os << "WebFeature::kMagnetometerConstructor";
    case WebFeature::kOrientationSensorPopulateMatrix:
      return os << "WebFeature::kOrientationSensorPopulateMatrix";
    case WebFeature::kWindowOpenWithInvalidURL:
      return os << "WebFeature::kWindowOpenWithInvalidURL";
    case WebFeature::kCrossOriginMainFrameNulledNameAccessed:
      return os << "WebFeature::kCrossOriginMainFrameNulledNameAccessed";
    case WebFeature::kMenuItemElementIconAttribute:
      return os << "WebFeature::kMenuItemElementIconAttribute";
    case WebFeature::kWebkitCSSMatrixSetMatrixValue:
      return os << "WebFeature::kWebkitCSSMatrixSetMatrixValue";
    case WebFeature::kWebkitCSSMatrixConstructFromString:
      return os << "WebFeature::kWebkitCSSMatrixConstructFromString";
    case WebFeature::kCanRequestURLHTTPContainingNewline:
      return os << "WebFeature::kCanRequestURLHTTPContainingNewline";
    case WebFeature::kGetGamepads:
      return os << "WebFeature::kGetGamepads";
    case WebFeature::kMediaStreamConstraintsAudio:
      return os << "WebFeature::kMediaStreamConstraintsAudio";
    case WebFeature::kMediaStreamConstraintsAudioUnconstrained:
      return os << "WebFeature::kMediaStreamConstraintsAudioUnconstrained";
    case WebFeature::kMediaStreamConstraintsVideo:
      return os << "WebFeature::kMediaStreamConstraintsVideo";
    case WebFeature::kMediaStreamConstraintsVideoUnconstrained:
      return os << "WebFeature::kMediaStreamConstraintsVideoUnconstrained";
    case WebFeature::kMediaStreamConstraintsWidth:
      return os << "WebFeature::kMediaStreamConstraintsWidth";
    case WebFeature::kMediaStreamConstraintsHeight:
      return os << "WebFeature::kMediaStreamConstraintsHeight";
    case WebFeature::kMediaStreamConstraintsAspectRatio:
      return os << "WebFeature::kMediaStreamConstraintsAspectRatio";
    case WebFeature::kMediaStreamConstraintsFrameRate:
      return os << "WebFeature::kMediaStreamConstraintsFrameRate";
    case WebFeature::kMediaStreamConstraintsFacingMode:
      return os << "WebFeature::kMediaStreamConstraintsFacingMode";
    case WebFeature::kMediaStreamConstraintsVolume:
      return os << "WebFeature::kMediaStreamConstraintsVolume";
    case WebFeature::kMediaStreamConstraintsSampleRate:
      return os << "WebFeature::kMediaStreamConstraintsSampleRate";
    case WebFeature::kMediaStreamConstraintsSampleSize:
      return os << "WebFeature::kMediaStreamConstraintsSampleSize";
    case WebFeature::kMediaStreamConstraintsEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsEchoCancellation";
    case WebFeature::kMediaStreamConstraintsLatency:
      return os << "WebFeature::kMediaStreamConstraintsLatency";
    case WebFeature::kMediaStreamConstraintsChannelCount:
      return os << "WebFeature::kMediaStreamConstraintsChannelCount";
    case WebFeature::kMediaStreamConstraintsDeviceIdAudio:
      return os << "WebFeature::kMediaStreamConstraintsDeviceIdAudio";
    case WebFeature::kMediaStreamConstraintsDeviceIdVideo:
      return os << "WebFeature::kMediaStreamConstraintsDeviceIdVideo";
    case WebFeature::kMediaStreamConstraintsDisableLocalEcho:
      return os << "WebFeature::kMediaStreamConstraintsDisableLocalEcho";
    case WebFeature::kMediaStreamConstraintsGroupIdAudio:
      return os << "WebFeature::kMediaStreamConstraintsGroupIdAudio";
    case WebFeature::kMediaStreamConstraintsGroupIdVideo:
      return os << "WebFeature::kMediaStreamConstraintsGroupIdVideo";
    case WebFeature::kMediaStreamConstraintsVideoKind:
      return os << "WebFeature::kMediaStreamConstraintsVideoKind";
    case WebFeature::kMediaStreamConstraintsDepthNear:
      return os << "WebFeature::kMediaStreamConstraintsDepthNear";
    case WebFeature::kMediaStreamConstraintsDepthFar:
      return os << "WebFeature::kMediaStreamConstraintsDepthFar";
    case WebFeature::kMediaStreamConstraintsFocalLengthX:
      return os << "WebFeature::kMediaStreamConstraintsFocalLengthX";
    case WebFeature::kMediaStreamConstraintsFocalLengthY:
      return os << "WebFeature::kMediaStreamConstraintsFocalLengthY";
    case WebFeature::kMediaStreamConstraintsMediaStreamSourceAudio:
      return os << "WebFeature::kMediaStreamConstraintsMediaStreamSourceAudio";
    case WebFeature::kMediaStreamConstraintsMediaStreamSourceVideo:
      return os << "WebFeature::kMediaStreamConstraintsMediaStreamSourceVideo";
    case WebFeature::kMediaStreamConstraintsRenderToAssociatedSink:
      return os << "WebFeature::kMediaStreamConstraintsRenderToAssociatedSink";
    case WebFeature::kMediaStreamConstraintsHotwordEnabled:
      return os << "WebFeature::kMediaStreamConstraintsHotwordEnabled";
    case WebFeature::kMediaStreamConstraintsGoogEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsGoogEchoCancellation";
    case WebFeature::kMediaStreamConstraintsGoogExperimentalEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsGoogExperimentalEchoCancellation";
    case WebFeature::kMediaStreamConstraintsGoogAutoGainControl:
      return os << "WebFeature::kMediaStreamConstraintsGoogAutoGainControl";
    case WebFeature::kMediaStreamConstraintsGoogExperimentalAutoGainControl:
      return os << "WebFeature::kMediaStreamConstraintsGoogExperimentalAutoGainControl";
    case WebFeature::kMediaStreamConstraintsGoogNoiseSuppression:
      return os << "WebFeature::kMediaStreamConstraintsGoogNoiseSuppression";
    case WebFeature::kMediaStreamConstraintsGoogHighpassFilter:
      return os << "WebFeature::kMediaStreamConstraintsGoogHighpassFilter";
    case WebFeature::kMediaStreamConstraintsGoogTypingNoiseDetection:
      return os << "WebFeature::kMediaStreamConstraintsGoogTypingNoiseDetection";
    case WebFeature::kMediaStreamConstraintsGoogExperimentalNoiseSuppression:
      return os << "WebFeature::kMediaStreamConstraintsGoogExperimentalNoiseSuppression";
    case WebFeature::kMediaStreamConstraintsGoogBeamforming:
      return os << "WebFeature::kMediaStreamConstraintsGoogBeamforming";
    case WebFeature::kMediaStreamConstraintsGoogArrayGeometry:
      return os << "WebFeature::kMediaStreamConstraintsGoogArrayGeometry";
    case WebFeature::kMediaStreamConstraintsGoogAudioMirroring:
      return os << "WebFeature::kMediaStreamConstraintsGoogAudioMirroring";
    case WebFeature::kMediaStreamConstraintsGoogDAEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsGoogDAEchoCancellation";
    case WebFeature::kMediaStreamConstraintsGoogNoiseReduction:
      return os << "WebFeature::kMediaStreamConstraintsGoogNoiseReduction";
    case WebFeature::kMediaStreamConstraintsGoogPowerLineFrequency:
      return os << "WebFeature::kMediaStreamConstraintsGoogPowerLineFrequency";
    case WebFeature::kViewportFixedPositionUnderFilter:
      return os << "WebFeature::kViewportFixedPositionUnderFilter";
    case WebFeature::kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting";
    case WebFeature::kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting";
    case WebFeature::kGamepadAxes:
      return os << "WebFeature::kGamepadAxes";
    case WebFeature::kGamepadButtons:
      return os << "WebFeature::kGamepadButtons";
    case WebFeature::kDispatchMouseEventOnDisabledFormControl:
      return os << "WebFeature::kDispatchMouseEventOnDisabledFormControl";
    case WebFeature::kElementNameDOMInvalidHTMLParserValid:
      return os << "WebFeature::kElementNameDOMInvalidHTMLParserValid";
    case WebFeature::kElementNameDOMValidHTMLParserInvalid:
      return os << "WebFeature::kElementNameDOMValidHTMLParserInvalid";
    case WebFeature::kGATTServerDisconnectedEvent:
      return os << "WebFeature::kGATTServerDisconnectedEvent";
    case WebFeature::kAnchorClickDispatchForNonConnectedNode:
      return os << "WebFeature::kAnchorClickDispatchForNonConnectedNode";
    case WebFeature::kHTMLParseErrorNestedForm:
      return os << "WebFeature::kHTMLParseErrorNestedForm";
    case WebFeature::kFontShapingNotDefGlyphObserved:
      return os << "WebFeature::kFontShapingNotDefGlyphObserved";
    case WebFeature::kPostMessageOutgoingWouldBeBlockedByConnectSrc:
      return os << "WebFeature::kPostMessageOutgoingWouldBeBlockedByConnectSrc";
    case WebFeature::kPostMessageIncomingWouldBeBlockedByConnectSrc:
      return os << "WebFeature::kPostMessageIncomingWouldBeBlockedByConnectSrc";
    case WebFeature::kPaymentRequestNetworkNameInSupportedMethods:
      return os << "WebFeature::kPaymentRequestNetworkNameInSupportedMethods";
    case WebFeature::kCrossOriginPropertyAccess:
      return os << "WebFeature::kCrossOriginPropertyAccess";
    case WebFeature::kCrossOriginPropertyAccessFromOpener:
      return os << "WebFeature::kCrossOriginPropertyAccessFromOpener";
    case WebFeature::kCredentialManagerCreate:
      return os << "WebFeature::kCredentialManagerCreate";
    case WebFeature::kWebDatabaseCreateDropFTS3Table:
      return os << "WebFeature::kWebDatabaseCreateDropFTS3Table";
    case WebFeature::kFieldEditInSecureContext:
      return os << "WebFeature::kFieldEditInSecureContext";
    case WebFeature::kFieldEditInNonSecureContext:
      return os << "WebFeature::kFieldEditInNonSecureContext";
    case WebFeature::kCredentialManagerGetMediationRequired:
      return os << "WebFeature::kCredentialManagerGetMediationRequired";
    case WebFeature::kNetInfoRtt:
      return os << "WebFeature::kNetInfoRtt";
    case WebFeature::kNetInfoDownlink:
      return os << "WebFeature::kNetInfoDownlink";
    case WebFeature::kShapeDetection_BarcodeDetectorConstructor:
      return os << "WebFeature::kShapeDetection_BarcodeDetectorConstructor";
    case WebFeature::kShapeDetection_FaceDetectorConstructor:
      return os << "WebFeature::kShapeDetection_FaceDetectorConstructor";
    case WebFeature::kShapeDetection_TextDetectorConstructor:
      return os << "WebFeature::kShapeDetection_TextDetectorConstructor";
    case WebFeature::kInertAttribute:
      return os << "WebFeature::kInertAttribute";
    case WebFeature::kPluginInstanceAccessFromIsolatedWorld:
      return os << "WebFeature::kPluginInstanceAccessFromIsolatedWorld";
    case WebFeature::kPluginInstanceAccessFromMainWorld:
      return os << "WebFeature::kPluginInstanceAccessFromMainWorld";
    case WebFeature::kShowModalForElementInFullscreenStack:
      return os << "WebFeature::kShowModalForElementInFullscreenStack";
    case WebFeature::kThreeValuedPositionBackground:
      return os << "WebFeature::kThreeValuedPositionBackground";
    case WebFeature::kUnitlessZeroAngleFilter:
      return os << "WebFeature::kUnitlessZeroAngleFilter";
    case WebFeature::kUnitlessZeroAngleGradient:
      return os << "WebFeature::kUnitlessZeroAngleGradient";
    case WebFeature::kUnitlessZeroAngleTransform:
      return os << "WebFeature::kUnitlessZeroAngleTransform";
    case WebFeature::kCredentialManagerPreventSilentAccess:
      return os << "WebFeature::kCredentialManagerPreventSilentAccess";
    case WebFeature::kNetInfoEffectiveType:
      return os << "WebFeature::kNetInfoEffectiveType";
    case WebFeature::kV8SpeechRecognition_Start_Method:
      return os << "WebFeature::kV8SpeechRecognition_Start_Method";
    case WebFeature::kTableRowDirectionDifferentFromTable:
      return os << "WebFeature::kTableRowDirectionDifferentFromTable";
    case WebFeature::kTableSectionDirectionDifferentFromTable:
      return os << "WebFeature::kTableSectionDirectionDifferentFromTable";
    case WebFeature::kClientHintsDeviceMemory:
      return os << "WebFeature::kClientHintsDeviceMemory";
    case WebFeature::kCSSRegisterProperty:
      return os << "WebFeature::kCSSRegisterProperty";
    case WebFeature::kRelativeOrientationSensorConstructor:
      return os << "WebFeature::kRelativeOrientationSensorConstructor";
    case WebFeature::kSmoothScrollJSInterventionActivated:
      return os << "WebFeature::kSmoothScrollJSInterventionActivated";
    case WebFeature::kBudgetAPIGetCost:
      return os << "WebFeature::kBudgetAPIGetCost";
    case WebFeature::kBudgetAPIGetBudget:
      return os << "WebFeature::kBudgetAPIGetBudget";
    case WebFeature::kCrossOriginMainFrameNulledNonEmptyNameAccessed:
      return os << "WebFeature::kCrossOriginMainFrameNulledNonEmptyNameAccessed";
    case WebFeature::kDeprecatedTimingFunctionStepMiddle:
      return os << "WebFeature::kDeprecatedTimingFunctionStepMiddle";
    case WebFeature::kDocumentDomainSetWithNonDefaultPort:
      return os << "WebFeature::kDocumentDomainSetWithNonDefaultPort";
    case WebFeature::kDocumentDomainSetWithDefaultPort:
      return os << "WebFeature::kDocumentDomainSetWithDefaultPort";
    case WebFeature::kFeaturePolicyHeader:
      return os << "WebFeature::kFeaturePolicyHeader";
    case WebFeature::kFeaturePolicyAllowAttribute:
      return os << "WebFeature::kFeaturePolicyAllowAttribute";
    case WebFeature::kMIDIPortOpen:
      return os << "WebFeature::kMIDIPortOpen";
    case WebFeature::kMIDIOutputSend:
      return os << "WebFeature::kMIDIOutputSend";
    case WebFeature::kMIDIMessageEvent:
      return os << "WebFeature::kMIDIMessageEvent";
    case WebFeature::kFetchEventIsReload:
      return os << "WebFeature::kFetchEventIsReload";
    case WebFeature::kServiceWorkerClientFrameType:
      return os << "WebFeature::kServiceWorkerClientFrameType";
    case WebFeature::kQuirksModeDocument:
      return os << "WebFeature::kQuirksModeDocument";
    case WebFeature::kLimitedQuirksModeDocument:
      return os << "WebFeature::kLimitedQuirksModeDocument";
    case WebFeature::kEncryptedMediaCrossOriginIframe:
      return os << "WebFeature::kEncryptedMediaCrossOriginIframe";
    case WebFeature::kCSSSelectorWebkitMediaControls:
      return os << "WebFeature::kCSSSelectorWebkitMediaControls";
    case WebFeature::kCSSSelectorWebkitMediaControlsOverlayEnclosure:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsOverlayEnclosure";
    case WebFeature::kCSSSelectorWebkitMediaControlsOverlayPlayButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsOverlayPlayButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsEnclosure:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsEnclosure";
    case WebFeature::kCSSSelectorWebkitMediaControlsPanel:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsPanel";
    case WebFeature::kCSSSelectorWebkitMediaControlsPlayButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsPlayButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsCurrentTimeDisplay:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsCurrentTimeDisplay";
    case WebFeature::kCSSSelectorWebkitMediaControlsTimeRemainingDisplay:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsTimeRemainingDisplay";
    case WebFeature::kCSSSelectorWebkitMediaControlsTimeline:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsTimeline";
    case WebFeature::kCSSSelectorWebkitMediaControlsTimelineContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsTimelineContainer";
    case WebFeature::kCSSSelectorWebkitMediaControlsMuteButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsMuteButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsVolumeSlider:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsVolumeSlider";
    case WebFeature::kCSSSelectorWebkitMediaControlsFullscreenButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsFullscreenButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton";
    case WebFeature::kLinearAccelerationSensorConstructor:
      return os << "WebFeature::kLinearAccelerationSensorConstructor";
    case WebFeature::kReportUriMultipleEndpoints:
      return os << "WebFeature::kReportUriMultipleEndpoints";
    case WebFeature::kReportUriSingleEndpoint:
      return os << "WebFeature::kReportUriSingleEndpoint";
    case WebFeature::kV8ConstructorNonUndefinedPrimitiveReturn:
      return os << "WebFeature::kV8ConstructorNonUndefinedPrimitiveReturn";
    case WebFeature::kEncryptedMediaDisallowedByFeaturePolicyInCrossOriginIframe:
      return os << "WebFeature::kEncryptedMediaDisallowedByFeaturePolicyInCrossOriginIframe";
    case WebFeature::kGeolocationDisallowedByFeaturePolicyInCrossOriginIframe:
      return os << "WebFeature::kGeolocationDisallowedByFeaturePolicyInCrossOriginIframe";
    case WebFeature::kGetUserMediaMicDisallowedByFeaturePolicyInCrossOriginIframe:
      return os << "WebFeature::kGetUserMediaMicDisallowedByFeaturePolicyInCrossOriginIframe";
    case WebFeature::kGetUserMediaCameraDisallowedByFeaturePolicyInCrossOriginIframe:
      return os << "WebFeature::kGetUserMediaCameraDisallowedByFeaturePolicyInCrossOriginIframe";
    case WebFeature::kRequestMIDIAccessDisallowedByFeaturePolicyInCrossOriginIframe:
      return os << "WebFeature::kRequestMIDIAccessDisallowedByFeaturePolicyInCrossOriginIframe";
    case WebFeature::kMediaSourceKeyframeTimeGreaterThanDependant:
      return os << "WebFeature::kMediaSourceKeyframeTimeGreaterThanDependant";
    case WebFeature::kMediaSourceMuxedSequenceMode:
      return os << "WebFeature::kMediaSourceMuxedSequenceMode";
    case WebFeature::kPrepareModuleScript:
      return os << "WebFeature::kPrepareModuleScript";
    case WebFeature::kPresentationRequestStartSecureOrigin:
      return os << "WebFeature::kPresentationRequestStartSecureOrigin";
    case WebFeature::kPresentationRequestStartInsecureOrigin:
      return os << "WebFeature::kPresentationRequestStartInsecureOrigin";
    case WebFeature::kPersistentClientHintHeader:
      return os << "WebFeature::kPersistentClientHintHeader";
    case WebFeature::kStyleSheetListNonNullAnonymousNamedGetter:
      return os << "WebFeature::kStyleSheetListNonNullAnonymousNamedGetter";
    case WebFeature::kOffMainThreadFetch:
      return os << "WebFeature::kOffMainThreadFetch";
    case WebFeature::kARIAActiveDescendantAttribute:
      return os << "WebFeature::kARIAActiveDescendantAttribute";
    case WebFeature::kARIAAtomicAttribute:
      return os << "WebFeature::kARIAAtomicAttribute";
    case WebFeature::kARIAAutocompleteAttribute:
      return os << "WebFeature::kARIAAutocompleteAttribute";
    case WebFeature::kARIABusyAttribute:
      return os << "WebFeature::kARIABusyAttribute";
    case WebFeature::kARIACheckedAttribute:
      return os << "WebFeature::kARIACheckedAttribute";
    case WebFeature::kARIAColCountAttribute:
      return os << "WebFeature::kARIAColCountAttribute";
    case WebFeature::kARIAColIndexAttribute:
      return os << "WebFeature::kARIAColIndexAttribute";
    case WebFeature::kARIAColSpanAttribute:
      return os << "WebFeature::kARIAColSpanAttribute";
    case WebFeature::kARIAControlsAttribute:
      return os << "WebFeature::kARIAControlsAttribute";
    case WebFeature::kARIACurrentAttribute:
      return os << "WebFeature::kARIACurrentAttribute";
    case WebFeature::kARIADescribedByAttribute:
      return os << "WebFeature::kARIADescribedByAttribute";
    case WebFeature::kARIADetailsAttribute:
      return os << "WebFeature::kARIADetailsAttribute";
    case WebFeature::kARIADisabledAttribute:
      return os << "WebFeature::kARIADisabledAttribute";
    case WebFeature::kARIADropEffectAttribute:
      return os << "WebFeature::kARIADropEffectAttribute";
    case WebFeature::kARIAErrorMessageAttribute:
      return os << "WebFeature::kARIAErrorMessageAttribute";
    case WebFeature::kARIAExpandedAttribute:
      return os << "WebFeature::kARIAExpandedAttribute";
    case WebFeature::kARIAFlowToAttribute:
      return os << "WebFeature::kARIAFlowToAttribute";
    case WebFeature::kARIAGrabbedAttribute:
      return os << "WebFeature::kARIAGrabbedAttribute";
    case WebFeature::kARIAHasPopupAttribute:
      return os << "WebFeature::kARIAHasPopupAttribute";
    case WebFeature::kARIAHelpAttribute:
      return os << "WebFeature::kARIAHelpAttribute";
    case WebFeature::kARIAHiddenAttribute:
      return os << "WebFeature::kARIAHiddenAttribute";
    case WebFeature::kARIAInvalidAttribute:
      return os << "WebFeature::kARIAInvalidAttribute";
    case WebFeature::kARIAKeyShortcutsAttribute:
      return os << "WebFeature::kARIAKeyShortcutsAttribute";
    case WebFeature::kARIALabelAttribute:
      return os << "WebFeature::kARIALabelAttribute";
    case WebFeature::kARIALabeledByAttribute:
      return os << "WebFeature::kARIALabeledByAttribute";
    case WebFeature::kARIALabelledByAttribute:
      return os << "WebFeature::kARIALabelledByAttribute";
    case WebFeature::kARIALevelAttribute:
      return os << "WebFeature::kARIALevelAttribute";
    case WebFeature::kARIALiveAttribute:
      return os << "WebFeature::kARIALiveAttribute";
    case WebFeature::kARIAModalAttribute:
      return os << "WebFeature::kARIAModalAttribute";
    case WebFeature::kARIAMultilineAttribute:
      return os << "WebFeature::kARIAMultilineAttribute";
    case WebFeature::kARIAMultiselectableAttribute:
      return os << "WebFeature::kARIAMultiselectableAttribute";
    case WebFeature::kARIAOrientationAttribute:
      return os << "WebFeature::kARIAOrientationAttribute";
    case WebFeature::kARIAOwnsAttribute:
      return os << "WebFeature::kARIAOwnsAttribute";
    case WebFeature::kARIAPlaceholderAttribute:
      return os << "WebFeature::kARIAPlaceholderAttribute";
    case WebFeature::kARIAPosInSetAttribute:
      return os << "WebFeature::kARIAPosInSetAttribute";
    case WebFeature::kARIAPressedAttribute:
      return os << "WebFeature::kARIAPressedAttribute";
    case WebFeature::kARIAReadOnlyAttribute:
      return os << "WebFeature::kARIAReadOnlyAttribute";
    case WebFeature::kARIARelevantAttribute:
      return os << "WebFeature::kARIARelevantAttribute";
    case WebFeature::kARIARequiredAttribute:
      return os << "WebFeature::kARIARequiredAttribute";
    case WebFeature::kARIARoleDescriptionAttribute:
      return os << "WebFeature::kARIARoleDescriptionAttribute";
    case WebFeature::kARIARowCountAttribute:
      return os << "WebFeature::kARIARowCountAttribute";
    case WebFeature::kARIARowIndexAttribute:
      return os << "WebFeature::kARIARowIndexAttribute";
    case WebFeature::kARIARowSpanAttribute:
      return os << "WebFeature::kARIARowSpanAttribute";
    case WebFeature::kARIASelectedAttribute:
      return os << "WebFeature::kARIASelectedAttribute";
    case WebFeature::kARIASetSizeAttribute:
      return os << "WebFeature::kARIASetSizeAttribute";
    case WebFeature::kARIASortAttribute:
      return os << "WebFeature::kARIASortAttribute";
    case WebFeature::kARIAValueMaxAttribute:
      return os << "WebFeature::kARIAValueMaxAttribute";
    case WebFeature::kARIAValueMinAttribute:
      return os << "WebFeature::kARIAValueMinAttribute";
    case WebFeature::kARIAValueNowAttribute:
      return os << "WebFeature::kARIAValueNowAttribute";
    case WebFeature::kARIAValueTextAttribute:
      return os << "WebFeature::kARIAValueTextAttribute";
    case WebFeature::kV8LabeledExpressionStatement:
      return os << "WebFeature::kV8LabeledExpressionStatement";
    case WebFeature::kPaymentRequestSupportedMethodsArray:
      return os << "WebFeature::kPaymentRequestSupportedMethodsArray";
    case WebFeature::kNavigatorDeviceMemory:
      return os << "WebFeature::kNavigatorDeviceMemory";
    case WebFeature::kFixedWidthTableDistributionChanged:
      return os << "WebFeature::kFixedWidthTableDistributionChanged";
    case WebFeature::kWebkitBoxLayout:
      return os << "WebFeature::kWebkitBoxLayout";
    case WebFeature::kWebkitBoxLayoutHorizontal:
      return os << "WebFeature::kWebkitBoxLayoutHorizontal";
    case WebFeature::kWebkitBoxLayoutVertical:
      return os << "WebFeature::kWebkitBoxLayoutVertical";
    case WebFeature::kWebkitBoxAlignNotInitial:
      return os << "WebFeature::kWebkitBoxAlignNotInitial";
    case WebFeature::kWebkitBoxDirectionNotInitial:
      return os << "WebFeature::kWebkitBoxDirectionNotInitial";
    case WebFeature::kWebkitBoxLinesNotInitial:
      return os << "WebFeature::kWebkitBoxLinesNotInitial";
    case WebFeature::kWebkitBoxPackNotInitial:
      return os << "WebFeature::kWebkitBoxPackNotInitial";
    case WebFeature::kWebkitBoxChildFlexNotInitial:
      return os << "WebFeature::kWebkitBoxChildFlexNotInitial";
    case WebFeature::kWebkitBoxChildFlexGroupNotInitial:
      return os << "WebFeature::kWebkitBoxChildFlexGroupNotInitial";
    case WebFeature::kWebkitBoxChildOrdinalGroupNotInitial:
      return os << "WebFeature::kWebkitBoxChildOrdinalGroupNotInitial";
    case WebFeature::kWebkitBoxNotDefaultOrder:
      return os << "WebFeature::kWebkitBoxNotDefaultOrder";
    case WebFeature::kWebkitBoxNoChildren:
      return os << "WebFeature::kWebkitBoxNoChildren";
    case WebFeature::kWebkitBoxOneChild:
      return os << "WebFeature::kWebkitBoxOneChild";
    case WebFeature::kWebkitBoxOneChildIsLayoutBlockFlowInline:
      return os << "WebFeature::kWebkitBoxOneChildIsLayoutBlockFlowInline";
    case WebFeature::kWebkitBoxManyChildren:
      return os << "WebFeature::kWebkitBoxManyChildren";
    case WebFeature::kWebkitBoxLineClamp:
      return os << "WebFeature::kWebkitBoxLineClamp";
    case WebFeature::kWebkitBoxLineClampPercentage:
      return os << "WebFeature::kWebkitBoxLineClampPercentage";
    case WebFeature::kWebkitBoxLineClampNoChildren:
      return os << "WebFeature::kWebkitBoxLineClampNoChildren";
    case WebFeature::kWebkitBoxLineClampOneChild:
      return os << "WebFeature::kWebkitBoxLineClampOneChild";
    case WebFeature::kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline:
      return os << "WebFeature::kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline";
    case WebFeature::kWebkitBoxLineClampManyChildren:
      return os << "WebFeature::kWebkitBoxLineClampManyChildren";
    case WebFeature::kWebkitBoxLineClampDoesSomething:
      return os << "WebFeature::kWebkitBoxLineClampDoesSomething";
    case WebFeature::kFeaturePolicyAllowAttributeDeprecatedSyntax:
      return os << "WebFeature::kFeaturePolicyAllowAttributeDeprecatedSyntax";
    case WebFeature::kSuppressHistoryEntryWithoutUserGesture:
      return os << "WebFeature::kSuppressHistoryEntryWithoutUserGesture";
    case WebFeature::kImageInputTypeFormDataWithNonEmptyValue:
      return os << "WebFeature::kImageInputTypeFormDataWithNonEmptyValue";
    case WebFeature::kPerformanceServerTiming:
      return os << "WebFeature::kPerformanceServerTiming";
    case WebFeature::kFileReaderResultBeforeCompletion:
      return os << "WebFeature::kFileReaderResultBeforeCompletion";
    case WebFeature::kSyncXhrInPageDismissal:
      return os << "WebFeature::kSyncXhrInPageDismissal";
    case WebFeature::kAsyncXhrInPageDismissal:
      return os << "WebFeature::kAsyncXhrInPageDismissal";
    case WebFeature::kAnimationSetPlaybackRateCompensatorySeek:
      return os << "WebFeature::kAnimationSetPlaybackRateCompensatorySeek";
    case WebFeature::kDeepCombinatorInStaticProfile:
      return os << "WebFeature::kDeepCombinatorInStaticProfile";
    case WebFeature::kPseudoShadowInStaticProfile:
      return os << "WebFeature::kPseudoShadowInStaticProfile";
    case WebFeature::kSchemeBypassesCSP:
      return os << "WebFeature::kSchemeBypassesCSP";
    case WebFeature::kInnerSchemeBypassesCSP:
      return os << "WebFeature::kInnerSchemeBypassesCSP";
    case WebFeature::kSameOriginApplicationOctetStream:
      return os << "WebFeature::kSameOriginApplicationOctetStream";
    case WebFeature::kSameOriginApplicationXml:
      return os << "WebFeature::kSameOriginApplicationXml";
    case WebFeature::kSameOriginTextHtml:
      return os << "WebFeature::kSameOriginTextHtml";
    case WebFeature::kSameOriginTextPlain:
      return os << "WebFeature::kSameOriginTextPlain";
    case WebFeature::kSameOriginTextXml:
      return os << "WebFeature::kSameOriginTextXml";
    case WebFeature::kCrossOriginApplicationOctetStream:
      return os << "WebFeature::kCrossOriginApplicationOctetStream";
    case WebFeature::kCrossOriginApplicationXml:
      return os << "WebFeature::kCrossOriginApplicationXml";
    case WebFeature::kCrossOriginTextHtml:
      return os << "WebFeature::kCrossOriginTextHtml";
    case WebFeature::kCrossOriginTextPlain:
      return os << "WebFeature::kCrossOriginTextPlain";
    case WebFeature::kCrossOriginTextXml:
      return os << "WebFeature::kCrossOriginTextXml";
    case WebFeature::kSameOriginWorkerApplicationOctetStream:
      return os << "WebFeature::kSameOriginWorkerApplicationOctetStream";
    case WebFeature::kSameOriginWorkerApplicationXml:
      return os << "WebFeature::kSameOriginWorkerApplicationXml";
    case WebFeature::kSameOriginWorkerTextHtml:
      return os << "WebFeature::kSameOriginWorkerTextHtml";
    case WebFeature::kSameOriginWorkerTextPlain:
      return os << "WebFeature::kSameOriginWorkerTextPlain";
    case WebFeature::kSameOriginWorkerTextXml:
      return os << "WebFeature::kSameOriginWorkerTextXml";
    case WebFeature::kCrossOriginWorkerApplicationOctetStream:
      return os << "WebFeature::kCrossOriginWorkerApplicationOctetStream";
    case WebFeature::kCrossOriginWorkerApplicationXml:
      return os << "WebFeature::kCrossOriginWorkerApplicationXml";
    case WebFeature::kCrossOriginWorkerTextHtml:
      return os << "WebFeature::kCrossOriginWorkerTextHtml";
    case WebFeature::kCrossOriginWorkerTextPlain:
      return os << "WebFeature::kCrossOriginWorkerTextPlain";
    case WebFeature::kCrossOriginWorkerTextXml:
      return os << "WebFeature::kCrossOriginWorkerTextXml";
    case WebFeature::kPerformanceObserverForWindow:
      return os << "WebFeature::kPerformanceObserverForWindow";
    case WebFeature::kPerformanceObserverForWorker:
      return os << "WebFeature::kPerformanceObserverForWorker";
    case WebFeature::kPaintTimingObserved:
      return os << "WebFeature::kPaintTimingObserved";
    case WebFeature::kPaintTimingRequested:
      return os << "WebFeature::kPaintTimingRequested";
    case WebFeature::kHTMLMediaElementMediaPlaybackRateOutOfRange:
      return os << "WebFeature::kHTMLMediaElementMediaPlaybackRateOutOfRange";
    case WebFeature::kCookieSet:
      return os << "WebFeature::kCookieSet";
    case WebFeature::kCookieGet:
      return os << "WebFeature::kCookieGet";
    case WebFeature::kGeolocationDisabledByFeaturePolicy:
      return os << "WebFeature::kGeolocationDisabledByFeaturePolicy";
    case WebFeature::kEncryptedMediaDisabledByFeaturePolicy:
      return os << "WebFeature::kEncryptedMediaDisabledByFeaturePolicy";
    case WebFeature::kBatteryStatusGetBattery:
      return os << "WebFeature::kBatteryStatusGetBattery";
    case WebFeature::kBatteryStatusInsecureOrigin:
      return os << "WebFeature::kBatteryStatusInsecureOrigin";
    case WebFeature::kBatteryStatusCrossOrigin:
      return os << "WebFeature::kBatteryStatusCrossOrigin";
    case WebFeature::kBatteryStatusSameOriginABA:
      return os << "WebFeature::kBatteryStatusSameOriginABA";
    case WebFeature::kHasIDClassTagAttribute:
      return os << "WebFeature::kHasIDClassTagAttribute";
    case WebFeature::kHasBeforeOrAfterPseudoElement:
      return os << "WebFeature::kHasBeforeOrAfterPseudoElement";
    case WebFeature::kShapeOutsideMaybeAffectedInlineSize:
      return os << "WebFeature::kShapeOutsideMaybeAffectedInlineSize";
    case WebFeature::kShapeOutsideMaybeAffectedInlinePosition:
      return os << "WebFeature::kShapeOutsideMaybeAffectedInlinePosition";
    case WebFeature::kGamepadVibrationActuator:
      return os << "WebFeature::kGamepadVibrationActuator";
    case WebFeature::kMicrophoneDisabledByFeaturePolicyEstimate:
      return os << "WebFeature::kMicrophoneDisabledByFeaturePolicyEstimate";
    case WebFeature::kCameraDisabledByFeaturePolicyEstimate:
      return os << "WebFeature::kCameraDisabledByFeaturePolicyEstimate";
    case WebFeature::kMidiDisabledByFeaturePolicy:
      return os << "WebFeature::kMidiDisabledByFeaturePolicy";
    case WebFeature::kGeolocationGetCurrentPosition:
      return os << "WebFeature::kGeolocationGetCurrentPosition";
    case WebFeature::kGeolocationWatchPosition:
      return os << "WebFeature::kGeolocationWatchPosition";
    case WebFeature::kDataUriHasOctothorpe:
      return os << "WebFeature::kDataUriHasOctothorpe";
    case WebFeature::kNetInfoSaveData:
      return os << "WebFeature::kNetInfoSaveData";
    case WebFeature::kV8Element_GetClientRects_Method:
      return os << "WebFeature::kV8Element_GetClientRects_Method";
    case WebFeature::kV8Element_GetBoundingClientRect_Method:
      return os << "WebFeature::kV8Element_GetBoundingClientRect_Method";
    case WebFeature::kV8Range_GetClientRects_Method:
      return os << "WebFeature::kV8Range_GetClientRects_Method";
    case WebFeature::kV8Range_GetBoundingClientRect_Method:
      return os << "WebFeature::kV8Range_GetBoundingClientRect_Method";
    case WebFeature::kV8ErrorCaptureStackTrace:
      return os << "WebFeature::kV8ErrorCaptureStackTrace";
    case WebFeature::kV8ErrorPrepareStackTrace:
      return os << "WebFeature::kV8ErrorPrepareStackTrace";
    case WebFeature::kV8ErrorStackTraceLimit:
      return os << "WebFeature::kV8ErrorStackTraceLimit";
    case WebFeature::kPaintWorklet:
      return os << "WebFeature::kPaintWorklet";
    case WebFeature::kDocumentPageHideRegistered:
      return os << "WebFeature::kDocumentPageHideRegistered";
    case WebFeature::kDocumentPageHideFired:
      return os << "WebFeature::kDocumentPageHideFired";
    case WebFeature::kDocumentPageShowRegistered:
      return os << "WebFeature::kDocumentPageShowRegistered";
    case WebFeature::kDocumentPageShowFired:
      return os << "WebFeature::kDocumentPageShowFired";
    case WebFeature::kReplaceCharsetInXHR:
      return os << "WebFeature::kReplaceCharsetInXHR";
    case WebFeature::kRespondToSameOriginRequestWithCrossOriginResponse:
      return os << "WebFeature::kRespondToSameOriginRequestWithCrossOriginResponse";
    case WebFeature::kLinkRelModulePreload:
      return os << "WebFeature::kLinkRelModulePreload";
    case WebFeature::kHTMLFrameSetElementNonNullAnonymousNamedGetter:
      return os << "WebFeature::kHTMLFrameSetElementNonNullAnonymousNamedGetter";
    case WebFeature::kCSPWithUnsafeEval:
      return os << "WebFeature::kCSPWithUnsafeEval";
    case WebFeature::kWebAssemblyInstantiation:
      return os << "WebFeature::kWebAssemblyInstantiation";
    case WebFeature::kV8IndexAccessor:
      return os << "WebFeature::kV8IndexAccessor";
    case WebFeature::kV8MediaCapabilities_DecodingInfo_Method:
      return os << "WebFeature::kV8MediaCapabilities_DecodingInfo_Method";
    case WebFeature::kV8MediaCapabilities_EncodingInfo_Method:
      return os << "WebFeature::kV8MediaCapabilities_EncodingInfo_Method";
    case WebFeature::kV8MediaCapabilitiesInfo_Supported_AttributeGetter:
      return os << "WebFeature::kV8MediaCapabilitiesInfo_Supported_AttributeGetter";
    case WebFeature::kV8MediaCapabilitiesInfo_Smooth_AttributeGetter:
      return os << "WebFeature::kV8MediaCapabilitiesInfo_Smooth_AttributeGetter";
    case WebFeature::kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter:
      return os << "WebFeature::kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter";
    case WebFeature::kWindowEventInV0ShadowTree:
      return os << "WebFeature::kWindowEventInV0ShadowTree";
    case WebFeature::kHTMLAnchorElementDownloadInSandboxWithUserGesture:
      return os << "WebFeature::kHTMLAnchorElementDownloadInSandboxWithUserGesture";
    case WebFeature::kHTMLAnchorElementDownloadInSandboxWithoutUserGesture:
      return os << "WebFeature::kHTMLAnchorElementDownloadInSandboxWithoutUserGesture";
    case WebFeature::kWindowOpenRealmMismatch:
      return os << "WebFeature::kWindowOpenRealmMismatch";
    case WebFeature::kGridRowTrackPercentIndefiniteHeight:
      return os << "WebFeature::kGridRowTrackPercentIndefiniteHeight";
    case WebFeature::kVRGetDisplaysSupportsPresent:
      return os << "WebFeature::kVRGetDisplaysSupportsPresent";
    case WebFeature::kDuplicatedAttribute:
      return os << "WebFeature::kDuplicatedAttribute";
    case WebFeature::kDuplicatedAttributeForExecutedScript:
      return os << "WebFeature::kDuplicatedAttributeForExecutedScript";
    case WebFeature::kV8RTCPeerConnection_GetSenders_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetSenders_Method";
    case WebFeature::kV8RTCPeerConnection_GetReceivers_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetReceivers_Method";
    case WebFeature::kV8RTCPeerConnection_AddTrack_Method:
      return os << "WebFeature::kV8RTCPeerConnection_AddTrack_Method";
    case WebFeature::kV8RTCPeerConnection_RemoveTrack_Method:
      return os << "WebFeature::kV8RTCPeerConnection_RemoveTrack_Method";
    case WebFeature::kLocalCSSFile:
      return os << "WebFeature::kLocalCSSFile";
    case WebFeature::kLocalCSSFileExtensionRejected:
      return os << "WebFeature::kLocalCSSFileExtensionRejected";
    case WebFeature::kUserMediaDisableHardwareNoiseSuppression:
      return os << "WebFeature::kUserMediaDisableHardwareNoiseSuppression";
    case WebFeature::kCertificateTransparencyRequiredErrorOnResourceLoad:
      return os << "WebFeature::kCertificateTransparencyRequiredErrorOnResourceLoad";
    case WebFeature::kCSSSelectorPseudoWebkitAnyLink:
      return os << "WebFeature::kCSSSelectorPseudoWebkitAnyLink";
    case WebFeature::kAudioWorkletAddModule:
      return os << "WebFeature::kAudioWorkletAddModule";
    case WebFeature::kAudioWorkletGlobalScopeRegisterProcessor:
      return os << "WebFeature::kAudioWorkletGlobalScopeRegisterProcessor";
    case WebFeature::kAudioWorkletNodeConstructor:
      return os << "WebFeature::kAudioWorkletNodeConstructor";
    case WebFeature::kHTMLMediaElementEmptyLoadWithFutureData:
      return os << "WebFeature::kHTMLMediaElementEmptyLoadWithFutureData";
    case WebFeature::kCSSValueDisplayContents:
      return os << "WebFeature::kCSSValueDisplayContents";
    case WebFeature::kCSSSelectorPseudoAnyLink:
      return os << "WebFeature::kCSSSelectorPseudoAnyLink";
    case WebFeature::kFileAccessedCache:
      return os << "WebFeature::kFileAccessedCache";
    case WebFeature::kFileAccessedCookies:
      return os << "WebFeature::kFileAccessedCookies";
    case WebFeature::kFileAccessedDatabase:
      return os << "WebFeature::kFileAccessedDatabase";
    case WebFeature::kFileAccessedFileSystem:
      return os << "WebFeature::kFileAccessedFileSystem";
    case WebFeature::kFileAccessedLocalStorage:
      return os << "WebFeature::kFileAccessedLocalStorage";
    case WebFeature::kFileAccessedLocks:
      return os << "WebFeature::kFileAccessedLocks";
    case WebFeature::kFileAccessedServiceWorker:
      return os << "WebFeature::kFileAccessedServiceWorker";
    case WebFeature::kFileAccessedSessionStorage:
      return os << "WebFeature::kFileAccessedSessionStorage";
    case WebFeature::kFileAccessedSharedWorker:
      return os << "WebFeature::kFileAccessedSharedWorker";
    case WebFeature::kV8MediaKeys_GetStatusForPolicy_Method:
      return os << "WebFeature::kV8MediaKeys_GetStatusForPolicy_Method";
    case WebFeature::kV8DeoptimizerDisableSpeculation:
      return os << "WebFeature::kV8DeoptimizerDisableSpeculation";
    case WebFeature::kCSSSelectorCue:
      return os << "WebFeature::kCSSSelectorCue";
    case WebFeature::kCSSSelectorWebkitCalendarPickerIndicator:
      return os << "WebFeature::kCSSSelectorWebkitCalendarPickerIndicator";
    case WebFeature::kCSSSelectorWebkitClearButton:
      return os << "WebFeature::kCSSSelectorWebkitClearButton";
    case WebFeature::kCSSSelectorWebkitColorSwatch:
      return os << "WebFeature::kCSSSelectorWebkitColorSwatch";
    case WebFeature::kCSSSelectorWebkitColorSwatchWrapper:
      return os << "WebFeature::kCSSSelectorWebkitColorSwatchWrapper";
    case WebFeature::kCSSSelectorWebkitDateAndTimeValue:
      return os << "WebFeature::kCSSSelectorWebkitDateAndTimeValue";
    case WebFeature::kCSSSelectorWebkitDatetimeEdit:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEdit";
    case WebFeature::kCSSSelectorWebkitDatetimeEditAmpmField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditAmpmField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditDayField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditDayField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditFieldsWrapper:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditFieldsWrapper";
    case WebFeature::kCSSSelectorWebkitDatetimeEditHourField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditHourField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditMillisecondField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditMillisecondField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditMinuteField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditMinuteField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditMonthField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditMonthField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditSecondField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditSecondField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditText:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditText";
    case WebFeature::kCSSSelectorWebkitDatetimeEditWeekField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditWeekField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditYearField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditYearField";
    case WebFeature::kCSSSelectorWebkitDetailsMarker:
      return os << "WebFeature::kCSSSelectorWebkitDetailsMarker";
    case WebFeature::kCSSSelectorWebkitFileUploadButton:
      return os << "WebFeature::kCSSSelectorWebkitFileUploadButton";
    case WebFeature::kCSSSelectorWebkitInnerSpinButton:
      return os << "WebFeature::kCSSSelectorWebkitInnerSpinButton";
    case WebFeature::kCSSSelectorWebkitInputPlaceholder:
      return os << "WebFeature::kCSSSelectorWebkitInputPlaceholder";
    case WebFeature::kCSSSelectorWebkitMediaSliderContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaSliderContainer";
    case WebFeature::kCSSSelectorWebkitMediaSliderThumb:
      return os << "WebFeature::kCSSSelectorWebkitMediaSliderThumb";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackContainer";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackDisplay:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackDisplay";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackRegion:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackRegion";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackRegionContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackRegionContainer";
    case WebFeature::kCSSSelectorWebkitMeterBar:
      return os << "WebFeature::kCSSSelectorWebkitMeterBar";
    case WebFeature::kCSSSelectorWebkitMeterEvenLessGoodValue:
      return os << "WebFeature::kCSSSelectorWebkitMeterEvenLessGoodValue";
    case WebFeature::kCSSSelectorWebkitMeterInnerElement:
      return os << "WebFeature::kCSSSelectorWebkitMeterInnerElement";
    case WebFeature::kCSSSelectorWebkitMeterOptimumValue:
      return os << "WebFeature::kCSSSelectorWebkitMeterOptimumValue";
    case WebFeature::kCSSSelectorWebkitMeterSuboptimumValue:
      return os << "WebFeature::kCSSSelectorWebkitMeterSuboptimumValue";
    case WebFeature::kCSSSelectorWebkitProgressBar:
      return os << "WebFeature::kCSSSelectorWebkitProgressBar";
    case WebFeature::kCSSSelectorWebkitProgressInnerElement:
      return os << "WebFeature::kCSSSelectorWebkitProgressInnerElement";
    case WebFeature::kCSSSelectorWebkitProgressValue:
      return os << "WebFeature::kCSSSelectorWebkitProgressValue";
    case WebFeature::kCSSSelectorWebkitSearchCancelButton:
      return os << "WebFeature::kCSSSelectorWebkitSearchCancelButton";
    case WebFeature::kCSSSelectorWebkitSliderContainer:
      return os << "WebFeature::kCSSSelectorWebkitSliderContainer";
    case WebFeature::kCSSSelectorWebkitSliderRunnableTrack:
      return os << "WebFeature::kCSSSelectorWebkitSliderRunnableTrack";
    case WebFeature::kCSSSelectorWebkitSliderThumb:
      return os << "WebFeature::kCSSSelectorWebkitSliderThumb";
    case WebFeature::kCSSSelectorWebkitTextfieldDecorationContainer:
      return os << "WebFeature::kCSSSelectorWebkitTextfieldDecorationContainer";
    case WebFeature::kCSSSelectorWebkitUnknownPseudo:
      return os << "WebFeature::kCSSSelectorWebkitUnknownPseudo";
    case WebFeature::kFilterAsContainingBlockMayChangeOutput:
      return os << "WebFeature::kFilterAsContainingBlockMayChangeOutput";
    case WebFeature::kDispatchMouseUpDownEventOnDisabledFormControl:
      return os << "WebFeature::kDispatchMouseUpDownEventOnDisabledFormControl";
    case WebFeature::kCSSSelectorPseudoMatches:
      return os << "WebFeature::kCSSSelectorPseudoMatches";
    case WebFeature::kV8RTCRtpSender_ReplaceTrack_Method:
      return os << "WebFeature::kV8RTCRtpSender_ReplaceTrack_Method";
    case WebFeature::kInputTypeFileSecureOriginOpenChooser:
      return os << "WebFeature::kInputTypeFileSecureOriginOpenChooser";
    case WebFeature::kInputTypeFileInsecureOriginOpenChooser:
      return os << "WebFeature::kInputTypeFileInsecureOriginOpenChooser";
    case WebFeature::kBasicShapeEllipseNoRadius:
      return os << "WebFeature::kBasicShapeEllipseNoRadius";
    case WebFeature::kBasicShapeEllipseOneRadius:
      return os << "WebFeature::kBasicShapeEllipseOneRadius";
    case WebFeature::kBasicShapeEllipseTwoRadius:
      return os << "WebFeature::kBasicShapeEllipseTwoRadius";
    case WebFeature::kTemporalInputTypeChooserByTrustedClick:
      return os << "WebFeature::kTemporalInputTypeChooserByTrustedClick";
    case WebFeature::kTemporalInputTypeChooserByUntrustedClick:
      return os << "WebFeature::kTemporalInputTypeChooserByUntrustedClick";
    case WebFeature::kTemporalInputTypeIgnoreUntrustedClick:
      return os << "WebFeature::kTemporalInputTypeIgnoreUntrustedClick";
    case WebFeature::kColorInputTypeChooserByTrustedClick:
      return os << "WebFeature::kColorInputTypeChooserByTrustedClick";
    case WebFeature::kColorInputTypeChooserByUntrustedClick:
      return os << "WebFeature::kColorInputTypeChooserByUntrustedClick";
    case WebFeature::kCSSTypedOMStylePropertyMap:
      return os << "WebFeature::kCSSTypedOMStylePropertyMap";
    case WebFeature::kScrollToFragmentRequested:
      return os << "WebFeature::kScrollToFragmentRequested";
    case WebFeature::kScrollToFragmentSucceedWithRaw:
      return os << "WebFeature::kScrollToFragmentSucceedWithRaw";
    case WebFeature::kScrollToFragmentSucceedWithASCII:
      return os << "WebFeature::kScrollToFragmentSucceedWithASCII";
    case WebFeature::kScrollToFragmentSucceedWithUTF8:
      return os << "WebFeature::kScrollToFragmentSucceedWithUTF8";
    case WebFeature::kScrollToFragmentSucceedWithIsomorphic:
      return os << "WebFeature::kScrollToFragmentSucceedWithIsomorphic";
    case WebFeature::kScrollToFragmentSucceedWithMixed:
      return os << "WebFeature::kScrollToFragmentSucceedWithMixed";
    case WebFeature::kScrollToFragmentFailWithASCII:
      return os << "WebFeature::kScrollToFragmentFailWithASCII";
    case WebFeature::kScrollToFragmentFailWithUTF8:
      return os << "WebFeature::kScrollToFragmentFailWithUTF8";
    case WebFeature::kScrollToFragmentFailWithIsomorphic:
      return os << "WebFeature::kScrollToFragmentFailWithIsomorphic";
    case WebFeature::kScrollToFragmentFailWithMixed:
      return os << "WebFeature::kScrollToFragmentFailWithMixed";
    case WebFeature::kScrollToFragmentFailWithInvalidEncoding:
      return os << "WebFeature::kScrollToFragmentFailWithInvalidEncoding";
    case WebFeature::kRTCPeerConnectionWithActiveCsp:
      return os << "WebFeature::kRTCPeerConnectionWithActiveCsp";
    case WebFeature::kImageDecodingAttribute:
      return os << "WebFeature::kImageDecodingAttribute";
    case WebFeature::kImageDecodeAPI:
      return os << "WebFeature::kImageDecodeAPI";
    case WebFeature::kV8HTMLElement_Autocapitalize_AttributeGetter:
      return os << "WebFeature::kV8HTMLElement_Autocapitalize_AttributeGetter";
    case WebFeature::kV8HTMLElement_Autocapitalize_AttributeSetter:
      return os << "WebFeature::kV8HTMLElement_Autocapitalize_AttributeSetter";
    case WebFeature::kCSSLegacyAlignment:
      return os << "WebFeature::kCSSLegacyAlignment";
    case WebFeature::kSRISignatureCheck:
      return os << "WebFeature::kSRISignatureCheck";
    case WebFeature::kSRISignatureSuccess:
      return os << "WebFeature::kSRISignatureSuccess";
    case WebFeature::kCSSBasicShape:
      return os << "WebFeature::kCSSBasicShape";
    case WebFeature::kCSSGradient:
      return os << "WebFeature::kCSSGradient";
    case WebFeature::kCSSPaintFunction:
      return os << "WebFeature::kCSSPaintFunction";
    case WebFeature::kWebkitCrossFade:
      return os << "WebFeature::kWebkitCrossFade";
    case WebFeature::kDisablePictureInPictureAttribute:
      return os << "WebFeature::kDisablePictureInPictureAttribute";
    case WebFeature::kCertificateTransparencyNonCompliantSubresourceInMainFrame:
      return os << "WebFeature::kCertificateTransparencyNonCompliantSubresourceInMainFrame";
    case WebFeature::kCertificateTransparencyNonCompliantResourceInSubframe:
      return os << "WebFeature::kCertificateTransparencyNonCompliantResourceInSubframe";
    case WebFeature::kV8AbortController_Constructor:
      return os << "WebFeature::kV8AbortController_Constructor";
    case WebFeature::kReplaceCharsetInXHRIgnoringCase:
      return os << "WebFeature::kReplaceCharsetInXHRIgnoringCase";
    case WebFeature::kHTMLIFrameElementGestureMedia:
      return os << "WebFeature::kHTMLIFrameElementGestureMedia";
    case WebFeature::kWorkletAddModule:
      return os << "WebFeature::kWorkletAddModule";
    case WebFeature::kAnimationWorkletRegisterAnimator:
      return os << "WebFeature::kAnimationWorkletRegisterAnimator";
    case WebFeature::kWorkletAnimationConstructor:
      return os << "WebFeature::kWorkletAnimationConstructor";
    case WebFeature::kScrollTimelineConstructor:
      return os << "WebFeature::kScrollTimelineConstructor";
    case WebFeature::kV8Document_CreateTouchList_Method:
      return os << "WebFeature::kV8Document_CreateTouchList_Method";
    case WebFeature::kAsyncClipboardAPIRead:
      return os << "WebFeature::kAsyncClipboardAPIRead";
    case WebFeature::kAsyncClipboardAPIWrite:
      return os << "WebFeature::kAsyncClipboardAPIWrite";
    case WebFeature::kAsyncClipboardAPIReadText:
      return os << "WebFeature::kAsyncClipboardAPIReadText";
    case WebFeature::kAsyncClipboardAPIWriteText:
      return os << "WebFeature::kAsyncClipboardAPIWriteText";
    case WebFeature::kOpenerNavigationWithoutGesture:
      return os << "WebFeature::kOpenerNavigationWithoutGesture";
    case WebFeature::kGetComputedStyleWebkitAppearance:
      return os << "WebFeature::kGetComputedStyleWebkitAppearance";
    case WebFeature::kV8LockManager_Request_Method:
      return os << "WebFeature::kV8LockManager_Request_Method";
    case WebFeature::kV8LockManager_Query_Method:
      return os << "WebFeature::kV8LockManager_Query_Method";
    case WebFeature::kUserMediaEnableExperimentalHardwareEchoCancellation:
      return os << "WebFeature::kUserMediaEnableExperimentalHardwareEchoCancellation";
    case WebFeature::kV8RTCDTMFSender_Track_AttributeGetter:
      return os << "WebFeature::kV8RTCDTMFSender_Track_AttributeGetter";
    case WebFeature::kV8RTCDTMFSender_Duration_AttributeGetter:
      return os << "WebFeature::kV8RTCDTMFSender_Duration_AttributeGetter";
    case WebFeature::kV8RTCDTMFSender_InterToneGap_AttributeGetter:
      return os << "WebFeature::kV8RTCDTMFSender_InterToneGap_AttributeGetter";
    case WebFeature::kV8RTCRtpSender_Dtmf_AttributeGetter:
      return os << "WebFeature::kV8RTCRtpSender_Dtmf_AttributeGetter";
    case WebFeature::kRTCConstraintEnableDtlsSrtpTrue:
      return os << "WebFeature::kRTCConstraintEnableDtlsSrtpTrue";
    case WebFeature::kRTCConstraintEnableDtlsSrtpFalse:
      return os << "WebFeature::kRTCConstraintEnableDtlsSrtpFalse";
    case WebFeature::kRtcPeerConnectionId:
      return os << "WebFeature::kRtcPeerConnectionId";
    case WebFeature::kV8PaintWorkletGlobalScope_RegisterPaint_Method:
      return os << "WebFeature::kV8PaintWorkletGlobalScope_RegisterPaint_Method";
    case WebFeature::kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter:
      return os << "WebFeature::kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter";
    case WebFeature::kCSSSelectorPseudoFocus:
      return os << "WebFeature::kCSSSelectorPseudoFocus";
    case WebFeature::kCSSSelectorPseudoFocusVisible:
      return os << "WebFeature::kCSSSelectorPseudoFocusVisible";
    case WebFeature::kDistrustedLegacySymantecSubresource:
      return os << "WebFeature::kDistrustedLegacySymantecSubresource";
    case WebFeature::kVRDisplayGetFrameData:
      return os << "WebFeature::kVRDisplayGetFrameData";
    case WebFeature::kXMLHttpRequestResponseXML:
      return os << "WebFeature::kXMLHttpRequestResponseXML";
    case WebFeature::kMessagePortTransferClosedPort:
      return os << "WebFeature::kMessagePortTransferClosedPort";
    case WebFeature::kRTCLocalSdpModification:
      return os << "WebFeature::kRTCLocalSdpModification";
    case WebFeature::kKeyboardApiLock:
      return os << "WebFeature::kKeyboardApiLock";
    case WebFeature::kKeyboardApiUnlock:
      return os << "WebFeature::kKeyboardApiUnlock";
    case WebFeature::kPPAPIURLRequestStreamToFile:
      return os << "WebFeature::kPPAPIURLRequestStreamToFile";
    case WebFeature::kPaymentHandler:
      return os << "WebFeature::kPaymentHandler";
    case WebFeature::kPaymentRequestShowWithoutGesture:
      return os << "WebFeature::kPaymentRequestShowWithoutGesture";
    case WebFeature::kReadableStreamConstructor:
      return os << "WebFeature::kReadableStreamConstructor";
    case WebFeature::kWritableStreamConstructor:
      return os << "WebFeature::kWritableStreamConstructor";
    case WebFeature::kTransformStreamConstructor:
      return os << "WebFeature::kTransformStreamConstructor";
    case WebFeature::kNegativeBackgroundSize:
      return os << "WebFeature::kNegativeBackgroundSize";
    case WebFeature::kNegativeMaskSize:
      return os << "WebFeature::kNegativeMaskSize";
    case WebFeature::kClientHintsRtt:
      return os << "WebFeature::kClientHintsRtt";
    case WebFeature::kClientHintsDownlink:
      return os << "WebFeature::kClientHintsDownlink";
    case WebFeature::kClientHintsEct:
      return os << "WebFeature::kClientHintsEct";
    case WebFeature::kCrossOriginHTMLIFrameElementContentDocument:
      return os << "WebFeature::kCrossOriginHTMLIFrameElementContentDocument";
    case WebFeature::kCrossOriginHTMLIFrameElementGetSVGDocument:
      return os << "WebFeature::kCrossOriginHTMLIFrameElementGetSVGDocument";
    case WebFeature::kCrossOriginHTMLEmbedElementGetSVGDocument:
      return os << "WebFeature::kCrossOriginHTMLEmbedElementGetSVGDocument";
    case WebFeature::kCrossOriginHTMLFrameElementContentDocument:
      return os << "WebFeature::kCrossOriginHTMLFrameElementContentDocument";
    case WebFeature::kCrossOriginHTMLObjectElementContentDocument:
      return os << "WebFeature::kCrossOriginHTMLObjectElementContentDocument";
    case WebFeature::kCrossOriginHTMLObjectElementGetSVGDocument:
      return os << "WebFeature::kCrossOriginHTMLObjectElementGetSVGDocument";
    case WebFeature::kNavigatorXR:
      return os << "WebFeature::kNavigatorXR";
    case WebFeature::kXRRequestDevice:
      return os << "WebFeature::kXRRequestDevice";
    case WebFeature::kXRRequestSession:
      return os << "WebFeature::kXRRequestSession";
    case WebFeature::kXRSupportsSession:
      return os << "WebFeature::kXRSupportsSession";
    case WebFeature::kXRSessionGetInputSources:
      return os << "WebFeature::kXRSessionGetInputSources";
    case WebFeature::kCSSResizeAuto:
      return os << "WebFeature::kCSSResizeAuto";
    case WebFeature::kPrefixedCursorGrab:
      return os << "WebFeature::kPrefixedCursorGrab";
    case WebFeature::kPrefixedCursorGrabbing:
      return os << "WebFeature::kPrefixedCursorGrabbing";
    case WebFeature::kCredentialManagerCreatePublicKeyCredential:
      return os << "WebFeature::kCredentialManagerCreatePublicKeyCredential";
    case WebFeature::kCredentialManagerGetPublicKeyCredential:
      return os << "WebFeature::kCredentialManagerGetPublicKeyCredential";
    case WebFeature::kCredentialManagerMakePublicKeyCredentialSuccess:
      return os << "WebFeature::kCredentialManagerMakePublicKeyCredentialSuccess";
    case WebFeature::kCredentialManagerGetPublicKeyCredentialSuccess:
      return os << "WebFeature::kCredentialManagerGetPublicKeyCredentialSuccess";
    case WebFeature::kShapeOutsideContentBox:
      return os << "WebFeature::kShapeOutsideContentBox";
    case WebFeature::kShapeOutsidePaddingBox:
      return os << "WebFeature::kShapeOutsidePaddingBox";
    case WebFeature::kShapeOutsideBorderBox:
      return os << "WebFeature::kShapeOutsideBorderBox";
    case WebFeature::kShapeOutsideMarginBox:
      return os << "WebFeature::kShapeOutsideMarginBox";
    case WebFeature::kPerformanceTimeline:
      return os << "WebFeature::kPerformanceTimeline";
    case WebFeature::kUserTiming:
      return os << "WebFeature::kUserTiming";
    case WebFeature::kCSSSelectorPseudoIS:
      return os << "WebFeature::kCSSSelectorPseudoIS";
    case WebFeature::kKeyboardApiGetLayoutMap:
      return os << "WebFeature::kKeyboardApiGetLayoutMap";
    case WebFeature::kWebRtcVaapiHWVP8Encoding:
      return os << "WebFeature::kWebRtcVaapiHWVP8Encoding";
    case WebFeature::kPerformanceResourceTimingInitiatorType:
      return os << "WebFeature::kPerformanceResourceTimingInitiatorType";
    case WebFeature::kV8ArraySortNoElementsProtector:
      return os << "WebFeature::kV8ArraySortNoElementsProtector";
    case WebFeature::kV8ArrayPrototypeSortJSArrayModifiedPrototype:
      return os << "WebFeature::kV8ArrayPrototypeSortJSArrayModifiedPrototype";
    case WebFeature::kV8Document_PictureInPictureEnabled_AttributeGetter:
      return os << "WebFeature::kV8Document_PictureInPictureEnabled_AttributeGetter";
    case WebFeature::kV8Document_PictureInPictureElement_AttributeGetter:
      return os << "WebFeature::kV8Document_PictureInPictureElement_AttributeGetter";
    case WebFeature::kV8Document_ExitPictureInPicture_Method:
      return os << "WebFeature::kV8Document_ExitPictureInPicture_Method";
    case WebFeature::kV8ShadowRoot_PictureInPictureElement_AttributeGetter:
      return os << "WebFeature::kV8ShadowRoot_PictureInPictureElement_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter:
      return os << "WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter:
      return os << "WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter";
    case WebFeature::kV8HTMLVideoElement_RequestPictureInPicture_Method:
      return os << "WebFeature::kV8HTMLVideoElement_RequestPictureInPicture_Method";
    case WebFeature::kEnterPictureInPictureEventListener:
      return os << "WebFeature::kEnterPictureInPictureEventListener";
    case WebFeature::kLeavePictureInPictureEventListener:
      return os << "WebFeature::kLeavePictureInPictureEventListener";
    case WebFeature::kV8PictureInPictureWindow_Height_AttributeGetter:
      return os << "WebFeature::kV8PictureInPictureWindow_Height_AttributeGetter";
    case WebFeature::kV8PictureInPictureWindow_Width_AttributeGetter:
      return os << "WebFeature::kV8PictureInPictureWindow_Width_AttributeGetter";
    case WebFeature::kPictureInPictureWindowResizeEventListener:
      return os << "WebFeature::kPictureInPictureWindowResizeEventListener";
    case WebFeature::kV8CookieStore_Delete_Method:
      return os << "WebFeature::kV8CookieStore_Delete_Method";
    case WebFeature::kV8CookieStore_Get_Method:
      return os << "WebFeature::kV8CookieStore_Get_Method";
    case WebFeature::kV8CookieStore_GetAll_Method:
      return os << "WebFeature::kV8CookieStore_GetAll_Method";
    case WebFeature::kV8CookieStore_GetChangeSubscriptions_Method:
      return os << "WebFeature::kV8CookieStore_GetChangeSubscriptions_Method";
    case WebFeature::kV8CookieStore_Has_Method:
      return os << "WebFeature::kV8CookieStore_Has_Method";
    case WebFeature::kV8CookieStore_Set_Method:
      return os << "WebFeature::kV8CookieStore_Set_Method";
    case WebFeature::kV8CookieStore_SubscribeToChanges_Method:
      return os << "WebFeature::kV8CookieStore_SubscribeToChanges_Method";
    case WebFeature::kV8CookieChangeEvent_Changed_AttributeGetter:
      return os << "WebFeature::kV8CookieChangeEvent_Changed_AttributeGetter";
    case WebFeature::kV8CookieChangeEvent_Deleted_AttributeGetter:
      return os << "WebFeature::kV8CookieChangeEvent_Deleted_AttributeGetter";
    case WebFeature::kV8ExtendableCookieChangeEvent_Changed_AttributeGetter:
      return os << "WebFeature::kV8ExtendableCookieChangeEvent_Changed_AttributeGetter";
    case WebFeature::kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter:
      return os << "WebFeature::kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter";
    case WebFeature::kShapeOutsideContentBoxDifferentFromMarginBox:
      return os << "WebFeature::kShapeOutsideContentBoxDifferentFromMarginBox";
    case WebFeature::kShapeOutsidePaddingBoxDifferentFromMarginBox:
      return os << "WebFeature::kShapeOutsidePaddingBoxDifferentFromMarginBox";
    case WebFeature::kCSSContainLayoutPositionedDescendants:
      return os << "WebFeature::kCSSContainLayoutPositionedDescendants";
    case WebFeature::kHTMLFrameSetElementAnonymousNamedGetter:
      return os << "WebFeature::kHTMLFrameSetElementAnonymousNamedGetter";
    case WebFeature::kNumberOfFeatures:
      return os << "WebFeature::kNumberOfFeatures";
    default:
      return os << "Unknown WebFeature value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebFeature value) {
  return internal::WebFeature_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebFeature>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebFeature> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebFeature, ::blink::mojom::WebFeature> {
  static ::blink::mojom::WebFeature ToMojom(::blink::mojom::WebFeature input) { return input; }
  static bool FromMojom(::blink::mojom::WebFeature input, ::blink::mojom::WebFeature* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebFeature, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebFeature, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebFeature>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_FEATURE_MOJOM_SHARED_H_
