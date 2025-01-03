// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8Internals_h
#define V8Internals_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internals.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8Internals {
  STATIC_ONLY(V8Internals);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static Internals* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<Internals>();
  }
  static Internals* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instanceObject,
      v8::Local<v8::Object> prototypeObject,
      v8::Local<v8::Function> interfaceObject,
      v8::Local<v8::FunctionTemplate> interfaceTemplate);

  static void UpdateWrapperTypeInfo(
      InstallTemplateFunction,
      InstallRuntimeEnabledFeaturesFunction,
      InstallRuntimeEnabledFeaturesOnTemplateFunction,
      InstallConditionalFeaturesFunction);
  static void installV8InternalsTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);

  // Callback functions

  static void pagePopupWindowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void settingsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void runtimeFlagsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void workerThreadCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cursorUpdatePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void fakeMouseMovePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visibleSelectionAnchorNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visibleSelectionAnchorOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visibleSelectionFocusNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visibleSelectionFocusOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void textAffinityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void unscopableAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void observeGCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void elementLayoutTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isPreloadedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isPreloadedByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isLoadingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isLoadingFromMemoryCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getResourcePriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getResourceHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void computedStyleIncludingVisitedInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void createUserAgentShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setBrowserControlsStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setBrowserControlsShownRatioMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void effectiveRootScrollerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shadowRootTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hasShadowInsertionPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hasContentElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void countElementShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shadowPseudoIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isValidContentSelectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void treeScopeRootNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void parentTreeScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void compareTreeScopePositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void updateStyleAndReturnAffectedElementCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void needsLayoutCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hitTestCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hitTestCacheHitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void elementFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void clearHitTestCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void innerEditorElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void disableCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void disableCSSAdditiveAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void advanceImageAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nextSiblingInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void firstChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lastChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nextInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void previousInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visiblePlaceholderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isValidationMessageVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectColorInColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void endColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hasAutofocusRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void formControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFormControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void absoluteCaretBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void boundingBoxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void activeMarkerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markerRangeForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markerDescriptionForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markerBackgroundColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markerUnderlineColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void addTextMatchMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void addCompositionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void addActiveSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void addSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextMatchMarkersActiveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMarkedTextMatchesAreHighlightedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFrameViewPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void viewportAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void elementShouldAutoCompleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void suggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSuggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAutofilledValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setEditingValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAutofilledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rangeFromLocationAndLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void locationFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lengthFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void rangeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchPositionAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchNodeAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchPositionAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchNodeAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lastSpellCheckRequestSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void lastSpellCheckProcessedSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void cancelCurrentSpellCheckRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void idleTimeSpellCheckerStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void runIdleTimeSpellCheckerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void userPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setUserPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaKeysCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaKeySessionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pausableObjectCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void wheelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scrollEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchStartOrMoveEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchEndOrCancelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pointerEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void touchEventTargetLayerRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void executeCommandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void htmlNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void htmlTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void svgNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void svgTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nodesFromRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hasSpellingMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void hasGrammarMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void replaceMisspelledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canHyphenateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMockHyphenationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void toggleOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void numberOfScrollableAreasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isPageBoxVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void layerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void elementLayerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scrollsWithRespectToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void scrollingStateTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mainThreadScrollingReasonsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nonFastScrollableRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markGestureScrollRegionDirtyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void evictAllResourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void numberOfLiveNodesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void numberOfLiveDocumentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void counterValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pageNumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void shortcutIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void allIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void numberOfPagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pagePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pageSizeAndMarginsInPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void pageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPageScaleFactorLimitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setIsCursorVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void effectivePreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaPlayerRemoteRouteAvailabilityChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void mediaPlayerPlayingRemotelyChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPersistentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceStaleStateForMediaElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isMediaElementSuspendedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMediaControlsTestModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void registerURLSchemeAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void removeURLSchemeRegisteredAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void typeConversionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getReferencedFilePathsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void startTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void stopTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void updateLayoutIgnorePendingStylesheetsAndRunPostLayoutTasksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceFullRepaintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void draggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nonDraggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getCurrentCursorInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void markerTextForListItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void deserializeBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void serializeObjectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void deserializeBufferContainingWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void serializeWithInlineWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getImageSourceURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceImageReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectMenuListTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isSelectPopupVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectPopupItemStyleIsRtlMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectPopupItemStyleFontHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void resetTypeAheadSessionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getSelectionInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectionBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void loseSharedGraphicsContext3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceCompositingUpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setZoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setShouldRevealPasswordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void createResolvedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void createRejectedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void addOneToPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void promiseCheckMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void promiseCheckWithoutExceptionStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void promiseCheckRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void promiseCheckOverloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setValueForUserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFocusedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setInitialFocusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ignoreLayoutWithPendingStylesheetsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSaveDataEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void clearNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void countHitRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isInCanvasFontCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void canvasFontCacheMaxFontsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void dictionaryTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void recordTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void sequenceTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void unionTypesTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void callbackFunctionTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setScrollChainMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void forceBlinkGCWithoutV8GCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectedHTMLForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void selectedTextForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setVisualViewportOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visualViewportHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visualViewportWidthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visualViewportScrollXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visualViewportScrollYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void magnifyScaleAroundAnchorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isAnimatedCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getCSSPropertyLonghandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getCSSPropertyShorthandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getCSSPropertyAliasesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void observeUseCounterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void unscopableMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void focusRingRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void outlineRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setCapsLockStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setScrollbarVisibilityInScrollableAreaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void monotonicTimeToZeroBasedDocumentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getProgrammaticScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void visualRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void originTrialsTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void crashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void evaluateInInspectorOverlayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setIsLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void isLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void supportedTextEncodingLabelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void simulateRasterUnderInvalidationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BypassLongCompileThresholdOnceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void getInternalResponseURLListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  static void indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  static void indexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor&, const v8::PropertyCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
  static InstallRuntimeEnabledFeaturesOnTemplateFunction
  install_runtime_enabled_features_on_template_function_;

 private:
  static InstallTemplateFunction installV8InternalsTemplateFunction;
};

template <>
struct NativeValueTraits<Internals> : public NativeValueTraitsBase<Internals> {
  static Internals* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static Internals* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<Internals> {
  typedef V8Internals Type;
};

}  // namespace blink

#endif  // V8Internals_h
