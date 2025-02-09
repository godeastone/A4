// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/web_feature.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');


  var WebFeature = {};
  WebFeature.kOBSOLETE_PageDestruction = 0;
  WebFeature.kWorkerStart = 4;
  WebFeature.kSharedWorkerStart = 5;
  WebFeature.kUnprefixedIndexedDB = 9;
  WebFeature.kOpenWebDatabase = 10;
  WebFeature.kUnprefixedRequestAnimationFrame = 13;
  WebFeature.kPrefixedRequestAnimationFrame = 14;
  WebFeature.kContentSecurityPolicy = 15;
  WebFeature.kContentSecurityPolicyReportOnly = 16;
  WebFeature.kPrefixedTransitionEndEvent = 18;
  WebFeature.kUnprefixedTransitionEndEvent = 19;
  WebFeature.kPrefixedAndUnprefixedTransitionEndEvent = 20;
  WebFeature.kAutoFocusAttribute = 21;
  WebFeature.kDataListElement = 23;
  WebFeature.kFormAttribute = 24;
  WebFeature.kIncrementalAttribute = 25;
  WebFeature.kInputTypeColor = 26;
  WebFeature.kInputTypeDate = 27;
  WebFeature.kInputTypeDateTimeFallback = 29;
  WebFeature.kInputTypeDateTimeLocal = 30;
  WebFeature.kInputTypeEmail = 31;
  WebFeature.kInputTypeMonth = 32;
  WebFeature.kInputTypeNumber = 33;
  WebFeature.kInputTypeRange = 34;
  WebFeature.kInputTypeSearch = 35;
  WebFeature.kInputTypeTel = 36;
  WebFeature.kInputTypeTime = 37;
  WebFeature.kInputTypeURL = 38;
  WebFeature.kInputTypeWeek = 39;
  WebFeature.kInputTypeWeekFallback = 40;
  WebFeature.kListAttribute = 41;
  WebFeature.kMaxAttribute = 42;
  WebFeature.kMinAttribute = 43;
  WebFeature.kPatternAttribute = 44;
  WebFeature.kPlaceholderAttribute = 45;
  WebFeature.kPrefixedDirectoryAttribute = 47;
  WebFeature.kRequiredAttribute = 49;
  WebFeature.kStepAttribute = 51;
  WebFeature.kPageVisits = 52;
  WebFeature.kHTMLMarqueeElement = 53;
  WebFeature.kReflection = 55;
  WebFeature.kPrefixedStorageInfo = 57;
  WebFeature.kDeprecatedFlexboxWebContent = 61;
  WebFeature.kDeprecatedFlexboxChrome = 62;
  WebFeature.kDeprecatedFlexboxChromeExtension = 63;
  WebFeature.kWindowEvent = 69;
  WebFeature.kContentSecurityPolicyWithBaseElement = 70;
  WebFeature.kDocumentClear = 74;
  WebFeature.kXMLDocument = 77;
  WebFeature.kXSLProcessingInstruction = 78;
  WebFeature.kXSLTProcessor = 79;
  WebFeature.kSVGSwitchElement = 80;
  WebFeature.kDocumentAll = 83;
  WebFeature.kFormElement = 84;
  WebFeature.kDemotedFormElement = 85;
  WebFeature.kSVGAnimationElement = 90;
  WebFeature.kLineClamp = 96;
  WebFeature.kSubFrameBeforeUnloadRegistered = 97;
  WebFeature.kSubFrameBeforeUnloadFired = 98;
  WebFeature.kConsoleMarkTimeline = 102;
  WebFeature.kDocumentCreateAttribute = 111;
  WebFeature.kDocumentCreateAttributeNS = 112;
  WebFeature.kDocumentXMLEncoding = 115;
  WebFeature.kDocumentXMLStandalone = 116;
  WebFeature.kDocumentXMLVersion = 117;
  WebFeature.kNavigatorProductSub = 123;
  WebFeature.kNavigatorVendor = 124;
  WebFeature.kNavigatorVendorSub = 125;
  WebFeature.kPrefixedAnimationEndEvent = 128;
  WebFeature.kUnprefixedAnimationEndEvent = 129;
  WebFeature.kPrefixedAndUnprefixedAnimationEndEvent = 130;
  WebFeature.kPrefixedAnimationStartEvent = 131;
  WebFeature.kUnprefixedAnimationStartEvent = 132;
  WebFeature.kPrefixedAndUnprefixedAnimationStartEvent = 133;
  WebFeature.kPrefixedAnimationIterationEvent = 134;
  WebFeature.kUnprefixedAnimationIterationEvent = 135;
  WebFeature.kPrefixedAndUnprefixedAnimationIterationEvent = 136;
  WebFeature.kEventReturnValue = 137;
  WebFeature.kSVGSVGElement = 138;
  WebFeature.kDOMSubtreeModifiedEvent = 143;
  WebFeature.kDOMNodeInsertedEvent = 144;
  WebFeature.kDOMNodeRemovedEvent = 145;
  WebFeature.kDOMNodeRemovedFromDocumentEvent = 146;
  WebFeature.kDOMNodeInsertedIntoDocumentEvent = 147;
  WebFeature.kDOMCharacterDataModifiedEvent = 148;
  WebFeature.kPrefixedAudioDecodedByteCount = 164;
  WebFeature.kPrefixedVideoDecodedByteCount = 165;
  WebFeature.kPrefixedVideoSupportsFullscreen = 166;
  WebFeature.kPrefixedVideoDisplayingFullscreen = 167;
  WebFeature.kPrefixedVideoEnterFullscreen = 168;
  WebFeature.kPrefixedVideoExitFullscreen = 169;
  WebFeature.kPrefixedVideoEnterFullScreen = 170;
  WebFeature.kPrefixedVideoExitFullScreen = 171;
  WebFeature.kPrefixedVideoDecodedFrameCount = 172;
  WebFeature.kPrefixedVideoDroppedFrameCount = 173;
  WebFeature.kPrefixedElementRequestFullscreen = 176;
  WebFeature.kPrefixedElementRequestFullScreen = 177;
  WebFeature.kBarPropLocationbar = 178;
  WebFeature.kBarPropMenubar = 179;
  WebFeature.kBarPropPersonalbar = 180;
  WebFeature.kBarPropScrollbars = 181;
  WebFeature.kBarPropStatusbar = 182;
  WebFeature.kBarPropToolbar = 183;
  WebFeature.kInputTypeEmailMultiple = 184;
  WebFeature.kInputTypeEmailMaxLength = 185;
  WebFeature.kInputTypeEmailMultipleMaxLength = 186;
  WebFeature.kInputTypeText = 190;
  WebFeature.kInputTypeTextMaxLength = 191;
  WebFeature.kInputTypePassword = 192;
  WebFeature.kInputTypePasswordMaxLength = 193;
  WebFeature.kPrefixedPageVisibility = 196;
  WebFeature.kDocumentBeforeUnloadRegistered = 200;
  WebFeature.kDocumentBeforeUnloadFired = 201;
  WebFeature.kDocumentUnloadRegistered = 202;
  WebFeature.kDocumentUnloadFired = 203;
  WebFeature.kSVGLocatableNearestViewportElement = 204;
  WebFeature.kSVGLocatableFarthestViewportElement = 205;
  WebFeature.kSVGPointMatrixTransform = 209;
  WebFeature.kDOMFocusInOutEvent = 211;
  WebFeature.kFileGetLastModifiedDate = 212;
  WebFeature.kHTMLElementInnerText = 213;
  WebFeature.kHTMLElementOuterText = 214;
  WebFeature.kReplaceDocumentViaJavaScriptURL = 215;
  WebFeature.kElementPrefixedMatchesSelector = 217;
  WebFeature.kCSSStyleSheetRules = 219;
  WebFeature.kCSSStyleSheetAddRule = 220;
  WebFeature.kCSSStyleSheetRemoveRule = 221;
  WebFeature.kInitMessageEvent = 222;
  WebFeature.kPrefixedDevicePixelRatioMediaFeature = 233;
  WebFeature.kPrefixedMaxDevicePixelRatioMediaFeature = 234;
  WebFeature.kPrefixedMinDevicePixelRatioMediaFeature = 235;
  WebFeature.kPrefixedTransform3dMediaFeature = 237;
  WebFeature.kPrefixedStorageQuota = 240;
  WebFeature.kResetReferrerPolicy = 243;
  WebFeature.kCaseInsensitiveAttrSelectorMatch = 244;
  WebFeature.kFormNameAccessForImageElement = 246;
  WebFeature.kFormNameAccessForPastNamesMap = 247;
  WebFeature.kFormAssociationByParser = 248;
  WebFeature.kSVGSVGElementInDocument = 250;
  WebFeature.kSVGDocumentRootElement = 251;
  WebFeature.kWorkerSubjectToCSP = 257;
  WebFeature.kWorkerAllowedByChildBlockedByScript = 258;
  WebFeature.kDeprecatedWebKitGradient = 260;
  WebFeature.kDeprecatedWebKitLinearGradient = 261;
  WebFeature.kDeprecatedWebKitRepeatingLinearGradient = 262;
  WebFeature.kDeprecatedWebKitRadialGradient = 263;
  WebFeature.kDeprecatedWebKitRepeatingRadialGradient = 264;
  WebFeature.kTextAutosizing = 274;
  WebFeature.kHTMLAnchorElementPingAttribute = 276;
  WebFeature.kSVGClassName = 279;
  WebFeature.kHTMLMediaElementSeekToFragmentStart = 281;
  WebFeature.kHTMLMediaElementPauseAtFragmentEnd = 282;
  WebFeature.kPrefixedWindowURL = 283;
  WebFeature.kWindowOrientation = 285;
  WebFeature.kDocumentCaptureEvents = 287;
  WebFeature.kDocumentReleaseEvents = 288;
  WebFeature.kWindowCaptureEvents = 289;
  WebFeature.kWindowReleaseEvents = 290;
  WebFeature.kDocumentXPathCreateExpression = 295;
  WebFeature.kDocumentXPathCreateNSResolver = 296;
  WebFeature.kDocumentXPathEvaluate = 297;
  WebFeature.kAnimationConstructorKeyframeListEffectObjectTiming = 300;
  WebFeature.kAnimationConstructorKeyframeListEffectNoTiming = 302;
  WebFeature.kPrefixedCancelAnimationFrame = 304;
  WebFeature.kNamedNodeMapGetNamedItem = 306;
  WebFeature.kNamedNodeMapSetNamedItem = 307;
  WebFeature.kNamedNodeMapRemoveNamedItem = 308;
  WebFeature.kNamedNodeMapItem = 309;
  WebFeature.kNamedNodeMapGetNamedItemNS = 310;
  WebFeature.kNamedNodeMapSetNamedItemNS = 311;
  WebFeature.kNamedNodeMapRemoveNamedItemNS = 312;
  WebFeature.kPrefixedDocumentIsFullscreen = 318;
  WebFeature.kPrefixedDocumentCurrentFullScreenElement = 320;
  WebFeature.kPrefixedDocumentCancelFullScreen = 321;
  WebFeature.kPrefixedDocumentFullscreenEnabled = 322;
  WebFeature.kPrefixedDocumentFullscreenElement = 323;
  WebFeature.kPrefixedDocumentExitFullscreen = 324;
  WebFeature.kSVGForeignObjectElement = 325;
  WebFeature.kSelectionSetPosition = 327;
  WebFeature.kAnimationFinishEvent = 328;
  WebFeature.kSVGSVGElementInXMLDocument = 329;
  WebFeature.kEventSrcElement = 343;
  WebFeature.kEventCancelBubble = 344;
  WebFeature.kEventPath = 345;
  WebFeature.kNodeIteratorDetach = 347;
  WebFeature.kEventGetReturnValueTrue = 350;
  WebFeature.kEventGetReturnValueFalse = 351;
  WebFeature.kEventSetReturnValueTrue = 352;
  WebFeature.kEventSetReturnValueFalse = 353;
  WebFeature.kWindowOffscreenBuffering = 356;
  WebFeature.kWindowDefaultStatus = 357;
  WebFeature.kWindowDefaultstatus = 358;
  WebFeature.kPrefixedTransitionEventConstructor = 361;
  WebFeature.kPrefixedMutationObserverConstructor = 362;
  WebFeature.kNotificationPermission = 371;
  WebFeature.kRangeDetach = 372;
  WebFeature.kPrefixedFileRelativePath = 386;
  WebFeature.kDocumentCaretRangeFromPoint = 387;
  WebFeature.kElementScrollIntoViewIfNeeded = 389;
  WebFeature.kRangeExpand = 393;
  WebFeature.kHTMLImageElementX = 396;
  WebFeature.kHTMLImageElementY = 397;
  WebFeature.kSelectionBaseNode = 400;
  WebFeature.kSelectionBaseOffset = 401;
  WebFeature.kSelectionExtentNode = 402;
  WebFeature.kSelectionExtentOffset = 403;
  WebFeature.kSelectionType = 404;
  WebFeature.kSelectionModify = 405;
  WebFeature.kSelectionSetBaseAndExtent = 406;
  WebFeature.kSelectionEmpty = 407;
  WebFeature.kVTTCue = 409;
  WebFeature.kVTTCueRender = 410;
  WebFeature.kVTTCueRenderVertical = 411;
  WebFeature.kVTTCueRenderSnapToLinesFalse = 412;
  WebFeature.kVTTCueRenderLineNotAuto = 413;
  WebFeature.kVTTCueRenderPositionNot50 = 414;
  WebFeature.kVTTCueRenderSizeNot100 = 415;
  WebFeature.kVTTCueRenderAlignNotCenter = 416;
  WebFeature.kElementRequestPointerLock = 417;
  WebFeature.kVTTCueRenderRtl = 418;
  WebFeature.kPostMessageFromSecureToInsecure = 419;
  WebFeature.kPostMessageFromInsecureToSecure = 420;
  WebFeature.kDocumentExitPointerLock = 421;
  WebFeature.kDocumentPointerLockElement = 422;
  WebFeature.kPrefixedCursorZoomIn = 424;
  WebFeature.kPrefixedCursorZoomOut = 425;
  WebFeature.kTextEncoderConstructor = 429;
  WebFeature.kTextEncoderEncode = 430;
  WebFeature.kTextDecoderConstructor = 431;
  WebFeature.kTextDecoderDecode = 432;
  WebFeature.kFocusInOutEvent = 433;
  WebFeature.kMouseEventMovementX = 434;
  WebFeature.kMouseEventMovementY = 435;
  WebFeature.kDocumentFonts = 440;
  WebFeature.kMixedContentFormsSubmitted = 441;
  WebFeature.kFormsSubmitted = 442;
  WebFeature.kHTMLImports = 455;
  WebFeature.kElementCreateShadowRoot = 456;
  WebFeature.kDocumentRegisterElement = 457;
  WebFeature.kEditingAppleInterchangeNewline = 458;
  WebFeature.kEditingAppleConvertedSpace = 459;
  WebFeature.kEditingApplePasteAsQuotation = 460;
  WebFeature.kEditingAppleStyleSpanClass = 461;
  WebFeature.kHTMLImportsAsyncAttribute = 463;
  WebFeature.kXMLHttpRequestSynchronous = 465;
  WebFeature.kCSSSelectorPseudoUnresolved = 466;
  WebFeature.kCSSSelectorPseudoShadow = 467;
  WebFeature.kCSSSelectorPseudoContent = 468;
  WebFeature.kCSSSelectorPseudoHost = 469;
  WebFeature.kCSSSelectorPseudoHostContext = 470;
  WebFeature.kCSSDeepCombinator = 471;
  WebFeature.kUseAsm = 473;
  WebFeature.kDOMWindowOpen = 475;
  WebFeature.kDOMWindowOpenFeatures = 476;
  WebFeature.kAspectRatioFlexItem = 479;
  WebFeature.kDetailsElement = 480;
  WebFeature.kDialogElement = 481;
  WebFeature.kMapElement = 482;
  WebFeature.kMeterElement = 483;
  WebFeature.kProgressElement = 484;
  WebFeature.kWheelEventWheelDeltaX = 491;
  WebFeature.kWheelEventWheelDeltaY = 492;
  WebFeature.kWheelEventWheelDelta = 493;
  WebFeature.kSendBeacon = 494;
  WebFeature.kSendBeaconQuotaExceeded = 495;
  WebFeature.kSVGSMILElementInDocument = 501;
  WebFeature.kMouseEventOffsetX = 502;
  WebFeature.kMouseEventOffsetY = 503;
  WebFeature.kMouseEventX = 504;
  WebFeature.kMouseEventY = 505;
  WebFeature.kMouseEventFromElement = 506;
  WebFeature.kMouseEventToElement = 507;
  WebFeature.kRequestFileSystem = 508;
  WebFeature.kRequestFileSystemWorker = 509;
  WebFeature.kRequestFileSystemSyncWorker = 510;
  WebFeature.kSVGStyleElementTitle = 519;
  WebFeature.kPictureSourceSrc = 520;
  WebFeature.kPicture = 521;
  WebFeature.kSizes = 522;
  WebFeature.kSrcsetXDescriptor = 523;
  WebFeature.kSrcsetWDescriptor = 524;
  WebFeature.kSelectionContainsNode = 525;
  WebFeature.kXMLExternalResourceLoad = 529;
  WebFeature.kMixedContentPrivateHostnameInPublicHostname = 530;
  WebFeature.kLegacyProtocolEmbeddedAsSubresource = 531;
  WebFeature.kRequestedSubresourceWithEmbeddedCredentials = 532;
  WebFeature.kNotificationCreated = 533;
  WebFeature.kNotificationClosed = 534;
  WebFeature.kNotificationPermissionRequested = 535;
  WebFeature.kConsoleTimeline = 538;
  WebFeature.kConsoleTimelineEnd = 539;
  WebFeature.kSRIElementWithMatchingIntegrityAttribute = 540;
  WebFeature.kSRIElementWithNonMatchingIntegrityAttribute = 541;
  WebFeature.kSRIElementWithUnparsableIntegrityAttribute = 542;
  WebFeature.kV8Animation_StartTime_AttributeGetter = 545;
  WebFeature.kV8Animation_StartTime_AttributeSetter = 546;
  WebFeature.kV8Animation_CurrentTime_AttributeGetter = 547;
  WebFeature.kV8Animation_CurrentTime_AttributeSetter = 548;
  WebFeature.kV8Animation_PlaybackRate_AttributeGetter = 549;
  WebFeature.kV8Animation_PlaybackRate_AttributeSetter = 550;
  WebFeature.kV8Animation_PlayState_AttributeGetter = 551;
  WebFeature.kV8Animation_Finish_Method = 552;
  WebFeature.kV8Animation_Play_Method = 553;
  WebFeature.kV8Animation_Pause_Method = 554;
  WebFeature.kV8Animation_Reverse_Method = 555;
  WebFeature.kBreakIterator = 556;
  WebFeature.kScreenOrientationAngle = 557;
  WebFeature.kScreenOrientationType = 558;
  WebFeature.kScreenOrientationLock = 559;
  WebFeature.kScreenOrientationUnlock = 560;
  WebFeature.kGeolocationSecureOrigin = 561;
  WebFeature.kGeolocationInsecureOrigin = 562;
  WebFeature.kNotificationSecureOrigin = 563;
  WebFeature.kNotificationInsecureOrigin = 564;
  WebFeature.kNotificationShowEvent = 565;
  WebFeature.kSVGTransformListConsolidate = 569;
  WebFeature.kSVGAnimatedTransformListBaseVal = 570;
  WebFeature.kQuotedAnimationName = 571;
  WebFeature.kQuotedKeyframesRule = 572;
  WebFeature.kSrcsetDroppedCandidate = 573;
  WebFeature.kWindowPostMessage = 574;
  WebFeature.kRenderRuby = 576;
  WebFeature.kScriptElementWithInvalidTypeHasSrc = 578;
  WebFeature.kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload = 581;
  WebFeature.kCSSSelectorPseudoScrollbar = 582;
  WebFeature.kCSSSelectorPseudoScrollbarButton = 583;
  WebFeature.kCSSSelectorPseudoScrollbarThumb = 584;
  WebFeature.kCSSSelectorPseudoScrollbarTrack = 585;
  WebFeature.kCSSSelectorPseudoScrollbarTrackPiece = 586;
  WebFeature.kLangAttribute = 587;
  WebFeature.kLangAttributeOnHTML = 588;
  WebFeature.kLangAttributeOnBody = 589;
  WebFeature.kLangAttributeDoesNotMatchToUILocale = 590;
  WebFeature.kInputTypeSubmit = 591;
  WebFeature.kInputTypeSubmitWithValue = 592;
  WebFeature.kSetReferrerPolicy = 593;
  WebFeature.kTextWholeText = 599;
  WebFeature.kNotificationCloseEvent = 603;
  WebFeature.kStyleMedia = 606;
  WebFeature.kStyleMediaType = 607;
  WebFeature.kStyleMediaMatchMedium = 608;
  WebFeature.kMixedContentPresent = 609;
  WebFeature.kMixedContentBlockable = 610;
  WebFeature.kMixedContentAudio = 611;
  WebFeature.kMixedContentDownload = 612;
  WebFeature.kMixedContentFavicon = 613;
  WebFeature.kMixedContentImage = 614;
  WebFeature.kMixedContentInternal = 615;
  WebFeature.kMixedContentPlugin = 616;
  WebFeature.kMixedContentPrefetch = 617;
  WebFeature.kMixedContentVideo = 618;
  WebFeature.kCSSSelectorPseudoFullScreenAncestor = 628;
  WebFeature.kCSSSelectorPseudoFullScreen = 629;
  WebFeature.kWebKitCSSMatrix = 630;
  WebFeature.kAudioContextCreateAnalyser = 631;
  WebFeature.kAudioContextCreateBiquadFilter = 632;
  WebFeature.kAudioContextCreateBufferSource = 633;
  WebFeature.kAudioContextCreateChannelMerger = 634;
  WebFeature.kAudioContextCreateChannelSplitter = 635;
  WebFeature.kAudioContextCreateConvolver = 636;
  WebFeature.kAudioContextCreateDelay = 637;
  WebFeature.kAudioContextCreateDynamicsCompressor = 638;
  WebFeature.kAudioContextCreateGain = 639;
  WebFeature.kAudioContextCreateMediaElementSource = 640;
  WebFeature.kAudioContextCreateMediaStreamDestination = 641;
  WebFeature.kAudioContextCreateMediaStreamSource = 642;
  WebFeature.kAudioContextCreateOscillator = 643;
  WebFeature.kAudioContextCreatePeriodicWave = 645;
  WebFeature.kAudioContextCreateScriptProcessor = 646;
  WebFeature.kAudioContextCreateStereoPanner = 647;
  WebFeature.kAudioContextCreateWaveShaper = 648;
  WebFeature.kAudioContextDecodeAudioData = 649;
  WebFeature.kAudioContextResume = 650;
  WebFeature.kAudioContextSuspend = 651;
  WebFeature.kMixedContentInNonHTTPSFrameThatRestrictsMixedContent = 661;
  WebFeature.kMixedContentInSecureFrameThatDoesNotRestrictMixedContent = 662;
  WebFeature.kMixedContentWebSocket = 663;
  WebFeature.kSyntheticKeyframesInCompositedCSSAnimation = 664;
  WebFeature.kMixedContentFormPresent = 665;
  WebFeature.kGetUserMediaInsecureOrigin = 666;
  WebFeature.kGetUserMediaSecureOrigin = 667;
  WebFeature.kDeviceMotionInsecureOrigin = 668;
  WebFeature.kDeviceMotionSecureOrigin = 669;
  WebFeature.kDeviceOrientationInsecureOrigin = 670;
  WebFeature.kDeviceOrientationSecureOrigin = 671;
  WebFeature.kSandboxViaIFrame = 672;
  WebFeature.kSandboxViaCSP = 673;
  WebFeature.kBlockedSniffingImageToScript = 674;
  WebFeature.kFetch = 675;
  WebFeature.kFetchBodyStream = 676;
  WebFeature.kXMLHttpRequestAsynchronous = 677;
  WebFeature.kWhiteSpacePreFromXMLSpace = 679;
  WebFeature.kWhiteSpaceNowrapFromXMLSpace = 680;
  WebFeature.kSVGSVGElementForceRedraw = 685;
  WebFeature.kSVGSVGElementSuspendRedraw = 686;
  WebFeature.kSVGSVGElementUnsuspendRedraw = 687;
  WebFeature.kSVGSVGElementUnsuspendRedrawAll = 688;
  WebFeature.kAudioContextClose = 689;
  WebFeature.kCSSZoomNotEqualToOne = 691;
  WebFeature.kClientRectListItem = 694;
  WebFeature.kWindowClientInformation = 695;
  WebFeature.kWindowFind = 696;
  WebFeature.kWindowScreenLeft = 697;
  WebFeature.kWindowScreenTop = 698;
  WebFeature.kV8Animation_Cancel_Method = 699;
  WebFeature.kV8Animation_Onfinish_AttributeGetter = 700;
  WebFeature.kV8Animation_Onfinish_AttributeSetter = 701;
  WebFeature.kV8Window_WebKitAnimationEvent_ConstructorGetter = 707;
  WebFeature.kCryptoGetRandomValues = 710;
  WebFeature.kSubtleCryptoEncrypt = 711;
  WebFeature.kSubtleCryptoDecrypt = 712;
  WebFeature.kSubtleCryptoSign = 713;
  WebFeature.kSubtleCryptoVerify = 714;
  WebFeature.kSubtleCryptoDigest = 715;
  WebFeature.kSubtleCryptoGenerateKey = 716;
  WebFeature.kSubtleCryptoImportKey = 717;
  WebFeature.kSubtleCryptoExportKey = 718;
  WebFeature.kSubtleCryptoDeriveBits = 719;
  WebFeature.kSubtleCryptoDeriveKey = 720;
  WebFeature.kSubtleCryptoWrapKey = 721;
  WebFeature.kSubtleCryptoUnwrapKey = 722;
  WebFeature.kCryptoAlgorithmAesCbc = 723;
  WebFeature.kCryptoAlgorithmHmac = 724;
  WebFeature.kCryptoAlgorithmRsaSsaPkcs1v1_5 = 725;
  WebFeature.kCryptoAlgorithmSha1 = 726;
  WebFeature.kCryptoAlgorithmSha256 = 727;
  WebFeature.kCryptoAlgorithmSha384 = 728;
  WebFeature.kCryptoAlgorithmSha512 = 729;
  WebFeature.kCryptoAlgorithmAesGcm = 730;
  WebFeature.kCryptoAlgorithmRsaOaep = 731;
  WebFeature.kCryptoAlgorithmAesCtr = 732;
  WebFeature.kCryptoAlgorithmAesKw = 733;
  WebFeature.kCryptoAlgorithmRsaPss = 734;
  WebFeature.kCryptoAlgorithmEcdsa = 735;
  WebFeature.kCryptoAlgorithmEcdh = 736;
  WebFeature.kCryptoAlgorithmHkdf = 737;
  WebFeature.kCryptoAlgorithmPbkdf2 = 738;
  WebFeature.kDocumentSetDomain = 739;
  WebFeature.kUpgradeInsecureRequestsEnabled = 740;
  WebFeature.kUpgradeInsecureRequestsUpgradedRequest = 741;
  WebFeature.kDocumentDesignMode = 742;
  WebFeature.kGlobalCacheStorage = 743;
  WebFeature.kNetInfo = 744;
  WebFeature.kBackgroundSync = 745;
  WebFeature.kLegacyConst = 748;
  WebFeature.kV8Permissions_Query_Method = 750;
  WebFeature.kSVGHrefBaseVal = 758;
  WebFeature.kSVGHrefAnimVal = 759;
  WebFeature.kV8CSSRuleList_Item_Method = 760;
  WebFeature.kV8MediaList_Item_Method = 761;
  WebFeature.kV8StyleSheetList_Item_Method = 762;
  WebFeature.kStyleSheetListAnonymousNamedGetter = 763;
  WebFeature.kAutocapitalizeAttribute = 764;
  WebFeature.kFullscreenSecureOrigin = 765;
  WebFeature.kFullscreenInsecureOrigin = 766;
  WebFeature.kDialogInSandboxedContext = 767;
  WebFeature.kSVGSMILAnimationInImageRegardlessOfCache = 768;
  WebFeature.kEncryptedMediaSecureOrigin = 770;
  WebFeature.kPerformanceFrameTiming = 772;
  WebFeature.kV8Element_Animate_Method = 773;
  WebFeature.kV8SVGSVGElement_GetElementById_Method = 778;
  WebFeature.kV8MessageChannel_Constructor = 780;
  WebFeature.kV8MessagePort_PostMessage_Method = 781;
  WebFeature.kV8MessagePort_Start_Method = 782;
  WebFeature.kV8MessagePort_Close_Method = 783;
  WebFeature.kMessagePortsTransferred = 784;
  WebFeature.kCSSKeyframesRuleAnonymousIndexedGetter = 785;
  WebFeature.kV8Screen_AvailLeft_AttributeGetter = 786;
  WebFeature.kV8Screen_AvailTop_AttributeGetter = 787;
  WebFeature.kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter = 791;
  WebFeature.kV8SVGStyleElement_Disabled_AttributeGetter = 798;
  WebFeature.kV8SVGStyleElement_Disabled_AttributeSetter = 799;
  WebFeature.kInputTypeFileSecureOrigin = 801;
  WebFeature.kInputTypeFileInsecureOrigin = 802;
  WebFeature.kElementAttachShadow = 804;
  WebFeature.kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter = 806;
  WebFeature.kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter = 807;
  WebFeature.kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter = 808;
  WebFeature.kHTMLLinkElementDisabled = 809;
  WebFeature.kV8HTMLLinkElement_Disabled_AttributeGetter = 810;
  WebFeature.kV8HTMLLinkElement_Disabled_AttributeSetter = 811;
  WebFeature.kV8HTMLStyleElement_Disabled_AttributeGetter = 812;
  WebFeature.kV8HTMLStyleElement_Disabled_AttributeSetter = 813;
  WebFeature.kV8DOMError_Constructor = 816;
  WebFeature.kV8DOMError_Name_AttributeGetter = 817;
  WebFeature.kV8DOMError_Message_AttributeGetter = 818;
  WebFeature.kTextInputFired = 830;
  WebFeature.kV8TextEvent_Data_AttributeGetter = 831;
  WebFeature.kV8TextEvent_InitTextEvent_Method = 832;
  WebFeature.kClientHintsDPR = 835;
  WebFeature.kClientHintsResourceWidth = 836;
  WebFeature.kClientHintsViewportWidth = 837;
  WebFeature.kSRIElementIntegrityAttributeButIneligible = 838;
  WebFeature.kFormDataAppendNull = 843;
  WebFeature.kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase = 845;
  WebFeature.kNavigatorVibrate = 850;
  WebFeature.kNavigatorVibrateSubFrame = 851;
  WebFeature.kV8XPathEvaluator_Constructor = 853;
  WebFeature.kV8XPathEvaluator_CreateExpression_Method = 854;
  WebFeature.kV8XPathEvaluator_CreateNSResolver_Method = 855;
  WebFeature.kV8XPathEvaluator_Evaluate_Method = 856;
  WebFeature.kRequestMIDIAccess_ObscuredByFootprinting = 857;
  WebFeature.kV8MouseEvent_LayerX_AttributeGetter = 858;
  WebFeature.kV8MouseEvent_LayerY_AttributeGetter = 859;
  WebFeature.kInnerTextWithShadowTree = 860;
  WebFeature.kSelectionToStringWithShadowTree = 861;
  WebFeature.kWindowFindWithShadowTree = 862;
  WebFeature.kV8CompositionEvent_InitCompositionEvent_Method = 863;
  WebFeature.kV8CustomEvent_InitCustomEvent_Method = 864;
  WebFeature.kV8DeviceMotionEvent_InitDeviceMotionEvent_Method = 865;
  WebFeature.kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method = 866;
  WebFeature.kV8Event_InitEvent_Method = 867;
  WebFeature.kV8KeyboardEvent_InitKeyboardEvent_Method = 868;
  WebFeature.kV8MouseEvent_InitMouseEvent_Method = 869;
  WebFeature.kV8MutationEvent_InitMutationEvent_Method = 870;
  WebFeature.kV8StorageEvent_InitStorageEvent_Method = 871;
  WebFeature.kV8UIEvent_InitUIEvent_Method = 873;
  WebFeature.kRequestFileSystemNonWebbyOrigin = 876;
  WebFeature.kV8MemoryInfo_TotalJSHeapSize_AttributeGetter = 879;
  WebFeature.kV8MemoryInfo_UsedJSHeapSize_AttributeGetter = 880;
  WebFeature.kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter = 881;
  WebFeature.kV8Performance_Timing_AttributeGetter = 882;
  WebFeature.kV8Performance_Navigation_AttributeGetter = 883;
  WebFeature.kV8Performance_Memory_AttributeGetter = 884;
  WebFeature.kV8SharedWorker_WorkerStart_AttributeGetter = 885;
  WebFeature.kHTMLMediaElementPreloadNone = 892;
  WebFeature.kHTMLMediaElementPreloadMetadata = 893;
  WebFeature.kHTMLMediaElementPreloadAuto = 894;
  WebFeature.kHTMLMediaElementPreloadDefault = 895;
  WebFeature.kMixedContentBlockableAllowed = 896;
  WebFeature.kPseudoBeforeAfterForInputElement = 897;
  WebFeature.kV8Permissions_Revoke_Method = 898;
  WebFeature.kLinkRelDnsPrefetch = 899;
  WebFeature.kLinkRelPreconnect = 900;
  WebFeature.kLinkRelPreload = 901;
  WebFeature.kLinkHeaderDnsPrefetch = 902;
  WebFeature.kLinkHeaderPreconnect = 903;
  WebFeature.kClientHintsMetaAcceptCH = 904;
  WebFeature.kHTMLElementDeprecatedWidth = 905;
  WebFeature.kClientHintsContentDPR = 906;
  WebFeature.kElementAttachShadowOpen = 907;
  WebFeature.kElementAttachShadowClosed = 908;
  WebFeature.kAudioParamSetValueAtTime = 909;
  WebFeature.kAudioParamLinearRampToValueAtTime = 910;
  WebFeature.kAudioParamExponentialRampToValueAtTime = 911;
  WebFeature.kAudioParamSetTargetAtTime = 912;
  WebFeature.kAudioParamSetValueCurveAtTime = 913;
  WebFeature.kAudioParamCancelScheduledValues = 914;
  WebFeature.kV8Permissions_Request_Method = 915;
  WebFeature.kLinkRelPrefetch = 917;
  WebFeature.kLinkRelPrerender = 918;
  WebFeature.kLinkRelNext = 919;
  WebFeature.kCSSValuePrefixedMinContent = 921;
  WebFeature.kCSSValuePrefixedMaxContent = 922;
  WebFeature.kCSSValuePrefixedFitContent = 923;
  WebFeature.kCSSValuePrefixedFillAvailable = 924;
  WebFeature.kPresentationDefaultRequest = 926;
  WebFeature.kPresentationAvailabilityChangeEventListener = 927;
  WebFeature.kPresentationRequestConstructor = 928;
  WebFeature.kPresentationRequestStart = 929;
  WebFeature.kPresentationRequestReconnect = 930;
  WebFeature.kPresentationRequestGetAvailability = 931;
  WebFeature.kPresentationRequestConnectionAvailableEventListener = 932;
  WebFeature.kPresentationConnectionTerminate = 933;
  WebFeature.kPresentationConnectionSend = 934;
  WebFeature.kPresentationConnectionMessageEventListener = 936;
  WebFeature.kCSSAnimationsStackedNeutralKeyframe = 937;
  WebFeature.kReadingCheckedInClickHandler = 938;
  WebFeature.kFlexboxIntrinsicSizeAlgorithmIsDifferent = 939;
  WebFeature.kHTMLImportsHasStyleSheets = 940;
  WebFeature.kNetInfoType = 946;
  WebFeature.kNetInfoDownlinkMax = 947;
  WebFeature.kNetInfoOnChange = 948;
  WebFeature.kNetInfoOnTypeChange = 949;
  WebFeature.kV8Window_Alert_Method = 950;
  WebFeature.kV8Window_Confirm_Method = 951;
  WebFeature.kV8Window_Prompt_Method = 952;
  WebFeature.kV8Window_Print_Method = 953;
  WebFeature.kV8Window_RequestIdleCallback_Method = 954;
  WebFeature.kFlexboxPercentagePaddingVertical = 955;
  WebFeature.kFlexboxPercentageMarginVertical = 956;
  WebFeature.kCSPSourceWildcardWouldMatchExactHost = 959;
  WebFeature.kCredentialManagerGet = 960;
  WebFeature.kCredentialManagerGetMediationOptional = 961;
  WebFeature.kCredentialManagerGetMediationSilent = 962;
  WebFeature.kCredentialManagerStore = 963;
  WebFeature.kBlockableMixedContentInSubframeBlocked = 966;
  WebFeature.kAddEventListenerThirdArgumentIsObject = 967;
  WebFeature.kRemoveEventListenerThirdArgumentIsObject = 968;
  WebFeature.kCSSAtRuleCharset = 969;
  WebFeature.kCSSAtRuleFontFace = 970;
  WebFeature.kCSSAtRuleImport = 971;
  WebFeature.kCSSAtRuleKeyframes = 972;
  WebFeature.kCSSAtRuleMedia = 973;
  WebFeature.kCSSAtRuleNamespace = 974;
  WebFeature.kCSSAtRulePage = 975;
  WebFeature.kCSSAtRuleSupports = 976;
  WebFeature.kCSSAtRuleViewport = 977;
  WebFeature.kCSSAtRuleWebkitKeyframes = 978;
  WebFeature.kV8HTMLFieldSetElement_Elements_AttributeGetter = 979;
  WebFeature.kHTMLMediaElementPreloadForcedNone = 980;
  WebFeature.kExternalAddSearchProvider = 981;
  WebFeature.kExternalIsSearchProviderInstalled = 982;
  WebFeature.kV8Permissions_RequestAll_Method = 983;
  WebFeature.kDeviceOrientationAbsoluteInsecureOrigin = 987;
  WebFeature.kDeviceOrientationAbsoluteSecureOrigin = 988;
  WebFeature.kFontFaceConstructor = 989;
  WebFeature.kServiceWorkerControlledPage = 990;
  WebFeature.kMeterElementWithMeterAppearance = 993;
  WebFeature.kMeterElementWithNoneAppearance = 994;
  WebFeature.kSelectionAnchorNode = 997;
  WebFeature.kSelectionAnchorOffset = 998;
  WebFeature.kSelectionFocusNode = 999;
  WebFeature.kSelectionFocusOffset = 1000;
  WebFeature.kSelectionIsCollapsed = 1001;
  WebFeature.kSelectionRangeCount = 1002;
  WebFeature.kSelectionGetRangeAt = 1003;
  WebFeature.kSelectionAddRange = 1004;
  WebFeature.kSelectionRemoveAllRanges = 1005;
  WebFeature.kSelectionCollapse = 1006;
  WebFeature.kSelectionCollapseToStart = 1007;
  WebFeature.kSelectionCollapseToEnd = 1008;
  WebFeature.kSelectionExtend = 1009;
  WebFeature.kSelectionSelectAllChildren = 1010;
  WebFeature.kSelectionDeleteDromDocument = 1011;
  WebFeature.kSelectionDOMString = 1012;
  WebFeature.kInputTypeRangeVerticalAppearance = 1013;
  WebFeature.kCSSFilterReference = 1014;
  WebFeature.kCSSFilterGrayscale = 1015;
  WebFeature.kCSSFilterSepia = 1016;
  WebFeature.kCSSFilterSaturate = 1017;
  WebFeature.kCSSFilterHueRotate = 1018;
  WebFeature.kCSSFilterInvert = 1019;
  WebFeature.kCSSFilterOpacity = 1020;
  WebFeature.kCSSFilterBrightness = 1021;
  WebFeature.kCSSFilterContrast = 1022;
  WebFeature.kCSSFilterBlur = 1023;
  WebFeature.kCSSFilterDropShadow = 1024;
  WebFeature.kBackgroundSyncRegister = 1025;
  WebFeature.kExecCommandOnInputOrTextarea = 1027;
  WebFeature.kV8History_ScrollRestoration_AttributeGetter = 1028;
  WebFeature.kV8History_ScrollRestoration_AttributeSetter = 1029;
  WebFeature.kSVG1DOMFilter = 1030;
  WebFeature.kOfflineAudioContextStartRendering = 1031;
  WebFeature.kOfflineAudioContextSuspend = 1032;
  WebFeature.kOfflineAudioContextResume = 1033;
  WebFeature.kSVG1DOMPaintServer = 1035;
  WebFeature.kSVGSVGElementFragmentSVGView = 1036;
  WebFeature.kSVGSVGElementFragmentSVGViewElement = 1037;
  WebFeature.kPresentationConnectionClose = 1038;
  WebFeature.kSVG1DOMShape = 1039;
  WebFeature.kSVG1DOMText = 1040;
  WebFeature.kRTCPeerConnectionConstructorConstraints = 1041;
  WebFeature.kRTCPeerConnectionConstructorCompliant = 1042;
  WebFeature.kRTCPeerConnectionCreateOfferLegacyFailureCallback = 1044;
  WebFeature.kRTCPeerConnectionCreateOfferLegacyConstraints = 1045;
  WebFeature.kRTCPeerConnectionCreateOfferLegacyOfferOptions = 1046;
  WebFeature.kRTCPeerConnectionCreateOfferLegacyCompliant = 1047;
  WebFeature.kRTCPeerConnectionCreateAnswerLegacyFailureCallback = 1049;
  WebFeature.kRTCPeerConnectionCreateAnswerLegacyConstraints = 1050;
  WebFeature.kRTCPeerConnectionCreateAnswerLegacyCompliant = 1051;
  WebFeature.kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback = 1052;
  WebFeature.kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback = 1053;
  WebFeature.kRTCPeerConnectionSetLocalDescriptionLegacyCompliant = 1054;
  WebFeature.kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback = 1055;
  WebFeature.kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback = 1056;
  WebFeature.kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant = 1057;
  WebFeature.kRTCPeerConnectionGetStatsLegacyNonCompliant = 1058;
  WebFeature.kNodeFilterIsFunction = 1059;
  WebFeature.kNodeFilterIsObject = 1060;
  WebFeature.kCSSSelectorInternalPseudoListBox = 1062;
  WebFeature.kCSSSelectorInternalMediaControlsOverlayCastButton = 1064;
  WebFeature.kCSSSelectorInternalPseudoSpatialNavigationFocus = 1065;
  WebFeature.kSameOriginTextScript = 1066;
  WebFeature.kSameOriginApplicationScript = 1067;
  WebFeature.kSameOriginOtherScript = 1068;
  WebFeature.kCrossOriginTextScript = 1069;
  WebFeature.kCrossOriginApplicationScript = 1070;
  WebFeature.kCrossOriginOtherScript = 1071;
  WebFeature.kSVG1DOMSVGTests = 1072;
  WebFeature.kDisableRemotePlaybackAttribute = 1074;
  WebFeature.kV8SloppyMode = 1075;
  WebFeature.kV8StrictMode = 1076;
  WebFeature.kV8StrongMode = 1077;
  WebFeature.kAudioNodeConnectToAudioNode = 1078;
  WebFeature.kAudioNodeConnectToAudioParam = 1079;
  WebFeature.kAudioNodeDisconnectFromAudioNode = 1080;
  WebFeature.kAudioNodeDisconnectFromAudioParam = 1081;
  WebFeature.kV8CSSFontFaceRule_Style_AttributeGetter = 1082;
  WebFeature.kSelectionCollapseNull = 1083;
  WebFeature.kSelectionSetBaseAndExtentNull = 1084;
  WebFeature.kV8SVGSVGElement_CreateSVGNumber_Method = 1085;
  WebFeature.kV8SVGSVGElement_CreateSVGLength_Method = 1086;
  WebFeature.kV8SVGSVGElement_CreateSVGAngle_Method = 1087;
  WebFeature.kV8SVGSVGElement_CreateSVGPoint_Method = 1088;
  WebFeature.kV8SVGSVGElement_CreateSVGMatrix_Method = 1089;
  WebFeature.kV8SVGSVGElement_CreateSVGRect_Method = 1090;
  WebFeature.kV8SVGSVGElement_CreateSVGTransform_Method = 1091;
  WebFeature.kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method = 1092;
  WebFeature.kFormNameAccessForNonDescendantImageElement = 1093;
  WebFeature.kV8RegExpPrototypeStickyGetter = 1096;
  WebFeature.kV8RegExpPrototypeToString = 1097;
  WebFeature.kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter = 1098;
  WebFeature.kDataElement = 1099;
  WebFeature.kTimeElement = 1100;
  WebFeature.kSVG1DOMUriReference = 1101;
  WebFeature.kSVG1DOMZoomAndPan = 1102;
  WebFeature.kV8SVGGraphicsElement_Transform_AttributeGetter = 1103;
  WebFeature.kMenuItemElement = 1104;
  WebFeature.kMenuItemCloseTag = 1105;
  WebFeature.kSVG1DOMMarkerElement = 1106;
  WebFeature.kSVG1DOMUseElement = 1107;
  WebFeature.kSVG1DOMMaskElement = 1108;
  WebFeature.kV8SVGAElement_Target_AttributeGetter = 1109;
  WebFeature.kV8SVGClipPathElement_ClipPathUnits_AttributeGetter = 1110;
  WebFeature.kSVG1DOMFitToViewBox = 1111;
  WebFeature.kSVG1DOMSVGElement = 1114;
  WebFeature.kSVG1DOMImageElement = 1115;
  WebFeature.kSVG1DOMForeignObjectElement = 1116;
  WebFeature.kAudioContextCreateIIRFilter = 1117;
  WebFeature.kCSSSelectorPseudoSlotted = 1118;
  WebFeature.kMediaDevicesEnumerateDevices = 1119;
  WebFeature.kEventComposedPath = 1123;
  WebFeature.kLinkHeaderPreload = 1124;
  WebFeature.kMouseWheelEvent = 1125;
  WebFeature.kWheelEvent = 1126;
  WebFeature.kMouseWheelAndWheelEvent = 1127;
  WebFeature.kBodyScrollsInAdditionToViewport = 1128;
  WebFeature.kDocumentDesignModeEnabeld = 1129;
  WebFeature.kContentEditableTrue = 1130;
  WebFeature.kContentEditableTrueOnHTML = 1131;
  WebFeature.kContentEditablePlainTextOnly = 1132;
  WebFeature.kV8RegExpPrototypeUnicodeGetter = 1133;
  WebFeature.kV8IntlV8Parse = 1134;
  WebFeature.kV8IntlPattern = 1135;
  WebFeature.kV8IntlResolved = 1136;
  WebFeature.kV8PromiseChain = 1137;
  WebFeature.kV8PromiseAccept = 1138;
  WebFeature.kV8PromiseDefer = 1139;
  WebFeature.kEventComposed = 1140;
  WebFeature.kGeolocationInsecureOriginIframe = 1141;
  WebFeature.kGeolocationSecureOriginIframe = 1142;
  WebFeature.kRequestMIDIAccessIframe_ObscuredByFootprinting = 1143;
  WebFeature.kGetUserMediaInsecureOriginIframe = 1144;
  WebFeature.kGetUserMediaSecureOriginIframe = 1145;
  WebFeature.kElementRequestPointerLockIframe = 1146;
  WebFeature.kNotificationAPIInsecureOriginIframe = 1147;
  WebFeature.kNotificationAPISecureOriginIframe = 1148;
  WebFeature.kWebSocket = 1149;
  WebFeature.kMediaStreamConstraintsNameValue = 1150;
  WebFeature.kMediaStreamConstraintsFromDictionary = 1151;
  WebFeature.kMediaStreamConstraintsConformant = 1152;
  WebFeature.kCSSSelectorIndirectAdjacent = 1153;
  WebFeature.kCreateImageBitmap = 1156;
  WebFeature.kPresentationConnectionConnectEventListener = 1157;
  WebFeature.kPresentationConnectionCloseEventListener = 1158;
  WebFeature.kPresentationConnectionTerminateEventListener = 1159;
  WebFeature.kDocumentCreateEventAnimationEvent = 1162;
  WebFeature.kDocumentCreateEventBeforeUnloadEvent = 1166;
  WebFeature.kDocumentCreateEventCompositionEvent = 1168;
  WebFeature.kDocumentCreateEventDragEvent = 1169;
  WebFeature.kDocumentCreateEventErrorEvent = 1170;
  WebFeature.kDocumentCreateEventFocusEvent = 1171;
  WebFeature.kDocumentCreateEventHashChangeEvent = 1172;
  WebFeature.kDocumentCreateEventMutationEvent = 1173;
  WebFeature.kDocumentCreateEventPageTransitionEvent = 1174;
  WebFeature.kDocumentCreateEventPopStateEvent = 1176;
  WebFeature.kDocumentCreateEventTextEvent = 1182;
  WebFeature.kDocumentCreateEventTransitionEvent = 1183;
  WebFeature.kDocumentCreateEventWheelEvent = 1184;
  WebFeature.kDocumentCreateEventTrackEvent = 1186;
  WebFeature.kDocumentCreateEventMutationEvents = 1188;
  WebFeature.kDocumentCreateEventSVGEvents = 1190;
  WebFeature.kDocumentCreateEventDeviceMotionEvent = 1195;
  WebFeature.kDocumentCreateEventDeviceOrientationEvent = 1196;
  WebFeature.kDocumentCreateEventIDBVersionChangeEvent = 1201;
  WebFeature.kDocumentCreateEventStorageEvent = 1221;
  WebFeature.kDocumentCreateEventWebGLContextEvent = 1224;
  WebFeature.kDocumentCreateEventCloseEvent = 1227;
  WebFeature.kDocumentCreateEventKeyboardEvents = 1228;
  WebFeature.kHTMLMediaElement = 1229;
  WebFeature.kHTMLMediaElementInDocument = 1230;
  WebFeature.kHTMLMediaElementControlsAttribute = 1231;
  WebFeature.kV8Animation_Oncancel_AttributeGetter = 1233;
  WebFeature.kV8Animation_Oncancel_AttributeSetter = 1234;
  WebFeature.kV8HTMLCommentInExternalScript = 1235;
  WebFeature.kV8HTMLComment = 1236;
  WebFeature.kV8SloppyModeBlockScopedFunctionRedefinition = 1237;
  WebFeature.kV8ForInInitializer = 1238;
  WebFeature.kV8Animation_Id_AttributeGetter = 1239;
  WebFeature.kV8Animation_Id_AttributeSetter = 1240;
  WebFeature.kApplicationCacheManifestSelectInsecureOrigin = 1245;
  WebFeature.kApplicationCacheManifestSelectSecureOrigin = 1246;
  WebFeature.kApplicationCacheAPIInsecureOrigin = 1247;
  WebFeature.kApplicationCacheAPISecureOrigin = 1248;
  WebFeature.kCSSAtRuleApply = 1249;
  WebFeature.kCSSSelectorPseudoAny = 1250;
  WebFeature.kHTMLLabelElementControlForNonFormAssociatedElement = 1263;
  WebFeature.kHTMLMediaElementLoadNetworkEmptyNotPaused = 1265;
  WebFeature.kV8Window_WebkitSpeechGrammar_ConstructorGetter = 1267;
  WebFeature.kV8Window_WebkitSpeechGrammarList_ConstructorGetter = 1268;
  WebFeature.kV8Window_WebkitSpeechRecognition_ConstructorGetter = 1269;
  WebFeature.kV8Window_WebkitSpeechRecognitionError_ConstructorGetter = 1270;
  WebFeature.kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter = 1271;
  WebFeature.kV8Window_SpeechSynthesis_AttributeGetter = 1272;
  WebFeature.kV8IDBFactory_WebkitGetDatabaseNames_Method = 1273;
  WebFeature.kScriptPassesCSPDynamic = 1275;
  WebFeature.kCSPWithStrictDynamic = 1277;
  WebFeature.kScrollAnchored = 1278;
  WebFeature.kAddEventListenerFourArguments = 1279;
  WebFeature.kRemoveEventListenerFourArguments = 1280;
  WebFeature.kSVGCalcModeDiscrete = 1287;
  WebFeature.kSVGCalcModeLinear = 1288;
  WebFeature.kSVGCalcModePaced = 1289;
  WebFeature.kSVGCalcModeSpline = 1290;
  WebFeature.kFormSubmissionStarted = 1291;
  WebFeature.kFormValidationStarted = 1292;
  WebFeature.kFormValidationAbortedSubmission = 1293;
  WebFeature.kFormValidationShowedMessage = 1294;
  WebFeature.kV8Document_Images_AttributeGetter = 1297;
  WebFeature.kV8Document_Embeds_AttributeGetter = 1298;
  WebFeature.kV8Document_Plugins_AttributeGetter = 1299;
  WebFeature.kV8Document_Links_AttributeGetter = 1300;
  WebFeature.kV8Document_Forms_AttributeGetter = 1301;
  WebFeature.kV8Document_Scripts_AttributeGetter = 1302;
  WebFeature.kV8Document_Anchors_AttributeGetter = 1303;
  WebFeature.kV8Document_Applets_AttributeGetter = 1304;
  WebFeature.kXMLHttpRequestCrossOriginWithCredentials = 1305;
  WebFeature.kMediaStreamTrackRemote = 1306;
  WebFeature.kV8Node_IsConnected_AttributeGetter = 1307;
  WebFeature.kShadowRootDelegatesFocus = 1308;
  WebFeature.kMixedShadowRootV0AndV1 = 1309;
  WebFeature.kFileAPINativeLineEndings = 1320;
  WebFeature.kPointerEventAttributeCount = 1321;
  WebFeature.kCompositedReplication = 1322;
  WebFeature.kV8DataTransferItem_WebkitGetAsEntry_Method = 1325;
  WebFeature.kV8HTMLInputElement_WebkitEntries_AttributeGetter = 1326;
  WebFeature.kEntry_Filesystem_AttributeGetter_IsolatedFileSystem = 1327;
  WebFeature.kEntry_GetMetadata_Method_IsolatedFileSystem = 1328;
  WebFeature.kEntry_MoveTo_Method_IsolatedFileSystem = 1329;
  WebFeature.kEntry_CopyTo_Method_IsolatedFileSystem = 1330;
  WebFeature.kEntry_Remove_Method_IsolatedFileSystem = 1331;
  WebFeature.kEntry_GetParent_Method_IsolatedFileSystem = 1332;
  WebFeature.kEntry_ToURL_Method_IsolatedFileSystem = 1333;
  WebFeature.kDuring_Microtask_Alert = 1334;
  WebFeature.kDuring_Microtask_Confirm = 1335;
  WebFeature.kDuring_Microtask_Print = 1336;
  WebFeature.kDuring_Microtask_Prompt = 1337;
  WebFeature.kDuring_Microtask_SyncXHR = 1338;
  WebFeature.kCredentialManagerGetReturnedCredential = 1342;
  WebFeature.kGeolocationInsecureOriginDeprecatedNotRemoved = 1343;
  WebFeature.kGeolocationInsecureOriginIframeDeprecatedNotRemoved = 1344;
  WebFeature.kProgressElementWithNoneAppearance = 1345;
  WebFeature.kProgressElementWithProgressBarAppearance = 1346;
  WebFeature.kPointerEventAddListenerCount = 1347;
  WebFeature.kCSSValueAppearanceNone = 1351;
  WebFeature.kCSSValueAppearanceNotNone = 1352;
  WebFeature.kCSSValueAppearanceOthers = 1353;
  WebFeature.kCSSValueAppearanceButton = 1354;
  WebFeature.kCSSValueAppearanceCaret = 1355;
  WebFeature.kCSSValueAppearanceCheckbox = 1356;
  WebFeature.kCSSValueAppearanceMenulist = 1357;
  WebFeature.kCSSValueAppearanceMenulistButton = 1358;
  WebFeature.kCSSValueAppearanceListbox = 1359;
  WebFeature.kCSSValueAppearanceRadio = 1360;
  WebFeature.kCSSValueAppearanceSearchField = 1361;
  WebFeature.kCSSValueAppearanceTextField = 1362;
  WebFeature.kAudioContextCreatePannerAutomated = 1363;
  WebFeature.kPannerNodeSetPosition = 1364;
  WebFeature.kPannerNodeSetOrientation = 1365;
  WebFeature.kAudioListenerSetPosition = 1366;
  WebFeature.kAudioListenerSetOrientation = 1367;
  WebFeature.kIntersectionObserver_Constructor = 1368;
  WebFeature.kDurableStoragePersist = 1369;
  WebFeature.kDurableStoragePersisted = 1370;
  WebFeature.kDurableStorageEstimate = 1371;
  WebFeature.kCSSDeepCombinatorAndShadow = 1375;
  WebFeature.kOpacityWithPreserve3DQuirk = 1376;
  WebFeature.kCSSSelectorPseudoReadOnly = 1377;
  WebFeature.kCSSSelectorPseudoReadWrite = 1378;
  WebFeature.kCSSSelectorPseudoDefined = 1383;
  WebFeature.kRTCPeerConnectionAddIceCandidatePromise = 1384;
  WebFeature.kRTCPeerConnectionAddIceCandidateLegacy = 1385;
  WebFeature.kRTCIceCandidateDefaultSdpMLineIndex = 1386;
  WebFeature.kMediaStreamConstraintsOldAndNew = 1389;
  WebFeature.kV8ArrayProtectorDirtied = 1390;
  WebFeature.kV8ArraySpeciesModified = 1391;
  WebFeature.kV8ArrayPrototypeConstructorModified = 1392;
  WebFeature.kV8ArrayInstanceProtoModified = 1393;
  WebFeature.kV8ArrayInstanceConstructorModified = 1394;
  WebFeature.kV8LegacyFunctionDeclaration = 1395;
  WebFeature.kV8RegExpPrototypeSourceGetter = 1396;
  WebFeature.kV8RegExpPrototypeOldFlagGetter = 1397;
  WebFeature.kV8DecimalWithLeadingZeroInStrictMode = 1398;
  WebFeature.kGetUserMediaPrefixed = 1400;
  WebFeature.kGetUserMediaLegacy = 1401;
  WebFeature.kGetUserMediaPromise = 1402;
  WebFeature.kCSSFilterFunctionNoArguments = 1403;
  WebFeature.kV8LegacyDateParser = 1404;
  WebFeature.kOpenSearchInsecureOriginInsecureTarget = 1405;
  WebFeature.kOpenSearchInsecureOriginSecureTarget = 1406;
  WebFeature.kOpenSearchSecureOriginInsecureTarget = 1407;
  WebFeature.kOpenSearchSecureOriginSecureTarget = 1408;
  WebFeature.kRegisterProtocolHandlerSecureOrigin = 1409;
  WebFeature.kRegisterProtocolHandlerInsecureOrigin = 1410;
  WebFeature.kCrossOriginWindowAlert = 1411;
  WebFeature.kCrossOriginWindowConfirm = 1412;
  WebFeature.kCrossOriginWindowPrompt = 1413;
  WebFeature.kCrossOriginWindowPrint = 1414;
  WebFeature.kMediaStreamOnActive = 1415;
  WebFeature.kMediaStreamOnInactive = 1416;
  WebFeature.kAddEventListenerPassiveTrue = 1417;
  WebFeature.kAddEventListenerPassiveFalse = 1418;
  WebFeature.kCSPReferrerDirective = 1419;
  WebFeature.kDocumentOpen = 1420;
  WebFeature.kElementRequestPointerLockInShadow = 1421;
  WebFeature.kShadowRootPointerLockElement = 1422;
  WebFeature.kDocumentPointerLockElementInV0Shadow = 1423;
  WebFeature.kTextAreaMaxLength = 1424;
  WebFeature.kTextAreaMinLength = 1425;
  WebFeature.kTopNavigationFromSubFrame = 1426;
  WebFeature.kPrefixedElementRequestFullscreenInShadow = 1427;
  WebFeature.kMediaSourceAbortRemove = 1428;
  WebFeature.kMediaSourceDurationTruncatingBuffered = 1429;
  WebFeature.kAudioContextCrossOriginIframe = 1430;
  WebFeature.kPointerEventSetCapture = 1431;
  WebFeature.kPointerEventDispatch = 1432;
  WebFeature.kMIDIMessageEventReceivedTime = 1433;
  WebFeature.kSummaryElementWithDisplayBlockAuthorRule = 1434;
  WebFeature.kV8MediaStream_Active_AttributeGetter = 1435;
  WebFeature.kBeforeInstallPromptEvent = 1436;
  WebFeature.kBeforeInstallPromptEventUserChoice = 1437;
  WebFeature.kBeforeInstallPromptEventPreventDefault = 1438;
  WebFeature.kBeforeInstallPromptEventPrompt = 1439;
  WebFeature.kExecCommandAltersHTMLStructure = 1440;
  WebFeature.kSecureContextCheckPassed = 1441;
  WebFeature.kSecureContextCheckFailed = 1442;
  WebFeature.kSecureContextCheckForSandboxedOriginPassed = 1443;
  WebFeature.kSecureContextCheckForSandboxedOriginFailed = 1444;
  WebFeature.kV8DefineGetterOrSetterWouldThrow = 1445;
  WebFeature.kV8FunctionConstructorReturnedUndefined = 1446;
  WebFeature.kV8BroadcastChannel_Constructor = 1447;
  WebFeature.kV8BroadcastChannel_PostMessage_Method = 1448;
  WebFeature.kV8BroadcastChannel_Close_Method = 1449;
  WebFeature.kTouchStartFired = 1450;
  WebFeature.kMouseDownFired = 1451;
  WebFeature.kPointerDownFired = 1452;
  WebFeature.kPointerDownFiredForTouch = 1453;
  WebFeature.kPointerEventDispatchPointerDown = 1454;
  WebFeature.kSVGSMILBeginOrEndEventValue = 1455;
  WebFeature.kSVGSMILBeginOrEndSyncbaseValue = 1456;
  WebFeature.kSVGSMILElementInsertedAfterLoad = 1457;
  WebFeature.kV8VisualViewport_OffsetLeft_AttributeGetter = 1458;
  WebFeature.kV8VisualViewport_OffsetTop_AttributeGetter = 1459;
  WebFeature.kV8VisualViewport_PageLeft_AttributeGetter = 1460;
  WebFeature.kV8VisualViewport_PageTop_AttributeGetter = 1461;
  WebFeature.kV8VisualViewport_Width_AttributeGetter = 1462;
  WebFeature.kV8VisualViewport_Height_AttributeGetter = 1463;
  WebFeature.kV8VisualViewport_Scale_AttributeGetter = 1464;
  WebFeature.kVisualViewportScrollFired = 1465;
  WebFeature.kVisualViewportResizeFired = 1466;
  WebFeature.kNodeGetRootNode = 1467;
  WebFeature.kSlotChangeEventAddListener = 1468;
  WebFeature.kCSSValueAppearanceButtonRendered = 1469;
  WebFeature.kCSSValueAppearanceButtonForAnchor = 1470;
  WebFeature.kCSSValueAppearanceButtonForButton = 1471;
  WebFeature.kCSSValueAppearanceButtonForOtherButtons = 1472;
  WebFeature.kCSSValueAppearanceTextFieldRendered = 1473;
  WebFeature.kCSSValueAppearanceTextFieldForSearch = 1474;
  WebFeature.kCSSValueAppearanceTextFieldForTextField = 1475;
  WebFeature.kRTCPeerConnectionGetStats = 1476;
  WebFeature.kSVGSMILAnimationAppliedEffect = 1477;
  WebFeature.kPerformanceResourceTimingSizes = 1478;
  WebFeature.kEventSourceDocument = 1479;
  WebFeature.kEventSourceWorker = 1480;
  WebFeature.kSingleOriginInTimingAllowOrigin = 1481;
  WebFeature.kMultipleOriginsInTimingAllowOrigin = 1482;
  WebFeature.kStarInTimingAllowOrigin = 1483;
  WebFeature.kSVGSMILAdditiveAnimation = 1484;
  WebFeature.kSendBeaconWithNonSimpleContentType = 1485;
  WebFeature.kChromeLoadTimesRequestTime = 1486;
  WebFeature.kChromeLoadTimesStartLoadTime = 1487;
  WebFeature.kChromeLoadTimesCommitLoadTime = 1488;
  WebFeature.kChromeLoadTimesFinishDocumentLoadTime = 1489;
  WebFeature.kChromeLoadTimesFinishLoadTime = 1490;
  WebFeature.kChromeLoadTimesFirstPaintTime = 1491;
  WebFeature.kChromeLoadTimesFirstPaintAfterLoadTime = 1492;
  WebFeature.kChromeLoadTimesNavigationType = 1493;
  WebFeature.kChromeLoadTimesWasFetchedViaSpdy = 1494;
  WebFeature.kChromeLoadTimesWasNpnNegotiated = 1495;
  WebFeature.kChromeLoadTimesNpnNegotiatedProtocol = 1496;
  WebFeature.kChromeLoadTimesWasAlternateProtocolAvailable = 1497;
  WebFeature.kChromeLoadTimesConnectionInfo = 1498;
  WebFeature.kChromeLoadTimesUnknown = 1499;
  WebFeature.kSVGViewElement = 1500;
  WebFeature.kWebShareShare = 1501;
  WebFeature.kAuxclickAddListenerCount = 1502;
  WebFeature.kHTMLCanvasElement = 1503;
  WebFeature.kSVGSMILAnimationElementTiming = 1504;
  WebFeature.kSVGSMILBeginEndAnimationElement = 1505;
  WebFeature.kSVGSMILPausing = 1506;
  WebFeature.kSVGSMILCurrentTime = 1507;
  WebFeature.kHTMLBodyElementOnSelectionChangeAttribute = 1508;
  WebFeature.kForeignFetchInterception = 1509;
  WebFeature.kUsbGetDevices = 1519;
  WebFeature.kUsbRequestDevice = 1520;
  WebFeature.kUsbDeviceOpen = 1521;
  WebFeature.kUsbDeviceClose = 1522;
  WebFeature.kUsbDeviceSelectConfiguration = 1523;
  WebFeature.kUsbDeviceClaimInterface = 1524;
  WebFeature.kUsbDeviceReleaseInterface = 1525;
  WebFeature.kUsbDeviceSelectAlternateInterface = 1526;
  WebFeature.kUsbDeviceControlTransferIn = 1527;
  WebFeature.kUsbDeviceControlTransferOut = 1528;
  WebFeature.kUsbDeviceClearHalt = 1529;
  WebFeature.kUsbDeviceTransferIn = 1530;
  WebFeature.kUsbDeviceTransferOut = 1531;
  WebFeature.kUsbDeviceIsochronousTransferIn = 1532;
  WebFeature.kUsbDeviceIsochronousTransferOut = 1533;
  WebFeature.kUsbDeviceReset = 1534;
  WebFeature.kPointerEnterLeaveFired = 1535;
  WebFeature.kPointerOverOutFired = 1536;
  WebFeature.kDraggableAttribute = 1539;
  WebFeature.kCleanScriptElementWithNonce = 1540;
  WebFeature.kPotentiallyInjectedScriptElementWithNonce = 1541;
  WebFeature.kPendingStylesheetAddedAfterBodyStarted = 1542;
  WebFeature.kUntrustedMouseDownEventDispatchedToSelect = 1543;
  WebFeature.kBlockedSniffingAudioToScript = 1544;
  WebFeature.kBlockedSniffingVideoToScript = 1545;
  WebFeature.kBlockedSniffingCSVToScript = 1546;
  WebFeature.kMetaSetCookie = 1547;
  WebFeature.kMetaRefresh = 1548;
  WebFeature.kMetaSetCookieWhenCSPBlocksInlineScript = 1549;
  WebFeature.kMetaRefreshWhenCSPBlocksInlineScript = 1550;
  WebFeature.kMiddleClickAutoscrollStart = 1551;
  WebFeature.kRTCPeerConnectionCreateOfferOptionsOfferToReceive = 1553;
  WebFeature.kDragAndDropScrollStart = 1554;
  WebFeature.kPresentationConnectionListConnectionAvailableEventListener = 1555;
  WebFeature.kWebAudioAutoplayCrossOriginIframe = 1556;
  WebFeature.kVRGetDisplays = 1558;
  WebFeature.kXSSAuditorBlockedScript = 1581;
  WebFeature.kXSSAuditorBlockedEntirePage = 1582;
  WebFeature.kXSSAuditorDisabled = 1583;
  WebFeature.kXSSAuditorEnabledFilter = 1584;
  WebFeature.kXSSAuditorEnabledBlock = 1585;
  WebFeature.kXSSAuditorInvalid = 1586;
  WebFeature.kTextInputEventOnInput = 1589;
  WebFeature.kTextInputEventOnTextArea = 1590;
  WebFeature.kTextInputEventOnContentEditable = 1591;
  WebFeature.kTextInputEventOnNotNode = 1592;
  WebFeature.kWebkitBeforeTextInsertedOnInput = 1593;
  WebFeature.kWebkitBeforeTextInsertedOnTextArea = 1594;
  WebFeature.kWebkitBeforeTextInsertedOnContentEditable = 1595;
  WebFeature.kWebkitBeforeTextInsertedOnNotNode = 1596;
  WebFeature.kWebkitEditableContentChangedOnInput = 1597;
  WebFeature.kWebkitEditableContentChangedOnTextArea = 1598;
  WebFeature.kWebkitEditableContentChangedOnContentEditable = 1599;
  WebFeature.kWebkitEditableContentChangedOnNotNode = 1600;
  WebFeature.kV8NavigatorUserMediaError_ConstraintName_AttributeGetter = 1601;
  WebFeature.kV8HTMLMediaElement_SrcObject_AttributeGetter = 1602;
  WebFeature.kV8HTMLMediaElement_SrcObject_AttributeSetter = 1603;
  WebFeature.kCreateObjectURLBlob = 1604;
  WebFeature.kCreateObjectURLMediaSource = 1605;
  WebFeature.kCreateObjectURLMediaStream = 1606;
  WebFeature.kLongTaskObserver = 1615;
  WebFeature.kCSSOffsetInEffect = 1617;
  WebFeature.kVRGetDisplaysInsecureOrigin = 1618;
  WebFeature.kVRRequestPresent = 1619;
  WebFeature.kVRRequestPresentInsecureOrigin = 1620;
  WebFeature.kVRDeprecatedFieldOfView = 1621;
  WebFeature.kVideoInCanvas = 1622;
  WebFeature.kHiddenAutoplayedVideoInCanvas = 1623;
  WebFeature.kOffscreenCanvas = 1624;
  WebFeature.kGamepadPose = 1625;
  WebFeature.kGamepadHand = 1626;
  WebFeature.kGamepadDisplayId = 1627;
  WebFeature.kGamepadButtonTouched = 1628;
  WebFeature.kGamepadPoseHasOrientation = 1629;
  WebFeature.kGamepadPoseHasPosition = 1630;
  WebFeature.kGamepadPosePosition = 1631;
  WebFeature.kGamepadPoseLinearVelocity = 1632;
  WebFeature.kGamepadPoseLinearAcceleration = 1633;
  WebFeature.kGamepadPoseOrientation = 1634;
  WebFeature.kGamepadPoseAngularVelocity = 1635;
  WebFeature.kGamepadPoseAngularAcceleration = 1636;
  WebFeature.kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter = 1638;
  WebFeature.kV8RTCDataChannel_MaxRetransmits_AttributeGetter = 1639;
  WebFeature.kV8RTCDataChannel_Reliable_AttributeGetter = 1640;
  WebFeature.kV8RTCPeerConnection_AddStream_Method = 1641;
  WebFeature.kV8RTCPeerConnection_CreateDTMFSender_Method = 1642;
  WebFeature.kV8RTCPeerConnection_GetLocalStreams_Method = 1643;
  WebFeature.kV8RTCPeerConnection_GetRemoteStreams_Method = 1644;
  WebFeature.kV8RTCPeerConnection_RemoveStream_Method = 1646;
  WebFeature.kRTCPeerConnectionCreateDataChannelMaxRetransmitTime = 1648;
  WebFeature.kRTCPeerConnectionCreateDataChannelMaxRetransmits = 1649;
  WebFeature.kAudioContextCreateConstantSource = 1650;
  WebFeature.kWebAudioConstantSourceNode = 1651;
  WebFeature.kLoopbackEmbeddedInSecureContext = 1652;
  WebFeature.kLoopbackEmbeddedInNonSecureContext = 1653;
  WebFeature.kBlinkMacSystemFont = 1654;
  WebFeature.kRTCIceServerURL = 1656;
  WebFeature.kRTCIceServerURLs = 1657;
  WebFeature.kOffscreenCanvasTransferToImageBitmap2D = 1658;
  WebFeature.kOffscreenCanvasTransferToImageBitmapWebGL = 1659;
  WebFeature.kOffscreenCanvasCommit2D = 1660;
  WebFeature.kOffscreenCanvasCommitWebGL = 1661;
  WebFeature.kRTCConfigurationIceTransportPolicy = 1662;
  WebFeature.kRTCConfigurationIceTransports = 1664;
  WebFeature.kDocumentFullscreenElementInV0Shadow = 1665;
  WebFeature.kScriptWithCSPBypassingSchemeParserInserted = 1666;
  WebFeature.kScriptWithCSPBypassingSchemeNotParserInserted = 1667;
  WebFeature.kDocumentCreateElement2ndArgStringHandling = 1668;
  WebFeature.kV8MediaRecorder_Start_Method = 1669;
  WebFeature.kWebBluetoothRequestDevice = 1670;
  WebFeature.kUnitlessPerspectiveInPerspectiveProperty = 1671;
  WebFeature.kUnitlessPerspectiveInTransformProperty = 1672;
  WebFeature.kV8RTCSessionDescription_Type_AttributeGetter = 1673;
  WebFeature.kV8RTCSessionDescription_Type_AttributeSetter = 1674;
  WebFeature.kV8RTCSessionDescription_Sdp_AttributeGetter = 1675;
  WebFeature.kV8RTCSessionDescription_Sdp_AttributeSetter = 1676;
  WebFeature.kRTCSessionDescriptionInitNoType = 1677;
  WebFeature.kRTCSessionDescriptionInitNoSdp = 1678;
  WebFeature.kHTMLMediaElementPreloadForcedMetadata = 1679;
  WebFeature.kGenericSensorStart = 1680;
  WebFeature.kGenericSensorStop = 1681;
  WebFeature.kTouchEventPreventedNoTouchAction = 1682;
  WebFeature.kTouchEventPreventedForcedDocumentPassiveNoTouchAction = 1683;
  WebFeature.kV8Event_StopPropagation_Method = 1684;
  WebFeature.kV8Event_StopImmediatePropagation_Method = 1685;
  WebFeature.kImageCaptureConstructor = 1686;
  WebFeature.kV8Document_RootScroller_AttributeGetter = 1687;
  WebFeature.kV8Document_RootScroller_AttributeSetter = 1688;
  WebFeature.kCustomElementRegistryDefine = 1689;
  WebFeature.kLinkHeaderServiceWorker = 1690;
  WebFeature.kCSSShadowPiercingDescendantCombinator = 1691;
  WebFeature.kCSSFlexibleBox = 1692;
  WebFeature.kCSSGridLayout = 1693;
  WebFeature.kFullscreenAllowedByOrientationChange = 1696;
  WebFeature.kServiceWorkerRespondToNavigationRequestWithRedirectedResponse = 1697;
  WebFeature.kV8AudioContext_Constructor = 1698;
  WebFeature.kV8OfflineAudioContext_Constructor = 1699;
  WebFeature.kAppInstalledEventAddListener = 1700;
  WebFeature.kAudioContextGetOutputTimestamp = 1701;
  WebFeature.kV8MediaStreamAudioDestinationNode_Constructor = 1702;
  WebFeature.kV8AnalyserNode_Constructor = 1703;
  WebFeature.kV8AudioBuffer_Constructor = 1704;
  WebFeature.kV8AudioBufferSourceNode_Constructor = 1705;
  WebFeature.kV8AudioProcessingEvent_Constructor = 1706;
  WebFeature.kV8BiquadFilterNode_Constructor = 1707;
  WebFeature.kV8ChannelMergerNode_Constructor = 1708;
  WebFeature.kV8ChannelSplitterNode_Constructor = 1709;
  WebFeature.kV8ConstantSourceNode_Constructor = 1710;
  WebFeature.kV8ConvolverNode_Constructor = 1711;
  WebFeature.kV8DelayNode_Constructor = 1712;
  WebFeature.kV8DynamicsCompressorNode_Constructor = 1713;
  WebFeature.kV8GainNode_Constructor = 1714;
  WebFeature.kV8IIRFilterNode_Constructor = 1715;
  WebFeature.kV8MediaElementAudioSourceNode_Constructor = 1716;
  WebFeature.kV8MediaStreamAudioSourceNode_Constructor = 1717;
  WebFeature.kV8OfflineAudioCompletionEvent_Constructor = 1718;
  WebFeature.kV8OscillatorNode_Constructor = 1719;
  WebFeature.kV8PannerNode_Constructor = 1720;
  WebFeature.kV8PeriodicWave_Constructor = 1721;
  WebFeature.kV8StereoPannerNode_Constructor = 1722;
  WebFeature.kV8WaveShaperNode_Constructor = 1723;
  WebFeature.kV8Headers_GetAll_Method = 1724;
  WebFeature.kNavigatorVibrateEngagementNone = 1725;
  WebFeature.kNavigatorVibrateEngagementMinimal = 1726;
  WebFeature.kNavigatorVibrateEngagementLow = 1727;
  WebFeature.kNavigatorVibrateEngagementMedium = 1728;
  WebFeature.kNavigatorVibrateEngagementHigh = 1729;
  WebFeature.kNavigatorVibrateEngagementMax = 1730;
  WebFeature.kAlertEngagementNone = 1731;
  WebFeature.kAlertEngagementMinimal = 1732;
  WebFeature.kAlertEngagementLow = 1733;
  WebFeature.kAlertEngagementMedium = 1734;
  WebFeature.kAlertEngagementHigh = 1735;
  WebFeature.kAlertEngagementMax = 1736;
  WebFeature.kConfirmEngagementNone = 1737;
  WebFeature.kConfirmEngagementMinimal = 1738;
  WebFeature.kConfirmEngagementLow = 1739;
  WebFeature.kConfirmEngagementMedium = 1740;
  WebFeature.kConfirmEngagementHigh = 1741;
  WebFeature.kConfirmEngagementMax = 1742;
  WebFeature.kPromptEngagementNone = 1743;
  WebFeature.kPromptEngagementMinimal = 1744;
  WebFeature.kPromptEngagementLow = 1745;
  WebFeature.kPromptEngagementMedium = 1746;
  WebFeature.kPromptEngagementHigh = 1747;
  WebFeature.kPromptEngagementMax = 1748;
  WebFeature.kTopNavInSandbox = 1749;
  WebFeature.kTopNavInSandboxWithoutGesture = 1750;
  WebFeature.kTopNavInSandboxWithPerm = 1751;
  WebFeature.kTopNavInSandboxWithPermButNoGesture = 1752;
  WebFeature.kReferrerPolicyHeader = 1753;
  WebFeature.kHTMLAnchorElementReferrerPolicyAttribute = 1754;
  WebFeature.kHTMLIFrameElementReferrerPolicyAttribute = 1755;
  WebFeature.kHTMLImageElementReferrerPolicyAttribute = 1756;
  WebFeature.kHTMLLinkElementReferrerPolicyAttribute = 1757;
  WebFeature.kBaseElement = 1758;
  WebFeature.kBaseWithCrossOriginHref = 1759;
  WebFeature.kBaseWithDataHref = 1760;
  WebFeature.kBaseWithNewlinesInTarget = 1761;
  WebFeature.kBaseWithOpenBracketInTarget = 1762;
  WebFeature.kBaseWouldBeBlockedByDefaultSrc = 1763;
  WebFeature.kV8AssigmentExpressionLHSIsCallInSloppy = 1764;
  WebFeature.kV8AssigmentExpressionLHSIsCallInStrict = 1765;
  WebFeature.kV8PromiseConstructorReturnedUndefined = 1766;
  WebFeature.kFormSubmittedWithUnclosedFormControl = 1767;
  WebFeature.kScrollbarUseVerticalScrollbarButton = 1777;
  WebFeature.kScrollbarUseVerticalScrollbarThumb = 1778;
  WebFeature.kScrollbarUseVerticalScrollbarTrack = 1779;
  WebFeature.kScrollbarUseHorizontalScrollbarButton = 1780;
  WebFeature.kScrollbarUseHorizontalScrollbarThumb = 1781;
  WebFeature.kScrollbarUseHorizontalScrollbarTrack = 1782;
  WebFeature.kHTMLTableCellElementColspan = 1783;
  WebFeature.kHTMLTableCellElementColspanGreaterThan1000 = 1784;
  WebFeature.kHTMLTableCellElementColspanGreaterThan8190 = 1785;
  WebFeature.kSelectionAddRangeIntersect = 1786;
  WebFeature.kPostMessageFromInsecureToSecureToplevel = 1787;
  WebFeature.kV8MediaSession_Metadata_AttributeGetter = 1788;
  WebFeature.kV8MediaSession_Metadata_AttributeSetter = 1789;
  WebFeature.kV8MediaSession_PlaybackState_AttributeGetter = 1790;
  WebFeature.kV8MediaSession_PlaybackState_AttributeSetter = 1791;
  WebFeature.kV8MediaSession_SetActionHandler_Method = 1792;
  WebFeature.kWebNFCPush = 1793;
  WebFeature.kWebNFCCancelPush = 1794;
  WebFeature.kWebNFCWatch = 1795;
  WebFeature.kWebNFCCancelWatch = 1796;
  WebFeature.kAudioParamCancelAndHoldAtTime = 1797;
  WebFeature.kCSSValueUserModifyReadOnly = 1798;
  WebFeature.kCSSValueUserModifyReadWrite = 1799;
  WebFeature.kCSSValueUserModifyReadWritePlaintextOnly = 1800;
  WebFeature.kCSSValueOnDemand = 1802;
  WebFeature.kServiceWorkerNavigationPreload = 1803;
  WebFeature.kFullscreenRequestWithPendingElement = 1804;
  WebFeature.kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad = 1805;
  WebFeature.kPointerEventSetCaptureOutsideDispatch = 1806;
  WebFeature.kNotificationPermissionRequestedInsecureOrigin = 1807;
  WebFeature.kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method = 1808;
  WebFeature.kV8DeprecatedStorageInfo_RequestQuota_Method = 1809;
  WebFeature.kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method = 1810;
  WebFeature.kV8DeprecatedStorageQuota_RequestQuota_Method = 1811;
  WebFeature.kV8FileReaderSync_Constructor = 1812;
  WebFeature.kV8HTMLVideoElement_Poster_AttributeGetter = 1815;
  WebFeature.kV8HTMLVideoElement_Poster_AttributeSetter = 1816;
  WebFeature.kNotificationPermissionRequestedIframe = 1817;
  WebFeature.kPresentationReceiverInsecureOrigin = 1819;
  WebFeature.kPresentationReceiverSecureOrigin = 1820;
  WebFeature.kPresentationRequestInsecureOrigin = 1821;
  WebFeature.kPresentationRequestSecureOrigin = 1822;
  WebFeature.kRtcpMuxPolicyNegotiate = 1823;
  WebFeature.kDOMClobberedVariableAccessed = 1824;
  WebFeature.kHTMLDocumentCreateProcessingInstruction = 1825;
  WebFeature.kFetchResponseConstructionWithStream = 1826;
  WebFeature.kLocationOrigin = 1827;
  WebFeature.kDocumentOrigin = 1828;
  WebFeature.kCanvas2DFilter = 1830;
  WebFeature.kCanvas2DImageSmoothingQuality = 1831;
  WebFeature.kCanvasToBlob = 1832;
  WebFeature.kCanvasToDataURL = 1833;
  WebFeature.kOffscreenCanvasConvertToBlob = 1834;
  WebFeature.kSVGInCanvas2D = 1835;
  WebFeature.kSVGInWebGL = 1836;
  WebFeature.kSelectionFuncionsChangeFocus = 1837;
  WebFeature.kHTMLObjectElementGetter = 1838;
  WebFeature.kHTMLObjectElementSetter = 1839;
  WebFeature.kHTMLEmbedElementGetter = 1840;
  WebFeature.kHTMLEmbedElementSetter = 1841;
  WebFeature.kTransformUsesBoxSizeOnSVG = 1842;
  WebFeature.kScrollByKeyboardArrowKeys = 1843;
  WebFeature.kScrollByKeyboardPageUpDownKeys = 1844;
  WebFeature.kScrollByKeyboardHomeEndKeys = 1845;
  WebFeature.kScrollByKeyboardSpacebarKey = 1846;
  WebFeature.kScrollByTouch = 1847;
  WebFeature.kScrollByWheel = 1848;
  WebFeature.kScheduledActionIgnored = 1849;
  WebFeature.kGetCanvas2DContextAttributes = 1850;
  WebFeature.kV8HTMLInputElement_Capture_AttributeGetter = 1851;
  WebFeature.kV8HTMLInputElement_Capture_AttributeSetter = 1852;
  WebFeature.kHTMLMediaElementControlsListAttribute = 1853;
  WebFeature.kHTMLMediaElementControlsListNoDownload = 1854;
  WebFeature.kHTMLMediaElementControlsListNoFullscreen = 1855;
  WebFeature.kHTMLMediaElementControlsListNoRemotePlayback = 1856;
  WebFeature.kPointerEventClickRetargetCausedByCapture = 1857;
  WebFeature.kVRDisplayDisplayName = 1861;
  WebFeature.kVREyeParametersOffset = 1862;
  WebFeature.kVRPoseLinearVelocity = 1863;
  WebFeature.kVRPoseLinearAcceleration = 1864;
  WebFeature.kVRPoseAngularVelocity = 1865;
  WebFeature.kVRPoseAngularAcceleration = 1866;
  WebFeature.kCSSOverflowPaged = 1867;
  WebFeature.kChildSrcAllowedWorkerThatScriptSrcBlocked = 1868;
  WebFeature.kHTMLTableElementPresentationAttributeBackground = 1869;
  WebFeature.kV8Navigator_GetInstalledRelatedApps_Method = 1870;
  WebFeature.kNamedAccessOnWindow_ChildBrowsingContext = 1871;
  WebFeature.kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch = 1872;
  WebFeature.kV0CustomElementsRegisterHTMLCustomTag = 1873;
  WebFeature.kV0CustomElementsRegisterHTMLTypeExtension = 1874;
  WebFeature.kV0CustomElementsRegisterSVGElement = 1875;
  WebFeature.kV0CustomElementsRegisterEmbedderElement = 1876;
  WebFeature.kV0CustomElementsCreateCustomTagElement = 1877;
  WebFeature.kV0CustomElementsCreateTypeExtensionElement = 1878;
  WebFeature.kV0CustomElementsConstruct = 1879;
  WebFeature.kV8IDBObserver_Observe_Method = 1880;
  WebFeature.kV8IDBObserver_Unobserve_Method = 1881;
  WebFeature.kWebBluetoothRemoteCharacteristicGetDescriptor = 1882;
  WebFeature.kWebBluetoothRemoteCharacteristicGetDescriptors = 1883;
  WebFeature.kWebBluetoothRemoteCharacteristicReadValue = 1884;
  WebFeature.kWebBluetoothRemoteCharacteristicWriteValue = 1885;
  WebFeature.kWebBluetoothRemoteCharacteristicStartNotifications = 1886;
  WebFeature.kWebBluetoothRemoteCharacteristicStopNotifications = 1887;
  WebFeature.kWebBluetoothRemoteDescriptorReadValue = 1888;
  WebFeature.kWebBluetoothRemoteDescriptorWriteValue = 1889;
  WebFeature.kWebBluetoothRemoteServerConnect = 1890;
  WebFeature.kWebBluetoothRemoteServerDisconnect = 1891;
  WebFeature.kWebBluetoothRemoteServerGetPrimaryService = 1892;
  WebFeature.kWebBluetoothRemoteServerGetPrimaryServices = 1893;
  WebFeature.kWebBluetoothRemoteServiceGetCharacteristic = 1894;
  WebFeature.kWebBluetoothRemoteServiceGetCharacteristics = 1895;
  WebFeature.kHTMLContentElement = 1896;
  WebFeature.kHTMLShadowElement = 1897;
  WebFeature.kHTMLSlotElement = 1898;
  WebFeature.kAccelerometerConstructor = 1899;
  WebFeature.kAbsoluteOrientationSensorConstructor = 1900;
  WebFeature.kAmbientLightSensorConstructor = 1901;
  WebFeature.kGenericSensorOnActivate = 1902;
  WebFeature.kGenericSensorOnChange = 1903;
  WebFeature.kGenericSensorOnError = 1904;
  WebFeature.kGenericSensorActivated = 1905;
  WebFeature.kGyroscopeConstructor = 1906;
  WebFeature.kMagnetometerConstructor = 1907;
  WebFeature.kOrientationSensorPopulateMatrix = 1908;
  WebFeature.kWindowOpenWithInvalidURL = 1909;
  WebFeature.kCrossOriginMainFrameNulledNameAccessed = 1910;
  WebFeature.kMenuItemElementIconAttribute = 1911;
  WebFeature.kWebkitCSSMatrixSetMatrixValue = 1912;
  WebFeature.kWebkitCSSMatrixConstructFromString = 1913;
  WebFeature.kCanRequestURLHTTPContainingNewline = 1914;
  WebFeature.kGetGamepads = 1916;
  WebFeature.kMediaStreamConstraintsAudio = 1918;
  WebFeature.kMediaStreamConstraintsAudioUnconstrained = 1919;
  WebFeature.kMediaStreamConstraintsVideo = 1920;
  WebFeature.kMediaStreamConstraintsVideoUnconstrained = 1921;
  WebFeature.kMediaStreamConstraintsWidth = 1922;
  WebFeature.kMediaStreamConstraintsHeight = 1923;
  WebFeature.kMediaStreamConstraintsAspectRatio = 1924;
  WebFeature.kMediaStreamConstraintsFrameRate = 1925;
  WebFeature.kMediaStreamConstraintsFacingMode = 1926;
  WebFeature.kMediaStreamConstraintsVolume = 1927;
  WebFeature.kMediaStreamConstraintsSampleRate = 1928;
  WebFeature.kMediaStreamConstraintsSampleSize = 1929;
  WebFeature.kMediaStreamConstraintsEchoCancellation = 1930;
  WebFeature.kMediaStreamConstraintsLatency = 1931;
  WebFeature.kMediaStreamConstraintsChannelCount = 1932;
  WebFeature.kMediaStreamConstraintsDeviceIdAudio = 1933;
  WebFeature.kMediaStreamConstraintsDeviceIdVideo = 1934;
  WebFeature.kMediaStreamConstraintsDisableLocalEcho = 1935;
  WebFeature.kMediaStreamConstraintsGroupIdAudio = 1936;
  WebFeature.kMediaStreamConstraintsGroupIdVideo = 1937;
  WebFeature.kMediaStreamConstraintsVideoKind = 1938;
  WebFeature.kMediaStreamConstraintsDepthNear = 1939;
  WebFeature.kMediaStreamConstraintsDepthFar = 1940;
  WebFeature.kMediaStreamConstraintsFocalLengthX = 1941;
  WebFeature.kMediaStreamConstraintsFocalLengthY = 1942;
  WebFeature.kMediaStreamConstraintsMediaStreamSourceAudio = 1943;
  WebFeature.kMediaStreamConstraintsMediaStreamSourceVideo = 1944;
  WebFeature.kMediaStreamConstraintsRenderToAssociatedSink = 1945;
  WebFeature.kMediaStreamConstraintsHotwordEnabled = 1946;
  WebFeature.kMediaStreamConstraintsGoogEchoCancellation = 1947;
  WebFeature.kMediaStreamConstraintsGoogExperimentalEchoCancellation = 1948;
  WebFeature.kMediaStreamConstraintsGoogAutoGainControl = 1949;
  WebFeature.kMediaStreamConstraintsGoogExperimentalAutoGainControl = 1950;
  WebFeature.kMediaStreamConstraintsGoogNoiseSuppression = 1951;
  WebFeature.kMediaStreamConstraintsGoogHighpassFilter = 1952;
  WebFeature.kMediaStreamConstraintsGoogTypingNoiseDetection = 1953;
  WebFeature.kMediaStreamConstraintsGoogExperimentalNoiseSuppression = 1954;
  WebFeature.kMediaStreamConstraintsGoogBeamforming = 1955;
  WebFeature.kMediaStreamConstraintsGoogArrayGeometry = 1956;
  WebFeature.kMediaStreamConstraintsGoogAudioMirroring = 1957;
  WebFeature.kMediaStreamConstraintsGoogDAEchoCancellation = 1958;
  WebFeature.kMediaStreamConstraintsGoogNoiseReduction = 1959;
  WebFeature.kMediaStreamConstraintsGoogPowerLineFrequency = 1960;
  WebFeature.kViewportFixedPositionUnderFilter = 1961;
  WebFeature.kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting = 1962;
  WebFeature.kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting = 1963;
  WebFeature.kGamepadAxes = 1964;
  WebFeature.kGamepadButtons = 1965;
  WebFeature.kDispatchMouseEventOnDisabledFormControl = 1967;
  WebFeature.kElementNameDOMInvalidHTMLParserValid = 1968;
  WebFeature.kElementNameDOMValidHTMLParserInvalid = 1969;
  WebFeature.kGATTServerDisconnectedEvent = 1970;
  WebFeature.kAnchorClickDispatchForNonConnectedNode = 1971;
  WebFeature.kHTMLParseErrorNestedForm = 1972;
  WebFeature.kFontShapingNotDefGlyphObserved = 1973;
  WebFeature.kPostMessageOutgoingWouldBeBlockedByConnectSrc = 1974;
  WebFeature.kPostMessageIncomingWouldBeBlockedByConnectSrc = 1975;
  WebFeature.kPaymentRequestNetworkNameInSupportedMethods = 1976;
  WebFeature.kCrossOriginPropertyAccess = 1977;
  WebFeature.kCrossOriginPropertyAccessFromOpener = 1978;
  WebFeature.kCredentialManagerCreate = 1979;
  WebFeature.kWebDatabaseCreateDropFTS3Table = 1980;
  WebFeature.kFieldEditInSecureContext = 1981;
  WebFeature.kFieldEditInNonSecureContext = 1982;
  WebFeature.kCredentialManagerGetMediationRequired = 1984;
  WebFeature.kNetInfoRtt = 1989;
  WebFeature.kNetInfoDownlink = 1990;
  WebFeature.kShapeDetection_BarcodeDetectorConstructor = 1991;
  WebFeature.kShapeDetection_FaceDetectorConstructor = 1992;
  WebFeature.kShapeDetection_TextDetectorConstructor = 1993;
  WebFeature.kInertAttribute = 1995;
  WebFeature.kPluginInstanceAccessFromIsolatedWorld = 1996;
  WebFeature.kPluginInstanceAccessFromMainWorld = 1997;
  WebFeature.kShowModalForElementInFullscreenStack = 2000;
  WebFeature.kThreeValuedPositionBackground = 2001;
  WebFeature.kUnitlessZeroAngleFilter = 2007;
  WebFeature.kUnitlessZeroAngleGradient = 2008;
  WebFeature.kUnitlessZeroAngleTransform = 2010;
  WebFeature.kCredentialManagerPreventSilentAccess = 2012;
  WebFeature.kNetInfoEffectiveType = 2013;
  WebFeature.kV8SpeechRecognition_Start_Method = 2014;
  WebFeature.kTableRowDirectionDifferentFromTable = 2015;
  WebFeature.kTableSectionDirectionDifferentFromTable = 2016;
  WebFeature.kClientHintsDeviceMemory = 2017;
  WebFeature.kCSSRegisterProperty = 2018;
  WebFeature.kRelativeOrientationSensorConstructor = 2019;
  WebFeature.kSmoothScrollJSInterventionActivated = 2020;
  WebFeature.kBudgetAPIGetCost = 2021;
  WebFeature.kBudgetAPIGetBudget = 2022;
  WebFeature.kCrossOriginMainFrameNulledNonEmptyNameAccessed = 2023;
  WebFeature.kDeprecatedTimingFunctionStepMiddle = 2024;
  WebFeature.kDocumentDomainSetWithNonDefaultPort = 2025;
  WebFeature.kDocumentDomainSetWithDefaultPort = 2026;
  WebFeature.kFeaturePolicyHeader = 2027;
  WebFeature.kFeaturePolicyAllowAttribute = 2028;
  WebFeature.kMIDIPortOpen = 2029;
  WebFeature.kMIDIOutputSend = 2030;
  WebFeature.kMIDIMessageEvent = 2031;
  WebFeature.kFetchEventIsReload = 2032;
  WebFeature.kServiceWorkerClientFrameType = 2033;
  WebFeature.kQuirksModeDocument = 2034;
  WebFeature.kLimitedQuirksModeDocument = 2035;
  WebFeature.kEncryptedMediaCrossOriginIframe = 2036;
  WebFeature.kCSSSelectorWebkitMediaControls = 2037;
  WebFeature.kCSSSelectorWebkitMediaControlsOverlayEnclosure = 2038;
  WebFeature.kCSSSelectorWebkitMediaControlsOverlayPlayButton = 2039;
  WebFeature.kCSSSelectorWebkitMediaControlsEnclosure = 2040;
  WebFeature.kCSSSelectorWebkitMediaControlsPanel = 2041;
  WebFeature.kCSSSelectorWebkitMediaControlsPlayButton = 2042;
  WebFeature.kCSSSelectorWebkitMediaControlsCurrentTimeDisplay = 2043;
  WebFeature.kCSSSelectorWebkitMediaControlsTimeRemainingDisplay = 2044;
  WebFeature.kCSSSelectorWebkitMediaControlsTimeline = 2045;
  WebFeature.kCSSSelectorWebkitMediaControlsTimelineContainer = 2046;
  WebFeature.kCSSSelectorWebkitMediaControlsMuteButton = 2047;
  WebFeature.kCSSSelectorWebkitMediaControlsVolumeSlider = 2048;
  WebFeature.kCSSSelectorWebkitMediaControlsFullscreenButton = 2049;
  WebFeature.kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton = 2050;
  WebFeature.kLinearAccelerationSensorConstructor = 2051;
  WebFeature.kReportUriMultipleEndpoints = 2052;
  WebFeature.kReportUriSingleEndpoint = 2053;
  WebFeature.kV8ConstructorNonUndefinedPrimitiveReturn = 2054;
  WebFeature.kEncryptedMediaDisallowedByFeaturePolicyInCrossOriginIframe = 2055;
  WebFeature.kGeolocationDisallowedByFeaturePolicyInCrossOriginIframe = 2056;
  WebFeature.kGetUserMediaMicDisallowedByFeaturePolicyInCrossOriginIframe = 2057;
  WebFeature.kGetUserMediaCameraDisallowedByFeaturePolicyInCrossOriginIframe = 2058;
  WebFeature.kRequestMIDIAccessDisallowedByFeaturePolicyInCrossOriginIframe = 2059;
  WebFeature.kMediaSourceKeyframeTimeGreaterThanDependant = 2060;
  WebFeature.kMediaSourceMuxedSequenceMode = 2061;
  WebFeature.kPrepareModuleScript = 2062;
  WebFeature.kPresentationRequestStartSecureOrigin = 2063;
  WebFeature.kPresentationRequestStartInsecureOrigin = 2064;
  WebFeature.kPersistentClientHintHeader = 2065;
  WebFeature.kStyleSheetListNonNullAnonymousNamedGetter = 2066;
  WebFeature.kOffMainThreadFetch = 2067;
  WebFeature.kARIAActiveDescendantAttribute = 2069;
  WebFeature.kARIAAtomicAttribute = 2070;
  WebFeature.kARIAAutocompleteAttribute = 2071;
  WebFeature.kARIABusyAttribute = 2072;
  WebFeature.kARIACheckedAttribute = 2073;
  WebFeature.kARIAColCountAttribute = 2074;
  WebFeature.kARIAColIndexAttribute = 2075;
  WebFeature.kARIAColSpanAttribute = 2076;
  WebFeature.kARIAControlsAttribute = 2077;
  WebFeature.kARIACurrentAttribute = 2078;
  WebFeature.kARIADescribedByAttribute = 2079;
  WebFeature.kARIADetailsAttribute = 2080;
  WebFeature.kARIADisabledAttribute = 2081;
  WebFeature.kARIADropEffectAttribute = 2082;
  WebFeature.kARIAErrorMessageAttribute = 2083;
  WebFeature.kARIAExpandedAttribute = 2084;
  WebFeature.kARIAFlowToAttribute = 2085;
  WebFeature.kARIAGrabbedAttribute = 2086;
  WebFeature.kARIAHasPopupAttribute = 2087;
  WebFeature.kARIAHelpAttribute = 2088;
  WebFeature.kARIAHiddenAttribute = 2089;
  WebFeature.kARIAInvalidAttribute = 2090;
  WebFeature.kARIAKeyShortcutsAttribute = 2091;
  WebFeature.kARIALabelAttribute = 2092;
  WebFeature.kARIALabeledByAttribute = 2093;
  WebFeature.kARIALabelledByAttribute = 2094;
  WebFeature.kARIALevelAttribute = 2095;
  WebFeature.kARIALiveAttribute = 2096;
  WebFeature.kARIAModalAttribute = 2097;
  WebFeature.kARIAMultilineAttribute = 2098;
  WebFeature.kARIAMultiselectableAttribute = 2099;
  WebFeature.kARIAOrientationAttribute = 2100;
  WebFeature.kARIAOwnsAttribute = 2101;
  WebFeature.kARIAPlaceholderAttribute = 2102;
  WebFeature.kARIAPosInSetAttribute = 2103;
  WebFeature.kARIAPressedAttribute = 2104;
  WebFeature.kARIAReadOnlyAttribute = 2105;
  WebFeature.kARIARelevantAttribute = 2106;
  WebFeature.kARIARequiredAttribute = 2107;
  WebFeature.kARIARoleDescriptionAttribute = 2108;
  WebFeature.kARIARowCountAttribute = 2109;
  WebFeature.kARIARowIndexAttribute = 2110;
  WebFeature.kARIARowSpanAttribute = 2111;
  WebFeature.kARIASelectedAttribute = 2112;
  WebFeature.kARIASetSizeAttribute = 2113;
  WebFeature.kARIASortAttribute = 2114;
  WebFeature.kARIAValueMaxAttribute = 2115;
  WebFeature.kARIAValueMinAttribute = 2116;
  WebFeature.kARIAValueNowAttribute = 2117;
  WebFeature.kARIAValueTextAttribute = 2118;
  WebFeature.kV8LabeledExpressionStatement = 2119;
  WebFeature.kPaymentRequestSupportedMethodsArray = 2120;
  WebFeature.kNavigatorDeviceMemory = 2121;
  WebFeature.kFixedWidthTableDistributionChanged = 2122;
  WebFeature.kWebkitBoxLayout = 2123;
  WebFeature.kWebkitBoxLayoutHorizontal = 2124;
  WebFeature.kWebkitBoxLayoutVertical = 2125;
  WebFeature.kWebkitBoxAlignNotInitial = 2126;
  WebFeature.kWebkitBoxDirectionNotInitial = 2127;
  WebFeature.kWebkitBoxLinesNotInitial = 2128;
  WebFeature.kWebkitBoxPackNotInitial = 2129;
  WebFeature.kWebkitBoxChildFlexNotInitial = 2130;
  WebFeature.kWebkitBoxChildFlexGroupNotInitial = 2131;
  WebFeature.kWebkitBoxChildOrdinalGroupNotInitial = 2132;
  WebFeature.kWebkitBoxNotDefaultOrder = 2133;
  WebFeature.kWebkitBoxNoChildren = 2134;
  WebFeature.kWebkitBoxOneChild = 2135;
  WebFeature.kWebkitBoxOneChildIsLayoutBlockFlowInline = 2136;
  WebFeature.kWebkitBoxManyChildren = 2137;
  WebFeature.kWebkitBoxLineClamp = 2138;
  WebFeature.kWebkitBoxLineClampPercentage = 2139;
  WebFeature.kWebkitBoxLineClampNoChildren = 2140;
  WebFeature.kWebkitBoxLineClampOneChild = 2141;
  WebFeature.kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline = 2142;
  WebFeature.kWebkitBoxLineClampManyChildren = 2143;
  WebFeature.kWebkitBoxLineClampDoesSomething = 2144;
  WebFeature.kFeaturePolicyAllowAttributeDeprecatedSyntax = 2145;
  WebFeature.kSuppressHistoryEntryWithoutUserGesture = 2146;
  WebFeature.kImageInputTypeFormDataWithNonEmptyValue = 2147;
  WebFeature.kPerformanceServerTiming = 2157;
  WebFeature.kFileReaderResultBeforeCompletion = 2158;
  WebFeature.kSyncXhrInPageDismissal = 2159;
  WebFeature.kAsyncXhrInPageDismissal = 2160;
  WebFeature.kAnimationSetPlaybackRateCompensatorySeek = 2162;
  WebFeature.kDeepCombinatorInStaticProfile = 2163;
  WebFeature.kPseudoShadowInStaticProfile = 2164;
  WebFeature.kSchemeBypassesCSP = 2165;
  WebFeature.kInnerSchemeBypassesCSP = 2166;
  WebFeature.kSameOriginApplicationOctetStream = 2167;
  WebFeature.kSameOriginApplicationXml = 2168;
  WebFeature.kSameOriginTextHtml = 2169;
  WebFeature.kSameOriginTextPlain = 2170;
  WebFeature.kSameOriginTextXml = 2171;
  WebFeature.kCrossOriginApplicationOctetStream = 2172;
  WebFeature.kCrossOriginApplicationXml = 2173;
  WebFeature.kCrossOriginTextHtml = 2174;
  WebFeature.kCrossOriginTextPlain = 2175;
  WebFeature.kCrossOriginTextXml = 2176;
  WebFeature.kSameOriginWorkerApplicationOctetStream = 2177;
  WebFeature.kSameOriginWorkerApplicationXml = 2178;
  WebFeature.kSameOriginWorkerTextHtml = 2179;
  WebFeature.kSameOriginWorkerTextPlain = 2180;
  WebFeature.kSameOriginWorkerTextXml = 2181;
  WebFeature.kCrossOriginWorkerApplicationOctetStream = 2182;
  WebFeature.kCrossOriginWorkerApplicationXml = 2183;
  WebFeature.kCrossOriginWorkerTextHtml = 2184;
  WebFeature.kCrossOriginWorkerTextPlain = 2185;
  WebFeature.kCrossOriginWorkerTextXml = 2186;
  WebFeature.kPerformanceObserverForWindow = 2188;
  WebFeature.kPerformanceObserverForWorker = 2189;
  WebFeature.kPaintTimingObserved = 2190;
  WebFeature.kPaintTimingRequested = 2191;
  WebFeature.kHTMLMediaElementMediaPlaybackRateOutOfRange = 2192;
  WebFeature.kCookieSet = 2194;
  WebFeature.kCookieGet = 2195;
  WebFeature.kGeolocationDisabledByFeaturePolicy = 2196;
  WebFeature.kEncryptedMediaDisabledByFeaturePolicy = 2197;
  WebFeature.kBatteryStatusGetBattery = 2198;
  WebFeature.kBatteryStatusInsecureOrigin = 2199;
  WebFeature.kBatteryStatusCrossOrigin = 2200;
  WebFeature.kBatteryStatusSameOriginABA = 2201;
  WebFeature.kHasIDClassTagAttribute = 2203;
  WebFeature.kHasBeforeOrAfterPseudoElement = 2204;
  WebFeature.kShapeOutsideMaybeAffectedInlineSize = 2205;
  WebFeature.kShapeOutsideMaybeAffectedInlinePosition = 2206;
  WebFeature.kGamepadVibrationActuator = 2207;
  WebFeature.kMicrophoneDisabledByFeaturePolicyEstimate = 2208;
  WebFeature.kCameraDisabledByFeaturePolicyEstimate = 2209;
  WebFeature.kMidiDisabledByFeaturePolicy = 2210;
  WebFeature.kGeolocationGetCurrentPosition = 2214;
  WebFeature.kGeolocationWatchPosition = 2215;
  WebFeature.kDataUriHasOctothorpe = 2216;
  WebFeature.kNetInfoSaveData = 2217;
  WebFeature.kV8Element_GetClientRects_Method = 2218;
  WebFeature.kV8Element_GetBoundingClientRect_Method = 2219;
  WebFeature.kV8Range_GetClientRects_Method = 2220;
  WebFeature.kV8Range_GetBoundingClientRect_Method = 2221;
  WebFeature.kV8ErrorCaptureStackTrace = 2222;
  WebFeature.kV8ErrorPrepareStackTrace = 2223;
  WebFeature.kV8ErrorStackTraceLimit = 2224;
  WebFeature.kPaintWorklet = 2225;
  WebFeature.kDocumentPageHideRegistered = 2226;
  WebFeature.kDocumentPageHideFired = 2227;
  WebFeature.kDocumentPageShowRegistered = 2228;
  WebFeature.kDocumentPageShowFired = 2229;
  WebFeature.kReplaceCharsetInXHR = 2230;
  WebFeature.kRespondToSameOriginRequestWithCrossOriginResponse = 2231;
  WebFeature.kLinkRelModulePreload = 2232;
  WebFeature.kHTMLFrameSetElementNonNullAnonymousNamedGetter = 2235;
  WebFeature.kCSPWithUnsafeEval = 2236;
  WebFeature.kWebAssemblyInstantiation = 2237;
  WebFeature.kV8IndexAccessor = 2238;
  WebFeature.kV8MediaCapabilities_DecodingInfo_Method = 2239;
  WebFeature.kV8MediaCapabilities_EncodingInfo_Method = 2240;
  WebFeature.kV8MediaCapabilitiesInfo_Supported_AttributeGetter = 2241;
  WebFeature.kV8MediaCapabilitiesInfo_Smooth_AttributeGetter = 2242;
  WebFeature.kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter = 2243;
  WebFeature.kWindowEventInV0ShadowTree = 2244;
  WebFeature.kHTMLAnchorElementDownloadInSandboxWithUserGesture = 2245;
  WebFeature.kHTMLAnchorElementDownloadInSandboxWithoutUserGesture = 2246;
  WebFeature.kWindowOpenRealmMismatch = 2247;
  WebFeature.kGridRowTrackPercentIndefiniteHeight = 2248;
  WebFeature.kVRGetDisplaysSupportsPresent = 2249;
  WebFeature.kDuplicatedAttribute = 2250;
  WebFeature.kDuplicatedAttributeForExecutedScript = 2251;
  WebFeature.kV8RTCPeerConnection_GetSenders_Method = 2252;
  WebFeature.kV8RTCPeerConnection_GetReceivers_Method = 2253;
  WebFeature.kV8RTCPeerConnection_AddTrack_Method = 2254;
  WebFeature.kV8RTCPeerConnection_RemoveTrack_Method = 2255;
  WebFeature.kLocalCSSFile = 2256;
  WebFeature.kLocalCSSFileExtensionRejected = 2257;
  WebFeature.kUserMediaDisableHardwareNoiseSuppression = 2258;
  WebFeature.kCertificateTransparencyRequiredErrorOnResourceLoad = 2259;
  WebFeature.kCSSSelectorPseudoWebkitAnyLink = 2260;
  WebFeature.kAudioWorkletAddModule = 2261;
  WebFeature.kAudioWorkletGlobalScopeRegisterProcessor = 2262;
  WebFeature.kAudioWorkletNodeConstructor = 2263;
  WebFeature.kHTMLMediaElementEmptyLoadWithFutureData = 2264;
  WebFeature.kCSSValueDisplayContents = 2265;
  WebFeature.kCSSSelectorPseudoAnyLink = 2266;
  WebFeature.kFileAccessedCache = 2267;
  WebFeature.kFileAccessedCookies = 2268;
  WebFeature.kFileAccessedDatabase = 2269;
  WebFeature.kFileAccessedFileSystem = 2270;
  WebFeature.kFileAccessedLocalStorage = 2271;
  WebFeature.kFileAccessedLocks = 2272;
  WebFeature.kFileAccessedServiceWorker = 2273;
  WebFeature.kFileAccessedSessionStorage = 2274;
  WebFeature.kFileAccessedSharedWorker = 2275;
  WebFeature.kV8MediaKeys_GetStatusForPolicy_Method = 2276;
  WebFeature.kV8DeoptimizerDisableSpeculation = 2277;
  WebFeature.kCSSSelectorCue = 2278;
  WebFeature.kCSSSelectorWebkitCalendarPickerIndicator = 2279;
  WebFeature.kCSSSelectorWebkitClearButton = 2280;
  WebFeature.kCSSSelectorWebkitColorSwatch = 2281;
  WebFeature.kCSSSelectorWebkitColorSwatchWrapper = 2282;
  WebFeature.kCSSSelectorWebkitDateAndTimeValue = 2283;
  WebFeature.kCSSSelectorWebkitDatetimeEdit = 2284;
  WebFeature.kCSSSelectorWebkitDatetimeEditAmpmField = 2285;
  WebFeature.kCSSSelectorWebkitDatetimeEditDayField = 2286;
  WebFeature.kCSSSelectorWebkitDatetimeEditFieldsWrapper = 2287;
  WebFeature.kCSSSelectorWebkitDatetimeEditHourField = 2288;
  WebFeature.kCSSSelectorWebkitDatetimeEditMillisecondField = 2289;
  WebFeature.kCSSSelectorWebkitDatetimeEditMinuteField = 2290;
  WebFeature.kCSSSelectorWebkitDatetimeEditMonthField = 2291;
  WebFeature.kCSSSelectorWebkitDatetimeEditSecondField = 2292;
  WebFeature.kCSSSelectorWebkitDatetimeEditText = 2293;
  WebFeature.kCSSSelectorWebkitDatetimeEditWeekField = 2294;
  WebFeature.kCSSSelectorWebkitDatetimeEditYearField = 2295;
  WebFeature.kCSSSelectorWebkitDetailsMarker = 2296;
  WebFeature.kCSSSelectorWebkitFileUploadButton = 2297;
  WebFeature.kCSSSelectorWebkitInnerSpinButton = 2298;
  WebFeature.kCSSSelectorWebkitInputPlaceholder = 2299;
  WebFeature.kCSSSelectorWebkitMediaSliderContainer = 2300;
  WebFeature.kCSSSelectorWebkitMediaSliderThumb = 2301;
  WebFeature.kCSSSelectorWebkitMediaTextTrackContainer = 2302;
  WebFeature.kCSSSelectorWebkitMediaTextTrackDisplay = 2303;
  WebFeature.kCSSSelectorWebkitMediaTextTrackRegion = 2304;
  WebFeature.kCSSSelectorWebkitMediaTextTrackRegionContainer = 2305;
  WebFeature.kCSSSelectorWebkitMeterBar = 2306;
  WebFeature.kCSSSelectorWebkitMeterEvenLessGoodValue = 2307;
  WebFeature.kCSSSelectorWebkitMeterInnerElement = 2308;
  WebFeature.kCSSSelectorWebkitMeterOptimumValue = 2309;
  WebFeature.kCSSSelectorWebkitMeterSuboptimumValue = 2310;
  WebFeature.kCSSSelectorWebkitProgressBar = 2311;
  WebFeature.kCSSSelectorWebkitProgressInnerElement = 2312;
  WebFeature.kCSSSelectorWebkitProgressValue = 2313;
  WebFeature.kCSSSelectorWebkitSearchCancelButton = 2314;
  WebFeature.kCSSSelectorWebkitSliderContainer = 2315;
  WebFeature.kCSSSelectorWebkitSliderRunnableTrack = 2316;
  WebFeature.kCSSSelectorWebkitSliderThumb = 2317;
  WebFeature.kCSSSelectorWebkitTextfieldDecorationContainer = 2318;
  WebFeature.kCSSSelectorWebkitUnknownPseudo = 2319;
  WebFeature.kFilterAsContainingBlockMayChangeOutput = 2320;
  WebFeature.kDispatchMouseUpDownEventOnDisabledFormControl = 2321;
  WebFeature.kCSSSelectorPseudoMatches = 2322;
  WebFeature.kV8RTCRtpSender_ReplaceTrack_Method = 2323;
  WebFeature.kInputTypeFileSecureOriginOpenChooser = 2324;
  WebFeature.kInputTypeFileInsecureOriginOpenChooser = 2325;
  WebFeature.kBasicShapeEllipseNoRadius = 2326;
  WebFeature.kBasicShapeEllipseOneRadius = 2327;
  WebFeature.kBasicShapeEllipseTwoRadius = 2328;
  WebFeature.kTemporalInputTypeChooserByTrustedClick = 2329;
  WebFeature.kTemporalInputTypeChooserByUntrustedClick = 2330;
  WebFeature.kTemporalInputTypeIgnoreUntrustedClick = 2331;
  WebFeature.kColorInputTypeChooserByTrustedClick = 2332;
  WebFeature.kColorInputTypeChooserByUntrustedClick = 2333;
  WebFeature.kCSSTypedOMStylePropertyMap = 2334;
  WebFeature.kScrollToFragmentRequested = 2335;
  WebFeature.kScrollToFragmentSucceedWithRaw = 2336;
  WebFeature.kScrollToFragmentSucceedWithASCII = 2337;
  WebFeature.kScrollToFragmentSucceedWithUTF8 = 2338;
  WebFeature.kScrollToFragmentSucceedWithIsomorphic = 2339;
  WebFeature.kScrollToFragmentSucceedWithMixed = 2340;
  WebFeature.kScrollToFragmentFailWithASCII = 2341;
  WebFeature.kScrollToFragmentFailWithUTF8 = 2342;
  WebFeature.kScrollToFragmentFailWithIsomorphic = 2343;
  WebFeature.kScrollToFragmentFailWithMixed = 2344;
  WebFeature.kScrollToFragmentFailWithInvalidEncoding = 2345;
  WebFeature.kRTCPeerConnectionWithActiveCsp = 2346;
  WebFeature.kImageDecodingAttribute = 2347;
  WebFeature.kImageDecodeAPI = 2348;
  WebFeature.kV8HTMLElement_Autocapitalize_AttributeGetter = 2349;
  WebFeature.kV8HTMLElement_Autocapitalize_AttributeSetter = 2350;
  WebFeature.kCSSLegacyAlignment = 2351;
  WebFeature.kSRISignatureCheck = 2352;
  WebFeature.kSRISignatureSuccess = 2353;
  WebFeature.kCSSBasicShape = 2354;
  WebFeature.kCSSGradient = 2355;
  WebFeature.kCSSPaintFunction = 2356;
  WebFeature.kWebkitCrossFade = 2357;
  WebFeature.kDisablePictureInPictureAttribute = 2358;
  WebFeature.kCertificateTransparencyNonCompliantSubresourceInMainFrame = 2359;
  WebFeature.kCertificateTransparencyNonCompliantResourceInSubframe = 2360;
  WebFeature.kV8AbortController_Constructor = 2361;
  WebFeature.kReplaceCharsetInXHRIgnoringCase = 2362;
  WebFeature.kHTMLIFrameElementGestureMedia = 2363;
  WebFeature.kWorkletAddModule = 2364;
  WebFeature.kAnimationWorkletRegisterAnimator = 2365;
  WebFeature.kWorkletAnimationConstructor = 2366;
  WebFeature.kScrollTimelineConstructor = 2367;
  WebFeature.kV8Document_CreateTouchList_Method = 2368;
  WebFeature.kAsyncClipboardAPIRead = 2369;
  WebFeature.kAsyncClipboardAPIWrite = 2370;
  WebFeature.kAsyncClipboardAPIReadText = 2371;
  WebFeature.kAsyncClipboardAPIWriteText = 2372;
  WebFeature.kOpenerNavigationWithoutGesture = 2373;
  WebFeature.kGetComputedStyleWebkitAppearance = 2374;
  WebFeature.kV8LockManager_Request_Method = 2375;
  WebFeature.kV8LockManager_Query_Method = 2376;
  WebFeature.kUserMediaEnableExperimentalHardwareEchoCancellation = 2377;
  WebFeature.kV8RTCDTMFSender_Track_AttributeGetter = 2378;
  WebFeature.kV8RTCDTMFSender_Duration_AttributeGetter = 2379;
  WebFeature.kV8RTCDTMFSender_InterToneGap_AttributeGetter = 2380;
  WebFeature.kV8RTCRtpSender_Dtmf_AttributeGetter = 2381;
  WebFeature.kRTCConstraintEnableDtlsSrtpTrue = 2382;
  WebFeature.kRTCConstraintEnableDtlsSrtpFalse = 2383;
  WebFeature.kRtcPeerConnectionId = 2384;
  WebFeature.kV8PaintWorkletGlobalScope_RegisterPaint_Method = 2385;
  WebFeature.kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter = 2386;
  WebFeature.kCSSSelectorPseudoFocus = 2387;
  WebFeature.kCSSSelectorPseudoFocusVisible = 2388;
  WebFeature.kDistrustedLegacySymantecSubresource = 2389;
  WebFeature.kVRDisplayGetFrameData = 2390;
  WebFeature.kXMLHttpRequestResponseXML = 2391;
  WebFeature.kMessagePortTransferClosedPort = 2392;
  WebFeature.kRTCLocalSdpModification = 2393;
  WebFeature.kKeyboardApiLock = 2394;
  WebFeature.kKeyboardApiUnlock = 2395;
  WebFeature.kPPAPIURLRequestStreamToFile = 2396;
  WebFeature.kPaymentHandler = 2397;
  WebFeature.kPaymentRequestShowWithoutGesture = 2398;
  WebFeature.kReadableStreamConstructor = 2399;
  WebFeature.kWritableStreamConstructor = 2400;
  WebFeature.kTransformStreamConstructor = 2401;
  WebFeature.kNegativeBackgroundSize = 2402;
  WebFeature.kNegativeMaskSize = 2403;
  WebFeature.kClientHintsRtt = 2404;
  WebFeature.kClientHintsDownlink = 2405;
  WebFeature.kClientHintsEct = 2406;
  WebFeature.kCrossOriginHTMLIFrameElementContentDocument = 2407;
  WebFeature.kCrossOriginHTMLIFrameElementGetSVGDocument = 2408;
  WebFeature.kCrossOriginHTMLEmbedElementGetSVGDocument = 2409;
  WebFeature.kCrossOriginHTMLFrameElementContentDocument = 2410;
  WebFeature.kCrossOriginHTMLObjectElementContentDocument = 2411;
  WebFeature.kCrossOriginHTMLObjectElementGetSVGDocument = 2412;
  WebFeature.kNavigatorXR = 2413;
  WebFeature.kXRRequestDevice = 2414;
  WebFeature.kXRRequestSession = 2415;
  WebFeature.kXRSupportsSession = 2416;
  WebFeature.kXRSessionGetInputSources = 2417;
  WebFeature.kCSSResizeAuto = 2418;
  WebFeature.kPrefixedCursorGrab = 2419;
  WebFeature.kPrefixedCursorGrabbing = 2420;
  WebFeature.kCredentialManagerCreatePublicKeyCredential = 2421;
  WebFeature.kCredentialManagerGetPublicKeyCredential = 2422;
  WebFeature.kCredentialManagerMakePublicKeyCredentialSuccess = 2423;
  WebFeature.kCredentialManagerGetPublicKeyCredentialSuccess = 2424;
  WebFeature.kShapeOutsideContentBox = 2425;
  WebFeature.kShapeOutsidePaddingBox = 2426;
  WebFeature.kShapeOutsideBorderBox = 2427;
  WebFeature.kShapeOutsideMarginBox = 2428;
  WebFeature.kPerformanceTimeline = 2429;
  WebFeature.kUserTiming = 2430;
  WebFeature.kCSSSelectorPseudoIS = 2431;
  WebFeature.kKeyboardApiGetLayoutMap = 2432;
  WebFeature.kWebRtcVaapiHWVP8Encoding = 2433;
  WebFeature.kPerformanceResourceTimingInitiatorType = 2434;
  WebFeature.kV8ArraySortNoElementsProtector = 2436;
  WebFeature.kV8ArrayPrototypeSortJSArrayModifiedPrototype = 2437;
  WebFeature.kV8Document_PictureInPictureEnabled_AttributeGetter = 2438;
  WebFeature.kV8Document_PictureInPictureElement_AttributeGetter = 2439;
  WebFeature.kV8Document_ExitPictureInPicture_Method = 2440;
  WebFeature.kV8ShadowRoot_PictureInPictureElement_AttributeGetter = 2441;
  WebFeature.kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter = 2442;
  WebFeature.kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter = 2443;
  WebFeature.kV8HTMLVideoElement_RequestPictureInPicture_Method = 2444;
  WebFeature.kEnterPictureInPictureEventListener = 2445;
  WebFeature.kLeavePictureInPictureEventListener = 2446;
  WebFeature.kV8PictureInPictureWindow_Height_AttributeGetter = 2447;
  WebFeature.kV8PictureInPictureWindow_Width_AttributeGetter = 2448;
  WebFeature.kPictureInPictureWindowResizeEventListener = 2449;
  WebFeature.kV8CookieStore_Delete_Method = 2450;
  WebFeature.kV8CookieStore_Get_Method = 2451;
  WebFeature.kV8CookieStore_GetAll_Method = 2452;
  WebFeature.kV8CookieStore_GetChangeSubscriptions_Method = 2453;
  WebFeature.kV8CookieStore_Has_Method = 2454;
  WebFeature.kV8CookieStore_Set_Method = 2455;
  WebFeature.kV8CookieStore_SubscribeToChanges_Method = 2456;
  WebFeature.kV8CookieChangeEvent_Changed_AttributeGetter = 2457;
  WebFeature.kV8CookieChangeEvent_Deleted_AttributeGetter = 2458;
  WebFeature.kV8ExtendableCookieChangeEvent_Changed_AttributeGetter = 2459;
  WebFeature.kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter = 2460;
  WebFeature.kShapeOutsideContentBoxDifferentFromMarginBox = 2461;
  WebFeature.kShapeOutsidePaddingBoxDifferentFromMarginBox = 2462;
  WebFeature.kCSSContainLayoutPositionedDescendants = 2463;
  WebFeature.kHTMLFrameSetElementAnonymousNamedGetter = 2464;
  WebFeature.kNumberOfFeatures = WebFeature.kHTMLFrameSetElementAnonymousNamedGetter + 1;

  WebFeature.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 4:
    case 5:
    case 9:
    case 10:
    case 13:
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
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
    case 47:
    case 49:
    case 51:
    case 52:
    case 53:
    case 55:
    case 57:
    case 61:
    case 62:
    case 63:
    case 69:
    case 70:
    case 74:
    case 77:
    case 78:
    case 79:
    case 80:
    case 83:
    case 84:
    case 85:
    case 90:
    case 96:
    case 97:
    case 98:
    case 102:
    case 111:
    case 112:
    case 115:
    case 116:
    case 117:
    case 123:
    case 124:
    case 125:
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
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 190:
    case 191:
    case 192:
    case 193:
    case 196:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 209:
    case 211:
    case 212:
    case 213:
    case 214:
    case 215:
    case 217:
    case 219:
    case 220:
    case 221:
    case 222:
    case 233:
    case 234:
    case 235:
    case 237:
    case 240:
    case 243:
    case 244:
    case 246:
    case 247:
    case 248:
    case 250:
    case 251:
    case 257:
    case 258:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 274:
    case 276:
    case 279:
    case 281:
    case 282:
    case 283:
    case 285:
    case 287:
    case 288:
    case 289:
    case 290:
    case 295:
    case 296:
    case 297:
    case 300:
    case 302:
    case 304:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 318:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
    case 325:
    case 327:
    case 328:
    case 329:
    case 343:
    case 344:
    case 345:
    case 347:
    case 350:
    case 351:
    case 352:
    case 353:
    case 356:
    case 357:
    case 358:
    case 361:
    case 362:
    case 371:
    case 372:
    case 386:
    case 387:
    case 389:
    case 393:
    case 396:
    case 397:
    case 400:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 407:
    case 409:
    case 410:
    case 411:
    case 412:
    case 413:
    case 414:
    case 415:
    case 416:
    case 417:
    case 418:
    case 419:
    case 420:
    case 421:
    case 422:
    case 424:
    case 425:
    case 429:
    case 430:
    case 431:
    case 432:
    case 433:
    case 434:
    case 435:
    case 440:
    case 441:
    case 442:
    case 455:
    case 456:
    case 457:
    case 458:
    case 459:
    case 460:
    case 461:
    case 463:
    case 465:
    case 466:
    case 467:
    case 468:
    case 469:
    case 470:
    case 471:
    case 473:
    case 475:
    case 476:
    case 479:
    case 480:
    case 481:
    case 482:
    case 483:
    case 484:
    case 491:
    case 492:
    case 493:
    case 494:
    case 495:
    case 501:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 507:
    case 508:
    case 509:
    case 510:
    case 519:
    case 520:
    case 521:
    case 522:
    case 523:
    case 524:
    case 525:
    case 529:
    case 530:
    case 531:
    case 532:
    case 533:
    case 534:
    case 535:
    case 538:
    case 539:
    case 540:
    case 541:
    case 542:
    case 545:
    case 546:
    case 547:
    case 548:
    case 549:
    case 550:
    case 551:
    case 552:
    case 553:
    case 554:
    case 555:
    case 556:
    case 557:
    case 558:
    case 559:
    case 560:
    case 561:
    case 562:
    case 563:
    case 564:
    case 565:
    case 569:
    case 570:
    case 571:
    case 572:
    case 573:
    case 574:
    case 576:
    case 578:
    case 581:
    case 582:
    case 583:
    case 584:
    case 585:
    case 586:
    case 587:
    case 588:
    case 589:
    case 590:
    case 591:
    case 592:
    case 593:
    case 599:
    case 603:
    case 606:
    case 607:
    case 608:
    case 609:
    case 610:
    case 611:
    case 612:
    case 613:
    case 614:
    case 615:
    case 616:
    case 617:
    case 618:
    case 628:
    case 629:
    case 630:
    case 631:
    case 632:
    case 633:
    case 634:
    case 635:
    case 636:
    case 637:
    case 638:
    case 639:
    case 640:
    case 641:
    case 642:
    case 643:
    case 645:
    case 646:
    case 647:
    case 648:
    case 649:
    case 650:
    case 651:
    case 661:
    case 662:
    case 663:
    case 664:
    case 665:
    case 666:
    case 667:
    case 668:
    case 669:
    case 670:
    case 671:
    case 672:
    case 673:
    case 674:
    case 675:
    case 676:
    case 677:
    case 679:
    case 680:
    case 685:
    case 686:
    case 687:
    case 688:
    case 689:
    case 691:
    case 694:
    case 695:
    case 696:
    case 697:
    case 698:
    case 699:
    case 700:
    case 701:
    case 707:
    case 710:
    case 711:
    case 712:
    case 713:
    case 714:
    case 715:
    case 716:
    case 717:
    case 718:
    case 719:
    case 720:
    case 721:
    case 722:
    case 723:
    case 724:
    case 725:
    case 726:
    case 727:
    case 728:
    case 729:
    case 730:
    case 731:
    case 732:
    case 733:
    case 734:
    case 735:
    case 736:
    case 737:
    case 738:
    case 739:
    case 740:
    case 741:
    case 742:
    case 743:
    case 744:
    case 745:
    case 748:
    case 750:
    case 758:
    case 759:
    case 760:
    case 761:
    case 762:
    case 763:
    case 764:
    case 765:
    case 766:
    case 767:
    case 768:
    case 770:
    case 772:
    case 773:
    case 778:
    case 780:
    case 781:
    case 782:
    case 783:
    case 784:
    case 785:
    case 786:
    case 787:
    case 791:
    case 798:
    case 799:
    case 801:
    case 802:
    case 804:
    case 806:
    case 807:
    case 808:
    case 809:
    case 810:
    case 811:
    case 812:
    case 813:
    case 816:
    case 817:
    case 818:
    case 830:
    case 831:
    case 832:
    case 835:
    case 836:
    case 837:
    case 838:
    case 843:
    case 845:
    case 850:
    case 851:
    case 853:
    case 854:
    case 855:
    case 856:
    case 857:
    case 858:
    case 859:
    case 860:
    case 861:
    case 862:
    case 863:
    case 864:
    case 865:
    case 866:
    case 867:
    case 868:
    case 869:
    case 870:
    case 871:
    case 873:
    case 876:
    case 879:
    case 880:
    case 881:
    case 882:
    case 883:
    case 884:
    case 885:
    case 892:
    case 893:
    case 894:
    case 895:
    case 896:
    case 897:
    case 898:
    case 899:
    case 900:
    case 901:
    case 902:
    case 903:
    case 904:
    case 905:
    case 906:
    case 907:
    case 908:
    case 909:
    case 910:
    case 911:
    case 912:
    case 913:
    case 914:
    case 915:
    case 917:
    case 918:
    case 919:
    case 921:
    case 922:
    case 923:
    case 924:
    case 926:
    case 927:
    case 928:
    case 929:
    case 930:
    case 931:
    case 932:
    case 933:
    case 934:
    case 936:
    case 937:
    case 938:
    case 939:
    case 940:
    case 946:
    case 947:
    case 948:
    case 949:
    case 950:
    case 951:
    case 952:
    case 953:
    case 954:
    case 955:
    case 956:
    case 959:
    case 960:
    case 961:
    case 962:
    case 963:
    case 966:
    case 967:
    case 968:
    case 969:
    case 970:
    case 971:
    case 972:
    case 973:
    case 974:
    case 975:
    case 976:
    case 977:
    case 978:
    case 979:
    case 980:
    case 981:
    case 982:
    case 983:
    case 987:
    case 988:
    case 989:
    case 990:
    case 993:
    case 994:
    case 997:
    case 998:
    case 999:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1009:
    case 1010:
    case 1011:
    case 1012:
    case 1013:
    case 1014:
    case 1015:
    case 1016:
    case 1017:
    case 1018:
    case 1019:
    case 1020:
    case 1021:
    case 1022:
    case 1023:
    case 1024:
    case 1025:
    case 1027:
    case 1028:
    case 1029:
    case 1030:
    case 1031:
    case 1032:
    case 1033:
    case 1035:
    case 1036:
    case 1037:
    case 1038:
    case 1039:
    case 1040:
    case 1041:
    case 1042:
    case 1044:
    case 1045:
    case 1046:
    case 1047:
    case 1049:
    case 1050:
    case 1051:
    case 1052:
    case 1053:
    case 1054:
    case 1055:
    case 1056:
    case 1057:
    case 1058:
    case 1059:
    case 1060:
    case 1062:
    case 1064:
    case 1065:
    case 1066:
    case 1067:
    case 1068:
    case 1069:
    case 1070:
    case 1071:
    case 1072:
    case 1074:
    case 1075:
    case 1076:
    case 1077:
    case 1078:
    case 1079:
    case 1080:
    case 1081:
    case 1082:
    case 1083:
    case 1084:
    case 1085:
    case 1086:
    case 1087:
    case 1088:
    case 1089:
    case 1090:
    case 1091:
    case 1092:
    case 1093:
    case 1096:
    case 1097:
    case 1098:
    case 1099:
    case 1100:
    case 1101:
    case 1102:
    case 1103:
    case 1104:
    case 1105:
    case 1106:
    case 1107:
    case 1108:
    case 1109:
    case 1110:
    case 1111:
    case 1114:
    case 1115:
    case 1116:
    case 1117:
    case 1118:
    case 1119:
    case 1123:
    case 1124:
    case 1125:
    case 1126:
    case 1127:
    case 1128:
    case 1129:
    case 1130:
    case 1131:
    case 1132:
    case 1133:
    case 1134:
    case 1135:
    case 1136:
    case 1137:
    case 1138:
    case 1139:
    case 1140:
    case 1141:
    case 1142:
    case 1143:
    case 1144:
    case 1145:
    case 1146:
    case 1147:
    case 1148:
    case 1149:
    case 1150:
    case 1151:
    case 1152:
    case 1153:
    case 1156:
    case 1157:
    case 1158:
    case 1159:
    case 1162:
    case 1166:
    case 1168:
    case 1169:
    case 1170:
    case 1171:
    case 1172:
    case 1173:
    case 1174:
    case 1176:
    case 1182:
    case 1183:
    case 1184:
    case 1186:
    case 1188:
    case 1190:
    case 1195:
    case 1196:
    case 1201:
    case 1221:
    case 1224:
    case 1227:
    case 1228:
    case 1229:
    case 1230:
    case 1231:
    case 1233:
    case 1234:
    case 1235:
    case 1236:
    case 1237:
    case 1238:
    case 1239:
    case 1240:
    case 1245:
    case 1246:
    case 1247:
    case 1248:
    case 1249:
    case 1250:
    case 1263:
    case 1265:
    case 1267:
    case 1268:
    case 1269:
    case 1270:
    case 1271:
    case 1272:
    case 1273:
    case 1275:
    case 1277:
    case 1278:
    case 1279:
    case 1280:
    case 1287:
    case 1288:
    case 1289:
    case 1290:
    case 1291:
    case 1292:
    case 1293:
    case 1294:
    case 1297:
    case 1298:
    case 1299:
    case 1300:
    case 1301:
    case 1302:
    case 1303:
    case 1304:
    case 1305:
    case 1306:
    case 1307:
    case 1308:
    case 1309:
    case 1320:
    case 1321:
    case 1322:
    case 1325:
    case 1326:
    case 1327:
    case 1328:
    case 1329:
    case 1330:
    case 1331:
    case 1332:
    case 1333:
    case 1334:
    case 1335:
    case 1336:
    case 1337:
    case 1338:
    case 1342:
    case 1343:
    case 1344:
    case 1345:
    case 1346:
    case 1347:
    case 1351:
    case 1352:
    case 1353:
    case 1354:
    case 1355:
    case 1356:
    case 1357:
    case 1358:
    case 1359:
    case 1360:
    case 1361:
    case 1362:
    case 1363:
    case 1364:
    case 1365:
    case 1366:
    case 1367:
    case 1368:
    case 1369:
    case 1370:
    case 1371:
    case 1375:
    case 1376:
    case 1377:
    case 1378:
    case 1383:
    case 1384:
    case 1385:
    case 1386:
    case 1389:
    case 1390:
    case 1391:
    case 1392:
    case 1393:
    case 1394:
    case 1395:
    case 1396:
    case 1397:
    case 1398:
    case 1400:
    case 1401:
    case 1402:
    case 1403:
    case 1404:
    case 1405:
    case 1406:
    case 1407:
    case 1408:
    case 1409:
    case 1410:
    case 1411:
    case 1412:
    case 1413:
    case 1414:
    case 1415:
    case 1416:
    case 1417:
    case 1418:
    case 1419:
    case 1420:
    case 1421:
    case 1422:
    case 1423:
    case 1424:
    case 1425:
    case 1426:
    case 1427:
    case 1428:
    case 1429:
    case 1430:
    case 1431:
    case 1432:
    case 1433:
    case 1434:
    case 1435:
    case 1436:
    case 1437:
    case 1438:
    case 1439:
    case 1440:
    case 1441:
    case 1442:
    case 1443:
    case 1444:
    case 1445:
    case 1446:
    case 1447:
    case 1448:
    case 1449:
    case 1450:
    case 1451:
    case 1452:
    case 1453:
    case 1454:
    case 1455:
    case 1456:
    case 1457:
    case 1458:
    case 1459:
    case 1460:
    case 1461:
    case 1462:
    case 1463:
    case 1464:
    case 1465:
    case 1466:
    case 1467:
    case 1468:
    case 1469:
    case 1470:
    case 1471:
    case 1472:
    case 1473:
    case 1474:
    case 1475:
    case 1476:
    case 1477:
    case 1478:
    case 1479:
    case 1480:
    case 1481:
    case 1482:
    case 1483:
    case 1484:
    case 1485:
    case 1486:
    case 1487:
    case 1488:
    case 1489:
    case 1490:
    case 1491:
    case 1492:
    case 1493:
    case 1494:
    case 1495:
    case 1496:
    case 1497:
    case 1498:
    case 1499:
    case 1500:
    case 1501:
    case 1502:
    case 1503:
    case 1504:
    case 1505:
    case 1506:
    case 1507:
    case 1508:
    case 1509:
    case 1519:
    case 1520:
    case 1521:
    case 1522:
    case 1523:
    case 1524:
    case 1525:
    case 1526:
    case 1527:
    case 1528:
    case 1529:
    case 1530:
    case 1531:
    case 1532:
    case 1533:
    case 1534:
    case 1535:
    case 1536:
    case 1539:
    case 1540:
    case 1541:
    case 1542:
    case 1543:
    case 1544:
    case 1545:
    case 1546:
    case 1547:
    case 1548:
    case 1549:
    case 1550:
    case 1551:
    case 1553:
    case 1554:
    case 1555:
    case 1556:
    case 1558:
    case 1581:
    case 1582:
    case 1583:
    case 1584:
    case 1585:
    case 1586:
    case 1589:
    case 1590:
    case 1591:
    case 1592:
    case 1593:
    case 1594:
    case 1595:
    case 1596:
    case 1597:
    case 1598:
    case 1599:
    case 1600:
    case 1601:
    case 1602:
    case 1603:
    case 1604:
    case 1605:
    case 1606:
    case 1615:
    case 1617:
    case 1618:
    case 1619:
    case 1620:
    case 1621:
    case 1622:
    case 1623:
    case 1624:
    case 1625:
    case 1626:
    case 1627:
    case 1628:
    case 1629:
    case 1630:
    case 1631:
    case 1632:
    case 1633:
    case 1634:
    case 1635:
    case 1636:
    case 1638:
    case 1639:
    case 1640:
    case 1641:
    case 1642:
    case 1643:
    case 1644:
    case 1646:
    case 1648:
    case 1649:
    case 1650:
    case 1651:
    case 1652:
    case 1653:
    case 1654:
    case 1656:
    case 1657:
    case 1658:
    case 1659:
    case 1660:
    case 1661:
    case 1662:
    case 1664:
    case 1665:
    case 1666:
    case 1667:
    case 1668:
    case 1669:
    case 1670:
    case 1671:
    case 1672:
    case 1673:
    case 1674:
    case 1675:
    case 1676:
    case 1677:
    case 1678:
    case 1679:
    case 1680:
    case 1681:
    case 1682:
    case 1683:
    case 1684:
    case 1685:
    case 1686:
    case 1687:
    case 1688:
    case 1689:
    case 1690:
    case 1691:
    case 1692:
    case 1693:
    case 1696:
    case 1697:
    case 1698:
    case 1699:
    case 1700:
    case 1701:
    case 1702:
    case 1703:
    case 1704:
    case 1705:
    case 1706:
    case 1707:
    case 1708:
    case 1709:
    case 1710:
    case 1711:
    case 1712:
    case 1713:
    case 1714:
    case 1715:
    case 1716:
    case 1717:
    case 1718:
    case 1719:
    case 1720:
    case 1721:
    case 1722:
    case 1723:
    case 1724:
    case 1725:
    case 1726:
    case 1727:
    case 1728:
    case 1729:
    case 1730:
    case 1731:
    case 1732:
    case 1733:
    case 1734:
    case 1735:
    case 1736:
    case 1737:
    case 1738:
    case 1739:
    case 1740:
    case 1741:
    case 1742:
    case 1743:
    case 1744:
    case 1745:
    case 1746:
    case 1747:
    case 1748:
    case 1749:
    case 1750:
    case 1751:
    case 1752:
    case 1753:
    case 1754:
    case 1755:
    case 1756:
    case 1757:
    case 1758:
    case 1759:
    case 1760:
    case 1761:
    case 1762:
    case 1763:
    case 1764:
    case 1765:
    case 1766:
    case 1767:
    case 1777:
    case 1778:
    case 1779:
    case 1780:
    case 1781:
    case 1782:
    case 1783:
    case 1784:
    case 1785:
    case 1786:
    case 1787:
    case 1788:
    case 1789:
    case 1790:
    case 1791:
    case 1792:
    case 1793:
    case 1794:
    case 1795:
    case 1796:
    case 1797:
    case 1798:
    case 1799:
    case 1800:
    case 1802:
    case 1803:
    case 1804:
    case 1805:
    case 1806:
    case 1807:
    case 1808:
    case 1809:
    case 1810:
    case 1811:
    case 1812:
    case 1815:
    case 1816:
    case 1817:
    case 1819:
    case 1820:
    case 1821:
    case 1822:
    case 1823:
    case 1824:
    case 1825:
    case 1826:
    case 1827:
    case 1828:
    case 1830:
    case 1831:
    case 1832:
    case 1833:
    case 1834:
    case 1835:
    case 1836:
    case 1837:
    case 1838:
    case 1839:
    case 1840:
    case 1841:
    case 1842:
    case 1843:
    case 1844:
    case 1845:
    case 1846:
    case 1847:
    case 1848:
    case 1849:
    case 1850:
    case 1851:
    case 1852:
    case 1853:
    case 1854:
    case 1855:
    case 1856:
    case 1857:
    case 1861:
    case 1862:
    case 1863:
    case 1864:
    case 1865:
    case 1866:
    case 1867:
    case 1868:
    case 1869:
    case 1870:
    case 1871:
    case 1872:
    case 1873:
    case 1874:
    case 1875:
    case 1876:
    case 1877:
    case 1878:
    case 1879:
    case 1880:
    case 1881:
    case 1882:
    case 1883:
    case 1884:
    case 1885:
    case 1886:
    case 1887:
    case 1888:
    case 1889:
    case 1890:
    case 1891:
    case 1892:
    case 1893:
    case 1894:
    case 1895:
    case 1896:
    case 1897:
    case 1898:
    case 1899:
    case 1900:
    case 1901:
    case 1902:
    case 1903:
    case 1904:
    case 1905:
    case 1906:
    case 1907:
    case 1908:
    case 1909:
    case 1910:
    case 1911:
    case 1912:
    case 1913:
    case 1914:
    case 1916:
    case 1918:
    case 1919:
    case 1920:
    case 1921:
    case 1922:
    case 1923:
    case 1924:
    case 1925:
    case 1926:
    case 1927:
    case 1928:
    case 1929:
    case 1930:
    case 1931:
    case 1932:
    case 1933:
    case 1934:
    case 1935:
    case 1936:
    case 1937:
    case 1938:
    case 1939:
    case 1940:
    case 1941:
    case 1942:
    case 1943:
    case 1944:
    case 1945:
    case 1946:
    case 1947:
    case 1948:
    case 1949:
    case 1950:
    case 1951:
    case 1952:
    case 1953:
    case 1954:
    case 1955:
    case 1956:
    case 1957:
    case 1958:
    case 1959:
    case 1960:
    case 1961:
    case 1962:
    case 1963:
    case 1964:
    case 1965:
    case 1967:
    case 1968:
    case 1969:
    case 1970:
    case 1971:
    case 1972:
    case 1973:
    case 1974:
    case 1975:
    case 1976:
    case 1977:
    case 1978:
    case 1979:
    case 1980:
    case 1981:
    case 1982:
    case 1984:
    case 1989:
    case 1990:
    case 1991:
    case 1992:
    case 1993:
    case 1995:
    case 1996:
    case 1997:
    case 2000:
    case 2001:
    case 2007:
    case 2008:
    case 2010:
    case 2012:
    case 2013:
    case 2014:
    case 2015:
    case 2016:
    case 2017:
    case 2018:
    case 2019:
    case 2020:
    case 2021:
    case 2022:
    case 2023:
    case 2024:
    case 2025:
    case 2026:
    case 2027:
    case 2028:
    case 2029:
    case 2030:
    case 2031:
    case 2032:
    case 2033:
    case 2034:
    case 2035:
    case 2036:
    case 2037:
    case 2038:
    case 2039:
    case 2040:
    case 2041:
    case 2042:
    case 2043:
    case 2044:
    case 2045:
    case 2046:
    case 2047:
    case 2048:
    case 2049:
    case 2050:
    case 2051:
    case 2052:
    case 2053:
    case 2054:
    case 2055:
    case 2056:
    case 2057:
    case 2058:
    case 2059:
    case 2060:
    case 2061:
    case 2062:
    case 2063:
    case 2064:
    case 2065:
    case 2066:
    case 2067:
    case 2069:
    case 2070:
    case 2071:
    case 2072:
    case 2073:
    case 2074:
    case 2075:
    case 2076:
    case 2077:
    case 2078:
    case 2079:
    case 2080:
    case 2081:
    case 2082:
    case 2083:
    case 2084:
    case 2085:
    case 2086:
    case 2087:
    case 2088:
    case 2089:
    case 2090:
    case 2091:
    case 2092:
    case 2093:
    case 2094:
    case 2095:
    case 2096:
    case 2097:
    case 2098:
    case 2099:
    case 2100:
    case 2101:
    case 2102:
    case 2103:
    case 2104:
    case 2105:
    case 2106:
    case 2107:
    case 2108:
    case 2109:
    case 2110:
    case 2111:
    case 2112:
    case 2113:
    case 2114:
    case 2115:
    case 2116:
    case 2117:
    case 2118:
    case 2119:
    case 2120:
    case 2121:
    case 2122:
    case 2123:
    case 2124:
    case 2125:
    case 2126:
    case 2127:
    case 2128:
    case 2129:
    case 2130:
    case 2131:
    case 2132:
    case 2133:
    case 2134:
    case 2135:
    case 2136:
    case 2137:
    case 2138:
    case 2139:
    case 2140:
    case 2141:
    case 2142:
    case 2143:
    case 2144:
    case 2145:
    case 2146:
    case 2147:
    case 2157:
    case 2158:
    case 2159:
    case 2160:
    case 2162:
    case 2163:
    case 2164:
    case 2165:
    case 2166:
    case 2167:
    case 2168:
    case 2169:
    case 2170:
    case 2171:
    case 2172:
    case 2173:
    case 2174:
    case 2175:
    case 2176:
    case 2177:
    case 2178:
    case 2179:
    case 2180:
    case 2181:
    case 2182:
    case 2183:
    case 2184:
    case 2185:
    case 2186:
    case 2188:
    case 2189:
    case 2190:
    case 2191:
    case 2192:
    case 2194:
    case 2195:
    case 2196:
    case 2197:
    case 2198:
    case 2199:
    case 2200:
    case 2201:
    case 2203:
    case 2204:
    case 2205:
    case 2206:
    case 2207:
    case 2208:
    case 2209:
    case 2210:
    case 2214:
    case 2215:
    case 2216:
    case 2217:
    case 2218:
    case 2219:
    case 2220:
    case 2221:
    case 2222:
    case 2223:
    case 2224:
    case 2225:
    case 2226:
    case 2227:
    case 2228:
    case 2229:
    case 2230:
    case 2231:
    case 2232:
    case 2235:
    case 2236:
    case 2237:
    case 2238:
    case 2239:
    case 2240:
    case 2241:
    case 2242:
    case 2243:
    case 2244:
    case 2245:
    case 2246:
    case 2247:
    case 2248:
    case 2249:
    case 2250:
    case 2251:
    case 2252:
    case 2253:
    case 2254:
    case 2255:
    case 2256:
    case 2257:
    case 2258:
    case 2259:
    case 2260:
    case 2261:
    case 2262:
    case 2263:
    case 2264:
    case 2265:
    case 2266:
    case 2267:
    case 2268:
    case 2269:
    case 2270:
    case 2271:
    case 2272:
    case 2273:
    case 2274:
    case 2275:
    case 2276:
    case 2277:
    case 2278:
    case 2279:
    case 2280:
    case 2281:
    case 2282:
    case 2283:
    case 2284:
    case 2285:
    case 2286:
    case 2287:
    case 2288:
    case 2289:
    case 2290:
    case 2291:
    case 2292:
    case 2293:
    case 2294:
    case 2295:
    case 2296:
    case 2297:
    case 2298:
    case 2299:
    case 2300:
    case 2301:
    case 2302:
    case 2303:
    case 2304:
    case 2305:
    case 2306:
    case 2307:
    case 2308:
    case 2309:
    case 2310:
    case 2311:
    case 2312:
    case 2313:
    case 2314:
    case 2315:
    case 2316:
    case 2317:
    case 2318:
    case 2319:
    case 2320:
    case 2321:
    case 2322:
    case 2323:
    case 2324:
    case 2325:
    case 2326:
    case 2327:
    case 2328:
    case 2329:
    case 2330:
    case 2331:
    case 2332:
    case 2333:
    case 2334:
    case 2335:
    case 2336:
    case 2337:
    case 2338:
    case 2339:
    case 2340:
    case 2341:
    case 2342:
    case 2343:
    case 2344:
    case 2345:
    case 2346:
    case 2347:
    case 2348:
    case 2349:
    case 2350:
    case 2351:
    case 2352:
    case 2353:
    case 2354:
    case 2355:
    case 2356:
    case 2357:
    case 2358:
    case 2359:
    case 2360:
    case 2361:
    case 2362:
    case 2363:
    case 2364:
    case 2365:
    case 2366:
    case 2367:
    case 2368:
    case 2369:
    case 2370:
    case 2371:
    case 2372:
    case 2373:
    case 2374:
    case 2375:
    case 2376:
    case 2377:
    case 2378:
    case 2379:
    case 2380:
    case 2381:
    case 2382:
    case 2383:
    case 2384:
    case 2385:
    case 2386:
    case 2387:
    case 2388:
    case 2389:
    case 2390:
    case 2391:
    case 2392:
    case 2393:
    case 2394:
    case 2395:
    case 2396:
    case 2397:
    case 2398:
    case 2399:
    case 2400:
    case 2401:
    case 2402:
    case 2403:
    case 2404:
    case 2405:
    case 2406:
    case 2407:
    case 2408:
    case 2409:
    case 2410:
    case 2411:
    case 2412:
    case 2413:
    case 2414:
    case 2415:
    case 2416:
    case 2417:
    case 2418:
    case 2419:
    case 2420:
    case 2421:
    case 2422:
    case 2423:
    case 2424:
    case 2425:
    case 2426:
    case 2427:
    case 2428:
    case 2429:
    case 2430:
    case 2431:
    case 2432:
    case 2433:
    case 2434:
    case 2436:
    case 2437:
    case 2438:
    case 2439:
    case 2440:
    case 2441:
    case 2442:
    case 2443:
    case 2444:
    case 2445:
    case 2446:
    case 2447:
    case 2448:
    case 2449:
    case 2450:
    case 2451:
    case 2452:
    case 2453:
    case 2454:
    case 2455:
    case 2456:
    case 2457:
    case 2458:
    case 2459:
    case 2460:
    case 2461:
    case 2462:
    case 2463:
    case 2464:
    case 2465:
      return true;
    }
    return false;
  };

  WebFeature.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.WebFeature = WebFeature;
})();